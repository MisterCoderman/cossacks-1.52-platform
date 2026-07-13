#include "recomp.h"

/* thunk_FUN_10003da0 @ 0x109c1005 (5 bytes, 1 insns) */
void f_109c1005(void) {
  FTRACE(0x109c1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c1005 jmp 0x109c3da0 */
  f_109c3da0(); return;
}

/* OnInit @ 0x109c100a (5 bytes, 1 insns) */
void f_109c100a(void) {
  FTRACE(0x109c100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c100a jmp 0x109c10a0 */
  f_109c10a0(); return;
}

/* thunk_FUN_10003df0 @ 0x109c100f (5 bytes, 1 insns) */
void f_109c100f(void) {
  FTRACE(0x109c100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c100f jmp 0x109c3df0 */
  f_109c3df0(); return;
}

/* thunk_FUN_10001040 @ 0x109c1014 (5 bytes, 1 insns) */
void f_109c1014(void) {
  FTRACE(0x109c1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c1014 jmp 0x109c1040 */
  f_109c1040(); return;
}

/* ProcessScenary @ 0x109c1019 (5 bytes, 1 insns) */
void f_109c1019(void) {
  FTRACE(0x109c1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c1019 jmp 0x109c1a30 */
  f_109c1a30(); return;
}

/* FUN_10001040 @ 0x109c1040 (67 bytes, 26 insns) */
void f_109c1040(void) {
  FTRACE(0x109c1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c1040 push ebp */
  push32((uint32_t)(EBP));
  /* 109c1041 mov ebp, esp */
  EBP = (ESP);
  /* 109c1043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c1046 push ebx */
  push32((uint32_t)(EBX));
  /* 109c1047 push esi */
  push32((uint32_t)(ESI));
  /* 109c1048 push edi */
  push32((uint32_t)(EDI));
  /* 109c1049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 109c104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 109c1051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 109c1056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109c1058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1062 je 0x109c1066 */
  if (C.zf) goto L_109c1066;
  /* 109c1064 jmp 0x109c106b */
  goto L_109c106b;
L_109c1066:;
  /* 109c1066 call 0x109c100a */
  push32(0x109c106bu); f_109c100a();
L_109c106b:;
  /* 109c106b mov eax, 1 */
  EAX = (0x1u);
  /* 109c1070 pop edi */
  EDI = (pop32());
  /* 109c1071 pop esi */
  ESI = (pop32());
  /* 109c1072 pop ebx */
  EBX = (pop32());
  /* 109c1073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1078 call 0x109c3f30 */
  push32(0x109c107du); f_109c3f30();
  /* 109c107d mov esp, ebp */
  ESP = (EBP);
  /* 109c107f pop ebp */
  EBP = (pop32());
  /* 109c1080 ret 0xc */
  ESPCHK(0x109c1040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x109c10a0 (1956 bytes, 509 insns) */
void f_109c10a0(void) {
  FTRACE(0x109c10a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c10a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c10a1 mov ebp, esp */
  EBP = (ESP);
  /* 109c10a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c10a6 push ebx */
  push32((uint32_t)(EBX));
  /* 109c10a7 push esi */
  push32((uint32_t)(ESI));
  /* 109c10a8 push edi */
  push32((uint32_t)(EDI));
  /* 109c10a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 109c10ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 109c10b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 109c10b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109c10b8 mov esi, esp */
  ESI = (ESP);
  /* 109c10ba push 0x109ec280 */
  push32((uint32_t)(0x109ec280u));
  /* 109c10bf push 0x109f14c8 */
  push32((uint32_t)(0x109f14c8u));
  /* 109c10c4 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c10cau);
  /* 109c10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c10cf call 0x109c3f30 */
  push32(0x109c10d4u); f_109c3f30();
  /* 109c10d4 mov esi, esp */
  ESI = (ESP);
  /* 109c10d6 push 0x109ec278 */
  push32((uint32_t)(0x109ec278u));
  /* 109c10db push 0x109f14b0 */
  push32((uint32_t)(0x109f14b0u));
  /* 109c10e0 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c10e6u);
  /* 109c10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c10eb call 0x109c3f30 */
  push32(0x109c10f0u); f_109c3f30();
  /* 109c10f0 mov esi, esp */
  ESI = (ESP);
  /* 109c10f2 push 0x109ec270 */
  push32((uint32_t)(0x109ec270u));
  /* 109c10f7 push 0x109f14b8 */
  push32((uint32_t)(0x109f14b8u));
  /* 109c10fc call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c1102u);
  /* 109c1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1107 call 0x109c3f30 */
  push32(0x109c110cu); f_109c3f30();
  /* 109c110c mov esi, esp */
  ESI = (ESP);
  /* 109c110e push 0x109ec268 */
  push32((uint32_t)(0x109ec268u));
  /* 109c1113 push 0x109f14a0 */
  push32((uint32_t)(0x109f14a0u));
  /* 109c1118 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c111eu);
  /* 109c111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1123 call 0x109c3f30 */
  push32(0x109c1128u); f_109c3f30();
  /* 109c1128 mov esi, esp */
  ESI = (ESP);
  /* 109c112a push 0x109ec260 */
  push32((uint32_t)(0x109ec260u));
  /* 109c112f push 0x109f14d0 */
  push32((uint32_t)(0x109f14d0u));
  /* 109c1134 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c113au);
  /* 109c113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c113f call 0x109c3f30 */
  push32(0x109c1144u); f_109c3f30();
  /* 109c1144 mov esi, esp */
  ESI = (ESP);
  /* 109c1146 push 0x109ec258 */
  push32((uint32_t)(0x109ec258u));
  /* 109c114b push 0x109f14d8 */
  push32((uint32_t)(0x109f14d8u));
  /* 109c1150 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c1156u);
  /* 109c1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c115b call 0x109c3f30 */
  push32(0x109c1160u); f_109c3f30();
  /* 109c1160 mov esi, esp */
  ESI = (ESP);
  /* 109c1162 push 0x109ec250 */
  push32((uint32_t)(0x109ec250u));
  /* 109c1167 push 0x109f14e0 */
  push32((uint32_t)(0x109f14e0u));
  /* 109c116c call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c1172u);
  /* 109c1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1177 call 0x109c3f30 */
  push32(0x109c117cu); f_109c3f30();
  /* 109c117c mov esi, esp */
  ESI = (ESP);
  /* 109c117e push 0x109ec248 */
  push32((uint32_t)(0x109ec248u));
  /* 109c1183 push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c1188 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c118eu);
  /* 109c118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1193 call 0x109c3f30 */
  push32(0x109c1198u); f_109c3f30();
  /* 109c1198 mov esi, esp */
  ESI = (ESP);
  /* 109c119a push 0x109ec240 */
  push32((uint32_t)(0x109ec240u));
  /* 109c119f push 0x109f14f8 */
  push32((uint32_t)(0x109f14f8u));
  /* 109c11a4 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c11aau);
  /* 109c11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c11af call 0x109c3f30 */
  push32(0x109c11b4u); f_109c3f30();
  /* 109c11b4 mov esi, esp */
  ESI = (ESP);
  /* 109c11b6 push 0x109ec238 */
  push32((uint32_t)(0x109ec238u));
  /* 109c11bb push 0x109f1500 */
  push32((uint32_t)(0x109f1500u));
  /* 109c11c0 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c11c6u);
  /* 109c11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c11cb call 0x109c3f30 */
  push32(0x109c11d0u); f_109c3f30();
  /* 109c11d0 mov esi, esp */
  ESI = (ESP);
  /* 109c11d2 push 0x109ec230 */
  push32((uint32_t)(0x109ec230u));
  /* 109c11d7 push 0x109f1508 */
  push32((uint32_t)(0x109f1508u));
  /* 109c11dc call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c11e2u);
  /* 109c11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c11e7 call 0x109c3f30 */
  push32(0x109c11ecu); f_109c3f30();
  /* 109c11ec mov esi, esp */
  ESI = (ESP);
  /* 109c11ee push 0x109ec228 */
  push32((uint32_t)(0x109ec228u));
  /* 109c11f3 push 0x109f1460 */
  push32((uint32_t)(0x109f1460u));
  /* 109c11f8 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c11feu);
  /* 109c11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1203 call 0x109c3f30 */
  push32(0x109c1208u); f_109c3f30();
  /* 109c1208 mov esi, esp */
  ESI = (ESP);
  /* 109c120a push 0x109ec220 */
  push32((uint32_t)(0x109ec220u));
  /* 109c120f push 0x109f1458 */
  push32((uint32_t)(0x109f1458u));
  /* 109c1214 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c121au);
  /* 109c121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c121f call 0x109c3f30 */
  push32(0x109c1224u); f_109c3f30();
  /* 109c1224 mov esi, esp */
  ESI = (ESP);
  /* 109c1226 push 0x109ec218 */
  push32((uint32_t)(0x109ec218u));
  /* 109c122b push 0x109f1470 */
  push32((uint32_t)(0x109f1470u));
  /* 109c1230 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c1236u);
  /* 109c1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c123b call 0x109c3f30 */
  push32(0x109c1240u); f_109c3f30();
  /* 109c1240 mov esi, esp */
  ESI = (ESP);
  /* 109c1242 push 0x109ec210 */
  push32((uint32_t)(0x109ec210u));
  /* 109c1247 push 0x109f1468 */
  push32((uint32_t)(0x109f1468u));
  /* 109c124c call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c1252u);
  /* 109c1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1257 call 0x109c3f30 */
  push32(0x109c125cu); f_109c3f30();
  /* 109c125c mov esi, esp */
  ESI = (ESP);
  /* 109c125e push 0x109ec208 */
  push32((uint32_t)(0x109ec208u));
  /* 109c1263 push 0x109f1480 */
  push32((uint32_t)(0x109f1480u));
  /* 109c1268 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c126eu);
  /* 109c126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1273 call 0x109c3f30 */
  push32(0x109c1278u); f_109c3f30();
  /* 109c1278 mov esi, esp */
  ESI = (ESP);
  /* 109c127a push 0x109ec200 */
  push32((uint32_t)(0x109ec200u));
  /* 109c127f push 0x109f1478 */
  push32((uint32_t)(0x109f1478u));
  /* 109c1284 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c128au);
  /* 109c128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c128f call 0x109c3f30 */
  push32(0x109c1294u); f_109c3f30();
  /* 109c1294 mov esi, esp */
  ESI = (ESP);
  /* 109c1296 push 0x109ec1f8 */
  push32((uint32_t)(0x109ec1f8u));
  /* 109c129b push 0x109f1490 */
  push32((uint32_t)(0x109f1490u));
  /* 109c12a0 call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c12a6u);
  /* 109c12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c12ab call 0x109c3f30 */
  push32(0x109c12b0u); f_109c3f30();
  /* 109c12b0 mov esi, esp */
  ESI = (ESP);
  /* 109c12b2 push 0x109ec1f0 */
  push32((uint32_t)(0x109ec1f0u));
  /* 109c12b7 push 0x109f1488 */
  push32((uint32_t)(0x109f1488u));
  /* 109c12bc call dword ptr [0x109f4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4498))), 0x109c12c2u);
  /* 109c12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c12c7 call 0x109c3f30 */
  push32(0x109c12ccu); f_109c3f30();
  /* 109c12cc mov esi, esp */
  ESI = (ESP);
  /* 109c12ce push 0x109ec1e8 */
  push32((uint32_t)(0x109ec1e8u));
  /* 109c12d3 push 0x109f1410 */
  push32((uint32_t)(0x109f1410u));
  /* 109c12d8 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c12deu);
  /* 109c12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c12e3 call 0x109c3f30 */
  push32(0x109c12e8u); f_109c3f30();
  /* 109c12e8 mov esi, esp */
  ESI = (ESP);
  /* 109c12ea push 0x109ec1dc */
  push32((uint32_t)(0x109ec1dcu));
  /* 109c12ef push 0x109f15e8 */
  push32((uint32_t)(0x109f15e8u));
  /* 109c12f4 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c12fau);
  /* 109c12fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c12fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c12ff call 0x109c3f30 */
  push32(0x109c1304u); f_109c3f30();
  /* 109c1304 mov esi, esp */
  ESI = (ESP);
  /* 109c1306 push 0x109ec1d0 */
  push32((uint32_t)(0x109ec1d0u));
  /* 109c130b push 0x109f15f0 */
  push32((uint32_t)(0x109f15f0u));
  /* 109c1310 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c1316u);
  /* 109c1316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c131b call 0x109c3f30 */
  push32(0x109c1320u); f_109c3f30();
  /* 109c1320 mov esi, esp */
  ESI = (ESP);
  /* 109c1322 push 0x109ec1c4 */
  push32((uint32_t)(0x109ec1c4u));
  /* 109c1327 push 0x109f15e0 */
  push32((uint32_t)(0x109f15e0u));
  /* 109c132c call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c1332u);
  /* 109c1332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1337 call 0x109c3f30 */
  push32(0x109c133cu); f_109c3f30();
  /* 109c133c mov esi, esp */
  ESI = (ESP);
  /* 109c133e push 0x109ec1bc */
  push32((uint32_t)(0x109ec1bcu));
  /* 109c1343 push 0x109f1418 */
  push32((uint32_t)(0x109f1418u));
  /* 109c1348 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c134eu);
  /* 109c134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1353 call 0x109c3f30 */
  push32(0x109c1358u); f_109c3f30();
  /* 109c1358 mov esi, esp */
  ESI = (ESP);
  /* 109c135a push 0x109ec1b4 */
  push32((uint32_t)(0x109ec1b4u));
  /* 109c135f push 0x109f1428 */
  push32((uint32_t)(0x109f1428u));
  /* 109c1364 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c136au);
  /* 109c136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c136f call 0x109c3f30 */
  push32(0x109c1374u); f_109c3f30();
  /* 109c1374 mov esi, esp */
  ESI = (ESP);
  /* 109c1376 push 0x109ec1ac */
  push32((uint32_t)(0x109ec1acu));
  /* 109c137b push 0x109f1420 */
  push32((uint32_t)(0x109f1420u));
  /* 109c1380 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c1386u);
  /* 109c1386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c138b call 0x109c3f30 */
  push32(0x109c1390u); f_109c3f30();
  /* 109c1390 mov esi, esp */
  ESI = (ESP);
  /* 109c1392 push 0x109ec1a4 */
  push32((uint32_t)(0x109ec1a4u));
  /* 109c1397 push 0x109f1438 */
  push32((uint32_t)(0x109f1438u));
  /* 109c139c call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c13a2u);
  /* 109c13a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c13a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c13a7 call 0x109c3f30 */
  push32(0x109c13acu); f_109c3f30();
  /* 109c13ac mov esi, esp */
  ESI = (ESP);
  /* 109c13ae push 0x109ec19c */
  push32((uint32_t)(0x109ec19cu));
  /* 109c13b3 push 0x109f1430 */
  push32((uint32_t)(0x109f1430u));
  /* 109c13b8 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c13beu);
  /* 109c13be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c13c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c13c3 call 0x109c3f30 */
  push32(0x109c13c8u); f_109c3f30();
  /* 109c13c8 mov esi, esp */
  ESI = (ESP);
  /* 109c13ca push 0x109ec194 */
  push32((uint32_t)(0x109ec194u));
  /* 109c13cf push 0x109f1448 */
  push32((uint32_t)(0x109f1448u));
  /* 109c13d4 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c13dau);
  /* 109c13da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c13dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c13df call 0x109c3f30 */
  push32(0x109c13e4u); f_109c3f30();
  /* 109c13e4 mov esi, esp */
  ESI = (ESP);
  /* 109c13e6 push 0x109ec18c */
  push32((uint32_t)(0x109ec18cu));
  /* 109c13eb push 0x109f1440 */
  push32((uint32_t)(0x109f1440u));
  /* 109c13f0 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c13f6u);
  /* 109c13f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c13fb call 0x109c3f30 */
  push32(0x109c1400u); f_109c3f30();
  /* 109c1400 mov esi, esp */
  ESI = (ESP);
  /* 109c1402 push 0x109ec180 */
  push32((uint32_t)(0x109ec180u));
  /* 109c1407 push 0x109f1530 */
  push32((uint32_t)(0x109f1530u));
  /* 109c140c call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c1412u);
  /* 109c1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1417 call 0x109c3f30 */
  push32(0x109c141cu); f_109c3f30();
  /* 109c141c mov esi, esp */
  ESI = (ESP);
  /* 109c141e push 0x109ec174 */
  push32((uint32_t)(0x109ec174u));
  /* 109c1423 push 0x109f1598 */
  push32((uint32_t)(0x109f1598u));
  /* 109c1428 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c142eu);
  /* 109c142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1433 call 0x109c3f30 */
  push32(0x109c1438u); f_109c3f30();
  /* 109c1438 mov esi, esp */
  ESI = (ESP);
  /* 109c143a push 0x109ec168 */
  push32((uint32_t)(0x109ec168u));
  /* 109c143f push 0x109f15a0 */
  push32((uint32_t)(0x109f15a0u));
  /* 109c1444 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c144au);
  /* 109c144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c144f call 0x109c3f30 */
  push32(0x109c1454u); f_109c3f30();
  /* 109c1454 mov esi, esp */
  ESI = (ESP);
  /* 109c1456 push 0x109ec15c */
  push32((uint32_t)(0x109ec15cu));
  /* 109c145b push 0x109f1580 */
  push32((uint32_t)(0x109f1580u));
  /* 109c1460 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c1466u);
  /* 109c1466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c146b call 0x109c3f30 */
  push32(0x109c1470u); f_109c3f30();
  /* 109c1470 mov esi, esp */
  ESI = (ESP);
  /* 109c1472 push 0x109ec150 */
  push32((uint32_t)(0x109ec150u));
  /* 109c1477 push 0x109f1590 */
  push32((uint32_t)(0x109f1590u));
  /* 109c147c call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c1482u);
  /* 109c1482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1487 call 0x109c3f30 */
  push32(0x109c148cu); f_109c3f30();
  /* 109c148c mov esi, esp */
  ESI = (ESP);
  /* 109c148e push 0x109ec144 */
  push32((uint32_t)(0x109ec144u));
  /* 109c1493 push 0x109f1568 */
  push32((uint32_t)(0x109f1568u));
  /* 109c1498 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c149eu);
  /* 109c149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c14a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c14a3 call 0x109c3f30 */
  push32(0x109c14a8u); f_109c3f30();
  /* 109c14a8 mov esi, esp */
  ESI = (ESP);
  /* 109c14aa push 0x109ec138 */
  push32((uint32_t)(0x109ec138u));
  /* 109c14af push 0x109f1578 */
  push32((uint32_t)(0x109f1578u));
  /* 109c14b4 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c14bau);
  /* 109c14ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c14bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c14bf call 0x109c3f30 */
  push32(0x109c14c4u); f_109c3f30();
  /* 109c14c4 mov esi, esp */
  ESI = (ESP);
  /* 109c14c6 push 0x109ec12c */
  push32((uint32_t)(0x109ec12cu));
  /* 109c14cb push 0x109f1400 */
  push32((uint32_t)(0x109f1400u));
  /* 109c14d0 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c14d6u);
  /* 109c14d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c14d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c14db call 0x109c3f30 */
  push32(0x109c14e0u); f_109c3f30();
  /* 109c14e0 mov esi, esp */
  ESI = (ESP);
  /* 109c14e2 push 0x109ec120 */
  push32((uint32_t)(0x109ec120u));
  /* 109c14e7 push 0x109f13f8 */
  push32((uint32_t)(0x109f13f8u));
  /* 109c14ec call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c14f2u);
  /* 109c14f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c14f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c14f7 call 0x109c3f30 */
  push32(0x109c14fcu); f_109c3f30();
  /* 109c14fc mov esi, esp */
  ESI = (ESP);
  /* 109c14fe push 0x109ec114 */
  push32((uint32_t)(0x109ec114u));
  /* 109c1503 push 0x109f1540 */
  push32((uint32_t)(0x109f1540u));
  /* 109c1508 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c150eu);
  /* 109c150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1513 call 0x109c3f30 */
  push32(0x109c1518u); f_109c3f30();
  /* 109c1518 mov esi, esp */
  ESI = (ESP);
  /* 109c151a push 0x109ec108 */
  push32((uint32_t)(0x109ec108u));
  /* 109c151f push 0x109f1558 */
  push32((uint32_t)(0x109f1558u));
  /* 109c1524 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c152au);
  /* 109c152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c152f call 0x109c3f30 */
  push32(0x109c1534u); f_109c3f30();
  /* 109c1534 mov esi, esp */
  ESI = (ESP);
  /* 109c1536 push 0x109ec0fc */
  push32((uint32_t)(0x109ec0fcu));
  /* 109c153b push 0x109f15d0 */
  push32((uint32_t)(0x109f15d0u));
  /* 109c1540 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c1546u);
  /* 109c1546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c154b call 0x109c3f30 */
  push32(0x109c1550u); f_109c3f30();
  /* 109c1550 mov esi, esp */
  ESI = (ESP);
  /* 109c1552 push 0x109ec0f0 */
  push32((uint32_t)(0x109ec0f0u));
  /* 109c1557 push 0x109f1588 */
  push32((uint32_t)(0x109f1588u));
  /* 109c155c call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c1562u);
  /* 109c1562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1567 call 0x109c3f30 */
  push32(0x109c156cu); f_109c3f30();
  /* 109c156c mov esi, esp */
  ESI = (ESP);
  /* 109c156e push 0x109ec0e4 */
  push32((uint32_t)(0x109ec0e4u));
  /* 109c1573 push 0x109f1550 */
  push32((uint32_t)(0x109f1550u));
  /* 109c1578 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c157eu);
  /* 109c157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1583 call 0x109c3f30 */
  push32(0x109c1588u); f_109c3f30();
  /* 109c1588 mov esi, esp */
  ESI = (ESP);
  /* 109c158a push 0x109ec0d8 */
  push32((uint32_t)(0x109ec0d8u));
  /* 109c158f push 0x109f15c8 */
  push32((uint32_t)(0x109f15c8u));
  /* 109c1594 call dword ptr [0x109f4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4490))), 0x109c159au);
  /* 109c159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c159f call 0x109c3f30 */
  push32(0x109c15a4u); f_109c3f30();
  /* 109c15a4 mov esi, esp */
  ESI = (ESP);
  /* 109c15a6 push 0x109ec0cc */
  push32((uint32_t)(0x109ec0ccu));
  /* 109c15ab push 0x109f1450 */
  push32((uint32_t)(0x109f1450u));
  /* 109c15b0 call dword ptr [0x109f44a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44a0))), 0x109c15b6u);
  /* 109c15b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c15b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c15bb call 0x109c3f30 */
  push32(0x109c15c0u); f_109c3f30();
  /* 109c15c0 mov esi, esp */
  ESI = (ESP);
  /* 109c15c2 push 0x109ec0bc */
  push32((uint32_t)(0x109ec0bcu));
  /* 109c15c7 push 0x109f14a8 */
  push32((uint32_t)(0x109f14a8u));
  /* 109c15cc call dword ptr [0x109f44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44a4))), 0x109c15d2u);
  /* 109c15d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c15d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c15d7 call 0x109c3f30 */
  push32(0x109c15dcu); f_109c3f30();
  /* 109c15dc mov esi, esp */
  ESI = (ESP);
  /* 109c15de push 0x109ec0ac */
  push32((uint32_t)(0x109ec0acu));
  /* 109c15e3 push 0x109f14c0 */
  push32((uint32_t)(0x109f14c0u));
  /* 109c15e8 call dword ptr [0x109f44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44a4))), 0x109c15eeu);
  /* 109c15ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c15f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c15f3 call 0x109c3f30 */
  push32(0x109c15f8u); f_109c3f30();
  /* 109c15f8 mov esi, esp */
  ESI = (ESP);
  /* 109c15fa push 0x109ec09c */
  push32((uint32_t)(0x109ec09cu));
  /* 109c15ff push 0x109f1520 */
  push32((uint32_t)(0x109f1520u));
  /* 109c1604 call dword ptr [0x109f44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44a4))), 0x109c160au);
  /* 109c160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c160f call 0x109c3f30 */
  push32(0x109c1614u); f_109c3f30();
  /* 109c1614 mov esi, esp */
  ESI = (ESP);
  /* 109c1616 push 0x109ec088 */
  push32((uint32_t)(0x109ec088u));
  /* 109c161b push 0x109f1528 */
  push32((uint32_t)(0x109f1528u));
  /* 109c1620 call dword ptr [0x109f44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44a4))), 0x109c1626u);
  /* 109c1626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c162b call 0x109c3f30 */
  push32(0x109c1630u); f_109c3f30();
  /* 109c1630 mov esi, esp */
  ESI = (ESP);
  /* 109c1632 push 0x109ec078 */
  push32((uint32_t)(0x109ec078u));
  /* 109c1637 push 0x109f1408 */
  push32((uint32_t)(0x109f1408u));
  /* 109c163c call dword ptr [0x109f44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44a4))), 0x109c1642u);
  /* 109c1642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1647 call 0x109c3f30 */
  push32(0x109c164cu); f_109c3f30();
  /* 109c164c mov esi, esp */
  ESI = (ESP);
  /* 109c164e push 0x109ec068 */
  push32((uint32_t)(0x109ec068u));
  /* 109c1653 push 0x109f13f0 */
  push32((uint32_t)(0x109f13f0u));
  /* 109c1658 call dword ptr [0x109f44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44a4))), 0x109c165eu);
  /* 109c165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1663 call 0x109c3f30 */
  push32(0x109c1668u); f_109c3f30();
  /* 109c1668 mov esi, esp */
  ESI = (ESP);
  /* 109c166a push 0x109ec060 */
  push32((uint32_t)(0x109ec060u));
  /* 109c166f push 0x109f1510 */
  push32((uint32_t)(0x109f1510u));
  /* 109c1674 call dword ptr [0x109f449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f449c))), 0x109c167au);
  /* 109c167a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c167d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c167f call 0x109c3f30 */
  push32(0x109c1684u); f_109c3f30();
  /* 109c1684 mov esi, esp */
  ESI = (ESP);
  /* 109c1686 push 0x109ec054 */
  push32((uint32_t)(0x109ec054u));
  /* 109c168b push 0x109f14e8 */
  push32((uint32_t)(0x109f14e8u));
  /* 109c1690 call dword ptr [0x109f449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f449c))), 0x109c1696u);
  /* 109c1696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c169b call 0x109c3f30 */
  push32(0x109c16a0u); f_109c3f30();
  /* 109c16a0 mov esi, esp */
  ESI = (ESP);
  /* 109c16a2 push 0x109ec048 */
  push32((uint32_t)(0x109ec048u));
  /* 109c16a7 push 0x109f13e0 */
  push32((uint32_t)(0x109f13e0u));
  /* 109c16ac call dword ptr [0x109f449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f449c))), 0x109c16b2u);
  /* 109c16b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c16b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c16b7 call 0x109c3f30 */
  push32(0x109c16bcu); f_109c3f30();
  /* 109c16bc mov esi, esp */
  ESI = (ESP);
  /* 109c16be push 0x109ec03c */
  push32((uint32_t)(0x109ec03cu));
  /* 109c16c3 push 0x109f13e8 */
  push32((uint32_t)(0x109f13e8u));
  /* 109c16c8 call dword ptr [0x109f449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f449c))), 0x109c16ceu);
  /* 109c16ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c16d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c16d3 call 0x109c3f30 */
  push32(0x109c16d8u); f_109c3f30();
  /* 109c16d8 mov esi, esp */
  ESI = (ESP);
  /* 109c16da push 0x109ec02c */
  push32((uint32_t)(0x109ec02cu));
  /* 109c16df push 0x109f1518 */
  push32((uint32_t)(0x109f1518u));
  /* 109c16e4 call dword ptr [0x109f449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f449c))), 0x109c16eau);
  /* 109c16ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c16ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c16ef call 0x109c3f30 */
  push32(0x109c16f4u); f_109c3f30();
  /* 109c16f4 mov esi, esp */
  ESI = (ESP);
  /* 109c16f6 push 8 */
  push32((uint32_t)(0x8u));
  /* 109c16f8 push 0x109f1560 */
  push32((uint32_t)(0x109f1560u));
  /* 109c16fd call dword ptr [0x109f44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44ac))), 0x109c1703u);
  /* 109c1703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1706 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1708 call 0x109c3f30 */
  push32(0x109c170du); f_109c3f30();
  /* 109c170d mov esi, esp */
  ESI = (ESP);
  /* 109c170f push 8 */
  push32((uint32_t)(0x8u));
  /* 109c1711 push 0x109f1570 */
  push32((uint32_t)(0x109f1570u));
  /* 109c1716 call dword ptr [0x109f44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44ac))), 0x109c171cu);
  /* 109c171c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c171f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1721 call 0x109c3f30 */
  push32(0x109c1726u); f_109c3f30();
  /* 109c1726 mov esi, esp */
  ESI = (ESP);
  /* 109c1728 push 8 */
  push32((uint32_t)(0x8u));
  /* 109c172a push 0x109f1538 */
  push32((uint32_t)(0x109f1538u));
  /* 109c172f call dword ptr [0x109f44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44ac))), 0x109c1735u);
  /* 109c1735 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1738 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c173a call 0x109c3f30 */
  push32(0x109c173fu); f_109c3f30();
  /* 109c173f mov esi, esp */
  ESI = (ESP);
  /* 109c1741 push 8 */
  push32((uint32_t)(0x8u));
  /* 109c1743 push 0x109f15d8 */
  push32((uint32_t)(0x109f15d8u));
  /* 109c1748 call dword ptr [0x109f44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44ac))), 0x109c174eu);
  /* 109c174e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1751 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1753 call 0x109c3f30 */
  push32(0x109c1758u); f_109c3f30();
  /* 109c1758 mov esi, esp */
  ESI = (ESP);
  /* 109c175a push 8 */
  push32((uint32_t)(0x8u));
  /* 109c175c push 0x109f15b0 */
  push32((uint32_t)(0x109f15b0u));
  /* 109c1761 call dword ptr [0x109f44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44ac))), 0x109c1767u);
  /* 109c1767 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c176a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c176c call 0x109c3f30 */
  push32(0x109c1771u); f_109c3f30();
  /* 109c1771 mov esi, esp */
  ESI = (ESP);
  /* 109c1773 push 8 */
  push32((uint32_t)(0x8u));
  /* 109c1775 push 0x109f15b8 */
  push32((uint32_t)(0x109f15b8u));
  /* 109c177a call dword ptr [0x109f44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44ac))), 0x109c1780u);
  /* 109c1780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1783 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1785 call 0x109c3f30 */
  push32(0x109c178au); f_109c3f30();
  /* 109c178a mov esi, esp */
  ESI = (ESP);
  /* 109c178c push 8 */
  push32((uint32_t)(0x8u));
  /* 109c178e push 0x109f15a8 */
  push32((uint32_t)(0x109f15a8u));
  /* 109c1793 call dword ptr [0x109f44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44ac))), 0x109c1799u);
  /* 109c1799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c179c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c179e call 0x109c3f30 */
  push32(0x109c17a3u); f_109c3f30();
  /* 109c17a3 mov esi, esp */
  ESI = (ESP);
  /* 109c17a5 push 8 */
  push32((uint32_t)(0x8u));
  /* 109c17a7 push 0x109f1548 */
  push32((uint32_t)(0x109f1548u));
  /* 109c17ac call dword ptr [0x109f44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44ac))), 0x109c17b2u);
  /* 109c17b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c17b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c17b7 call 0x109c3f30 */
  push32(0x109c17bcu); f_109c3f30();
  /* 109c17bc mov esi, esp */
  ESI = (ESP);
  /* 109c17be push 8 */
  push32((uint32_t)(0x8u));
  /* 109c17c0 push 0x109f15c0 */
  push32((uint32_t)(0x109f15c0u));
  /* 109c17c5 call dword ptr [0x109f44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44ac))), 0x109c17cbu);
  /* 109c17cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c17ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c17d0 call 0x109c3f30 */
  push32(0x109c17d5u); f_109c3f30();
  /* 109c17d5 mov esi, esp */
  ESI = (ESP);
  /* 109c17d7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109c17d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c17db call dword ptr [0x109f44b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44b0))), 0x109c17e1u);
  /* 109c17e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c17e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c17e6 call 0x109c3f30 */
  push32(0x109c17ebu); f_109c3f30();
  /* 109c17eb mov esi, esp */
  ESI = (ESP);
  /* 109c17ed push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109c17ef push 4 */
  push32((uint32_t)(0x4u));
  /* 109c17f1 call dword ptr [0x109f44b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44b0))), 0x109c17f7u);
  /* 109c17f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c17fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c17fc call 0x109c3f30 */
  push32(0x109c1801u); f_109c3f30();
  /* 109c1801 mov esi, esp */
  ESI = (ESP);
  /* 109c1803 push 0x109ec024 */
  push32((uint32_t)(0x109ec024u));
  /* 109c1808 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c180a call dword ptr [0x109f44a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44a8))), 0x109c1810u);
  /* 109c1810 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1813 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1815 call 0x109c3f30 */
  push32(0x109c181au); f_109c3f30();
  /* 109c181a mov esi, esp */
  ESI = (ESP);
  /* 109c181c push 0x109ec01c */
  push32((uint32_t)(0x109ec01cu));
  /* 109c1821 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1823 call dword ptr [0x109f44a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f44a8))), 0x109c1829u);
  /* 109c1829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c182c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c182e call 0x109c3f30 */
  push32(0x109c1833u); f_109c3f30();
  /* 109c1833 pop edi */
  EDI = (pop32());
  /* 109c1834 pop esi */
  ESI = (pop32());
  /* 109c1835 pop ebx */
  EBX = (pop32());
  /* 109c1836 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1839 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c183b call 0x109c3f30 */
  push32(0x109c1840u); f_109c3f30();
  /* 109c1840 mov esp, ebp */
  ESP = (EBP);
  /* 109c1842 pop ebp */
  EBP = (pop32());
  /* 109c1843 ret  */
  ESPCHK(0x109c10a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a30 @ 0x109c1a30 (7254 bytes, 2099 insns) */
void f_109c1a30(void) {
  FTRACE(0x109c1a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c1a30 push ebp */
  push32((uint32_t)(EBP));
  /* 109c1a31 mov ebp, esp */
  EBP = (ESP);
  /* 109c1a33 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c1a36 push ebx */
  push32((uint32_t)(EBX));
  /* 109c1a37 push esi */
  push32((uint32_t)(ESI));
  /* 109c1a38 push edi */
  push32((uint32_t)(EDI));
  /* 109c1a39 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 109c1a3c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 109c1a41 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 109c1a46 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109c1a48 mov esi, esp */
  ESI = (ESP);
  /* 109c1a4a push 1 */
  push32((uint32_t)(0x1u));
  /* 109c1a4c call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c1a52u);
  /* 109c1a52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1a55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1a57 call 0x109c3f30 */
  push32(0x109c1a5cu); f_109c3f30();
  /* 109c1a5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c1a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1a63 je 0x109c1c18 */
  if (C.zf) goto L_109c1c18;
  /* 109c1a69 mov esi, esp */
  ESI = (ESP);
  /* 109c1a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1a6d push 1 */
  push32((uint32_t)(0x1u));
  /* 109c1a6f call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c1a75u);
  /* 109c1a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1a78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1a7a call 0x109c3f30 */
  push32(0x109c1a7fu); f_109c3f30();
  /* 109c1a7f mov esi, esp */
  ESI = (ESP);
  /* 109c1a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1a83 push 6 */
  push32((uint32_t)(0x6u));
  /* 109c1a85 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c1a8bu);
  /* 109c1a8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1a8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1a90 call 0x109c3f30 */
  push32(0x109c1a95u); f_109c3f30();
  /* 109c1a95 mov esi, esp */
  ESI = (ESP);
  /* 109c1a97 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 109c1a9c push 3 */
  push32((uint32_t)(0x3u));
  /* 109c1a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1aa0 call dword ptr [0x109f4434] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4434))), 0x109c1aa6u);
  /* 109c1aa6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1aa9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1aab call 0x109c3f30 */
  push32(0x109c1ab0u); f_109c3f30();
  /* 109c1ab0 mov esi, esp */
  ESI = (ESP);
  /* 109c1ab2 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 109c1ab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c1ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1abb call dword ptr [0x109f4434] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4434))), 0x109c1ac1u);
  /* 109c1ac1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1ac4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1ac6 call 0x109c3f30 */
  push32(0x109c1acbu); f_109c3f30();
  /* 109c1acb mov esi, esp */
  ESI = (ESP);
  /* 109c1acd push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1acf push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1ad3 call dword ptr [0x109f4434] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4434))), 0x109c1ad9u);
  /* 109c1ad9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1adc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1ade call 0x109c3f30 */
  push32(0x109c1ae3u); f_109c3f30();
  /* 109c1ae3 mov esi, esp */
  ESI = (ESP);
  /* 109c1ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1ae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c1ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1aeb call dword ptr [0x109f4434] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4434))), 0x109c1af1u);
  /* 109c1af1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1af4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1af6 call 0x109c3f30 */
  push32(0x109c1afbu); f_109c3f30();
  /* 109c1afb mov esi, esp */
  ESI = (ESP);
  /* 109c1afd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 109c1b02 push 5 */
  push32((uint32_t)(0x5u));
  /* 109c1b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1b06 call dword ptr [0x109f4434] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4434))), 0x109c1b0cu);
  /* 109c1b0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1b0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1b11 call 0x109c3f30 */
  push32(0x109c1b16u); f_109c3f30();
  /* 109c1b16 mov esi, esp */
  ESI = (ESP);
  /* 109c1b18 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 109c1b1d push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1b21 call dword ptr [0x109f4434] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4434))), 0x109c1b27u);
  /* 109c1b27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1b2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1b2c call 0x109c3f30 */
  push32(0x109c1b31u); f_109c3f30();
  /* 109c1b31 mov esi, esp */
  ESI = (ESP);
  /* 109c1b33 push 0x109ec3b8 */
  push32((uint32_t)(0x109ec3b8u));
  /* 109c1b38 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c1b3eu);
  /* 109c1b3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1b41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1b43 call 0x109c3f30 */
  push32(0x109c1b48u); f_109c3f30();
  /* 109c1b48 mov esi, esp */
  ESI = (ESP);
  /* 109c1b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1b4c push 0x109f15e8 */
  push32((uint32_t)(0x109f15e8u));
  /* 109c1b51 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c1b57u);
  /* 109c1b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1b5c call 0x109c3f30 */
  push32(0x109c1b61u); f_109c3f30();
  /* 109c1b61 mov esi, esp */
  ESI = (ESP);
  /* 109c1b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1b65 push 0x109f14b0 */
  push32((uint32_t)(0x109f14b0u));
  /* 109c1b6a push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1b6c call dword ptr [0x109f4440] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4440))), 0x109c1b72u);
  /* 109c1b72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1b75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1b77 call 0x109c3f30 */
  push32(0x109c1b7cu); f_109c3f30();
  /* 109c1b7c mov esi, esp */
  ESI = (ESP);
  /* 109c1b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1b80 push 0x109f15f0 */
  push32((uint32_t)(0x109f15f0u));
  /* 109c1b85 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c1b8bu);
  /* 109c1b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1b8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1b90 call 0x109c3f30 */
  push32(0x109c1b95u); f_109c3f30();
  /* 109c1b95 mov esi, esp */
  ESI = (ESP);
  /* 109c1b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1b99 push 0x109f14b8 */
  push32((uint32_t)(0x109f14b8u));
  /* 109c1b9e push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1ba0 call dword ptr [0x109f4440] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4440))), 0x109c1ba6u);
  /* 109c1ba6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1ba9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1bab call 0x109c3f30 */
  push32(0x109c1bb0u); f_109c3f30();
  /* 109c1bb0 mov esi, esp */
  ESI = (ESP);
  /* 109c1bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1bb4 push 0x109f15e0 */
  push32((uint32_t)(0x109f15e0u));
  /* 109c1bb9 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c1bbfu);
  /* 109c1bbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1bc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1bc4 call 0x109c3f30 */
  push32(0x109c1bc9u); f_109c3f30();
  /* 109c1bc9 mov esi, esp */
  ESI = (ESP);
  /* 109c1bcb push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1bcd push 0x109f14a0 */
  push32((uint32_t)(0x109f14a0u));
  /* 109c1bd2 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1bd4 call dword ptr [0x109f4440] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4440))), 0x109c1bdau);
  /* 109c1bda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1bdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1bdf call 0x109c3f30 */
  push32(0x109c1be4u); f_109c3f30();
  /* 109c1be4 mov esi, esp */
  ESI = (ESP);
  /* 109c1be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1be8 push 0x109f1568 */
  push32((uint32_t)(0x109f1568u));
  /* 109c1bed call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c1bf3u);
  /* 109c1bf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1bf6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1bf8 call 0x109c3f30 */
  push32(0x109c1bfdu); f_109c3f30();
  /* 109c1bfd mov esi, esp */
  ESI = (ESP);
  /* 109c1bff push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1c01 push 0x109f14f8 */
  push32((uint32_t)(0x109f14f8u));
  /* 109c1c06 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c1c08 call dword ptr [0x109f4440] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4440))), 0x109c1c0eu);
  /* 109c1c0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1c11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1c13 call 0x109c3f30 */
  push32(0x109c1c18u); f_109c3f30();
L_109c1c18:;
  /* 109c1c18 mov esi, esp */
  ESI = (ESP);
  /* 109c1c1a push 2 */
  push32((uint32_t)(0x2u));
  /* 109c1c1c call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c1c22u);
  /* 109c1c22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1c25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1c27 call 0x109c3f30 */
  push32(0x109c1c2cu); f_109c3f30();
  /* 109c1c2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c1c31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1c33 je 0x109c1d2a */
  if (C.zf) goto L_109c1d2a;
  /* 109c1c39 mov esi, esp */
  ESI = (ESP);
  /* 109c1c3b push 0x109f1410 */
  push32((uint32_t)(0x109f1410u));
  /* 109c1c40 push 0x109f14c8 */
  push32((uint32_t)(0x109f14c8u));
  /* 109c1c45 call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c1c4bu);
  /* 109c1c4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1c4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1c50 call 0x109c3f30 */
  push32(0x109c1c55u); f_109c3f30();
  /* 109c1c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1c57 jle 0x109c1d2a */
  if ((C.zf||C.sf!=C.of)) goto L_109c1d2a;
  /* 109c1c5d mov esi, esp */
  ESI = (ESP);
  /* 109c1c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1c61 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c1c63 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c1c69u);
  /* 109c1c69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1c6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1c6e call 0x109c3f30 */
  push32(0x109c1c73u); f_109c3f30();
  /* 109c1c73 mov esi, esp */
  ESI = (ESP);
  /* 109c1c75 push 0x109ec3b0 */
  push32((uint32_t)(0x109ec3b0u));
  /* 109c1c7a call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c1c80u);
  /* 109c1c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1c83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1c85 call 0x109c3f30 */
  push32(0x109c1c8au); f_109c3f30();
  /* 109c1c8a mov esi, esp */
  ESI = (ESP);
  /* 109c1c8c push 0x109ec3a4 */
  push32((uint32_t)(0x109ec3a4u));
  /* 109c1c91 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c1c97u);
  /* 109c1c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1c9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1c9c call 0x109c3f30 */
  push32(0x109c1ca1u); f_109c3f30();
  /* 109c1ca1 mov esi, esp */
  ESI = (ESP);
  /* 109c1ca3 push 0x109ec398 */
  push32((uint32_t)(0x109ec398u));
  /* 109c1ca8 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c1caeu);
  /* 109c1cae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1cb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1cb3 call 0x109c3f30 */
  push32(0x109c1cb8u); f_109c3f30();
  /* 109c1cb8 mov esi, esp */
  ESI = (ESP);
  /* 109c1cba push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1cbc push 0x109f1418 */
  push32((uint32_t)(0x109f1418u));
  /* 109c1cc1 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c1cc7u);
  /* 109c1cc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1ccc call 0x109c3f30 */
  push32(0x109c1cd1u); f_109c3f30();
  /* 109c1cd1 mov esi, esp */
  ESI = (ESP);
  /* 109c1cd3 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1cd5 call dword ptr [0x109f443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f443c))), 0x109c1cdbu);
  /* 109c1cdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1cde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1ce0 call 0x109c3f30 */
  push32(0x109c1ce5u); f_109c3f30();
  /* 109c1ce5 mov esi, esp */
  ESI = (ESP);
  /* 109c1ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1ce9 push 0x109f1428 */
  push32((uint32_t)(0x109f1428u));
  /* 109c1cee call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c1cf4u);
  /* 109c1cf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1cf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1cf9 call 0x109c3f30 */
  push32(0x109c1cfeu); f_109c3f30();
  /* 109c1cfe mov esi, esp */
  ESI = (ESP);
  /* 109c1d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1d02 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1d04 call dword ptr [0x109f444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f444c))), 0x109c1d0au);
  /* 109c1d0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1d0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1d0f call 0x109c3f30 */
  push32(0x109c1d14u); f_109c3f30();
  /* 109c1d14 mov esi, esp */
  ESI = (ESP);
  /* 109c1d16 push 0xa */
  push32((uint32_t)(0xau));
  /* 109c1d18 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c1d1a call dword ptr [0x109f4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4450))), 0x109c1d20u);
  /* 109c1d20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1d23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1d25 call 0x109c3f30 */
  push32(0x109c1d2au); f_109c3f30();
L_109c1d2a:;
  /* 109c1d2a mov esi, esp */
  ESI = (ESP);
  /* 109c1d2c push 1 */
  push32((uint32_t)(0x1u));
  /* 109c1d2e call dword ptr [0x109f4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4448))), 0x109c1d34u);
  /* 109c1d34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1d37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1d39 call 0x109c3f30 */
  push32(0x109c1d3eu); f_109c3f30();
  /* 109c1d3e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c1d43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1d45 je 0x109c1d63 */
  if (C.zf) goto L_109c1d63;
  /* 109c1d47 mov esi, esp */
  ESI = (ESP);
  /* 109c1d49 push 0x109ec0cc */
  push32((uint32_t)(0x109ec0ccu));
  /* 109c1d4e push 0x109ec15c */
  push32((uint32_t)(0x109ec15cu));
  /* 109c1d53 call dword ptr [0x109f4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4458))), 0x109c1d59u);
  /* 109c1d59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1d5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1d5e call 0x109c3f30 */
  push32(0x109c1d63u); f_109c3f30();
L_109c1d63:;
  /* 109c1d63 mov esi, esp */
  ESI = (ESP);
  /* 109c1d65 push 3 */
  push32((uint32_t)(0x3u));
  /* 109c1d67 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c1d6du);
  /* 109c1d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1d70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1d72 call 0x109c3f30 */
  push32(0x109c1d77u); f_109c3f30();
  /* 109c1d77 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c1d7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1d7e je 0x109c1dcd */
  if (C.zf) goto L_109c1dcd;
  /* 109c1d80 mov esi, esp */
  ESI = (ESP);
  /* 109c1d82 push 0x109f15a0 */
  push32((uint32_t)(0x109f15a0u));
  /* 109c1d87 push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c1d8c call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c1d92u);
  /* 109c1d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1d95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1d97 call 0x109c3f30 */
  push32(0x109c1d9cu); f_109c3f30();
  /* 109c1d9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1d9e jle 0x109c1dcd */
  if ((C.zf||C.sf!=C.of)) goto L_109c1dcd;
  /* 109c1da0 mov esi, esp */
  ESI = (ESP);
  /* 109c1da2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1da4 push 3 */
  push32((uint32_t)(0x3u));
  /* 109c1da6 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c1dacu);
  /* 109c1dac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1daf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1db1 call 0x109c3f30 */
  push32(0x109c1db6u); f_109c3f30();
  /* 109c1db6 mov esi, esp */
  ESI = (ESP);
  /* 109c1db8 push 0x109ec390 */
  push32((uint32_t)(0x109ec390u));
  /* 109c1dbd call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c1dc3u);
  /* 109c1dc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1dc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1dc8 call 0x109c3f30 */
  push32(0x109c1dcdu); f_109c3f30();
L_109c1dcd:;
  /* 109c1dcd mov esi, esp */
  ESI = (ESP);
  /* 109c1dcf push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1dd1 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c1dd7u);
  /* 109c1dd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1dda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1ddc call 0x109c3f30 */
  push32(0x109c1de1u); f_109c3f30();
  /* 109c1de1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c1de6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1de8 je 0x109c1f3e */
  if (C.zf) goto L_109c1f3e;
  /* 109c1dee push 0x109f1430 */
  push32((uint32_t)(0x109f1430u));
  /* 109c1df3 call 0x109c1005 */
  push32(0x109c1df8u); f_109c1005();
  /* 109c1df8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1dfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1dfd jne 0x109c1f3e */
  if (!C.zf) goto L_109c1f3e;
  /* 109c1e03 push 0x109f1448 */
  push32((uint32_t)(0x109f1448u));
  /* 109c1e08 call 0x109c1005 */
  push32(0x109c1e0du); f_109c1005();
  /* 109c1e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1e12 jne 0x109c1f3e */
  if (!C.zf) goto L_109c1f3e;
  /* 109c1e18 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1e1a push 0x109f14c0 */
  push32((uint32_t)(0x109f14c0u));
  /* 109c1e1f call 0x109c100f */
  push32(0x109c1e24u); f_109c100f();
  /* 109c1e24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1e27 mov esi, eax */
  ESI = (EAX);
  /* 109c1e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1e2b push 0x109f14c0 */
  push32((uint32_t)(0x109f14c0u));
  /* 109c1e30 call 0x109c100f */
  push32(0x109c1e35u); f_109c100f();
  /* 109c1e35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1e38 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1e3a cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1e3d jle 0x109c1f3e */
  if ((C.zf||C.sf!=C.of)) goto L_109c1f3e;
  /* 109c1e43 mov esi, esp */
  ESI = (ESP);
  /* 109c1e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1e47 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1e49 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c1e4fu);
  /* 109c1e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1e52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1e54 call 0x109c3f30 */
  push32(0x109c1e59u); f_109c3f30();
  /* 109c1e59 mov esi, esp */
  ESI = (ESP);
  /* 109c1e5b push 0x109ec388 */
  push32((uint32_t)(0x109ec388u));
  /* 109c1e60 call dword ptr [0x109f445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f445c))), 0x109c1e66u);
  /* 109c1e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1e69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1e6b call 0x109c3f30 */
  push32(0x109c1e70u); f_109c3f30();
  /* 109c1e70 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c1e75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1e77 je 0x109c1f27 */
  if (C.zf) goto L_109c1f27;
  /* 109c1e7d mov esi, esp */
  ESI = (ESP);
  /* 109c1e7f push 0x109ec37c */
  push32((uint32_t)(0x109ec37cu));
  /* 109c1e84 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c1e8au);
  /* 109c1e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1e8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1e8f call 0x109c3f30 */
  push32(0x109c1e94u); f_109c3f30();
  /* 109c1e94 mov esi, esp */
  ESI = (ESP);
  /* 109c1e96 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c1e98 push 6 */
  push32((uint32_t)(0x6u));
  /* 109c1e9a call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c1ea0u);
  /* 109c1ea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1ea3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1ea5 call 0x109c3f30 */
  push32(0x109c1eaau); f_109c3f30();
  /* 109c1eaa mov esi, esp */
  ESI = (ESP);
  /* 109c1eac push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1eae call dword ptr [0x109f4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4454))), 0x109c1eb4u);
  /* 109c1eb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1eb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1eb9 call 0x109c3f30 */
  push32(0x109c1ebeu); f_109c3f30();
  /* 109c1ebe mov esi, esp */
  ESI = (ESP);
  /* 109c1ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1ec2 push 0x109f1440 */
  push32((uint32_t)(0x109f1440u));
  /* 109c1ec7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1ec9 call dword ptr [0x109f4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4464))), 0x109c1ecfu);
  /* 109c1ecf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1ed2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1ed4 call 0x109c3f30 */
  push32(0x109c1ed9u); f_109c3f30();
  /* 109c1ed9 mov esi, esp */
  ESI = (ESP);
  /* 109c1edb push 1 */
  push32((uint32_t)(0x1u));
  /* 109c1edd push 0x109f1438 */
  push32((uint32_t)(0x109f1438u));
  /* 109c1ee2 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1ee4 call dword ptr [0x109f4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4464))), 0x109c1eeau);
  /* 109c1eea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1eed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1eef call 0x109c3f30 */
  push32(0x109c1ef4u); f_109c3f30();
  /* 109c1ef4 mov esi, esp */
  ESI = (ESP);
  /* 109c1ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c1ef8 push 0x109f15a0 */
  push32((uint32_t)(0x109f15a0u));
  /* 109c1efd push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1eff call dword ptr [0x109f4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4464))), 0x109c1f05u);
  /* 109c1f05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1f08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1f0a call 0x109c3f30 */
  push32(0x109c1f0fu); f_109c3f30();
  /* 109c1f0f mov esi, esp */
  ESI = (ESP);
  /* 109c1f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1f13 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c1f15 call dword ptr [0x109f444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f444c))), 0x109c1f1bu);
  /* 109c1f1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1f1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1f20 call 0x109c3f30 */
  push32(0x109c1f25u); f_109c3f30();
  /* 109c1f25 jmp 0x109c1f3e */
  goto L_109c1f3e;
L_109c1f27:;
  /* 109c1f27 mov esi, esp */
  ESI = (ESP);
  /* 109c1f29 push 0x109ec370 */
  push32((uint32_t)(0x109ec370u));
  /* 109c1f2e call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c1f34u);
  /* 109c1f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1f37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1f39 call 0x109c3f30 */
  push32(0x109c1f3eu); f_109c3f30();
L_109c1f3e:;
  /* 109c1f3e mov esi, esp */
  ESI = (ESP);
  /* 109c1f40 push 5 */
  push32((uint32_t)(0x5u));
  /* 109c1f42 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c1f48u);
  /* 109c1f48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1f4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1f4d call 0x109c3f30 */
  push32(0x109c1f52u); f_109c3f30();
  /* 109c1f52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c1f57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1f59 je 0x109c2039 */
  if (C.zf) goto L_109c2039;
  /* 109c1f5f mov esi, esp */
  ESI = (ESP);
  /* 109c1f61 push 0x109f1410 */
  push32((uint32_t)(0x109f1410u));
  /* 109c1f66 push 0x109f1500 */
  push32((uint32_t)(0x109f1500u));
  /* 109c1f6b call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c1f71u);
  /* 109c1f71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1f74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1f76 call 0x109c3f30 */
  push32(0x109c1f7bu); f_109c3f30();
  /* 109c1f7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1f7d jle 0x109c2039 */
  if ((C.zf||C.sf!=C.of)) goto L_109c2039;
  /* 109c1f83 push 0x109f1540 */
  push32((uint32_t)(0x109f1540u));
  /* 109c1f88 call 0x109c1005 */
  push32(0x109c1f8du); f_109c1005();
  /* 109c1f8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1f90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c1f92 jle 0x109c2039 */
  if ((C.zf||C.sf!=C.of)) goto L_109c2039;
  /* 109c1f98 mov esi, esp */
  ESI = (ESP);
  /* 109c1f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c1f9c push 5 */
  push32((uint32_t)(0x5u));
  /* 109c1f9e call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c1fa4u);
  /* 109c1fa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1fa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1fa9 call 0x109c3f30 */
  push32(0x109c1faeu); f_109c3f30();
  /* 109c1fae mov esi, esp */
  ESI = (ESP);
  /* 109c1fb0 push 0x109ec368 */
  push32((uint32_t)(0x109ec368u));
  /* 109c1fb5 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c1fbbu);
  /* 109c1fbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1fbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1fc0 call 0x109c3f30 */
  push32(0x109c1fc5u); f_109c3f30();
  /* 109c1fc5 mov esi, esp */
  ESI = (ESP);
  /* 109c1fc7 push 0x109ec35c */
  push32((uint32_t)(0x109ec35cu));
  /* 109c1fcc call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c1fd2u);
  /* 109c1fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1fd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1fd7 call 0x109c3f30 */
  push32(0x109c1fdcu); f_109c3f30();
  /* 109c1fdc mov esi, esp */
  ESI = (ESP);
  /* 109c1fde push 0x109ec350 */
  push32((uint32_t)(0x109ec350u));
  /* 109c1fe3 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c1fe9u);
  /* 109c1fe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c1fec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c1fee call 0x109c3f30 */
  push32(0x109c1ff3u); f_109c3f30();
  /* 109c1ff3 mov esi, esp */
  ESI = (ESP);
  /* 109c1ff5 push 0x109ec344 */
  push32((uint32_t)(0x109ec344u));
  /* 109c1ffa call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c2000u);
  /* 109c2000 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2003 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2005 call 0x109c3f30 */
  push32(0x109c200au); f_109c3f30();
  /* 109c200a mov esi, esp */
  ESI = (ESP);
  /* 109c200c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c200e push 0x109f1540 */
  push32((uint32_t)(0x109f1540u));
  /* 109c2013 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2019u);
  /* 109c2019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c201c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c201e call 0x109c3f30 */
  push32(0x109c2023u); f_109c3f30();
  /* 109c2023 mov esi, esp */
  ESI = (ESP);
  /* 109c2025 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2027 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c2029 call dword ptr [0x109f444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f444c))), 0x109c202fu);
  /* 109c202f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2032 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2034 call 0x109c3f30 */
  push32(0x109c2039u); f_109c3f30();
L_109c2039:;
  /* 109c2039 mov esi, esp */
  ESI = (ESP);
  /* 109c203b push 6 */
  push32((uint32_t)(0x6u));
  /* 109c203d call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c2043u);
  /* 109c2043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2046 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2048 call 0x109c3f30 */
  push32(0x109c204du); f_109c3f30();
  /* 109c204d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2054 je 0x109c20a3 */
  if (C.zf) goto L_109c20a3;
  /* 109c2056 mov esi, esp */
  ESI = (ESP);
  /* 109c2058 push 0x109f1590 */
  push32((uint32_t)(0x109f1590u));
  /* 109c205d push 0x109f14d8 */
  push32((uint32_t)(0x109f14d8u));
  /* 109c2062 call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c2068u);
  /* 109c2068 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c206b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c206d call 0x109c3f30 */
  push32(0x109c2072u); f_109c3f30();
  /* 109c2072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2074 jle 0x109c20a3 */
  if ((C.zf||C.sf!=C.of)) goto L_109c20a3;
  /* 109c2076 mov esi, esp */
  ESI = (ESP);
  /* 109c2078 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c207a push 6 */
  push32((uint32_t)(0x6u));
  /* 109c207c call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2082u);
  /* 109c2082 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2085 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2087 call 0x109c3f30 */
  push32(0x109c208cu); f_109c3f30();
  /* 109c208c mov esi, esp */
  ESI = (ESP);
  /* 109c208e push 0x109ec33c */
  push32((uint32_t)(0x109ec33cu));
  /* 109c2093 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c2099u);
  /* 109c2099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c209c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c209e call 0x109c3f30 */
  push32(0x109c20a3u); f_109c3f30();
L_109c20a3:;
  /* 109c20a3 mov esi, esp */
  ESI = (ESP);
  /* 109c20a5 push 7 */
  push32((uint32_t)(0x7u));
  /* 109c20a7 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c20adu);
  /* 109c20ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c20b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c20b2 call 0x109c3f30 */
  push32(0x109c20b7u); f_109c3f30();
  /* 109c20b7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c20bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c20be je 0x109c21e5 */
  if (C.zf) goto L_109c21e5;
  /* 109c20c4 mov esi, esp */
  ESI = (ESP);
  /* 109c20c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c20c8 push 0x109f1468 */
  push32((uint32_t)(0x109f1468u));
  /* 109c20cd call dword ptr [0x109f4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4468))), 0x109c20d3u);
  /* 109c20d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c20d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c20d8 call 0x109c3f30 */
  push32(0x109c20ddu); f_109c3f30();
  /* 109c20dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c20df jne 0x109c21e5 */
  if (!C.zf) goto L_109c21e5;
  /* 109c20e5 mov esi, esp */
  ESI = (ESP);
  /* 109c20e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c20e9 push 7 */
  push32((uint32_t)(0x7u));
  /* 109c20eb call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c20f1u);
  /* 109c20f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c20f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c20f6 call 0x109c3f30 */
  push32(0x109c20fbu); f_109c3f30();
  /* 109c20fb mov esi, esp */
  ESI = (ESP);
  /* 109c20fd push 0x109ec334 */
  push32((uint32_t)(0x109ec334u));
  /* 109c2102 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c2108u);
  /* 109c2108 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c210b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c210d call 0x109c3f30 */
  push32(0x109c2112u); f_109c3f30();
  /* 109c2112 mov esi, esp */
  ESI = (ESP);
  /* 109c2114 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 109c2119 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c211b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c211d call dword ptr [0x109f4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4460))), 0x109c2123u);
  /* 109c2123 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2126 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2128 call 0x109c3f30 */
  push32(0x109c212du); f_109c3f30();
  /* 109c212d mov esi, esp */
  ESI = (ESP);
  /* 109c212f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 109c2134 push 5 */
  push32((uint32_t)(0x5u));
  /* 109c2136 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2138 call dword ptr [0x109f4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4460))), 0x109c213eu);
  /* 109c213e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2141 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2143 call 0x109c3f30 */
  push32(0x109c2148u); f_109c3f30();
  /* 109c2148 mov esi, esp */
  ESI = (ESP);
  /* 109c214a push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 109c214f push 4 */
  push32((uint32_t)(0x4u));
  /* 109c2151 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2153 call dword ptr [0x109f4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4460))), 0x109c2159u);
  /* 109c2159 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c215c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c215e call 0x109c3f30 */
  push32(0x109c2163u); f_109c3f30();
  /* 109c2163 mov esi, esp */
  ESI = (ESP);
  /* 109c2165 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2167 call dword ptr [0x109f4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4454))), 0x109c216du);
  /* 109c216d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2170 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2172 call 0x109c3f30 */
  push32(0x109c2177u); f_109c3f30();
  /* 109c2177 mov esi, esp */
  ESI = (ESP);
  /* 109c2179 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c217b push 0x109f13f8 */
  push32((uint32_t)(0x109f13f8u));
  /* 109c2180 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2186u);
  /* 109c2186 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2189 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c218b call 0x109c3f30 */
  push32(0x109c2190u); f_109c3f30();
  /* 109c2190 mov esi, esp */
  ESI = (ESP);
  /* 109c2192 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2194 call dword ptr [0x109f4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4470))), 0x109c219au);
  /* 109c219a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c219d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c219f call 0x109c3f30 */
  push32(0x109c21a4u); f_109c3f30();
  /* 109c21a4 mov esi, esp */
  ESI = (ESP);
  /* 109c21a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c21a8 call dword ptr [0x109f4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4454))), 0x109c21aeu);
  /* 109c21ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c21b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c21b3 call 0x109c3f30 */
  push32(0x109c21b8u); f_109c3f30();
  /* 109c21b8 mov esi, esp */
  ESI = (ESP);
  /* 109c21ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109c21bc push 0x109f13f8 */
  push32((uint32_t)(0x109f13f8u));
  /* 109c21c1 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c21c7u);
  /* 109c21c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c21ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c21cc call 0x109c3f30 */
  push32(0x109c21d1u); f_109c3f30();
  /* 109c21d1 mov esi, esp */
  ESI = (ESP);
  /* 109c21d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c21d5 call dword ptr [0x109f4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4470))), 0x109c21dbu);
  /* 109c21db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c21de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c21e0 call 0x109c3f30 */
  push32(0x109c21e5u); f_109c3f30();
L_109c21e5:;
  /* 109c21e5 mov esi, esp */
  ESI = (ESP);
  /* 109c21e7 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 109c21e9 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c21efu);
  /* 109c21ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c21f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c21f4 call 0x109c3f30 */
  push32(0x109c21f9u); f_109c3f30();
  /* 109c21f9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c21fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2200 jne 0x109c229f */
  if (!C.zf) goto L_109c229f;
  /* 109c2206 mov esi, esp */
  ESI = (ESP);
  /* 109c2208 push 8 */
  push32((uint32_t)(0x8u));
  /* 109c220a call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c2210u);
  /* 109c2210 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2213 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2215 call 0x109c3f30 */
  push32(0x109c221au); f_109c3f30();
  /* 109c221a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c221f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2221 je 0x109c229f */
  if (C.zf) goto L_109c229f;
  /* 109c2223 mov esi, esp */
  ESI = (ESP);
  /* 109c2225 push 0x109f1560 */
  push32((uint32_t)(0x109f1560u));
  /* 109c222a push 0x109f14c8 */
  push32((uint32_t)(0x109f14c8u));
  /* 109c222f call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c2235u);
  /* 109c2235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2238 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c223a call 0x109c3f30 */
  push32(0x109c223fu); f_109c3f30();
  /* 109c223f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2241 jle 0x109c229f */
  if ((C.zf||C.sf!=C.of)) goto L_109c229f;
  /* 109c2243 mov esi, esp */
  ESI = (ESP);
  /* 109c2245 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2247 push 8 */
  push32((uint32_t)(0x8u));
  /* 109c2249 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c224fu);
  /* 109c224f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2252 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2254 call 0x109c3f30 */
  push32(0x109c2259u); f_109c3f30();
  /* 109c2259 mov esi, esp */
  ESI = (ESP);
  /* 109c225b push 0x109ec32c */
  push32((uint32_t)(0x109ec32cu));
  /* 109c2260 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c2266u);
  /* 109c2266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c226b call 0x109c3f30 */
  push32(0x109c2270u); f_109c3f30();
  /* 109c2270 mov esi, esp */
  ESI = (ESP);
  /* 109c2272 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2274 push 0x109f1560 */
  push32((uint32_t)(0x109f1560u));
  /* 109c2279 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c227fu);
  /* 109c227f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2282 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2284 call 0x109c3f30 */
  push32(0x109c2289u); f_109c3f30();
  /* 109c2289 mov esi, esp */
  ESI = (ESP);
  /* 109c228b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c228d push 4 */
  push32((uint32_t)(0x4u));
  /* 109c228f call dword ptr [0x109f444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f444c))), 0x109c2295u);
  /* 109c2295 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2298 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c229a call 0x109c3f30 */
  push32(0x109c229fu); f_109c3f30();
L_109c229f:;
  /* 109c229f mov esi, esp */
  ESI = (ESP);
  /* 109c22a1 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c22a3 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c22a9u);
  /* 109c22a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c22ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c22ae call 0x109c3f30 */
  push32(0x109c22b3u); f_109c3f30();
  /* 109c22b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c22b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c22ba je 0x109c238b */
  if (C.zf) goto L_109c238b;
  /* 109c22c0 mov esi, esp */
  ESI = (ESP);
  /* 109c22c2 push 0x109f1410 */
  push32((uint32_t)(0x109f1410u));
  /* 109c22c7 push 0x109f1458 */
  push32((uint32_t)(0x109f1458u));
  /* 109c22cc call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c22d2u);
  /* 109c22d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c22d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c22d7 call 0x109c3f30 */
  push32(0x109c22dcu); f_109c3f30();
  /* 109c22dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c22de jle 0x109c238b */
  if ((C.zf||C.sf!=C.of)) goto L_109c238b;
  /* 109c22e4 mov esi, esp */
  ESI = (ESP);
  /* 109c22e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c22e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c22ea call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c22f0u);
  /* 109c22f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c22f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c22f5 call 0x109c3f30 */
  push32(0x109c22fau); f_109c3f30();
  /* 109c22fa mov esi, esp */
  ESI = (ESP);
  /* 109c22fc push 0x109ec324 */
  push32((uint32_t)(0x109ec324u));
  /* 109c2301 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c2307u);
  /* 109c2307 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c230a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c230c call 0x109c3f30 */
  push32(0x109c2311u); f_109c3f30();
  /* 109c2311 mov esi, esp */
  ESI = (ESP);
  /* 109c2313 push 0x109ec318 */
  push32((uint32_t)(0x109ec318u));
  /* 109c2318 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c231eu);
  /* 109c231e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2321 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2323 call 0x109c3f30 */
  push32(0x109c2328u); f_109c3f30();
  /* 109c2328 mov esi, esp */
  ESI = (ESP);
  /* 109c232a push 0x109ec30c */
  push32((uint32_t)(0x109ec30cu));
  /* 109c232f call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c2335u);
  /* 109c2335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2338 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c233a call 0x109c3f30 */
  push32(0x109c233fu); f_109c3f30();
  /* 109c233f mov esi, esp */
  ESI = (ESP);
  /* 109c2341 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2343 push 0x109f1588 */
  push32((uint32_t)(0x109f1588u));
  /* 109c2348 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c234eu);
  /* 109c234e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2353 call 0x109c3f30 */
  push32(0x109c2358u); f_109c3f30();
  /* 109c2358 mov esi, esp */
  ESI = (ESP);
  /* 109c235a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c235c push 0x78 */
  push32((uint32_t)(0x78u));
  /* 109c235e push 0x109f1478 */
  push32((uint32_t)(0x109f1478u));
  /* 109c2363 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c2365 call dword ptr [0x109f4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4474))), 0x109c236bu);
  /* 109c236b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c236e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2370 call 0x109c3f30 */
  push32(0x109c2375u); f_109c3f30();
  /* 109c2375 mov esi, esp */
  ESI = (ESP);
  /* 109c2377 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2379 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c237b call dword ptr [0x109f444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f444c))), 0x109c2381u);
  /* 109c2381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2384 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2386 call 0x109c3f30 */
  push32(0x109c238bu); f_109c3f30();
L_109c238b:;
  /* 109c238b mov esi, esp */
  ESI = (ESP);
  /* 109c238d push 0x29 */
  push32((uint32_t)(0x29u));
  /* 109c238f call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c2395u);
  /* 109c2395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2398 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c239a call 0x109c3f30 */
  push32(0x109c239fu); f_109c3f30();
  /* 109c239f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c23a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c23a6 jne 0x109c24b8 */
  if (!C.zf) goto L_109c24b8;
  /* 109c23ac mov esi, esp */
  ESI = (ESP);
  /* 109c23ae push 0xa */
  push32((uint32_t)(0xau));
  /* 109c23b0 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c23b6u);
  /* 109c23b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c23b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c23bb call 0x109c3f30 */
  push32(0x109c23c0u); f_109c3f30();
  /* 109c23c0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c23c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c23c7 je 0x109c24b8 */
  if (C.zf) goto L_109c24b8;
  /* 109c23cd mov esi, esp */
  ESI = (ESP);
  /* 109c23cf push 0x109f1410 */
  push32((uint32_t)(0x109f1410u));
  /* 109c23d4 push 0x109f1460 */
  push32((uint32_t)(0x109f1460u));
  /* 109c23d9 call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c23dfu);
  /* 109c23df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c23e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c23e4 call 0x109c3f30 */
  push32(0x109c23e9u); f_109c3f30();
  /* 109c23e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c23eb jle 0x109c24b8 */
  if ((C.zf||C.sf!=C.of)) goto L_109c24b8;
  /* 109c23f1 mov esi, esp */
  ESI = (ESP);
  /* 109c23f3 push 0x109f1538 */
  push32((uint32_t)(0x109f1538u));
  /* 109c23f8 push 0x109f1460 */
  push32((uint32_t)(0x109f1460u));
  /* 109c23fd call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c2403u);
  /* 109c2403 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2406 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2408 call 0x109c3f30 */
  push32(0x109c240du); f_109c3f30();
  /* 109c240d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c240f jle 0x109c24b8 */
  if ((C.zf||C.sf!=C.of)) goto L_109c24b8;
  /* 109c2415 mov esi, esp */
  ESI = (ESP);
  /* 109c2417 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2419 push 0xa */
  push32((uint32_t)(0xau));
  /* 109c241b call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2421u);
  /* 109c2421 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2424 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2426 call 0x109c3f30 */
  push32(0x109c242bu); f_109c3f30();
  /* 109c242b mov esi, esp */
  ESI = (ESP);
  /* 109c242d push 0x109ec300 */
  push32((uint32_t)(0x109ec300u));
  /* 109c2432 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c2438u);
  /* 109c2438 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c243b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c243d call 0x109c3f30 */
  push32(0x109c2442u); f_109c3f30();
  /* 109c2442 mov esi, esp */
  ESI = (ESP);
  /* 109c2444 push 0x109ec2f4 */
  push32((uint32_t)(0x109ec2f4u));
  /* 109c2449 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c244fu);
  /* 109c244f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2452 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2454 call 0x109c3f30 */
  push32(0x109c2459u); f_109c3f30();
  /* 109c2459 mov esi, esp */
  ESI = (ESP);
  /* 109c245b push 0x109ec2e8 */
  push32((uint32_t)(0x109ec2e8u));
  /* 109c2460 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c2466u);
  /* 109c2466 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c246b call 0x109c3f30 */
  push32(0x109c2470u); f_109c3f30();
  /* 109c2470 mov esi, esp */
  ESI = (ESP);
  /* 109c2472 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2474 push 0x109f1570 */
  push32((uint32_t)(0x109f1570u));
  /* 109c2479 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c247fu);
  /* 109c247f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2482 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2484 call 0x109c3f30 */
  push32(0x109c2489u); f_109c3f30();
  /* 109c2489 mov esi, esp */
  ESI = (ESP);
  /* 109c248b push 1 */
  push32((uint32_t)(0x1u));
  /* 109c248d push 0x109f1538 */
  push32((uint32_t)(0x109f1538u));
  /* 109c2492 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2498u);
  /* 109c2498 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c249b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c249d call 0x109c3f30 */
  push32(0x109c24a2u); f_109c3f30();
  /* 109c24a2 mov esi, esp */
  ESI = (ESP);
  /* 109c24a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c24a6 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c24a8 call dword ptr [0x109f444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f444c))), 0x109c24aeu);
  /* 109c24ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c24b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c24b3 call 0x109c3f30 */
  push32(0x109c24b8u); f_109c3f30();
L_109c24b8:;
  /* 109c24b8 mov esi, esp */
  ESI = (ESP);
  /* 109c24ba push 0xb */
  push32((uint32_t)(0xbu));
  /* 109c24bc call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c24c2u);
  /* 109c24c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c24c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c24c7 call 0x109c3f30 */
  push32(0x109c24ccu); f_109c3f30();
  /* 109c24cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c24d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c24d3 je 0x109c254b */
  if (C.zf) goto L_109c254b;
  /* 109c24d5 mov esi, esp */
  ESI = (ESP);
  /* 109c24d7 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109c24d9 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c24dfu);
  /* 109c24df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c24e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c24e4 call 0x109c3f30 */
  push32(0x109c24e9u); f_109c3f30();
  /* 109c24e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c24ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c24f0 jne 0x109c254b */
  if (!C.zf) goto L_109c254b;
  /* 109c24f2 mov esi, esp */
  ESI = (ESP);
  /* 109c24f4 push 0xe */
  push32((uint32_t)(0xeu));
  /* 109c24f6 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c24fcu);
  /* 109c24fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c24ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2501 call 0x109c3f30 */
  push32(0x109c2506u); f_109c3f30();
  /* 109c2506 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c250b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c250d jne 0x109c254b */
  if (!C.zf) goto L_109c254b;
  /* 109c250f mov esi, esp */
  ESI = (ESP);
  /* 109c2511 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2513 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109c2515 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c251bu);
  /* 109c251b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c251e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2520 call 0x109c3f30 */
  push32(0x109c2525u); f_109c3f30();
  /* 109c2525 mov esi, esp */
  ESI = (ESP);
  /* 109c2527 push 0x109ec2dc */
  push32((uint32_t)(0x109ec2dcu));
  /* 109c252c call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c2532u);
  /* 109c2532 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2535 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2537 call 0x109c3f30 */
  push32(0x109c253cu); f_109c3f30();
  /* 109c253c mov esi, esp */
  ESI = (ESP);
  /* 109c253e call dword ptr [0x109f446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f446c))), 0x109c2544u);
  /* 109c2544 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2546 call 0x109c3f30 */
  push32(0x109c254bu); f_109c3f30();
L_109c254b:;
  /* 109c254b mov esi, esp */
  ESI = (ESP);
  /* 109c254d push 0xc */
  push32((uint32_t)(0xcu));
  /* 109c254f call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c2555u);
  /* 109c2555 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2558 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c255a call 0x109c3f30 */
  push32(0x109c255fu); f_109c3f30();
  /* 109c255f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2566 je 0x109c25ec */
  if (C.zf) goto L_109c25ec;
  /* 109c256c push 0x109f1410 */
  push32((uint32_t)(0x109f1410u));
  /* 109c2571 call 0x109c1005 */
  push32(0x109c2576u); f_109c1005();
  /* 109c2576 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2579 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c257b jne 0x109c25ec */
  if (!C.zf) goto L_109c25ec;
  /* 109c257d mov esi, esp */
  ESI = (ESP);
  /* 109c257f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2581 push 0xc */
  push32((uint32_t)(0xcu));
  /* 109c2583 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2589u);
  /* 109c2589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c258c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c258e call 0x109c3f30 */
  push32(0x109c2593u); f_109c3f30();
  /* 109c2593 mov esi, esp */
  ESI = (ESP);
  /* 109c2595 push 3 */
  push32((uint32_t)(0x3u));
  /* 109c2597 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2599 call dword ptr [0x109f447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f447c))), 0x109c259fu);
  /* 109c259f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c25a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c25a4 call 0x109c3f30 */
  push32(0x109c25a9u); f_109c3f30();
  /* 109c25a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c25ab jne 0x109c25c6 */
  if (!C.zf) goto L_109c25c6;
  /* 109c25ad mov esi, esp */
  ESI = (ESP);
  /* 109c25af push 0x109ec2d0 */
  push32((uint32_t)(0x109ec2d0u));
  /* 109c25b4 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c25bau);
  /* 109c25ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c25bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c25bf call 0x109c3f30 */
  push32(0x109c25c4u); f_109c3f30();
  /* 109c25c4 jmp 0x109c25dd */
  goto L_109c25dd;
L_109c25c6:;
  /* 109c25c6 mov esi, esp */
  ESI = (ESP);
  /* 109c25c8 push 0x109ec2c4 */
  push32((uint32_t)(0x109ec2c4u));
  /* 109c25cd call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c25d3u);
  /* 109c25d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c25d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c25d8 call 0x109c3f30 */
  push32(0x109c25ddu); f_109c3f30();
L_109c25dd:;
  /* 109c25dd mov esi, esp */
  ESI = (ESP);
  /* 109c25df call dword ptr [0x109f4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4480))), 0x109c25e5u);
  /* 109c25e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c25e7 call 0x109c3f30 */
  push32(0x109c25ecu); f_109c3f30();
L_109c25ec:;
  /* 109c25ec mov esi, esp */
  ESI = (ESP);
  /* 109c25ee push 0xd */
  push32((uint32_t)(0xdu));
  /* 109c25f0 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c25f6u);
  /* 109c25f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c25f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c25fb call 0x109c3f30 */
  push32(0x109c2600u); f_109c3f30();
  /* 109c2600 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2607 je 0x109c2674 */
  if (C.zf) goto L_109c2674;
  /* 109c2609 push 0x109f15d0 */
  push32((uint32_t)(0x109f15d0u));
  /* 109c260e call 0x109c1005 */
  push32(0x109c2613u); f_109c1005();
  /* 109c2613 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2616 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2618 jne 0x109c2674 */
  if (!C.zf) goto L_109c2674;
  /* 109c261a mov esi, esp */
  ESI = (ESP);
  /* 109c261c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c261e push 0xd */
  push32((uint32_t)(0xdu));
  /* 109c2620 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2626u);
  /* 109c2626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c262b call 0x109c3f30 */
  push32(0x109c2630u); f_109c3f30();
  /* 109c2630 mov esi, esp */
  ESI = (ESP);
  /* 109c2632 push 0x109ec2b8 */
  push32((uint32_t)(0x109ec2b8u));
  /* 109c2637 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c263du);
  /* 109c263d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2640 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2642 call 0x109c3f30 */
  push32(0x109c2647u); f_109c3f30();
  /* 109c2647 mov esi, esp */
  ESI = (ESP);
  /* 109c2649 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c264b push 0x109f1558 */
  push32((uint32_t)(0x109f1558u));
  /* 109c2650 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2656u);
  /* 109c2656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2659 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c265b call 0x109c3f30 */
  push32(0x109c2660u); f_109c3f30();
  /* 109c2660 mov esi, esp */
  ESI = (ESP);
  /* 109c2662 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2664 call dword ptr [0x109f4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4470))), 0x109c266au);
  /* 109c266a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c266d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c266f call 0x109c3f30 */
  push32(0x109c2674u); f_109c3f30();
L_109c2674:;
  /* 109c2674 mov esi, esp */
  ESI = (ESP);
  /* 109c2676 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 109c2678 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c267eu);
  /* 109c267e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2681 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2683 call 0x109c3f30 */
  push32(0x109c2688u); f_109c3f30();
  /* 109c2688 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c268d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c268f je 0x109c26e5 */
  if (C.zf) goto L_109c26e5;
  /* 109c2691 push 0x109f1578 */
  push32((uint32_t)(0x109f1578u));
  /* 109c2696 call 0x109c1005 */
  push32(0x109c269bu); f_109c1005();
  /* 109c269b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c269e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c26a0 jne 0x109c26e5 */
  if (!C.zf) goto L_109c26e5;
  /* 109c26a2 mov esi, esp */
  ESI = (ESP);
  /* 109c26a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c26a6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 109c26a8 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c26aeu);
  /* 109c26ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c26b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c26b3 call 0x109c3f30 */
  push32(0x109c26b8u); f_109c3f30();
  /* 109c26b8 mov esi, esp */
  ESI = (ESP);
  /* 109c26ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109c26bc push 0x109f1400 */
  push32((uint32_t)(0x109f1400u));
  /* 109c26c1 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c26c7u);
  /* 109c26c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c26ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c26cc call 0x109c3f30 */
  push32(0x109c26d1u); f_109c3f30();
  /* 109c26d1 mov esi, esp */
  ESI = (ESP);
  /* 109c26d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c26d5 call dword ptr [0x109f4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4470))), 0x109c26dbu);
  /* 109c26db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c26de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c26e0 call 0x109c3f30 */
  push32(0x109c26e5u); f_109c3f30();
L_109c26e5:;
  /* 109c26e5 mov esi, esp */
  ESI = (ESP);
  /* 109c26e7 push 0xe */
  push32((uint32_t)(0xeu));
  /* 109c26e9 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c26efu);
  /* 109c26ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c26f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c26f4 call 0x109c3f30 */
  push32(0x109c26f9u); f_109c3f30();
  /* 109c26f9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c26fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2700 je 0x109c2740 */
  if (C.zf) goto L_109c2740;
  /* 109c2702 push 0x109f1400 */
  push32((uint32_t)(0x109f1400u));
  /* 109c2707 call 0x109c1005 */
  push32(0x109c270cu); f_109c1005();
  /* 109c270c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c270f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2711 jne 0x109c2740 */
  if (!C.zf) goto L_109c2740;
  /* 109c2713 mov esi, esp */
  ESI = (ESP);
  /* 109c2715 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2717 push 0xe */
  push32((uint32_t)(0xeu));
  /* 109c2719 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c271fu);
  /* 109c271f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2722 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2724 call 0x109c3f30 */
  push32(0x109c2729u); f_109c3f30();
  /* 109c2729 mov esi, esp */
  ESI = (ESP);
  /* 109c272b push 0x109ec2ac */
  push32((uint32_t)(0x109ec2acu));
  /* 109c2730 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c2736u);
  /* 109c2736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c273b call 0x109c3f30 */
  push32(0x109c2740u); f_109c3f30();
L_109c2740:;
  /* 109c2740 mov esi, esp */
  ESI = (ESP);
  /* 109c2742 push 0xf */
  push32((uint32_t)(0xfu));
  /* 109c2744 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c274au);
  /* 109c274a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c274d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c274f call 0x109c3f30 */
  push32(0x109c2754u); f_109c3f30();
  /* 109c2754 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c275b je 0x109c27d9 */
  if (C.zf) goto L_109c27d9;
  /* 109c275d mov esi, esp */
  ESI = (ESP);
  /* 109c275f push 0x109f1410 */
  push32((uint32_t)(0x109f1410u));
  /* 109c2764 push 0x109f1480 */
  push32((uint32_t)(0x109f1480u));
  /* 109c2769 call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c276fu);
  /* 109c276f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2772 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2774 call 0x109c3f30 */
  push32(0x109c2779u); f_109c3f30();
  /* 109c2779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c277b jle 0x109c27d9 */
  if ((C.zf||C.sf!=C.of)) goto L_109c27d9;
  /* 109c277d mov esi, esp */
  ESI = (ESP);
  /* 109c277f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2781 push 0xf */
  push32((uint32_t)(0xfu));
  /* 109c2783 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2789u);
  /* 109c2789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c278c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c278e call 0x109c3f30 */
  push32(0x109c2793u); f_109c3f30();
  /* 109c2793 mov esi, esp */
  ESI = (ESP);
  /* 109c2795 push 0x109ec2a0 */
  push32((uint32_t)(0x109ec2a0u));
  /* 109c279a call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c27a0u);
  /* 109c27a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c27a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c27a5 call 0x109c3f30 */
  push32(0x109c27aau); f_109c3f30();
  /* 109c27aa mov esi, esp */
  ESI = (ESP);
  /* 109c27ac push 0 */
  push32((uint32_t)(0x0u));
  /* 109c27ae push 0x109f1550 */
  push32((uint32_t)(0x109f1550u));
  /* 109c27b3 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c27b9u);
  /* 109c27b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c27bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c27be call 0x109c3f30 */
  push32(0x109c27c3u); f_109c3f30();
  /* 109c27c3 mov esi, esp */
  ESI = (ESP);
  /* 109c27c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c27c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c27c9 call dword ptr [0x109f444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f444c))), 0x109c27cfu);
  /* 109c27cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c27d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c27d4 call 0x109c3f30 */
  push32(0x109c27d9u); f_109c3f30();
L_109c27d9:;
  /* 109c27d9 mov esi, esp */
  ESI = (ESP);
  /* 109c27db push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109c27dd call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c27e3u);
  /* 109c27e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c27e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c27e8 call 0x109c3f30 */
  push32(0x109c27edu); f_109c3f30();
  /* 109c27ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c27f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c27f4 je 0x109c285e */
  if (C.zf) goto L_109c285e;
  /* 109c27f6 mov esi, esp */
  ESI = (ESP);
  /* 109c27f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c27fa push 0x109f1488 */
  push32((uint32_t)(0x109f1488u));
  /* 109c27ff call dword ptr [0x109f4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4468))), 0x109c2805u);
  /* 109c2805 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2808 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c280a call 0x109c3f30 */
  push32(0x109c280fu); f_109c3f30();
  /* 109c280f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2811 jle 0x109c285e */
  if ((C.zf||C.sf!=C.of)) goto L_109c285e;
  /* 109c2813 mov esi, esp */
  ESI = (ESP);
  /* 109c2815 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2817 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109c2819 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c281fu);
  /* 109c281f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2822 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2824 call 0x109c3f30 */
  push32(0x109c2829u); f_109c3f30();
  /* 109c2829 mov esi, esp */
  ESI = (ESP);
  /* 109c282b push 0x109ec294 */
  push32((uint32_t)(0x109ec294u));
  /* 109c2830 call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c2836u);
  /* 109c2836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2839 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c283b call 0x109c3f30 */
  push32(0x109c2840u); f_109c3f30();
  /* 109c2840 mov esi, esp */
  ESI = (ESP);
  /* 109c2842 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2844 push 0x109f1488 */
  push32((uint32_t)(0x109f1488u));
  /* 109c2849 push 0x109f15c8 */
  push32((uint32_t)(0x109f15c8u));
  /* 109c284e call dword ptr [0x109f4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4478))), 0x109c2854u);
  /* 109c2854 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2857 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2859 call 0x109c3f30 */
  push32(0x109c285eu); f_109c3f30();
L_109c285e:;
  /* 109c285e mov esi, esp */
  ESI = (ESP);
  /* 109c2860 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109c2862 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c2868u);
  /* 109c2868 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c286b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c286d call 0x109c3f30 */
  push32(0x109c2872u); f_109c3f30();
  /* 109c2872 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2877 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2879 je 0x109c28de */
  if (C.zf) goto L_109c28de;
  /* 109c287b mov esi, esp */
  ESI = (ESP);
  /* 109c287d push 5 */
  push32((uint32_t)(0x5u));
  /* 109c287f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2881 call dword ptr [0x109f447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f447c))), 0x109c2887u);
  /* 109c2887 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c288a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c288c call 0x109c3f30 */
  push32(0x109c2891u); f_109c3f30();
  /* 109c2891 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2894 jl 0x109c28b1 */
  if ((C.sf!=C.of)) goto L_109c28b1;
  /* 109c2896 mov esi, esp */
  ESI = (ESP);
  /* 109c2898 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c289a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c289c call dword ptr [0x109f447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f447c))), 0x109c28a2u);
  /* 109c28a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c28a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c28a7 call 0x109c3f30 */
  push32(0x109c28acu); f_109c3f30();
  /* 109c28ac cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c28af jge 0x109c28de */
  if ((C.sf==C.of)) goto L_109c28de;
L_109c28b1:;
  /* 109c28b1 mov esi, esp */
  ESI = (ESP);
  /* 109c28b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c28b5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109c28b7 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c28bdu);
  /* 109c28bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c28c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c28c2 call 0x109c3f30 */
  push32(0x109c28c7u); f_109c3f30();
  /* 109c28c7 mov esi, esp */
  ESI = (ESP);
  /* 109c28c9 push 0x109ec288 */
  push32((uint32_t)(0x109ec288u));
  /* 109c28ce call dword ptr [0x109f4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4438))), 0x109c28d4u);
  /* 109c28d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c28d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c28d9 call 0x109c3f30 */
  push32(0x109c28deu); f_109c3f30();
L_109c28de:;
  /* 109c28de mov esi, esp */
  ESI = (ESP);
  /* 109c28e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 109c28e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c28e4 call dword ptr [0x109f447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f447c))), 0x109c28eau);
  /* 109c28ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c28ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c28ef call 0x109c3f30 */
  push32(0x109c28f4u); f_109c3f30();
  /* 109c28f4 cmp eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c28f7 jle 0x109c292a */
  if ((C.zf||C.sf!=C.of)) goto L_109c292a;
  /* 109c28f9 mov esi, esp */
  ESI = (ESP);
  /* 109c28fb push 4 */
  push32((uint32_t)(0x4u));
  /* 109c28fd push 0 */
  push32((uint32_t)(0x0u));
  /* 109c28ff call dword ptr [0x109f447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f447c))), 0x109c2905u);
  /* 109c2905 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2908 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c290a call 0x109c3f30 */
  push32(0x109c290fu); f_109c3f30();
  /* 109c290f cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2912 jle 0x109c292a */
  if ((C.zf||C.sf!=C.of)) goto L_109c292a;
  /* 109c2914 mov esi, esp */
  ESI = (ESP);
  /* 109c2916 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2918 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109c291a call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2920u);
  /* 109c2920 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2923 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2925 call 0x109c3f30 */
  push32(0x109c292au); f_109c3f30();
L_109c292a:;
  /* 109c292a mov esi, esp */
  ESI = (ESP);
  /* 109c292c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 109c292e call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c2934u);
  /* 109c2934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2937 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2939 call 0x109c3f30 */
  push32(0x109c293eu); f_109c3f30();
  /* 109c293e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2943 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2945 je 0x109c29e7 */
  if (C.zf) goto L_109c29e7;
  /* 109c294b mov esi, esp */
  ESI = (ESP);
  /* 109c294d call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c2953u);
  /* 109c2953 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2955 call 0x109c3f30 */
  push32(0x109c295au); f_109c3f30();
  /* 109c295a cmp eax, 0x5dc */
  { uint32_t _a=(EAX),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c295f jle 0x109c29e7 */
  if ((C.zf||C.sf!=C.of)) goto L_109c29e7;
  /* 109c2965 mov esi, esp */
  ESI = (ESP);
  /* 109c2967 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2969 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 109c296b call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2971u);
  /* 109c2971 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2974 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2976 call 0x109c3f30 */
  push32(0x109c297bu); f_109c3f30();
  /* 109c297b mov esi, esp */
  ESI = (ESP);
  /* 109c297d push 0 */
  push32((uint32_t)(0x0u));
  /* 109c297f push 0x109f1430 */
  push32((uint32_t)(0x109f1430u));
  /* 109c2984 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c298au);
  /* 109c298a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c298d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c298f call 0x109c3f30 */
  push32(0x109c2994u); f_109c3f30();
  /* 109c2994 mov esi, esp */
  ESI = (ESP);
  /* 109c2996 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c2998 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c299a push 0x109f14d0 */
  push32((uint32_t)(0x109f14d0u));
  /* 109c299f push 1 */
  push32((uint32_t)(0x1u));
  /* 109c29a1 call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c29a7u);
  /* 109c29a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c29aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c29ac call 0x109c3f30 */
  push32(0x109c29b1u); f_109c3f30();
  /* 109c29b1 mov esi, esp */
  ESI = (ESP);
  /* 109c29b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c29b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c29b7 push 0x109f14d8 */
  push32((uint32_t)(0x109f14d8u));
  /* 109c29bc push 1 */
  push32((uint32_t)(0x1u));
  /* 109c29be call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c29c4u);
  /* 109c29c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c29c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c29c9 call 0x109c3f30 */
  push32(0x109c29ceu); f_109c3f30();
  /* 109c29ce mov esi, esp */
  ESI = (ESP);
  /* 109c29d0 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 109c29d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c29d7 call dword ptr [0x109f4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4450))), 0x109c29ddu);
  /* 109c29dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c29e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c29e2 call 0x109c3f30 */
  push32(0x109c29e7u); f_109c3f30();
L_109c29e7:;
  /* 109c29e7 mov esi, esp */
  ESI = (ESP);
  /* 109c29e9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 109c29eb call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c29f1u);
  /* 109c29f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c29f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c29f6 call 0x109c3f30 */
  push32(0x109c29fbu); f_109c3f30();
  /* 109c29fb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2a00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2a02 je 0x109c2a73 */
  if (C.zf) goto L_109c2a73;
  /* 109c2a04 mov esi, esp */
  ESI = (ESP);
  /* 109c2a06 push 0x109f1430 */
  push32((uint32_t)(0x109f1430u));
  /* 109c2a0b push 0x109f14d8 */
  push32((uint32_t)(0x109f14d8u));
  /* 109c2a10 call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c2a16u);
  /* 109c2a16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2a19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2a1b call 0x109c3f30 */
  push32(0x109c2a20u); f_109c3f30();
  /* 109c2a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2a22 jle 0x109c2a73 */
  if ((C.zf||C.sf!=C.of)) goto L_109c2a73;
  /* 109c2a24 mov esi, esp */
  ESI = (ESP);
  /* 109c2a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2a28 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 109c2a2a call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2a30u);
  /* 109c2a30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2a33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2a35 call 0x109c3f30 */
  push32(0x109c2a3au); f_109c3f30();
  /* 109c2a3a mov esi, esp */
  ESI = (ESP);
  /* 109c2a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2a3e push 0x109f15a0 */
  push32((uint32_t)(0x109f15a0u));
  /* 109c2a43 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2a49u);
  /* 109c2a49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2a4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2a4e call 0x109c3f30 */
  push32(0x109c2a53u); f_109c3f30();
  /* 109c2a53 mov esi, esp */
  ESI = (ESP);
  /* 109c2a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2a57 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 109c2a5c push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c2a61 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c2a63 call dword ptr [0x109f4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4474))), 0x109c2a69u);
  /* 109c2a69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2a6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2a6e call 0x109c3f30 */
  push32(0x109c2a73u); f_109c3f30();
L_109c2a73:;
  /* 109c2a73 mov esi, esp */
  ESI = (ESP);
  /* 109c2a75 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c2a77 call dword ptr [0x109f4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4448))), 0x109c2a7du);
  /* 109c2a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2a80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2a82 call 0x109c3f30 */
  push32(0x109c2a87u); f_109c3f30();
  /* 109c2a87 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2a8e je 0x109c2ae3 */
  if (C.zf) goto L_109c2ae3;
  /* 109c2a90 mov esi, esp */
  ESI = (ESP);
  /* 109c2a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2a94 push 0x109f1448 */
  push32((uint32_t)(0x109f1448u));
  /* 109c2a99 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2a9fu);
  /* 109c2a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2aa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2aa4 call 0x109c3f30 */
  push32(0x109c2aa9u); f_109c3f30();
  /* 109c2aa9 mov esi, esp */
  ESI = (ESP);
  /* 109c2aab push 2 */
  push32((uint32_t)(0x2u));
  /* 109c2aad push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2aaf push 0x109f14d0 */
  push32((uint32_t)(0x109f14d0u));
  /* 109c2ab4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2ab6 call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c2abcu);
  /* 109c2abc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2abf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2ac1 call 0x109c3f30 */
  push32(0x109c2ac6u); f_109c3f30();
  /* 109c2ac6 mov esi, esp */
  ESI = (ESP);
  /* 109c2ac8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c2aca push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2acc push 0x109f14d8 */
  push32((uint32_t)(0x109f14d8u));
  /* 109c2ad1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2ad3 call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c2ad9u);
  /* 109c2ad9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2adc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2ade call 0x109c3f30 */
  push32(0x109c2ae3u); f_109c3f30();
L_109c2ae3:;
  /* 109c2ae3 mov esi, esp */
  ESI = (ESP);
  /* 109c2ae5 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 109c2ae7 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c2aedu);
  /* 109c2aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2af0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2af2 call 0x109c3f30 */
  push32(0x109c2af7u); f_109c3f30();
  /* 109c2af7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2afe je 0x109c2c5e */
  if (C.zf) goto L_109c2c5e;
  /* 109c2b04 push 0x109f1420 */
  push32((uint32_t)(0x109f1420u));
  /* 109c2b09 call 0x109c1005 */
  push32(0x109c2b0eu); f_109c1005();
  /* 109c2b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2b13 jne 0x109c2c5e */
  if (!C.zf) goto L_109c2c5e;
  /* 109c2b19 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c2b1b push 0x109f14c0 */
  push32((uint32_t)(0x109f14c0u));
  /* 109c2b20 call 0x109c100f */
  push32(0x109c2b25u); f_109c100f();
  /* 109c2b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2b28 mov esi, eax */
  ESI = (EAX);
  /* 109c2b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2b2c push 0x109f14c0 */
  push32((uint32_t)(0x109f14c0u));
  /* 109c2b31 call 0x109c100f */
  push32(0x109c2b36u); f_109c100f();
  /* 109c2b36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2b39 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2b3b cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2b3e jge 0x109c2c5e */
  if ((C.sf==C.of)) goto L_109c2c5e;
  /* 109c2b44 mov esi, esp */
  ESI = (ESP);
  /* 109c2b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2b48 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 109c2b4a call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2b50u);
  /* 109c2b50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2b53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2b55 call 0x109c3f30 */
  push32(0x109c2b5au); f_109c3f30();
  /* 109c2b5a mov esi, esp */
  ESI = (ESP);
  /* 109c2b5c push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2b5e call dword ptr [0x109f4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4454))), 0x109c2b64u);
  /* 109c2b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2b67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2b69 call 0x109c3f30 */
  push32(0x109c2b6eu); f_109c3f30();
  /* 109c2b6e mov esi, esp */
  ESI = (ESP);
  /* 109c2b70 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c2b72 call dword ptr [0x109f4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4454))), 0x109c2b78u);
  /* 109c2b78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2b7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2b7d call 0x109c3f30 */
  push32(0x109c2b82u); f_109c3f30();
  /* 109c2b82 mov esi, esp */
  ESI = (ESP);
  /* 109c2b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2b86 call dword ptr [0x109f4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4454))), 0x109c2b8cu);
  /* 109c2b8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2b8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2b91 call 0x109c3f30 */
  push32(0x109c2b96u); f_109c3f30();
  /* 109c2b96 mov esi, esp */
  ESI = (ESP);
  /* 109c2b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2b9a push 0x109f1440 */
  push32((uint32_t)(0x109f1440u));
  /* 109c2b9f push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2ba1 call dword ptr [0x109f4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4464))), 0x109c2ba7u);
  /* 109c2ba7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2baa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2bac call 0x109c3f30 */
  push32(0x109c2bb1u); f_109c3f30();
  /* 109c2bb1 mov esi, esp */
  ESI = (ESP);
  /* 109c2bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2bb5 call dword ptr [0x109f4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4470))), 0x109c2bbbu);
  /* 109c2bbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2bbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2bc0 call 0x109c3f30 */
  push32(0x109c2bc5u); f_109c3f30();
  /* 109c2bc5 mov esi, esp */
  ESI = (ESP);
  /* 109c2bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2bc9 push 0x109f1440 */
  push32((uint32_t)(0x109f1440u));
  /* 109c2bce push 4 */
  push32((uint32_t)(0x4u));
  /* 109c2bd0 call dword ptr [0x109f4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4464))), 0x109c2bd6u);
  /* 109c2bd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2bd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2bdb call 0x109c3f30 */
  push32(0x109c2be0u); f_109c3f30();
  /* 109c2be0 mov esi, esp */
  ESI = (ESP);
  /* 109c2be2 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c2be4 call dword ptr [0x109f4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4470))), 0x109c2beau);
  /* 109c2bea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2bed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2bef call 0x109c3f30 */
  push32(0x109c2bf4u); f_109c3f30();
  /* 109c2bf4 mov esi, esp */
  ESI = (ESP);
  /* 109c2bf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2bf8 push 0x109f1430 */
  push32((uint32_t)(0x109f1430u));
  /* 109c2bfd call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2c03u);
  /* 109c2c03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2c06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2c08 call 0x109c3f30 */
  push32(0x109c2c0du); f_109c3f30();
  /* 109c2c0d mov esi, esp */
  ESI = (ESP);
  /* 109c2c0f push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2c11 push 0x109f1448 */
  push32((uint32_t)(0x109f1448u));
  /* 109c2c16 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2c1cu);
  /* 109c2c1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2c1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2c21 call 0x109c3f30 */
  push32(0x109c2c26u); f_109c3f30();
  /* 109c2c26 mov esi, esp */
  ESI = (ESP);
  /* 109c2c28 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2c2a push 0x109f1438 */
  push32((uint32_t)(0x109f1438u));
  /* 109c2c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2c31 call dword ptr [0x109f4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4464))), 0x109c2c37u);
  /* 109c2c37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2c3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2c3c call 0x109c3f30 */
  push32(0x109c2c41u); f_109c3f30();
  /* 109c2c41 mov esi, esp */
  ESI = (ESP);
  /* 109c2c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2c47 push 0x109f14d0 */
  push32((uint32_t)(0x109f14d0u));
  /* 109c2c4c push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2c4e call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c2c54u);
  /* 109c2c54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2c57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2c59 call 0x109c3f30 */
  push32(0x109c2c5eu); f_109c3f30();
L_109c2c5e:;
  /* 109c2c5e mov esi, esp */
  ESI = (ESP);
  /* 109c2c60 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 109c2c62 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c2c68u);
  /* 109c2c68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2c6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2c6d call 0x109c3f30 */
  push32(0x109c2c72u); f_109c3f30();
  /* 109c2c72 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2c77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2c79 je 0x109c2cf3 */
  if (C.zf) goto L_109c2cf3;
  /* 109c2c7b mov esi, esp */
  ESI = (ESP);
  /* 109c2c7d call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c2c83u);
  /* 109c2c83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2c85 call 0x109c3f30 */
  push32(0x109c2c8au); f_109c3f30();
  /* 109c2c8a cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2c8f jle 0x109c2cf3 */
  if ((C.zf||C.sf!=C.of)) goto L_109c2cf3;
  /* 109c2c91 mov esi, esp */
  ESI = (ESP);
  /* 109c2c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2c95 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 109c2c97 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2c9du);
  /* 109c2c9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2ca0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2ca2 call 0x109c3f30 */
  push32(0x109c2ca7u); f_109c3f30();
  /* 109c2ca7 mov esi, esp */
  ESI = (ESP);
  /* 109c2ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2cab push 0x109f1530 */
  push32((uint32_t)(0x109f1530u));
  /* 109c2cb0 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2cb6u);
  /* 109c2cb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2cb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2cbb call 0x109c3f30 */
  push32(0x109c2cc0u); f_109c3f30();
  /* 109c2cc0 mov esi, esp */
  ESI = (ESP);
  /* 109c2cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2cc6 push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c2ccb push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2ccd call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c2cd3u);
  /* 109c2cd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2cd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2cd8 call 0x109c3f30 */
  push32(0x109c2cddu); f_109c3f30();
  /* 109c2cdd mov esi, esp */
  ESI = (ESP);
  /* 109c2cdf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 109c2ce1 push 0xa */
  push32((uint32_t)(0xau));
  /* 109c2ce3 call dword ptr [0x109f4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4450))), 0x109c2ce9u);
  /* 109c2ce9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2cec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2cee call 0x109c3f30 */
  push32(0x109c2cf3u); f_109c3f30();
L_109c2cf3:;
  /* 109c2cf3 mov esi, esp */
  ESI = (ESP);
  /* 109c2cf5 push 0xa */
  push32((uint32_t)(0xau));
  /* 109c2cf7 call dword ptr [0x109f4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4484))), 0x109c2cfdu);
  /* 109c2cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2d00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2d02 call 0x109c3f30 */
  push32(0x109c2d07u); f_109c3f30();
  /* 109c2d07 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2d0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2d0e je 0x109c2d67 */
  if (C.zf) goto L_109c2d67;
  /* 109c2d10 mov esi, esp */
  ESI = (ESP);
  /* 109c2d12 push 0x109f1530 */
  push32((uint32_t)(0x109f1530u));
  /* 109c2d17 push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c2d1c call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c2d22u);
  /* 109c2d22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2d25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2d27 call 0x109c3f30 */
  push32(0x109c2d2cu); f_109c3f30();
  /* 109c2d2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2d2e jle 0x109c2d67 */
  if ((C.zf||C.sf!=C.of)) goto L_109c2d67;
  /* 109c2d30 mov esi, esp */
  ESI = (ESP);
  /* 109c2d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2d34 push 0x109f14e0 */
  push32((uint32_t)(0x109f14e0u));
  /* 109c2d39 push 0x109f1530 */
  push32((uint32_t)(0x109f1530u));
  /* 109c2d3e call dword ptr [0x109f4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4478))), 0x109c2d44u);
  /* 109c2d44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2d47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2d49 call 0x109c3f30 */
  push32(0x109c2d4eu); f_109c3f30();
  /* 109c2d4e mov esi, esp */
  ESI = (ESP);
  /* 109c2d50 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 109c2d55 push 0xa */
  push32((uint32_t)(0xau));
  /* 109c2d57 call dword ptr [0x109f4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4450))), 0x109c2d5du);
  /* 109c2d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2d60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2d62 call 0x109c3f30 */
  push32(0x109c2d67u); f_109c3f30();
L_109c2d67:;
  /* 109c2d67 mov esi, esp */
  ESI = (ESP);
  /* 109c2d69 push 0xa */
  push32((uint32_t)(0xau));
  /* 109c2d6b call dword ptr [0x109f4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4484))), 0x109c2d71u);
  /* 109c2d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2d74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2d76 call 0x109c3f30 */
  push32(0x109c2d7bu); f_109c3f30();
  /* 109c2d7b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2d82 je 0x109c2de1 */
  if (C.zf) goto L_109c2de1;
  /* 109c2d84 push 0x109f1530 */
  push32((uint32_t)(0x109f1530u));
  /* 109c2d89 call 0x109c1005 */
  push32(0x109c2d8eu); f_109c1005();
  /* 109c2d8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2d91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2d93 jle 0x109c2de1 */
  if ((C.zf||C.sf!=C.of)) goto L_109c2de1;
  /* 109c2d95 mov esi, esp */
  ESI = (ESP);
  /* 109c2d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2d99 push 0x109f1530 */
  push32((uint32_t)(0x109f1530u));
  /* 109c2d9e call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2da4u);
  /* 109c2da4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2da7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2da9 call 0x109c3f30 */
  push32(0x109c2daeu); f_109c3f30();
  /* 109c2dae mov esi, esp */
  ESI = (ESP);
  /* 109c2db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2db4 push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c2db9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2dbb call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c2dc1u);
  /* 109c2dc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2dc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2dc6 call 0x109c3f30 */
  push32(0x109c2dcbu); f_109c3f30();
  /* 109c2dcb mov esi, esp */
  ESI = (ESP);
  /* 109c2dcd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 109c2dcf push 0xa */
  push32((uint32_t)(0xau));
  /* 109c2dd1 call dword ptr [0x109f4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4450))), 0x109c2dd7u);
  /* 109c2dd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2dda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2ddc call 0x109c3f30 */
  push32(0x109c2de1u); f_109c3f30();
L_109c2de1:;
  /* 109c2de1 mov esi, esp */
  ESI = (ESP);
  /* 109c2de3 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109c2de5 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c2debu);
  /* 109c2deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2dee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2df0 call 0x109c3f30 */
  push32(0x109c2df5u); f_109c3f30();
  /* 109c2df5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2dfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2dfc je 0x109c2e76 */
  if (C.zf) goto L_109c2e76;
  /* 109c2dfe mov esi, esp */
  ESI = (ESP);
  /* 109c2e00 call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c2e06u);
  /* 109c2e06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2e08 call 0x109c3f30 */
  push32(0x109c2e0du); f_109c3f30();
  /* 109c2e0d cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2e12 jle 0x109c2e76 */
  if ((C.zf||C.sf!=C.of)) goto L_109c2e76;
  /* 109c2e14 mov esi, esp */
  ESI = (ESP);
  /* 109c2e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2e18 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109c2e1a call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2e20u);
  /* 109c2e20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2e23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2e25 call 0x109c3f30 */
  push32(0x109c2e2au); f_109c3f30();
  /* 109c2e2a mov esi, esp */
  ESI = (ESP);
  /* 109c2e2c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2e2e push 0x109f1598 */
  push32((uint32_t)(0x109f1598u));
  /* 109c2e33 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2e39u);
  /* 109c2e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2e3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2e3e call 0x109c3f30 */
  push32(0x109c2e43u); f_109c3f30();
  /* 109c2e43 mov esi, esp */
  ESI = (ESP);
  /* 109c2e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2e47 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2e49 push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c2e4e push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2e50 call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c2e56u);
  /* 109c2e56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2e59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2e5b call 0x109c3f30 */
  push32(0x109c2e60u); f_109c3f30();
  /* 109c2e60 mov esi, esp */
  ESI = (ESP);
  /* 109c2e62 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 109c2e64 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109c2e66 call dword ptr [0x109f4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4450))), 0x109c2e6cu);
  /* 109c2e6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2e6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2e71 call 0x109c3f30 */
  push32(0x109c2e76u); f_109c3f30();
L_109c2e76:;
  /* 109c2e76 mov esi, esp */
  ESI = (ESP);
  /* 109c2e78 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109c2e7a call dword ptr [0x109f4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4484))), 0x109c2e80u);
  /* 109c2e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2e83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2e85 call 0x109c3f30 */
  push32(0x109c2e8au); f_109c3f30();
  /* 109c2e8a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2e8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2e91 je 0x109c2eea */
  if (C.zf) goto L_109c2eea;
  /* 109c2e93 mov esi, esp */
  ESI = (ESP);
  /* 109c2e95 push 0x109f1598 */
  push32((uint32_t)(0x109f1598u));
  /* 109c2e9a push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c2e9f call dword ptr [0x109f4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4444))), 0x109c2ea5u);
  /* 109c2ea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2ea8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2eaa call 0x109c3f30 */
  push32(0x109c2eafu); f_109c3f30();
  /* 109c2eaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2eb1 jle 0x109c2eea */
  if ((C.zf||C.sf!=C.of)) goto L_109c2eea;
  /* 109c2eb3 mov esi, esp */
  ESI = (ESP);
  /* 109c2eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2eb7 push 0x109f14e0 */
  push32((uint32_t)(0x109f14e0u));
  /* 109c2ebc push 0x109f1598 */
  push32((uint32_t)(0x109f1598u));
  /* 109c2ec1 call dword ptr [0x109f4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4478))), 0x109c2ec7u);
  /* 109c2ec7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2eca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2ecc call 0x109c3f30 */
  push32(0x109c2ed1u); f_109c3f30();
  /* 109c2ed1 mov esi, esp */
  ESI = (ESP);
  /* 109c2ed3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 109c2ed8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109c2eda call dword ptr [0x109f4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4450))), 0x109c2ee0u);
  /* 109c2ee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2ee3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2ee5 call 0x109c3f30 */
  push32(0x109c2eeau); f_109c3f30();
L_109c2eea:;
  /* 109c2eea mov esi, esp */
  ESI = (ESP);
  /* 109c2eec push 0xb */
  push32((uint32_t)(0xbu));
  /* 109c2eee call dword ptr [0x109f4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4484))), 0x109c2ef4u);
  /* 109c2ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2ef7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2ef9 call 0x109c3f30 */
  push32(0x109c2efeu); f_109c3f30();
  /* 109c2efe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2f03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2f05 je 0x109c2f64 */
  if (C.zf) goto L_109c2f64;
  /* 109c2f07 push 0x109f1598 */
  push32((uint32_t)(0x109f1598u));
  /* 109c2f0c call 0x109c1005 */
  push32(0x109c2f11u); f_109c1005();
  /* 109c2f11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2f14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2f16 jle 0x109c2f64 */
  if ((C.zf||C.sf!=C.of)) goto L_109c2f64;
  /* 109c2f18 mov esi, esp */
  ESI = (ESP);
  /* 109c2f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2f1c push 0x109f1598 */
  push32((uint32_t)(0x109f1598u));
  /* 109c2f21 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2f27u);
  /* 109c2f27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2f2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2f2c call 0x109c3f30 */
  push32(0x109c2f31u); f_109c3f30();
  /* 109c2f31 mov esi, esp */
  ESI = (ESP);
  /* 109c2f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2f37 push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c2f3c push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2f3e call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c2f44u);
  /* 109c2f44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2f47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2f49 call 0x109c3f30 */
  push32(0x109c2f4eu); f_109c3f30();
  /* 109c2f4e mov esi, esp */
  ESI = (ESP);
  /* 109c2f50 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 109c2f52 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109c2f54 call dword ptr [0x109f4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4450))), 0x109c2f5au);
  /* 109c2f5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2f5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2f5f call 0x109c3f30 */
  push32(0x109c2f64u); f_109c3f30();
L_109c2f64:;
  /* 109c2f64 mov esi, esp */
  ESI = (ESP);
  /* 109c2f66 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 109c2f68 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c2f6eu);
  /* 109c2f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2f71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2f73 call 0x109c3f30 */
  push32(0x109c2f78u); f_109c3f30();
  /* 109c2f78 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2f7f je 0x109c2fe3 */
  if (C.zf) goto L_109c2fe3;
  /* 109c2f81 mov esi, esp */
  ESI = (ESP);
  /* 109c2f83 call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c2f89u);
  /* 109c2f89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2f8b call 0x109c3f30 */
  push32(0x109c2f90u); f_109c3f30();
  /* 109c2f90 cmp eax, 0x3a98 */
  { uint32_t _a=(EAX),_b=(0x3a98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2f95 jle 0x109c2fe3 */
  if ((C.zf||C.sf!=C.of)) goto L_109c2fe3;
  /* 109c2f97 mov esi, esp */
  ESI = (ESP);
  /* 109c2f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2f9b push 0x24 */
  push32((uint32_t)(0x24u));
  /* 109c2f9d call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c2fa3u);
  /* 109c2fa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2fa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2fa8 call 0x109c3f30 */
  push32(0x109c2fadu); f_109c3f30();
  /* 109c2fad mov esi, esp */
  ESI = (ESP);
  /* 109c2faf push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2fb1 push 0x109f1590 */
  push32((uint32_t)(0x109f1590u));
  /* 109c2fb6 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c2fbcu);
  /* 109c2fbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2fbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2fc1 call 0x109c3f30 */
  push32(0x109c2fc6u); f_109c3f30();
  /* 109c2fc6 mov esi, esp */
  ESI = (ESP);
  /* 109c2fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2fca push 0 */
  push32((uint32_t)(0x0u));
  /* 109c2fcc push 0x109f14d8 */
  push32((uint32_t)(0x109f14d8u));
  /* 109c2fd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c2fd3 call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c2fd9u);
  /* 109c2fd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2fdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2fde call 0x109c3f30 */
  push32(0x109c2fe3u); f_109c3f30();
L_109c2fe3:;
  /* 109c2fe3 mov esi, esp */
  ESI = (ESP);
  /* 109c2fe5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 109c2fe7 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c2fedu);
  /* 109c2fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c2ff0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c2ff2 call 0x109c3f30 */
  push32(0x109c2ff7u); f_109c3f30();
  /* 109c2ff7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c2ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c2ffe je 0x109c30f4 */
  if (C.zf) goto L_109c30f4;
  /* 109c3004 mov esi, esp */
  ESI = (ESP);
  /* 109c3006 call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c300cu);
  /* 109c300c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c300e call 0x109c3f30 */
  push32(0x109c3013u); f_109c3f30();
  /* 109c3013 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3018 jle 0x109c30f4 */
  if ((C.zf||C.sf!=C.of)) goto L_109c30f4;
  /* 109c301e mov esi, esp */
  ESI = (ESP);
  /* 109c3020 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3022 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 109c3024 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c302au);
  /* 109c302a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c302d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c302f call 0x109c3f30 */
  push32(0x109c3034u); f_109c3f30();
  /* 109c3034 mov esi, esp */
  ESI = (ESP);
  /* 109c3036 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 109c3038 push 0x109f1470 */
  push32((uint32_t)(0x109f1470u));
  /* 109c303d push 4 */
  push32((uint32_t)(0x4u));
  /* 109c303f push 0x109f1528 */
  push32((uint32_t)(0x109f1528u));
  /* 109c3044 push 0x109f1510 */
  push32((uint32_t)(0x109f1510u));
  /* 109c3049 push 0x109f1560 */
  push32((uint32_t)(0x109f1560u));
  /* 109c304e call dword ptr [0x109f4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4494))), 0x109c3054u);
  /* 109c3054 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3057 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3059 call 0x109c3f30 */
  push32(0x109c305eu); f_109c3f30();
  /* 109c305e mov esi, esp */
  ESI = (ESP);
  /* 109c3060 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 109c3062 push 0x109f1508 */
  push32((uint32_t)(0x109f1508u));
  /* 109c3067 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c3069 push 0x109f1528 */
  push32((uint32_t)(0x109f1528u));
  /* 109c306e push 0x109f14e8 */
  push32((uint32_t)(0x109f14e8u));
  /* 109c3073 push 0x109f1570 */
  push32((uint32_t)(0x109f1570u));
  /* 109c3078 call dword ptr [0x109f4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4494))), 0x109c307eu);
  /* 109c307e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3081 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3083 call 0x109c3f30 */
  push32(0x109c3088u); f_109c3f30();
  /* 109c3088 mov esi, esp */
  ESI = (ESP);
  /* 109c308a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c308c push 0x109f1560 */
  push32((uint32_t)(0x109f1560u));
  /* 109c3091 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c3097u);
  /* 109c3097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c309a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c309c call 0x109c3f30 */
  push32(0x109c30a1u); f_109c3f30();
  /* 109c30a1 mov esi, esp */
  ESI = (ESP);
  /* 109c30a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c30a5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 109c30a7 push 0x109f14c8 */
  push32((uint32_t)(0x109f14c8u));
  /* 109c30ac push 4 */
  push32((uint32_t)(0x4u));
  /* 109c30ae call dword ptr [0x109f4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4474))), 0x109c30b4u);
  /* 109c30b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c30b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c30b9 call 0x109c3f30 */
  push32(0x109c30beu); f_109c3f30();
  /* 109c30be mov esi, esp */
  ESI = (ESP);
  /* 109c30c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c30c2 push 0x109f1570 */
  push32((uint32_t)(0x109f1570u));
  /* 109c30c7 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c30cdu);
  /* 109c30cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c30d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c30d2 call 0x109c3f30 */
  push32(0x109c30d7u); f_109c3f30();
  /* 109c30d7 mov esi, esp */
  ESI = (ESP);
  /* 109c30d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c30db push 0x5a */
  push32((uint32_t)(0x5au));
  /* 109c30dd push 0x109f1460 */
  push32((uint32_t)(0x109f1460u));
  /* 109c30e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c30e4 call dword ptr [0x109f4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4474))), 0x109c30eau);
  /* 109c30ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c30ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c30ef call 0x109c3f30 */
  push32(0x109c30f4u); f_109c3f30();
L_109c30f4:;
  /* 109c30f4 mov esi, esp */
  ESI = (ESP);
  /* 109c30f6 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 109c30f8 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c30feu);
  /* 109c30fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3101 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3103 call 0x109c3f30 */
  push32(0x109c3108u); f_109c3f30();
  /* 109c3108 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c310d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c310f je 0x109c31a1 */
  if (C.zf) goto L_109c31a1;
  /* 109c3115 mov esi, esp */
  ESI = (ESP);
  /* 109c3117 call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c311du);
  /* 109c311d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c311f call 0x109c3f30 */
  push32(0x109c3124u); f_109c3f30();
  /* 109c3124 cmp eax, 0x5208 */
  { uint32_t _a=(EAX),_b=(0x5208u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3129 jle 0x109c31a1 */
  if ((C.zf||C.sf!=C.of)) goto L_109c31a1;
  /* 109c312b mov esi, esp */
  ESI = (ESP);
  /* 109c312d push 0 */
  push32((uint32_t)(0x0u));
  /* 109c312f push 0x29 */
  push32((uint32_t)(0x29u));
  /* 109c3131 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c3137u);
  /* 109c3137 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c313a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c313c call 0x109c3f30 */
  push32(0x109c3141u); f_109c3f30();
  /* 109c3141 mov esi, esp */
  ESI = (ESP);
  /* 109c3143 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 109c3145 push 0x109f1508 */
  push32((uint32_t)(0x109f1508u));
  /* 109c314a push 4 */
  push32((uint32_t)(0x4u));
  /* 109c314c push 0x109f1408 */
  push32((uint32_t)(0x109f1408u));
  /* 109c3151 push 0x109f1510 */
  push32((uint32_t)(0x109f1510u));
  /* 109c3156 push 0x109f1538 */
  push32((uint32_t)(0x109f1538u));
  /* 109c315b call dword ptr [0x109f4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4494))), 0x109c3161u);
  /* 109c3161 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3166 call 0x109c3f30 */
  push32(0x109c316bu); f_109c3f30();
  /* 109c316b mov esi, esp */
  ESI = (ESP);
  /* 109c316d push 0 */
  push32((uint32_t)(0x0u));
  /* 109c316f push 0x109f1538 */
  push32((uint32_t)(0x109f1538u));
  /* 109c3174 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c317au);
  /* 109c317a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c317d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c317f call 0x109c3f30 */
  push32(0x109c3184u); f_109c3f30();
  /* 109c3184 mov esi, esp */
  ESI = (ESP);
  /* 109c3186 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3188 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 109c318a push 0x109f1460 */
  push32((uint32_t)(0x109f1460u));
  /* 109c318f push 4 */
  push32((uint32_t)(0x4u));
  /* 109c3191 call dword ptr [0x109f4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4474))), 0x109c3197u);
  /* 109c3197 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c319a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c319c call 0x109c3f30 */
  push32(0x109c31a1u); f_109c3f30();
L_109c31a1:;
  /* 109c31a1 mov esi, esp */
  ESI = (ESP);
  /* 109c31a3 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 109c31a5 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c31abu);
  /* 109c31ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c31ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c31b0 call 0x109c3f30 */
  push32(0x109c31b5u); f_109c3f30();
  /* 109c31b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c31ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c31bc je 0x109c326f */
  if (C.zf) goto L_109c326f;
  /* 109c31c2 mov esi, esp */
  ESI = (ESP);
  /* 109c31c4 call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c31cau);
  /* 109c31ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c31cc call 0x109c3f30 */
  push32(0x109c31d1u); f_109c3f30();
  /* 109c31d1 cmp eax, 0x61a8 */
  { uint32_t _a=(EAX),_b=(0x61a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c31d6 jle 0x109c326f */
  if ((C.zf||C.sf!=C.of)) goto L_109c326f;
  /* 109c31dc mov esi, esp */
  ESI = (ESP);
  /* 109c31de push 0xd */
  push32((uint32_t)(0xdu));
  /* 109c31e0 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c31e6u);
  /* 109c31e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c31e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c31eb call 0x109c3f30 */
  push32(0x109c31f0u); f_109c3f30();
  /* 109c31f0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c31f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c31f7 je 0x109c326f */
  if (C.zf) goto L_109c326f;
  /* 109c31f9 mov esi, esp */
  ESI = (ESP);
  /* 109c31fb push 0 */
  push32((uint32_t)(0x0u));
  /* 109c31fd push 0x2a */
  push32((uint32_t)(0x2au));
  /* 109c31ff call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c3205u);
  /* 109c3205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3208 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c320a call 0x109c3f30 */
  push32(0x109c320fu); f_109c3f30();
  /* 109c320f mov esi, esp */
  ESI = (ESP);
  /* 109c3211 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3213 push 0x109f1490 */
  push32((uint32_t)(0x109f1490u));
  /* 109c3218 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c321a push 0x109f13f0 */
  push32((uint32_t)(0x109f13f0u));
  /* 109c321f push 0x109f14e8 */
  push32((uint32_t)(0x109f14e8u));
  /* 109c3224 push 0x109f15d8 */
  push32((uint32_t)(0x109f15d8u));
  /* 109c3229 call dword ptr [0x109f4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4494))), 0x109c322fu);
  /* 109c322f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3232 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3234 call 0x109c3f30 */
  push32(0x109c3239u); f_109c3f30();
  /* 109c3239 mov esi, esp */
  ESI = (ESP);
  /* 109c323b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c323d push 0x109f15d8 */
  push32((uint32_t)(0x109f15d8u));
  /* 109c3242 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c3248u);
  /* 109c3248 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c324b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c324d call 0x109c3f30 */
  push32(0x109c3252u); f_109c3f30();
  /* 109c3252 mov esi, esp */
  ESI = (ESP);
  /* 109c3254 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3256 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3258 push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c325d push 1 */
  push32((uint32_t)(0x1u));
  /* 109c325f call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c3265u);
  /* 109c3265 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3268 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c326a call 0x109c3f30 */
  push32(0x109c326fu); f_109c3f30();
L_109c326f:;
  /* 109c326f mov esi, esp */
  ESI = (ESP);
  /* 109c3271 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 109c3273 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c3279u);
  /* 109c3279 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c327c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c327e call 0x109c3f30 */
  push32(0x109c3283u); f_109c3f30();
  /* 109c3283 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c3288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c328a je 0x109c333d */
  if (C.zf) goto L_109c333d;
  /* 109c3290 mov esi, esp */
  ESI = (ESP);
  /* 109c3292 call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c3298u);
  /* 109c3298 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c329a call 0x109c3f30 */
  push32(0x109c329fu); f_109c3f30();
  /* 109c329f cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c32a4 jle 0x109c333d */
  if ((C.zf||C.sf!=C.of)) goto L_109c333d;
  /* 109c32aa mov esi, esp */
  ESI = (ESP);
  /* 109c32ac push 0xd */
  push32((uint32_t)(0xdu));
  /* 109c32ae call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c32b4u);
  /* 109c32b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c32b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c32b9 call 0x109c3f30 */
  push32(0x109c32beu); f_109c3f30();
  /* 109c32be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c32c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c32c5 je 0x109c333d */
  if (C.zf) goto L_109c333d;
  /* 109c32c7 mov esi, esp */
  ESI = (ESP);
  /* 109c32c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c32cb push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 109c32cd call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c32d3u);
  /* 109c32d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c32d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c32d8 call 0x109c3f30 */
  push32(0x109c32ddu); f_109c3f30();
  /* 109c32dd mov esi, esp */
  ESI = (ESP);
  /* 109c32df push 0 */
  push32((uint32_t)(0x0u));
  /* 109c32e1 push 0x109f1490 */
  push32((uint32_t)(0x109f1490u));
  /* 109c32e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c32e8 push 0x109f13f0 */
  push32((uint32_t)(0x109f13f0u));
  /* 109c32ed push 0x109f13e0 */
  push32((uint32_t)(0x109f13e0u));
  /* 109c32f2 push 0x109f15b0 */
  push32((uint32_t)(0x109f15b0u));
  /* 109c32f7 call dword ptr [0x109f4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4494))), 0x109c32fdu);
  /* 109c32fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3300 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3302 call 0x109c3f30 */
  push32(0x109c3307u); f_109c3f30();
  /* 109c3307 mov esi, esp */
  ESI = (ESP);
  /* 109c3309 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c330b push 0x109f15b0 */
  push32((uint32_t)(0x109f15b0u));
  /* 109c3310 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c3316u);
  /* 109c3316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c331b call 0x109c3f30 */
  push32(0x109c3320u); f_109c3f30();
  /* 109c3320 mov esi, esp */
  ESI = (ESP);
  /* 109c3322 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3324 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3326 push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c332b push 1 */
  push32((uint32_t)(0x1u));
  /* 109c332d call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c3333u);
  /* 109c3333 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3336 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3338 call 0x109c3f30 */
  push32(0x109c333du); f_109c3f30();
L_109c333d:;
  /* 109c333d mov esi, esp */
  ESI = (ESP);
  /* 109c333f push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 109c3341 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c3347u);
  /* 109c3347 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c334a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c334c call 0x109c3f30 */
  push32(0x109c3351u); f_109c3f30();
  /* 109c3351 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c3356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c3358 je 0x109c340b */
  if (C.zf) goto L_109c340b;
  /* 109c335e mov esi, esp */
  ESI = (ESP);
  /* 109c3360 call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c3366u);
  /* 109c3366 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3368 call 0x109c3f30 */
  push32(0x109c336du); f_109c3f30();
  /* 109c336d cmp eax, 0x88b8 */
  { uint32_t _a=(EAX),_b=(0x88b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3372 jle 0x109c340b */
  if ((C.zf||C.sf!=C.of)) goto L_109c340b;
  /* 109c3378 mov esi, esp */
  ESI = (ESP);
  /* 109c337a push 0xd */
  push32((uint32_t)(0xdu));
  /* 109c337c call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c3382u);
  /* 109c3382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3385 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3387 call 0x109c3f30 */
  push32(0x109c338cu); f_109c3f30();
  /* 109c338c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c3391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c3393 je 0x109c340b */
  if (C.zf) goto L_109c340b;
  /* 109c3395 mov esi, esp */
  ESI = (ESP);
  /* 109c3397 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3399 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 109c339b call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c33a1u);
  /* 109c33a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c33a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c33a6 call 0x109c3f30 */
  push32(0x109c33abu); f_109c3f30();
  /* 109c33ab mov esi, esp */
  ESI = (ESP);
  /* 109c33ad push 0 */
  push32((uint32_t)(0x0u));
  /* 109c33af push 0x109f1490 */
  push32((uint32_t)(0x109f1490u));
  /* 109c33b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c33b6 push 0x109f13f0 */
  push32((uint32_t)(0x109f13f0u));
  /* 109c33bb push 0x109f13e8 */
  push32((uint32_t)(0x109f13e8u));
  /* 109c33c0 push 0x109f15b8 */
  push32((uint32_t)(0x109f15b8u));
  /* 109c33c5 call dword ptr [0x109f4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4494))), 0x109c33cbu);
  /* 109c33cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c33ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c33d0 call 0x109c3f30 */
  push32(0x109c33d5u); f_109c3f30();
  /* 109c33d5 mov esi, esp */
  ESI = (ESP);
  /* 109c33d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c33d9 push 0x109f15b8 */
  push32((uint32_t)(0x109f15b8u));
  /* 109c33de call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c33e4u);
  /* 109c33e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c33e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c33e9 call 0x109c3f30 */
  push32(0x109c33eeu); f_109c3f30();
  /* 109c33ee mov esi, esp */
  ESI = (ESP);
  /* 109c33f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c33f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c33f4 push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c33f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c33fb call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c3401u);
  /* 109c3401 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3404 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3406 call 0x109c3f30 */
  push32(0x109c340bu); f_109c3f30();
L_109c340b:;
  /* 109c340b mov esi, esp */
  ESI = (ESP);
  /* 109c340d push 0x2d */
  push32((uint32_t)(0x2du));
  /* 109c340f call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c3415u);
  /* 109c3415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3418 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c341a call 0x109c3f30 */
  push32(0x109c341fu); f_109c3f30();
  /* 109c341f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c3424 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c3426 je 0x109c34d9 */
  if (C.zf) goto L_109c34d9;
  /* 109c342c mov esi, esp */
  ESI = (ESP);
  /* 109c342e call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c3434u);
  /* 109c3434 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3436 call 0x109c3f30 */
  push32(0x109c343bu); f_109c3f30();
  /* 109c343b cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3440 jle 0x109c34d9 */
  if ((C.zf||C.sf!=C.of)) goto L_109c34d9;
  /* 109c3446 mov esi, esp */
  ESI = (ESP);
  /* 109c3448 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109c344a call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c3450u);
  /* 109c3450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3453 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3455 call 0x109c3f30 */
  push32(0x109c345au); f_109c3f30();
  /* 109c345a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c345f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c3461 je 0x109c34d9 */
  if (C.zf) goto L_109c34d9;
  /* 109c3463 mov esi, esp */
  ESI = (ESP);
  /* 109c3465 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3467 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 109c3469 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c346fu);
  /* 109c346f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3472 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3474 call 0x109c3f30 */
  push32(0x109c3479u); f_109c3f30();
  /* 109c3479 mov esi, esp */
  ESI = (ESP);
  /* 109c347b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c347d push 0x109f1490 */
  push32((uint32_t)(0x109f1490u));
  /* 109c3482 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c3484 push 0x109f13f0 */
  push32((uint32_t)(0x109f13f0u));
  /* 109c3489 push 0x109f13e8 */
  push32((uint32_t)(0x109f13e8u));
  /* 109c348e push 0x109f15a8 */
  push32((uint32_t)(0x109f15a8u));
  /* 109c3493 call dword ptr [0x109f4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4494))), 0x109c3499u);
  /* 109c3499 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c349c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c349e call 0x109c3f30 */
  push32(0x109c34a3u); f_109c3f30();
  /* 109c34a3 mov esi, esp */
  ESI = (ESP);
  /* 109c34a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c34a7 push 0x109f15a8 */
  push32((uint32_t)(0x109f15a8u));
  /* 109c34ac call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c34b2u);
  /* 109c34b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c34b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c34b7 call 0x109c3f30 */
  push32(0x109c34bcu); f_109c3f30();
  /* 109c34bc mov esi, esp */
  ESI = (ESP);
  /* 109c34be push 0 */
  push32((uint32_t)(0x0u));
  /* 109c34c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c34c2 push 0x109f14d8 */
  push32((uint32_t)(0x109f14d8u));
  /* 109c34c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c34c9 call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c34cfu);
  /* 109c34cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c34d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c34d4 call 0x109c3f30 */
  push32(0x109c34d9u); f_109c3f30();
L_109c34d9:;
  /* 109c34d9 mov esi, esp */
  ESI = (ESP);
  /* 109c34db push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 109c34dd call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c34e3u);
  /* 109c34e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c34e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c34e8 call 0x109c3f30 */
  push32(0x109c34edu); f_109c3f30();
  /* 109c34ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c34f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c34f4 je 0x109c35a7 */
  if (C.zf) goto L_109c35a7;
  /* 109c34fa mov esi, esp */
  ESI = (ESP);
  /* 109c34fc call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c3502u);
  /* 109c3502 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3504 call 0x109c3f30 */
  push32(0x109c3509u); f_109c3f30();
  /* 109c3509 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c350e jle 0x109c35a7 */
  if ((C.zf||C.sf!=C.of)) goto L_109c35a7;
  /* 109c3514 mov esi, esp */
  ESI = (ESP);
  /* 109c3516 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109c3518 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c351eu);
  /* 109c351e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3521 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3523 call 0x109c3f30 */
  push32(0x109c3528u); f_109c3f30();
  /* 109c3528 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c352d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c352f je 0x109c35a7 */
  if (C.zf) goto L_109c35a7;
  /* 109c3531 mov esi, esp */
  ESI = (ESP);
  /* 109c3533 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3535 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 109c3537 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c353du);
  /* 109c353d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3540 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3542 call 0x109c3f30 */
  push32(0x109c3547u); f_109c3f30();
  /* 109c3547 mov esi, esp */
  ESI = (ESP);
  /* 109c3549 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c354b push 0x109f1490 */
  push32((uint32_t)(0x109f1490u));
  /* 109c3550 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c3552 push 0x109f13f0 */
  push32((uint32_t)(0x109f13f0u));
  /* 109c3557 push 0x109f1518 */
  push32((uint32_t)(0x109f1518u));
  /* 109c355c push 0x109f1548 */
  push32((uint32_t)(0x109f1548u));
  /* 109c3561 call dword ptr [0x109f4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4494))), 0x109c3567u);
  /* 109c3567 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c356a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c356c call 0x109c3f30 */
  push32(0x109c3571u); f_109c3f30();
  /* 109c3571 mov esi, esp */
  ESI = (ESP);
  /* 109c3573 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3575 push 0x109f1548 */
  push32((uint32_t)(0x109f1548u));
  /* 109c357a call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c3580u);
  /* 109c3580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3585 call 0x109c3f30 */
  push32(0x109c358au); f_109c3f30();
  /* 109c358a mov esi, esp */
  ESI = (ESP);
  /* 109c358c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c358e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3590 push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c3595 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c3597 call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c359du);
  /* 109c359d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c35a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c35a2 call 0x109c3f30 */
  push32(0x109c35a7u); f_109c3f30();
L_109c35a7:;
  /* 109c35a7 mov esi, esp */
  ESI = (ESP);
  /* 109c35a9 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 109c35ab call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c35b1u);
  /* 109c35b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c35b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c35b6 call 0x109c3f30 */
  push32(0x109c35bbu); f_109c3f30();
  /* 109c35bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c35c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c35c2 je 0x109c3675 */
  if (C.zf) goto L_109c3675;
  /* 109c35c8 mov esi, esp */
  ESI = (ESP);
  /* 109c35ca call dword ptr [0x109f4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4488))), 0x109c35d0u);
  /* 109c35d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c35d2 call 0x109c3f30 */
  push32(0x109c35d7u); f_109c3f30();
  /* 109c35d7 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c35dc jle 0x109c3675 */
  if ((C.zf||C.sf!=C.of)) goto L_109c3675;
  /* 109c35e2 mov esi, esp */
  ESI = (ESP);
  /* 109c35e4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109c35e6 call dword ptr [0x109f442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f442c))), 0x109c35ecu);
  /* 109c35ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c35ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c35f1 call 0x109c3f30 */
  push32(0x109c35f6u); f_109c3f30();
  /* 109c35f6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c35fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c35fd je 0x109c3675 */
  if (C.zf) goto L_109c3675;
  /* 109c35ff mov esi, esp */
  ESI = (ESP);
  /* 109c3601 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3603 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 109c3605 call dword ptr [0x109f4424] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4424))), 0x109c360bu);
  /* 109c360b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c360e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3610 call 0x109c3f30 */
  push32(0x109c3615u); f_109c3f30();
  /* 109c3615 mov esi, esp */
  ESI = (ESP);
  /* 109c3617 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3619 push 0x109f1490 */
  push32((uint32_t)(0x109f1490u));
  /* 109c361e push 1 */
  push32((uint32_t)(0x1u));
  /* 109c3620 push 0x109f13f0 */
  push32((uint32_t)(0x109f13f0u));
  /* 109c3625 push 0x109f1518 */
  push32((uint32_t)(0x109f1518u));
  /* 109c362a push 0x109f15c0 */
  push32((uint32_t)(0x109f15c0u));
  /* 109c362f call dword ptr [0x109f4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4494))), 0x109c3635u);
  /* 109c3635 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c363a call 0x109c3f30 */
  push32(0x109c363fu); f_109c3f30();
  /* 109c363f mov esi, esp */
  ESI = (ESP);
  /* 109c3641 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c3643 push 0x109f15c0 */
  push32((uint32_t)(0x109f15c0u));
  /* 109c3648 call dword ptr [0x109f4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4430))), 0x109c364eu);
  /* 109c364e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3653 call 0x109c3f30 */
  push32(0x109c3658u); f_109c3f30();
  /* 109c3658 mov esi, esp */
  ESI = (ESP);
  /* 109c365a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c365c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c365e push 0x109f14f0 */
  push32((uint32_t)(0x109f14f0u));
  /* 109c3663 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c3665 call dword ptr [0x109f448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f448c))), 0x109c366bu);
  /* 109c366b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c366e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3670 call 0x109c3f30 */
  push32(0x109c3675u); f_109c3f30();
L_109c3675:;
  /* 109c3675 pop edi */
  EDI = (pop32());
  /* 109c3676 pop esi */
  ESI = (pop32());
  /* 109c3677 pop ebx */
  EBX = (pop32());
  /* 109c3678 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c367b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c367d call 0x109c3f30 */
  push32(0x109c3682u); f_109c3f30();
  /* 109c3682 mov esp, ebp */
  ESP = (EBP);
  /* 109c3684 pop ebp */
  EBP = (pop32());
  /* 109c3685 ret  */
  ESPCHK(0x109c1a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da0 @ 0x109c3da0 (63 bytes, 26 insns) */
void f_109c3da0(void) {
  FTRACE(0x109c3da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c3da0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c3da1 mov ebp, esp */
  EBP = (ESP);
  /* 109c3da3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c3da6 push ebx */
  push32((uint32_t)(EBX));
  /* 109c3da7 push esi */
  push32((uint32_t)(ESI));
  /* 109c3da8 push edi */
  push32((uint32_t)(EDI));
  /* 109c3da9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 109c3dac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 109c3db1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 109c3db6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109c3db8 mov esi, esp */
  ESI = (ESP);
  /* 109c3dba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c3dbd push eax */
  push32((uint32_t)(EAX));
  /* 109c3dbe call dword ptr [0x109f4428] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4428))), 0x109c3dc4u);
  /* 109c3dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3dc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3dc9 call 0x109c3f30 */
  push32(0x109c3dceu); f_109c3f30();
  /* 109c3dce pop edi */
  EDI = (pop32());
  /* 109c3dcf pop esi */
  ESI = (pop32());
  /* 109c3dd0 pop ebx */
  EBX = (pop32());
  /* 109c3dd1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3dd4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3dd6 call 0x109c3f30 */
  push32(0x109c3ddbu); f_109c3f30();
  /* 109c3ddb mov esp, ebp */
  ESP = (EBP);
  /* 109c3ddd pop ebp */
  EBP = (pop32());
  /* 109c3dde ret  */
  ESPCHK(0x109c3da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003df0 @ 0x109c3df0 (67 bytes, 28 insns) */
void f_109c3df0(void) {
  FTRACE(0x109c3df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c3df0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c3df1 mov ebp, esp */
  EBP = (ESP);
  /* 109c3df3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c3df6 push ebx */
  push32((uint32_t)(EBX));
  /* 109c3df7 push esi */
  push32((uint32_t)(ESI));
  /* 109c3df8 push edi */
  push32((uint32_t)(EDI));
  /* 109c3df9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 109c3dfc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 109c3e01 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 109c3e06 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109c3e08 mov esi, esp */
  ESI = (ESP);
  /* 109c3e0a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 109c3e0d push eax */
  push32((uint32_t)(EAX));
  /* 109c3e0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c3e11 push ecx */
  push32((uint32_t)(ECX));
  /* 109c3e12 call dword ptr [0x109f4420] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4420))), 0x109c3e18u);
  /* 109c3e18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3e1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3e1d call 0x109c3f30 */
  push32(0x109c3e22u); f_109c3f30();
  /* 109c3e22 pop edi */
  EDI = (pop32());
  /* 109c3e23 pop esi */
  ESI = (pop32());
  /* 109c3e24 pop ebx */
  EBX = (pop32());
  /* 109c3e25 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3e28 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3e2a call 0x109c3f30 */
  push32(0x109c3e2fu); f_109c3f30();
  /* 109c3e2f mov esp, ebp */
  ESP = (EBP);
  /* 109c3e31 pop ebp */
  EBP = (pop32());
  /* 109c3e32 ret  */
  ESPCHK(0x109c3df0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x109c3f30 (56 bytes, 28 insns) */
void f_109c3f30(void) {
  FTRACE(0x109c3f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c3f30 jne 0x109c3f33 */
  if (!C.zf) goto L_109c3f33;
  /* 109c3f32 ret  */
  ESPCHK(0x109c3f30u, _esp0);
  ESP += 4; return;
L_109c3f33:;
  /* 109c3f33 push ebp */
  push32((uint32_t)(EBP));
  /* 109c3f34 mov ebp, esp */
  EBP = (ESP);
  /* 109c3f36 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c3f39 push eax */
  push32((uint32_t)(EAX));
  /* 109c3f3a push edx */
  push32((uint32_t)(EDX));
  /* 109c3f3b push ebx */
  push32((uint32_t)(EBX));
  /* 109c3f3c push esi */
  push32((uint32_t)(ESI));
  /* 109c3f3d push edi */
  push32((uint32_t)(EDI));
  /* 109c3f3e push 0x109ec3d4 */
  push32((uint32_t)(0x109ec3d4u));
  /* 109c3f43 push 0x109ec3d0 */
  push32((uint32_t)(0x109ec3d0u));
  /* 109c3f48 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 109c3f4a push 0x109ec3c0 */
  push32((uint32_t)(0x109ec3c0u));
  /* 109c3f4f push 1 */
  push32((uint32_t)(0x1u));
  /* 109c3f51 call 0x109c4300 */
  push32(0x109c3f56u); f_109c4300();
  /* 109c3f56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3f59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3f5c jne 0x109c3f5f */
  if (!C.zf) goto L_109c3f5f;
  /* 109c3f5e int3  */
  x86_unimpl("int3 @ 0x109c3f5e");
L_109c3f5f:;
  /* 109c3f5f pop edi */
  EDI = (pop32());
  /* 109c3f60 pop esi */
  ESI = (pop32());
  /* 109c3f61 pop ebx */
  EBX = (pop32());
  /* 109c3f62 pop edx */
  EDX = (pop32());
  /* 109c3f63 pop eax */
  EAX = (pop32());
  /* 109c3f64 mov esp, ebp */
  ESP = (EBP);
  /* 109c3f66 pop ebp */
  EBP = (pop32());
  /* 109c3f67 ret  */
  ESPCHK(0x109c3f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f70 @ 0x109c3f70 (313 bytes, 78 insns) */
void f_109c3f70(void) {
  FTRACE(0x109c3f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c3f70 push ebp */
  push32((uint32_t)(EBP));
  /* 109c3f71 mov ebp, esp */
  EBP = (ESP);
  /* 109c3f73 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c3f77 jne 0x109c4037 */
  if (!C.zf) goto L_109c4037;
  /* 109c3f7d call dword ptr [0x109f4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4334))), 0x109c3f83u);
  /* 109c3f83 mov dword ptr [0x109f1684], eax */
  w32((uint32_t)(0x109f1684), (EAX));
  /* 109c3f88 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c3f8a call 0x109c7a30 */
  push32(0x109c3f8fu); f_109c7a30();
  /* 109c3f8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c3f94 jne 0x109c3f9d */
  if (!C.zf) goto L_109c3f9d;
  /* 109c3f96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c3f98 jmp 0x109c40a5 */
  goto L_109c40a5;
L_109c3f9d:;
  /* 109c3f9d mov eax, dword ptr [0x109f1684] */
  EAX = (r32((uint32_t)(0x109f1684)));
  /* 109c3fa2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 109c3fa5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c3faa mov dword ptr [0x109f1690], eax */
  w32((uint32_t)(0x109f1690), (EAX));
  /* 109c3faf mov ecx, dword ptr [0x109f1684] */
  ECX = (r32((uint32_t)(0x109f1684)));
  /* 109c3fb5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c3fbb mov dword ptr [0x109f168c], ecx */
  w32((uint32_t)(0x109f168c), (ECX));
  /* 109c3fc1 mov edx, dword ptr [0x109f168c] */
  EDX = (r32((uint32_t)(0x109f168c)));
  /* 109c3fc7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 109c3fca add edx, dword ptr [0x109f1690] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109f1690))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c3fd0 mov dword ptr [0x109f1688], edx */
  w32((uint32_t)(0x109f1688), (EDX));
  /* 109c3fd6 mov eax, dword ptr [0x109f1684] */
  EAX = (r32((uint32_t)(0x109f1684)));
  /* 109c3fdb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 109c3fde and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c3fe3 mov dword ptr [0x109f1684], eax */
  w32((uint32_t)(0x109f1684), (EAX));
  /* 109c3fe8 call 0x109c4ba0 */
  push32(0x109c3fedu); f_109c4ba0();
  /* 109c3fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c3fef jne 0x109c3ffd */
  if (!C.zf) goto L_109c3ffd;
  /* 109c3ff1 call 0x109c7a80 */
  push32(0x109c3ff6u); f_109c7a80();
  /* 109c3ff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c3ff8 jmp 0x109c40a5 */
  goto L_109c40a5;
L_109c3ffd:;
  /* 109c3ffd call dword ptr [0x109f4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4330))), 0x109c4003u);
  /* 109c4003 mov dword ptr [0x109f31cc], eax */
  w32((uint32_t)(0x109f31cc), (EAX));
  /* 109c4008 call 0x109c7810 */
  push32(0x109c400du); f_109c7810();
  /* 109c400d mov dword ptr [0x109f166c], eax */
  w32((uint32_t)(0x109f166c), (EAX));
  /* 109c4012 call 0x109c4e50 */
  push32(0x109c4017u); f_109c4e50();
  /* 109c4017 call 0x109c7300 */
  push32(0x109c401cu); f_109c7300();
  /* 109c401c call 0x109c71b0 */
  push32(0x109c4021u); f_109c71b0();
  /* 109c4021 call 0x109c49a0 */
  push32(0x109c4026u); f_109c49a0();
  /* 109c4026 mov ecx, dword ptr [0x109f1668] */
  ECX = (r32((uint32_t)(0x109f1668)));
  /* 109c402c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c402f mov dword ptr [0x109f1668], ecx */
  w32((uint32_t)(0x109f1668), (ECX));
  /* 109c4035 jmp 0x109c40a0 */
  goto L_109c40a0;
L_109c4037:;
  /* 109c4037 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c403b jne 0x109c4090 */
  if (!C.zf) goto L_109c4090;
  /* 109c403d cmp dword ptr [0x109f1668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4044 jle 0x109c408a */
  if ((C.zf||C.sf!=C.of)) goto L_109c408a;
  /* 109c4046 mov edx, dword ptr [0x109f1668] */
  EDX = (r32((uint32_t)(0x109f1668)));
  /* 109c404c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c404f mov dword ptr [0x109f1668], edx */
  w32((uint32_t)(0x109f1668), (EDX));
  /* 109c4055 cmp dword ptr [0x109f16bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c405c jne 0x109c4063 */
  if (!C.zf) goto L_109c4063;
  /* 109c405e call 0x109c4a20 */
  push32(0x109c4063u); f_109c4a20();
L_109c4063:;
  /* 109c4063 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109c4065 call 0x109c6750 */
  push32(0x109c406au); f_109c6750();
  /* 109c406a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c406d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 109c4070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c4072 je 0x109c4079 */
  if (C.zf) goto L_109c4079;
  /* 109c4074 call 0x109c7060 */
  push32(0x109c4079u); f_109c7060();
L_109c4079:;
  /* 109c4079 call 0x109c5180 */
  push32(0x109c407eu); f_109c5180();
  /* 109c407e call 0x109c4c30 */
  push32(0x109c4083u); f_109c4c30();
  /* 109c4083 call 0x109c7a80 */
  push32(0x109c4088u); f_109c7a80();
  /* 109c4088 jmp 0x109c408e */
  goto L_109c408e;
L_109c408a:;
  /* 109c408a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c408c jmp 0x109c40a5 */
  goto L_109c40a5;
L_109c408e:;
  /* 109c408e jmp 0x109c40a0 */
  goto L_109c40a0;
L_109c4090:;
  /* 109c4090 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4094 jne 0x109c40a0 */
  if (!C.zf) goto L_109c40a0;
  /* 109c4096 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c4098 call 0x109c4d20 */
  push32(0x109c409du); f_109c4d20();
  /* 109c409d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c40a0:;
  /* 109c40a0 mov eax, 1 */
  EAX = (0x1u);
L_109c40a5:;
  /* 109c40a5 pop ebp */
  EBP = (pop32());
  /* 109c40a6 ret 0xc */
  ESPCHK(0x109c3f70u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x109c40b0 (243 bytes, 86 insns) */
void f_109c40b0(void) {
  FTRACE(0x109c40b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c40b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c40b1 mov ebp, esp */
  EBP = (ESP);
  /* 109c40b3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c40b4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109c40bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c40bf jne 0x109c40d1 */
  if (!C.zf) goto L_109c40d1;
  /* 109c40c1 cmp dword ptr [0x109f1668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c40c8 jne 0x109c40d1 */
  if (!C.zf) goto L_109c40d1;
  /* 109c40ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c40cc jmp 0x109c419d */
  goto L_109c419d;
L_109c40d1:;
  /* 109c40d1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c40d5 je 0x109c40dd */
  if (C.zf) goto L_109c40dd;
  /* 109c40d7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c40db jne 0x109c411f */
  if (!C.zf) goto L_109c411f;
L_109c40dd:;
  /* 109c40dd cmp dword ptr [0x109f31dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f31dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c40e4 je 0x109c40fb */
  if (C.zf) goto L_109c40fb;
  /* 109c40e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c40e9 push eax */
  push32((uint32_t)(EAX));
  /* 109c40ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c40ed push ecx */
  push32((uint32_t)(ECX));
  /* 109c40ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c40f1 push edx */
  push32((uint32_t)(EDX));
  /* 109c40f2 call dword ptr [0x109f31dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f31dc))), 0x109c40f8u);
  /* 109c40f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c40fb:;
  /* 109c40fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c40ff je 0x109c4115 */
  if (C.zf) goto L_109c4115;
  /* 109c4101 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c4104 push eax */
  push32((uint32_t)(EAX));
  /* 109c4105 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c4108 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4109 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c410c push edx */
  push32((uint32_t)(EDX));
  /* 109c410d call 0x109c3f70 */
  push32(0x109c4112u); f_109c3f70();
  /* 109c4112 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c4115:;
  /* 109c4115 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4119 jne 0x109c411f */
  if (!C.zf) goto L_109c411f;
  /* 109c411b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c411d jmp 0x109c419d */
  goto L_109c419d;
L_109c411f:;
  /* 109c411f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c4122 push eax */
  push32((uint32_t)(EAX));
  /* 109c4123 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c4126 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4127 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c412a push edx */
  push32((uint32_t)(EDX));
  /* 109c412b call 0x109c1014 */
  push32(0x109c4130u); f_109c1014();
  /* 109c4130 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c4133 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4137 jne 0x109c414e */
  if (!C.zf) goto L_109c414e;
  /* 109c4139 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c413d jne 0x109c414e */
  if (!C.zf) goto L_109c414e;
  /* 109c413f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c4142 push eax */
  push32((uint32_t)(EAX));
  /* 109c4143 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c4145 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4148 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4149 call 0x109c3f70 */
  push32(0x109c414eu); f_109c3f70();
L_109c414e:;
  /* 109c414e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4152 je 0x109c415a */
  if (C.zf) goto L_109c415a;
  /* 109c4154 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4158 jne 0x109c419a */
  if (!C.zf) goto L_109c419a;
L_109c415a:;
  /* 109c415a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c415d push edx */
  push32((uint32_t)(EDX));
  /* 109c415e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c4161 push eax */
  push32((uint32_t)(EAX));
  /* 109c4162 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4165 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4166 call 0x109c3f70 */
  push32(0x109c416bu); f_109c3f70();
  /* 109c416b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c416d jne 0x109c4176 */
  if (!C.zf) goto L_109c4176;
  /* 109c416f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109c4176:;
  /* 109c4176 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c417a je 0x109c419a */
  if (C.zf) goto L_109c419a;
  /* 109c417c cmp dword ptr [0x109f31dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f31dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4183 je 0x109c419a */
  if (C.zf) goto L_109c419a;
  /* 109c4185 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c4188 push edx */
  push32((uint32_t)(EDX));
  /* 109c4189 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c418c push eax */
  push32((uint32_t)(EAX));
  /* 109c418d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4190 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4191 call dword ptr [0x109f31dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f31dc))), 0x109c4197u);
  /* 109c4197 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c419a:;
  /* 109c419a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109c419d:;
  /* 109c419d mov esp, ebp */
  ESP = (EBP);
  /* 109c419f pop ebp */
  EBP = (pop32());
  /* 109c41a0 ret 0xc */
  ESPCHK(0x109c40b0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x109c41b0 (58 bytes, 18 insns) */
void f_109c41b0(void) {
  FTRACE(0x109c41b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c41b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c41b1 mov ebp, esp */
  EBP = (ESP);
  /* 109c41b3 cmp dword ptr [0x109f1674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f1674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c41ba je 0x109c41ce */
  if (C.zf) goto L_109c41ce;
  /* 109c41bc cmp dword ptr [0x109f1674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c41c3 jne 0x109c41d3 */
  if (!C.zf) goto L_109c41d3;
  /* 109c41c5 cmp dword ptr [0x109f1678], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f1678))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c41cc jne 0x109c41d3 */
  if (!C.zf) goto L_109c41d3;
L_109c41ce:;
  /* 109c41ce call 0x109c7b20 */
  push32(0x109c41d3u); f_109c7b20();
L_109c41d3:;
  /* 109c41d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c41d6 push eax */
  push32((uint32_t)(EAX));
  /* 109c41d7 call 0x109c7b70 */
  push32(0x109c41dcu); f_109c7b70();
  /* 109c41dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c41df push 0xff */
  push32((uint32_t)(0xffu));
  /* 109c41e4 call dword ptr [0x109efa30] */
  call_ind((uint32_t)(r32((uint32_t)(0x109efa30))), 0x109c41eau);
  /* 109c41ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c41ed pop ebp */
  EBP = (pop32());
  /* 109c41ee ret  */
  ESPCHK(0x109c41b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041f0 @ 0x109c41f0 (11 bytes, 5 insns) */
void f_109c41f0(void) {
  FTRACE(0x109c41f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c41f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c41f1 mov ebp, esp */
  EBP = (ESP);
  /* 109c41f3 call dword ptr [0x109f4338] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4338))), 0x109c41f9u);
  /* 109c41f9 pop ebp */
  EBP = (pop32());
  /* 109c41fa ret  */
  ESPCHK(0x109c41f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004200 @ 0x109c4200 (87 bytes, 30 insns) */
void f_109c4200(void) {
  FTRACE(0x109c4200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4200 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4201 mov ebp, esp */
  EBP = (ESP);
  /* 109c4203 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4204 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4208 jl 0x109c4210 */
  if ((C.sf!=C.of)) goto L_109c4210;
  /* 109c420a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c420e jl 0x109c4215 */
  if ((C.sf!=C.of)) goto L_109c4215;
L_109c4210:;
  /* 109c4210 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c4213 jmp 0x109c4253 */
  goto L_109c4253;
L_109c4215:;
  /* 109c4215 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4219 jne 0x109c4227 */
  if (!C.zf) goto L_109c4227;
  /* 109c421b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c421e mov eax, dword ptr [eax*4 + 0x109efa38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x109efa38)));
  /* 109c4225 jmp 0x109c4253 */
  goto L_109c4253;
L_109c4227:;
  /* 109c4227 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c422a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 109c422d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c422f je 0x109c4236 */
  if (C.zf) goto L_109c4236;
  /* 109c4231 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c4234 jmp 0x109c4253 */
  goto L_109c4253;
L_109c4236:;
  /* 109c4236 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4239 mov eax, dword ptr [edx*4 + 0x109efa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109efa38)));
  /* 109c4240 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c4243 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4246 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c4249 mov dword ptr [ecx*4 + 0x109efa38], edx */
  w32((uint32_t)(ECX*4 + 0x109efa38), (EDX));
  /* 109c4250 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109c4253:;
  /* 109c4253 mov esp, ebp */
  ESP = (EBP);
  /* 109c4255 pop ebp */
  EBP = (pop32());
  /* 109c4256 ret  */
  ESPCHK(0x109c4200u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x109c4260 (126 bytes, 38 insns) */
void f_109c4260(void) {
  FTRACE(0x109c4260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4260 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4261 mov ebp, esp */
  EBP = (ESP);
  /* 109c4263 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4264 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4268 jl 0x109c4270 */
  if ((C.sf!=C.of)) goto L_109c4270;
  /* 109c426a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c426e jl 0x109c4277 */
  if ((C.sf!=C.of)) goto L_109c4277;
L_109c4270:;
  /* 109c4270 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 109c4275 jmp 0x109c42da */
  goto L_109c42da;
L_109c4277:;
  /* 109c4277 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c427b jne 0x109c4289 */
  if (!C.zf) goto L_109c4289;
  /* 109c427d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4280 mov eax, dword ptr [eax*4 + 0x109efa44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x109efa44)));
  /* 109c4287 jmp 0x109c42da */
  goto L_109c42da;
L_109c4289:;
  /* 109c4289 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c428c mov edx, dword ptr [ecx*4 + 0x109efa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109efa44)));
  /* 109c4293 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c4296 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c429a jne 0x109c42b0 */
  if (!C.zf) goto L_109c42b0;
  /* 109c429c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 109c429e call dword ptr [0x109f433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f433c))), 0x109c42a4u);
  /* 109c42a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c42a7 mov dword ptr [ecx*4 + 0x109efa44], eax */
  w32((uint32_t)(ECX*4 + 0x109efa44), (EAX));
  /* 109c42ae jmp 0x109c42d7 */
  goto L_109c42d7;
L_109c42b0:;
  /* 109c42b0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c42b4 jne 0x109c42ca */
  if (!C.zf) goto L_109c42ca;
  /* 109c42b6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 109c42b8 call dword ptr [0x109f433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f433c))), 0x109c42beu);
  /* 109c42be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c42c1 mov dword ptr [edx*4 + 0x109efa44], eax */
  w32((uint32_t)(EDX*4 + 0x109efa44), (EAX));
  /* 109c42c8 jmp 0x109c42d7 */
  goto L_109c42d7;
L_109c42ca:;
  /* 109c42ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c42cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c42d0 mov dword ptr [eax*4 + 0x109efa44], ecx */
  w32((uint32_t)(EAX*4 + 0x109efa44), (ECX));
L_109c42d7:;
  /* 109c42d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109c42da:;
  /* 109c42da mov esp, ebp */
  ESP = (EBP);
  /* 109c42dc pop ebp */
  EBP = (pop32());
  /* 109c42dd ret  */
  ESPCHK(0x109c4260u, _esp0);
  ESP += 4; return;
}

/* FUN_100042e0 @ 0x109c42e0 (28 bytes, 11 insns) */
void f_109c42e0(void) {
  FTRACE(0x109c42e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c42e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c42e1 mov ebp, esp */
  EBP = (ESP);
  /* 109c42e3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c42e4 mov eax, dword ptr [0x109f31c0] */
  EAX = (r32((uint32_t)(0x109f31c0)));
  /* 109c42e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c42ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c42ef mov dword ptr [0x109f31c0], ecx */
  w32((uint32_t)(0x109f31c0), (ECX));
  /* 109c42f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c42f8 mov esp, ebp */
  ESP = (EBP);
  /* 109c42fa pop ebp */
  EBP = (pop32());
  /* 109c42fb ret  */
  ESPCHK(0x109c42e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004300 @ 0x109c4300 (912 bytes, 248 insns) */
void f_109c4300(void) {
  FTRACE(0x109c4300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4300 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4301 mov ebp, esp */
  EBP = (ESP);
  /* 109c4303 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 109c4308 call 0x109c83e0 */
  push32(0x109c430du); f_109c83e0();
  /* 109c430d push edi */
  push32((uint32_t)(EDI));
  /* 109c430e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 109c4315 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 109c431a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c431c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 109c4322 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109c4324 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 109c4326 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 109c4327 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 109c432e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 109c4333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c4335 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 109c433b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109c433d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 109c433f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 109c4340 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 109c4347 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 109c434c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c434e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 109c4354 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109c4356 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 109c4358 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 109c4359 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 109c435c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 109c4362 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4366 jl 0x109c436e */
  if ((C.sf!=C.of)) goto L_109c436e;
  /* 109c4368 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c436c jl 0x109c4376 */
  if ((C.sf!=C.of)) goto L_109c4376;
L_109c436e:;
  /* 109c436e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c4371 jmp 0x109c468b */
  goto L_109c468b;
L_109c4376:;
  /* 109c4376 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c437a jne 0x109c4420 */
  if (!C.zf) goto L_109c4420;
  /* 109c4380 push 0x109efa34 */
  push32((uint32_t)(0x109efa34u));
  /* 109c4385 call dword ptr [0x109f4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4354))), 0x109c438bu);
  /* 109c438b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c438d jle 0x109c4420 */
  if ((C.zf||C.sf!=C.of)) goto L_109c4420;
  /* 109c4393 cmp dword ptr [0x109f167c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f167c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c439a jne 0x109c43de */
  if (!C.zf) goto L_109c43de;
  /* 109c439c push 0x109ec57c */
  push32((uint32_t)(0x109ec57cu));
  /* 109c43a1 call dword ptr [0x109f4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4350))), 0x109c43a7u);
  /* 109c43a7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 109c43ad cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c43b4 je 0x109c43d6 */
  if (C.zf) goto L_109c43d6;
  /* 109c43b6 push 0x109ec570 */
  push32((uint32_t)(0x109ec570u));
  /* 109c43bb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 109c43c1 push ecx */
  push32((uint32_t)(ECX));
  /* 109c43c2 call dword ptr [0x109f434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f434c))), 0x109c43c8u);
  /* 109c43c8 mov dword ptr [0x109f167c], eax */
  w32((uint32_t)(0x109f167c), (EAX));
  /* 109c43cd cmp dword ptr [0x109f167c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f167c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c43d4 jne 0x109c43de */
  if (!C.zf) goto L_109c43de;
L_109c43d6:;
  /* 109c43d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c43d9 jmp 0x109c468b */
  goto L_109c468b;
L_109c43de:;
  /* 109c43de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c43e1 push edx */
  push32((uint32_t)(EDX));
  /* 109c43e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c43e5 push eax */
  push32((uint32_t)(EAX));
  /* 109c43e6 push 0x109ec53c */
  push32((uint32_t)(0x109ec53cu));
  /* 109c43eb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 109c43f1 push ecx */
  push32((uint32_t)(ECX));
  /* 109c43f2 call dword ptr [0x109f167c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f167c))), 0x109c43f8u);
  /* 109c43f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c43fb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 109c4401 push edx */
  push32((uint32_t)(EDX));
  /* 109c4402 call dword ptr [0x109f4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4348))), 0x109c4408u);
  /* 109c4408 push 0x109efa34 */
  push32((uint32_t)(0x109efa34u));
  /* 109c440d call dword ptr [0x109f4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4344))), 0x109c4413u);
  /* 109c4413 call 0x109c41f0 */
  push32(0x109c4418u); f_109c41f0();
  /* 109c4418 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c441b jmp 0x109c468b */
  goto L_109c468b;
L_109c4420:;
  /* 109c4420 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4424 je 0x109c445d */
  if (C.zf) goto L_109c445d;
  /* 109c4426 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 109c442c push eax */
  push32((uint32_t)(EAX));
  /* 109c442d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c4430 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4431 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 109c4436 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 109c443c push edx */
  push32((uint32_t)(EDX));
  /* 109c443d call 0x109c82e0 */
  push32(0x109c4442u); f_109c82e0();
  /* 109c4442 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c4447 jge 0x109c445d */
  if ((C.sf==C.of)) goto L_109c445d;
  /* 109c4449 push 0x109ec510 */
  push32((uint32_t)(0x109ec510u));
  /* 109c444e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 109c4454 push eax */
  push32((uint32_t)(EAX));
  /* 109c4455 call 0x109c81f0 */
  push32(0x109c445au); f_109c81f0();
  /* 109c445a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c445d:;
  /* 109c445d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4461 jne 0x109c4495 */
  if (!C.zf) goto L_109c4495;
  /* 109c4463 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4467 je 0x109c4475 */
  if (C.zf) goto L_109c4475;
  /* 109c4469 mov dword ptr [ebp - 0x3028], 0x109ec4fc */
  w32((uint32_t)(EBP + -0x3028), (0x109ec4fcu));
  /* 109c4473 jmp 0x109c447f */
  goto L_109c447f;
L_109c4475:;
  /* 109c4475 mov dword ptr [ebp - 0x3028], 0x109ec4e8 */
  w32((uint32_t)(EBP + -0x3028), (0x109ec4e8u));
L_109c447f:;
  /* 109c447f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 109c4485 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4486 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 109c448c push edx */
  push32((uint32_t)(EDX));
  /* 109c448d call 0x109c81f0 */
  push32(0x109c4492u); f_109c81f0();
  /* 109c4492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4495:;
  /* 109c4495 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 109c449b push eax */
  push32((uint32_t)(EAX));
  /* 109c449c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 109c44a2 push ecx */
  push32((uint32_t)(ECX));
  /* 109c44a3 call 0x109c8200 */
  push32(0x109c44a8u); f_109c8200();
  /* 109c44a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c44ab cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c44af jne 0x109c44ea */
  if (!C.zf) goto L_109c44ea;
  /* 109c44b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c44b4 mov eax, dword ptr [edx*4 + 0x109efa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109efa38)));
  /* 109c44bb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 109c44be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c44c0 je 0x109c44d6 */
  if (C.zf) goto L_109c44d6;
  /* 109c44c2 push 0x109ec4e4 */
  push32((uint32_t)(0x109ec4e4u));
  /* 109c44c7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 109c44cd push ecx */
  push32((uint32_t)(ECX));
  /* 109c44ce call 0x109c8200 */
  push32(0x109c44d3u); f_109c8200();
  /* 109c44d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c44d6:;
  /* 109c44d6 push 0x109ec4e0 */
  push32((uint32_t)(0x109ec4e0u));
  /* 109c44db lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 109c44e1 push edx */
  push32((uint32_t)(EDX));
  /* 109c44e2 call 0x109c8200 */
  push32(0x109c44e7u); f_109c8200();
  /* 109c44e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c44ea:;
  /* 109c44ea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c44ee je 0x109c4532 */
  if (C.zf) goto L_109c4532;
  /* 109c44f0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 109c44f6 push eax */
  push32((uint32_t)(EAX));
  /* 109c44f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c44fa push ecx */
  push32((uint32_t)(ECX));
  /* 109c44fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c44fe push edx */
  push32((uint32_t)(EDX));
  /* 109c44ff push 0x109ec4d4 */
  push32((uint32_t)(0x109ec4d4u));
  /* 109c4504 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 109c4509 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 109c450f push eax */
  push32((uint32_t)(EAX));
  /* 109c4510 call 0x109c80f0 */
  push32(0x109c4515u); f_109c80f0();
  /* 109c4515 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c451a jge 0x109c4530 */
  if ((C.sf==C.of)) goto L_109c4530;
  /* 109c451c push 0x109ec510 */
  push32((uint32_t)(0x109ec510u));
  /* 109c4521 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 109c4527 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4528 call 0x109c81f0 */
  push32(0x109c452du); f_109c81f0();
  /* 109c452d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4530:;
  /* 109c4530 jmp 0x109c4548 */
  goto L_109c4548;
L_109c4532:;
  /* 109c4532 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 109c4538 push edx */
  push32((uint32_t)(EDX));
  /* 109c4539 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 109c453f push eax */
  push32((uint32_t)(EAX));
  /* 109c4540 call 0x109c81f0 */
  push32(0x109c4545u); f_109c81f0();
  /* 109c4545 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4548:;
  /* 109c4548 cmp dword ptr [0x109f31c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f31c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c454f je 0x109c458c */
  if (C.zf) goto L_109c458c;
  /* 109c4551 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 109c4557 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4558 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 109c455e push edx */
  push32((uint32_t)(EDX));
  /* 109c455f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4562 push eax */
  push32((uint32_t)(EAX));
  /* 109c4563 call dword ptr [0x109f31c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f31c0))), 0x109c4569u);
  /* 109c4569 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c456c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c456e je 0x109c458c */
  if (C.zf) goto L_109c458c;
  /* 109c4570 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4574 jne 0x109c4581 */
  if (!C.zf) goto L_109c4581;
  /* 109c4576 push 0x109efa34 */
  push32((uint32_t)(0x109efa34u));
  /* 109c457b call dword ptr [0x109f4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4344))), 0x109c4581u);
L_109c4581:;
  /* 109c4581 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 109c4587 jmp 0x109c468b */
  goto L_109c468b;
L_109c458c:;
  /* 109c458c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c458f mov edx, dword ptr [ecx*4 + 0x109efa38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109efa38)));
  /* 109c4596 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 109c4599 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c459b je 0x109c45db */
  if (C.zf) goto L_109c45db;
  /* 109c459d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c45a0 cmp dword ptr [eax*4 + 0x109efa44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x109efa44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c45a8 je 0x109c45db */
  if (C.zf) goto L_109c45db;
  /* 109c45aa push 0 */
  push32((uint32_t)(0x0u));
  /* 109c45ac lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 109c45b2 push ecx */
  push32((uint32_t)(ECX));
  /* 109c45b3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 109c45b9 push edx */
  push32((uint32_t)(EDX));
  /* 109c45ba call 0x109c8070 */
  push32(0x109c45bfu); f_109c8070();
  /* 109c45bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c45c2 push eax */
  push32((uint32_t)(EAX));
  /* 109c45c3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 109c45c9 push eax */
  push32((uint32_t)(EAX));
  /* 109c45ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c45cd mov edx, dword ptr [ecx*4 + 0x109efa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109efa44)));
  /* 109c45d4 push edx */
  push32((uint32_t)(EDX));
  /* 109c45d5 call dword ptr [0x109f4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4340))), 0x109c45dbu);
L_109c45db:;
  /* 109c45db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c45de mov ecx, dword ptr [eax*4 + 0x109efa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109efa38)));
  /* 109c45e5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 109c45e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c45ea je 0x109c45f9 */
  if (C.zf) goto L_109c45f9;
  /* 109c45ec lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 109c45f2 push edx */
  push32((uint32_t)(EDX));
  /* 109c45f3 call dword ptr [0x109f4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4348))), 0x109c45f9u);
L_109c45f9:;
  /* 109c45f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c45fc mov ecx, dword ptr [eax*4 + 0x109efa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109efa38)));
  /* 109c4603 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 109c4606 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c4608 je 0x109c4678 */
  if (C.zf) goto L_109c4678;
  /* 109c460a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c460e je 0x109c462d */
  if (C.zf) goto L_109c462d;
  /* 109c4610 push 0xa */
  push32((uint32_t)(0xau));
  /* 109c4612 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 109c4618 push edx */
  push32((uint32_t)(EDX));
  /* 109c4619 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c461c push eax */
  push32((uint32_t)(EAX));
  /* 109c461d call 0x109c7d80 */
  push32(0x109c4622u); f_109c7d80();
  /* 109c4622 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4625 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 109c462b jmp 0x109c4637 */
  goto L_109c4637;
L_109c462d:;
  /* 109c462d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_109c4637:;
  /* 109c4637 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 109c463d push ecx */
  push32((uint32_t)(ECX));
  /* 109c463e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c4641 push edx */
  push32((uint32_t)(EDX));
  /* 109c4642 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 109c4648 push eax */
  push32((uint32_t)(EAX));
  /* 109c4649 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c464c push ecx */
  push32((uint32_t)(ECX));
  /* 109c464d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4650 push edx */
  push32((uint32_t)(EDX));
  /* 109c4651 call 0x109c4690 */
  push32(0x109c4656u); f_109c4690();
  /* 109c4656 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4659 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 109c465f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4663 jne 0x109c4670 */
  if (!C.zf) goto L_109c4670;
  /* 109c4665 push 0x109efa34 */
  push32((uint32_t)(0x109efa34u));
  /* 109c466a call dword ptr [0x109f4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4344))), 0x109c4670u);
L_109c4670:;
  /* 109c4670 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 109c4676 jmp 0x109c468b */
  goto L_109c468b;
L_109c4678:;
  /* 109c4678 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c467c jne 0x109c4689 */
  if (!C.zf) goto L_109c4689;
  /* 109c467e push 0x109efa34 */
  push32((uint32_t)(0x109efa34u));
  /* 109c4683 call dword ptr [0x109f4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4344))), 0x109c4689u);
L_109c4689:;
  /* 109c4689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109c468b:;
  /* 109c468b pop edi */
  EDI = (pop32());
  /* 109c468c mov esp, ebp */
  ESP = (EBP);
  /* 109c468e pop ebp */
  EBP = (pop32());
  /* 109c468f ret  */
  ESPCHK(0x109c4300u, _esp0);
  ESP += 4; return;
}

/* FUN_10004690 @ 0x109c4690 (780 bytes, 197 insns) */
void f_109c4690(void) {
  FTRACE(0x109c4690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4690 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4691 mov ebp, esp */
  EBP = (ESP);
  /* 109c4693 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 109c4698 call 0x109c83e0 */
  push32(0x109c469du); f_109c83e0();
L_109c469d:;
  /* 109c469d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c46a1 jne 0x109c46c8 */
  if (!C.zf) goto L_109c46c8;
  /* 109c46a3 push 0x109ec6cc */
  push32((uint32_t)(0x109ec6ccu));
  /* 109c46a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c46aa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 109c46af push 0x109ec6c0 */
  push32((uint32_t)(0x109ec6c0u));
  /* 109c46b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c46b6 call 0x109c4300 */
  push32(0x109c46bbu); f_109c4300();
  /* 109c46bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c46be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c46c1 jne 0x109c46c8 */
  if (!C.zf) goto L_109c46c8;
  /* 109c46c3 call 0x109c41f0 */
  push32(0x109c46c8u); f_109c41f0();
L_109c46c8:;
  /* 109c46c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c46ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c46cc jne 0x109c469d */
  if (!C.zf) goto L_109c469d;
  /* 109c46ce push 0x104 */
  push32((uint32_t)(0x104u));
  /* 109c46d3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 109c46d9 push ecx */
  push32((uint32_t)(ECX));
  /* 109c46da push 0 */
  push32((uint32_t)(0x0u));
  /* 109c46dc call dword ptr [0x109f4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4358))), 0x109c46e2u);
  /* 109c46e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c46e4 jne 0x109c46fa */
  if (!C.zf) goto L_109c46fa;
  /* 109c46e6 push 0x109ec6a8 */
  push32((uint32_t)(0x109ec6a8u));
  /* 109c46eb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 109c46f1 push edx */
  push32((uint32_t)(EDX));
  /* 109c46f2 call 0x109c81f0 */
  push32(0x109c46f7u); f_109c81f0();
  /* 109c46f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c46fa:;
  /* 109c46fa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 109c4700 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c4703 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4706 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4707 call 0x109c8070 */
  push32(0x109c470cu); f_109c8070();
  /* 109c470c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c470f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4712 jbe 0x109c473d */
  if ((C.cf||C.zf)) goto L_109c473d;
  /* 109c4714 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4717 push edx */
  push32((uint32_t)(EDX));
  /* 109c4718 call 0x109c8070 */
  push32(0x109c471du); f_109c8070();
  /* 109c471d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4720 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4723 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 109c4727 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c472a push 3 */
  push32((uint32_t)(0x3u));
  /* 109c472c push 0x109ec6a4 */
  push32((uint32_t)(0x109ec6a4u));
  /* 109c4731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4734 push eax */
  push32((uint32_t)(EAX));
  /* 109c4735 call 0x109c8a60 */
  push32(0x109c473au); f_109c8a60();
  /* 109c473a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c473d:;
  /* 109c473d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c4740 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 109c4746 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c474d je 0x109c4798 */
  if (C.zf) goto L_109c4798;
  /* 109c474f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 109c4755 push edx */
  push32((uint32_t)(EDX));
  /* 109c4756 call 0x109c8070 */
  push32(0x109c475bu); f_109c8070();
  /* 109c475b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c475e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4761 jbe 0x109c4798 */
  if ((C.cf||C.zf)) goto L_109c4798;
  /* 109c4763 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 109c4769 push eax */
  push32((uint32_t)(EAX));
  /* 109c476a call 0x109c8070 */
  push32(0x109c476fu); f_109c8070();
  /* 109c476f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4772 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 109c4778 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 109c477c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 109c4782 push 3 */
  push32((uint32_t)(0x3u));
  /* 109c4784 push 0x109ec6a4 */
  push32((uint32_t)(0x109ec6a4u));
  /* 109c4789 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 109c478f push eax */
  push32((uint32_t)(EAX));
  /* 109c4790 call 0x109c8a60 */
  push32(0x109c4795u); f_109c8a60();
  /* 109c4795 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4798:;
  /* 109c4798 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c479c jne 0x109c47aa */
  if (!C.zf) goto L_109c47aa;
  /* 109c479e mov dword ptr [ebp - 0x1114], 0x109ec630 */
  w32((uint32_t)(EBP + -0x1114), (0x109ec630u));
  /* 109c47a8 jmp 0x109c47b4 */
  goto L_109c47b4;
L_109c47aa:;
  /* 109c47aa mov dword ptr [ebp - 0x1114], 0x109ec3d0 */
  w32((uint32_t)(EBP + -0x1114), (0x109ec3d0u));
L_109c47b4:;
  /* 109c47b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c47b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109c47ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c47bc je 0x109c47c9 */
  if (C.zf) goto L_109c47c9;
  /* 109c47be mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c47c1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 109c47c7 jmp 0x109c47d3 */
  goto L_109c47d3;
L_109c47c9:;
  /* 109c47c9 mov dword ptr [ebp - 0x1118], 0x109ec3d0 */
  w32((uint32_t)(EBP + -0x1118), (0x109ec3d0u));
L_109c47d3:;
  /* 109c47d3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c47d6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109c47d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c47db je 0x109c47ef */
  if (C.zf) goto L_109c47ef;
  /* 109c47dd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c47e1 jne 0x109c47ef */
  if (!C.zf) goto L_109c47ef;
  /* 109c47e3 mov dword ptr [ebp - 0x111c], 0x109ec620 */
  w32((uint32_t)(EBP + -0x111c), (0x109ec620u));
  /* 109c47ed jmp 0x109c47f9 */
  goto L_109c47f9;
L_109c47ef:;
  /* 109c47ef mov dword ptr [ebp - 0x111c], 0x109ec3d0 */
  w32((uint32_t)(EBP + -0x111c), (0x109ec3d0u));
L_109c47f9:;
  /* 109c47f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c47fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109c47ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c4801 je 0x109c480f */
  if (C.zf) goto L_109c480f;
  /* 109c4803 mov dword ptr [ebp - 0x1120], 0x109ec61c */
  w32((uint32_t)(EBP + -0x1120), (0x109ec61cu));
  /* 109c480d jmp 0x109c4819 */
  goto L_109c4819;
L_109c480f:;
  /* 109c480f mov dword ptr [ebp - 0x1120], 0x109ec3d0 */
  w32((uint32_t)(EBP + -0x1120), (0x109ec3d0u));
L_109c4819:;
  /* 109c4819 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c481d je 0x109c482a */
  if (C.zf) goto L_109c482a;
  /* 109c481f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c4822 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 109c4828 jmp 0x109c4834 */
  goto L_109c4834;
L_109c482a:;
  /* 109c482a mov dword ptr [ebp - 0x1124], 0x109ec3d0 */
  w32((uint32_t)(EBP + -0x1124), (0x109ec3d0u));
L_109c4834:;
  /* 109c4834 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4838 je 0x109c4846 */
  if (C.zf) goto L_109c4846;
  /* 109c483a mov dword ptr [ebp - 0x1128], 0x109ec614 */
  w32((uint32_t)(EBP + -0x1128), (0x109ec614u));
  /* 109c4844 jmp 0x109c4850 */
  goto L_109c4850;
L_109c4846:;
  /* 109c4846 mov dword ptr [ebp - 0x1128], 0x109ec3d0 */
  w32((uint32_t)(EBP + -0x1128), (0x109ec3d0u));
L_109c4850:;
  /* 109c4850 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4854 je 0x109c4861 */
  if (C.zf) goto L_109c4861;
  /* 109c4856 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c4859 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 109c485f jmp 0x109c486b */
  goto L_109c486b;
L_109c4861:;
  /* 109c4861 mov dword ptr [ebp - 0x112c], 0x109ec3d0 */
  w32((uint32_t)(EBP + -0x112c), (0x109ec3d0u));
L_109c486b:;
  /* 109c486b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c486f je 0x109c487d */
  if (C.zf) goto L_109c487d;
  /* 109c4871 mov dword ptr [ebp - 0x1130], 0x109ec60c */
  w32((uint32_t)(EBP + -0x1130), (0x109ec60cu));
  /* 109c487b jmp 0x109c4887 */
  goto L_109c4887;
L_109c487d:;
  /* 109c487d mov dword ptr [ebp - 0x1130], 0x109ec3d0 */
  w32((uint32_t)(EBP + -0x1130), (0x109ec3d0u));
L_109c4887:;
  /* 109c4887 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c488e je 0x109c489e */
  if (C.zf) goto L_109c489e;
  /* 109c4890 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 109c4896 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 109c489c jmp 0x109c48a8 */
  goto L_109c48a8;
L_109c489e:;
  /* 109c489e mov dword ptr [ebp - 0x1134], 0x109ec3d0 */
  w32((uint32_t)(EBP + -0x1134), (0x109ec3d0u));
L_109c48a8:;
  /* 109c48a8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c48af je 0x109c48bd */
  if (C.zf) goto L_109c48bd;
  /* 109c48b1 mov dword ptr [ebp - 0x1138], 0x109ec600 */
  w32((uint32_t)(EBP + -0x1138), (0x109ec600u));
  /* 109c48bb jmp 0x109c48c7 */
  goto L_109c48c7;
L_109c48bd:;
  /* 109c48bd mov dword ptr [ebp - 0x1138], 0x109ec3d0 */
  w32((uint32_t)(EBP + -0x1138), (0x109ec3d0u));
L_109c48c7:;
  /* 109c48c7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 109c48cd push edx */
  push32((uint32_t)(EDX));
  /* 109c48ce mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 109c48d4 push eax */
  push32((uint32_t)(EAX));
  /* 109c48d5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 109c48db push ecx */
  push32((uint32_t)(ECX));
  /* 109c48dc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 109c48e2 push edx */
  push32((uint32_t)(EDX));
  /* 109c48e3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 109c48e9 push eax */
  push32((uint32_t)(EAX));
  /* 109c48ea mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 109c48f0 push ecx */
  push32((uint32_t)(ECX));
  /* 109c48f1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 109c48f7 push edx */
  push32((uint32_t)(EDX));
  /* 109c48f8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 109c48fe push eax */
  push32((uint32_t)(EAX));
  /* 109c48ff mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 109c4905 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4906 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 109c490c push edx */
  push32((uint32_t)(EDX));
  /* 109c490d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4910 push eax */
  push32((uint32_t)(EAX));
  /* 109c4911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4914 mov edx, dword ptr [ecx*4 + 0x109efa50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109efa50)));
  /* 109c491b push edx */
  push32((uint32_t)(EDX));
  /* 109c491c push 0x109ec5ac */
  push32((uint32_t)(0x109ec5acu));
  /* 109c4921 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 109c4926 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 109c492c push eax */
  push32((uint32_t)(EAX));
  /* 109c492d call 0x109c80f0 */
  push32(0x109c4932u); f_109c80f0();
  /* 109c4932 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c4937 jge 0x109c494d */
  if ((C.sf==C.of)) goto L_109c494d;
  /* 109c4939 push 0x109ec510 */
  push32((uint32_t)(0x109ec510u));
  /* 109c493e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 109c4944 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4945 call 0x109c81f0 */
  push32(0x109c494au); f_109c81f0();
  /* 109c494a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c494d:;
  /* 109c494d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 109c4952 push 0x109ec588 */
  push32((uint32_t)(0x109ec588u));
  /* 109c4957 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 109c495d push edx */
  push32((uint32_t)(EDX));
  /* 109c495e call 0x109c89a0 */
  push32(0x109c4963u); f_109c89a0();
  /* 109c4963 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4966 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 109c496c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4973 jne 0x109c4986 */
  if (!C.zf) goto L_109c4986;
  /* 109c4975 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109c4977 call 0x109c86e0 */
  push32(0x109c497cu); f_109c86e0();
  /* 109c497c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c497f push 3 */
  push32((uint32_t)(0x3u));
  /* 109c4981 call 0x109c4a00 */
  push32(0x109c4986u); f_109c4a00();
L_109c4986:;
  /* 109c4986 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c498d jne 0x109c4996 */
  if (!C.zf) goto L_109c4996;
  /* 109c498f mov eax, 1 */
  EAX = (0x1u);
  /* 109c4994 jmp 0x109c4998 */
  goto L_109c4998;
L_109c4996:;
  /* 109c4996 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109c4998:;
  /* 109c4998 mov esp, ebp */
  ESP = (EBP);
  /* 109c499a pop ebp */
  EBP = (pop32());
  /* 109c499b ret  */
  ESPCHK(0x109c4690u, _esp0);
  ESP += 4; return;
}

/* FUN_100049a0 @ 0x109c49a0 (56 bytes, 15 insns) */
void f_109c49a0(void) {
  FTRACE(0x109c49a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c49a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c49a1 mov ebp, esp */
  EBP = (ESP);
  /* 109c49a3 cmp dword ptr [0x109f31bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f31bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c49aa je 0x109c49b2 */
  if (C.zf) goto L_109c49b2;
  /* 109c49ac call dword ptr [0x109f31bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f31bc))), 0x109c49b2u);
L_109c49b2:;
  /* 109c49b2 push 0x109ef418 */
  push32((uint32_t)(0x109ef418u));
  /* 109c49b7 push 0x109ef208 */
  push32((uint32_t)(0x109ef208u));
  /* 109c49bc call 0x109c4b70 */
  push32(0x109c49c1u); f_109c4b70();
  /* 109c49c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c49c4 push 0x109ef104 */
  push32((uint32_t)(0x109ef104u));
  /* 109c49c9 push 0x109ef000 */
  push32((uint32_t)(0x109ef000u));
  /* 109c49ce call 0x109c4b70 */
  push32(0x109c49d3u); f_109c4b70();
  /* 109c49d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c49d6 pop ebp */
  EBP = (pop32());
  /* 109c49d7 ret  */
  ESPCHK(0x109c49a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049e0 @ 0x109c49e0 (21 bytes, 10 insns) */
void f_109c49e0(void) {
  FTRACE(0x109c49e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c49e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c49e1 mov ebp, esp */
  EBP = (ESP);
  /* 109c49e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c49e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c49e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c49ea push eax */
  push32((uint32_t)(EAX));
  /* 109c49eb call 0x109c4a60 */
  push32(0x109c49f0u); f_109c4a60();
  /* 109c49f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c49f3 pop ebp */
  EBP = (pop32());
  /* 109c49f4 ret  */
  ESPCHK(0x109c49e0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x109c4a00 (21 bytes, 10 insns) */
void f_109c4a00(void) {
  FTRACE(0x109c4a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4a00 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4a01 mov ebp, esp */
  EBP = (ESP);
  /* 109c4a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c4a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c4a07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4a0a push eax */
  push32((uint32_t)(EAX));
  /* 109c4a0b call 0x109c4a60 */
  push32(0x109c4a10u); f_109c4a60();
  /* 109c4a10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4a13 pop ebp */
  EBP = (pop32());
  /* 109c4a14 ret  */
  ESPCHK(0x109c4a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a20 @ 0x109c4a20 (19 bytes, 9 insns) */
void f_109c4a20(void) {
  FTRACE(0x109c4a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4a20 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4a21 mov ebp, esp */
  EBP = (ESP);
  /* 109c4a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c4a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c4a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c4a29 call 0x109c4a60 */
  push32(0x109c4a2eu); f_109c4a60();
  /* 109c4a2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4a31 pop ebp */
  EBP = (pop32());
  /* 109c4a32 ret  */
  ESPCHK(0x109c4a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a40 @ 0x109c4a40 (19 bytes, 9 insns) */
void f_109c4a40(void) {
  FTRACE(0x109c4a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4a40 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4a41 mov ebp, esp */
  EBP = (ESP);
  /* 109c4a43 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c4a45 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c4a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c4a49 call 0x109c4a60 */
  push32(0x109c4a4eu); f_109c4a60();
  /* 109c4a4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4a51 pop ebp */
  EBP = (pop32());
  /* 109c4a52 ret  */
  ESPCHK(0x109c4a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a60 @ 0x109c4a60 (227 bytes, 61 insns) */
void f_109c4a60(void) {
  FTRACE(0x109c4a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4a60 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4a61 mov ebp, esp */
  EBP = (ESP);
  /* 109c4a63 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4a64 call 0x109c4b50 */
  push32(0x109c4a69u); f_109c4b50();
  /* 109c4a69 cmp dword ptr [0x109f16c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f16c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4a70 jne 0x109c4a83 */
  if (!C.zf) goto L_109c4a83;
  /* 109c4a72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4a75 push eax */
  push32((uint32_t)(EAX));
  /* 109c4a76 call dword ptr [0x109f4364] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4364))), 0x109c4a7cu);
  /* 109c4a7c push eax */
  push32((uint32_t)(EAX));
  /* 109c4a7d call dword ptr [0x109f4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4360))), 0x109c4a83u);
L_109c4a83:;
  /* 109c4a83 mov dword ptr [0x109f16bc], 1 */
  w32((uint32_t)(0x109f16bc), (0x1u));
  /* 109c4a8d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 109c4a90 mov byte ptr [0x109f16b8], cl */
  w8((uint32_t)(0x109f16b8), (CL));
  /* 109c4a96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4a9a jne 0x109c4ae3 */
  if (!C.zf) goto L_109c4ae3;
  /* 109c4a9c cmp dword ptr [0x109f31b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f31b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4aa3 je 0x109c4ad1 */
  if (C.zf) goto L_109c4ad1;
  /* 109c4aa5 mov edx, dword ptr [0x109f31b4] */
  EDX = (r32((uint32_t)(0x109f31b4)));
  /* 109c4aab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109c4aae:;
  /* 109c4aae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4ab1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c4ab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c4ab7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4aba cmp ecx, dword ptr [0x109f31b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f31b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4ac0 jb 0x109c4ad1 */
  if (C.cf) goto L_109c4ad1;
  /* 109c4ac2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4ac5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4ac8 je 0x109c4acf */
  if (C.zf) goto L_109c4acf;
  /* 109c4aca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4acd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x109c4acfu);
L_109c4acf:;
  /* 109c4acf jmp 0x109c4aae */
  goto L_109c4aae;
L_109c4ad1:;
  /* 109c4ad1 push 0x109ef724 */
  push32((uint32_t)(0x109ef724u));
  /* 109c4ad6 push 0x109ef51c */
  push32((uint32_t)(0x109ef51cu));
  /* 109c4adb call 0x109c4b70 */
  push32(0x109c4ae0u); f_109c4b70();
  /* 109c4ae0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4ae3:;
  /* 109c4ae3 push 0x109ef92c */
  push32((uint32_t)(0x109ef92cu));
  /* 109c4ae8 push 0x109ef828 */
  push32((uint32_t)(0x109ef828u));
  /* 109c4aed call 0x109c4b70 */
  push32(0x109c4af2u); f_109c4b70();
  /* 109c4af2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4af5 cmp dword ptr [0x109f16c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4afc jne 0x109c4b1e */
  if (!C.zf) goto L_109c4b1e;
  /* 109c4afe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109c4b00 call 0x109c6750 */
  push32(0x109c4b05u); f_109c6750();
  /* 109c4b05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4b08 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 109c4b0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c4b0d je 0x109c4b1e */
  if (C.zf) goto L_109c4b1e;
  /* 109c4b0f mov dword ptr [0x109f16c4], 1 */
  w32((uint32_t)(0x109f16c4), (0x1u));
  /* 109c4b19 call 0x109c7060 */
  push32(0x109c4b1eu); f_109c7060();
L_109c4b1e:;
  /* 109c4b1e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4b22 je 0x109c4b2b */
  if (C.zf) goto L_109c4b2b;
  /* 109c4b24 call 0x109c4b60 */
  push32(0x109c4b29u); f_109c4b60();
  /* 109c4b29 jmp 0x109c4b3f */
  goto L_109c4b3f;
L_109c4b2b:;
  /* 109c4b2b mov dword ptr [0x109f16c0], 1 */
  w32((uint32_t)(0x109f16c0), (0x1u));
  /* 109c4b35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4b38 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4b39 call dword ptr [0x109f435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f435c))), 0x109c4b3fu);
L_109c4b3f:;
  /* 109c4b3f mov esp, ebp */
  ESP = (EBP);
  /* 109c4b41 pop ebp */
  EBP = (pop32());
  /* 109c4b42 ret  */
  ESPCHK(0x109c4a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b50 @ 0x109c4b50 (15 bytes, 7 insns) */
void f_109c4b50(void) {
  FTRACE(0x109c4b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4b50 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4b51 mov ebp, esp */
  EBP = (ESP);
  /* 109c4b53 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109c4b55 call 0x109c8c40 */
  push32(0x109c4b5au); f_109c8c40();
  /* 109c4b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4b5d pop ebp */
  EBP = (pop32());
  /* 109c4b5e ret  */
  ESPCHK(0x109c4b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b60 @ 0x109c4b60 (15 bytes, 7 insns) */
void f_109c4b60(void) {
  FTRACE(0x109c4b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4b60 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4b61 mov ebp, esp */
  EBP = (ESP);
  /* 109c4b63 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109c4b65 call 0x109c8ce0 */
  push32(0x109c4b6au); f_109c8ce0();
  /* 109c4b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4b6d pop ebp */
  EBP = (pop32());
  /* 109c4b6e ret  */
  ESPCHK(0x109c4b60u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x109c4b70 (37 bytes, 16 insns) */
void f_109c4b70(void) {
  FTRACE(0x109c4b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4b70 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4b71 mov ebp, esp */
  EBP = (ESP);
L_109c4b73:;
  /* 109c4b73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4b76 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4b79 jae 0x109c4b93 */
  if (!C.cf) goto L_109c4b93;
  /* 109c4b7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4b7e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4b81 je 0x109c4b88 */
  if (C.zf) goto L_109c4b88;
  /* 109c4b83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4b86 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x109c4b88u);
L_109c4b88:;
  /* 109c4b88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4b8b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4b8e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109c4b91 jmp 0x109c4b73 */
  goto L_109c4b73;
L_109c4b93:;
  /* 109c4b93 pop ebp */
  EBP = (pop32());
  /* 109c4b94 ret  */
  ESPCHK(0x109c4b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ba0 @ 0x109c4ba0 (130 bytes, 42 insns) */
void f_109c4ba0(void) {
  FTRACE(0x109c4ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4ba1 mov ebp, esp */
  EBP = (ESP);
  /* 109c4ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4ba4 call 0x109c8b60 */
  push32(0x109c4ba9u); f_109c8b60();
  /* 109c4ba9 call dword ptr [0x109f4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4370))), 0x109c4bafu);
  /* 109c4baf mov dword ptr [0x109efa5c], eax */
  w32((uint32_t)(0x109efa5c), (EAX));
  /* 109c4bb4 cmp dword ptr [0x109efa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x109efa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4bbb jne 0x109c4bc1 */
  if (!C.zf) goto L_109c4bc1;
  /* 109c4bbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c4bbf jmp 0x109c4c1e */
  goto L_109c4c1e;
L_109c4bc1:;
  /* 109c4bc1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 109c4bc3 push 0x109ec6e4 */
  push32((uint32_t)(0x109ec6e4u));
  /* 109c4bc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4bca push 0x74 */
  push32((uint32_t)(0x74u));
  /* 109c4bcc push 1 */
  push32((uint32_t)(0x1u));
  /* 109c4bce call 0x109c5650 */
  push32(0x109c4bd3u); f_109c5650();
  /* 109c4bd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4bd6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c4bd9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4bdd je 0x109c4bf4 */
  if (C.zf) goto L_109c4bf4;
  /* 109c4bdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4be2 push eax */
  push32((uint32_t)(EAX));
  /* 109c4be3 mov ecx, dword ptr [0x109efa5c] */
  ECX = (r32((uint32_t)(0x109efa5c)));
  /* 109c4be9 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4bea call dword ptr [0x109f436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f436c))), 0x109c4bf0u);
  /* 109c4bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c4bf2 jne 0x109c4bf8 */
  if (!C.zf) goto L_109c4bf8;
L_109c4bf4:;
  /* 109c4bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c4bf6 jmp 0x109c4c1e */
  goto L_109c4c1e;
L_109c4bf8:;
  /* 109c4bf8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4bfb push edx */
  push32((uint32_t)(EDX));
  /* 109c4bfc call 0x109c4c60 */
  push32(0x109c4c01u); f_109c4c60();
  /* 109c4c01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4c04 call dword ptr [0x109f4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4368))), 0x109c4c0au);
  /* 109c4c0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4c0d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109c4c0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4c12 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 109c4c19 mov eax, 1 */
  EAX = (0x1u);
L_109c4c1e:;
  /* 109c4c1e mov esp, ebp */
  ESP = (EBP);
  /* 109c4c20 pop ebp */
  EBP = (pop32());
  /* 109c4c21 ret  */
  ESPCHK(0x109c4ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c30 @ 0x109c4c30 (41 bytes, 11 insns) */
void f_109c4c30(void) {
  FTRACE(0x109c4c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4c30 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4c31 mov ebp, esp */
  EBP = (ESP);
  /* 109c4c33 call 0x109c8ba0 */
  push32(0x109c4c38u); f_109c8ba0();
  /* 109c4c38 cmp dword ptr [0x109efa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x109efa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4c3f je 0x109c4c57 */
  if (C.zf) goto L_109c4c57;
  /* 109c4c41 mov eax, dword ptr [0x109efa5c] */
  EAX = (r32((uint32_t)(0x109efa5c)));
  /* 109c4c46 push eax */
  push32((uint32_t)(EAX));
  /* 109c4c47 call dword ptr [0x109f429c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f429c))), 0x109c4c4du);
  /* 109c4c4d mov dword ptr [0x109efa5c], 0xffffffff */
  w32((uint32_t)(0x109efa5c), (0xffffffffu));
L_109c4c57:;
  /* 109c4c57 pop ebp */
  EBP = (pop32());
  /* 109c4c58 ret  */
  ESPCHK(0x109c4c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c60 @ 0x109c4c60 (25 bytes, 8 insns) */
void f_109c4c60(void) {
  FTRACE(0x109c4c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4c60 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4c61 mov ebp, esp */
  EBP = (ESP);
  /* 109c4c63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4c66 mov dword ptr [eax + 0x50], 0x109efc00 */
  w32((uint32_t)(EAX + 0x50), (0x109efc00u));
  /* 109c4c6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4c70 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 109c4c77 pop ebp */
  EBP = (pop32());
  /* 109c4c78 ret  */
  ESPCHK(0x109c4c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c80 @ 0x109c4c80 (152 bytes, 48 insns) */
void f_109c4c80(void) {
  FTRACE(0x109c4c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4c80 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4c81 mov ebp, esp */
  EBP = (ESP);
  /* 109c4c83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c4c86 call dword ptr [0x109f4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4380))), 0x109c4c8cu);
  /* 109c4c8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c4c8f mov eax, dword ptr [0x109efa5c] */
  EAX = (r32((uint32_t)(0x109efa5c)));
  /* 109c4c94 push eax */
  push32((uint32_t)(EAX));
  /* 109c4c95 call dword ptr [0x109f437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f437c))), 0x109c4c9bu);
  /* 109c4c9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c4c9e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4ca2 jne 0x109c4d07 */
  if (!C.zf) goto L_109c4d07;
  /* 109c4ca4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 109c4ca9 push 0x109ec6e4 */
  push32((uint32_t)(0x109ec6e4u));
  /* 109c4cae push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4cb0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 109c4cb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c4cb4 call 0x109c5650 */
  push32(0x109c4cb9u); f_109c5650();
  /* 109c4cb9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4cbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c4cbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4cc3 je 0x109c4cfd */
  if (C.zf) goto L_109c4cfd;
  /* 109c4cc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4cc9 mov edx, dword ptr [0x109efa5c] */
  EDX = (r32((uint32_t)(0x109efa5c)));
  /* 109c4ccf push edx */
  push32((uint32_t)(EDX));
  /* 109c4cd0 call dword ptr [0x109f436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f436c))), 0x109c4cd6u);
  /* 109c4cd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c4cd8 je 0x109c4cfd */
  if (C.zf) goto L_109c4cfd;
  /* 109c4cda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4cdd push eax */
  push32((uint32_t)(EAX));
  /* 109c4cde call 0x109c4c60 */
  push32(0x109c4ce3u); f_109c4c60();
  /* 109c4ce3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4ce6 call dword ptr [0x109f4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4368))), 0x109c4cecu);
  /* 109c4cec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4cef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109c4cf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4cf4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 109c4cfb jmp 0x109c4d07 */
  goto L_109c4d07;
L_109c4cfd:;
  /* 109c4cfd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109c4cff call 0x109c41b0 */
  push32(0x109c4d04u); f_109c41b0();
  /* 109c4d04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4d07:;
  /* 109c4d07 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c4d0a push eax */
  push32((uint32_t)(EAX));
  /* 109c4d0b call dword ptr [0x109f42a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f42a0))), 0x109c4d11u);
  /* 109c4d11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4d14 mov esp, ebp */
  ESP = (EBP);
  /* 109c4d16 pop ebp */
  EBP = (pop32());
  /* 109c4d17 ret  */
  ESPCHK(0x109c4c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d20 @ 0x109c4d20 (263 bytes, 86 insns) */
void f_109c4d20(void) {
  FTRACE(0x109c4d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4d20 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4d21 mov ebp, esp */
  EBP = (ESP);
  /* 109c4d23 cmp dword ptr [0x109efa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x109efa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4d2a je 0x109c4e25 */
  if (C.zf) goto L_109c4e25;
  /* 109c4d30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4d34 jne 0x109c4d45 */
  if (!C.zf) goto L_109c4d45;
  /* 109c4d36 mov eax, dword ptr [0x109efa5c] */
  EAX = (r32((uint32_t)(0x109efa5c)));
  /* 109c4d3b push eax */
  push32((uint32_t)(EAX));
  /* 109c4d3c call dword ptr [0x109f437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f437c))), 0x109c4d42u);
  /* 109c4d42 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_109c4d45:;
  /* 109c4d45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4d49 je 0x109c4e16 */
  if (C.zf) goto L_109c4e16;
  /* 109c4d4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4d52 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4d56 je 0x109c4d69 */
  if (C.zf) goto L_109c4d69;
  /* 109c4d58 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4d5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4d5d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 109c4d60 push eax */
  push32((uint32_t)(EAX));
  /* 109c4d61 call 0x109c5cd0 */
  push32(0x109c4d66u); f_109c5cd0();
  /* 109c4d66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4d69:;
  /* 109c4d69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4d6c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4d70 je 0x109c4d83 */
  if (C.zf) goto L_109c4d83;
  /* 109c4d72 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4d74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4d77 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 109c4d7a push eax */
  push32((uint32_t)(EAX));
  /* 109c4d7b call 0x109c5cd0 */
  push32(0x109c4d80u); f_109c5cd0();
  /* 109c4d80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4d83:;
  /* 109c4d83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4d86 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4d8a je 0x109c4d9d */
  if (C.zf) goto L_109c4d9d;
  /* 109c4d8c push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4d8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4d91 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 109c4d94 push eax */
  push32((uint32_t)(EAX));
  /* 109c4d95 call 0x109c5cd0 */
  push32(0x109c4d9au); f_109c5cd0();
  /* 109c4d9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4d9d:;
  /* 109c4d9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4da0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4da4 je 0x109c4db7 */
  if (C.zf) goto L_109c4db7;
  /* 109c4da6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4da8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4dab mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 109c4dae push eax */
  push32((uint32_t)(EAX));
  /* 109c4daf call 0x109c5cd0 */
  push32(0x109c4db4u); f_109c5cd0();
  /* 109c4db4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4db7:;
  /* 109c4db7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4dba cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4dbe je 0x109c4dd1 */
  if (C.zf) goto L_109c4dd1;
  /* 109c4dc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4dc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4dc5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 109c4dc8 push eax */
  push32((uint32_t)(EAX));
  /* 109c4dc9 call 0x109c5cd0 */
  push32(0x109c4dceu); f_109c5cd0();
  /* 109c4dce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4dd1:;
  /* 109c4dd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4dd4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4dd8 je 0x109c4deb */
  if (C.zf) goto L_109c4deb;
  /* 109c4dda push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4ddc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4ddf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 109c4de2 push eax */
  push32((uint32_t)(EAX));
  /* 109c4de3 call 0x109c5cd0 */
  push32(0x109c4de8u); f_109c5cd0();
  /* 109c4de8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4deb:;
  /* 109c4deb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4dee cmp dword ptr [ecx + 0x50], 0x109efc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x109efc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4df5 je 0x109c4e08 */
  if (C.zf) goto L_109c4e08;
  /* 109c4df7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4df9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4dfc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 109c4dff push eax */
  push32((uint32_t)(EAX));
  /* 109c4e00 call 0x109c5cd0 */
  push32(0x109c4e05u); f_109c5cd0();
  /* 109c4e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4e08:;
  /* 109c4e08 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4e0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c4e0d push ecx */
  push32((uint32_t)(ECX));
  /* 109c4e0e call 0x109c5cd0 */
  push32(0x109c4e13u); f_109c5cd0();
  /* 109c4e13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4e16:;
  /* 109c4e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c4e18 mov edx, dword ptr [0x109efa5c] */
  EDX = (r32((uint32_t)(0x109efa5c)));
  /* 109c4e1e push edx */
  push32((uint32_t)(EDX));
  /* 109c4e1f call dword ptr [0x109f436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f436c))), 0x109c4e25u);
L_109c4e25:;
  /* 109c4e25 pop ebp */
  EBP = (pop32());
  /* 109c4e26 ret  */
  ESPCHK(0x109c4d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e30 @ 0x109c4e30 (11 bytes, 5 insns) */
void f_109c4e30(void) {
  FTRACE(0x109c4e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4e30 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4e31 mov ebp, esp */
  EBP = (ESP);
  /* 109c4e33 call dword ptr [0x109f4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4368))), 0x109c4e39u);
  /* 109c4e39 pop ebp */
  EBP = (pop32());
  /* 109c4e3a ret  */
  ESPCHK(0x109c4e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x109c4e40 (11 bytes, 5 insns) */
void f_109c4e40(void) {
  FTRACE(0x109c4e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4e40 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4e41 mov ebp, esp */
  EBP = (ESP);
  /* 109c4e43 call dword ptr [0x109f4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4384))), 0x109c4e49u);
  /* 109c4e49 pop ebp */
  EBP = (pop32());
  /* 109c4e4a ret  */
  ESPCHK(0x109c4e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e50 @ 0x109c4e50 (804 bytes, 236 insns) */
void f_109c4e50(void) {
  FTRACE(0x109c4e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c4e50 push ebp */
  push32((uint32_t)(EBP));
  /* 109c4e51 mov ebp, esp */
  EBP = (ESP);
  /* 109c4e53 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c4e56 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 109c4e5b push 0x109ec6f0 */
  push32((uint32_t)(0x109ec6f0u));
  /* 109c4e60 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4e62 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 109c4e67 call 0x109c5240 */
  push32(0x109c4e6cu); f_109c5240();
  /* 109c4e6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4e6f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 109c4e72 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4e76 jne 0x109c4e82 */
  if (!C.zf) goto L_109c4e82;
  /* 109c4e78 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 109c4e7a call 0x109c41b0 */
  push32(0x109c4e7fu); f_109c41b0();
  /* 109c4e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c4e82:;
  /* 109c4e82 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4e85 mov dword ptr [0x109f3060], eax */
  w32((uint32_t)(0x109f3060), (EAX));
  /* 109c4e8a mov dword ptr [0x109f319c], 0x20 */
  w32((uint32_t)(0x109f319c), (0x20u));
  /* 109c4e94 jmp 0x109c4e9f */
  goto L_109c4e9f;
L_109c4e96:;
  /* 109c4e96 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4e99 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4e9c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_109c4e9f:;
  /* 109c4e9f mov edx, dword ptr [0x109f3060] */
  EDX = (r32((uint32_t)(0x109f3060)));
  /* 109c4ea5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4eab cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4eae jae 0x109c4ed3 */
  if (!C.cf) goto L_109c4ed3;
  /* 109c4eb0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4eb3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 109c4eb7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4eba mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 109c4ec0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4ec3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 109c4ec7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4eca mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 109c4ed1 jmp 0x109c4e96 */
  goto L_109c4e96;
L_109c4ed3:;
  /* 109c4ed3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 109c4ed6 push ecx */
  push32((uint32_t)(ECX));
  /* 109c4ed7 call dword ptr [0x109f4390] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4390))), 0x109c4eddu);
  /* 109c4edd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 109c4ee0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c4ee6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c4ee8 je 0x109c5075 */
  if (C.zf) goto L_109c5075;
  /* 109c4eee cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4ef2 je 0x109c5075 */
  if (C.zf) goto L_109c5075;
  /* 109c4ef8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c4efb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c4efd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 109c4f00 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c4f03 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4f06 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c4f09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4f0c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4f0f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 109c4f12 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4f19 jge 0x109c4f23 */
  if ((C.sf==C.of)) goto L_109c4f23;
  /* 109c4f1b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 109c4f1e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 109c4f21 jmp 0x109c4f2a */
  goto L_109c4f2a;
L_109c4f23:;
  /* 109c4f23 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_109c4f2a:;
  /* 109c4f2a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 109c4f2d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 109c4f30 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 109c4f37 jmp 0x109c4f42 */
  goto L_109c4f42;
L_109c4f39:;
  /* 109c4f39 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 109c4f3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4f3f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_109c4f42:;
  /* 109c4f42 mov ecx, dword ptr [0x109f319c] */
  ECX = (r32((uint32_t)(0x109f319c)));
  /* 109c4f48 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4f4b jge 0x109c4fe2 */
  if ((C.sf==C.of)) goto L_109c4fe2;
  /* 109c4f51 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 109c4f56 push 0x109ec6f0 */
  push32((uint32_t)(0x109ec6f0u));
  /* 109c4f5b push 2 */
  push32((uint32_t)(0x2u));
  /* 109c4f5d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 109c4f62 call 0x109c5240 */
  push32(0x109c4f67u); f_109c5240();
  /* 109c4f67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4f6a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 109c4f6d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4f71 jne 0x109c4f7e */
  if (!C.zf) goto L_109c4f7e;
  /* 109c4f73 mov edx, dword ptr [0x109f319c] */
  EDX = (r32((uint32_t)(0x109f319c)));
  /* 109c4f79 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 109c4f7c jmp 0x109c4fe2 */
  goto L_109c4fe2;
L_109c4f7e:;
  /* 109c4f7e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 109c4f81 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4f84 mov dword ptr [eax*4 + 0x109f3060], ecx */
  w32((uint32_t)(EAX*4 + 0x109f3060), (ECX));
  /* 109c4f8b mov edx, dword ptr [0x109f319c] */
  EDX = (r32((uint32_t)(0x109f319c)));
  /* 109c4f91 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4f94 mov dword ptr [0x109f319c], edx */
  w32((uint32_t)(0x109f319c), (EDX));
  /* 109c4f9a jmp 0x109c4fa5 */
  goto L_109c4fa5;
L_109c4f9c:;
  /* 109c4f9c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4f9f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4fa2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_109c4fa5:;
  /* 109c4fa5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 109c4fa8 mov edx, dword ptr [ecx*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109f3060)));
  /* 109c4faf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4fb5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c4fb8 jae 0x109c4fdd */
  if (!C.cf) goto L_109c4fdd;
  /* 109c4fba mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4fbd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 109c4fc1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4fc4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 109c4fca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4fcd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 109c4fd1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c4fd4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 109c4fdb jmp 0x109c4f9c */
  goto L_109c4f9c;
L_109c4fdd:;
  /* 109c4fdd jmp 0x109c4f39 */
  goto L_109c4f39;
L_109c4fe2:;
  /* 109c4fe2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 109c4fe9 jmp 0x109c5006 */
  goto L_109c5006;
L_109c4feb:;
  /* 109c4feb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 109c4fee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4ff1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 109c4ff4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c4ff7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c4ffa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c4ffd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 109c5000 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5003 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_109c5006:;
  /* 109c5006 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 109c5009 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c500c jge 0x109c5075 */
  if ((C.sf==C.of)) goto L_109c5075;
  /* 109c500e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 109c5011 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5014 je 0x109c5070 */
  if (C.zf) goto L_109c5070;
  /* 109c5016 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5019 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109c501c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109c501f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c5021 je 0x109c5070 */
  if (C.zf) goto L_109c5070;
  /* 109c5023 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5026 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109c5029 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 109c502c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c502e jne 0x109c5040 */
  if (!C.zf) goto L_109c5040;
  /* 109c5030 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 109c5033 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c5035 push edx */
  push32((uint32_t)(EDX));
  /* 109c5036 call dword ptr [0x109f438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f438c))), 0x109c503cu);
  /* 109c503c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c503e je 0x109c5070 */
  if (C.zf) goto L_109c5070;
L_109c5040:;
  /* 109c5040 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 109c5043 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109c5046 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 109c5049 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 109c504c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c504f mov edx, dword ptr [eax*4 + 0x109f3060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109c5056 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5058 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 109c505b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c505e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 109c5061 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c5063 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109c5065 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c5068 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c506b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109c506d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_109c5070:;
  /* 109c5070 jmp 0x109c4feb */
  goto L_109c4feb;
L_109c5075:;
  /* 109c5075 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 109c507c jmp 0x109c5087 */
  goto L_109c5087;
L_109c507e:;
  /* 109c507e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 109c5081 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5084 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_109c5087:;
  /* 109c5087 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c508b jge 0x109c5164 */
  if ((C.sf==C.of)) goto L_109c5164;
  /* 109c5091 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 109c5094 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c5097 mov edx, dword ptr [0x109f3060] */
  EDX = (r32((uint32_t)(0x109f3060)));
  /* 109c509d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c509f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 109c50a2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c50a5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c50a8 jne 0x109c5150 */
  if (!C.zf) goto L_109c5150;
  /* 109c50ae mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c50b1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 109c50b5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c50b9 jne 0x109c50c4 */
  if (!C.zf) goto L_109c50c4;
  /* 109c50bb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 109c50c2 jmp 0x109c50d4 */
  goto L_109c50d4;
L_109c50c4:;
  /* 109c50c4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 109c50c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c50ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 109c50cc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c50ce add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c50d1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_109c50d4:;
  /* 109c50d4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 109c50d7 push eax */
  push32((uint32_t)(EAX));
  /* 109c50d8 call dword ptr [0x109f433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f433c))), 0x109c50deu);
  /* 109c50de mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 109c50e1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c50e5 je 0x109c513f */
  if (C.zf) goto L_109c513f;
  /* 109c50e7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 109c50ea push ecx */
  push32((uint32_t)(ECX));
  /* 109c50eb call dword ptr [0x109f438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f438c))), 0x109c50f1u);
  /* 109c50f1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 109c50f4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c50f8 je 0x109c513f */
  if (C.zf) goto L_109c513f;
  /* 109c50fa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c50fd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 109c5100 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 109c5102 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 109c5105 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c510b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c510e jne 0x109c5120 */
  if (!C.zf) goto L_109c5120;
  /* 109c5110 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c5113 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 109c5116 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 109c5118 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c511b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 109c511e jmp 0x109c513d */
  goto L_109c513d;
L_109c5120:;
  /* 109c5120 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 109c5123 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c5129 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c512c jne 0x109c513d */
  if (!C.zf) goto L_109c513d;
  /* 109c512e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c5131 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109c5134 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 109c5137 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c513a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_109c513d:;
  /* 109c513d jmp 0x109c514e */
  goto L_109c514e;
L_109c513f:;
  /* 109c513f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c5142 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109c5145 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 109c5148 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c514b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_109c514e:;
  /* 109c514e jmp 0x109c515f */
  goto L_109c515f;
L_109c5150:;
  /* 109c5150 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c5153 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 109c5156 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 109c5159 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c515c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_109c515f:;
  /* 109c515f jmp 0x109c507e */
  goto L_109c507e;
L_109c5164:;
  /* 109c5164 mov eax, dword ptr [0x109f319c] */
  EAX = (r32((uint32_t)(0x109f319c)));
  /* 109c5169 push eax */
  push32((uint32_t)(EAX));
  /* 109c516a call dword ptr [0x109f4388] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4388))), 0x109c5170u);
  /* 109c5170 mov esp, ebp */
  ESP = (EBP);
  /* 109c5172 pop ebp */
  EBP = (pop32());
  /* 109c5173 ret  */
  ESPCHK(0x109c4e50u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x109c5180 (155 bytes, 45 insns) */
void f_109c5180(void) {
  FTRACE(0x109c5180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5180 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5181 mov ebp, esp */
  EBP = (ESP);
  /* 109c5183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c5186 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109c518d jmp 0x109c5198 */
  goto L_109c5198;
L_109c518f:;
  /* 109c518f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c5192 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5195 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109c5198:;
  /* 109c5198 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c519c jge 0x109c5217 */
  if ((C.sf==C.of)) goto L_109c5217;
  /* 109c519e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c51a1 cmp dword ptr [ecx*4 + 0x109f3060], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x109f3060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c51a9 je 0x109c5212 */
  if (C.zf) goto L_109c5212;
  /* 109c51ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c51ae mov eax, dword ptr [edx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109f3060)));
  /* 109c51b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c51b8 jmp 0x109c51c3 */
  goto L_109c51c3;
L_109c51ba:;
  /* 109c51ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c51bd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c51c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109c51c3:;
  /* 109c51c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c51c6 mov eax, dword ptr [edx*4 + 0x109f3060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109f3060)));
  /* 109c51cd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c51d2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c51d5 jae 0x109c51ef */
  if (!C.cf) goto L_109c51ef;
  /* 109c51d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c51da cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c51de je 0x109c51ed */
  if (C.zf) goto L_109c51ed;
  /* 109c51e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c51e3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c51e6 push edx */
  push32((uint32_t)(EDX));
  /* 109c51e7 call dword ptr [0x109f4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4394))), 0x109c51edu);
L_109c51ed:;
  /* 109c51ed jmp 0x109c51ba */
  goto L_109c51ba;
L_109c51ef:;
  /* 109c51ef push 2 */
  push32((uint32_t)(0x2u));
  /* 109c51f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c51f4 mov ecx, dword ptr [eax*4 + 0x109f3060] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109f3060)));
  /* 109c51fb push ecx */
  push32((uint32_t)(ECX));
  /* 109c51fc call 0x109c5cd0 */
  push32(0x109c5201u); f_109c5cd0();
  /* 109c5201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5204 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c5207 mov dword ptr [edx*4 + 0x109f3060], 0 */
  w32((uint32_t)(EDX*4 + 0x109f3060), (0x0u));
L_109c5212:;
  /* 109c5212 jmp 0x109c518f */
  goto L_109c518f;
L_109c5217:;
  /* 109c5217 mov esp, ebp */
  ESP = (EBP);
  /* 109c5219 pop ebp */
  EBP = (pop32());
  /* 109c521a ret  */
  ESPCHK(0x109c5180u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x109c5220 (29 bytes, 13 insns) */
void f_109c5220(void) {
  FTRACE(0x109c5220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5220 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5221 mov ebp, esp */
  EBP = (ESP);
  /* 109c5223 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5225 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5227 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c5229 mov eax, dword ptr [0x109f1868] */
  EAX = (r32((uint32_t)(0x109f1868)));
  /* 109c522e push eax */
  push32((uint32_t)(EAX));
  /* 109c522f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5232 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5233 call 0x109c5290 */
  push32(0x109c5238u); f_109c5290();
  /* 109c5238 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c523b pop ebp */
  EBP = (pop32());
  /* 109c523c ret  */
  ESPCHK(0x109c5220u, _esp0);
  ESP += 4; return;
}

/* FUN_10005240 @ 0x109c5240 (35 bytes, 16 insns) */
void f_109c5240(void) {
  FTRACE(0x109c5240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5240 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5241 mov ebp, esp */
  EBP = (ESP);
  /* 109c5243 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c5246 push eax */
  push32((uint32_t)(EAX));
  /* 109c5247 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c524a push ecx */
  push32((uint32_t)(ECX));
  /* 109c524b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c524e push edx */
  push32((uint32_t)(EDX));
  /* 109c524f mov eax, dword ptr [0x109f1868] */
  EAX = (r32((uint32_t)(0x109f1868)));
  /* 109c5254 push eax */
  push32((uint32_t)(EAX));
  /* 109c5255 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5258 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5259 call 0x109c5290 */
  push32(0x109c525eu); f_109c5290();
  /* 109c525e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5261 pop ebp */
  EBP = (pop32());
  /* 109c5262 ret  */
  ESPCHK(0x109c5240u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x109c5270 (27 bytes, 13 insns) */
void f_109c5270(void) {
  FTRACE(0x109c5270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5270 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5271 mov ebp, esp */
  EBP = (ESP);
  /* 109c5273 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5275 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5277 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c5279 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c527c push eax */
  push32((uint32_t)(EAX));
  /* 109c527d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5280 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5281 call 0x109c5290 */
  push32(0x109c5286u); f_109c5290();
  /* 109c5286 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5289 pop ebp */
  EBP = (pop32());
  /* 109c528a ret  */
  ESPCHK(0x109c5270u, _esp0);
  ESP += 4; return;
}

/* FUN_10005290 @ 0x109c5290 (94 bytes, 38 insns) */
void f_109c5290(void) {
  FTRACE(0x109c5290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5290 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5291 mov ebp, esp */
  EBP = (ESP);
  /* 109c5293 push ecx */
  push32((uint32_t)(ECX));
L_109c5294:;
  /* 109c5294 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c5296 call 0x109c8c40 */
  push32(0x109c529bu); f_109c8c40();
  /* 109c529b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c529e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c52a1 push eax */
  push32((uint32_t)(EAX));
  /* 109c52a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c52a5 push ecx */
  push32((uint32_t)(ECX));
  /* 109c52a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c52a9 push edx */
  push32((uint32_t)(EDX));
  /* 109c52aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c52ad push eax */
  push32((uint32_t)(EAX));
  /* 109c52ae call 0x109c5310 */
  push32(0x109c52b3u); f_109c5310();
  /* 109c52b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c52b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c52b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c52bb call 0x109c8ce0 */
  push32(0x109c52c0u); f_109c8ce0();
  /* 109c52c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c52c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c52c7 jne 0x109c52cf */
  if (!C.zf) goto L_109c52cf;
  /* 109c52c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c52cd jne 0x109c52d4 */
  if (!C.zf) goto L_109c52d4;
L_109c52cf:;
  /* 109c52cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c52d2 jmp 0x109c52ea */
  goto L_109c52ea;
L_109c52d4:;
  /* 109c52d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c52d7 push ecx */
  push32((uint32_t)(ECX));
  /* 109c52d8 call 0x109c8f80 */
  push32(0x109c52ddu); f_109c8f80();
  /* 109c52dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c52e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c52e2 jne 0x109c52e8 */
  if (!C.zf) goto L_109c52e8;
  /* 109c52e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c52e6 jmp 0x109c52ea */
  goto L_109c52ea;
L_109c52e8:;
  /* 109c52e8 jmp 0x109c5294 */
  goto L_109c5294;
L_109c52ea:;
  /* 109c52ea mov esp, ebp */
  ESP = (EBP);
  /* 109c52ec pop ebp */
  EBP = (pop32());
  /* 109c52ed ret  */
  ESPCHK(0x109c5290u, _esp0);
  ESP += 4; return;
}

/* FUN_100052f0 @ 0x109c52f0 (23 bytes, 11 insns) */
void f_109c52f0(void) {
  FTRACE(0x109c52f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c52f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c52f1 mov ebp, esp */
  EBP = (ESP);
  /* 109c52f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c52f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c52f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c52f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c52fc push eax */
  push32((uint32_t)(EAX));
  /* 109c52fd call 0x109c5310 */
  push32(0x109c5302u); f_109c5310();
  /* 109c5302 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5305 pop ebp */
  EBP = (pop32());
  /* 109c5306 ret  */
  ESPCHK(0x109c52f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005310 @ 0x109c5310 (787 bytes, 254 insns) */
void f_109c5310(void) {
  FTRACE(0x109c5310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5310 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5311 mov ebp, esp */
  EBP = (ESP);
  /* 109c5313 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c5316 push ebx */
  push32((uint32_t)(EBX));
  /* 109c5317 push esi */
  push32((uint32_t)(ESI));
  /* 109c5318 push edi */
  push32((uint32_t)(EDI));
  /* 109c5319 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109c5320 mov eax, dword ptr [0x109efa84] */
  EAX = (r32((uint32_t)(0x109efa84)));
  /* 109c5325 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109c5328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c532a je 0x109c535c */
  if (C.zf) goto L_109c535c;
L_109c532c:;
  /* 109c532c call 0x109c63e0 */
  push32(0x109c5331u); f_109c63e0();
  /* 109c5331 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5333 jne 0x109c5356 */
  if (!C.zf) goto L_109c5356;
  /* 109c5335 push 0x109ec7e4 */
  push32((uint32_t)(0x109ec7e4u));
  /* 109c533a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c533c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 109c5341 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c5346 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c5348 call 0x109c4300 */
  push32(0x109c534du); f_109c4300();
  /* 109c534d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5350 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5353 jne 0x109c5356 */
  if (!C.zf) goto L_109c5356;
  /* 109c5355 int3  */
  x86_unimpl("int3 @ 0x109c5355");
L_109c5356:;
  /* 109c5356 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c5358 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c535a jne 0x109c532c */
  if (!C.zf) goto L_109c532c;
L_109c535c:;
  /* 109c535c mov edx, dword ptr [0x109efa88] */
  EDX = (r32((uint32_t)(0x109efa88)));
  /* 109c5362 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109c5365 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c5368 cmp eax, dword ptr [0x109efa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109efa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c536e jne 0x109c5371 */
  if (!C.zf) goto L_109c5371;
  /* 109c5370 int3  */
  x86_unimpl("int3 @ 0x109c5370");
L_109c5371:;
  /* 109c5371 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c5374 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5375 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c5378 push edx */
  push32((uint32_t)(EDX));
  /* 109c5379 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c537c push eax */
  push32((uint32_t)(EAX));
  /* 109c537d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5380 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5381 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5384 push edx */
  push32((uint32_t)(EDX));
  /* 109c5385 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5387 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c5389 call dword ptr [0x109efc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x109efc90))), 0x109c538fu);
  /* 109c538f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5392 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5394 jne 0x109c53f4 */
  if (!C.zf) goto L_109c53f4;
  /* 109c5396 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c539a je 0x109c53c7 */
  if (C.zf) goto L_109c53c7;
L_109c539c:;
  /* 109c539c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c539f push eax */
  push32((uint32_t)(EAX));
  /* 109c53a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c53a3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c53a4 push 0x109ec7a0 */
  push32((uint32_t)(0x109ec7a0u));
  /* 109c53a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c53ab push 0 */
  push32((uint32_t)(0x0u));
  /* 109c53ad push 0 */
  push32((uint32_t)(0x0u));
  /* 109c53af push 0 */
  push32((uint32_t)(0x0u));
  /* 109c53b1 call 0x109c4300 */
  push32(0x109c53b6u); f_109c4300();
  /* 109c53b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c53b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c53bc jne 0x109c53bf */
  if (!C.zf) goto L_109c53bf;
  /* 109c53be int3  */
  x86_unimpl("int3 @ 0x109c53be");
L_109c53bf:;
  /* 109c53bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c53c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c53c3 jne 0x109c539c */
  if (!C.zf) goto L_109c539c;
  /* 109c53c5 jmp 0x109c53ed */
  goto L_109c53ed;
L_109c53c7:;
  /* 109c53c7 push 0x109ec77c */
  push32((uint32_t)(0x109ec77cu));
  /* 109c53cc push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c53d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c53d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c53d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c53d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c53d9 call 0x109c4300 */
  push32(0x109c53deu); f_109c4300();
  /* 109c53de add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c53e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c53e4 jne 0x109c53e7 */
  if (!C.zf) goto L_109c53e7;
  /* 109c53e6 int3  */
  x86_unimpl("int3 @ 0x109c53e6");
L_109c53e7:;
  /* 109c53e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c53e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c53eb jne 0x109c53c7 */
  if (!C.zf) goto L_109c53c7;
L_109c53ed:;
  /* 109c53ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c53ef jmp 0x109c561c */
  goto L_109c561c;
L_109c53f4:;
  /* 109c53f4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c53f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c53fd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5400 je 0x109c5416 */
  if (C.zf) goto L_109c5416;
  /* 109c5402 mov edx, dword ptr [0x109efa84] */
  EDX = (r32((uint32_t)(0x109efa84)));
  /* 109c5408 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 109c540b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c540d jne 0x109c5416 */
  if (!C.zf) goto L_109c5416;
  /* 109c540f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_109c5416:;
  /* 109c5416 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c541a ja 0x109c5427 */
  if ((!C.cf&&!C.zf)) goto L_109c5427;
  /* 109c541c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c541f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5422 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5425 jbe 0x109c5453 */
  if ((C.cf||C.zf)) goto L_109c5453;
L_109c5427:;
  /* 109c5427 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c542a push ecx */
  push32((uint32_t)(ECX));
  /* 109c542b push 0x109ec754 */
  push32((uint32_t)(0x109ec754u));
  /* 109c5430 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5432 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5434 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5436 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c5438 call 0x109c4300 */
  push32(0x109c543du); f_109c4300();
  /* 109c543d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5440 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5443 jne 0x109c5446 */
  if (!C.zf) goto L_109c5446;
  /* 109c5445 int3  */
  x86_unimpl("int3 @ 0x109c5445");
L_109c5446:;
  /* 109c5446 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c5448 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c544a jne 0x109c5427 */
  if (!C.zf) goto L_109c5427;
  /* 109c544c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c544e jmp 0x109c561c */
  goto L_109c561c;
L_109c5453:;
  /* 109c5453 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5456 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c545b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c545e je 0x109c54a0 */
  if (C.zf) goto L_109c54a0;
  /* 109c5460 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5464 je 0x109c54a0 */
  if (C.zf) goto L_109c54a0;
  /* 109c5466 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5469 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c546f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5472 je 0x109c54a0 */
  if (C.zf) goto L_109c54a0;
  /* 109c5474 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5478 je 0x109c54a0 */
  if (C.zf) goto L_109c54a0;
L_109c547a:;
  /* 109c547a push 0x109ec720 */
  push32((uint32_t)(0x109ec720u));
  /* 109c547f push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c5484 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5486 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5488 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c548a push 1 */
  push32((uint32_t)(0x1u));
  /* 109c548c call 0x109c4300 */
  push32(0x109c5491u); f_109c4300();
  /* 109c5491 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5494 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5497 jne 0x109c549a */
  if (!C.zf) goto L_109c549a;
  /* 109c5499 int3  */
  x86_unimpl("int3 @ 0x109c5499");
L_109c549a:;
  /* 109c549a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c549c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c549e jne 0x109c547a */
  if (!C.zf) goto L_109c547a;
L_109c54a0:;
  /* 109c54a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c54a3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c54a6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109c54a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c54ac push ecx */
  push32((uint32_t)(ECX));
  /* 109c54ad call 0x109c9090 */
  push32(0x109c54b2u); f_109c9090();
  /* 109c54b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c54b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c54b8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c54bc jne 0x109c54c5 */
  if (!C.zf) goto L_109c54c5;
  /* 109c54be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c54c0 jmp 0x109c561c */
  goto L_109c561c;
L_109c54c5:;
  /* 109c54c5 mov edx, dword ptr [0x109efa88] */
  EDX = (r32((uint32_t)(0x109efa88)));
  /* 109c54cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c54ce mov dword ptr [0x109efa88], edx */
  w32((uint32_t)(0x109efa88), (EDX));
  /* 109c54d4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c54d8 je 0x109c5523 */
  if (C.zf) goto L_109c5523;
  /* 109c54da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c54dd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109c54e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c54e6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 109c54ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c54f0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 109c54f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c54fa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 109c5501 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5507 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 109c550a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c550d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 109c5514 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5517 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 109c551e jmp 0x109c55c3 */
  goto L_109c55c3;
L_109c5523:;
  /* 109c5523 mov edx, dword ptr [0x109f16cc] */
  EDX = (r32((uint32_t)(0x109f16cc)));
  /* 109c5529 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c552c mov dword ptr [0x109f16cc], edx */
  w32((uint32_t)(0x109f16cc), (EDX));
  /* 109c5532 mov eax, dword ptr [0x109f16d4] */
  EAX = (r32((uint32_t)(0x109f16d4)));
  /* 109c5537 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c553a mov dword ptr [0x109f16d4], eax */
  w32((uint32_t)(0x109f16d4), (EAX));
  /* 109c553f mov ecx, dword ptr [0x109f16d4] */
  ECX = (r32((uint32_t)(0x109f16d4)));
  /* 109c5545 cmp ecx, dword ptr [0x109f16d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109f16d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c554b jbe 0x109c5559 */
  if ((C.cf||C.zf)) goto L_109c5559;
  /* 109c554d mov edx, dword ptr [0x109f16d4] */
  EDX = (r32((uint32_t)(0x109f16d4)));
  /* 109c5553 mov dword ptr [0x109f16d8], edx */
  w32((uint32_t)(0x109f16d8), (EDX));
L_109c5559:;
  /* 109c5559 cmp dword ptr [0x109f16d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5560 je 0x109c556f */
  if (C.zf) goto L_109c556f;
  /* 109c5562 mov eax, dword ptr [0x109f16d0] */
  EAX = (r32((uint32_t)(0x109f16d0)));
  /* 109c5567 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c556a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 109c556d jmp 0x109c5578 */
  goto L_109c5578;
L_109c556f:;
  /* 109c556f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5572 mov dword ptr [0x109f16c8], edx */
  w32((uint32_t)(0x109f16c8), (EDX));
L_109c5578:;
  /* 109c5578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c557b mov ecx, dword ptr [0x109f16d0] */
  ECX = (r32((uint32_t)(0x109f16d0)));
  /* 109c5581 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 109c5583 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5586 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 109c558d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5590 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c5593 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 109c5596 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5599 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c559c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 109c559f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c55a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c55a5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 109c55a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c55ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c55ae mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 109c55b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c55b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c55b7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 109c55ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c55bd mov dword ptr [0x109f16d0], ecx */
  w32((uint32_t)(0x109f16d0), (ECX));
L_109c55c3:;
  /* 109c55c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c55c5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c55c7 mov dl, byte ptr [0x109efa90] */
  DL = (r8((uint32_t)(0x109efa90)));
  /* 109c55cd push edx */
  push32((uint32_t)(EDX));
  /* 109c55ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c55d1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c55d4 push eax */
  push32((uint32_t)(EAX));
  /* 109c55d5 call 0x109c8fb0 */
  push32(0x109c55dau); f_109c8fb0();
  /* 109c55da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c55dd push 4 */
  push32((uint32_t)(0x4u));
  /* 109c55df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c55e1 mov cl, byte ptr [0x109efa90] */
  CL = (r8((uint32_t)(0x109efa90)));
  /* 109c55e7 push ecx */
  push32((uint32_t)(ECX));
  /* 109c55e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c55eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c55ee lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 109c55f2 push ecx */
  push32((uint32_t)(ECX));
  /* 109c55f3 call 0x109c8fb0 */
  push32(0x109c55f8u); f_109c8fb0();
  /* 109c55f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c55fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c55fe push edx */
  push32((uint32_t)(EDX));
  /* 109c55ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c5601 mov al, byte ptr [0x109efa92] */
  AL = (r8((uint32_t)(0x109efa92)));
  /* 109c5606 push eax */
  push32((uint32_t)(EAX));
  /* 109c5607 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c560a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c560d push ecx */
  push32((uint32_t)(ECX));
  /* 109c560e call 0x109c8fb0 */
  push32(0x109c5613u); f_109c8fb0();
  /* 109c5613 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5616 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5619 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_109c561c:;
  /* 109c561c pop edi */
  EDI = (pop32());
  /* 109c561d pop esi */
  ESI = (pop32());
  /* 109c561e pop ebx */
  EBX = (pop32());
  /* 109c561f mov esp, ebp */
  ESP = (EBP);
  /* 109c5621 pop ebp */
  EBP = (pop32());
  /* 109c5622 ret  */
  ESPCHK(0x109c5310u, _esp0);
  ESP += 4; return;
}

/* FUN_10005630 @ 0x109c5630 (27 bytes, 13 insns) */
void f_109c5630(void) {
  FTRACE(0x109c5630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5630 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5631 mov ebp, esp */
  EBP = (ESP);
  /* 109c5633 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5635 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5637 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c5639 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c563c push eax */
  push32((uint32_t)(EAX));
  /* 109c563d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5640 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5641 call 0x109c5650 */
  push32(0x109c5646u); f_109c5650();
  /* 109c5646 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5649 pop ebp */
  EBP = (pop32());
  /* 109c564a ret  */
  ESPCHK(0x109c5630u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x109c5650 (96 bytes, 37 insns) */
void f_109c5650(void) {
  FTRACE(0x109c5650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5650 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5651 mov ebp, esp */
  EBP = (ESP);
  /* 109c5653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c5656 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5659 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c565d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 109c5660 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c5663 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5664 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c5667 push edx */
  push32((uint32_t)(EDX));
  /* 109c5668 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c566b push eax */
  push32((uint32_t)(EAX));
  /* 109c566c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c566f push ecx */
  push32((uint32_t)(ECX));
  /* 109c5670 call 0x109c5240 */
  push32(0x109c5675u); f_109c5240();
  /* 109c5675 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5678 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c567b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c567f je 0x109c56a9 */
  if (C.zf) goto L_109c56a9;
  /* 109c5681 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c5684 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109c5687 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c568a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c568d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c5690:;
  /* 109c5690 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5693 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5696 jae 0x109c56a9 */
  if (!C.cf) goto L_109c56a9;
  /* 109c5698 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c569b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 109c569e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c56a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c56a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c56a7 jmp 0x109c5690 */
  goto L_109c5690;
L_109c56a9:;
  /* 109c56a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c56ac mov esp, ebp */
  ESP = (EBP);
  /* 109c56ae pop ebp */
  EBP = (pop32());
  /* 109c56af ret  */
  ESPCHK(0x109c5650u, _esp0);
  ESP += 4; return;
}

/* FUN_100056b0 @ 0x109c56b0 (27 bytes, 13 insns) */
void f_109c56b0(void) {
  FTRACE(0x109c56b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c56b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c56b1 mov ebp, esp */
  EBP = (ESP);
  /* 109c56b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c56b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c56b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c56b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c56bc push eax */
  push32((uint32_t)(EAX));
  /* 109c56bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c56c0 push ecx */
  push32((uint32_t)(ECX));
  /* 109c56c1 call 0x109c56d0 */
  push32(0x109c56c6u); f_109c56d0();
  /* 109c56c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c56c9 pop ebp */
  EBP = (pop32());
  /* 109c56ca ret  */
  ESPCHK(0x109c56b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100056d0 @ 0x109c56d0 (64 bytes, 27 insns) */
void f_109c56d0(void) {
  FTRACE(0x109c56d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c56d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c56d1 mov ebp, esp */
  EBP = (ESP);
  /* 109c56d3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c56d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c56d6 call 0x109c8c40 */
  push32(0x109c56dbu); f_109c8c40();
  /* 109c56db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c56de push 1 */
  push32((uint32_t)(0x1u));
  /* 109c56e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c56e3 push eax */
  push32((uint32_t)(EAX));
  /* 109c56e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c56e7 push ecx */
  push32((uint32_t)(ECX));
  /* 109c56e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c56eb push edx */
  push32((uint32_t)(EDX));
  /* 109c56ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c56ef push eax */
  push32((uint32_t)(EAX));
  /* 109c56f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c56f3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c56f4 call 0x109c5710 */
  push32(0x109c56f9u); f_109c5710();
  /* 109c56f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c56fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c56ff push 9 */
  push32((uint32_t)(0x9u));
  /* 109c5701 call 0x109c8ce0 */
  push32(0x109c5706u); f_109c8ce0();
  /* 109c5706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5709 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c570c mov esp, ebp */
  ESP = (EBP);
  /* 109c570e pop ebp */
  EBP = (pop32());
  /* 109c570f ret  */
  ESPCHK(0x109c56d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005710 @ 0x109c5710 (1297 bytes, 431 insns) */
void f_109c5710(void) {
  FTRACE(0x109c5710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5710 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5711 mov ebp, esp */
  EBP = (ESP);
  /* 109c5713 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c5716 push ebx */
  push32((uint32_t)(EBX));
  /* 109c5717 push esi */
  push32((uint32_t)(ESI));
  /* 109c5718 push edi */
  push32((uint32_t)(EDI));
  /* 109c5719 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 109c5720 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5724 jne 0x109c5743 */
  if (!C.zf) goto L_109c5743;
  /* 109c5726 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c5729 push eax */
  push32((uint32_t)(EAX));
  /* 109c572a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c572d push ecx */
  push32((uint32_t)(ECX));
  /* 109c572e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c5731 push edx */
  push32((uint32_t)(EDX));
  /* 109c5732 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5735 push eax */
  push32((uint32_t)(EAX));
  /* 109c5736 call 0x109c5240 */
  push32(0x109c573bu); f_109c5240();
  /* 109c573b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c573e jmp 0x109c5c1a */
  goto L_109c5c1a;
L_109c5743:;
  /* 109c5743 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5747 je 0x109c5766 */
  if (C.zf) goto L_109c5766;
  /* 109c5749 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c574d jne 0x109c5766 */
  if (!C.zf) goto L_109c5766;
  /* 109c574f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c5752 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5756 push edx */
  push32((uint32_t)(EDX));
  /* 109c5757 call 0x109c5cd0 */
  push32(0x109c575cu); f_109c5cd0();
  /* 109c575c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c575f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c5761 jmp 0x109c5c1a */
  goto L_109c5c1a;
L_109c5766:;
  /* 109c5766 mov eax, dword ptr [0x109efa84] */
  EAX = (r32((uint32_t)(0x109efa84)));
  /* 109c576b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109c576e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5770 je 0x109c57a2 */
  if (C.zf) goto L_109c57a2;
L_109c5772:;
  /* 109c5772 call 0x109c63e0 */
  push32(0x109c5777u); f_109c63e0();
  /* 109c5777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5779 jne 0x109c579c */
  if (!C.zf) goto L_109c579c;
  /* 109c577b push 0x109ec7e4 */
  push32((uint32_t)(0x109ec7e4u));
  /* 109c5780 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5782 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 109c5787 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c578c push 2 */
  push32((uint32_t)(0x2u));
  /* 109c578e call 0x109c4300 */
  push32(0x109c5793u); f_109c4300();
  /* 109c5793 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5796 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5799 jne 0x109c579c */
  if (!C.zf) goto L_109c579c;
  /* 109c579b int3  */
  x86_unimpl("int3 @ 0x109c579b");
L_109c579c:;
  /* 109c579c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c579e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c57a0 jne 0x109c5772 */
  if (!C.zf) goto L_109c5772;
L_109c57a2:;
  /* 109c57a2 mov edx, dword ptr [0x109efa88] */
  EDX = (r32((uint32_t)(0x109efa88)));
  /* 109c57a8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 109c57ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c57ae cmp eax, dword ptr [0x109efa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109efa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c57b4 jne 0x109c57b7 */
  if (!C.zf) goto L_109c57b7;
  /* 109c57b6 int3  */
  x86_unimpl("int3 @ 0x109c57b6");
L_109c57b7:;
  /* 109c57b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c57ba push ecx */
  push32((uint32_t)(ECX));
  /* 109c57bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c57be push edx */
  push32((uint32_t)(EDX));
  /* 109c57bf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c57c2 push eax */
  push32((uint32_t)(EAX));
  /* 109c57c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c57c6 push ecx */
  push32((uint32_t)(ECX));
  /* 109c57c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c57ca push edx */
  push32((uint32_t)(EDX));
  /* 109c57cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c57ce push eax */
  push32((uint32_t)(EAX));
  /* 109c57cf push 2 */
  push32((uint32_t)(0x2u));
  /* 109c57d1 call dword ptr [0x109efc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x109efc90))), 0x109c57d7u);
  /* 109c57d7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c57da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c57dc jne 0x109c583c */
  if (!C.zf) goto L_109c583c;
  /* 109c57de cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c57e2 je 0x109c580f */
  if (C.zf) goto L_109c580f;
L_109c57e4:;
  /* 109c57e4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c57e7 push ecx */
  push32((uint32_t)(ECX));
  /* 109c57e8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c57eb push edx */
  push32((uint32_t)(EDX));
  /* 109c57ec push 0x109ec960 */
  push32((uint32_t)(0x109ec960u));
  /* 109c57f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c57f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c57f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c57f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c57f9 call 0x109c4300 */
  push32(0x109c57feu); f_109c4300();
  /* 109c57fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5801 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5804 jne 0x109c5807 */
  if (!C.zf) goto L_109c5807;
  /* 109c5806 int3  */
  x86_unimpl("int3 @ 0x109c5806");
L_109c5807:;
  /* 109c5807 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c5809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c580b jne 0x109c57e4 */
  if (!C.zf) goto L_109c57e4;
  /* 109c580d jmp 0x109c5835 */
  goto L_109c5835;
L_109c580f:;
  /* 109c580f push 0x109ec93c */
  push32((uint32_t)(0x109ec93cu));
  /* 109c5814 push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c5819 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c581b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c581d push 0 */
  push32((uint32_t)(0x0u));
  /* 109c581f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5821 call 0x109c4300 */
  push32(0x109c5826u); f_109c4300();
  /* 109c5826 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5829 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c582c jne 0x109c582f */
  if (!C.zf) goto L_109c582f;
  /* 109c582e int3  */
  x86_unimpl("int3 @ 0x109c582e");
L_109c582f:;
  /* 109c582f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c5831 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c5833 jne 0x109c580f */
  if (!C.zf) goto L_109c580f;
L_109c5835:;
  /* 109c5835 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c5837 jmp 0x109c5c1a */
  goto L_109c5c1a;
L_109c583c:;
  /* 109c583c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5840 jbe 0x109c586e */
  if ((C.cf||C.zf)) goto L_109c586e;
L_109c5842:;
  /* 109c5842 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5845 push edx */
  push32((uint32_t)(EDX));
  /* 109c5846 push 0x109ec90c */
  push32((uint32_t)(0x109ec90cu));
  /* 109c584b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c584d push 0 */
  push32((uint32_t)(0x0u));
  /* 109c584f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5851 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c5853 call 0x109c4300 */
  push32(0x109c5858u); f_109c4300();
  /* 109c5858 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c585b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c585e jne 0x109c5861 */
  if (!C.zf) goto L_109c5861;
  /* 109c5860 int3  */
  x86_unimpl("int3 @ 0x109c5860");
L_109c5861:;
  /* 109c5861 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c5863 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5865 jne 0x109c5842 */
  if (!C.zf) goto L_109c5842;
  /* 109c5867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c5869 jmp 0x109c5c1a */
  goto L_109c5c1a;
L_109c586e:;
  /* 109c586e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5872 je 0x109c58b6 */
  if (C.zf) goto L_109c58b6;
  /* 109c5874 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c5877 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c587d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5880 je 0x109c58b6 */
  if (C.zf) goto L_109c58b6;
  /* 109c5882 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c5885 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c588b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c588e je 0x109c58b6 */
  if (C.zf) goto L_109c58b6;
L_109c5890:;
  /* 109c5890 push 0x109ec720 */
  push32((uint32_t)(0x109ec720u));
  /* 109c5895 push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c589a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c589c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c589e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c58a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c58a2 call 0x109c4300 */
  push32(0x109c58a7u); f_109c4300();
  /* 109c58a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c58aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c58ad jne 0x109c58b0 */
  if (!C.zf) goto L_109c58b0;
  /* 109c58af int3  */
  x86_unimpl("int3 @ 0x109c58af");
L_109c58b0:;
  /* 109c58b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c58b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c58b4 jne 0x109c5890 */
  if (!C.zf) goto L_109c5890;
L_109c58b6:;
  /* 109c58b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c58b9 push ecx */
  push32((uint32_t)(ECX));
  /* 109c58ba call 0x109c6840 */
  push32(0x109c58bfu); f_109c6840();
  /* 109c58bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c58c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c58c4 jne 0x109c58e7 */
  if (!C.zf) goto L_109c58e7;
  /* 109c58c6 push 0x109ec8e8 */
  push32((uint32_t)(0x109ec8e8u));
  /* 109c58cb push 0 */
  push32((uint32_t)(0x0u));
  /* 109c58cd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 109c58d2 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c58d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c58d9 call 0x109c4300 */
  push32(0x109c58deu); f_109c4300();
  /* 109c58de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c58e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c58e4 jne 0x109c58e7 */
  if (!C.zf) goto L_109c58e7;
  /* 109c58e6 int3  */
  x86_unimpl("int3 @ 0x109c58e6");
L_109c58e7:;
  /* 109c58e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c58e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c58eb jne 0x109c58b6 */
  if (!C.zf) goto L_109c58b6;
  /* 109c58ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c58f0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c58f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c58f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c58f9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c58fd jne 0x109c5906 */
  if (!C.zf) goto L_109c5906;
  /* 109c58ff mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_109c5906:;
  /* 109c5906 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c590a je 0x109c594a */
  if (C.zf) goto L_109c594a;
L_109c590c:;
  /* 109c590c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c590f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5916 jne 0x109c5921 */
  if (!C.zf) goto L_109c5921;
  /* 109c5918 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c591b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c591f je 0x109c5942 */
  if (C.zf) goto L_109c5942;
L_109c5921:;
  /* 109c5921 push 0x109ec8a0 */
  push32((uint32_t)(0x109ec8a0u));
  /* 109c5926 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5928 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 109c592d push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c5932 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c5934 call 0x109c4300 */
  push32(0x109c5939u); f_109c4300();
  /* 109c5939 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c593c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c593f jne 0x109c5942 */
  if (!C.zf) goto L_109c5942;
  /* 109c5941 int3  */
  x86_unimpl("int3 @ 0x109c5941");
L_109c5942:;
  /* 109c5942 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c5944 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c5946 jne 0x109c590c */
  if (!C.zf) goto L_109c590c;
  /* 109c5948 jmp 0x109c59ae */
  goto L_109c59ae;
L_109c594a:;
  /* 109c594a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c594d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c5950 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c5955 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5958 jne 0x109c596f */
  if (!C.zf) goto L_109c596f;
  /* 109c595a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c595d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c5963 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5966 jne 0x109c596f */
  if (!C.zf) goto L_109c596f;
  /* 109c5968 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_109c596f:;
  /* 109c596f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c5972 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c5975 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c597a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c597d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c5983 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5985 je 0x109c59a8 */
  if (C.zf) goto L_109c59a8;
  /* 109c5987 push 0x109ec864 */
  push32((uint32_t)(0x109ec864u));
  /* 109c598c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c598e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 109c5993 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c5998 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c599a call 0x109c4300 */
  push32(0x109c599fu); f_109c4300();
  /* 109c599f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c59a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c59a5 jne 0x109c59a8 */
  if (!C.zf) goto L_109c59a8;
  /* 109c59a7 int3  */
  x86_unimpl("int3 @ 0x109c59a7");
L_109c59a8:;
  /* 109c59a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c59aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c59ac jne 0x109c596f */
  if (!C.zf) goto L_109c596f;
L_109c59ae:;
  /* 109c59ae cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c59b2 je 0x109c59d9 */
  if (C.zf) goto L_109c59d9;
  /* 109c59b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c59b7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c59ba push eax */
  push32((uint32_t)(EAX));
  /* 109c59bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c59be push ecx */
  push32((uint32_t)(ECX));
  /* 109c59bf call 0x109c91c0 */
  push32(0x109c59c4u); f_109c91c0();
  /* 109c59c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c59c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c59ca cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c59ce jne 0x109c59d7 */
  if (!C.zf) goto L_109c59d7;
  /* 109c59d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c59d2 jmp 0x109c5c1a */
  goto L_109c5c1a;
L_109c59d7:;
  /* 109c59d7 jmp 0x109c59fc */
  goto L_109c59fc;
L_109c59d9:;
  /* 109c59d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c59dc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c59df push edx */
  push32((uint32_t)(EDX));
  /* 109c59e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c59e3 push eax */
  push32((uint32_t)(EAX));
  /* 109c59e4 call 0x109c9110 */
  push32(0x109c59e9u); f_109c9110();
  /* 109c59e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c59ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c59ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c59f3 jne 0x109c59fc */
  if (!C.zf) goto L_109c59fc;
  /* 109c59f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c59f7 jmp 0x109c5c1a */
  goto L_109c5c1a;
L_109c59fc:;
  /* 109c59fc mov ecx, dword ptr [0x109efa88] */
  ECX = (r32((uint32_t)(0x109efa88)));
  /* 109c5a02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5a05 mov dword ptr [0x109efa88], ecx */
  w32((uint32_t)(0x109efa88), (ECX));
  /* 109c5a0b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5a0f jne 0x109c5a67 */
  if (!C.zf) goto L_109c5a67;
  /* 109c5a11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5a14 mov eax, dword ptr [0x109f16cc] */
  EAX = (r32((uint32_t)(0x109f16cc)));
  /* 109c5a19 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c5a1c mov dword ptr [0x109f16cc], eax */
  w32((uint32_t)(0x109f16cc), (EAX));
  /* 109c5a21 mov ecx, dword ptr [0x109f16cc] */
  ECX = (r32((uint32_t)(0x109f16cc)));
  /* 109c5a27 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5a2a mov dword ptr [0x109f16cc], ecx */
  w32((uint32_t)(0x109f16cc), (ECX));
  /* 109c5a30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5a33 mov eax, dword ptr [0x109f16d4] */
  EAX = (r32((uint32_t)(0x109f16d4)));
  /* 109c5a38 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c5a3b mov dword ptr [0x109f16d4], eax */
  w32((uint32_t)(0x109f16d4), (EAX));
  /* 109c5a40 mov ecx, dword ptr [0x109f16d4] */
  ECX = (r32((uint32_t)(0x109f16d4)));
  /* 109c5a46 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5a49 mov dword ptr [0x109f16d4], ecx */
  w32((uint32_t)(0x109f16d4), (ECX));
  /* 109c5a4f mov edx, dword ptr [0x109f16d4] */
  EDX = (r32((uint32_t)(0x109f16d4)));
  /* 109c5a55 cmp edx, dword ptr [0x109f16d8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109f16d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5a5b jbe 0x109c5a67 */
  if ((C.cf||C.zf)) goto L_109c5a67;
  /* 109c5a5d mov eax, dword ptr [0x109f16d4] */
  EAX = (r32((uint32_t)(0x109f16d4)));
  /* 109c5a62 mov dword ptr [0x109f16d8], eax */
  w32((uint32_t)(0x109f16d8), (EAX));
L_109c5a67:;
  /* 109c5a67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5a6a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5a6d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109c5a70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5a73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5a76 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5a79 jbe 0x109c5a9f */
  if ((C.cf||C.zf)) goto L_109c5a9f;
  /* 109c5a7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5a7e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5a81 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c5a84 push edx */
  push32((uint32_t)(EDX));
  /* 109c5a85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c5a87 mov al, byte ptr [0x109efa92] */
  AL = (r8((uint32_t)(0x109efa92)));
  /* 109c5a8c push eax */
  push32((uint32_t)(EAX));
  /* 109c5a8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5a90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5a93 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5a96 push edx */
  push32((uint32_t)(EDX));
  /* 109c5a97 call 0x109c8fb0 */
  push32(0x109c5a9cu); f_109c8fb0();
  /* 109c5a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c5a9f:;
  /* 109c5a9f push 4 */
  push32((uint32_t)(0x4u));
  /* 109c5aa1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c5aa3 mov al, byte ptr [0x109efa90] */
  AL = (r8((uint32_t)(0x109efa90)));
  /* 109c5aa8 push eax */
  push32((uint32_t)(EAX));
  /* 109c5aa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5aac add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5aaf push ecx */
  push32((uint32_t)(ECX));
  /* 109c5ab0 call 0x109c8fb0 */
  push32(0x109c5ab5u); f_109c8fb0();
  /* 109c5ab5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5ab8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5abc jne 0x109c5ad9 */
  if (!C.zf) goto L_109c5ad9;
  /* 109c5abe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5ac1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c5ac4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 109c5ac7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5aca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c5acd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 109c5ad0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5ad3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c5ad6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_109c5ad9:;
  /* 109c5ad9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5adc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5adf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_109c5ae2:;
  /* 109c5ae2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5ae6 jne 0x109c5b17 */
  if (!C.zf) goto L_109c5b17;
  /* 109c5ae8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5aec jne 0x109c5af6 */
  if (!C.zf) goto L_109c5af6;
  /* 109c5aee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5af1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5af4 je 0x109c5b17 */
  if (C.zf) goto L_109c5b17;
L_109c5af6:;
  /* 109c5af6 push 0x109ec830 */
  push32((uint32_t)(0x109ec830u));
  /* 109c5afb push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5afd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 109c5b02 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c5b07 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c5b09 call 0x109c4300 */
  push32(0x109c5b0eu); f_109c4300();
  /* 109c5b0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5b11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5b14 jne 0x109c5b17 */
  if (!C.zf) goto L_109c5b17;
  /* 109c5b16 int3  */
  x86_unimpl("int3 @ 0x109c5b16");
L_109c5b17:;
  /* 109c5b17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c5b19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c5b1b jne 0x109c5ae2 */
  if (!C.zf) goto L_109c5ae2;
  /* 109c5b1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5b20 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5b23 je 0x109c5b2b */
  if (C.zf) goto L_109c5b2b;
  /* 109c5b25 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5b29 je 0x109c5b33 */
  if (C.zf) goto L_109c5b33;
L_109c5b2b:;
  /* 109c5b2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5b2e jmp 0x109c5c1a */
  goto L_109c5c1a;
L_109c5b33:;
  /* 109c5b33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5b36 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5b39 je 0x109c5b4b */
  if (C.zf) goto L_109c5b4b;
  /* 109c5b3b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5b3e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c5b40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5b43 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109c5b46 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 109c5b49 jmp 0x109c5b87 */
  goto L_109c5b87;
L_109c5b4b:;
  /* 109c5b4b mov eax, dword ptr [0x109f16c8] */
  EAX = (r32((uint32_t)(0x109f16c8)));
  /* 109c5b50 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5b53 je 0x109c5b76 */
  if (C.zf) goto L_109c5b76;
  /* 109c5b55 push 0x109ec814 */
  push32((uint32_t)(0x109ec814u));
  /* 109c5b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5b5c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 109c5b61 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c5b66 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c5b68 call 0x109c4300 */
  push32(0x109c5b6du); f_109c4300();
  /* 109c5b6d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5b70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5b73 jne 0x109c5b76 */
  if (!C.zf) goto L_109c5b76;
  /* 109c5b75 int3  */
  x86_unimpl("int3 @ 0x109c5b75");
L_109c5b76:;
  /* 109c5b76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c5b78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c5b7a jne 0x109c5b4b */
  if (!C.zf) goto L_109c5b4b;
  /* 109c5b7c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5b7f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109c5b82 mov dword ptr [0x109f16c8], eax */
  w32((uint32_t)(0x109f16c8), (EAX));
L_109c5b87:;
  /* 109c5b87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5b8a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5b8e je 0x109c5b9f */
  if (C.zf) goto L_109c5b9f;
  /* 109c5b90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5b93 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109c5b96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5b99 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c5b9b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109c5b9d jmp 0x109c5bda */
  goto L_109c5bda;
L_109c5b9f:;
  /* 109c5b9f mov eax, dword ptr [0x109f16d0] */
  EAX = (r32((uint32_t)(0x109f16d0)));
  /* 109c5ba4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5ba7 je 0x109c5bca */
  if (C.zf) goto L_109c5bca;
  /* 109c5ba9 push 0x109ec7f8 */
  push32((uint32_t)(0x109ec7f8u));
  /* 109c5bae push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5bb0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 109c5bb5 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c5bba push 2 */
  push32((uint32_t)(0x2u));
  /* 109c5bbc call 0x109c4300 */
  push32(0x109c5bc1u); f_109c4300();
  /* 109c5bc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5bc4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5bc7 jne 0x109c5bca */
  if (!C.zf) goto L_109c5bca;
  /* 109c5bc9 int3  */
  x86_unimpl("int3 @ 0x109c5bc9");
L_109c5bca:;
  /* 109c5bca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c5bcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c5bce jne 0x109c5b9f */
  if (!C.zf) goto L_109c5b9f;
  /* 109c5bd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5bd3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c5bd5 mov dword ptr [0x109f16d0], eax */
  w32((uint32_t)(0x109f16d0), (EAX));
L_109c5bda:;
  /* 109c5bda cmp dword ptr [0x109f16d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5be1 je 0x109c5bf1 */
  if (C.zf) goto L_109c5bf1;
  /* 109c5be3 mov ecx, dword ptr [0x109f16d0] */
  ECX = (r32((uint32_t)(0x109f16d0)));
  /* 109c5be9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5bec mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 109c5bef jmp 0x109c5bf9 */
  goto L_109c5bf9;
L_109c5bf1:;
  /* 109c5bf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5bf4 mov dword ptr [0x109f16c8], eax */
  w32((uint32_t)(0x109f16c8), (EAX));
L_109c5bf9:;
  /* 109c5bf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5bfc mov edx, dword ptr [0x109f16d0] */
  EDX = (r32((uint32_t)(0x109f16d0)));
  /* 109c5c02 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 109c5c04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5c07 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 109c5c0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c5c11 mov dword ptr [0x109f16d0], ecx */
  w32((uint32_t)(0x109f16d0), (ECX));
  /* 109c5c17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109c5c1a:;
  /* 109c5c1a pop edi */
  EDI = (pop32());
  /* 109c5c1b pop esi */
  ESI = (pop32());
  /* 109c5c1c pop ebx */
  EBX = (pop32());
  /* 109c5c1d mov esp, ebp */
  ESP = (EBP);
  /* 109c5c1f pop ebp */
  EBP = (pop32());
  /* 109c5c20 ret  */
  ESPCHK(0x109c5710u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c30 @ 0x109c5c30 (27 bytes, 13 insns) */
void f_109c5c30(void) {
  FTRACE(0x109c5c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5c30 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5c31 mov ebp, esp */
  EBP = (ESP);
  /* 109c5c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5c37 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c5c39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5c3c push eax */
  push32((uint32_t)(EAX));
  /* 109c5c3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5c40 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5c41 call 0x109c5c50 */
  push32(0x109c5c46u); f_109c5c50();
  /* 109c5c46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5c49 pop ebp */
  EBP = (pop32());
  /* 109c5c4a ret  */
  ESPCHK(0x109c5c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c50 @ 0x109c5c50 (64 bytes, 27 insns) */
void f_109c5c50(void) {
  FTRACE(0x109c5c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5c50 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5c51 mov ebp, esp */
  EBP = (ESP);
  /* 109c5c53 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5c54 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c5c56 call 0x109c8c40 */
  push32(0x109c5c5bu); f_109c8c40();
  /* 109c5c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5c60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c5c63 push eax */
  push32((uint32_t)(EAX));
  /* 109c5c64 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c5c67 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5c68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c5c6b push edx */
  push32((uint32_t)(EDX));
  /* 109c5c6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5c6f push eax */
  push32((uint32_t)(EAX));
  /* 109c5c70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5c73 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5c74 call 0x109c5710 */
  push32(0x109c5c79u); f_109c5710();
  /* 109c5c79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5c7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c5c7f push 9 */
  push32((uint32_t)(0x9u));
  /* 109c5c81 call 0x109c8ce0 */
  push32(0x109c5c86u); f_109c8ce0();
  /* 109c5c86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5c89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5c8c mov esp, ebp */
  ESP = (EBP);
  /* 109c5c8e pop ebp */
  EBP = (pop32());
  /* 109c5c8f ret  */
  ESPCHK(0x109c5c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c90 @ 0x109c5c90 (19 bytes, 9 insns) */
void f_109c5c90(void) {
  FTRACE(0x109c5c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5c90 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5c91 mov ebp, esp */
  EBP = (ESP);
  /* 109c5c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c5c95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5c98 push eax */
  push32((uint32_t)(EAX));
  /* 109c5c99 call 0x109c5cd0 */
  push32(0x109c5c9eu); f_109c5cd0();
  /* 109c5c9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5ca1 pop ebp */
  EBP = (pop32());
  /* 109c5ca2 ret  */
  ESPCHK(0x109c5c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cb0 @ 0x109c5cb0 (19 bytes, 9 insns) */
void f_109c5cb0(void) {
  FTRACE(0x109c5cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5cb1 mov ebp, esp */
  EBP = (ESP);
  /* 109c5cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c5cb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5cb8 push eax */
  push32((uint32_t)(EAX));
  /* 109c5cb9 call 0x109c5d00 */
  push32(0x109c5cbeu); f_109c5d00();
  /* 109c5cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5cc1 pop ebp */
  EBP = (pop32());
  /* 109c5cc2 ret  */
  ESPCHK(0x109c5cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd0 @ 0x109c5cd0 (41 bytes, 16 insns) */
void f_109c5cd0(void) {
  FTRACE(0x109c5cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5cd1 mov ebp, esp */
  EBP = (ESP);
  /* 109c5cd3 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c5cd5 call 0x109c8c40 */
  push32(0x109c5cdau); f_109c8c40();
  /* 109c5cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5cdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5ce0 push eax */
  push32((uint32_t)(EAX));
  /* 109c5ce1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5ce4 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5ce5 call 0x109c5d00 */
  push32(0x109c5ceau); f_109c5d00();
  /* 109c5cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5ced push 9 */
  push32((uint32_t)(0x9u));
  /* 109c5cef call 0x109c8ce0 */
  push32(0x109c5cf4u); f_109c8ce0();
  /* 109c5cf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5cf7 pop ebp */
  EBP = (pop32());
  /* 109c5cf8 ret  */
  ESPCHK(0x109c5cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d00 @ 0x109c5d00 (1004 bytes, 342 insns) */
void f_109c5d00(void) {
  FTRACE(0x109c5d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c5d00 push ebp */
  push32((uint32_t)(EBP));
  /* 109c5d01 mov ebp, esp */
  EBP = (ESP);
  /* 109c5d03 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5d04 push ebx */
  push32((uint32_t)(EBX));
  /* 109c5d05 push esi */
  push32((uint32_t)(ESI));
  /* 109c5d06 push edi */
  push32((uint32_t)(EDI));
  /* 109c5d07 mov eax, dword ptr [0x109efa84] */
  EAX = (r32((uint32_t)(0x109efa84)));
  /* 109c5d0c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109c5d0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5d11 je 0x109c5d43 */
  if (C.zf) goto L_109c5d43;
L_109c5d13:;
  /* 109c5d13 call 0x109c63e0 */
  push32(0x109c5d18u); f_109c63e0();
  /* 109c5d18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5d1a jne 0x109c5d3d */
  if (!C.zf) goto L_109c5d3d;
  /* 109c5d1c push 0x109ec7e4 */
  push32((uint32_t)(0x109ec7e4u));
  /* 109c5d21 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5d23 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 109c5d28 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c5d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 109c5d2f call 0x109c4300 */
  push32(0x109c5d34u); f_109c4300();
  /* 109c5d34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5d37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5d3a jne 0x109c5d3d */
  if (!C.zf) goto L_109c5d3d;
  /* 109c5d3c int3  */
  x86_unimpl("int3 @ 0x109c5d3c");
L_109c5d3d:;
  /* 109c5d3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c5d3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c5d41 jne 0x109c5d13 */
  if (!C.zf) goto L_109c5d13;
L_109c5d43:;
  /* 109c5d43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5d47 jne 0x109c5d4e */
  if (!C.zf) goto L_109c5d4e;
  /* 109c5d49 jmp 0x109c60e5 */
  goto L_109c60e5;
L_109c5d4e:;
  /* 109c5d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5d54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c5d57 push edx */
  push32((uint32_t)(EDX));
  /* 109c5d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5d5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5d5d push eax */
  push32((uint32_t)(EAX));
  /* 109c5d5e push 3 */
  push32((uint32_t)(0x3u));
  /* 109c5d60 call dword ptr [0x109efc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x109efc90))), 0x109c5d66u);
  /* 109c5d66 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5d69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5d6b jne 0x109c5d98 */
  if (!C.zf) goto L_109c5d98;
L_109c5d6d:;
  /* 109c5d6d push 0x109ecaa8 */
  push32((uint32_t)(0x109ecaa8u));
  /* 109c5d72 push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c5d77 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5d7f call 0x109c4300 */
  push32(0x109c5d84u); f_109c4300();
  /* 109c5d84 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5d87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5d8a jne 0x109c5d8d */
  if (!C.zf) goto L_109c5d8d;
  /* 109c5d8c int3  */
  x86_unimpl("int3 @ 0x109c5d8c");
L_109c5d8d:;
  /* 109c5d8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c5d8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c5d91 jne 0x109c5d6d */
  if (!C.zf) goto L_109c5d6d;
  /* 109c5d93 jmp 0x109c60e5 */
  goto L_109c60e5;
L_109c5d98:;
  /* 109c5d98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5d9b push edx */
  push32((uint32_t)(EDX));
  /* 109c5d9c call 0x109c6840 */
  push32(0x109c5da1u); f_109c6840();
  /* 109c5da1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5da4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5da6 jne 0x109c5dc9 */
  if (!C.zf) goto L_109c5dc9;
  /* 109c5da8 push 0x109ec8e8 */
  push32((uint32_t)(0x109ec8e8u));
  /* 109c5dad push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5daf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 109c5db4 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c5db9 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c5dbb call 0x109c4300 */
  push32(0x109c5dc0u); f_109c4300();
  /* 109c5dc0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5dc3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5dc6 jne 0x109c5dc9 */
  if (!C.zf) goto L_109c5dc9;
  /* 109c5dc8 int3  */
  x86_unimpl("int3 @ 0x109c5dc8");
L_109c5dc9:;
  /* 109c5dc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c5dcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5dcd jne 0x109c5d98 */
  if (!C.zf) goto L_109c5d98;
  /* 109c5dcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c5dd2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c5dd5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109c5dd8:;
  /* 109c5dd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5ddb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c5dde and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c5de3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5de6 je 0x109c5e2b */
  if (C.zf) goto L_109c5e2b;
  /* 109c5de8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5deb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5def je 0x109c5e2b */
  if (C.zf) goto L_109c5e2b;
  /* 109c5df1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5df4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c5df7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c5dfc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5dff je 0x109c5e2b */
  if (C.zf) goto L_109c5e2b;
  /* 109c5e01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5e04 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5e08 je 0x109c5e2b */
  if (C.zf) goto L_109c5e2b;
  /* 109c5e0a push 0x109eca80 */
  push32((uint32_t)(0x109eca80u));
  /* 109c5e0f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5e11 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 109c5e16 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c5e1b push 2 */
  push32((uint32_t)(0x2u));
  /* 109c5e1d call 0x109c4300 */
  push32(0x109c5e22u); f_109c4300();
  /* 109c5e22 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5e25 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5e28 jne 0x109c5e2b */
  if (!C.zf) goto L_109c5e2b;
  /* 109c5e2a int3  */
  x86_unimpl("int3 @ 0x109c5e2a");
L_109c5e2b:;
  /* 109c5e2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c5e2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c5e2f jne 0x109c5dd8 */
  if (!C.zf) goto L_109c5dd8;
  /* 109c5e31 mov eax, dword ptr [0x109efa84] */
  EAX = (r32((uint32_t)(0x109efa84)));
  /* 109c5e36 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109c5e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5e3b jne 0x109c5f06 */
  if (!C.zf) goto L_109c5f06;
  /* 109c5e41 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c5e43 mov cl, byte ptr [0x109efa90] */
  CL = (r8((uint32_t)(0x109efa90)));
  /* 109c5e49 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5e4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5e4d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5e50 push edx */
  push32((uint32_t)(EDX));
  /* 109c5e51 call 0x109c6350 */
  push32(0x109c5e56u); f_109c6350();
  /* 109c5e56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5e59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5e5b jne 0x109c5ea0 */
  if (!C.zf) goto L_109c5ea0;
L_109c5e5d:;
  /* 109c5e5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5e60 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5e63 push eax */
  push32((uint32_t)(EAX));
  /* 109c5e64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5e67 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 109c5e6a push edx */
  push32((uint32_t)(EDX));
  /* 109c5e6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5e6e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109c5e71 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c5e77 mov edx, dword ptr [ecx*4 + 0x109efa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109efa94)));
  /* 109c5e7e push edx */
  push32((uint32_t)(EDX));
  /* 109c5e7f push 0x109eca54 */
  push32((uint32_t)(0x109eca54u));
  /* 109c5e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5e88 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5e8a push 1 */
  push32((uint32_t)(0x1u));
  /* 109c5e8c call 0x109c4300 */
  push32(0x109c5e91u); f_109c4300();
  /* 109c5e91 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5e94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5e97 jne 0x109c5e9a */
  if (!C.zf) goto L_109c5e9a;
  /* 109c5e99 int3  */
  x86_unimpl("int3 @ 0x109c5e99");
L_109c5e9a:;
  /* 109c5e9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c5e9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5e9e jne 0x109c5e5d */
  if (!C.zf) goto L_109c5e5d;
L_109c5ea0:;
  /* 109c5ea0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c5ea2 mov cl, byte ptr [0x109efa90] */
  CL = (r8((uint32_t)(0x109efa90)));
  /* 109c5ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 109c5ea9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5eac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109c5eaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5eb2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 109c5eb6 push edx */
  push32((uint32_t)(EDX));
  /* 109c5eb7 call 0x109c6350 */
  push32(0x109c5ebcu); f_109c6350();
  /* 109c5ebc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5ebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5ec1 jne 0x109c5f06 */
  if (!C.zf) goto L_109c5f06;
L_109c5ec3:;
  /* 109c5ec3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5ec6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5ec9 push eax */
  push32((uint32_t)(EAX));
  /* 109c5eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5ecd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 109c5ed0 push edx */
  push32((uint32_t)(EDX));
  /* 109c5ed1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5ed4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109c5ed7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c5edd mov edx, dword ptr [ecx*4 + 0x109efa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109efa94)));
  /* 109c5ee4 push edx */
  push32((uint32_t)(EDX));
  /* 109c5ee5 push 0x109eca28 */
  push32((uint32_t)(0x109eca28u));
  /* 109c5eea push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5eec push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5eee push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5ef0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c5ef2 call 0x109c4300 */
  push32(0x109c5ef7u); f_109c4300();
  /* 109c5ef7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5efa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5efd jne 0x109c5f00 */
  if (!C.zf) goto L_109c5f00;
  /* 109c5eff int3  */
  x86_unimpl("int3 @ 0x109c5eff");
L_109c5f00:;
  /* 109c5f00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c5f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c5f04 jne 0x109c5ec3 */
  if (!C.zf) goto L_109c5ec3;
L_109c5f06:;
  /* 109c5f06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5f09 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5f0d jne 0x109c5f7b */
  if (!C.zf) goto L_109c5f7b;
L_109c5f0f:;
  /* 109c5f0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5f12 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5f19 jne 0x109c5f24 */
  if (!C.zf) goto L_109c5f24;
  /* 109c5f1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5f1e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5f22 je 0x109c5f45 */
  if (C.zf) goto L_109c5f45;
L_109c5f24:;
  /* 109c5f24 push 0x109ec9e8 */
  push32((uint32_t)(0x109ec9e8u));
  /* 109c5f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5f2b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 109c5f30 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c5f35 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c5f37 call 0x109c4300 */
  push32(0x109c5f3cu); f_109c4300();
  /* 109c5f3c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5f3f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5f42 jne 0x109c5f45 */
  if (!C.zf) goto L_109c5f45;
  /* 109c5f44 int3  */
  x86_unimpl("int3 @ 0x109c5f44");
L_109c5f45:;
  /* 109c5f45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c5f47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c5f49 jne 0x109c5f0f */
  if (!C.zf) goto L_109c5f0f;
  /* 109c5f4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5f4e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109c5f51 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5f54 push eax */
  push32((uint32_t)(EAX));
  /* 109c5f55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c5f57 mov cl, byte ptr [0x109efa91] */
  CL = (r8((uint32_t)(0x109efa91)));
  /* 109c5f5d push ecx */
  push32((uint32_t)(ECX));
  /* 109c5f5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5f61 push edx */
  push32((uint32_t)(EDX));
  /* 109c5f62 call 0x109c8fb0 */
  push32(0x109c5f67u); f_109c8fb0();
  /* 109c5f67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5f6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5f6d push eax */
  push32((uint32_t)(EAX));
  /* 109c5f6e call 0x109c93b0 */
  push32(0x109c5f73u); f_109c93b0();
  /* 109c5f73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5f76 jmp 0x109c60e5 */
  goto L_109c60e5;
L_109c5f7b:;
  /* 109c5f7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5f7e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5f82 jne 0x109c5f91 */
  if (!C.zf) goto L_109c5f91;
  /* 109c5f84 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5f88 jne 0x109c5f91 */
  if (!C.zf) goto L_109c5f91;
  /* 109c5f8a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_109c5f91:;
  /* 109c5f91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5f94 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c5f97 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5f9a je 0x109c5fbd */
  if (C.zf) goto L_109c5fbd;
  /* 109c5f9c push 0x109ec9c8 */
  push32((uint32_t)(0x109ec9c8u));
  /* 109c5fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c5fa3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 109c5fa8 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c5fad push 2 */
  push32((uint32_t)(0x2u));
  /* 109c5faf call 0x109c4300 */
  push32(0x109c5fb4u); f_109c4300();
  /* 109c5fb4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c5fb7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5fba jne 0x109c5fbd */
  if (!C.zf) goto L_109c5fbd;
  /* 109c5fbc int3  */
  x86_unimpl("int3 @ 0x109c5fbc");
L_109c5fbd:;
  /* 109c5fbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c5fbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c5fc1 jne 0x109c5f91 */
  if (!C.zf) goto L_109c5f91;
  /* 109c5fc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5fc6 mov eax, dword ptr [0x109f16d4] */
  EAX = (r32((uint32_t)(0x109f16d4)));
  /* 109c5fcb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c5fce mov dword ptr [0x109f16d4], eax */
  w32((uint32_t)(0x109f16d4), (EAX));
  /* 109c5fd3 mov ecx, dword ptr [0x109efa84] */
  ECX = (r32((uint32_t)(0x109efa84)));
  /* 109c5fd9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 109c5fdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c5fde jne 0x109c60bc */
  if (!C.zf) goto L_109c60bc;
  /* 109c5fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5fe7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c5fea je 0x109c5ffc */
  if (C.zf) goto L_109c5ffc;
  /* 109c5fec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5fef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c5ff1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c5ff4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109c5ff7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 109c5ffa jmp 0x109c603a */
  goto L_109c603a;
L_109c5ffc:;
  /* 109c5ffc mov ecx, dword ptr [0x109f16c8] */
  ECX = (r32((uint32_t)(0x109f16c8)));
  /* 109c6002 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6005 je 0x109c6028 */
  if (C.zf) goto L_109c6028;
  /* 109c6007 push 0x109ec9b0 */
  push32((uint32_t)(0x109ec9b0u));
  /* 109c600c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c600e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 109c6013 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c6018 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c601a call 0x109c4300 */
  push32(0x109c601fu); f_109c4300();
  /* 109c601f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6022 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6025 jne 0x109c6028 */
  if (!C.zf) goto L_109c6028;
  /* 109c6027 int3  */
  x86_unimpl("int3 @ 0x109c6027");
L_109c6028:;
  /* 109c6028 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c602a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c602c jne 0x109c5ffc */
  if (!C.zf) goto L_109c5ffc;
  /* 109c602e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6031 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c6034 mov dword ptr [0x109f16c8], ecx */
  w32((uint32_t)(0x109f16c8), (ECX));
L_109c603a:;
  /* 109c603a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c603d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6041 je 0x109c6052 */
  if (C.zf) goto L_109c6052;
  /* 109c6043 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6046 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c6049 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c604c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c604e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109c6050 jmp 0x109c608f */
  goto L_109c608f;
L_109c6052:;
  /* 109c6052 mov ecx, dword ptr [0x109f16d0] */
  ECX = (r32((uint32_t)(0x109f16d0)));
  /* 109c6058 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c605b je 0x109c607e */
  if (C.zf) goto L_109c607e;
  /* 109c605d push 0x109ec998 */
  push32((uint32_t)(0x109ec998u));
  /* 109c6062 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6064 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 109c6069 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c606e push 2 */
  push32((uint32_t)(0x2u));
  /* 109c6070 call 0x109c4300 */
  push32(0x109c6075u); f_109c4300();
  /* 109c6075 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6078 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c607b jne 0x109c607e */
  if (!C.zf) goto L_109c607e;
  /* 109c607d int3  */
  x86_unimpl("int3 @ 0x109c607d");
L_109c607e:;
  /* 109c607e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c6080 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c6082 jne 0x109c6052 */
  if (!C.zf) goto L_109c6052;
  /* 109c6084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6087 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c6089 mov dword ptr [0x109f16d0], ecx */
  w32((uint32_t)(0x109f16d0), (ECX));
L_109c608f:;
  /* 109c608f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6092 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109c6095 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6098 push eax */
  push32((uint32_t)(EAX));
  /* 109c6099 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c609b mov cl, byte ptr [0x109efa91] */
  CL = (r8((uint32_t)(0x109efa91)));
  /* 109c60a1 push ecx */
  push32((uint32_t)(ECX));
  /* 109c60a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c60a5 push edx */
  push32((uint32_t)(EDX));
  /* 109c60a6 call 0x109c8fb0 */
  push32(0x109c60abu); f_109c8fb0();
  /* 109c60ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c60ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c60b1 push eax */
  push32((uint32_t)(EAX));
  /* 109c60b2 call 0x109c93b0 */
  push32(0x109c60b7u); f_109c93b0();
  /* 109c60b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c60ba jmp 0x109c60e5 */
  goto L_109c60e5;
L_109c60bc:;
  /* 109c60bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c60bf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 109c60c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c60c9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109c60cc push eax */
  push32((uint32_t)(EAX));
  /* 109c60cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c60cf mov cl, byte ptr [0x109efa91] */
  CL = (r8((uint32_t)(0x109efa91)));
  /* 109c60d5 push ecx */
  push32((uint32_t)(ECX));
  /* 109c60d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c60d9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c60dc push edx */
  push32((uint32_t)(EDX));
  /* 109c60dd call 0x109c8fb0 */
  push32(0x109c60e2u); f_109c8fb0();
  /* 109c60e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c60e5:;
  /* 109c60e5 pop edi */
  EDI = (pop32());
  /* 109c60e6 pop esi */
  ESI = (pop32());
  /* 109c60e7 pop ebx */
  EBX = (pop32());
  /* 109c60e8 mov esp, ebp */
  ESP = (EBP);
  /* 109c60ea pop ebp */
  EBP = (pop32());
  /* 109c60eb ret  */
  ESPCHK(0x109c5d00u, _esp0);
  ESP += 4; return;
}

/* FUN_100060f0 @ 0x109c60f0 (19 bytes, 9 insns) */
void f_109c60f0(void) {
  FTRACE(0x109c60f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c60f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c60f1 mov ebp, esp */
  EBP = (ESP);
  /* 109c60f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c60f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c60f8 push eax */
  push32((uint32_t)(EAX));
  /* 109c60f9 call 0x109c6110 */
  push32(0x109c60feu); f_109c6110();
  /* 109c60fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6101 pop ebp */
  EBP = (pop32());
  /* 109c6102 ret  */
  ESPCHK(0x109c60f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006110 @ 0x109c6110 (342 bytes, 119 insns) */
void f_109c6110(void) {
  FTRACE(0x109c6110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c6110 push ebp */
  push32((uint32_t)(EBP));
  /* 109c6111 mov ebp, esp */
  EBP = (ESP);
  /* 109c6113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c6116 push ebx */
  push32((uint32_t)(EBX));
  /* 109c6117 push esi */
  push32((uint32_t)(ESI));
  /* 109c6118 push edi */
  push32((uint32_t)(EDI));
  /* 109c6119 mov eax, dword ptr [0x109efa84] */
  EAX = (r32((uint32_t)(0x109efa84)));
  /* 109c611e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109c6121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6123 je 0x109c6155 */
  if (C.zf) goto L_109c6155;
L_109c6125:;
  /* 109c6125 call 0x109c63e0 */
  push32(0x109c612au); f_109c63e0();
  /* 109c612a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c612c jne 0x109c614f */
  if (!C.zf) goto L_109c614f;
  /* 109c612e push 0x109ec7e4 */
  push32((uint32_t)(0x109ec7e4u));
  /* 109c6133 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6135 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 109c613a push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c613f push 2 */
  push32((uint32_t)(0x2u));
  /* 109c6141 call 0x109c4300 */
  push32(0x109c6146u); f_109c4300();
  /* 109c6146 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6149 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c614c jne 0x109c614f */
  if (!C.zf) goto L_109c614f;
  /* 109c614e int3  */
  x86_unimpl("int3 @ 0x109c614e");
L_109c614f:;
  /* 109c614f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c6151 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c6153 jne 0x109c6125 */
  if (!C.zf) goto L_109c6125;
L_109c6155:;
  /* 109c6155 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c6157 call 0x109c8c40 */
  push32(0x109c615cu); f_109c8c40();
  /* 109c615c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c615f:;
  /* 109c615f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6162 push edx */
  push32((uint32_t)(EDX));
  /* 109c6163 call 0x109c6840 */
  push32(0x109c6168u); f_109c6840();
  /* 109c6168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c616b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c616d jne 0x109c6190 */
  if (!C.zf) goto L_109c6190;
  /* 109c616f push 0x109ec8e8 */
  push32((uint32_t)(0x109ec8e8u));
  /* 109c6174 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6176 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 109c617b push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c6180 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c6182 call 0x109c4300 */
  push32(0x109c6187u); f_109c4300();
  /* 109c6187 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c618a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c618d jne 0x109c6190 */
  if (!C.zf) goto L_109c6190;
  /* 109c618f int3  */
  x86_unimpl("int3 @ 0x109c618f");
L_109c6190:;
  /* 109c6190 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c6192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6194 jne 0x109c615f */
  if (!C.zf) goto L_109c615f;
  /* 109c6196 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6199 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c619c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_109c619f:;
  /* 109c619f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c61a2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c61a5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c61aa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c61ad je 0x109c61f2 */
  if (C.zf) goto L_109c61f2;
  /* 109c61af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c61b2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c61b6 je 0x109c61f2 */
  if (C.zf) goto L_109c61f2;
  /* 109c61b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c61bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c61be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c61c3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c61c6 je 0x109c61f2 */
  if (C.zf) goto L_109c61f2;
  /* 109c61c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c61cb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c61cf je 0x109c61f2 */
  if (C.zf) goto L_109c61f2;
  /* 109c61d1 push 0x109eca80 */
  push32((uint32_t)(0x109eca80u));
  /* 109c61d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c61d8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 109c61dd push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c61e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c61e4 call 0x109c4300 */
  push32(0x109c61e9u); f_109c4300();
  /* 109c61e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c61ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c61ef jne 0x109c61f2 */
  if (!C.zf) goto L_109c61f2;
  /* 109c61f1 int3  */
  x86_unimpl("int3 @ 0x109c61f1");
L_109c61f2:;
  /* 109c61f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c61f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c61f6 jne 0x109c619f */
  if (!C.zf) goto L_109c619f;
  /* 109c61f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c61fb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c61ff jne 0x109c620e */
  if (!C.zf) goto L_109c620e;
  /* 109c6201 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6205 jne 0x109c620e */
  if (!C.zf) goto L_109c620e;
  /* 109c6207 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_109c620e:;
  /* 109c620e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6211 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6215 je 0x109c6249 */
  if (C.zf) goto L_109c6249;
L_109c6217:;
  /* 109c6217 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c621a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c621d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6220 je 0x109c6243 */
  if (C.zf) goto L_109c6243;
  /* 109c6222 push 0x109ec9c8 */
  push32((uint32_t)(0x109ec9c8u));
  /* 109c6227 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6229 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 109c622e push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c6233 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c6235 call 0x109c4300 */
  push32(0x109c623au); f_109c4300();
  /* 109c623a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c623d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6240 jne 0x109c6243 */
  if (!C.zf) goto L_109c6243;
  /* 109c6242 int3  */
  x86_unimpl("int3 @ 0x109c6242");
L_109c6243:;
  /* 109c6243 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c6245 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c6247 jne 0x109c6217 */
  if (!C.zf) goto L_109c6217;
L_109c6249:;
  /* 109c6249 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c624c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109c624f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c6252 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c6254 call 0x109c8ce0 */
  push32(0x109c6259u); f_109c8ce0();
  /* 109c6259 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c625c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c625f pop edi */
  EDI = (pop32());
  /* 109c6260 pop esi */
  ESI = (pop32());
  /* 109c6261 pop ebx */
  EBX = (pop32());
  /* 109c6262 mov esp, ebp */
  ESP = (EBP);
  /* 109c6264 pop ebp */
  EBP = (pop32());
  /* 109c6265 ret  */
  ESPCHK(0x109c6110u, _esp0);
  ESP += 4; return;
}

/* FUN_10006270 @ 0x109c6270 (28 bytes, 11 insns) */
void f_109c6270(void) {
  FTRACE(0x109c6270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c6270 push ebp */
  push32((uint32_t)(EBP));
  /* 109c6271 mov ebp, esp */
  EBP = (ESP);
  /* 109c6273 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6274 mov eax, dword ptr [0x109efa8c] */
  EAX = (r32((uint32_t)(0x109efa8c)));
  /* 109c6279 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c627c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c627f mov dword ptr [0x109efa8c], ecx */
  w32((uint32_t)(0x109efa8c), (ECX));
  /* 109c6285 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6288 mov esp, ebp */
  ESP = (EBP);
  /* 109c628a pop ebp */
  EBP = (pop32());
  /* 109c628b ret  */
  ESPCHK(0x109c6270u, _esp0);
  ESP += 4; return;
}

/* FUN_10006290 @ 0x109c6290 (157 bytes, 59 insns) */
void f_109c6290(void) {
  FTRACE(0x109c6290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c6290 push ebp */
  push32((uint32_t)(EBP));
  /* 109c6291 mov ebp, esp */
  EBP = (ESP);
  /* 109c6293 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6294 push ebx */
  push32((uint32_t)(EBX));
  /* 109c6295 push esi */
  push32((uint32_t)(ESI));
  /* 109c6296 push edi */
  push32((uint32_t)(EDI));
  /* 109c6297 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c6299 call 0x109c8c40 */
  push32(0x109c629eu); f_109c8c40();
  /* 109c629e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c62a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c62a4 push eax */
  push32((uint32_t)(EAX));
  /* 109c62a5 call 0x109c6840 */
  push32(0x109c62aau); f_109c6840();
  /* 109c62aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c62ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c62af je 0x109c631c */
  if (C.zf) goto L_109c631c;
  /* 109c62b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c62b4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c62b7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109c62ba:;
  /* 109c62ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c62bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c62c0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c62c5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c62c8 je 0x109c630d */
  if (C.zf) goto L_109c630d;
  /* 109c62ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c62cd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c62d1 je 0x109c630d */
  if (C.zf) goto L_109c630d;
  /* 109c62d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c62d6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c62d9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c62de cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c62e1 je 0x109c630d */
  if (C.zf) goto L_109c630d;
  /* 109c62e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c62e6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c62ea je 0x109c630d */
  if (C.zf) goto L_109c630d;
  /* 109c62ec push 0x109eca80 */
  push32((uint32_t)(0x109eca80u));
  /* 109c62f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c62f3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 109c62f8 push 0x109ec7d8 */
  push32((uint32_t)(0x109ec7d8u));
  /* 109c62fd push 2 */
  push32((uint32_t)(0x2u));
  /* 109c62ff call 0x109c4300 */
  push32(0x109c6304u); f_109c4300();
  /* 109c6304 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6307 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c630a jne 0x109c630d */
  if (!C.zf) goto L_109c630d;
  /* 109c630c int3  */
  x86_unimpl("int3 @ 0x109c630c");
L_109c630d:;
  /* 109c630d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c630f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c6311 jne 0x109c62ba */
  if (!C.zf) goto L_109c62ba;
  /* 109c6313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6316 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c6319 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_109c631c:;
  /* 109c631c push 9 */
  push32((uint32_t)(0x9u));
  /* 109c631e call 0x109c8ce0 */
  push32(0x109c6323u); f_109c8ce0();
  /* 109c6323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6326 pop edi */
  EDI = (pop32());
  /* 109c6327 pop esi */
  ESI = (pop32());
  /* 109c6328 pop ebx */
  EBX = (pop32());
  /* 109c6329 mov esp, ebp */
  ESP = (EBP);
  /* 109c632b pop ebp */
  EBP = (pop32());
  /* 109c632c ret  */
  ESPCHK(0x109c6290u, _esp0);
  ESP += 4; return;
}

/* FUN_10006330 @ 0x109c6330 (28 bytes, 11 insns) */
void f_109c6330(void) {
  FTRACE(0x109c6330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c6330 push ebp */
  push32((uint32_t)(EBP));
  /* 109c6331 mov ebp, esp */
  EBP = (ESP);
  /* 109c6333 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6334 mov eax, dword ptr [0x109efc90] */
  EAX = (r32((uint32_t)(0x109efc90)));
  /* 109c6339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c633c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c633f mov dword ptr [0x109efc90], ecx */
  w32((uint32_t)(0x109efc90), (ECX));
  /* 109c6345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6348 mov esp, ebp */
  ESP = (EBP);
  /* 109c634a pop ebp */
  EBP = (pop32());
  /* 109c634b ret  */
  ESPCHK(0x109c6330u, _esp0);
  ESP += 4; return;
}

/* FUN_10006350 @ 0x109c6350 (136 bytes, 55 insns) */
void f_109c6350(void) {
  FTRACE(0x109c6350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c6350 push ebp */
  push32((uint32_t)(EBP));
  /* 109c6351 mov ebp, esp */
  EBP = (ESP);
  /* 109c6353 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6354 push ebx */
  push32((uint32_t)(EBX));
  /* 109c6355 push esi */
  push32((uint32_t)(ESI));
  /* 109c6356 push edi */
  push32((uint32_t)(EDI));
  /* 109c6357 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_109c635e:;
  /* 109c635e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c6361 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c6364 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c6367 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 109c636a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c636c je 0x109c63ce */
  if (C.zf) goto L_109c63ce;
  /* 109c636e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6371 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c6373 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109c6375 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c6378 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c637e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6381 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6384 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 109c6387 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6389 je 0x109c63cc */
  if (C.zf) goto L_109c63cc;
L_109c638b:;
  /* 109c638b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c638e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c6393 push eax */
  push32((uint32_t)(EAX));
  /* 109c6394 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6397 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c6399 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 109c639c push edx */
  push32((uint32_t)(EDX));
  /* 109c639d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c63a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c63a3 push eax */
  push32((uint32_t)(EAX));
  /* 109c63a4 push 0x109ecac4 */
  push32((uint32_t)(0x109ecac4u));
  /* 109c63a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c63ab push 0 */
  push32((uint32_t)(0x0u));
  /* 109c63ad push 0 */
  push32((uint32_t)(0x0u));
  /* 109c63af push 0 */
  push32((uint32_t)(0x0u));
  /* 109c63b1 call 0x109c4300 */
  push32(0x109c63b6u); f_109c4300();
  /* 109c63b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c63b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c63bc jne 0x109c63bf */
  if (!C.zf) goto L_109c63bf;
  /* 109c63be int3  */
  x86_unimpl("int3 @ 0x109c63be");
L_109c63bf:;
  /* 109c63bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c63c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c63c3 jne 0x109c638b */
  if (!C.zf) goto L_109c638b;
  /* 109c63c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109c63cc:;
  /* 109c63cc jmp 0x109c635e */
  goto L_109c635e;
L_109c63ce:;
  /* 109c63ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c63d1 pop edi */
  EDI = (pop32());
  /* 109c63d2 pop esi */
  ESI = (pop32());
  /* 109c63d3 pop ebx */
  EBX = (pop32());
  /* 109c63d4 mov esp, ebp */
  ESP = (EBP);
  /* 109c63d6 pop ebp */
  EBP = (pop32());
  /* 109c63d7 ret  */
  ESPCHK(0x109c6350u, _esp0);
  ESP += 4; return;
}

/* FUN_100063e0 @ 0x109c63e0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_109c63e0(void) {
  FTRACE(0x109c63e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c63e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c63e1 mov ebp, esp */
  EBP = (ESP);
  /* 109c63e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c63e6 push ebx */
  push32((uint32_t)(EBX));
  /* 109c63e7 push esi */
  push32((uint32_t)(ESI));
  /* 109c63e8 push edi */
  push32((uint32_t)(EDI));
  /* 109c63e9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109c63f0 mov eax, dword ptr [0x109efa84] */
  EAX = (r32((uint32_t)(0x109efa84)));
  /* 109c63f5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 109c63f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c63fa jne 0x109c6406 */
  if (!C.zf) goto L_109c6406;
  /* 109c63fc mov eax, 1 */
  EAX = (0x1u);
  /* 109c6401 jmp 0x109c6738 */
  goto L_109c6738;
L_109c6406:;
  /* 109c6406 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c6408 call 0x109c8c40 */
  push32(0x109c640du); f_109c8c40();
  /* 109c640d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6410 call 0x109c9420 */
  push32(0x109c6415u); f_109c9420();
  /* 109c6415 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c6418 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c641c je 0x109c6529 */
  if (C.zf) goto L_109c6529;
  /* 109c6422 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6426 je 0x109c6529 */
  if (C.zf) goto L_109c6529;
  /* 109c642c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c642f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 109c6432 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c6435 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6438 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 109c643b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c643f ja 0x109c64f2 */
  if ((!C.cf&&!C.zf)) goto L_109c64f2;
  /* 109c6445 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c6448 jmp dword ptr [eax*4 + 0x109c673f] */
  switch (EAX) {
    case 0: goto L_109c64ca;
    case 1: goto L_109c64a2;
    case 2: goto L_109c647a;
    case 3: goto L_109c644f;
    default: x86_unimpl("switch@0x109c6448 out of table"); return;
  }
L_109c644f:;
  /* 109c644f push 0x109ecc18 */
  push32((uint32_t)(0x109ecc18u));
  /* 109c6454 push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c6459 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c645b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c645d push 0 */
  push32((uint32_t)(0x0u));
  /* 109c645f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6461 call 0x109c4300 */
  push32(0x109c6466u); f_109c4300();
  /* 109c6466 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6469 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c646c jne 0x109c646f */
  if (!C.zf) goto L_109c646f;
  /* 109c646e int3  */
  x86_unimpl("int3 @ 0x109c646e");
L_109c646f:;
  /* 109c646f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c6471 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c6473 jne 0x109c644f */
  if (!C.zf) goto L_109c644f;
  /* 109c6475 jmp 0x109c6518 */
  goto L_109c6518;
L_109c647a:;
  /* 109c647a push 0x109ecbf4 */
  push32((uint32_t)(0x109ecbf4u));
  /* 109c647f push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c6484 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6486 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6488 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c648a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c648c call 0x109c4300 */
  push32(0x109c6491u); f_109c4300();
  /* 109c6491 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6494 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6497 jne 0x109c649a */
  if (!C.zf) goto L_109c649a;
  /* 109c6499 int3  */
  x86_unimpl("int3 @ 0x109c6499");
L_109c649a:;
  /* 109c649a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c649c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c649e jne 0x109c647a */
  if (!C.zf) goto L_109c647a;
  /* 109c64a0 jmp 0x109c6518 */
  goto L_109c6518;
L_109c64a2:;
  /* 109c64a2 push 0x109ecbd0 */
  push32((uint32_t)(0x109ecbd0u));
  /* 109c64a7 push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c64ac push 0 */
  push32((uint32_t)(0x0u));
  /* 109c64ae push 0 */
  push32((uint32_t)(0x0u));
  /* 109c64b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c64b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c64b4 call 0x109c4300 */
  push32(0x109c64b9u); f_109c4300();
  /* 109c64b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c64bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c64bf jne 0x109c64c2 */
  if (!C.zf) goto L_109c64c2;
  /* 109c64c1 int3  */
  x86_unimpl("int3 @ 0x109c64c1");
L_109c64c2:;
  /* 109c64c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c64c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c64c6 jne 0x109c64a2 */
  if (!C.zf) goto L_109c64a2;
  /* 109c64c8 jmp 0x109c6518 */
  goto L_109c6518;
L_109c64ca:;
  /* 109c64ca push 0x109ecbac */
  push32((uint32_t)(0x109ecbacu));
  /* 109c64cf push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c64d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c64d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c64d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c64da push 0 */
  push32((uint32_t)(0x0u));
  /* 109c64dc call 0x109c4300 */
  push32(0x109c64e1u); f_109c4300();
  /* 109c64e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c64e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c64e7 jne 0x109c64ea */
  if (!C.zf) goto L_109c64ea;
  /* 109c64e9 int3  */
  x86_unimpl("int3 @ 0x109c64e9");
L_109c64ea:;
  /* 109c64ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c64ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c64ee jne 0x109c64ca */
  if (!C.zf) goto L_109c64ca;
  /* 109c64f0 jmp 0x109c6518 */
  goto L_109c6518;
L_109c64f2:;
  /* 109c64f2 push 0x109ecb80 */
  push32((uint32_t)(0x109ecb80u));
  /* 109c64f7 push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c64fc push 0 */
  push32((uint32_t)(0x0u));
  /* 109c64fe push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6500 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6502 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6504 call 0x109c4300 */
  push32(0x109c6509u); f_109c4300();
  /* 109c6509 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c650c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c650f jne 0x109c6512 */
  if (!C.zf) goto L_109c6512;
  /* 109c6511 int3  */
  x86_unimpl("int3 @ 0x109c6511");
L_109c6512:;
  /* 109c6512 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c6514 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c6516 jne 0x109c64f2 */
  if (!C.zf) goto L_109c64f2;
L_109c6518:;
  /* 109c6518 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c651a call 0x109c8ce0 */
  push32(0x109c651fu); f_109c8ce0();
  /* 109c651f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6522 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c6524 jmp 0x109c6738 */
  goto L_109c6738;
L_109c6529:;
  /* 109c6529 mov eax, dword ptr [0x109f16d0] */
  EAX = (r32((uint32_t)(0x109f16d0)));
  /* 109c652e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c6531 jmp 0x109c653b */
  goto L_109c653b;
L_109c6533:;
  /* 109c6533 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6536 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c6538 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_109c653b:;
  /* 109c653b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c653f je 0x109c672b */
  if (C.zf) goto L_109c672b;
  /* 109c6545 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 109c654c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c654f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109c6552 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c6558 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c655b je 0x109c6580 */
  if (C.zf) goto L_109c6580;
  /* 109c655d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6560 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6564 je 0x109c6580 */
  if (C.zf) goto L_109c6580;
  /* 109c6566 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6569 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109c656c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c6572 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6575 je 0x109c6580 */
  if (C.zf) goto L_109c6580;
  /* 109c6577 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c657a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c657e jne 0x109c6598 */
  if (!C.zf) goto L_109c6598;
L_109c6580:;
  /* 109c6580 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6583 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109c6586 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c658c mov edx, dword ptr [ecx*4 + 0x109efa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109efa94)));
  /* 109c6593 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109c6596 jmp 0x109c659f */
  goto L_109c659f;
L_109c6598:;
  /* 109c6598 mov dword ptr [ebp - 0x14], 0x109ecb78 */
  w32((uint32_t)(EBP + -0x14), (0x109ecb78u));
L_109c659f:;
  /* 109c659f push 4 */
  push32((uint32_t)(0x4u));
  /* 109c65a1 mov al, byte ptr [0x109efa90] */
  AL = (r8((uint32_t)(0x109efa90)));
  /* 109c65a6 push eax */
  push32((uint32_t)(EAX));
  /* 109c65a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c65aa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c65ad push ecx */
  push32((uint32_t)(ECX));
  /* 109c65ae call 0x109c6350 */
  push32(0x109c65b3u); f_109c6350();
  /* 109c65b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c65b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c65b8 jne 0x109c65f4 */
  if (!C.zf) goto L_109c65f4;
L_109c65ba:;
  /* 109c65ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c65bd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c65c0 push edx */
  push32((uint32_t)(EDX));
  /* 109c65c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c65c4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 109c65c7 push ecx */
  push32((uint32_t)(ECX));
  /* 109c65c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c65cb push edx */
  push32((uint32_t)(EDX));
  /* 109c65cc push 0x109eca54 */
  push32((uint32_t)(0x109eca54u));
  /* 109c65d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c65d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c65d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c65d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c65d9 call 0x109c4300 */
  push32(0x109c65deu); f_109c4300();
  /* 109c65de add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c65e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c65e4 jne 0x109c65e7 */
  if (!C.zf) goto L_109c65e7;
  /* 109c65e6 int3  */
  x86_unimpl("int3 @ 0x109c65e6");
L_109c65e7:;
  /* 109c65e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c65e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c65eb jne 0x109c65ba */
  if (!C.zf) goto L_109c65ba;
  /* 109c65ed mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_109c65f4:;
  /* 109c65f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 109c65f6 mov cl, byte ptr [0x109efa90] */
  CL = (r8((uint32_t)(0x109efa90)));
  /* 109c65fc push ecx */
  push32((uint32_t)(ECX));
  /* 109c65fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6600 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109c6603 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6606 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 109c660a push edx */
  push32((uint32_t)(EDX));
  /* 109c660b call 0x109c6350 */
  push32(0x109c6610u); f_109c6350();
  /* 109c6610 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6615 jne 0x109c6651 */
  if (!C.zf) goto L_109c6651;
L_109c6617:;
  /* 109c6617 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c661a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c661d push eax */
  push32((uint32_t)(EAX));
  /* 109c661e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6621 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 109c6624 push edx */
  push32((uint32_t)(EDX));
  /* 109c6625 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c6628 push eax */
  push32((uint32_t)(EAX));
  /* 109c6629 push 0x109eca28 */
  push32((uint32_t)(0x109eca28u));
  /* 109c662e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6630 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6632 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6634 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6636 call 0x109c4300 */
  push32(0x109c663bu); f_109c4300();
  /* 109c663b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c663e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6641 jne 0x109c6644 */
  if (!C.zf) goto L_109c6644;
  /* 109c6643 int3  */
  x86_unimpl("int3 @ 0x109c6643");
L_109c6644:;
  /* 109c6644 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c6646 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c6648 jne 0x109c6617 */
  if (!C.zf) goto L_109c6617;
  /* 109c664a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_109c6651:;
  /* 109c6651 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6654 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6658 jne 0x109c66aa */
  if (!C.zf) goto L_109c66aa;
  /* 109c665a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c665d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109c6660 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6661 mov dl, byte ptr [0x109efa91] */
  DL = (r8((uint32_t)(0x109efa91)));
  /* 109c6667 push edx */
  push32((uint32_t)(EDX));
  /* 109c6668 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c666b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c666e push eax */
  push32((uint32_t)(EAX));
  /* 109c666f call 0x109c6350 */
  push32(0x109c6674u); f_109c6350();
  /* 109c6674 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6677 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6679 jne 0x109c66aa */
  if (!C.zf) goto L_109c66aa;
L_109c667b:;
  /* 109c667b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c667e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6681 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6682 push 0x109ecb4c */
  push32((uint32_t)(0x109ecb4cu));
  /* 109c6687 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6689 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c668b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c668d push 0 */
  push32((uint32_t)(0x0u));
  /* 109c668f call 0x109c4300 */
  push32(0x109c6694u); f_109c4300();
  /* 109c6694 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6697 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c669a jne 0x109c669d */
  if (!C.zf) goto L_109c669d;
  /* 109c669c int3  */
  x86_unimpl("int3 @ 0x109c669c");
L_109c669d:;
  /* 109c669d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c669f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c66a1 jne 0x109c667b */
  if (!C.zf) goto L_109c667b;
  /* 109c66a3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_109c66aa:;
  /* 109c66aa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c66ae jne 0x109c6726 */
  if (!C.zf) goto L_109c6726;
  /* 109c66b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c66b3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c66b7 je 0x109c66ec */
  if (C.zf) goto L_109c66ec;
L_109c66b9:;
  /* 109c66b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c66bc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 109c66bf push edx */
  push32((uint32_t)(EDX));
  /* 109c66c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c66c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109c66c6 push ecx */
  push32((uint32_t)(ECX));
  /* 109c66c7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c66ca push edx */
  push32((uint32_t)(EDX));
  /* 109c66cb push 0x109ecb2c */
  push32((uint32_t)(0x109ecb2cu));
  /* 109c66d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c66d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c66d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c66d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c66d8 call 0x109c4300 */
  push32(0x109c66ddu); f_109c4300();
  /* 109c66dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c66e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c66e3 jne 0x109c66e6 */
  if (!C.zf) goto L_109c66e6;
  /* 109c66e5 int3  */
  x86_unimpl("int3 @ 0x109c66e5");
L_109c66e6:;
  /* 109c66e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c66e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c66ea jne 0x109c66b9 */
  if (!C.zf) goto L_109c66b9;
L_109c66ec:;
  /* 109c66ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c66ef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 109c66f2 push edx */
  push32((uint32_t)(EDX));
  /* 109c66f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c66f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c66f9 push eax */
  push32((uint32_t)(EAX));
  /* 109c66fa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c66fd push ecx */
  push32((uint32_t)(ECX));
  /* 109c66fe push 0x109ecb00 */
  push32((uint32_t)(0x109ecb00u));
  /* 109c6703 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6705 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6707 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6709 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c670b call 0x109c4300 */
  push32(0x109c6710u); f_109c4300();
  /* 109c6710 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6713 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6716 jne 0x109c6719 */
  if (!C.zf) goto L_109c6719;
  /* 109c6718 int3  */
  x86_unimpl("int3 @ 0x109c6718");
L_109c6719:;
  /* 109c6719 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c671b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c671d jne 0x109c66ec */
  if (!C.zf) goto L_109c66ec;
  /* 109c671f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109c6726:;
  /* 109c6726 jmp 0x109c6533 */
  goto L_109c6533;
L_109c672b:;
  /* 109c672b push 9 */
  push32((uint32_t)(0x9u));
  /* 109c672d call 0x109c8ce0 */
  push32(0x109c6732u); f_109c8ce0();
  /* 109c6732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6735 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109c6738:;
  /* 109c6738 pop edi */
  EDI = (pop32());
  /* 109c6739 pop esi */
  ESI = (pop32());
  /* 109c673a pop ebx */
  EBX = (pop32());
  /* 109c673b mov esp, ebp */
  ESP = (EBP);
  /* 109c673d pop ebp */
  EBP = (pop32());
  /* 109c673e ret  */
  ESPCHK(0x109c63e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006750 @ 0x109c6750 (34 bytes, 13 insns) */
void f_109c6750(void) {
  FTRACE(0x109c6750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c6750 push ebp */
  push32((uint32_t)(EBP));
  /* 109c6751 mov ebp, esp */
  EBP = (ESP);
  /* 109c6753 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6754 mov eax, dword ptr [0x109efa84] */
  EAX = (r32((uint32_t)(0x109efa84)));
  /* 109c6759 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c675c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6760 je 0x109c676b */
  if (C.zf) goto L_109c676b;
  /* 109c6762 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6765 mov dword ptr [0x109efa84], ecx */
  w32((uint32_t)(0x109efa84), (ECX));
L_109c676b:;
  /* 109c676b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c676e mov esp, ebp */
  ESP = (EBP);
  /* 109c6770 pop ebp */
  EBP = (pop32());
  /* 109c6771 ret  */
  ESPCHK(0x109c6750u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x109c6780 (103 bytes, 38 insns) */
void f_109c6780(void) {
  FTRACE(0x109c6780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c6780 push ebp */
  push32((uint32_t)(EBP));
  /* 109c6781 mov ebp, esp */
  EBP = (ESP);
  /* 109c6783 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6784 mov eax, dword ptr [0x109efa84] */
  EAX = (r32((uint32_t)(0x109efa84)));
  /* 109c6789 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 109c678c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c678e jne 0x109c6792 */
  if (!C.zf) goto L_109c6792;
  /* 109c6790 jmp 0x109c67e3 */
  goto L_109c67e3;
L_109c6792:;
  /* 109c6792 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c6794 call 0x109c8c40 */
  push32(0x109c6799u); f_109c8c40();
  /* 109c6799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c679c mov ecx, dword ptr [0x109f16d0] */
  ECX = (r32((uint32_t)(0x109f16d0)));
  /* 109c67a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109c67a5 jmp 0x109c67af */
  goto L_109c67af;
L_109c67a7:;
  /* 109c67a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c67aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c67ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c67af:;
  /* 109c67af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c67b3 je 0x109c67d9 */
  if (C.zf) goto L_109c67d9;
  /* 109c67b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c67b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 109c67bb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c67c1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c67c4 jne 0x109c67d7 */
  if (!C.zf) goto L_109c67d7;
  /* 109c67c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c67c9 push eax */
  push32((uint32_t)(EAX));
  /* 109c67ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c67cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c67d0 push ecx */
  push32((uint32_t)(ECX));
  /* 109c67d1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x109c67d4u);
  /* 109c67d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c67d7:;
  /* 109c67d7 jmp 0x109c67a7 */
  goto L_109c67a7;
L_109c67d9:;
  /* 109c67d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c67db call 0x109c8ce0 */
  push32(0x109c67e0u); f_109c8ce0();
  /* 109c67e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c67e3:;
  /* 109c67e3 mov esp, ebp */
  ESP = (EBP);
  /* 109c67e5 pop ebp */
  EBP = (pop32());
  /* 109c67e6 ret  */
  ESPCHK(0x109c6780u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x109c67f0 (75 bytes, 28 insns) */
void f_109c67f0(void) {
  FTRACE(0x109c67f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c67f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c67f1 mov ebp, esp */
  EBP = (ESP);
  /* 109c67f3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c67f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c67f8 je 0x109c682d */
  if (C.zf) goto L_109c682d;
  /* 109c67fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c67fd push eax */
  push32((uint32_t)(EAX));
  /* 109c67fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6801 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6802 call dword ptr [0x109f4374] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4374))), 0x109c6808u);
  /* 109c6808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c680a jne 0x109c682d */
  if (!C.zf) goto L_109c682d;
  /* 109c680c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6810 je 0x109c6824 */
  if (C.zf) goto L_109c6824;
  /* 109c6812 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c6815 push edx */
  push32((uint32_t)(EDX));
  /* 109c6816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6819 push eax */
  push32((uint32_t)(EAX));
  /* 109c681a call dword ptr [0x109f4378] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4378))), 0x109c6820u);
  /* 109c6820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6822 jne 0x109c682d */
  if (!C.zf) goto L_109c682d;
L_109c6824:;
  /* 109c6824 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109c682b jmp 0x109c6834 */
  goto L_109c6834;
L_109c682d:;
  /* 109c682d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109c6834:;
  /* 109c6834 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6837 mov esp, ebp */
  ESP = (EBP);
  /* 109c6839 pop ebp */
  EBP = (pop32());
  /* 109c683a ret  */
  ESPCHK(0x109c67f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006840 @ 0x109c6840 (134 bytes, 50 insns) */
void f_109c6840(void) {
  FTRACE(0x109c6840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c6840 push ebp */
  push32((uint32_t)(EBP));
  /* 109c6841 mov ebp, esp */
  EBP = (ESP);
  /* 109c6843 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6844 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6848 jne 0x109c684e */
  if (!C.zf) goto L_109c684e;
  /* 109c684a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c684c jmp 0x109c68c2 */
  goto L_109c68c2;
L_109c684e:;
  /* 109c684e push 1 */
  push32((uint32_t)(0x1u));
  /* 109c6850 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 109c6852 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6855 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c6858 push eax */
  push32((uint32_t)(EAX));
  /* 109c6859 call 0x109c67f0 */
  push32(0x109c685eu); f_109c67f0();
  /* 109c685e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6863 jne 0x109c6869 */
  if (!C.zf) goto L_109c6869;
  /* 109c6865 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c6867 jmp 0x109c68c2 */
  goto L_109c68c2;
L_109c6869:;
  /* 109c6869 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c686c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c686f push ecx */
  push32((uint32_t)(ECX));
  /* 109c6870 call 0x109c9540 */
  push32(0x109c6875u); f_109c9540();
  /* 109c6875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6878 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c687b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c687f je 0x109c6896 */
  if (C.zf) goto L_109c6896;
  /* 109c6881 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6884 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c6887 push edx */
  push32((uint32_t)(EDX));
  /* 109c6888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c688b push eax */
  push32((uint32_t)(EAX));
  /* 109c688c call 0x109c95a0 */
  push32(0x109c6891u); f_109c95a0();
  /* 109c6891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6894 jmp 0x109c68c2 */
  goto L_109c68c2;
L_109c6896:;
  /* 109c6896 mov ecx, dword ptr [0x109f1684] */
  ECX = (r32((uint32_t)(0x109f1684)));
  /* 109c689c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 109c68a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c68a4 je 0x109c68ad */
  if (C.zf) goto L_109c68ad;
  /* 109c68a6 mov eax, 1 */
  EAX = (0x1u);
  /* 109c68ab jmp 0x109c68c2 */
  goto L_109c68c2;
L_109c68ad:;
  /* 109c68ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c68b0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c68b3 push edx */
  push32((uint32_t)(EDX));
  /* 109c68b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c68b6 mov eax, dword ptr [0x109f302c] */
  EAX = (r32((uint32_t)(0x109f302c)));
  /* 109c68bb push eax */
  push32((uint32_t)(EAX));
  /* 109c68bc call dword ptr [0x109f43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43a0))), 0x109c68c2u);
L_109c68c2:;
  /* 109c68c2 mov esp, ebp */
  ESP = (EBP);
  /* 109c68c4 pop ebp */
  EBP = (pop32());
  /* 109c68c5 ret  */
  ESPCHK(0x109c6840u, _esp0);
  ESP += 4; return;
}

/* FUN_100068d0 @ 0x109c68d0 (227 bytes, 80 insns) */
void f_109c68d0(void) {
  FTRACE(0x109c68d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c68d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c68d1 mov ebp, esp */
  EBP = (ESP);
  /* 109c68d3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c68d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c68d7 push eax */
  push32((uint32_t)(EAX));
  /* 109c68d8 call 0x109c6840 */
  push32(0x109c68ddu); f_109c6840();
  /* 109c68dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c68e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c68e2 jne 0x109c68eb */
  if (!C.zf) goto L_109c68eb;
  /* 109c68e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c68e6 jmp 0x109c69af */
  goto L_109c69af;
L_109c68eb:;
  /* 109c68eb push 9 */
  push32((uint32_t)(0x9u));
  /* 109c68ed call 0x109c8c40 */
  push32(0x109c68f2u); f_109c8c40();
  /* 109c68f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c68f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c68f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c68fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109c68fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6901 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c6904 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c6909 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c690c je 0x109c6930 */
  if (C.zf) goto L_109c6930;
  /* 109c690e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6911 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6915 je 0x109c6930 */
  if (C.zf) goto L_109c6930;
  /* 109c6917 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c691a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c691d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c6922 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6925 je 0x109c6930 */
  if (C.zf) goto L_109c6930;
  /* 109c6927 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c692a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c692e jne 0x109c69a3 */
  if (!C.zf) goto L_109c69a3;
L_109c6930:;
  /* 109c6930 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c6932 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c6935 push edx */
  push32((uint32_t)(EDX));
  /* 109c6936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6939 push eax */
  push32((uint32_t)(EAX));
  /* 109c693a call 0x109c67f0 */
  push32(0x109c693fu); f_109c67f0();
  /* 109c693f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6942 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6944 je 0x109c69a3 */
  if (C.zf) goto L_109c69a3;
  /* 109c6946 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6949 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 109c694c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c694f jne 0x109c69a3 */
  if (!C.zf) goto L_109c69a3;
  /* 109c6951 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6954 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 109c6957 cmp ecx, dword ptr [0x109efa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109efa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c695d jg 0x109c69a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_109c69a3;
  /* 109c695f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6963 je 0x109c6970 */
  if (C.zf) goto L_109c6970;
  /* 109c6965 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c6968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c696b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 109c696e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109c6970:;
  /* 109c6970 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6974 je 0x109c6981 */
  if (C.zf) goto L_109c6981;
  /* 109c6976 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c6979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c697c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109c697f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109c6981:;
  /* 109c6981 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6985 je 0x109c6992 */
  if (C.zf) goto L_109c6992;
  /* 109c6987 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c698a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c698d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109c6990 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109c6992:;
  /* 109c6992 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c6994 call 0x109c8ce0 */
  push32(0x109c6999u); f_109c8ce0();
  /* 109c6999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c699c mov eax, 1 */
  EAX = (0x1u);
  /* 109c69a1 jmp 0x109c69af */
  goto L_109c69af;
L_109c69a3:;
  /* 109c69a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c69a5 call 0x109c8ce0 */
  push32(0x109c69aau); f_109c8ce0();
  /* 109c69aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c69ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109c69af:;
  /* 109c69af mov esp, ebp */
  ESP = (EBP);
  /* 109c69b1 pop ebp */
  EBP = (pop32());
  /* 109c69b2 ret  */
  ESPCHK(0x109c68d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069c0 @ 0x109c69c0 (28 bytes, 11 insns) */
void f_109c69c0(void) {
  FTRACE(0x109c69c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c69c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c69c1 mov ebp, esp */
  EBP = (ESP);
  /* 109c69c3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c69c4 mov eax, dword ptr [0x109f3038] */
  EAX = (r32((uint32_t)(0x109f3038)));
  /* 109c69c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c69cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c69cf mov dword ptr [0x109f3038], ecx */
  w32((uint32_t)(0x109f3038), (ECX));
  /* 109c69d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c69d8 mov esp, ebp */
  ESP = (EBP);
  /* 109c69da pop ebp */
  EBP = (pop32());
  /* 109c69db ret  */
  ESPCHK(0x109c69c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069e0 @ 0x109c69e0 (362 bytes, 116 insns) */
void f_109c69e0(void) {
  FTRACE(0x109c69e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c69e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c69e1 mov ebp, esp */
  EBP = (ESP);
  /* 109c69e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c69e6 push ebx */
  push32((uint32_t)(EBX));
  /* 109c69e7 push esi */
  push32((uint32_t)(ESI));
  /* 109c69e8 push edi */
  push32((uint32_t)(EDI));
  /* 109c69e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c69ed jne 0x109c6a1a */
  if (!C.zf) goto L_109c6a1a;
L_109c69ef:;
  /* 109c69ef push 0x109ecc60 */
  push32((uint32_t)(0x109ecc60u));
  /* 109c69f4 push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c69f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c69fb push 0 */
  push32((uint32_t)(0x0u));
  /* 109c69fd push 0 */
  push32((uint32_t)(0x0u));
  /* 109c69ff push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6a01 call 0x109c4300 */
  push32(0x109c6a06u); f_109c4300();
  /* 109c6a06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6a09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6a0c jne 0x109c6a0f */
  if (!C.zf) goto L_109c6a0f;
  /* 109c6a0e int3  */
  x86_unimpl("int3 @ 0x109c6a0e");
L_109c6a0f:;
  /* 109c6a0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c6a11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6a13 jne 0x109c69ef */
  if (!C.zf) goto L_109c69ef;
  /* 109c6a15 jmp 0x109c6b43 */
  goto L_109c6b43;
L_109c6a1a:;
  /* 109c6a1a push 9 */
  push32((uint32_t)(0x9u));
  /* 109c6a1c call 0x109c8c40 */
  push32(0x109c6a21u); f_109c8c40();
  /* 109c6a21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6a24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6a27 mov edx, dword ptr [0x109f16d0] */
  EDX = (r32((uint32_t)(0x109f16d0)));
  /* 109c6a2d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 109c6a2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109c6a36 jmp 0x109c6a41 */
  goto L_109c6a41;
L_109c6a38:;
  /* 109c6a38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6a3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6a3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c6a41:;
  /* 109c6a41 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6a45 jge 0x109c6a65 */
  if ((C.sf==C.of)) goto L_109c6a65;
  /* 109c6a47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6a4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6a4d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 109c6a55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6a58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6a5b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 109c6a63 jmp 0x109c6a38 */
  goto L_109c6a38;
L_109c6a65:;
  /* 109c6a65 mov edx, dword ptr [0x109f16d0] */
  EDX = (r32((uint32_t)(0x109f16d0)));
  /* 109c6a6b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109c6a6e jmp 0x109c6a78 */
  goto L_109c6a78;
L_109c6a70:;
  /* 109c6a70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6a73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c6a75 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_109c6a78:;
  /* 109c6a78 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6a7c je 0x109c6b21 */
  if (C.zf) goto L_109c6b21;
  /* 109c6a82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6a85 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c6a88 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c6a8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6a8f jl 0x109c6af7 */
  if ((C.sf!=C.of)) goto L_109c6af7;
  /* 109c6a91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6a94 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 109c6a97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c6a9d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6aa0 jge 0x109c6af7 */
  if ((C.sf==C.of)) goto L_109c6af7;
  /* 109c6aa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6aa5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109c6aa8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c6aae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6ab1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 109c6ab5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6ab8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6abb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 109c6abe and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c6ac4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6ac7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 109c6acb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6ace mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c6ad1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c6ad6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6ad9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 109c6add mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6ae0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6ae3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6ae6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 109c6ae9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c6aee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6af1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 109c6af5 jmp 0x109c6b1c */
  goto L_109c6b1c;
L_109c6af7:;
  /* 109c6af7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6afa push edx */
  push32((uint32_t)(EDX));
  /* 109c6afb push 0x109ecc3c */
  push32((uint32_t)(0x109ecc3cu));
  /* 109c6b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6b08 call 0x109c4300 */
  push32(0x109c6b0du); f_109c4300();
  /* 109c6b0d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6b10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6b13 jne 0x109c6b16 */
  if (!C.zf) goto L_109c6b16;
  /* 109c6b15 int3  */
  x86_unimpl("int3 @ 0x109c6b15");
L_109c6b16:;
  /* 109c6b16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c6b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6b1a jne 0x109c6af7 */
  if (!C.zf) goto L_109c6af7;
L_109c6b1c:;
  /* 109c6b1c jmp 0x109c6a70 */
  goto L_109c6a70;
L_109c6b21:;
  /* 109c6b21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6b24 mov edx, dword ptr [0x109f16d8] */
  EDX = (r32((uint32_t)(0x109f16d8)));
  /* 109c6b2a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 109c6b2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6b30 mov ecx, dword ptr [0x109f16cc] */
  ECX = (r32((uint32_t)(0x109f16cc)));
  /* 109c6b36 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 109c6b39 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c6b3b call 0x109c8ce0 */
  push32(0x109c6b40u); f_109c8ce0();
  /* 109c6b40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c6b43:;
  /* 109c6b43 pop edi */
  EDI = (pop32());
  /* 109c6b44 pop esi */
  ESI = (pop32());
  /* 109c6b45 pop ebx */
  EBX = (pop32());
  /* 109c6b46 mov esp, ebp */
  ESP = (EBP);
  /* 109c6b48 pop ebp */
  EBP = (pop32());
  /* 109c6b49 ret  */
  ESPCHK(0x109c69e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b50 @ 0x109c6b50 (291 bytes, 95 insns) */
void f_109c6b50(void) {
  FTRACE(0x109c6b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c6b50 push ebp */
  push32((uint32_t)(EBP));
  /* 109c6b51 mov ebp, esp */
  EBP = (ESP);
  /* 109c6b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c6b56 push ebx */
  push32((uint32_t)(EBX));
  /* 109c6b57 push esi */
  push32((uint32_t)(ESI));
  /* 109c6b58 push edi */
  push32((uint32_t)(EDI));
  /* 109c6b59 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109c6b60 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6b64 je 0x109c6b72 */
  if (C.zf) goto L_109c6b72;
  /* 109c6b66 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6b6a je 0x109c6b72 */
  if (C.zf) goto L_109c6b72;
  /* 109c6b6c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6b70 jne 0x109c6ba0 */
  if (!C.zf) goto L_109c6ba0;
L_109c6b72:;
  /* 109c6b72 push 0x109ecc88 */
  push32((uint32_t)(0x109ecc88u));
  /* 109c6b77 push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c6b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6b84 call 0x109c4300 */
  push32(0x109c6b89u); f_109c4300();
  /* 109c6b89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6b8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6b8f jne 0x109c6b92 */
  if (!C.zf) goto L_109c6b92;
  /* 109c6b91 int3  */
  x86_unimpl("int3 @ 0x109c6b91");
L_109c6b92:;
  /* 109c6b92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c6b94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6b96 jne 0x109c6b72 */
  if (!C.zf) goto L_109c6b72;
  /* 109c6b98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c6b9b jmp 0x109c6c6c */
  goto L_109c6c6c;
L_109c6ba0:;
  /* 109c6ba0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109c6ba7 jmp 0x109c6bb2 */
  goto L_109c6bb2;
L_109c6ba9:;
  /* 109c6ba9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6bac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6baf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109c6bb2:;
  /* 109c6bb2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6bb6 jge 0x109c6c3c */
  if ((C.sf==C.of)) goto L_109c6c3c;
  /* 109c6bbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6bbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c6bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6bc5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109c6bc8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 109c6bcc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c6bd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6bd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6bd6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 109c6bda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6bdd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c6be0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6be3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109c6be6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 109c6bea sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c6bee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6bf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6bf4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 109c6bf8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6bfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6bfe cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6c03 jne 0x109c6c12 */
  if (!C.zf) goto L_109c6c12;
  /* 109c6c05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6c08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6c0b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6c10 je 0x109c6c37 */
  if (C.zf) goto L_109c6c37;
L_109c6c12:;
  /* 109c6c12 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6c16 je 0x109c6c37 */
  if (C.zf) goto L_109c6c37;
  /* 109c6c18 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6c1c jne 0x109c6c30 */
  if (!C.zf) goto L_109c6c30;
  /* 109c6c1e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6c22 jne 0x109c6c37 */
  if (!C.zf) goto L_109c6c37;
  /* 109c6c24 mov eax, dword ptr [0x109efa84] */
  EAX = (r32((uint32_t)(0x109efa84)));
  /* 109c6c29 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 109c6c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6c2e je 0x109c6c37 */
  if (C.zf) goto L_109c6c37;
L_109c6c30:;
  /* 109c6c30 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_109c6c37:;
  /* 109c6c37 jmp 0x109c6ba9 */
  goto L_109c6ba9;
L_109c6c3c:;
  /* 109c6c3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c6c3f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c6c42 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 109c6c45 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c6c48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6c4b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 109c6c4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c6c51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c6c54 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 109c6c57 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c6c5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6c5d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 109c6c60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6c63 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109c6c69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_109c6c6c:;
  /* 109c6c6c pop edi */
  EDI = (pop32());
  /* 109c6c6d pop esi */
  ESI = (pop32());
  /* 109c6c6e pop ebx */
  EBX = (pop32());
  /* 109c6c6f mov esp, ebp */
  ESP = (EBP);
  /* 109c6c71 pop ebp */
  EBP = (pop32());
  /* 109c6c72 ret  */
  ESPCHK(0x109c6b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c80 @ 0x109c6c80 (697 bytes, 253 insns) */
void f_109c6c80(void) {
  FTRACE(0x109c6c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c6c80 push ebp */
  push32((uint32_t)(EBP));
  /* 109c6c81 mov ebp, esp */
  EBP = (ESP);
  /* 109c6c83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c6c86 push ebx */
  push32((uint32_t)(EBX));
  /* 109c6c87 push esi */
  push32((uint32_t)(ESI));
  /* 109c6c88 push edi */
  push32((uint32_t)(EDI));
  /* 109c6c89 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109c6c90 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c6c92 call 0x109c8c40 */
  push32(0x109c6c97u); f_109c8c40();
  /* 109c6c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c6c9a:;
  /* 109c6c9a push 0x109ecd80 */
  push32((uint32_t)(0x109ecd80u));
  /* 109c6c9f push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c6ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6ca8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6caa push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6cac call 0x109c4300 */
  push32(0x109c6cb1u); f_109c4300();
  /* 109c6cb1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6cb4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6cb7 jne 0x109c6cba */
  if (!C.zf) goto L_109c6cba;
  /* 109c6cb9 int3  */
  x86_unimpl("int3 @ 0x109c6cb9");
L_109c6cba:;
  /* 109c6cba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c6cbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6cbe jne 0x109c6c9a */
  if (!C.zf) goto L_109c6c9a;
  /* 109c6cc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6cc4 je 0x109c6cce */
  if (C.zf) goto L_109c6cce;
  /* 109c6cc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6cc9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c6ccb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_109c6cce:;
  /* 109c6cce mov eax, dword ptr [0x109f16d0] */
  EAX = (r32((uint32_t)(0x109f16d0)));
  /* 109c6cd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c6cd6 jmp 0x109c6ce0 */
  goto L_109c6ce0;
L_109c6cd8:;
  /* 109c6cd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6cdb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c6cdd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109c6ce0:;
  /* 109c6ce0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6ce4 je 0x109c6f02 */
  if (C.zf) goto L_109c6f02;
  /* 109c6cea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6ced cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6cf0 je 0x109c6f02 */
  if (C.zf) goto L_109c6f02;
  /* 109c6cf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6cf9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 109c6cfc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c6d02 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6d05 je 0x109c6d34 */
  if (C.zf) goto L_109c6d34;
  /* 109c6d07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6d0a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109c6d0d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c6d13 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c6d15 je 0x109c6d34 */
  if (C.zf) goto L_109c6d34;
  /* 109c6d17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6d1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c6d1d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c6d22 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6d25 jne 0x109c6d39 */
  if (!C.zf) goto L_109c6d39;
  /* 109c6d27 mov ecx, dword ptr [0x109efa84] */
  ECX = (r32((uint32_t)(0x109efa84)));
  /* 109c6d2d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 109c6d30 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c6d32 jne 0x109c6d39 */
  if (!C.zf) goto L_109c6d39;
L_109c6d34:;
  /* 109c6d34 jmp 0x109c6efd */
  goto L_109c6efd;
L_109c6d39:;
  /* 109c6d39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6d3c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6d40 je 0x109c6db2 */
  if (C.zf) goto L_109c6db2;
  /* 109c6d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6d44 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c6d46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6d49 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109c6d4c push ecx */
  push32((uint32_t)(ECX));
  /* 109c6d4d call 0x109c67f0 */
  push32(0x109c6d52u); f_109c67f0();
  /* 109c6d52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6d55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6d57 jne 0x109c6d83 */
  if (!C.zf) goto L_109c6d83;
L_109c6d59:;
  /* 109c6d59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6d5c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 109c6d5f push eax */
  push32((uint32_t)(EAX));
  /* 109c6d60 push 0x109ecd6c */
  push32((uint32_t)(0x109ecd6cu));
  /* 109c6d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6d6d call 0x109c4300 */
  push32(0x109c6d72u); f_109c4300();
  /* 109c6d72 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6d75 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6d78 jne 0x109c6d7b */
  if (!C.zf) goto L_109c6d7b;
  /* 109c6d7a int3  */
  x86_unimpl("int3 @ 0x109c6d7a");
L_109c6d7b:;
  /* 109c6d7b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c6d7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c6d7f jne 0x109c6d59 */
  if (!C.zf) goto L_109c6d59;
  /* 109c6d81 jmp 0x109c6db2 */
  goto L_109c6db2;
L_109c6d83:;
  /* 109c6d83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6d86 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 109c6d89 push eax */
  push32((uint32_t)(EAX));
  /* 109c6d8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6d8d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109c6d90 push edx */
  push32((uint32_t)(EDX));
  /* 109c6d91 push 0x109ecd60 */
  push32((uint32_t)(0x109ecd60u));
  /* 109c6d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6d9e call 0x109c4300 */
  push32(0x109c6da3u); f_109c4300();
  /* 109c6da3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6da6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6da9 jne 0x109c6dac */
  if (!C.zf) goto L_109c6dac;
  /* 109c6dab int3  */
  x86_unimpl("int3 @ 0x109c6dab");
L_109c6dac:;
  /* 109c6dac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c6dae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6db0 jne 0x109c6d83 */
  if (!C.zf) goto L_109c6d83;
L_109c6db2:;
  /* 109c6db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6db5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 109c6db8 push edx */
  push32((uint32_t)(EDX));
  /* 109c6db9 push 0x109ecd58 */
  push32((uint32_t)(0x109ecd58u));
  /* 109c6dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6dc6 call 0x109c4300 */
  push32(0x109c6dcbu); f_109c4300();
  /* 109c6dcb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6dce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6dd1 jne 0x109c6dd4 */
  if (!C.zf) goto L_109c6dd4;
  /* 109c6dd3 int3  */
  x86_unimpl("int3 @ 0x109c6dd3");
L_109c6dd4:;
  /* 109c6dd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c6dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c6dd8 jne 0x109c6db2 */
  if (!C.zf) goto L_109c6db2;
  /* 109c6dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6ddd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 109c6de0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c6de6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6de9 jne 0x109c6e5c */
  if (!C.zf) goto L_109c6e5c;
L_109c6deb:;
  /* 109c6deb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6dee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109c6df1 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6df2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6df5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c6df8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 109c6dfb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c6e00 push eax */
  push32((uint32_t)(EAX));
  /* 109c6e01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6e04 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6e07 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6e08 push 0x109ecd24 */
  push32((uint32_t)(0x109ecd24u));
  /* 109c6e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6e0f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6e15 call 0x109c4300 */
  push32(0x109c6e1au); f_109c4300();
  /* 109c6e1a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6e1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6e20 jne 0x109c6e23 */
  if (!C.zf) goto L_109c6e23;
  /* 109c6e22 int3  */
  x86_unimpl("int3 @ 0x109c6e22");
L_109c6e23:;
  /* 109c6e23 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c6e25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c6e27 jne 0x109c6deb */
  if (!C.zf) goto L_109c6deb;
  /* 109c6e29 cmp dword ptr [0x109f3038], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f3038))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6e30 je 0x109c6e4b */
  if (C.zf) goto L_109c6e4b;
  /* 109c6e32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6e35 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109c6e38 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6e39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6e3c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6e3f push edx */
  push32((uint32_t)(EDX));
  /* 109c6e40 call dword ptr [0x109f3038] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f3038))), 0x109c6e46u);
  /* 109c6e46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6e49 jmp 0x109c6e57 */
  goto L_109c6e57;
L_109c6e4b:;
  /* 109c6e4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6e4e push eax */
  push32((uint32_t)(EAX));
  /* 109c6e4f call 0x109c6f40 */
  push32(0x109c6e54u); f_109c6f40();
  /* 109c6e54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c6e57:;
  /* 109c6e57 jmp 0x109c6efd */
  goto L_109c6efd;
L_109c6e5c:;
  /* 109c6e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6e5f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6e63 jne 0x109c6ea2 */
  if (!C.zf) goto L_109c6ea2;
L_109c6e65:;
  /* 109c6e65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6e68 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109c6e6b push eax */
  push32((uint32_t)(EAX));
  /* 109c6e6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6e6f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6e72 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6e73 push 0x109eccfc */
  push32((uint32_t)(0x109eccfcu));
  /* 109c6e78 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6e7c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6e80 call 0x109c4300 */
  push32(0x109c6e85u); f_109c4300();
  /* 109c6e85 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6e88 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6e8b jne 0x109c6e8e */
  if (!C.zf) goto L_109c6e8e;
  /* 109c6e8d int3  */
  x86_unimpl("int3 @ 0x109c6e8d");
L_109c6e8e:;
  /* 109c6e8e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c6e90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c6e92 jne 0x109c6e65 */
  if (!C.zf) goto L_109c6e65;
  /* 109c6e94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6e97 push eax */
  push32((uint32_t)(EAX));
  /* 109c6e98 call 0x109c6f40 */
  push32(0x109c6e9du); f_109c6f40();
  /* 109c6e9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6ea0 jmp 0x109c6efd */
  goto L_109c6efd;
L_109c6ea2:;
  /* 109c6ea2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6ea5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 109c6ea8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c6eae cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6eb1 jne 0x109c6efd */
  if (!C.zf) goto L_109c6efd;
L_109c6eb3:;
  /* 109c6eb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6eb6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109c6eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6eba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6ebd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109c6ec0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 109c6ec3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c6ec8 push eax */
  push32((uint32_t)(EAX));
  /* 109c6ec9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6ecc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6ecf push ecx */
  push32((uint32_t)(ECX));
  /* 109c6ed0 push 0x109eccc8 */
  push32((uint32_t)(0x109eccc8u));
  /* 109c6ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6edb push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6edd call 0x109c4300 */
  push32(0x109c6ee2u); f_109c4300();
  /* 109c6ee2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6ee5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6ee8 jne 0x109c6eeb */
  if (!C.zf) goto L_109c6eeb;
  /* 109c6eea int3  */
  x86_unimpl("int3 @ 0x109c6eea");
L_109c6eeb:;
  /* 109c6eeb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c6eed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c6eef jne 0x109c6eb3 */
  if (!C.zf) goto L_109c6eb3;
  /* 109c6ef1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c6ef4 push eax */
  push32((uint32_t)(EAX));
  /* 109c6ef5 call 0x109c6f40 */
  push32(0x109c6efau); f_109c6f40();
  /* 109c6efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c6efd:;
  /* 109c6efd jmp 0x109c6cd8 */
  goto L_109c6cd8;
L_109c6f02:;
  /* 109c6f02 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c6f04 call 0x109c8ce0 */
  push32(0x109c6f09u); f_109c8ce0();
  /* 109c6f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c6f0c:;
  /* 109c6f0c push 0x109eccb0 */
  push32((uint32_t)(0x109eccb0u));
  /* 109c6f11 push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c6f16 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6f18 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c6f1e call 0x109c4300 */
  push32(0x109c6f23u); f_109c4300();
  /* 109c6f23 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6f26 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6f29 jne 0x109c6f2c */
  if (!C.zf) goto L_109c6f2c;
  /* 109c6f2b int3  */
  x86_unimpl("int3 @ 0x109c6f2b");
L_109c6f2c:;
  /* 109c6f2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c6f2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c6f30 jne 0x109c6f0c */
  if (!C.zf) goto L_109c6f0c;
  /* 109c6f32 pop edi */
  EDI = (pop32());
  /* 109c6f33 pop esi */
  ESI = (pop32());
  /* 109c6f34 pop ebx */
  EBX = (pop32());
  /* 109c6f35 mov esp, ebp */
  ESP = (EBP);
  /* 109c6f37 pop ebp */
  EBP = (pop32());
  /* 109c6f38 ret  */
  ESPCHK(0x109c6c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f40 @ 0x109c6f40 (276 bytes, 89 insns) */
void f_109c6f40(void) {
  FTRACE(0x109c6f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c6f40 push ebp */
  push32((uint32_t)(EBP));
  /* 109c6f41 mov ebp, esp */
  EBP = (ESP);
  /* 109c6f43 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c6f46 push ebx */
  push32((uint32_t)(EBX));
  /* 109c6f47 push esi */
  push32((uint32_t)(ESI));
  /* 109c6f48 push edi */
  push32((uint32_t)(EDI));
  /* 109c6f49 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 109c6f50 jmp 0x109c6f5b */
  goto L_109c6f5b;
L_109c6f52:;
  /* 109c6f52 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 109c6f55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6f58 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_109c6f5b:;
  /* 109c6f5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6f5e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6f62 jge 0x109c6f6f */
  if ((C.sf==C.of)) goto L_109c6f6f;
  /* 109c6f64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6f67 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 109c6f6a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 109c6f6d jmp 0x109c6f76 */
  goto L_109c6f76;
L_109c6f6f:;
  /* 109c6f6f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_109c6f76:;
  /* 109c6f76 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 109c6f79 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6f7c jge 0x109c701c */
  if ((C.sf==C.of)) goto L_109c701c;
  /* 109c6f82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c6f85 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6f88 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 109c6f8b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 109c6f8e cmp dword ptr [0x109efea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109efea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6f95 jle 0x109c6fb3 */
  if ((C.zf||C.sf!=C.of)) goto L_109c6fb3;
  /* 109c6f97 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 109c6f9c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c6f9f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c6fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 109c6fa6 call 0x109cb250 */
  push32(0x109c6fabu); f_109cb250();
  /* 109c6fab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c6fae mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 109c6fb1 jmp 0x109c6fd0 */
  goto L_109c6fd0;
L_109c6fb3:;
  /* 109c6fb3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c6fb6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c6fbc mov eax, dword ptr [0x109efc98] */
  EAX = (r32((uint32_t)(0x109efc98)));
  /* 109c6fc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c6fc3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 109c6fc7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 109c6fcd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_109c6fd0:;
  /* 109c6fd0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c6fd4 je 0x109c6fe4 */
  if (C.zf) goto L_109c6fe4;
  /* 109c6fd6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c6fd9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c6fdf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 109c6fe2 jmp 0x109c6feb */
  goto L_109c6feb;
L_109c6fe4:;
  /* 109c6fe4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_109c6feb:;
  /* 109c6feb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 109c6fee mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 109c6ff1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 109c6ff5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 109c6ff8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c6ffe push edx */
  push32((uint32_t)(EDX));
  /* 109c6fff push 0x109ecda4 */
  push32((uint32_t)(0x109ecda4u));
  /* 109c7004 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 109c7007 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c700a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 109c700e push ecx */
  push32((uint32_t)(ECX));
  /* 109c700f call 0x109cb150 */
  push32(0x109c7014u); f_109cb150();
  /* 109c7014 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7017 jmp 0x109c6f52 */
  goto L_109c6f52;
L_109c701c:;
  /* 109c701c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 109c701f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_109c7024:;
  /* 109c7024 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 109c7027 push eax */
  push32((uint32_t)(EAX));
  /* 109c7028 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 109c702b push ecx */
  push32((uint32_t)(ECX));
  /* 109c702c push 0x109ecd94 */
  push32((uint32_t)(0x109ecd94u));
  /* 109c7031 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7033 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7035 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7037 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7039 call 0x109c4300 */
  push32(0x109c703eu); f_109c4300();
  /* 109c703e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7041 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7044 jne 0x109c7047 */
  if (!C.zf) goto L_109c7047;
  /* 109c7046 int3  */
  x86_unimpl("int3 @ 0x109c7046");
L_109c7047:;
  /* 109c7047 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c7049 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c704b jne 0x109c7024 */
  if (!C.zf) goto L_109c7024;
  /* 109c704d pop edi */
  EDI = (pop32());
  /* 109c704e pop esi */
  ESI = (pop32());
  /* 109c704f pop ebx */
  EBX = (pop32());
  /* 109c7050 mov esp, ebp */
  ESP = (EBP);
  /* 109c7052 pop ebp */
  EBP = (pop32());
  /* 109c7053 ret  */
  ESPCHK(0x109c6f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007060 @ 0x109c7060 (116 bytes, 46 insns) */
void f_109c7060(void) {
  FTRACE(0x109c7060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7060 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7061 mov ebp, esp */
  EBP = (ESP);
  /* 109c7063 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c7066 push ebx */
  push32((uint32_t)(EBX));
  /* 109c7067 push esi */
  push32((uint32_t)(ESI));
  /* 109c7068 push edi */
  push32((uint32_t)(EDI));
  /* 109c7069 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 109c706c push eax */
  push32((uint32_t)(EAX));
  /* 109c706d call 0x109c69e0 */
  push32(0x109c7072u); f_109c69e0();
  /* 109c7072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7075 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7079 jne 0x109c7094 */
  if (!C.zf) goto L_109c7094;
  /* 109c707b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c707f jne 0x109c7094 */
  if (!C.zf) goto L_109c7094;
  /* 109c7081 mov ecx, dword ptr [0x109efa84] */
  ECX = (r32((uint32_t)(0x109efa84)));
  /* 109c7087 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 109c708a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c708c je 0x109c70cb */
  if (C.zf) goto L_109c70cb;
  /* 109c708e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7092 je 0x109c70cb */
  if (C.zf) goto L_109c70cb;
L_109c7094:;
  /* 109c7094 push 0x109ecdac */
  push32((uint32_t)(0x109ecdacu));
  /* 109c7099 push 0x109ec778 */
  push32((uint32_t)(0x109ec778u));
  /* 109c709e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c70a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c70a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c70a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c70a6 call 0x109c4300 */
  push32(0x109c70abu); f_109c4300();
  /* 109c70ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c70ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c70b1 jne 0x109c70b4 */
  if (!C.zf) goto L_109c70b4;
  /* 109c70b3 int3  */
  x86_unimpl("int3 @ 0x109c70b3");
L_109c70b4:;
  /* 109c70b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c70b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c70b8 jne 0x109c7094 */
  if (!C.zf) goto L_109c7094;
  /* 109c70ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109c70bc call 0x109c6c80 */
  push32(0x109c70c1u); f_109c6c80();
  /* 109c70c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c70c4 mov eax, 1 */
  EAX = (0x1u);
  /* 109c70c9 jmp 0x109c70cd */
  goto L_109c70cd;
L_109c70cb:;
  /* 109c70cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109c70cd:;
  /* 109c70cd pop edi */
  EDI = (pop32());
  /* 109c70ce pop esi */
  ESI = (pop32());
  /* 109c70cf pop ebx */
  EBX = (pop32());
  /* 109c70d0 mov esp, ebp */
  ESP = (EBP);
  /* 109c70d2 pop ebp */
  EBP = (pop32());
  /* 109c70d3 ret  */
  ESPCHK(0x109c7060u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e0 @ 0x109c70e0 (197 bytes, 79 insns) */
void f_109c70e0(void) {
  FTRACE(0x109c70e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c70e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c70e1 mov ebp, esp */
  EBP = (ESP);
  /* 109c70e3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c70e4 push ebx */
  push32((uint32_t)(EBX));
  /* 109c70e5 push esi */
  push32((uint32_t)(ESI));
  /* 109c70e6 push edi */
  push32((uint32_t)(EDI));
  /* 109c70e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c70eb jne 0x109c70f2 */
  if (!C.zf) goto L_109c70f2;
  /* 109c70ed jmp 0x109c719e */
  goto L_109c719e;
L_109c70f2:;
  /* 109c70f2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109c70f9 jmp 0x109c7104 */
  goto L_109c7104;
L_109c70fb:;
  /* 109c70fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c70fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7101 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c7104:;
  /* 109c7104 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7108 jge 0x109c714e */
  if ((C.sf==C.of)) goto L_109c714e;
L_109c710a:;
  /* 109c710a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c710d mov edx, dword ptr [ecx*4 + 0x109efa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109efa94)));
  /* 109c7114 push edx */
  push32((uint32_t)(EDX));
  /* 109c7115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7118 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c711b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 109c711f push edx */
  push32((uint32_t)(EDX));
  /* 109c7120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7123 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7126 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 109c712a push edx */
  push32((uint32_t)(EDX));
  /* 109c712b push 0x109ece08 */
  push32((uint32_t)(0x109ece08u));
  /* 109c7130 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7132 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7134 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7136 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7138 call 0x109c4300 */
  push32(0x109c713du); f_109c4300();
  /* 109c713d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7140 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7143 jne 0x109c7146 */
  if (!C.zf) goto L_109c7146;
  /* 109c7145 int3  */
  x86_unimpl("int3 @ 0x109c7145");
L_109c7146:;
  /* 109c7146 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c7148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c714a jne 0x109c710a */
  if (!C.zf) goto L_109c710a;
  /* 109c714c jmp 0x109c70fb */
  goto L_109c70fb;
L_109c714e:;
  /* 109c714e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7151 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 109c7154 push edx */
  push32((uint32_t)(EDX));
  /* 109c7155 push 0x109ecde4 */
  push32((uint32_t)(0x109ecde4u));
  /* 109c715a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c715c push 0 */
  push32((uint32_t)(0x0u));
  /* 109c715e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7160 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7162 call 0x109c4300 */
  push32(0x109c7167u); f_109c4300();
  /* 109c7167 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c716a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c716d jne 0x109c7170 */
  if (!C.zf) goto L_109c7170;
  /* 109c716f int3  */
  x86_unimpl("int3 @ 0x109c716f");
L_109c7170:;
  /* 109c7170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c7172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c7174 jne 0x109c714e */
  if (!C.zf) goto L_109c714e;
L_109c7176:;
  /* 109c7176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7179 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 109c717c push edx */
  push32((uint32_t)(EDX));
  /* 109c717d push 0x109ecdc4 */
  push32((uint32_t)(0x109ecdc4u));
  /* 109c7182 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7184 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7186 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7188 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c718a call 0x109c4300 */
  push32(0x109c718fu); f_109c4300();
  /* 109c718f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7192 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7195 jne 0x109c7198 */
  if (!C.zf) goto L_109c7198;
  /* 109c7197 int3  */
  x86_unimpl("int3 @ 0x109c7197");
L_109c7198:;
  /* 109c7198 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c719a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c719c jne 0x109c7176 */
  if (!C.zf) goto L_109c7176;
L_109c719e:;
  /* 109c719e pop edi */
  EDI = (pop32());
  /* 109c719f pop esi */
  ESI = (pop32());
  /* 109c71a0 pop ebx */
  EBX = (pop32());
  /* 109c71a1 mov esp, ebp */
  ESP = (EBP);
  /* 109c71a3 pop ebp */
  EBP = (pop32());
  /* 109c71a4 ret  */
  ESPCHK(0x109c70e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071b0 @ 0x109c71b0 (329 bytes, 102 insns) */
void f_109c71b0(void) {
  FTRACE(0x109c71b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c71b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c71b1 mov ebp, esp */
  EBP = (ESP);
  /* 109c71b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c71b6 cmp dword ptr [0x109f31b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f31b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c71bd jne 0x109c71c4 */
  if (!C.zf) goto L_109c71c4;
  /* 109c71bf call 0x109cbaf0 */
  push32(0x109c71c4u); f_109cbaf0();
L_109c71c4:;
  /* 109c71c4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109c71cb mov eax, dword ptr [0x109f166c] */
  EAX = (r32((uint32_t)(0x109f166c)));
  /* 109c71d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c71d3:;
  /* 109c71d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c71d6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109c71d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c71db je 0x109c7209 */
  if (C.zf) goto L_109c7209;
  /* 109c71dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c71e0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109c71e3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c71e6 je 0x109c71f1 */
  if (C.zf) goto L_109c71f1;
  /* 109c71e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c71eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c71ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_109c71f1:;
  /* 109c71f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c71f4 push eax */
  push32((uint32_t)(EAX));
  /* 109c71f5 call 0x109c8070 */
  push32(0x109c71fau); f_109c8070();
  /* 109c71fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c71fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7200 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 109c7204 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c7207 jmp 0x109c71d3 */
  goto L_109c71d3;
L_109c7209:;
  /* 109c7209 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 109c720b push 0x109ece28 */
  push32((uint32_t)(0x109ece28u));
  /* 109c7210 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c7212 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7215 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 109c721c push ecx */
  push32((uint32_t)(ECX));
  /* 109c721d call 0x109c5240 */
  push32(0x109c7222u); f_109c5240();
  /* 109c7222 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7225 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c7228 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c722b mov dword ptr [0x109f16a0], edx */
  w32((uint32_t)(0x109f16a0), (EDX));
  /* 109c7231 cmp dword ptr [0x109f16a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f16a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7238 jne 0x109c7244 */
  if (!C.zf) goto L_109c7244;
  /* 109c723a push 9 */
  push32((uint32_t)(0x9u));
  /* 109c723c call 0x109c41b0 */
  push32(0x109c7241u); f_109c41b0();
  /* 109c7241 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c7244:;
  /* 109c7244 mov eax, dword ptr [0x109f166c] */
  EAX = (r32((uint32_t)(0x109f166c)));
  /* 109c7249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c724c jmp 0x109c7257 */
  goto L_109c7257;
L_109c724e:;
  /* 109c724e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7251 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7254 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109c7257:;
  /* 109c7257 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c725a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109c725d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c725f je 0x109c72c7 */
  if (C.zf) goto L_109c72c7;
  /* 109c7261 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7264 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7265 call 0x109c8070 */
  push32(0x109c726au); f_109c8070();
  /* 109c726a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c726d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7270 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109c7273 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7276 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109c7279 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c727c je 0x109c72c5 */
  if (C.zf) goto L_109c72c5;
  /* 109c727e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 109c7280 push 0x109ece28 */
  push32((uint32_t)(0x109ece28u));
  /* 109c7285 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c7287 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c728a push ecx */
  push32((uint32_t)(ECX));
  /* 109c728b call 0x109c5240 */
  push32(0x109c7290u); f_109c5240();
  /* 109c7290 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7293 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7296 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 109c7298 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c729b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c729e jne 0x109c72aa */
  if (!C.zf) goto L_109c72aa;
  /* 109c72a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c72a2 call 0x109c41b0 */
  push32(0x109c72a7u); f_109c41b0();
  /* 109c72a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c72aa:;
  /* 109c72aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c72ad push ecx */
  push32((uint32_t)(ECX));
  /* 109c72ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c72b1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c72b3 push eax */
  push32((uint32_t)(EAX));
  /* 109c72b4 call 0x109c81f0 */
  push32(0x109c72b9u); f_109c81f0();
  /* 109c72b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c72bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c72bf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c72c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_109c72c5:;
  /* 109c72c5 jmp 0x109c724e */
  goto L_109c724e;
L_109c72c7:;
  /* 109c72c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c72c9 mov edx, dword ptr [0x109f166c] */
  EDX = (r32((uint32_t)(0x109f166c)));
  /* 109c72cf push edx */
  push32((uint32_t)(EDX));
  /* 109c72d0 call 0x109c5cd0 */
  push32(0x109c72d5u); f_109c5cd0();
  /* 109c72d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c72d8 mov dword ptr [0x109f166c], 0 */
  w32((uint32_t)(0x109f166c), (0x0u));
  /* 109c72e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c72e5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109c72eb mov dword ptr [0x109f31a0], 1 */
  w32((uint32_t)(0x109f31a0), (0x1u));
  /* 109c72f5 mov esp, ebp */
  ESP = (EBP);
  /* 109c72f7 pop ebp */
  EBP = (pop32());
  /* 109c72f8 ret  */
  ESPCHK(0x109c71b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007300 @ 0x109c7300 (216 bytes, 69 insns) */
void f_109c7300(void) {
  FTRACE(0x109c7300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7300 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7301 mov ebp, esp */
  EBP = (ESP);
  /* 109c7303 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c7306 cmp dword ptr [0x109f31b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f31b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c730d jne 0x109c7314 */
  if (!C.zf) goto L_109c7314;
  /* 109c730f call 0x109cbaf0 */
  push32(0x109c7314u); f_109cbaf0();
L_109c7314:;
  /* 109c7314 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 109c7319 push 0x109f16dc */
  push32((uint32_t)(0x109f16dcu));
  /* 109c731e push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7320 call dword ptr [0x109f4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4358))), 0x109c7326u);
  /* 109c7326 mov dword ptr [0x109f16b0], 0x109f16dc */
  w32((uint32_t)(0x109f16b0), (0x109f16dcu));
  /* 109c7330 mov eax, dword ptr [0x109f31cc] */
  EAX = (r32((uint32_t)(0x109f31cc)));
  /* 109c7335 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109c7338 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c733a jne 0x109c7347 */
  if (!C.zf) goto L_109c7347;
  /* 109c733c mov edx, dword ptr [0x109f16b0] */
  EDX = (r32((uint32_t)(0x109f16b0)));
  /* 109c7342 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109c7345 jmp 0x109c734f */
  goto L_109c734f;
L_109c7347:;
  /* 109c7347 mov eax, dword ptr [0x109f31cc] */
  EAX = (r32((uint32_t)(0x109f31cc)));
  /* 109c734c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_109c734f:;
  /* 109c734f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c7352 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109c7355 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 109c7358 push edx */
  push32((uint32_t)(EDX));
  /* 109c7359 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 109c735c push eax */
  push32((uint32_t)(EAX));
  /* 109c735d push 0 */
  push32((uint32_t)(0x0u));
  /* 109c735f push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7361 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c7364 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7365 call 0x109c73e0 */
  push32(0x109c736au); f_109c73e0();
  /* 109c736a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c736d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 109c7372 push 0x109ece34 */
  push32((uint32_t)(0x109ece34u));
  /* 109c7377 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c7379 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c737c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c737f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 109c7382 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7383 call 0x109c5240 */
  push32(0x109c7388u); f_109c5240();
  /* 109c7388 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c738b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c738e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7392 jne 0x109c739e */
  if (!C.zf) goto L_109c739e;
  /* 109c7394 push 8 */
  push32((uint32_t)(0x8u));
  /* 109c7396 call 0x109c41b0 */
  push32(0x109c739bu); f_109c41b0();
  /* 109c739b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c739e:;
  /* 109c739e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 109c73a1 push edx */
  push32((uint32_t)(EDX));
  /* 109c73a2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 109c73a5 push eax */
  push32((uint32_t)(EAX));
  /* 109c73a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c73a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c73ac lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 109c73af push eax */
  push32((uint32_t)(EAX));
  /* 109c73b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c73b3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c73b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c73b7 push edx */
  push32((uint32_t)(EDX));
  /* 109c73b8 call 0x109c73e0 */
  push32(0x109c73bdu); f_109c73e0();
  /* 109c73bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c73c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c73c3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c73c6 mov dword ptr [0x109f1694], eax */
  w32((uint32_t)(0x109f1694), (EAX));
  /* 109c73cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c73ce mov dword ptr [0x109f1698], ecx */
  w32((uint32_t)(0x109f1698), (ECX));
  /* 109c73d4 mov esp, ebp */
  ESP = (EBP);
  /* 109c73d6 pop ebp */
  EBP = (pop32());
  /* 109c73d7 ret  */
  ESPCHK(0x109c7300u, _esp0);
  ESP += 4; return;
}

/* FUN_100073e0 @ 0x109c73e0 (1060 bytes, 360 insns) */
void f_109c73e0(void) {
  FTRACE(0x109c73e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c73e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c73e1 mov ebp, esp */
  EBP = (ESP);
  /* 109c73e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c73e6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c73e9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109c73ef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c73f2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 109c73f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c73fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c73fe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7402 je 0x109c7415 */
  if (C.zf) goto L_109c7415;
  /* 109c7404 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7407 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c740a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 109c740c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c740f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7412 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_109c7415:;
  /* 109c7415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7418 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109c741b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c741e jne 0x109c74ed */
  if (!C.zf) goto L_109c74ed;
L_109c7424:;
  /* 109c7424 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7427 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c742a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c742d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7430 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109c7433 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7436 je 0x109c74b2 */
  if (C.zf) goto L_109c74b2;
  /* 109c7438 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c743b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109c743e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c7440 je 0x109c74b2 */
  if (C.zf) goto L_109c74b2;
  /* 109c7442 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7445 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c7447 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109c7449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c744b mov al, byte ptr [edx + 0x109f2f01] */
  AL = (r8((uint32_t)(EDX + 0x109f2f01)));
  /* 109c7451 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109c7454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c7456 je 0x109c7487 */
  if (C.zf) goto L_109c7487;
  /* 109c7458 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c745b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c745d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7460 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c7463 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109c7465 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7469 je 0x109c7487 */
  if (C.zf) goto L_109c7487;
  /* 109c746b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c746e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7471 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109c7473 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109c7475 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7478 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c747b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 109c747e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7481 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7484 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109c7487:;
  /* 109c7487 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c748a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c748c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c748f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c7492 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109c7494 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7498 je 0x109c74ad */
  if (C.zf) goto L_109c74ad;
  /* 109c749a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c749d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c74a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109c74a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109c74a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c74a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c74aa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_109c74ad:;
  /* 109c74ad jmp 0x109c7424 */
  goto L_109c7424;
L_109c74b2:;
  /* 109c74b2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c74b5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c74b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c74ba mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c74bd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109c74bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c74c3 je 0x109c74d4 */
  if (C.zf) goto L_109c74d4;
  /* 109c74c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c74c8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 109c74cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c74ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c74d1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_109c74d4:;
  /* 109c74d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c74d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109c74da cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c74dd jne 0x109c74e8 */
  if (!C.zf) goto L_109c74e8;
  /* 109c74df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c74e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c74e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109c74e8:;
  /* 109c74e8 jmp 0x109c75bc */
  goto L_109c75bc;
L_109c74ed:;
  /* 109c74ed mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c74f0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c74f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c74f5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c74f8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109c74fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c74fe je 0x109c7513 */
  if (C.zf) goto L_109c7513;
  /* 109c7500 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7503 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7506 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109c7508 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109c750a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c750d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7510 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_109c7513:;
  /* 109c7513 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7516 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109c7518 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 109c751b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c751e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7521 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c7524 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7527 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c752d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c752f mov dl, byte ptr [ecx + 0x109f2f01] */
  DL = (r8((uint32_t)(ECX + 0x109f2f01)));
  /* 109c7535 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 109c7538 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c753a je 0x109c756b */
  if (C.zf) goto L_109c756b;
  /* 109c753c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c753f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c7541 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7544 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c7547 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109c7549 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c754d je 0x109c7562 */
  if (C.zf) goto L_109c7562;
  /* 109c754f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7552 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7555 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109c7557 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109c7559 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c755c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c755f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_109c7562:;
  /* 109c7562 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7565 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7568 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109c756b:;
  /* 109c756b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c756e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c7574 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7577 je 0x109c7597 */
  if (C.zf) goto L_109c7597;
  /* 109c7579 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c757c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c7581 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c7583 je 0x109c7597 */
  if (C.zf) goto L_109c7597;
  /* 109c7585 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7588 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c758e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7591 jne 0x109c74ed */
  if (!C.zf) goto L_109c74ed;
L_109c7597:;
  /* 109c7597 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c759a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c75a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c75a2 jne 0x109c75af */
  if (!C.zf) goto L_109c75af;
  /* 109c75a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c75a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c75aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c75ad jmp 0x109c75bc */
  goto L_109c75bc;
L_109c75af:;
  /* 109c75af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c75b3 je 0x109c75bc */
  if (C.zf) goto L_109c75bc;
  /* 109c75b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c75b8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_109c75bc:;
  /* 109c75bc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_109c75c3:;
  /* 109c75c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c75c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109c75c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c75cb je 0x109c75ee */
  if (C.zf) goto L_109c75ee;
L_109c75cd:;
  /* 109c75cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c75d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109c75d3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c75d6 je 0x109c75e3 */
  if (C.zf) goto L_109c75e3;
  /* 109c75d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c75db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109c75de cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c75e1 jne 0x109c75ee */
  if (!C.zf) goto L_109c75ee;
L_109c75e3:;
  /* 109c75e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c75e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c75e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c75ec jmp 0x109c75cd */
  goto L_109c75cd;
L_109c75ee:;
  /* 109c75ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c75f1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109c75f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c75f6 jne 0x109c75fd */
  if (!C.zf) goto L_109c75fd;
  /* 109c75f8 jmp 0x109c77db */
  goto L_109c77db;
L_109c75fd:;
  /* 109c75fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7601 je 0x109c7614 */
  if (C.zf) goto L_109c7614;
  /* 109c7603 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7606 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7609 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 109c760b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c760e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7611 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_109c7614:;
  /* 109c7614 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c7617 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c7619 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c761c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c761f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_109c7621:;
  /* 109c7621 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 109c7628 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_109c762f:;
  /* 109c762f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7632 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109c7635 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7638 jne 0x109c764e */
  if (!C.zf) goto L_109c764e;
  /* 109c763a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c763d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7640 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109c7643 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c7646 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7649 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 109c764c jmp 0x109c762f */
  goto L_109c762f;
L_109c764e:;
  /* 109c764e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7651 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109c7654 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7657 jne 0x109c76aa */
  if (!C.zf) goto L_109c76aa;
  /* 109c7659 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c765c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c765e mov ecx, 2 */
  ECX = (0x2u);
  /* 109c7663 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109c7665 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c7667 jne 0x109c76a2 */
  if (!C.zf) goto L_109c76a2;
  /* 109c7669 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c766d je 0x109c768f */
  if (C.zf) goto L_109c768f;
  /* 109c766f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7672 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 109c7676 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7679 jne 0x109c7686 */
  if (!C.zf) goto L_109c7686;
  /* 109c767b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c767e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7681 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109c7684 jmp 0x109c768d */
  goto L_109c768d;
L_109c7686:;
  /* 109c7686 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_109c768d:;
  /* 109c768d jmp 0x109c7696 */
  goto L_109c7696;
L_109c768f:;
  /* 109c768f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_109c7696:;
  /* 109c7696 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c7698 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c769c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 109c769f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_109c76a2:;
  /* 109c76a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c76a5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109c76a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_109c76aa:;
  /* 109c76aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c76ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c76b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c76b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 109c76b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c76b8 je 0x109c76de */
  if (C.zf) goto L_109c76de;
  /* 109c76ba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c76be je 0x109c76cf */
  if (C.zf) goto L_109c76cf;
  /* 109c76c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c76c3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 109c76c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c76c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c76cc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_109c76cf:;
  /* 109c76cf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c76d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c76d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c76d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c76da mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109c76dc jmp 0x109c76aa */
  goto L_109c76aa;
L_109c76de:;
  /* 109c76de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c76e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 109c76e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c76e6 je 0x109c7704 */
  if (C.zf) goto L_109c7704;
  /* 109c76e8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c76ec jne 0x109c7709 */
  if (!C.zf) goto L_109c7709;
  /* 109c76ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c76f1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109c76f4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c76f7 je 0x109c7704 */
  if (C.zf) goto L_109c7704;
  /* 109c76f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c76fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109c76ff cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7702 jne 0x109c7709 */
  if (!C.zf) goto L_109c7709;
L_109c7704:;
  /* 109c7704 jmp 0x109c77b4 */
  goto L_109c77b4;
L_109c7709:;
  /* 109c7709 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c770d je 0x109c77a6 */
  if (C.zf) goto L_109c77a6;
  /* 109c7713 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7717 je 0x109c776d */
  if (C.zf) goto L_109c776d;
  /* 109c7719 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c771c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c771e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109c7720 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c7722 mov cl, byte ptr [eax + 0x109f2f01] */
  CL = (r8((uint32_t)(EAX + 0x109f2f01)));
  /* 109c7728 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 109c772b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c772d je 0x109c7758 */
  if (C.zf) goto L_109c7758;
  /* 109c772f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7732 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7735 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 109c7737 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 109c7739 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c773c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c773f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 109c7742 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7745 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7748 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c774b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c774e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c7750 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7753 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c7756 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109c7758:;
  /* 109c7758 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c775b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c775e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109c7760 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109c7762 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7765 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7768 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 109c776b jmp 0x109c7799 */
  goto L_109c7799;
L_109c776d:;
  /* 109c776d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7770 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c7772 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109c7774 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c7776 mov cl, byte ptr [eax + 0x109f2f01] */
  CL = (r8((uint32_t)(EAX + 0x109f2f01)));
  /* 109c777c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 109c777f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c7781 je 0x109c7799 */
  if (C.zf) goto L_109c7799;
  /* 109c7783 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7786 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7789 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c778c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c778f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c7791 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7794 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c7797 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109c7799:;
  /* 109c7799 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c779c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c779e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c77a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c77a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109c77a6:;
  /* 109c77a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c77a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c77ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c77af jmp 0x109c7621 */
  goto L_109c7621;
L_109c77b4:;
  /* 109c77b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c77b8 je 0x109c77c9 */
  if (C.zf) goto L_109c77c9;
  /* 109c77ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c77bd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 109c77c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c77c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c77c6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_109c77c9:;
  /* 109c77c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c77cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c77ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c77d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109c77d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109c77d6 jmp 0x109c75c3 */
  goto L_109c75c3;
L_109c77db:;
  /* 109c77db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c77df je 0x109c77f3 */
  if (C.zf) goto L_109c77f3;
  /* 109c77e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c77e4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109c77ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c77ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c77f0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_109c77f3:;
  /* 109c77f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c77f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c77f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c77fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c77fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109c7800 mov esp, ebp */
  ESP = (EBP);
  /* 109c7802 pop ebp */
  EBP = (pop32());
  /* 109c7803 ret  */
  ESPCHK(0x109c73e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007810 @ 0x109c7810 (537 bytes, 173 insns) */
void f_109c7810(void) {
  FTRACE(0x109c7810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7810 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7811 mov ebp, esp */
  EBP = (ESP);
  /* 109c7813 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c7816 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 109c781d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 109c7824 cmp dword ptr [0x109f17e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f17e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c782b jne 0x109c786a */
  if (!C.zf) goto L_109c786a;
  /* 109c782d call dword ptr [0x109f43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43b4))), 0x109c7833u);
  /* 109c7833 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109c7836 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c783a je 0x109c7848 */
  if (C.zf) goto L_109c7848;
  /* 109c783c mov dword ptr [0x109f17e0], 1 */
  w32((uint32_t)(0x109f17e0), (0x1u));
  /* 109c7846 jmp 0x109c786a */
  goto L_109c786a;
L_109c7848:;
  /* 109c7848 call dword ptr [0x109f43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43b0))), 0x109c784eu);
  /* 109c784e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109c7851 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7855 je 0x109c7863 */
  if (C.zf) goto L_109c7863;
  /* 109c7857 mov dword ptr [0x109f17e0], 2 */
  w32((uint32_t)(0x109f17e0), (0x2u));
  /* 109c7861 jmp 0x109c786a */
  goto L_109c786a;
L_109c7863:;
  /* 109c7863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c7865 jmp 0x109c7a25 */
  goto L_109c7a25;
L_109c786a:;
  /* 109c786a cmp dword ptr [0x109f17e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f17e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7871 jne 0x109c796e */
  if (!C.zf) goto L_109c796e;
  /* 109c7877 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c787b jne 0x109c7893 */
  if (!C.zf) goto L_109c7893;
  /* 109c787d call dword ptr [0x109f43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43b4))), 0x109c7883u);
  /* 109c7883 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109c7886 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c788a jne 0x109c7893 */
  if (!C.zf) goto L_109c7893;
  /* 109c788c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c788e jmp 0x109c7a25 */
  goto L_109c7a25;
L_109c7893:;
  /* 109c7893 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c7896 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109c7899:;
  /* 109c7899 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c789c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c789e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 109c78a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c78a3 je 0x109c78c5 */
  if (C.zf) goto L_109c78c5;
  /* 109c78a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c78a8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c78ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c78ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c78b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c78b3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 109c78b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c78b8 jne 0x109c78c3 */
  if (!C.zf) goto L_109c78c3;
  /* 109c78ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c78bd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c78c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109c78c3:;
  /* 109c78c3 jmp 0x109c7899 */
  goto L_109c7899;
L_109c78c5:;
  /* 109c78c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c78c8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c78cb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 109c78cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c78d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109c78d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c78d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c78d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c78d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c78db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c78de push edx */
  push32((uint32_t)(EDX));
  /* 109c78df mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c78e2 push eax */
  push32((uint32_t)(EAX));
  /* 109c78e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c78e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c78e7 call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109c78edu);
  /* 109c78ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109c78f0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c78f4 je 0x109c7914 */
  if (C.zf) goto L_109c7914;
  /* 109c78f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 109c78f8 push 0x109ece40 */
  push32((uint32_t)(0x109ece40u));
  /* 109c78fd push 2 */
  push32((uint32_t)(0x2u));
  /* 109c78ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c7902 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7903 call 0x109c5240 */
  push32(0x109c7908u); f_109c5240();
  /* 109c7908 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c790b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109c790e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7912 jne 0x109c7925 */
  if (!C.zf) goto L_109c7925;
L_109c7914:;
  /* 109c7914 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c7917 push edx */
  push32((uint32_t)(EDX));
  /* 109c7918 call dword ptr [0x109f43a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43a8))), 0x109c791eu);
  /* 109c791e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c7920 jmp 0x109c7a25 */
  goto L_109c7a25;
L_109c7925:;
  /* 109c7925 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7927 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7929 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c792c push eax */
  push32((uint32_t)(EAX));
  /* 109c792d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c7930 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7931 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7934 push edx */
  push32((uint32_t)(EDX));
  /* 109c7935 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c7938 push eax */
  push32((uint32_t)(EAX));
  /* 109c7939 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c793b push 0 */
  push32((uint32_t)(0x0u));
  /* 109c793d call dword ptr [0x109f43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43ac))), 0x109c7943u);
  /* 109c7943 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c7945 jne 0x109c795c */
  if (!C.zf) goto L_109c795c;
  /* 109c7947 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c7949 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c794c push ecx */
  push32((uint32_t)(ECX));
  /* 109c794d call 0x109c5cd0 */
  push32(0x109c7952u); f_109c5cd0();
  /* 109c7952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7955 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_109c795c:;
  /* 109c795c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c795f push edx */
  push32((uint32_t)(EDX));
  /* 109c7960 call dword ptr [0x109f43a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43a8))), 0x109c7966u);
  /* 109c7966 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c7969 jmp 0x109c7a25 */
  goto L_109c7a25;
L_109c796e:;
  /* 109c796e cmp dword ptr [0x109f17e0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109f17e0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7975 jne 0x109c7a23 */
  if (!C.zf) goto L_109c7a23;
  /* 109c797b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c797f jne 0x109c7997 */
  if (!C.zf) goto L_109c7997;
  /* 109c7981 call dword ptr [0x109f43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43b0))), 0x109c7987u);
  /* 109c7987 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109c798a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c798e jne 0x109c7997 */
  if (!C.zf) goto L_109c7997;
  /* 109c7990 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c7992 jmp 0x109c7a25 */
  goto L_109c7a25;
L_109c7997:;
  /* 109c7997 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c799a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_109c799d:;
  /* 109c799d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c79a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109c79a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c79a5 je 0x109c79c5 */
  if (C.zf) goto L_109c79c5;
  /* 109c79a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c79aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c79ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c79b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c79b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 109c79b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c79b8 jne 0x109c79c3 */
  if (!C.zf) goto L_109c79c3;
  /* 109c79ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c79bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c79c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_109c79c3:;
  /* 109c79c3 jmp 0x109c799d */
  goto L_109c799d;
L_109c79c5:;
  /* 109c79c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c79c8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c79cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c79ce mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109c79d1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 109c79d6 push 0x109ece40 */
  push32((uint32_t)(0x109ece40u));
  /* 109c79db push 2 */
  push32((uint32_t)(0x2u));
  /* 109c79dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c79e0 push edx */
  push32((uint32_t)(EDX));
  /* 109c79e1 call 0x109c5240 */
  push32(0x109c79e6u); f_109c5240();
  /* 109c79e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c79e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c79ec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c79f0 jne 0x109c7a00 */
  if (!C.zf) goto L_109c7a00;
  /* 109c79f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c79f5 push eax */
  push32((uint32_t)(EAX));
  /* 109c79f6 call dword ptr [0x109f43a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43a4))), 0x109c79fcu);
  /* 109c79fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c79fe jmp 0x109c7a25 */
  goto L_109c7a25;
L_109c7a00:;
  /* 109c7a00 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c7a03 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7a04 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c7a07 push edx */
  push32((uint32_t)(EDX));
  /* 109c7a08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7a0b push eax */
  push32((uint32_t)(EAX));
  /* 109c7a0c call 0x109cbb20 */
  push32(0x109c7a11u); f_109cbb20();
  /* 109c7a11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7a14 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c7a17 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7a18 call dword ptr [0x109f43a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43a4))), 0x109c7a1eu);
  /* 109c7a1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7a21 jmp 0x109c7a25 */
  goto L_109c7a25;
L_109c7a23:;
  /* 109c7a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109c7a25:;
  /* 109c7a25 mov esp, ebp */
  ESP = (EBP);
  /* 109c7a27 pop ebp */
  EBP = (pop32());
  /* 109c7a28 ret  */
  ESPCHK(0x109c7810u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a30 @ 0x109c7a30 (77 bytes, 25 insns) */
void f_109c7a30(void) {
  FTRACE(0x109c7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7a31 mov ebp, esp */
  EBP = (ESP);
  /* 109c7a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7a35 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 109c7a3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c7a3c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7a40 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 109c7a43 push eax */
  push32((uint32_t)(EAX));
  /* 109c7a44 call dword ptr [0x109f4398] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4398))), 0x109c7a4au);
  /* 109c7a4a mov dword ptr [0x109f302c], eax */
  w32((uint32_t)(0x109f302c), (EAX));
  /* 109c7a4f cmp dword ptr [0x109f302c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f302c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7a56 jne 0x109c7a5c */
  if (!C.zf) goto L_109c7a5c;
  /* 109c7a58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c7a5a jmp 0x109c7a7b */
  goto L_109c7a7b;
L_109c7a5c:;
  /* 109c7a5c call 0x109c94e0 */
  push32(0x109c7a61u); f_109c94e0();
  /* 109c7a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c7a63 jne 0x109c7a76 */
  if (!C.zf) goto L_109c7a76;
  /* 109c7a65 mov ecx, dword ptr [0x109f302c] */
  ECX = (r32((uint32_t)(0x109f302c)));
  /* 109c7a6b push ecx */
  push32((uint32_t)(ECX));
  /* 109c7a6c call dword ptr [0x109f43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43b8))), 0x109c7a72u);
  /* 109c7a72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c7a74 jmp 0x109c7a7b */
  goto L_109c7a7b;
L_109c7a76:;
  /* 109c7a76 mov eax, 1 */
  EAX = (0x1u);
L_109c7a7b:;
  /* 109c7a7b pop ebp */
  EBP = (pop32());
  /* 109c7a7c ret  */
  ESPCHK(0x109c7a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a80 @ 0x109c7a80 (156 bytes, 48 insns) */
void f_109c7a80(void) {
  FTRACE(0x109c7a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7a80 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7a81 mov ebp, esp */
  EBP = (ESP);
  /* 109c7a83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c7a86 mov eax, dword ptr [0x109f3028] */
  EAX = (r32((uint32_t)(0x109f3028)));
  /* 109c7a8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c7a8e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109c7a95 jmp 0x109c7aa0 */
  goto L_109c7aa0;
L_109c7a97:;
  /* 109c7a97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7a9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7a9d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109c7aa0:;
  /* 109c7aa0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7aa3 cmp edx, dword ptr [0x109f3024] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109f3024))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7aa9 jge 0x109c7af6 */
  if ((C.sf==C.of)) goto L_109c7af6;
  /* 109c7aab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 109c7ab0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 109c7ab5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7ab8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109c7abb push ecx */
  push32((uint32_t)(ECX));
  /* 109c7abc call dword ptr [0x109f4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4328))), 0x109c7ac2u);
  /* 109c7ac2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 109c7ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7ac9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7acc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 109c7acf push eax */
  push32((uint32_t)(EAX));
  /* 109c7ad0 call dword ptr [0x109f4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4328))), 0x109c7ad6u);
  /* 109c7ad6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7ad9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 109c7adc push edx */
  push32((uint32_t)(EDX));
  /* 109c7add push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7adf mov eax, dword ptr [0x109f302c] */
  EAX = (r32((uint32_t)(0x109f302c)));
  /* 109c7ae4 push eax */
  push32((uint32_t)(EAX));
  /* 109c7ae5 call dword ptr [0x109f439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f439c))), 0x109c7aebu);
  /* 109c7aeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7aee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7af1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109c7af4 jmp 0x109c7a97 */
  goto L_109c7a97;
L_109c7af6:;
  /* 109c7af6 mov edx, dword ptr [0x109f3028] */
  EDX = (r32((uint32_t)(0x109f3028)));
  /* 109c7afc push edx */
  push32((uint32_t)(EDX));
  /* 109c7afd push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7aff mov eax, dword ptr [0x109f302c] */
  EAX = (r32((uint32_t)(0x109f302c)));
  /* 109c7b04 push eax */
  push32((uint32_t)(EAX));
  /* 109c7b05 call dword ptr [0x109f439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f439c))), 0x109c7b0bu);
  /* 109c7b0b mov ecx, dword ptr [0x109f302c] */
  ECX = (r32((uint32_t)(0x109f302c)));
  /* 109c7b11 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7b12 call dword ptr [0x109f43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f43b8))), 0x109c7b18u);
  /* 109c7b18 mov esp, ebp */
  ESP = (EBP);
  /* 109c7b1a pop ebp */
  EBP = (pop32());
  /* 109c7b1b ret  */
  ESPCHK(0x109c7a80u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x109c7b20 (73 bytes, 19 insns) */
void f_109c7b20(void) {
  FTRACE(0x109c7b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7b20 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7b21 mov ebp, esp */
  EBP = (ESP);
  /* 109c7b23 cmp dword ptr [0x109f1674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f1674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7b2a je 0x109c7b3e */
  if (C.zf) goto L_109c7b3e;
  /* 109c7b2c cmp dword ptr [0x109f1674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7b33 jne 0x109c7b67 */
  if (!C.zf) goto L_109c7b67;
  /* 109c7b35 cmp dword ptr [0x109f1678], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f1678))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7b3c jne 0x109c7b67 */
  if (!C.zf) goto L_109c7b67;
L_109c7b3e:;
  /* 109c7b3e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 109c7b43 call 0x109c7b70 */
  push32(0x109c7b48u); f_109c7b70();
  /* 109c7b48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7b4b cmp dword ptr [0x109f17e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f17e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7b52 je 0x109c7b5a */
  if (C.zf) goto L_109c7b5a;
  /* 109c7b54 call dword ptr [0x109f17e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f17e4))), 0x109c7b5au);
L_109c7b5a:;
  /* 109c7b5a push 0xff */
  push32((uint32_t)(0xffu));
  /* 109c7b5f call 0x109c7b70 */
  push32(0x109c7b64u); f_109c7b70();
  /* 109c7b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c7b67:;
  /* 109c7b67 pop ebp */
  EBP = (pop32());
  /* 109c7b68 ret  */
  ESPCHK(0x109c7b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b70 @ 0x109c7b70 (447 bytes, 131 insns) */
void f_109c7b70(void) {
  FTRACE(0x109c7b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7b70 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7b71 mov ebp, esp */
  EBP = (ESP);
  /* 109c7b73 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c7b79 push ebx */
  push32((uint32_t)(EBX));
  /* 109c7b7a push esi */
  push32((uint32_t)(ESI));
  /* 109c7b7b push edi */
  push32((uint32_t)(EDI));
  /* 109c7b7c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109c7b83 jmp 0x109c7b8e */
  goto L_109c7b8e;
L_109c7b85:;
  /* 109c7b85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7b88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7b8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109c7b8e:;
  /* 109c7b8e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7b92 jae 0x109c7ba7 */
  if (!C.cf) goto L_109c7ba7;
  /* 109c7b94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7b97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7b9a cmp edx, dword ptr [ecx*8 + 0x109efab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x109efab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7ba1 jne 0x109c7ba5 */
  if (!C.zf) goto L_109c7ba5;
  /* 109c7ba3 jmp 0x109c7ba7 */
  goto L_109c7ba7;
L_109c7ba5:;
  /* 109c7ba5 jmp 0x109c7b85 */
  goto L_109c7b85;
L_109c7ba7:;
  /* 109c7ba7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7baa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7bad cmp ecx, dword ptr [eax*8 + 0x109efab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x109efab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7bb4 jne 0x109c7d28 */
  if (!C.zf) goto L_109c7d28;
  /* 109c7bba cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7bc1 je 0x109c7be4 */
  if (C.zf) goto L_109c7be4;
  /* 109c7bc3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7bc6 mov eax, dword ptr [edx*8 + 0x109efab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x109efab4)));
  /* 109c7bcd push eax */
  push32((uint32_t)(EAX));
  /* 109c7bce push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7bd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c7bd6 call 0x109c4300 */
  push32(0x109c7bdbu); f_109c4300();
  /* 109c7bdb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7bde cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7be1 jne 0x109c7be4 */
  if (!C.zf) goto L_109c7be4;
  /* 109c7be3 int3  */
  x86_unimpl("int3 @ 0x109c7be3");
L_109c7be4:;
  /* 109c7be4 cmp dword ptr [0x109f1674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f1674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7beb je 0x109c7bff */
  if (C.zf) goto L_109c7bff;
  /* 109c7bed cmp dword ptr [0x109f1674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7bf4 jne 0x109c7c38 */
  if (!C.zf) goto L_109c7c38;
  /* 109c7bf6 cmp dword ptr [0x109f1678], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109f1678))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7bfd jne 0x109c7c38 */
  if (!C.zf) goto L_109c7c38;
L_109c7bff:;
  /* 109c7bff push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7c01 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 109c7c04 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7c05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7c08 mov eax, dword ptr [edx*8 + 0x109efab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x109efab4)));
  /* 109c7c0f push eax */
  push32((uint32_t)(EAX));
  /* 109c7c10 call 0x109c8070 */
  push32(0x109c7c15u); f_109c8070();
  /* 109c7c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7c18 push eax */
  push32((uint32_t)(EAX));
  /* 109c7c19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7c1c mov edx, dword ptr [ecx*8 + 0x109efab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x109efab4)));
  /* 109c7c23 push edx */
  push32((uint32_t)(EDX));
  /* 109c7c24 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 109c7c26 call dword ptr [0x109f433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f433c))), 0x109c7c2cu);
  /* 109c7c2c push eax */
  push32((uint32_t)(EAX));
  /* 109c7c2d call dword ptr [0x109f4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4340))), 0x109c7c33u);
  /* 109c7c33 jmp 0x109c7d28 */
  goto L_109c7d28;
L_109c7c38:;
  /* 109c7c38 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7c3f je 0x109c7d28 */
  if (C.zf) goto L_109c7d28;
  /* 109c7c45 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 109c7c4a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 109c7c50 push eax */
  push32((uint32_t)(EAX));
  /* 109c7c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7c53 call dword ptr [0x109f4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4358))), 0x109c7c59u);
  /* 109c7c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c7c5b jne 0x109c7c71 */
  if (!C.zf) goto L_109c7c71;
  /* 109c7c5d push 0x109ec6a8 */
  push32((uint32_t)(0x109ec6a8u));
  /* 109c7c62 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 109c7c68 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7c69 call 0x109c81f0 */
  push32(0x109c7c6eu); f_109c81f0();
  /* 109c7c6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c7c71:;
  /* 109c7c71 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 109c7c77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109c7c7a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7c7d push eax */
  push32((uint32_t)(EAX));
  /* 109c7c7e call 0x109c8070 */
  push32(0x109c7c83u); f_109c8070();
  /* 109c7c83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7c86 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7c89 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7c8c jbe 0x109c7cba */
  if ((C.cf||C.zf)) goto L_109c7cba;
  /* 109c7c8e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 109c7c94 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7c95 call 0x109c8070 */
  push32(0x109c7c9au); f_109c8070();
  /* 109c7c9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7c9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7ca0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 109c7ca4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c7ca7 push 3 */
  push32((uint32_t)(0x3u));
  /* 109c7ca9 push 0x109ec6a4 */
  push32((uint32_t)(0x109ec6a4u));
  /* 109c7cae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7cb2 call 0x109c8a60 */
  push32(0x109c7cb7u); f_109c8a60();
  /* 109c7cb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c7cba:;
  /* 109c7cba push 0x109ed0fc */
  push32((uint32_t)(0x109ed0fcu));
  /* 109c7cbf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 109c7cc5 push edx */
  push32((uint32_t)(EDX));
  /* 109c7cc6 call 0x109c81f0 */
  push32(0x109c7ccbu); f_109c81f0();
  /* 109c7ccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7cce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7cd1 push eax */
  push32((uint32_t)(EAX));
  /* 109c7cd2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 109c7cd8 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7cd9 call 0x109c8200 */
  push32(0x109c7cdeu); f_109c8200();
  /* 109c7cde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7ce1 push 0x109ec61c */
  push32((uint32_t)(0x109ec61cu));
  /* 109c7ce6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 109c7cec push edx */
  push32((uint32_t)(EDX));
  /* 109c7ced call 0x109c8200 */
  push32(0x109c7cf2u); f_109c8200();
  /* 109c7cf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7cf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7cf8 mov ecx, dword ptr [eax*8 + 0x109efab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x109efab4)));
  /* 109c7cff push ecx */
  push32((uint32_t)(ECX));
  /* 109c7d00 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 109c7d06 push edx */
  push32((uint32_t)(EDX));
  /* 109c7d07 call 0x109c8200 */
  push32(0x109c7d0cu); f_109c8200();
  /* 109c7d0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7d0f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 109c7d14 push 0x109ed0d4 */
  push32((uint32_t)(0x109ed0d4u));
  /* 109c7d19 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 109c7d1f push eax */
  push32((uint32_t)(EAX));
  /* 109c7d20 call 0x109c89a0 */
  push32(0x109c7d25u); f_109c89a0();
  /* 109c7d25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c7d28:;
  /* 109c7d28 pop edi */
  EDI = (pop32());
  /* 109c7d29 pop esi */
  ESI = (pop32());
  /* 109c7d2a pop ebx */
  EBX = (pop32());
  /* 109c7d2b mov esp, ebp */
  ESP = (EBP);
  /* 109c7d2d pop ebp */
  EBP = (pop32());
  /* 109c7d2e ret  */
  ESPCHK(0x109c7b70u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x109c7d30 (80 bytes, 27 insns) */
void f_109c7d30(void) {
  FTRACE(0x109c7d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7d30 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7d31 mov ebp, esp */
  EBP = (ESP);
  /* 109c7d33 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7d34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109c7d3b jmp 0x109c7d46 */
  goto L_109c7d46;
L_109c7d3d:;
  /* 109c7d3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7d40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7d43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c7d46:;
  /* 109c7d46 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7d4a jae 0x109c7d5f */
  if (!C.cf) goto L_109c7d5f;
  /* 109c7d4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7d4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7d52 cmp edx, dword ptr [ecx*8 + 0x109efab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x109efab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7d59 jne 0x109c7d5d */
  if (!C.zf) goto L_109c7d5d;
  /* 109c7d5b jmp 0x109c7d5f */
  goto L_109c7d5f;
L_109c7d5d:;
  /* 109c7d5d jmp 0x109c7d3d */
  goto L_109c7d3d;
L_109c7d5f:;
  /* 109c7d5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7d62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7d65 cmp ecx, dword ptr [eax*8 + 0x109efab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x109efab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7d6c jne 0x109c7d7a */
  if (!C.zf) goto L_109c7d7a;
  /* 109c7d6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7d71 mov eax, dword ptr [edx*8 + 0x109efab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x109efab4)));
  /* 109c7d78 jmp 0x109c7d7c */
  goto L_109c7d7c;
L_109c7d7a:;
  /* 109c7d7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109c7d7c:;
  /* 109c7d7c mov esp, ebp */
  ESP = (EBP);
  /* 109c7d7e pop ebp */
  EBP = (pop32());
  /* 109c7d7f ret  */
  ESPCHK(0x109c7d30u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x109c7d80 (66 bytes, 28 insns) */
void f_109c7d80(void) {
  FTRACE(0x109c7d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7d80 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7d81 mov ebp, esp */
  EBP = (ESP);
  /* 109c7d83 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7d87 jne 0x109c7da7 */
  if (!C.zf) goto L_109c7da7;
  /* 109c7d89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7d8d jge 0x109c7da7 */
  if ((C.sf==C.of)) goto L_109c7da7;
  /* 109c7d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 109c7d91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7d94 push eax */
  push32((uint32_t)(EAX));
  /* 109c7d95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7d98 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7d99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7d9c push edx */
  push32((uint32_t)(EDX));
  /* 109c7d9d call 0x109c7dd0 */
  push32(0x109c7da2u); f_109c7dd0();
  /* 109c7da2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7da5 jmp 0x109c7dbd */
  goto L_109c7dbd;
L_109c7da7:;
  /* 109c7da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7da9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7dac push eax */
  push32((uint32_t)(EAX));
  /* 109c7dad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7db0 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7db1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7db4 push edx */
  push32((uint32_t)(EDX));
  /* 109c7db5 call 0x109c7dd0 */
  push32(0x109c7dbau); f_109c7dd0();
  /* 109c7dba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c7dbd:;
  /* 109c7dbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7dc0 pop ebp */
  EBP = (pop32());
  /* 109c7dc1 ret  */
  ESPCHK(0x109c7d80u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x109c7dd0 (194 bytes, 71 insns) */
void f_109c7dd0(void) {
  FTRACE(0x109c7dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7dd1 mov ebp, esp */
  EBP = (ESP);
  /* 109c7dd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c7dd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7dd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c7ddc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7de0 je 0x109c7df9 */
  if (C.zf) goto L_109c7df9;
  /* 109c7de2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7de5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 109c7de8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7deb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7dee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c7df1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7df4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109c7df6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_109c7df9:;
  /* 109c7df9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7dfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_109c7dff:;
  /* 109c7dff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7e02 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c7e04 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109c7e07 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109c7e0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7e0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c7e0f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109c7e12 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109c7e15 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7e19 jbe 0x109c7e31 */
  if ((C.cf||C.zf)) goto L_109c7e31;
  /* 109c7e1b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7e1e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7e21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7e24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109c7e26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7e29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7e2c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109c7e2f jmp 0x109c7e45 */
  goto L_109c7e45;
L_109c7e31:;
  /* 109c7e31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7e34 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7e37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7e3a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109c7e3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7e3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7e42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109c7e45:;
  /* 109c7e45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7e49 ja 0x109c7dff */
  if ((!C.cf&&!C.zf)) goto L_109c7dff;
  /* 109c7e4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7e4e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 109c7e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7e54 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c7e57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c7e5a:;
  /* 109c7e5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7e5d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109c7e5f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 109c7e62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7e65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7e68 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109c7e6a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109c7e6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7e6f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 109c7e72 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 109c7e74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7e77 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c7e7a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c7e7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7e80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7e83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c7e86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c7e89 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7e8c jb 0x109c7e5a */
  if (C.cf) goto L_109c7e5a;
  /* 109c7e8e mov esp, ebp */
  ESP = (EBP);
  /* 109c7e90 pop ebp */
  EBP = (pop32());
  /* 109c7e91 ret  */
  ESPCHK(0x109c7dd0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x109c7ea0 (63 bytes, 24 insns) */
void f_109c7ea0(void) {
  FTRACE(0x109c7ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7ea1 mov ebp, esp */
  EBP = (ESP);
  /* 109c7ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7ea4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7ea8 jne 0x109c7eb9 */
  if (!C.zf) goto L_109c7eb9;
  /* 109c7eaa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7eae jge 0x109c7eb9 */
  if ((C.sf==C.of)) goto L_109c7eb9;
  /* 109c7eb0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109c7eb7 jmp 0x109c7ec0 */
  goto L_109c7ec0;
L_109c7eb9:;
  /* 109c7eb9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109c7ec0:;
  /* 109c7ec0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7ec3 push eax */
  push32((uint32_t)(EAX));
  /* 109c7ec4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7ec8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7ecb push edx */
  push32((uint32_t)(EDX));
  /* 109c7ecc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7ecf push eax */
  push32((uint32_t)(EAX));
  /* 109c7ed0 call 0x109c7dd0 */
  push32(0x109c7ed5u); f_109c7dd0();
  /* 109c7ed5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7ed8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7edb mov esp, ebp */
  ESP = (EBP);
  /* 109c7edd pop ebp */
  EBP = (pop32());
  /* 109c7ede ret  */
  ESPCHK(0x109c7ea0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x109c7ee0 (30 bytes, 14 insns) */
void f_109c7ee0(void) {
  FTRACE(0x109c7ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7ee1 mov ebp, esp */
  EBP = (ESP);
  /* 109c7ee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c7ee5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7ee8 push eax */
  push32((uint32_t)(EAX));
  /* 109c7ee9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7eec push ecx */
  push32((uint32_t)(ECX));
  /* 109c7eed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7ef0 push edx */
  push32((uint32_t)(EDX));
  /* 109c7ef1 call 0x109c7dd0 */
  push32(0x109c7ef6u); f_109c7dd0();
  /* 109c7ef6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7ef9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7efc pop ebp */
  EBP = (pop32());
  /* 109c7efd ret  */
  ESPCHK(0x109c7ee0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x109c7f00 (72 bytes, 28 insns) */
void f_109c7f00(void) {
  FTRACE(0x109c7f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7f00 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7f01 mov ebp, esp */
  EBP = (ESP);
  /* 109c7f03 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7f04 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7f08 jne 0x109c7f21 */
  if (!C.zf) goto L_109c7f21;
  /* 109c7f0a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7f0e jg 0x109c7f21 */
  if ((!C.zf&&C.sf==C.of)) goto L_109c7f21;
  /* 109c7f10 jl 0x109c7f18 */
  if ((C.sf!=C.of)) goto L_109c7f18;
  /* 109c7f12 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7f16 jae 0x109c7f21 */
  if (!C.cf) goto L_109c7f21;
L_109c7f18:;
  /* 109c7f18 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109c7f1f jmp 0x109c7f28 */
  goto L_109c7f28;
L_109c7f21:;
  /* 109c7f21 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109c7f28:;
  /* 109c7f28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7f2b push eax */
  push32((uint32_t)(EAX));
  /* 109c7f2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c7f2f push ecx */
  push32((uint32_t)(ECX));
  /* 109c7f30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7f33 push edx */
  push32((uint32_t)(EDX));
  /* 109c7f34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7f37 push eax */
  push32((uint32_t)(EAX));
  /* 109c7f38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7f3b push ecx */
  push32((uint32_t)(ECX));
  /* 109c7f3c call 0x109c7f50 */
  push32(0x109c7f41u); f_109c7f50();
  /* 109c7f41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7f44 mov esp, ebp */
  ESP = (EBP);
  /* 109c7f46 pop ebp */
  EBP = (pop32());
  /* 109c7f47 ret  */
  ESPCHK(0x109c7f00u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x109c7f50 (242 bytes, 91 insns) */
void f_109c7f50(void) {
  FTRACE(0x109c7f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c7f50 push ebp */
  push32((uint32_t)(EBP));
  /* 109c7f51 mov ebp, esp */
  EBP = (ESP);
  /* 109c7f53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c7f56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c7f59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c7f5c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7f60 je 0x109c7f84 */
  if (C.zf) goto L_109c7f84;
  /* 109c7f62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7f65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 109c7f68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7f6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7f6e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c7f71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7f74 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109c7f76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7f79 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7f7c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109c7f7e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109c7f81 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_109c7f84:;
  /* 109c7f84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7f87 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_109c7f8a:;
  /* 109c7f8a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c7f8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c7f8f push ecx */
  push32((uint32_t)(ECX));
  /* 109c7f90 push eax */
  push32((uint32_t)(EAX));
  /* 109c7f91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7f94 push edx */
  push32((uint32_t)(EDX));
  /* 109c7f95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7f98 push eax */
  push32((uint32_t)(EAX));
  /* 109c7f99 call 0x109cbed0 */
  push32(0x109c7f9eu); f_109cbed0();
  /* 109c7f9e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c7fa1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c7fa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c7fa6 push edx */
  push32((uint32_t)(EDX));
  /* 109c7fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 109c7fa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c7fab push eax */
  push32((uint32_t)(EAX));
  /* 109c7fac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c7faf push ecx */
  push32((uint32_t)(ECX));
  /* 109c7fb0 call 0x109cbe60 */
  push32(0x109c7fb5u); f_109cbe60();
  /* 109c7fb5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109c7fb8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 109c7fbb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7fbf jbe 0x109c7fd7 */
  if ((C.cf||C.zf)) goto L_109c7fd7;
  /* 109c7fc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7fc4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7fc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7fca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109c7fcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7fcf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7fd2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109c7fd5 jmp 0x109c7feb */
  goto L_109c7feb;
L_109c7fd7:;
  /* 109c7fd7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c7fda add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7fdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7fe0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109c7fe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7fe5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c7fe8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109c7feb:;
  /* 109c7feb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7fef ja 0x109c7f8a */
  if ((!C.cf&&!C.zf)) goto L_109c7f8a;
  /* 109c7ff1 jb 0x109c7ff9 */
  if (C.cf) goto L_109c7ff9;
  /* 109c7ff3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c7ff7 ja 0x109c7f8a */
  if ((!C.cf&&!C.zf)) goto L_109c7f8a;
L_109c7ff9:;
  /* 109c7ff9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c7ffc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 109c7fff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8002 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c8005 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c8008:;
  /* 109c8008 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c800b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109c800d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 109c8010 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8013 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8016 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109c8018 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109c801a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c801d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 109c8020 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 109c8022 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8025 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c8028 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109c802b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c802e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8031 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c8034 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8037 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c803a jb 0x109c8008 */
  if (C.cf) goto L_109c8008;
  /* 109c803c mov esp, ebp */
  ESP = (EBP);
  /* 109c803e pop ebp */
  EBP = (pop32());
  /* 109c803f ret 0x14 */
  ESPCHK(0x109c7f50u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x109c8050 (31 bytes, 15 insns) */
void f_109c8050(void) {
  FTRACE(0x109c8050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8050 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8051 mov ebp, esp */
  EBP = (ESP);
  /* 109c8053 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c8055 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c8058 push eax */
  push32((uint32_t)(EAX));
  /* 109c8059 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c805c push ecx */
  push32((uint32_t)(ECX));
  /* 109c805d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c8060 push edx */
  push32((uint32_t)(EDX));
  /* 109c8061 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8064 push eax */
  push32((uint32_t)(EAX));
  /* 109c8065 call 0x109c7f50 */
  push32(0x109c806au); f_109c7f50();
  /* 109c806a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c806d pop ebp */
  EBP = (pop32());
  /* 109c806e ret  */
  ESPCHK(0x109c8050u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x109c8070 (123 bytes, 44 insns) */
void f_109c8070(void) {
  FTRACE(0x109c8070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8070 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 109c8074 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 109c807a je 0x109c8090 */
  if (C.zf) goto L_109c8090;
L_109c807c:;
  /* 109c807c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 109c807e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109c807f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109c8081 je 0x109c80c3 */
  if (C.zf) goto L_109c80c3;
  /* 109c8083 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 109c8089 jne 0x109c807c */
  if (!C.zf) goto L_109c807c;
  /* 109c808b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_109c8090:;
  /* 109c8090 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 109c8092 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 109c8097 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8099 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c809c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109c809e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c80a1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 109c80a6 je 0x109c8090 */
  if (C.zf) goto L_109c8090;
  /* 109c80a8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 109c80ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109c80ad je 0x109c80e1 */
  if (C.zf) goto L_109c80e1;
  /* 109c80af test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 109c80b1 je 0x109c80d7 */
  if (C.zf) goto L_109c80d7;
  /* 109c80b3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 109c80b8 je 0x109c80cd */
  if (C.zf) goto L_109c80cd;
  /* 109c80ba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 109c80bf je 0x109c80c3 */
  if (C.zf) goto L_109c80c3;
  /* 109c80c1 jmp 0x109c8090 */
  goto L_109c8090;
L_109c80c3:;
  /* 109c80c3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 109c80c6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 109c80ca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c80cc ret  */
  ESPCHK(0x109c8070u, _esp0);
  ESP += 4; return;
L_109c80cd:;
  /* 109c80cd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 109c80d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 109c80d4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c80d6 ret  */
  ESPCHK(0x109c8070u, _esp0);
  ESP += 4; return;
L_109c80d7:;
  /* 109c80d7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 109c80da mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 109c80de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c80e0 ret  */
  ESPCHK(0x109c8070u, _esp0);
  ESP += 4; return;
L_109c80e1:;
  /* 109c80e1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 109c80e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 109c80e8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c80ea ret  */
  ESPCHK(0x109c8070u, _esp0);
  ESP += 4; return;
}

/* FUN_100080f0 @ 0x109c80f0 (249 bytes, 93 insns) */
void f_109c80f0(void) {
  FTRACE(0x109c80f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c80f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c80f1 mov ebp, esp */
  EBP = (ESP);
  /* 109c80f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c80f6 push ebx */
  push32((uint32_t)(EBX));
  /* 109c80f7 push esi */
  push32((uint32_t)(ESI));
  /* 109c80f8 push edi */
  push32((uint32_t)(EDI));
  /* 109c80f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 109c80fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109c80ff lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 109c8102 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_109c8105:;
  /* 109c8105 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8109 jne 0x109c8129 */
  if (!C.zf) goto L_109c8129;
  /* 109c810b push 0x109ed134 */
  push32((uint32_t)(0x109ed134u));
  /* 109c8110 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c8112 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 109c8114 push 0x109ed128 */
  push32((uint32_t)(0x109ed128u));
  /* 109c8119 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c811b call 0x109c4300 */
  push32(0x109c8120u); f_109c4300();
  /* 109c8120 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8123 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8126 jne 0x109c8129 */
  if (!C.zf) goto L_109c8129;
  /* 109c8128 int3  */
  x86_unimpl("int3 @ 0x109c8128");
L_109c8129:;
  /* 109c8129 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c812b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c812d jne 0x109c8105 */
  if (!C.zf) goto L_109c8105;
L_109c812f:;
  /* 109c812f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8133 jne 0x109c8153 */
  if (!C.zf) goto L_109c8153;
  /* 109c8135 push 0x109ed118 */
  push32((uint32_t)(0x109ed118u));
  /* 109c813a push 0 */
  push32((uint32_t)(0x0u));
  /* 109c813c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 109c813e push 0x109ed128 */
  push32((uint32_t)(0x109ed128u));
  /* 109c8143 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c8145 call 0x109c4300 */
  push32(0x109c814au); f_109c4300();
  /* 109c814a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c814d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8150 jne 0x109c8153 */
  if (!C.zf) goto L_109c8153;
  /* 109c8152 int3  */
  x86_unimpl("int3 @ 0x109c8152");
L_109c8153:;
  /* 109c8153 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c8155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c8157 jne 0x109c812f */
  if (!C.zf) goto L_109c812f;
  /* 109c8159 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c815c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 109c8163 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8169 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 109c816c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c816f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8172 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 109c8174 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8177 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c817a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 109c817d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 109c8180 push edx */
  push32((uint32_t)(EDX));
  /* 109c8181 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c8184 push eax */
  push32((uint32_t)(EAX));
  /* 109c8185 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8188 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8189 call 0x109cc1d0 */
  push32(0x109c818eu); f_109cc1d0();
  /* 109c818e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8191 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109c8194 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8197 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109c819a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c819d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c81a0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 109c81a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c81a6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c81aa jl 0x109c81ce */
  if ((C.sf!=C.of)) goto L_109c81ce;
  /* 109c81ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c81af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c81b1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 109c81b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c81b6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c81bc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 109c81bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c81c2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c81c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c81c7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c81ca mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109c81cc jmp 0x109c81df */
  goto L_109c81df;
L_109c81ce:;
  /* 109c81ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c81d1 push eax */
  push32((uint32_t)(EAX));
  /* 109c81d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c81d4 call 0x109cbf50 */
  push32(0x109c81d9u); f_109cbf50();
  /* 109c81d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c81dc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_109c81df:;
  /* 109c81df mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109c81e2 pop edi */
  EDI = (pop32());
  /* 109c81e3 pop esi */
  ESI = (pop32());
  /* 109c81e4 pop ebx */
  EBX = (pop32());
  /* 109c81e5 mov esp, ebp */
  ESP = (EBP);
  /* 109c81e7 pop ebp */
  EBP = (pop32());
  /* 109c81e8 ret  */
  ESPCHK(0x109c80f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081f0 @ 0x109c81f0 (7 bytes, 3 insns) */
void f_109c81f0(void) {
  FTRACE(0x109c81f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c81f0 push edi */
  push32((uint32_t)(EDI));
  /* 109c81f1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 109c81f5 jmp 0x109c8261 */
  jmp_ind(0x109c8261u); return;
}

/* FUN_10008200 @ 0x109c8200 (224 bytes, 84 insns) */
void f_109c8200(void) {
  FTRACE(0x109c8200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8200 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 109c8204 push edi */
  push32((uint32_t)(EDI));
  /* 109c8205 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 109c820b je 0x109c821c */
  if (C.zf) goto L_109c821c;
L_109c820d:;
  /* 109c820d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 109c820f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109c8210 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109c8212 je 0x109c824f */
  if (C.zf) goto L_109c824f;
  /* 109c8214 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 109c821a jne 0x109c820d */
  if (!C.zf) goto L_109c820d;
L_109c821c:;
  /* 109c821c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 109c821e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 109c8223 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8225 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c8228 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109c822a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c822d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 109c8232 je 0x109c821c */
  if (C.zf) goto L_109c821c;
  /* 109c8234 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 109c8237 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109c8239 je 0x109c825e */
  if (C.zf) goto L_109c825e;
  /* 109c823b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 109c823d je 0x109c8259 */
  if (C.zf) goto L_109c8259;
  /* 109c823f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 109c8244 je 0x109c8254 */
  if (C.zf) goto L_109c8254;
  /* 109c8246 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 109c824b je 0x109c824f */
  if (C.zf) goto L_109c824f;
  /* 109c824d jmp 0x109c821c */
  goto L_109c821c;
L_109c824f:;
  /* 109c824f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 109c8252 jmp 0x109c8261 */
  goto L_109c8261;
L_109c8254:;
  /* 109c8254 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 109c8257 jmp 0x109c8261 */
  goto L_109c8261;
L_109c8259:;
  /* 109c8259 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 109c825c jmp 0x109c8261 */
  goto L_109c8261;
L_109c825e:;
  /* 109c825e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_109c8261:;
  /* 109c8261 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 109c8265 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 109c826b je 0x109c8286 */
  if (C.zf) goto L_109c8286;
L_109c826d:;
  /* 109c826d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109c826f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109c8270 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109c8272 je 0x109c82d8 */
  if (C.zf) goto L_109c82d8;
  /* 109c8274 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 109c8276 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109c8277 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 109c827d jne 0x109c826d */
  if (!C.zf) goto L_109c826d;
  /* 109c827f jmp 0x109c8286 */
  goto L_109c8286;
L_109c8281:;
  /* 109c8281 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 109c8283 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109c8286:;
  /* 109c8286 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 109c828b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 109c828d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c828f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c8292 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109c8294 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c8296 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8299 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 109c829e je 0x109c8281 */
  if (C.zf) goto L_109c8281;
  /* 109c82a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109c82a2 je 0x109c82d8 */
  if (C.zf) goto L_109c82d8;
  /* 109c82a4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 109c82a6 je 0x109c82cf */
  if (C.zf) goto L_109c82cf;
  /* 109c82a8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 109c82ae je 0x109c82c2 */
  if (C.zf) goto L_109c82c2;
  /* 109c82b0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 109c82b6 je 0x109c82ba */
  if (C.zf) goto L_109c82ba;
  /* 109c82b8 jmp 0x109c8281 */
  goto L_109c8281;
L_109c82ba:;
  /* 109c82ba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 109c82bc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109c82c0 pop edi */
  EDI = (pop32());
  /* 109c82c1 ret  */
  ESPCHK(0x109c8200u, _esp0);
  ESP += 4; return;
L_109c82c2:;
  /* 109c82c2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 109c82c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109c82c9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 109c82cd pop edi */
  EDI = (pop32());
  /* 109c82ce ret  */
  ESPCHK(0x109c8200u, _esp0);
  ESP += 4; return;
L_109c82cf:;
  /* 109c82cf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 109c82d2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109c82d6 pop edi */
  EDI = (pop32());
  /* 109c82d7 ret  */
  ESPCHK(0x109c8200u, _esp0);
  ESP += 4; return;
L_109c82d8:;
  /* 109c82d8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 109c82da mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109c82de pop edi */
  EDI = (pop32());
  /* 109c82df ret  */
  ESPCHK(0x109c8200u, _esp0);
  ESP += 4; return;
}

/* FUN_100082e0 @ 0x109c82e0 (243 bytes, 91 insns) */
void f_109c82e0(void) {
  FTRACE(0x109c82e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c82e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c82e1 mov ebp, esp */
  EBP = (ESP);
  /* 109c82e3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c82e6 push ebx */
  push32((uint32_t)(EBX));
  /* 109c82e7 push esi */
  push32((uint32_t)(ESI));
  /* 109c82e8 push edi */
  push32((uint32_t)(EDI));
  /* 109c82e9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 109c82ec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_109c82ef:;
  /* 109c82ef cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c82f3 jne 0x109c8313 */
  if (!C.zf) goto L_109c8313;
  /* 109c82f5 push 0x109ed134 */
  push32((uint32_t)(0x109ed134u));
  /* 109c82fa push 0 */
  push32((uint32_t)(0x0u));
  /* 109c82fc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 109c82fe push 0x109ed144 */
  push32((uint32_t)(0x109ed144u));
  /* 109c8303 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c8305 call 0x109c4300 */
  push32(0x109c830au); f_109c4300();
  /* 109c830a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c830d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8310 jne 0x109c8313 */
  if (!C.zf) goto L_109c8313;
  /* 109c8312 int3  */
  x86_unimpl("int3 @ 0x109c8312");
L_109c8313:;
  /* 109c8313 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c8315 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c8317 jne 0x109c82ef */
  if (!C.zf) goto L_109c82ef;
L_109c8319:;
  /* 109c8319 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c831d jne 0x109c833d */
  if (!C.zf) goto L_109c833d;
  /* 109c831f push 0x109ed118 */
  push32((uint32_t)(0x109ed118u));
  /* 109c8324 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c8326 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 109c8328 push 0x109ed144 */
  push32((uint32_t)(0x109ed144u));
  /* 109c832d push 2 */
  push32((uint32_t)(0x2u));
  /* 109c832f call 0x109c4300 */
  push32(0x109c8334u); f_109c4300();
  /* 109c8334 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8337 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c833a jne 0x109c833d */
  if (!C.zf) goto L_109c833d;
  /* 109c833c int3  */
  x86_unimpl("int3 @ 0x109c833c");
L_109c833d:;
  /* 109c833d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c833f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c8341 jne 0x109c8319 */
  if (!C.zf) goto L_109c8319;
  /* 109c8343 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8346 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 109c834d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8350 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8353 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 109c8356 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c835c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 109c835e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8361 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c8364 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 109c8367 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109c836a push ecx */
  push32((uint32_t)(ECX));
  /* 109c836b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c836e push edx */
  push32((uint32_t)(EDX));
  /* 109c836f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8372 push eax */
  push32((uint32_t)(EAX));
  /* 109c8373 call 0x109cc1d0 */
  push32(0x109c8378u); f_109cc1d0();
  /* 109c8378 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c837b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 109c837e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8381 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109c8384 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c8387 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c838a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 109c838d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8390 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8394 jl 0x109c83b8 */
  if ((C.sf!=C.of)) goto L_109c83b8;
  /* 109c8396 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c8399 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c839b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 109c839e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109c83a0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109c83a6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 109c83a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c83ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c83ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c83b1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c83b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109c83b6 jmp 0x109c83c9 */
  goto L_109c83c9;
L_109c83b8:;
  /* 109c83b8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 109c83bb push edx */
  push32((uint32_t)(EDX));
  /* 109c83bc push 0 */
  push32((uint32_t)(0x0u));
  /* 109c83be call 0x109cbf50 */
  push32(0x109c83c3u); f_109cbf50();
  /* 109c83c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c83c6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_109c83c9:;
  /* 109c83c9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 109c83cc pop edi */
  EDI = (pop32());
  /* 109c83cd pop esi */
  ESI = (pop32());
  /* 109c83ce pop ebx */
  EBX = (pop32());
  /* 109c83cf mov esp, ebp */
  ESP = (EBP);
  /* 109c83d1 pop ebp */
  EBP = (pop32());
  /* 109c83d2 ret  */
  ESPCHK(0x109c82e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083e0 @ 0x109c83e0 (47 bytes, 17 insns) */
void f_109c83e0(void) {
  FTRACE(0x109c83e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c83e0 push ecx */
  push32((uint32_t)(ECX));
  /* 109c83e1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c83e6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 109c83ea jb 0x109c8400 */
  if (C.cf) goto L_109c8400;
L_109c83ec:;
  /* 109c83ec sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c83f2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c83f7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 109c83f9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c83fe jae 0x109c83ec */
  if (!C.cf) goto L_109c83ec;
L_109c8400:;
  /* 109c8400 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c8402 mov eax, esp */
  EAX = (ESP);
  /* 109c8404 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 109c8406 mov esp, ecx */
  ESP = (ECX);
  /* 109c8408 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c840a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c840d push eax */
  push32((uint32_t)(EAX));
  /* 109c840e ret  */
  ESPCHK(0x109c83e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008410 @ 0x109c8410 (507 bytes, 151 insns) [1 switch table(s)] */
void f_109c8410(void) {
  FTRACE(0x109c8410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8410 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8411 mov ebp, esp */
  EBP = (ESP);
  /* 109c8413 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c8416 push esi */
  push32((uint32_t)(ESI));
  /* 109c8417 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c841b je 0x109c8423 */
  if (C.zf) goto L_109c8423;
  /* 109c841d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8421 jne 0x109c8428 */
  if (!C.zf) goto L_109c8428;
L_109c8423:;
  /* 109c8423 jmp 0x109c85f8 */
  goto L_109c85f8;
L_109c8428:;
  /* 109c8428 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c842c je 0x109c8444 */
  if (C.zf) goto L_109c8444;
  /* 109c842e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8432 je 0x109c8444 */
  if (C.zf) goto L_109c8444;
  /* 109c8434 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8438 je 0x109c8444 */
  if (C.zf) goto L_109c8444;
  /* 109c843a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c843e jne 0x109c8521 */
  if (!C.zf) goto L_109c8521;
L_109c8444:;
  /* 109c8444 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c8446 call 0x109c8c40 */
  push32(0x109c844bu); f_109c8c40();
  /* 109c844b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c844e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8452 je 0x109c845a */
  if (C.zf) goto L_109c845a;
  /* 109c8454 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8458 jne 0x109c849f */
  if (!C.zf) goto L_109c849f;
L_109c845a:;
  /* 109c845a cmp dword ptr [0x109f17f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f17f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8461 jne 0x109c849f */
  if (!C.zf) goto L_109c849f;
  /* 109c8463 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c8465 push 0x109c8640 */
  push32((uint32_t)(0x109c8640u));
  /* 109c846a call dword ptr [0x109f4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4324))), 0x109c8470u);
  /* 109c8470 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8473 jne 0x109c8481 */
  if (!C.zf) goto L_109c8481;
  /* 109c8475 mov dword ptr [0x109f17f8], 1 */
  w32((uint32_t)(0x109f17f8), (0x1u));
  /* 109c847f jmp 0x109c849f */
  goto L_109c849f;
L_109c8481:;
  /* 109c8481 call dword ptr [0x109f4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4380))), 0x109c8487u);
  /* 109c8487 mov esi, eax */
  ESI = (EAX);
  /* 109c8489 call 0x109cd120 */
  push32(0x109c848eu); f_109cd120();
  /* 109c848e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 109c8490 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c8492 call 0x109c8ce0 */
  push32(0x109c8497u); f_109c8ce0();
  /* 109c8497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c849a jmp 0x109c85f8 */
  goto L_109c85f8;
L_109c849f:;
  /* 109c849f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c84a2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109c84a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c84a8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c84ab mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109c84ae cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c84b2 ja 0x109c8512 */
  if ((!C.cf&&!C.zf)) goto L_109c8512;
  /* 109c84b4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c84b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c84b9 mov dl, byte ptr [eax + 0x109c861f] */
  DL = (r8((uint32_t)(EAX + 0x109c861f)));
  /* 109c84bf jmp dword ptr [edx*4 + 0x109c860b] */
  switch (EDX) {
    case 0: goto L_109c84c6;
    case 1: goto L_109c8500;
    case 2: goto L_109c84da;
    case 3: goto L_109c84ed;
    case 4: goto L_109c8512;
    default: x86_unimpl("switch@0x109c84bf out of table"); return;
  }
L_109c84c6:;
  /* 109c84c6 mov ecx, dword ptr [0x109f17e8] */
  ECX = (r32((uint32_t)(0x109f17e8)));
  /* 109c84cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109c84cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c84d2 mov dword ptr [0x109f17e8], edx */
  w32((uint32_t)(0x109f17e8), (EDX));
  /* 109c84d8 jmp 0x109c8512 */
  goto L_109c8512;
L_109c84da:;
  /* 109c84da mov eax, dword ptr [0x109f17ec] */
  EAX = (r32((uint32_t)(0x109f17ec)));
  /* 109c84df mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c84e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c84e5 mov dword ptr [0x109f17ec], ecx */
  w32((uint32_t)(0x109f17ec), (ECX));
  /* 109c84eb jmp 0x109c8512 */
  goto L_109c8512;
L_109c84ed:;
  /* 109c84ed mov edx, dword ptr [0x109f17f0] */
  EDX = (r32((uint32_t)(0x109f17f0)));
  /* 109c84f3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109c84f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c84f9 mov dword ptr [0x109f17f0], eax */
  w32((uint32_t)(0x109f17f0), (EAX));
  /* 109c84fe jmp 0x109c8512 */
  goto L_109c8512;
L_109c8500:;
  /* 109c8500 mov ecx, dword ptr [0x109f17f4] */
  ECX = (r32((uint32_t)(0x109f17f4)));
  /* 109c8506 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109c8509 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c850c mov dword ptr [0x109f17f4], edx */
  w32((uint32_t)(0x109f17f4), (EDX));
L_109c8512:;
  /* 109c8512 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c8514 call 0x109c8ce0 */
  push32(0x109c8519u); f_109c8ce0();
  /* 109c8519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c851c jmp 0x109c85f3 */
  goto L_109c85f3;
L_109c8521:;
  /* 109c8521 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8525 je 0x109c8538 */
  if (C.zf) goto L_109c8538;
  /* 109c8527 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c852b je 0x109c8538 */
  if (C.zf) goto L_109c8538;
  /* 109c852d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8531 je 0x109c8538 */
  if (C.zf) goto L_109c8538;
  /* 109c8533 jmp 0x109c85f8 */
  goto L_109c85f8;
L_109c8538:;
  /* 109c8538 call 0x109c4c80 */
  push32(0x109c853du); f_109c4c80();
  /* 109c853d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c8540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8543 cmp dword ptr [eax + 0x50], 0x109efc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x109efc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c854a jne 0x109c8595 */
  if (!C.zf) goto L_109c8595;
  /* 109c854c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 109c8551 push 0x109ed150 */
  push32((uint32_t)(0x109ed150u));
  /* 109c8556 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c8558 mov ecx, dword ptr [0x109efc80] */
  ECX = (r32((uint32_t)(0x109efc80)));
  /* 109c855e push ecx */
  push32((uint32_t)(ECX));
  /* 109c855f call 0x109c5240 */
  push32(0x109c8564u); f_109c5240();
  /* 109c8564 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8567 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c856a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 109c856d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8570 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8574 je 0x109c8593 */
  if (C.zf) goto L_109c8593;
  /* 109c8576 mov ecx, dword ptr [0x109efc80] */
  ECX = (r32((uint32_t)(0x109efc80)));
  /* 109c857c push ecx */
  push32((uint32_t)(ECX));
  /* 109c857d push 0x109efc00 */
  push32((uint32_t)(0x109efc00u));
  /* 109c8582 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8585 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 109c8588 push eax */
  push32((uint32_t)(EAX));
  /* 109c8589 call 0x109cbb20 */
  push32(0x109c858eu); f_109cbb20();
  /* 109c858e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8591 jmp 0x109c8595 */
  goto L_109c8595;
L_109c8593:;
  /* 109c8593 jmp 0x109c85f8 */
  goto L_109c85f8;
L_109c8595:;
  /* 109c8595 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8598 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 109c859b push edx */
  push32((uint32_t)(EDX));
  /* 109c859c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c859f push eax */
  push32((uint32_t)(EAX));
  /* 109c85a0 call 0x109c8920 */
  push32(0x109c85a5u); f_109c8920();
  /* 109c85a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c85a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c85ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c85af jne 0x109c85b3 */
  if (!C.zf) goto L_109c85b3;
  /* 109c85b1 jmp 0x109c85f8 */
  goto L_109c85f8;
L_109c85b3:;
  /* 109c85b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c85b6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109c85b9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_109c85bc:;
  /* 109c85bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c85bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c85c2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c85c5 jne 0x109c85f3 */
  if (!C.zf) goto L_109c85f3;
  /* 109c85c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c85ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c85cd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 109c85d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c85d3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c85d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109c85d9 mov edx, dword ptr [0x109efc84] */
  EDX = (r32((uint32_t)(0x109efc84)));
  /* 109c85df imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c85e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c85e5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 109c85e8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c85ea cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c85ed jb 0x109c85f1 */
  if (C.cf) goto L_109c85f1;
  /* 109c85ef jmp 0x109c85f3 */
  goto L_109c85f3;
L_109c85f1:;
  /* 109c85f1 jmp 0x109c85bc */
  goto L_109c85bc;
L_109c85f3:;
  /* 109c85f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c85f6 jmp 0x109c8606 */
  goto L_109c8606;
L_109c85f8:;
  /* 109c85f8 call 0x109cd110 */
  push32(0x109c85fdu); f_109cd110();
  /* 109c85fd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 109c8603 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_109c8606:;
  /* 109c8606 pop esi */
  ESI = (pop32());
  /* 109c8607 mov esp, ebp */
  ESP = (EBP);
  /* 109c8609 pop ebp */
  EBP = (pop32());
  /* 109c860a ret  */
  ESPCHK(0x109c8410u, _esp0);
  ESP += 4; return;
}

/* FUN_10008640 @ 0x109c8640 (146 bytes, 45 insns) */
void f_109c8640(void) {
  FTRACE(0x109c8640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8640 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8641 mov ebp, esp */
  EBP = (ESP);
  /* 109c8643 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c8646 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c8648 call 0x109c8c40 */
  push32(0x109c864du); f_109c8c40();
  /* 109c864d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8650 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8654 jne 0x109c866e */
  if (!C.zf) goto L_109c866e;
  /* 109c8656 mov dword ptr [ebp - 8], 0x109f17e8 */
  w32((uint32_t)(EBP + -0x8), (0x109f17e8u));
  /* 109c865d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8660 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109c8662 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109c8665 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 109c866c jmp 0x109c8684 */
  goto L_109c8684;
L_109c866e:;
  /* 109c866e mov dword ptr [ebp - 8], 0x109f17ec */
  w32((uint32_t)(EBP + -0x8), (0x109f17ecu));
  /* 109c8675 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8678 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c867a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c867d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_109c8684:;
  /* 109c8684 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8688 jne 0x109c8698 */
  if (!C.zf) goto L_109c8698;
  /* 109c868a push 1 */
  push32((uint32_t)(0x1u));
  /* 109c868c call 0x109c8ce0 */
  push32(0x109c8691u); f_109c8ce0();
  /* 109c8691 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c8696 jmp 0x109c86cc */
  goto L_109c86cc;
L_109c8698:;
  /* 109c8698 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c869c je 0x109c86bd */
  if (C.zf) goto L_109c86bd;
  /* 109c869e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c86a1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 109c86a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c86a9 call 0x109c8ce0 */
  push32(0x109c86aeu); f_109c8ce0();
  /* 109c86ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c86b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c86b4 push edx */
  push32((uint32_t)(EDX));
  /* 109c86b5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x109c86b8u);
  /* 109c86b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c86bb jmp 0x109c86c7 */
  goto L_109c86c7;
L_109c86bd:;
  /* 109c86bd push 1 */
  push32((uint32_t)(0x1u));
  /* 109c86bf call 0x109c8ce0 */
  push32(0x109c86c4u); f_109c8ce0();
  /* 109c86c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c86c7:;
  /* 109c86c7 mov eax, 1 */
  EAX = (0x1u);
L_109c86cc:;
  /* 109c86cc mov esp, ebp */
  ESP = (EBP);
  /* 109c86ce pop ebp */
  EBP = (pop32());
  /* 109c86cf ret 4 */
  ESPCHK(0x109c8640u, _esp0);
  ESP += 8; return;
}

/* FUN_100086e0 @ 0x109c86e0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_109c86e0(void) {
  FTRACE(0x109c86e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c86e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c86e1 mov ebp, esp */
  EBP = (ESP);
  /* 109c86e3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c86e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 109c86ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c86f0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109c86f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c86f6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c86f9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 109c86fc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8700 ja 0x109c87ae */
  if ((!C.cf&&!C.zf)) goto L_109c87ae;
  /* 109c8706 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 109c8709 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c870b mov dl, byte ptr [eax + 0x109c8902] */
  DL = (r8((uint32_t)(EAX + 0x109c8902)));
  /* 109c8711 jmp dword ptr [edx*4 + 0x109c88ea] */
  switch (EDX) {
    case 0: goto L_109c8718;
    case 1: goto L_109c8783;
    case 2: goto L_109c8769;
    case 3: goto L_109c8735;
    case 4: goto L_109c874f;
    case 5: goto L_109c87ae;
    default: x86_unimpl("switch@0x109c8711 out of table"); return;
  }
L_109c8718:;
  /* 109c8718 mov dword ptr [ebp - 0x18], 0x109f17e8 */
  w32((uint32_t)(EBP + -0x18), (0x109f17e8u));
  /* 109c871f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c8722 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c8724 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109c8727 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c872a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c872d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c8730 jmp 0x109c87b6 */
  goto L_109c87b6;
L_109c8735:;
  /* 109c8735 mov dword ptr [ebp - 0x18], 0x109f17ec */
  w32((uint32_t)(EBP + -0x18), (0x109f17ecu));
  /* 109c873c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c873f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c8741 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109c8744 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c8747 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c874a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c874d jmp 0x109c87b6 */
  goto L_109c87b6;
L_109c874f:;
  /* 109c874f mov dword ptr [ebp - 0x18], 0x109f17f0 */
  w32((uint32_t)(EBP + -0x18), (0x109f17f0u));
  /* 109c8756 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c8759 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c875b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109c875e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c8761 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8764 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c8767 jmp 0x109c87b6 */
  goto L_109c87b6;
L_109c8769:;
  /* 109c8769 mov dword ptr [ebp - 0x18], 0x109f17f4 */
  w32((uint32_t)(EBP + -0x18), (0x109f17f4u));
  /* 109c8770 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c8773 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c8775 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109c8778 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c877b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c877e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109c8781 jmp 0x109c87b6 */
  goto L_109c87b6;
L_109c8783:;
  /* 109c8783 call 0x109c4c80 */
  push32(0x109c8788u); f_109c4c80();
  /* 109c8788 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c878b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c878e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 109c8791 push edx */
  push32((uint32_t)(EDX));
  /* 109c8792 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8795 push eax */
  push32((uint32_t)(EAX));
  /* 109c8796 call 0x109c8920 */
  push32(0x109c879bu); f_109c8920();
  /* 109c879b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c879e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c87a1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109c87a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c87a7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c87a9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109c87ac jmp 0x109c87b6 */
  goto L_109c87b6;
L_109c87ae:;
  /* 109c87ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c87b1 jmp 0x109c88e6 */
  goto L_109c88e6;
L_109c87b6:;
  /* 109c87b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c87ba je 0x109c87c6 */
  if (C.zf) goto L_109c87c6;
  /* 109c87bc push 1 */
  push32((uint32_t)(0x1u));
  /* 109c87be call 0x109c8c40 */
  push32(0x109c87c3u); f_109c8c40();
  /* 109c87c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c87c6:;
  /* 109c87c6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c87ca jne 0x109c87e3 */
  if (!C.zf) goto L_109c87e3;
  /* 109c87cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c87d0 je 0x109c87dc */
  if (C.zf) goto L_109c87dc;
  /* 109c87d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109c87d4 call 0x109c8ce0 */
  push32(0x109c87d9u); f_109c8ce0();
  /* 109c87d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c87dc:;
  /* 109c87dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c87de jmp 0x109c88e6 */
  goto L_109c88e6;
L_109c87e3:;
  /* 109c87e3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c87e7 jne 0x109c8800 */
  if (!C.zf) goto L_109c8800;
  /* 109c87e9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c87ed je 0x109c87f9 */
  if (C.zf) goto L_109c87f9;
  /* 109c87ef push 1 */
  push32((uint32_t)(0x1u));
  /* 109c87f1 call 0x109c8ce0 */
  push32(0x109c87f6u); f_109c8ce0();
  /* 109c87f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c87f9:;
  /* 109c87f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 109c87fb call 0x109c4a00 */
  push32(0x109c8800u); f_109c4a00();
L_109c8800:;
  /* 109c8800 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8804 je 0x109c8812 */
  if (C.zf) goto L_109c8812;
  /* 109c8806 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c880a je 0x109c8812 */
  if (C.zf) goto L_109c8812;
  /* 109c880c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8810 jne 0x109c883e */
  if (!C.zf) goto L_109c883e;
L_109c8812:;
  /* 109c8812 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8815 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 109c8818 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109c881b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c881e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 109c8825 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8829 jne 0x109c883e */
  if (!C.zf) goto L_109c883e;
  /* 109c882b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c882e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 109c8831 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109c8834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8837 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_109c883e:;
  /* 109c883e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8842 jne 0x109c8880 */
  if (!C.zf) goto L_109c8880;
  /* 109c8844 mov eax, dword ptr [0x109efc78] */
  EAX = (r32((uint32_t)(0x109efc78)));
  /* 109c8849 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109c884c jmp 0x109c8857 */
  goto L_109c8857;
L_109c884e:;
  /* 109c884e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8851 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8854 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_109c8857:;
  /* 109c8857 mov edx, dword ptr [0x109efc78] */
  EDX = (r32((uint32_t)(0x109efc78)));
  /* 109c885d add edx, dword ptr [0x109efc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109efc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8863 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8866 jge 0x109c887e */
  if ((C.sf==C.of)) goto L_109c887e;
  /* 109c8868 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c886b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c886e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8871 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 109c8874 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 109c887c jmp 0x109c884e */
  goto L_109c884e;
L_109c887e:;
  /* 109c887e jmp 0x109c8889 */
  goto L_109c8889;
L_109c8880:;
  /* 109c8880 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c8883 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_109c8889:;
  /* 109c8889 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c888d je 0x109c8899 */
  if (C.zf) goto L_109c8899;
  /* 109c888f push 1 */
  push32((uint32_t)(0x1u));
  /* 109c8891 call 0x109c8ce0 */
  push32(0x109c8896u); f_109c8ce0();
  /* 109c8896 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c8899:;
  /* 109c8899 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c889d jne 0x109c88b0 */
  if (!C.zf) goto L_109c88b0;
  /* 109c889f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c88a2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 109c88a5 push edx */
  push32((uint32_t)(EDX));
  /* 109c88a6 push 8 */
  push32((uint32_t)(0x8u));
  /* 109c88a8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x109c88abu);
  /* 109c88ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c88ae jmp 0x109c88ba */
  goto L_109c88ba;
L_109c88b0:;
  /* 109c88b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c88b3 push eax */
  push32((uint32_t)(EAX));
  /* 109c88b4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x109c88b7u);
  /* 109c88b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c88ba:;
  /* 109c88ba cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c88be je 0x109c88cc */
  if (C.zf) goto L_109c88cc;
  /* 109c88c0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c88c4 je 0x109c88cc */
  if (C.zf) goto L_109c88cc;
  /* 109c88c6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c88ca jne 0x109c88e4 */
  if (!C.zf) goto L_109c88e4;
L_109c88cc:;
  /* 109c88cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c88cf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c88d2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 109c88d5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c88d9 jne 0x109c88e4 */
  if (!C.zf) goto L_109c88e4;
  /* 109c88db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c88de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c88e1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_109c88e4:;
  /* 109c88e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109c88e6:;
  /* 109c88e6 mov esp, ebp */
  ESP = (EBP);
  /* 109c88e8 pop ebp */
  EBP = (pop32());
  /* 109c88e9 ret  */
  ESPCHK(0x109c86e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008920 @ 0x109c8920 (91 bytes, 35 insns) */
void f_109c8920(void) {
  FTRACE(0x109c8920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8920 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8921 mov ebp, esp */
  EBP = (ESP);
  /* 109c8923 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8924 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c8927 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c892a:;
  /* 109c892a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c892d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109c8930 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8933 je 0x109c8953 */
  if (C.zf) goto L_109c8953;
  /* 109c8935 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8938 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c893b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c893e mov ecx, dword ptr [0x109efc84] */
  ECX = (r32((uint32_t)(0x109efc84)));
  /* 109c8944 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c8947 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c894a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c894c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c894f jae 0x109c8953 */
  if (!C.cf) goto L_109c8953;
  /* 109c8951 jmp 0x109c892a */
  goto L_109c892a;
L_109c8953:;
  /* 109c8953 mov eax, dword ptr [0x109efc84] */
  EAX = (r32((uint32_t)(0x109efc84)));
  /* 109c8958 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c895b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c895e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8960 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8963 jae 0x109c8975 */
  if (!C.cf) goto L_109c8975;
  /* 109c8965 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8968 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109c896b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c896e jne 0x109c8975 */
  if (!C.zf) goto L_109c8975;
  /* 109c8970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8973 jmp 0x109c8977 */
  goto L_109c8977;
L_109c8975:;
  /* 109c8975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109c8977:;
  /* 109c8977 mov esp, ebp */
  ESP = (EBP);
  /* 109c8979 pop ebp */
  EBP = (pop32());
  /* 109c897a ret  */
  ESPCHK(0x109c8920u, _esp0);
  ESP += 4; return;
}

/* FUN_10008980 @ 0x109c8980 (13 bytes, 6 insns) */
void f_109c8980(void) {
  FTRACE(0x109c8980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8980 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8981 mov ebp, esp */
  EBP = (ESP);
  /* 109c8983 call 0x109c4c80 */
  push32(0x109c8988u); f_109c4c80();
  /* 109c8988 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c898b pop ebp */
  EBP = (pop32());
  /* 109c898c ret  */
  ESPCHK(0x109c8980u, _esp0);
  ESP += 4; return;
}

/* FUN_10008990 @ 0x109c8990 (13 bytes, 6 insns) */
void f_109c8990(void) {
  FTRACE(0x109c8990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8990 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8991 mov ebp, esp */
  EBP = (ESP);
  /* 109c8993 call 0x109c4c80 */
  push32(0x109c8998u); f_109c4c80();
  /* 109c8998 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c899b pop ebp */
  EBP = (pop32());
  /* 109c899c ret  */
  ESPCHK(0x109c8990u, _esp0);
  ESP += 4; return;
}

/* FUN_100089a0 @ 0x109c89a0 (187 bytes, 54 insns) */
void f_109c89a0(void) {
  FTRACE(0x109c89a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c89a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c89a1 mov ebp, esp */
  EBP = (ESP);
  /* 109c89a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c89a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109c89ad cmp dword ptr [0x109f17fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f17fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c89b4 jne 0x109c8a13 */
  if (!C.zf) goto L_109c8a13;
  /* 109c89b6 push 0x109ec57c */
  push32((uint32_t)(0x109ec57cu));
  /* 109c89bb call dword ptr [0x109f4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4350))), 0x109c89c1u);
  /* 109c89c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c89c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c89c8 je 0x109c89e7 */
  if (C.zf) goto L_109c89e7;
  /* 109c89ca push 0x109ed180 */
  push32((uint32_t)(0x109ed180u));
  /* 109c89cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c89d2 push eax */
  push32((uint32_t)(EAX));
  /* 109c89d3 call dword ptr [0x109f434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f434c))), 0x109c89d9u);
  /* 109c89d9 mov dword ptr [0x109f17fc], eax */
  w32((uint32_t)(0x109f17fc), (EAX));
  /* 109c89de cmp dword ptr [0x109f17fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f17fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c89e5 jne 0x109c89eb */
  if (!C.zf) goto L_109c89eb;
L_109c89e7:;
  /* 109c89e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c89e9 jmp 0x109c8a57 */
  goto L_109c8a57;
L_109c89eb:;
  /* 109c89eb push 0x109ed170 */
  push32((uint32_t)(0x109ed170u));
  /* 109c89f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c89f3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c89f4 call dword ptr [0x109f434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f434c))), 0x109c89fau);
  /* 109c89fa mov dword ptr [0x109f1800], eax */
  w32((uint32_t)(0x109f1800), (EAX));
  /* 109c89ff push 0x109ed15c */
  push32((uint32_t)(0x109ed15cu));
  /* 109c8a04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8a07 push edx */
  push32((uint32_t)(EDX));
  /* 109c8a08 call dword ptr [0x109f434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f434c))), 0x109c8a0eu);
  /* 109c8a0e mov dword ptr [0x109f1804], eax */
  w32((uint32_t)(0x109f1804), (EAX));
L_109c8a13:;
  /* 109c8a13 cmp dword ptr [0x109f1800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8a1a je 0x109c8a25 */
  if (C.zf) goto L_109c8a25;
  /* 109c8a1c call dword ptr [0x109f1800] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f1800))), 0x109c8a22u);
  /* 109c8a22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c8a25:;
  /* 109c8a25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8a29 je 0x109c8a41 */
  if (C.zf) goto L_109c8a41;
  /* 109c8a2b cmp dword ptr [0x109f1804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109f1804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8a32 je 0x109c8a41 */
  if (C.zf) goto L_109c8a41;
  /* 109c8a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8a37 push eax */
  push32((uint32_t)(EAX));
  /* 109c8a38 call dword ptr [0x109f1804] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f1804))), 0x109c8a3eu);
  /* 109c8a3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c8a41:;
  /* 109c8a41 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109c8a44 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8a45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c8a48 push edx */
  push32((uint32_t)(EDX));
  /* 109c8a49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8a4c push eax */
  push32((uint32_t)(EAX));
  /* 109c8a4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8a50 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8a51 call dword ptr [0x109f17fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f17fc))), 0x109c8a57u);
L_109c8a57:;
  /* 109c8a57 mov esp, ebp */
  ESP = (EBP);
  /* 109c8a59 pop ebp */
  EBP = (pop32());
  /* 109c8a5a ret  */
  ESPCHK(0x109c89a0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x109c8a60 (254 bytes, 109 insns) */
void f_109c8a60(void) {
  FTRACE(0x109c8a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8a60 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 109c8a64 push edi */
  push32((uint32_t)(EDI));
  /* 109c8a65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109c8a67 je 0x109c8ae3 */
  if (C.zf) goto L_109c8ae3;
  /* 109c8a69 push esi */
  push32((uint32_t)(ESI));
  /* 109c8a6a push ebx */
  push32((uint32_t)(EBX));
  /* 109c8a6b mov ebx, ecx */
  EBX = (ECX);
  /* 109c8a6d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 109c8a71 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 109c8a77 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 109c8a7b jne 0x109c8a84 */
  if (!C.zf) goto L_109c8a84;
  /* 109c8a7d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109c8a80 jne 0x109c8af1 */
  if (!C.zf) goto L_109c8af1;
  /* 109c8a82 jmp 0x109c8aa5 */
  goto L_109c8aa5;
L_109c8a84:;
  /* 109c8a84 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109c8a86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109c8a87 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109c8a89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109c8a8a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109c8a8b je 0x109c8ab2 */
  if (C.zf) goto L_109c8ab2;
  /* 109c8a8d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109c8a8f je 0x109c8aba */
  if (C.zf) goto L_109c8aba;
  /* 109c8a91 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 109c8a97 jne 0x109c8a84 */
  if (!C.zf) goto L_109c8a84;
  /* 109c8a99 mov ebx, ecx */
  EBX = (ECX);
  /* 109c8a9b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109c8a9e jne 0x109c8af1 */
  if (!C.zf) goto L_109c8af1;
L_109c8aa0:;
  /* 109c8aa0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 109c8aa3 je 0x109c8ab2 */
  if (C.zf) goto L_109c8ab2;
L_109c8aa5:;
  /* 109c8aa5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109c8aa7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109c8aa8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109c8aaa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109c8aab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109c8aad je 0x109c8ade */
  if (C.zf) goto L_109c8ade;
  /* 109c8aaf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 109c8ab0 jne 0x109c8aa5 */
  if (!C.zf) goto L_109c8aa5;
L_109c8ab2:;
  /* 109c8ab2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 109c8ab6 pop ebx */
  EBX = (pop32());
  /* 109c8ab7 pop esi */
  ESI = (pop32());
  /* 109c8ab8 pop edi */
  EDI = (pop32());
  /* 109c8ab9 ret  */
  ESPCHK(0x109c8a60u, _esp0);
  ESP += 4; return;
L_109c8aba:;
  /* 109c8aba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109c8ac0 je 0x109c8ad4 */
  if (C.zf) goto L_109c8ad4;
L_109c8ac2:;
  /* 109c8ac2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109c8ac4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109c8ac5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109c8ac6 je 0x109c8b56 */
  if (C.zf) goto L_109c8b56;
  /* 109c8acc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109c8ad2 jne 0x109c8ac2 */
  if (!C.zf) goto L_109c8ac2;
L_109c8ad4:;
  /* 109c8ad4 mov ebx, ecx */
  EBX = (ECX);
  /* 109c8ad6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109c8ad9 jne 0x109c8b47 */
  if (!C.zf) goto L_109c8b47;
L_109c8adb:;
  /* 109c8adb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109c8add inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_109c8ade:;
  /* 109c8ade dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 109c8adf jne 0x109c8adb */
  if (!C.zf) goto L_109c8adb;
  /* 109c8ae1 pop ebx */
  EBX = (pop32());
  /* 109c8ae2 pop esi */
  ESI = (pop32());
L_109c8ae3:;
  /* 109c8ae3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109c8ae7 pop edi */
  EDI = (pop32());
  /* 109c8ae8 ret  */
  ESPCHK(0x109c8a60u, _esp0);
  ESP += 4; return;
L_109c8ae9:;
  /* 109c8ae9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 109c8aeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8aee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109c8aef je 0x109c8aa0 */
  if (C.zf) goto L_109c8aa0;
L_109c8af1:;
  /* 109c8af1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 109c8af6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 109c8af8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8afa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c8afd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109c8aff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 109c8b01 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8b04 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 109c8b09 je 0x109c8ae9 */
  if (C.zf) goto L_109c8ae9;
  /* 109c8b0b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109c8b0d je 0x109c8b3b */
  if (C.zf) goto L_109c8b3b;
  /* 109c8b0f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 109c8b11 je 0x109c8b31 */
  if (C.zf) goto L_109c8b31;
  /* 109c8b13 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 109c8b19 je 0x109c8b27 */
  if (C.zf) goto L_109c8b27;
  /* 109c8b1b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 109c8b21 jne 0x109c8ae9 */
  if (!C.zf) goto L_109c8ae9;
  /* 109c8b23 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 109c8b25 jmp 0x109c8b3f */
  goto L_109c8b3f;
L_109c8b27:;
  /* 109c8b27 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c8b2d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 109c8b2f jmp 0x109c8b3f */
  goto L_109c8b3f;
L_109c8b31:;
  /* 109c8b31 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109c8b37 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 109c8b39 jmp 0x109c8b3f */
  goto L_109c8b3f;
L_109c8b3b:;
  /* 109c8b3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109c8b3d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_109c8b3f:;
  /* 109c8b3f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8b42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c8b44 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109c8b45 je 0x109c8b51 */
  if (C.zf) goto L_109c8b51;
L_109c8b47:;
  /* 109c8b47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109c8b49:;
  /* 109c8b49 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 109c8b4b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8b4e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109c8b4f jne 0x109c8b49 */
  if (!C.zf) goto L_109c8b49;
L_109c8b51:;
  /* 109c8b51 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 109c8b54 jne 0x109c8adb */
  if (!C.zf) goto L_109c8adb;
L_109c8b56:;
  /* 109c8b56 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 109c8b5a pop ebx */
  EBX = (pop32());
  /* 109c8b5b pop esi */
  ESI = (pop32());
  /* 109c8b5c pop edi */
  EDI = (pop32());
  /* 109c8b5d ret  */
  ESPCHK(0x109c8a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b60 @ 0x109c8b60 (55 bytes, 16 insns) */
void f_109c8b60(void) {
  FTRACE(0x109c8b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8b60 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8b61 mov ebp, esp */
  EBP = (ESP);
  /* 109c8b63 mov eax, dword ptr [0x109efb84] */
  EAX = (r32((uint32_t)(0x109efb84)));
  /* 109c8b68 push eax */
  push32((uint32_t)(EAX));
  /* 109c8b69 call dword ptr [0x109f432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f432c))), 0x109c8b6fu);
  /* 109c8b6f mov ecx, dword ptr [0x109efb74] */
  ECX = (r32((uint32_t)(0x109efb74)));
  /* 109c8b75 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8b76 call dword ptr [0x109f432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f432c))), 0x109c8b7cu);
  /* 109c8b7c mov edx, dword ptr [0x109efb64] */
  EDX = (r32((uint32_t)(0x109efb64)));
  /* 109c8b82 push edx */
  push32((uint32_t)(EDX));
  /* 109c8b83 call dword ptr [0x109f432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f432c))), 0x109c8b89u);
  /* 109c8b89 mov eax, dword ptr [0x109efb44] */
  EAX = (r32((uint32_t)(0x109efb44)));
  /* 109c8b8e push eax */
  push32((uint32_t)(EAX));
  /* 109c8b8f call dword ptr [0x109f432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f432c))), 0x109c8b95u);
  /* 109c8b95 pop ebp */
  EBP = (pop32());
  /* 109c8b96 ret  */
  ESPCHK(0x109c8b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ba0 @ 0x109c8ba0 (159 bytes, 47 insns) */
void f_109c8ba0(void) {
  FTRACE(0x109c8ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8ba1 mov ebp, esp */
  EBP = (ESP);
  /* 109c8ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8ba4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109c8bab jmp 0x109c8bb6 */
  goto L_109c8bb6;
L_109c8bad:;
  /* 109c8bad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8bb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8bb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c8bb6:;
  /* 109c8bb6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8bba jge 0x109c8c09 */
  if ((C.sf==C.of)) goto L_109c8c09;
  /* 109c8bbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8bbf cmp dword ptr [ecx*4 + 0x109efb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x109efb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8bc7 je 0x109c8c07 */
  if (C.zf) goto L_109c8c07;
  /* 109c8bc9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8bcd je 0x109c8c07 */
  if (C.zf) goto L_109c8c07;
  /* 109c8bcf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8bd3 je 0x109c8c07 */
  if (C.zf) goto L_109c8c07;
  /* 109c8bd5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8bd9 je 0x109c8c07 */
  if (C.zf) goto L_109c8c07;
  /* 109c8bdb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8bdf je 0x109c8c07 */
  if (C.zf) goto L_109c8c07;
  /* 109c8be1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8be4 mov eax, dword ptr [edx*4 + 0x109efb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109efb40)));
  /* 109c8beb push eax */
  push32((uint32_t)(EAX));
  /* 109c8bec call dword ptr [0x109f4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4394))), 0x109c8bf2u);
  /* 109c8bf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109c8bf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8bf7 mov edx, dword ptr [ecx*4 + 0x109efb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109efb40)));
  /* 109c8bfe push edx */
  push32((uint32_t)(EDX));
  /* 109c8bff call 0x109c5cd0 */
  push32(0x109c8c04u); f_109c5cd0();
  /* 109c8c04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c8c07:;
  /* 109c8c07 jmp 0x109c8bad */
  goto L_109c8bad;
L_109c8c09:;
  /* 109c8c09 mov eax, dword ptr [0x109efb64] */
  EAX = (r32((uint32_t)(0x109efb64)));
  /* 109c8c0e push eax */
  push32((uint32_t)(EAX));
  /* 109c8c0f call dword ptr [0x109f4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4394))), 0x109c8c15u);
  /* 109c8c15 mov ecx, dword ptr [0x109efb74] */
  ECX = (r32((uint32_t)(0x109efb74)));
  /* 109c8c1b push ecx */
  push32((uint32_t)(ECX));
  /* 109c8c1c call dword ptr [0x109f4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4394))), 0x109c8c22u);
  /* 109c8c22 mov edx, dword ptr [0x109efb84] */
  EDX = (r32((uint32_t)(0x109efb84)));
  /* 109c8c28 push edx */
  push32((uint32_t)(EDX));
  /* 109c8c29 call dword ptr [0x109f4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4394))), 0x109c8c2fu);
  /* 109c8c2f mov eax, dword ptr [0x109efb44] */
  EAX = (r32((uint32_t)(0x109efb44)));
  /* 109c8c34 push eax */
  push32((uint32_t)(EAX));
  /* 109c8c35 call dword ptr [0x109f4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4394))), 0x109c8c3bu);
  /* 109c8c3b mov esp, ebp */
  ESP = (EBP);
  /* 109c8c3d pop ebp */
  EBP = (pop32());
  /* 109c8c3e ret  */
  ESPCHK(0x109c8ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c40 @ 0x109c8c40 (151 bytes, 46 insns) */
void f_109c8c40(void) {
  FTRACE(0x109c8c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8c40 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8c41 mov ebp, esp */
  EBP = (ESP);
  /* 109c8c43 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8c47 cmp dword ptr [eax*4 + 0x109efb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x109efb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8c4f jne 0x109c8cc2 */
  if (!C.zf) goto L_109c8cc2;
  /* 109c8c51 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109c8c56 push 0x109ed18c */
  push32((uint32_t)(0x109ed18cu));
  /* 109c8c5b push 2 */
  push32((uint32_t)(0x2u));
  /* 109c8c5d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 109c8c5f call 0x109c5240 */
  push32(0x109c8c64u); f_109c5240();
  /* 109c8c64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8c67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c8c6a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8c6e jne 0x109c8c7a */
  if (!C.zf) goto L_109c8c7a;
  /* 109c8c70 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109c8c72 call 0x109c41b0 */
  push32(0x109c8c77u); f_109c41b0();
  /* 109c8c77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c8c7a:;
  /* 109c8c7a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109c8c7c call 0x109c8c40 */
  push32(0x109c8c81u); f_109c8c40();
  /* 109c8c81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8c84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8c87 cmp dword ptr [ecx*4 + 0x109efb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x109efb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8c8f jne 0x109c8caa */
  if (!C.zf) goto L_109c8caa;
  /* 109c8c91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8c94 push edx */
  push32((uint32_t)(EDX));
  /* 109c8c95 call dword ptr [0x109f432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f432c))), 0x109c8c9bu);
  /* 109c8c9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8c9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8ca1 mov dword ptr [eax*4 + 0x109efb40], ecx */
  w32((uint32_t)(EAX*4 + 0x109efb40), (ECX));
  /* 109c8ca8 jmp 0x109c8cb8 */
  goto L_109c8cb8;
L_109c8caa:;
  /* 109c8caa push 2 */
  push32((uint32_t)(0x2u));
  /* 109c8cac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8caf push edx */
  push32((uint32_t)(EDX));
  /* 109c8cb0 call 0x109c5cd0 */
  push32(0x109c8cb5u); f_109c5cd0();
  /* 109c8cb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c8cb8:;
  /* 109c8cb8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109c8cba call 0x109c8ce0 */
  push32(0x109c8cbfu); f_109c8ce0();
  /* 109c8cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c8cc2:;
  /* 109c8cc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8cc5 mov ecx, dword ptr [eax*4 + 0x109efb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109efb40)));
  /* 109c8ccc push ecx */
  push32((uint32_t)(ECX));
  /* 109c8ccd call dword ptr [0x109f431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f431c))), 0x109c8cd3u);
  /* 109c8cd3 mov esp, ebp */
  ESP = (EBP);
  /* 109c8cd5 pop ebp */
  EBP = (pop32());
  /* 109c8cd6 ret  */
  ESPCHK(0x109c8c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ce0 @ 0x109c8ce0 (22 bytes, 8 insns) */
void f_109c8ce0(void) {
  FTRACE(0x109c8ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8ce1 mov ebp, esp */
  EBP = (ESP);
  /* 109c8ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8ce6 mov ecx, dword ptr [eax*4 + 0x109efb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109efb40)));
  /* 109c8ced push ecx */
  push32((uint32_t)(ECX));
  /* 109c8cee call dword ptr [0x109f4318] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4318))), 0x109c8cf4u);
  /* 109c8cf4 pop ebp */
  EBP = (pop32());
  /* 109c8cf5 ret  */
  ESPCHK(0x109c8ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d00 @ 0x109c8d00 (26 bytes, 10 insns) */
void f_109c8d00(void) {
  FTRACE(0x109c8d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8d00 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8d01 mov ebp, esp */
  EBP = (ESP);
  /* 109c8d03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8d06 push eax */
  push32((uint32_t)(EAX));
  /* 109c8d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 109c8d09 call dword ptr [0x109f4320] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4320))), 0x109c8d0fu);
  /* 109c8d0f push 0xff */
  push32((uint32_t)(0xffu));
  /* 109c8d14 call dword ptr [0x109f435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f435c))), 0x109c8d1au);
  /* 109c8d1a pop ebp */
  EBP = (pop32());
  /* 109c8d1b ret  */
  ESPCHK(0x109c8d00u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x109c8d20 (446 bytes, 130 insns) */
void f_109c8d20(void) {
  FTRACE(0x109c8d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8d20 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8d21 mov ebp, esp */
  EBP = (ESP);
  /* 109c8d23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c8d26 call 0x109c4c80 */
  push32(0x109c8d2bu); f_109c4c80();
  /* 109c8d2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c8d2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8d31 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 109c8d34 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8d35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8d38 push edx */
  push32((uint32_t)(EDX));
  /* 109c8d39 call 0x109c8ee0 */
  push32(0x109c8d3eu); f_109c8ee0();
  /* 109c8d3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8d41 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109c8d44 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8d48 je 0x109c8d53 */
  if (C.zf) goto L_109c8d53;
  /* 109c8d4a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8d4d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8d51 jne 0x109c8d62 */
  if (!C.zf) goto L_109c8d62;
L_109c8d53:;
  /* 109c8d53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c8d56 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8d57 call dword ptr [0x109f4310] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4310))), 0x109c8d5du);
  /* 109c8d5d jmp 0x109c8eda */
  goto L_109c8eda;
L_109c8d62:;
  /* 109c8d62 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8d65 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8d69 jne 0x109c8d7f */
  if (!C.zf) goto L_109c8d7f;
  /* 109c8d6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8d6e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 109c8d75 mov eax, 1 */
  EAX = (0x1u);
  /* 109c8d7a jmp 0x109c8eda */
  goto L_109c8eda;
L_109c8d7f:;
  /* 109c8d7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8d82 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8d86 jne 0x109c8d90 */
  if (!C.zf) goto L_109c8d90;
  /* 109c8d88 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109c8d8b jmp 0x109c8eda */
  goto L_109c8eda;
L_109c8d90:;
  /* 109c8d90 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8d93 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109c8d96 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c8d99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8d9c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 109c8d9f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 109c8da2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8da5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c8da8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 109c8dab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8dae cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8db2 jne 0x109c8eb7 */
  if (!C.zf) goto L_109c8eb7;
  /* 109c8db8 mov eax, dword ptr [0x109efc78] */
  EAX = (r32((uint32_t)(0x109efc78)));
  /* 109c8dbd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109c8dc0 jmp 0x109c8dcb */
  goto L_109c8dcb;
L_109c8dc2:;
  /* 109c8dc2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c8dc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8dc8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_109c8dcb:;
  /* 109c8dcb mov edx, dword ptr [0x109efc78] */
  EDX = (r32((uint32_t)(0x109efc78)));
  /* 109c8dd1 add edx, dword ptr [0x109efc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109efc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8dd7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8dda jge 0x109c8df2 */
  if ((C.sf==C.of)) goto L_109c8df2;
  /* 109c8ddc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109c8ddf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c8de2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8de5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 109c8de8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 109c8df0 jmp 0x109c8dc2 */
  goto L_109c8dc2;
L_109c8df2:;
  /* 109c8df2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8df5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 109c8df8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109c8dfb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8dfe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8e04 jne 0x109c8e15 */
  if (!C.zf) goto L_109c8e15;
  /* 109c8e06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8e09 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 109c8e10 jmp 0x109c8e9d */
  goto L_109c8e9d;
L_109c8e15:;
  /* 109c8e15 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8e18 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8e1e jne 0x109c8e2c */
  if (!C.zf) goto L_109c8e2c;
  /* 109c8e20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8e23 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 109c8e2a jmp 0x109c8e9d */
  goto L_109c8e9d;
L_109c8e2c:;
  /* 109c8e2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8e2f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8e35 jne 0x109c8e43 */
  if (!C.zf) goto L_109c8e43;
  /* 109c8e37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8e3a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 109c8e41 jmp 0x109c8e9d */
  goto L_109c8e9d;
L_109c8e43:;
  /* 109c8e43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8e46 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8e4c jne 0x109c8e5a */
  if (!C.zf) goto L_109c8e5a;
  /* 109c8e4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8e51 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 109c8e58 jmp 0x109c8e9d */
  goto L_109c8e9d;
L_109c8e5a:;
  /* 109c8e5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8e5d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8e63 jne 0x109c8e71 */
  if (!C.zf) goto L_109c8e71;
  /* 109c8e65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8e68 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 109c8e6f jmp 0x109c8e9d */
  goto L_109c8e9d;
L_109c8e71:;
  /* 109c8e71 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8e74 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8e7a jne 0x109c8e88 */
  if (!C.zf) goto L_109c8e88;
  /* 109c8e7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8e7f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 109c8e86 jmp 0x109c8e9d */
  goto L_109c8e9d;
L_109c8e88:;
  /* 109c8e88 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8e8b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8e91 jne 0x109c8e9d */
  if (!C.zf) goto L_109c8e9d;
  /* 109c8e93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8e96 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_109c8e9d:;
  /* 109c8e9d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8ea0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 109c8ea3 push edx */
  push32((uint32_t)(EDX));
  /* 109c8ea4 push 8 */
  push32((uint32_t)(0x8u));
  /* 109c8ea6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x109c8ea9u);
  /* 109c8ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8eac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8eaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109c8eb2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 109c8eb5 jmp 0x109c8ece */
  goto L_109c8ece;
L_109c8eb7:;
  /* 109c8eb7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8eba mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 109c8ec1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109c8ec4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 109c8ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8ec8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x109c8ecbu);
  /* 109c8ecb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109c8ece:;
  /* 109c8ece mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c8ed1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109c8ed4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 109c8ed7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_109c8eda:;
  /* 109c8eda mov esp, ebp */
  ESP = (EBP);
  /* 109c8edc pop ebp */
  EBP = (pop32());
  /* 109c8edd ret  */
  ESPCHK(0x109c8d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ee0 @ 0x109c8ee0 (89 bytes, 35 insns) */
void f_109c8ee0(void) {
  FTRACE(0x109c8ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8ee1 mov ebp, esp */
  EBP = (ESP);
  /* 109c8ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8ee4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c8ee7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109c8eea:;
  /* 109c8eea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8eed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109c8eef cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8ef2 je 0x109c8f12 */
  if (C.zf) goto L_109c8f12;
  /* 109c8ef4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8ef7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8efa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c8efd mov ecx, dword ptr [0x109efc84] */
  ECX = (r32((uint32_t)(0x109efc84)));
  /* 109c8f03 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c8f06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c8f09 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8f0b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8f0e jae 0x109c8f12 */
  if (!C.cf) goto L_109c8f12;
  /* 109c8f10 jmp 0x109c8eea */
  goto L_109c8eea;
L_109c8f12:;
  /* 109c8f12 mov eax, dword ptr [0x109efc84] */
  EAX = (r32((uint32_t)(0x109efc84)));
  /* 109c8f17 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109c8f1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c8f1d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8f1f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8f22 jae 0x109c8f2e */
  if (!C.cf) goto L_109c8f2e;
  /* 109c8f24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8f27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109c8f29 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8f2c je 0x109c8f32 */
  if (C.zf) goto L_109c8f32;
L_109c8f2e:;
  /* 109c8f2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c8f30 jmp 0x109c8f35 */
  goto L_109c8f35;
L_109c8f32:;
  /* 109c8f32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_109c8f35:;
  /* 109c8f35 mov esp, ebp */
  ESP = (EBP);
  /* 109c8f37 pop ebp */
  EBP = (pop32());
  /* 109c8f38 ret  */
  ESPCHK(0x109c8ee0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x109c8f40 (48 bytes, 17 insns) */
void f_109c8f40(void) {
  FTRACE(0x109c8f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8f40 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8f41 mov ebp, esp */
  EBP = (ESP);
  /* 109c8f43 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8f44 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c8f46 call 0x109c8c40 */
  push32(0x109c8f4bu); f_109c8c40();
  /* 109c8f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8f4e mov eax, dword ptr [0x109f186c] */
  EAX = (r32((uint32_t)(0x109f186c)));
  /* 109c8f53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c8f56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8f59 mov dword ptr [0x109f186c], ecx */
  w32((uint32_t)(0x109f186c), (ECX));
  /* 109c8f5f push 9 */
  push32((uint32_t)(0x9u));
  /* 109c8f61 call 0x109c8ce0 */
  push32(0x109c8f66u); f_109c8ce0();
  /* 109c8f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8f69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c8f6c mov esp, ebp */
  ESP = (EBP);
  /* 109c8f6e pop ebp */
  EBP = (pop32());
  /* 109c8f6f ret  */
  ESPCHK(0x109c8f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f70 @ 0x109c8f70 (10 bytes, 5 insns) */
void f_109c8f70(void) {
  FTRACE(0x109c8f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8f70 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8f71 mov ebp, esp */
  EBP = (ESP);
  /* 109c8f73 mov eax, dword ptr [0x109f186c] */
  EAX = (r32((uint32_t)(0x109f186c)));
  /* 109c8f78 pop ebp */
  EBP = (pop32());
  /* 109c8f79 ret  */
  ESPCHK(0x109c8f70u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x109c8f80 (45 bytes, 19 insns) */
void f_109c8f80(void) {
  FTRACE(0x109c8f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8f80 push ebp */
  push32((uint32_t)(EBP));
  /* 109c8f81 mov ebp, esp */
  EBP = (ESP);
  /* 109c8f83 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8f84 mov eax, dword ptr [0x109f186c] */
  EAX = (r32((uint32_t)(0x109f186c)));
  /* 109c8f89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c8f8c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8f90 je 0x109c8fa0 */
  if (C.zf) goto L_109c8fa0;
  /* 109c8f92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c8f95 push ecx */
  push32((uint32_t)(ECX));
  /* 109c8f96 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x109c8f99u);
  /* 109c8f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8f9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c8f9e jne 0x109c8fa4 */
  if (!C.zf) goto L_109c8fa4;
L_109c8fa0:;
  /* 109c8fa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c8fa2 jmp 0x109c8fa9 */
  goto L_109c8fa9;
L_109c8fa4:;
  /* 109c8fa4 mov eax, 1 */
  EAX = (0x1u);
L_109c8fa9:;
  /* 109c8fa9 mov esp, ebp */
  ESP = (EBP);
  /* 109c8fab pop ebp */
  EBP = (pop32());
  /* 109c8fac ret  */
  ESPCHK(0x109c8f80u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x109c8fb0 (88 bytes, 40 insns) */
void f_109c8fb0(void) {
  FTRACE(0x109c8fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c8fb0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 109c8fb4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 109c8fb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c8fba je 0x109c9003 */
  if (C.zf) goto L_109c9003;
  /* 109c8fbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c8fbe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 109c8fc2 push edi */
  push32((uint32_t)(EDI));
  /* 109c8fc3 mov edi, ecx */
  EDI = (ECX);
  /* 109c8fc5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c8fc8 jb 0x109c8ff7 */
  if (C.cf) goto L_109c8ff7;
  /* 109c8fca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109c8fcc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 109c8fcf je 0x109c8fd9 */
  if (C.zf) goto L_109c8fd9;
  /* 109c8fd1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_109c8fd3:;
  /* 109c8fd3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109c8fd5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109c8fd6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109c8fd7 jne 0x109c8fd3 */
  if (!C.zf) goto L_109c8fd3;
L_109c8fd9:;
  /* 109c8fd9 mov ecx, eax */
  ECX = (EAX);
  /* 109c8fdb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 109c8fde add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8fe0 mov ecx, eax */
  ECX = (EAX);
  /* 109c8fe2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 109c8fe5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c8fe7 mov ecx, edx */
  ECX = (EDX);
  /* 109c8fe9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109c8fec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109c8fef je 0x109c8ff7 */
  if (C.zf) goto L_109c8ff7;
  /* 109c8ff1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109c8ff3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109c8ff5 je 0x109c8ffd */
  if (C.zf) goto L_109c8ffd;
L_109c8ff7:;
  /* 109c8ff7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109c8ff9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109c8ffa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 109c8ffb jne 0x109c8ff7 */
  if (!C.zf) goto L_109c8ff7;
L_109c8ffd:;
  /* 109c8ffd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109c9001 pop edi */
  EDI = (pop32());
  /* 109c9002 ret  */
  ESPCHK(0x109c8fb0u, _esp0);
  ESP += 4; return;
L_109c9003:;
  /* 109c9003 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 109c9007 ret  */
  ESPCHK(0x109c8fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009010 @ 0x109c9010 (23 bytes, 10 insns) */
void f_109c9010(void) {
  FTRACE(0x109c9010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c9010 push ebp */
  push32((uint32_t)(EBP));
  /* 109c9011 mov ebp, esp */
  EBP = (ESP);
  /* 109c9013 mov eax, dword ptr [0x109f1868] */
  EAX = (r32((uint32_t)(0x109f1868)));
  /* 109c9018 push eax */
  push32((uint32_t)(EAX));
  /* 109c9019 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c901c push ecx */
  push32((uint32_t)(ECX));
  /* 109c901d call 0x109c9030 */
  push32(0x109c9022u); f_109c9030();
  /* 109c9022 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9025 pop ebp */
  EBP = (pop32());
  /* 109c9026 ret  */
  ESPCHK(0x109c9010u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x109c9030 (87 bytes, 34 insns) */
void f_109c9030(void) {
  FTRACE(0x109c9030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c9030 push ebp */
  push32((uint32_t)(EBP));
  /* 109c9031 mov ebp, esp */
  EBP = (ESP);
  /* 109c9033 push ecx */
  push32((uint32_t)(ECX));
  /* 109c9034 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9038 jbe 0x109c903e */
  if ((C.cf||C.zf)) goto L_109c903e;
  /* 109c903a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c903c jmp 0x109c9083 */
  goto L_109c9083;
L_109c903e:;
  /* 109c903e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9042 ja 0x109c9055 */
  if ((!C.cf&&!C.zf)) goto L_109c9055;
  /* 109c9044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9047 push eax */
  push32((uint32_t)(EAX));
  /* 109c9048 call 0x109c9090 */
  push32(0x109c904du); f_109c9090();
  /* 109c904d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9050 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c9053 jmp 0x109c905c */
  goto L_109c905c;
L_109c9055:;
  /* 109c9055 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_109c905c:;
  /* 109c905c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9060 jne 0x109c9068 */
  if (!C.zf) goto L_109c9068;
  /* 109c9062 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9066 jne 0x109c906d */
  if (!C.zf) goto L_109c906d;
L_109c9068:;
  /* 109c9068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c906b jmp 0x109c9083 */
  goto L_109c9083;
L_109c906d:;
  /* 109c906d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9070 push ecx */
  push32((uint32_t)(ECX));
  /* 109c9071 call 0x109c8f80 */
  push32(0x109c9076u); f_109c8f80();
  /* 109c9076 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c907b jne 0x109c9081 */
  if (!C.zf) goto L_109c9081;
  /* 109c907d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c907f jmp 0x109c9083 */
  goto L_109c9083;
L_109c9081:;
  /* 109c9081 jmp 0x109c903e */
  goto L_109c903e;
L_109c9083:;
  /* 109c9083 mov esp, ebp */
  ESP = (EBP);
  /* 109c9085 pop ebp */
  EBP = (pop32());
  /* 109c9086 ret  */
  ESPCHK(0x109c9030u, _esp0);
  ESP += 4; return;
}

/* FUN_10009090 @ 0x109c9090 (109 bytes, 37 insns) */
void f_109c9090(void) {
  FTRACE(0x109c9090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c9090 push ebp */
  push32((uint32_t)(EBP));
  /* 109c9091 mov ebp, esp */
  EBP = (ESP);
  /* 109c9093 push ecx */
  push32((uint32_t)(ECX));
  /* 109c9094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9097 cmp eax, dword ptr [0x109efc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109efc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c909d ja 0x109c90cd */
  if ((!C.cf&&!C.zf)) goto L_109c90cd;
  /* 109c909f push 9 */
  push32((uint32_t)(0x9u));
  /* 109c90a1 call 0x109c8c40 */
  push32(0x109c90a6u); f_109c8c40();
  /* 109c90a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c90a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c90ac push ecx */
  push32((uint32_t)(ECX));
  /* 109c90ad call 0x109c9bd0 */
  push32(0x109c90b2u); f_109c9bd0();
  /* 109c90b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c90b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109c90b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c90ba call 0x109c8ce0 */
  push32(0x109c90bfu); f_109c8ce0();
  /* 109c90bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c90c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c90c6 je 0x109c90cd */
  if (C.zf) goto L_109c90cd;
  /* 109c90c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c90cb jmp 0x109c90f9 */
  goto L_109c90f9;
L_109c90cd:;
  /* 109c90cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c90d1 jne 0x109c90da */
  if (!C.zf) goto L_109c90da;
  /* 109c90d3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_109c90da:;
  /* 109c90da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c90dd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c90e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 109c90e3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 109c90e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c90e9 push eax */
  push32((uint32_t)(EAX));
  /* 109c90ea push 0 */
  push32((uint32_t)(0x0u));
  /* 109c90ec mov ecx, dword ptr [0x109f302c] */
  ECX = (r32((uint32_t)(0x109f302c)));
  /* 109c90f2 push ecx */
  push32((uint32_t)(ECX));
  /* 109c90f3 call dword ptr [0x109f430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f430c))), 0x109c90f9u);
L_109c90f9:;
  /* 109c90f9 mov esp, ebp */
  ESP = (EBP);
  /* 109c90fb pop ebp */
  EBP = (pop32());
  /* 109c90fc ret  */
  ESPCHK(0x109c9090u, _esp0);
  ESP += 4; return;
}

/* FUN_10009100 @ 0x109c9100 (10 bytes, 5 insns) */
void f_109c9100(void) {
  FTRACE(0x109c9100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c9100 push ebp */
  push32((uint32_t)(EBP));
  /* 109c9101 mov ebp, esp */
  EBP = (ESP);
  /* 109c9103 mov eax, 1 */
  EAX = (0x1u);
  /* 109c9108 pop ebp */
  EBP = (pop32());
  /* 109c9109 ret  */
  ESPCHK(0x109c9100u, _esp0);
  ESP += 4; return;
}

/* FUN_10009110 @ 0x109c9110 (173 bytes, 59 insns) */
void f_109c9110(void) {
  FTRACE(0x109c9110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109c9110 push ebp */
  push32((uint32_t)(EBP));
  /* 109c9111 mov ebp, esp */
  EBP = (ESP);
  /* 109c9113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109c9116 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c911a jbe 0x109c9123 */
  if ((C.cf||C.zf)) goto L_109c9123;
  /* 109c911c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109c911e jmp 0x109c91b9 */
  goto L_109c91b9;
L_109c9123:;
  /* 109c9123 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c9125 call 0x109c8c40 */
  push32(0x109c912au); f_109c8c40();
  /* 109c912a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c912d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c9130 push eax */
  push32((uint32_t)(EAX));
  /* 109c9131 call 0x109c9540 */
  push32(0x109c9136u); f_109c9540();
  /* 109c9136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9139 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109c913c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9140 je 0x109c9181 */
  if (C.zf) goto L_109c9181;
  /* 109c9142 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109c9149 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c914c cmp ecx, dword ptr [0x109efc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109efc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c9152 ja 0x109c9172 */
  if ((!C.cf&&!C.zf)) goto L_109c9172;
  /* 109c9154 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c9157 push edx */
  push32((uint32_t)(EDX));
  /* 109c9158 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c915b push eax */
  push32((uint32_t)(EAX));
  /* 109c915c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109c915f push ecx */
  push32((uint32_t)(ECX));
  /* 109c9160 call 0x109ca410 */
  push32(0x109c9165u); f_109ca410();
  /* 109c9165 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c9168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109c916a je 0x109c9172 */
  if (C.zf) goto L_109c9172;
  /* 109c916c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c916f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109c9172:;
  /* 109c9172 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c9174 call 0x109c8ce0 */
  push32(0x109c9179u); f_109c8ce0();
  /* 109c9179 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c917c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109c917f jmp 0x109c91b9 */
  goto L_109c91b9;
L_109c9181:;
  /* 109c9181 push 9 */
  push32((uint32_t)(0x9u));
  /* 109c9183 call 0x109c8ce0 */
  push32(0x109c9188u); f_109c8ce0();
  /* 109c9188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109c918b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109c918f jne 0x109c9198 */
  if (!C.zf) goto L_109c9198;
  /* 109c9191 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_109c9198:;
  /* 109c9198 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c919b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109c919e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 109c91a0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 109c91a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109c91a6 push ecx */
  push32((uint32_t)(ECX));
  /* 109c91a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109c91aa push edx */
  push32((uint32_t)(EDX));
  /* 109c91ab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109c91ad mov eax, dword ptr [0x109f302c] */
  EAX = (r32((uint32_t)(0x109f302c)));
  /* 109c91b2 push eax */
  push32((uint32_t)(EAX));
  /* 109c91b3 call dword ptr [0x109f4314] */
  call_ind((uint32_t)(r32((uint32_t)(0x109f4314))), 0x109c91b9u);
L_109c91b9:;
  /* 109c91b9 mov esp, ebp */
  ESP = (EBP);
  /* 109c91bb pop ebp */
  EBP = (pop32());
  /* 109c91bc ret  */
  ESPCHK(0x109c9110u, _esp0);
  ESP += 4; return;
}

