#include "recomp.h"

/* thunk_FUN_100041f0 @ 0x103e1005 (5 bytes, 1 insns) */
void f_103e1005(void) {
  FTRACE(0x103e1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e1005 jmp 0x103e41f0 */
  f_103e41f0(); return;
}

/* OnInit @ 0x103e100a (5 bytes, 1 insns) */
void f_103e100a(void) {
  FTRACE(0x103e100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e100a jmp 0x103e10a0 */
  f_103e10a0(); return;
}

/* thunk_FUN_10004240 @ 0x103e100f (5 bytes, 1 insns) */
void f_103e100f(void) {
  FTRACE(0x103e100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e100f jmp 0x103e4240 */
  f_103e4240(); return;
}

/* thunk_FUN_10001040 @ 0x103e1014 (5 bytes, 1 insns) */
void f_103e1014(void) {
  FTRACE(0x103e1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e1014 jmp 0x103e1040 */
  f_103e1040(); return;
}

/* ProcessScenary @ 0x103e1019 (5 bytes, 1 insns) */
void f_103e1019(void) {
  FTRACE(0x103e1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e1019 jmp 0x103e1a50 */
  f_103e1a50(); return;
}

/* FUN_10001040 @ 0x103e1040 (67 bytes, 26 insns) */
void f_103e1040(void) {
  FTRACE(0x103e1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e1040 push ebp */
  push32((uint32_t)(EBP));
  /* 103e1041 mov ebp, esp */
  EBP = (ESP);
  /* 103e1043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e1046 push ebx */
  push32((uint32_t)(EBX));
  /* 103e1047 push esi */
  push32((uint32_t)(ESI));
  /* 103e1048 push edi */
  push32((uint32_t)(EDI));
  /* 103e1049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 103e104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 103e1051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 103e1056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103e1058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1062 je 0x103e1066 */
  if (C.zf) goto L_103e1066;
  /* 103e1064 jmp 0x103e106b */
  goto L_103e106b;
L_103e1066:;
  /* 103e1066 call 0x103e100a */
  push32(0x103e106bu); f_103e100a();
L_103e106b:;
  /* 103e106b mov eax, 1 */
  EAX = (0x1u);
  /* 103e1070 pop edi */
  EDI = (pop32());
  /* 103e1071 pop esi */
  ESI = (pop32());
  /* 103e1072 pop ebx */
  EBX = (pop32());
  /* 103e1073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1078 call 0x103e43a0 */
  push32(0x103e107du); f_103e43a0();
  /* 103e107d mov esp, ebp */
  ESP = (EBP);
  /* 103e107f pop ebp */
  EBP = (pop32());
  /* 103e1080 ret 0xc */
  ESPCHK(0x103e1040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x103e10a0 (1974 bytes, 509 insns) */
void f_103e10a0(void) {
  FTRACE(0x103e10a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e10a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e10a1 mov ebp, esp */
  EBP = (ESP);
  /* 103e10a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e10a6 push ebx */
  push32((uint32_t)(EBX));
  /* 103e10a7 push esi */
  push32((uint32_t)(ESI));
  /* 103e10a8 push edi */
  push32((uint32_t)(EDI));
  /* 103e10a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 103e10ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 103e10b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 103e10b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103e10b8 mov esi, esp */
  ESI = (ESP);
  /* 103e10ba push 0x1040c2a4 */
  push32((uint32_t)(0x1040c2a4u));
  /* 103e10bf push 0x10411460 */
  push32((uint32_t)(0x10411460u));
  /* 103e10c4 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e10cau);
  /* 103e10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e10cf call 0x103e43a0 */
  push32(0x103e10d4u); f_103e43a0();
  /* 103e10d4 mov esi, esp */
  ESI = (ESP);
  /* 103e10d6 push 0x1040c29c */
  push32((uint32_t)(0x1040c29cu));
  /* 103e10db push 0x10411528 */
  push32((uint32_t)(0x10411528u));
  /* 103e10e0 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e10e6u);
  /* 103e10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e10eb call 0x103e43a0 */
  push32(0x103e10f0u); f_103e43a0();
  /* 103e10f0 mov esi, esp */
  ESI = (ESP);
  /* 103e10f2 push 0x1040c294 */
  push32((uint32_t)(0x1040c294u));
  /* 103e10f7 push 0x10411530 */
  push32((uint32_t)(0x10411530u));
  /* 103e10fc call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e1102u);
  /* 103e1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1107 call 0x103e43a0 */
  push32(0x103e110cu); f_103e43a0();
  /* 103e110c mov esi, esp */
  ESI = (ESP);
  /* 103e110e push 0x1040c28c */
  push32((uint32_t)(0x1040c28cu));
  /* 103e1113 push 0x10411538 */
  push32((uint32_t)(0x10411538u));
  /* 103e1118 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e111eu);
  /* 103e111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1123 call 0x103e43a0 */
  push32(0x103e1128u); f_103e43a0();
  /* 103e1128 mov esi, esp */
  ESI = (ESP);
  /* 103e112a push 0x1040c284 */
  push32((uint32_t)(0x1040c284u));
  /* 103e112f push 0x104114f8 */
  push32((uint32_t)(0x104114f8u));
  /* 103e1134 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e113au);
  /* 103e113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e113f call 0x103e43a0 */
  push32(0x103e1144u); f_103e43a0();
  /* 103e1144 mov esi, esp */
  ESI = (ESP);
  /* 103e1146 push 0x1040c27c */
  push32((uint32_t)(0x1040c27cu));
  /* 103e114b push 0x10411500 */
  push32((uint32_t)(0x10411500u));
  /* 103e1150 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e1156u);
  /* 103e1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e115b call 0x103e43a0 */
  push32(0x103e1160u); f_103e43a0();
  /* 103e1160 mov esi, esp */
  ESI = (ESP);
  /* 103e1162 push 0x1040c274 */
  push32((uint32_t)(0x1040c274u));
  /* 103e1167 push 0x10411540 */
  push32((uint32_t)(0x10411540u));
  /* 103e116c call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e1172u);
  /* 103e1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1177 call 0x103e43a0 */
  push32(0x103e117cu); f_103e43a0();
  /* 103e117c mov esi, esp */
  ESI = (ESP);
  /* 103e117e push 0x1040c26c */
  push32((uint32_t)(0x1040c26cu));
  /* 103e1183 push 0x10411548 */
  push32((uint32_t)(0x10411548u));
  /* 103e1188 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e118eu);
  /* 103e118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1193 call 0x103e43a0 */
  push32(0x103e1198u); f_103e43a0();
  /* 103e1198 mov esi, esp */
  ESI = (ESP);
  /* 103e119a push 0x1040c264 */
  push32((uint32_t)(0x1040c264u));
  /* 103e119f push 0x10411550 */
  push32((uint32_t)(0x10411550u));
  /* 103e11a4 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e11aau);
  /* 103e11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e11af call 0x103e43a0 */
  push32(0x103e11b4u); f_103e43a0();
  /* 103e11b4 mov esi, esp */
  ESI = (ESP);
  /* 103e11b6 push 0x1040c25c */
  push32((uint32_t)(0x1040c25cu));
  /* 103e11bb push 0x10411508 */
  push32((uint32_t)(0x10411508u));
  /* 103e11c0 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e11c6u);
  /* 103e11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e11cb call 0x103e43a0 */
  push32(0x103e11d0u); f_103e43a0();
  /* 103e11d0 mov esi, esp */
  ESI = (ESP);
  /* 103e11d2 push 0x1040c254 */
  push32((uint32_t)(0x1040c254u));
  /* 103e11d7 push 0x10411558 */
  push32((uint32_t)(0x10411558u));
  /* 103e11dc call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e11e2u);
  /* 103e11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e11e7 call 0x103e43a0 */
  push32(0x103e11ecu); f_103e43a0();
  /* 103e11ec mov esi, esp */
  ESI = (ESP);
  /* 103e11ee push 0x1040c24c */
  push32((uint32_t)(0x1040c24cu));
  /* 103e11f3 push 0x10411510 */
  push32((uint32_t)(0x10411510u));
  /* 103e11f8 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e11feu);
  /* 103e11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1203 call 0x103e43a0 */
  push32(0x103e1208u); f_103e43a0();
  /* 103e1208 mov esi, esp */
  ESI = (ESP);
  /* 103e120a push 0x1040c244 */
  push32((uint32_t)(0x1040c244u));
  /* 103e120f push 0x10411560 */
  push32((uint32_t)(0x10411560u));
  /* 103e1214 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e121au);
  /* 103e121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e121f call 0x103e43a0 */
  push32(0x103e1224u); f_103e43a0();
  /* 103e1224 mov esi, esp */
  ESI = (ESP);
  /* 103e1226 push 0x1040c23c */
  push32((uint32_t)(0x1040c23cu));
  /* 103e122b push 0x10411518 */
  push32((uint32_t)(0x10411518u));
  /* 103e1230 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e1236u);
  /* 103e1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e123b call 0x103e43a0 */
  push32(0x103e1240u); f_103e43a0();
  /* 103e1240 mov esi, esp */
  ESI = (ESP);
  /* 103e1242 push 0x1040c234 */
  push32((uint32_t)(0x1040c234u));
  /* 103e1247 push 0x10411480 */
  push32((uint32_t)(0x10411480u));
  /* 103e124c call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e1252u);
  /* 103e1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1257 call 0x103e43a0 */
  push32(0x103e125cu); f_103e43a0();
  /* 103e125c mov esi, esp */
  ESI = (ESP);
  /* 103e125e push 0x1040c22c */
  push32((uint32_t)(0x1040c22cu));
  /* 103e1263 push 0x10411478 */
  push32((uint32_t)(0x10411478u));
  /* 103e1268 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e126eu);
  /* 103e126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1273 call 0x103e43a0 */
  push32(0x103e1278u); f_103e43a0();
  /* 103e1278 mov esi, esp */
  ESI = (ESP);
  /* 103e127a push 0x1040c224 */
  push32((uint32_t)(0x1040c224u));
  /* 103e127f push 0x10411490 */
  push32((uint32_t)(0x10411490u));
  /* 103e1284 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e128au);
  /* 103e128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e128f call 0x103e43a0 */
  push32(0x103e1294u); f_103e43a0();
  /* 103e1294 mov esi, esp */
  ESI = (ESP);
  /* 103e1296 push 0x1040c21c */
  push32((uint32_t)(0x1040c21cu));
  /* 103e129b push 0x10411488 */
  push32((uint32_t)(0x10411488u));
  /* 103e12a0 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e12a6u);
  /* 103e12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e12ab call 0x103e43a0 */
  push32(0x103e12b0u); f_103e43a0();
  /* 103e12b0 mov esi, esp */
  ESI = (ESP);
  /* 103e12b2 push 0x1040c214 */
  push32((uint32_t)(0x1040c214u));
  /* 103e12b7 push 0x104114b0 */
  push32((uint32_t)(0x104114b0u));
  /* 103e12bc call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e12c2u);
  /* 103e12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e12c7 call 0x103e43a0 */
  push32(0x103e12ccu); f_103e43a0();
  /* 103e12cc mov esi, esp */
  ESI = (ESP);
  /* 103e12ce push 0x1040c20c */
  push32((uint32_t)(0x1040c20cu));
  /* 103e12d3 push 0x104114a0 */
  push32((uint32_t)(0x104114a0u));
  /* 103e12d8 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e12deu);
  /* 103e12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e12e3 call 0x103e43a0 */
  push32(0x103e12e8u); f_103e43a0();
  /* 103e12e8 mov esi, esp */
  ESI = (ESP);
  /* 103e12ea push 0x1040c204 */
  push32((uint32_t)(0x1040c204u));
  /* 103e12ef push 0x104114d0 */
  push32((uint32_t)(0x104114d0u));
  /* 103e12f4 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e12fau);
  /* 103e12fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e12fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e12ff call 0x103e43a0 */
  push32(0x103e1304u); f_103e43a0();
  /* 103e1304 mov esi, esp */
  ESI = (ESP);
  /* 103e1306 push 0x1040c1fc */
  push32((uint32_t)(0x1040c1fcu));
  /* 103e130b push 0x104114c0 */
  push32((uint32_t)(0x104114c0u));
  /* 103e1310 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e1316u);
  /* 103e1316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e131b call 0x103e43a0 */
  push32(0x103e1320u); f_103e43a0();
  /* 103e1320 mov esi, esp */
  ESI = (ESP);
  /* 103e1322 push 0x1040c1f4 */
  push32((uint32_t)(0x1040c1f4u));
  /* 103e1327 push 0x104114f0 */
  push32((uint32_t)(0x104114f0u));
  /* 103e132c call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e1332u);
  /* 103e1332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1337 call 0x103e43a0 */
  push32(0x103e133cu); f_103e43a0();
  /* 103e133c mov esi, esp */
  ESI = (ESP);
  /* 103e133e push 0x1040c1ec */
  push32((uint32_t)(0x1040c1ecu));
  /* 103e1343 push 0x104114e0 */
  push32((uint32_t)(0x104114e0u));
  /* 103e1348 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e134eu);
  /* 103e134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1353 call 0x103e43a0 */
  push32(0x103e1358u); f_103e43a0();
  /* 103e1358 mov esi, esp */
  ESI = (ESP);
  /* 103e135a push 0x1040c1e4 */
  push32((uint32_t)(0x1040c1e4u));
  /* 103e135f push 0x104114a8 */
  push32((uint32_t)(0x104114a8u));
  /* 103e1364 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e136au);
  /* 103e136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e136f call 0x103e43a0 */
  push32(0x103e1374u); f_103e43a0();
  /* 103e1374 mov esi, esp */
  ESI = (ESP);
  /* 103e1376 push 0x1040c1dc */
  push32((uint32_t)(0x1040c1dcu));
  /* 103e137b push 0x10411498 */
  push32((uint32_t)(0x10411498u));
  /* 103e1380 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e1386u);
  /* 103e1386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e138b call 0x103e43a0 */
  push32(0x103e1390u); f_103e43a0();
  /* 103e1390 mov esi, esp */
  ESI = (ESP);
  /* 103e1392 push 0x1040c1d4 */
  push32((uint32_t)(0x1040c1d4u));
  /* 103e1397 push 0x104114c8 */
  push32((uint32_t)(0x104114c8u));
  /* 103e139c call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e13a2u);
  /* 103e13a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e13a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e13a7 call 0x103e43a0 */
  push32(0x103e13acu); f_103e43a0();
  /* 103e13ac mov esi, esp */
  ESI = (ESP);
  /* 103e13ae push 0x1040c1cc */
  push32((uint32_t)(0x1040c1ccu));
  /* 103e13b3 push 0x104114b8 */
  push32((uint32_t)(0x104114b8u));
  /* 103e13b8 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e13beu);
  /* 103e13be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e13c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e13c3 call 0x103e43a0 */
  push32(0x103e13c8u); f_103e43a0();
  /* 103e13c8 mov esi, esp */
  ESI = (ESP);
  /* 103e13ca push 0x1040c1c4 */
  push32((uint32_t)(0x1040c1c4u));
  /* 103e13cf push 0x104114e8 */
  push32((uint32_t)(0x104114e8u));
  /* 103e13d4 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e13dau);
  /* 103e13da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e13dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e13df call 0x103e43a0 */
  push32(0x103e13e4u); f_103e43a0();
  /* 103e13e4 mov esi, esp */
  ESI = (ESP);
  /* 103e13e6 push 0x1040c1bc */
  push32((uint32_t)(0x1040c1bcu));
  /* 103e13eb push 0x104114d8 */
  push32((uint32_t)(0x104114d8u));
  /* 103e13f0 call dword ptr [0x104144cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144cc))), 0x103e13f6u);
  /* 103e13f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e13fb call 0x103e43a0 */
  push32(0x103e1400u); f_103e43a0();
  /* 103e1400 mov esi, esp */
  ESI = (ESP);
  /* 103e1402 push 0x1040c1b4 */
  push32((uint32_t)(0x1040c1b4u));
  /* 103e1407 push 0x10411418 */
  push32((uint32_t)(0x10411418u));
  /* 103e140c call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e1412u);
  /* 103e1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1417 call 0x103e43a0 */
  push32(0x103e141cu); f_103e43a0();
  /* 103e141c mov esi, esp */
  ESI = (ESP);
  /* 103e141e push 0x1040c1ac */
  push32((uint32_t)(0x1040c1acu));
  /* 103e1423 push 0x10411420 */
  push32((uint32_t)(0x10411420u));
  /* 103e1428 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e142eu);
  /* 103e142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1433 call 0x103e43a0 */
  push32(0x103e1438u); f_103e43a0();
  /* 103e1438 mov esi, esp */
  ESI = (ESP);
  /* 103e143a push 0x1040c1a0 */
  push32((uint32_t)(0x1040c1a0u));
  /* 103e143f push 0x104115d0 */
  push32((uint32_t)(0x104115d0u));
  /* 103e1444 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e144au);
  /* 103e144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e144f call 0x103e43a0 */
  push32(0x103e1454u); f_103e43a0();
  /* 103e1454 mov esi, esp */
  ESI = (ESP);
  /* 103e1456 push 0x1040c194 */
  push32((uint32_t)(0x1040c194u));
  /* 103e145b push 0x104115d8 */
  push32((uint32_t)(0x104115d8u));
  /* 103e1460 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e1466u);
  /* 103e1466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e146b call 0x103e43a0 */
  push32(0x103e1470u); f_103e43a0();
  /* 103e1470 mov esi, esp */
  ESI = (ESP);
  /* 103e1472 push 0x1040c188 */
  push32((uint32_t)(0x1040c188u));
  /* 103e1477 push 0x104115e0 */
  push32((uint32_t)(0x104115e0u));
  /* 103e147c call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e1482u);
  /* 103e1482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1487 call 0x103e43a0 */
  push32(0x103e148cu); f_103e43a0();
  /* 103e148c mov esi, esp */
  ESI = (ESP);
  /* 103e148e push 0x1040c17c */
  push32((uint32_t)(0x1040c17cu));
  /* 103e1493 push 0x104115e8 */
  push32((uint32_t)(0x104115e8u));
  /* 103e1498 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e149eu);
  /* 103e149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e14a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e14a3 call 0x103e43a0 */
  push32(0x103e14a8u); f_103e43a0();
  /* 103e14a8 mov esi, esp */
  ESI = (ESP);
  /* 103e14aa push 0x1040c174 */
  push32((uint32_t)(0x1040c174u));
  /* 103e14af push 0x10411430 */
  push32((uint32_t)(0x10411430u));
  /* 103e14b4 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e14bau);
  /* 103e14ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e14bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e14bf call 0x103e43a0 */
  push32(0x103e14c4u); f_103e43a0();
  /* 103e14c4 mov esi, esp */
  ESI = (ESP);
  /* 103e14c6 push 0x1040c16c */
  push32((uint32_t)(0x1040c16cu));
  /* 103e14cb push 0x10411428 */
  push32((uint32_t)(0x10411428u));
  /* 103e14d0 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e14d6u);
  /* 103e14d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e14d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e14db call 0x103e43a0 */
  push32(0x103e14e0u); f_103e43a0();
  /* 103e14e0 mov esi, esp */
  ESI = (ESP);
  /* 103e14e2 push 0x1040c164 */
  push32((uint32_t)(0x1040c164u));
  /* 103e14e7 push 0x10411440 */
  push32((uint32_t)(0x10411440u));
  /* 103e14ec call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e14f2u);
  /* 103e14f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e14f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e14f7 call 0x103e43a0 */
  push32(0x103e14fcu); f_103e43a0();
  /* 103e14fc mov esi, esp */
  ESI = (ESP);
  /* 103e14fe push 0x1040c15c */
  push32((uint32_t)(0x1040c15cu));
  /* 103e1503 push 0x10411438 */
  push32((uint32_t)(0x10411438u));
  /* 103e1508 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e150eu);
  /* 103e150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1513 call 0x103e43a0 */
  push32(0x103e1518u); f_103e43a0();
  /* 103e1518 mov esi, esp */
  ESI = (ESP);
  /* 103e151a push 0x1040c154 */
  push32((uint32_t)(0x1040c154u));
  /* 103e151f push 0x10411450 */
  push32((uint32_t)(0x10411450u));
  /* 103e1524 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e152au);
  /* 103e152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e152f call 0x103e43a0 */
  push32(0x103e1534u); f_103e43a0();
  /* 103e1534 mov esi, esp */
  ESI = (ESP);
  /* 103e1536 push 0x1040c14c */
  push32((uint32_t)(0x1040c14cu));
  /* 103e153b push 0x10411448 */
  push32((uint32_t)(0x10411448u));
  /* 103e1540 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e1546u);
  /* 103e1546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e154b call 0x103e43a0 */
  push32(0x103e1550u); f_103e43a0();
  /* 103e1550 mov esi, esp */
  ESI = (ESP);
  /* 103e1552 push 0x1040c140 */
  push32((uint32_t)(0x1040c140u));
  /* 103e1557 push 0x10411580 */
  push32((uint32_t)(0x10411580u));
  /* 103e155c call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e1562u);
  /* 103e1562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1567 call 0x103e43a0 */
  push32(0x103e156cu); f_103e43a0();
  /* 103e156c mov esi, esp */
  ESI = (ESP);
  /* 103e156e push 0x1040c134 */
  push32((uint32_t)(0x1040c134u));
  /* 103e1573 push 0x104115b8 */
  push32((uint32_t)(0x104115b8u));
  /* 103e1578 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e157eu);
  /* 103e157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1583 call 0x103e43a0 */
  push32(0x103e1588u); f_103e43a0();
  /* 103e1588 mov esi, esp */
  ESI = (ESP);
  /* 103e158a push 0x1040c128 */
  push32((uint32_t)(0x1040c128u));
  /* 103e158f push 0x104115c0 */
  push32((uint32_t)(0x104115c0u));
  /* 103e1594 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e159au);
  /* 103e159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e159f call 0x103e43a0 */
  push32(0x103e15a4u); f_103e43a0();
  /* 103e15a4 mov esi, esp */
  ESI = (ESP);
  /* 103e15a6 push 0x1040c11c */
  push32((uint32_t)(0x1040c11cu));
  /* 103e15ab push 0x104115a8 */
  push32((uint32_t)(0x104115a8u));
  /* 103e15b0 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e15b6u);
  /* 103e15b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e15b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e15bb call 0x103e43a0 */
  push32(0x103e15c0u); f_103e43a0();
  /* 103e15c0 mov esi, esp */
  ESI = (ESP);
  /* 103e15c2 push 0x1040c110 */
  push32((uint32_t)(0x1040c110u));
  /* 103e15c7 push 0x10411598 */
  push32((uint32_t)(0x10411598u));
  /* 103e15cc call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e15d2u);
  /* 103e15d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e15d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e15d7 call 0x103e43a0 */
  push32(0x103e15dcu); f_103e43a0();
  /* 103e15dc mov esi, esp */
  ESI = (ESP);
  /* 103e15de push 0x1040c104 */
  push32((uint32_t)(0x1040c104u));
  /* 103e15e3 push 0x104115a0 */
  push32((uint32_t)(0x104115a0u));
  /* 103e15e8 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e15eeu);
  /* 103e15ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e15f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e15f3 call 0x103e43a0 */
  push32(0x103e15f8u); f_103e43a0();
  /* 103e15f8 mov esi, esp */
  ESI = (ESP);
  /* 103e15fa push 0x1040c0f8 */
  push32((uint32_t)(0x1040c0f8u));
  /* 103e15ff push 0x10411588 */
  push32((uint32_t)(0x10411588u));
  /* 103e1604 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e160au);
  /* 103e160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e160f call 0x103e43a0 */
  push32(0x103e1614u); f_103e43a0();
  /* 103e1614 mov esi, esp */
  ESI = (ESP);
  /* 103e1616 push 0x1040c0ec */
  push32((uint32_t)(0x1040c0ecu));
  /* 103e161b push 0x10411590 */
  push32((uint32_t)(0x10411590u));
  /* 103e1620 call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e1626u);
  /* 103e1626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e162b call 0x103e43a0 */
  push32(0x103e1630u); f_103e43a0();
  /* 103e1630 mov esi, esp */
  ESI = (ESP);
  /* 103e1632 push 0x1040c0e0 */
  push32((uint32_t)(0x1040c0e0u));
  /* 103e1637 push 0x104115c8 */
  push32((uint32_t)(0x104115c8u));
  /* 103e163c call dword ptr [0x104144d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d0))), 0x103e1642u);
  /* 103e1642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1647 call 0x103e43a0 */
  push32(0x103e164cu); f_103e43a0();
  /* 103e164c mov esi, esp */
  ESI = (ESP);
  /* 103e164e push 0x1040c0d8 */
  push32((uint32_t)(0x1040c0d8u));
  /* 103e1653 push 0x10411408 */
  push32((uint32_t)(0x10411408u));
  /* 103e1658 call dword ptr [0x104144d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d4))), 0x103e165eu);
  /* 103e165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1663 call 0x103e43a0 */
  push32(0x103e1668u); f_103e43a0();
  /* 103e1668 mov esi, esp */
  ESI = (ESP);
  /* 103e166a push 8 */
  push32((uint32_t)(0x8u));
  /* 103e166c push 0x104113e8 */
  push32((uint32_t)(0x104113e8u));
  /* 103e1671 call dword ptr [0x104144d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d8))), 0x103e1677u);
  /* 103e1677 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e167a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e167c call 0x103e43a0 */
  push32(0x103e1681u); f_103e43a0();
  /* 103e1681 mov esi, esp */
  ESI = (ESP);
  /* 103e1683 push 8 */
  push32((uint32_t)(0x8u));
  /* 103e1685 push 0x104113f0 */
  push32((uint32_t)(0x104113f0u));
  /* 103e168a call dword ptr [0x104144d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d8))), 0x103e1690u);
  /* 103e1690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1693 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1695 call 0x103e43a0 */
  push32(0x103e169au); f_103e43a0();
  /* 103e169a mov esi, esp */
  ESI = (ESP);
  /* 103e169c push 8 */
  push32((uint32_t)(0x8u));
  /* 103e169e push 0x104115b0 */
  push32((uint32_t)(0x104115b0u));
  /* 103e16a3 call dword ptr [0x104144d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d8))), 0x103e16a9u);
  /* 103e16a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e16ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e16ae call 0x103e43a0 */
  push32(0x103e16b3u); f_103e43a0();
  /* 103e16b3 mov esi, esp */
  ESI = (ESP);
  /* 103e16b5 push 0x1040c0c8 */
  push32((uint32_t)(0x1040c0c8u));
  /* 103e16ba push 0x10411458 */
  push32((uint32_t)(0x10411458u));
  /* 103e16bf call dword ptr [0x104144dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144dc))), 0x103e16c5u);
  /* 103e16c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e16c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e16ca call 0x103e43a0 */
  push32(0x103e16cfu); f_103e43a0();
  /* 103e16cf mov esi, esp */
  ESI = (ESP);
  /* 103e16d1 push 0x1040c0b0 */
  push32((uint32_t)(0x1040c0b0u));
  /* 103e16d6 push 0x10411470 */
  push32((uint32_t)(0x10411470u));
  /* 103e16db call dword ptr [0x104144dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144dc))), 0x103e16e1u);
  /* 103e16e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e16e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e16e6 call 0x103e43a0 */
  push32(0x103e16ebu); f_103e43a0();
  /* 103e16eb mov esi, esp */
  ESI = (ESP);
  /* 103e16ed push 0x1040c0a0 */
  push32((uint32_t)(0x1040c0a0u));
  /* 103e16f2 push 0x104113e0 */
  push32((uint32_t)(0x104113e0u));
  /* 103e16f7 call dword ptr [0x104144dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144dc))), 0x103e16fdu);
  /* 103e16fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1700 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1702 call 0x103e43a0 */
  push32(0x103e1707u); f_103e43a0();
  /* 103e1707 mov esi, esp */
  ESI = (ESP);
  /* 103e1709 push 0x1040c094 */
  push32((uint32_t)(0x1040c094u));
  /* 103e170e push 0x10411568 */
  push32((uint32_t)(0x10411568u));
  /* 103e1713 call dword ptr [0x104144dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144dc))), 0x103e1719u);
  /* 103e1719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e171c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e171e call 0x103e43a0 */
  push32(0x103e1723u); f_103e43a0();
  /* 103e1723 mov esi, esp */
  ESI = (ESP);
  /* 103e1725 push 0x1040c07c */
  push32((uint32_t)(0x1040c07cu));
  /* 103e172a push 0x10411578 */
  push32((uint32_t)(0x10411578u));
  /* 103e172f call dword ptr [0x104144dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144dc))), 0x103e1735u);
  /* 103e1735 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1738 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e173a call 0x103e43a0 */
  push32(0x103e173fu); f_103e43a0();
  /* 103e173f mov esi, esp */
  ESI = (ESP);
  /* 103e1741 push 0x1040c064 */
  push32((uint32_t)(0x1040c064u));
  /* 103e1746 push 0x10411570 */
  push32((uint32_t)(0x10411570u));
  /* 103e174b call dword ptr [0x104144dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144dc))), 0x103e1751u);
  /* 103e1751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1754 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1756 call 0x103e43a0 */
  push32(0x103e175bu); f_103e43a0();
  /* 103e175b mov esi, esp */
  ESI = (ESP);
  /* 103e175d push 0x1040c058 */
  push32((uint32_t)(0x1040c058u));
  /* 103e1762 push 0x104113f8 */
  push32((uint32_t)(0x104113f8u));
  /* 103e1767 call dword ptr [0x104144dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144dc))), 0x103e176du);
  /* 103e176d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1770 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1772 call 0x103e43a0 */
  push32(0x103e1777u); f_103e43a0();
  /* 103e1777 mov esi, esp */
  ESI = (ESP);
  /* 103e1779 push 0x1040c048 */
  push32((uint32_t)(0x1040c048u));
  /* 103e177e push 0x10411520 */
  push32((uint32_t)(0x10411520u));
  /* 103e1783 call dword ptr [0x104144dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144dc))), 0x103e1789u);
  /* 103e1789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e178c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e178e call 0x103e43a0 */
  push32(0x103e1793u); f_103e43a0();
  /* 103e1793 mov esi, esp */
  ESI = (ESP);
  /* 103e1795 push 0x1040c03c */
  push32((uint32_t)(0x1040c03cu));
  /* 103e179a push 0x10411468 */
  push32((uint32_t)(0x10411468u));
  /* 103e179f call dword ptr [0x104144d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d4))), 0x103e17a5u);
  /* 103e17a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e17a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e17aa call 0x103e43a0 */
  push32(0x103e17afu); f_103e43a0();
  /* 103e17af mov esi, esp */
  ESI = (ESP);
  /* 103e17b1 push 0x1040c030 */
  push32((uint32_t)(0x1040c030u));
  /* 103e17b6 push 0x10411410 */
  push32((uint32_t)(0x10411410u));
  /* 103e17bb call dword ptr [0x104144d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144d4))), 0x103e17c1u);
  /* 103e17c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e17c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e17c6 call 0x103e43a0 */
  push32(0x103e17cbu); f_103e43a0();
  /* 103e17cb mov esi, esp */
  ESI = (ESP);
  /* 103e17cd push 0x1040c028 */
  push32((uint32_t)(0x1040c028u));
  /* 103e17d2 push 0x10411400 */
  push32((uint32_t)(0x10411400u));
  /* 103e17d7 call dword ptr [0x104144e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144e0))), 0x103e17ddu);
  /* 103e17dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e17e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e17e2 call 0x103e43a0 */
  push32(0x103e17e7u); f_103e43a0();
  /* 103e17e7 mov esi, esp */
  ESI = (ESP);
  /* 103e17e9 push 0x10411408 */
  push32((uint32_t)(0x10411408u));
  /* 103e17ee push 0 */
  push32((uint32_t)(0x0u));
  /* 103e17f0 call dword ptr [0x104144e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144e4))), 0x103e17f6u);
  /* 103e17f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e17f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e17fb call 0x103e43a0 */
  push32(0x103e1800u); f_103e43a0();
  /* 103e1800 mov esi, esp */
  ESI = (ESP);
  /* 103e1802 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103e1804 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1806 call dword ptr [0x104144e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144e8))), 0x103e180cu);
  /* 103e180c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e180f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1811 call 0x103e43a0 */
  push32(0x103e1816u); f_103e43a0();
  /* 103e1816 mov esi, esp */
  ESI = (ESP);
  /* 103e1818 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103e181a push 4 */
  push32((uint32_t)(0x4u));
  /* 103e181c call dword ptr [0x104144e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144e8))), 0x103e1822u);
  /* 103e1822 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1825 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1827 call 0x103e43a0 */
  push32(0x103e182cu); f_103e43a0();
  /* 103e182c mov esi, esp */
  ESI = (ESP);
  /* 103e182e push 0x1040c01c */
  push32((uint32_t)(0x1040c01cu));
  /* 103e1833 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1835 call dword ptr [0x104144ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144ec))), 0x103e183bu);
  /* 103e183b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e183e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1840 call 0x103e43a0 */
  push32(0x103e1845u); f_103e43a0();
  /* 103e1845 pop edi */
  EDI = (pop32());
  /* 103e1846 pop esi */
  ESI = (pop32());
  /* 103e1847 pop ebx */
  EBX = (pop32());
  /* 103e1848 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e184b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e184d call 0x103e43a0 */
  push32(0x103e1852u); f_103e43a0();
  /* 103e1852 mov esp, ebp */
  ESP = (EBP);
  /* 103e1854 pop ebp */
  EBP = (pop32());
  /* 103e1855 ret  */
  ESPCHK(0x103e10a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a50 @ 0x103e1a50 (8106 bytes, 2357 insns) */
void f_103e1a50(void) {
  FTRACE(0x103e1a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e1a50 push ebp */
  push32((uint32_t)(EBP));
  /* 103e1a51 mov ebp, esp */
  EBP = (ESP);
  /* 103e1a53 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e1a56 push ebx */
  push32((uint32_t)(EBX));
  /* 103e1a57 push esi */
  push32((uint32_t)(ESI));
  /* 103e1a58 push edi */
  push32((uint32_t)(EDI));
  /* 103e1a59 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 103e1a5c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 103e1a61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 103e1a66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103e1a68 mov esi, esp */
  ESI = (ESP);
  /* 103e1a6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 103e1a6c call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e1a72u);
  /* 103e1a72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1a75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1a77 call 0x103e43a0 */
  push32(0x103e1a7cu); f_103e43a0();
  /* 103e1a7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e1a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e1a83 je 0x103e1d4a */
  if (C.zf) goto L_103e1d4a;
  /* 103e1a89 mov esi, esp */
  ESI = (ESP);
  /* 103e1a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1a8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 103e1a8f call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e1a95u);
  /* 103e1a95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1a98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1a9a call 0x103e43a0 */
  push32(0x103e1a9fu); f_103e43a0();
  /* 103e1a9f mov esi, esp */
  ESI = (ESP);
  /* 103e1aa1 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 103e1aa6 push 3 */
  push32((uint32_t)(0x3u));
  /* 103e1aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1aaa call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1ab0u);
  /* 103e1ab0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1ab3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1ab5 call 0x103e43a0 */
  push32(0x103e1abau); f_103e43a0();
  /* 103e1aba mov esi, esp */
  ESI = (ESP);
  /* 103e1abc push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 103e1ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e1ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1ac5 call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1acbu);
  /* 103e1acb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1ace cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1ad0 call 0x103e43a0 */
  push32(0x103e1ad5u); f_103e43a0();
  /* 103e1ad5 mov esi, esp */
  ESI = (ESP);
  /* 103e1ad7 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 103e1adc push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1ade push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1ae0 call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1ae6u);
  /* 103e1ae6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1ae9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1aeb call 0x103e43a0 */
  push32(0x103e1af0u); f_103e43a0();
  /* 103e1af0 mov esi, esp */
  ESI = (ESP);
  /* 103e1af2 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 103e1af7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e1af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1afb call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1b01u);
  /* 103e1b01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1b04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1b06 call 0x103e43a0 */
  push32(0x103e1b0bu); f_103e43a0();
  /* 103e1b0b mov esi, esp */
  ESI = (ESP);
  /* 103e1b0d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 103e1b12 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1b16 call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1b1cu);
  /* 103e1b1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1b1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1b21 call 0x103e43a0 */
  push32(0x103e1b26u); f_103e43a0();
  /* 103e1b26 mov esi, esp */
  ESI = (ESP);
  /* 103e1b28 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 103e1b2d push 4 */
  push32((uint32_t)(0x4u));
  /* 103e1b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1b31 call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1b37u);
  /* 103e1b37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1b3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1b3c call 0x103e43a0 */
  push32(0x103e1b41u); f_103e43a0();
  /* 103e1b41 mov esi, esp */
  ESI = (ESP);
  /* 103e1b43 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 103e1b48 push 3 */
  push32((uint32_t)(0x3u));
  /* 103e1b4a push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1b4c call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1b52u);
  /* 103e1b52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1b55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1b57 call 0x103e43a0 */
  push32(0x103e1b5cu); f_103e43a0();
  /* 103e1b5c mov esi, esp */
  ESI = (ESP);
  /* 103e1b5e push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 103e1b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e1b65 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1b67 call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1b6du);
  /* 103e1b6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1b70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1b72 call 0x103e43a0 */
  push32(0x103e1b77u); f_103e43a0();
  /* 103e1b77 mov esi, esp */
  ESI = (ESP);
  /* 103e1b79 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 103e1b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1b80 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1b82 call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1b88u);
  /* 103e1b88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1b8d call 0x103e43a0 */
  push32(0x103e1b92u); f_103e43a0();
  /* 103e1b92 mov esi, esp */
  ESI = (ESP);
  /* 103e1b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1b96 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e1b98 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1b9a call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1ba0u);
  /* 103e1ba0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1ba3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1ba5 call 0x103e43a0 */
  push32(0x103e1baau); f_103e43a0();
  /* 103e1baa mov esi, esp */
  ESI = (ESP);
  /* 103e1bac push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 103e1bb1 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1bb3 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1bb5 call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1bbbu);
  /* 103e1bbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1bbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1bc0 call 0x103e43a0 */
  push32(0x103e1bc5u); f_103e43a0();
  /* 103e1bc5 mov esi, esp */
  ESI = (ESP);
  /* 103e1bc7 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 103e1bcc push 4 */
  push32((uint32_t)(0x4u));
  /* 103e1bce push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1bd0 call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e1bd6u);
  /* 103e1bd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1bd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1bdb call 0x103e43a0 */
  push32(0x103e1be0u); f_103e43a0();
  /* 103e1be0 mov esi, esp */
  ESI = (ESP);
  /* 103e1be2 push 0x1040c3d0 */
  push32((uint32_t)(0x1040c3d0u));
  /* 103e1be7 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e1bedu);
  /* 103e1bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1bf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1bf2 call 0x103e43a0 */
  push32(0x103e1bf7u); f_103e43a0();
  /* 103e1bf7 mov esi, esp */
  ESI = (ESP);
  /* 103e1bf9 push 0x1040c3c4 */
  push32((uint32_t)(0x1040c3c4u));
  /* 103e1bfe call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e1c04u);
  /* 103e1c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1c07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1c09 call 0x103e43a0 */
  push32(0x103e1c0eu); f_103e43a0();
  /* 103e1c0e mov esi, esp */
  ESI = (ESP);
  /* 103e1c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1c12 push 0x10411430 */
  push32((uint32_t)(0x10411430u));
  /* 103e1c17 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e1c1du);
  /* 103e1c1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1c20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1c22 call 0x103e43a0 */
  push32(0x103e1c27u); f_103e43a0();
  /* 103e1c27 mov esi, esp */
  ESI = (ESP);
  /* 103e1c29 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1c2b push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 103e1c30 push 0x10411490 */
  push32((uint32_t)(0x10411490u));
  /* 103e1c35 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1c37 call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e1c3du);
  /* 103e1c3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1c40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1c42 call 0x103e43a0 */
  push32(0x103e1c47u); f_103e43a0();
  /* 103e1c47 mov esi, esp */
  ESI = (ESP);
  /* 103e1c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1c4b push 0x10411580 */
  push32((uint32_t)(0x10411580u));
  /* 103e1c50 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e1c56u);
  /* 103e1c56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1c59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1c5b call 0x103e43a0 */
  push32(0x103e1c60u); f_103e43a0();
  /* 103e1c60 mov esi, esp */
  ESI = (ESP);
  /* 103e1c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1c64 push 0x10411480 */
  push32((uint32_t)(0x10411480u));
  /* 103e1c69 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1c6b call dword ptr [0x10414460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414460))), 0x103e1c71u);
  /* 103e1c71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1c74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1c76 call 0x103e43a0 */
  push32(0x103e1c7bu); f_103e43a0();
  /* 103e1c7b mov esi, esp */
  ESI = (ESP);
  /* 103e1c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1c7f push 0x104115b8 */
  push32((uint32_t)(0x104115b8u));
  /* 103e1c84 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e1c8au);
  /* 103e1c8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1c8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1c8f call 0x103e43a0 */
  push32(0x103e1c94u); f_103e43a0();
  /* 103e1c94 mov esi, esp */
  ESI = (ESP);
  /* 103e1c96 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1c98 push 0x10411478 */
  push32((uint32_t)(0x10411478u));
  /* 103e1c9d push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1c9f call dword ptr [0x10414460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414460))), 0x103e1ca5u);
  /* 103e1ca5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1ca8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1caa call 0x103e43a0 */
  push32(0x103e1cafu); f_103e43a0();
  /* 103e1caf mov esi, esp */
  ESI = (ESP);
  /* 103e1cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1cb3 push 0x10411438 */
  push32((uint32_t)(0x10411438u));
  /* 103e1cb8 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e1cbeu);
  /* 103e1cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1cc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1cc3 call 0x103e43a0 */
  push32(0x103e1cc8u); f_103e43a0();
  /* 103e1cc8 mov esi, esp */
  ESI = (ESP);
  /* 103e1cca push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1ccc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 103e1cce push 0x10411548 */
  push32((uint32_t)(0x10411548u));
  /* 103e1cd3 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1cd5 call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e1cdbu);
  /* 103e1cdb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1cde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1ce0 call 0x103e43a0 */
  push32(0x103e1ce5u); f_103e43a0();
  /* 103e1ce5 mov esi, esp */
  ESI = (ESP);
  /* 103e1ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1ce9 push 0x10411448 */
  push32((uint32_t)(0x10411448u));
  /* 103e1cee call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e1cf4u);
  /* 103e1cf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1cf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1cf9 call 0x103e43a0 */
  push32(0x103e1cfeu); f_103e43a0();
  /* 103e1cfe mov esi, esp */
  ESI = (ESP);
  /* 103e1d00 push 0x1040c03c */
  push32((uint32_t)(0x1040c03cu));
  /* 103e1d05 push 0x1040c14c */
  push32((uint32_t)(0x1040c14cu));
  /* 103e1d0a call dword ptr [0x10414468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414468))), 0x103e1d10u);
  /* 103e1d10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1d13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1d15 call 0x103e43a0 */
  push32(0x103e1d1au); f_103e43a0();
  /* 103e1d1a mov esi, esp */
  ESI = (ESP);
  /* 103e1d1c push 0x1040c030 */
  push32((uint32_t)(0x1040c030u));
  /* 103e1d21 push 0x1040c14c */
  push32((uint32_t)(0x1040c14cu));
  /* 103e1d26 call dword ptr [0x10414468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414468))), 0x103e1d2cu);
  /* 103e1d2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1d2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1d31 call 0x103e43a0 */
  push32(0x103e1d36u); f_103e43a0();
  /* 103e1d36 mov esi, esp */
  ESI = (ESP);
  /* 103e1d38 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1d3a call dword ptr [0x1041446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041446c))), 0x103e1d40u);
  /* 103e1d40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1d43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1d45 call 0x103e43a0 */
  push32(0x103e1d4au); f_103e43a0();
L_103e1d4a:;
  /* 103e1d4a mov esi, esp */
  ESI = (ESP);
  /* 103e1d4c push 1 */
  push32((uint32_t)(0x1u));
  /* 103e1d4e call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e1d54u);
  /* 103e1d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1d57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1d59 call 0x103e43a0 */
  push32(0x103e1d5eu); f_103e43a0();
  /* 103e1d5e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e1d63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e1d65 je 0x103e1e01 */
  if (C.zf) goto L_103e1e01;
  /* 103e1d6b mov esi, esp */
  ESI = (ESP);
  /* 103e1d6d push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1d6f call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e1d75u);
  /* 103e1d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1d78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1d7a call 0x103e43a0 */
  push32(0x103e1d7fu); f_103e43a0();
  /* 103e1d7f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e1d84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e1d86 je 0x103e1e01 */
  if (C.zf) goto L_103e1e01;
  /* 103e1d88 mov esi, esp */
  ESI = (ESP);
  /* 103e1d8a push 0x10411430 */
  push32((uint32_t)(0x10411430u));
  /* 103e1d8f push 0x10411490 */
  push32((uint32_t)(0x10411490u));
  /* 103e1d94 call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e1d9au);
  /* 103e1d9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1d9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1d9f call 0x103e43a0 */
  push32(0x103e1da4u); f_103e43a0();
  /* 103e1da4 mov esi, eax */
  ESI = (EAX);
  /* 103e1da6 push 0x10411430 */
  push32((uint32_t)(0x10411430u));
  /* 103e1dab call 0x103e1005 */
  push32(0x103e1db0u); f_103e1005();
  /* 103e1db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1db3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1db5 jne 0x103e1e01 */
  if (!C.zf) goto L_103e1e01;
  /* 103e1db7 mov esi, esp */
  ESI = (ESP);
  /* 103e1db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1dbb push 1 */
  push32((uint32_t)(0x1u));
  /* 103e1dbd call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e1dc3u);
  /* 103e1dc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1dc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1dc8 call 0x103e43a0 */
  push32(0x103e1dcdu); f_103e43a0();
  /* 103e1dcd mov esi, esp */
  ESI = (ESP);
  /* 103e1dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1dd1 push 0x10411430 */
  push32((uint32_t)(0x10411430u));
  /* 103e1dd6 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e1ddcu);
  /* 103e1ddc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1ddf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1de1 call 0x103e43a0 */
  push32(0x103e1de6u); f_103e43a0();
  /* 103e1de6 mov esi, esp */
  ESI = (ESP);
  /* 103e1de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1dea push 0x10411488 */
  push32((uint32_t)(0x10411488u));
  /* 103e1def push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1df1 call dword ptr [0x10414460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414460))), 0x103e1df7u);
  /* 103e1df7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1dfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1dfc call 0x103e43a0 */
  push32(0x103e1e01u); f_103e43a0();
L_103e1e01:;
  /* 103e1e01 mov esi, esp */
  ESI = (ESP);
  /* 103e1e03 call dword ptr [0x10414474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414474))), 0x103e1e09u);
  /* 103e1e09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1e0b call 0x103e43a0 */
  push32(0x103e1e10u); f_103e43a0();
  /* 103e1e10 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1e15 jle 0x103e1e61 */
  if ((C.zf||C.sf!=C.of)) goto L_103e1e61;
  /* 103e1e17 mov esi, esp */
  ESI = (ESP);
  /* 103e1e19 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 103e1e1b call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e1e21u);
  /* 103e1e21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1e24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1e26 call 0x103e43a0 */
  push32(0x103e1e2bu); f_103e43a0();
  /* 103e1e2b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e1e30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e1e32 je 0x103e1e61 */
  if (C.zf) goto L_103e1e61;
  /* 103e1e34 mov esi, esp */
  ESI = (ESP);
  /* 103e1e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1e38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 103e1e3a call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e1e40u);
  /* 103e1e40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1e43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1e45 call 0x103e43a0 */
  push32(0x103e1e4au); f_103e43a0();
  /* 103e1e4a mov esi, esp */
  ESI = (ESP);
  /* 103e1e4c push 0x1040c3bc */
  push32((uint32_t)(0x1040c3bcu));
  /* 103e1e51 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e1e57u);
  /* 103e1e57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1e5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1e5c call 0x103e43a0 */
  push32(0x103e1e61u); f_103e43a0();
L_103e1e61:;
  /* 103e1e61 mov esi, esp */
  ESI = (ESP);
  /* 103e1e63 call dword ptr [0x10414474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414474))), 0x103e1e69u);
  /* 103e1e69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1e6b call 0x103e43a0 */
  push32(0x103e1e70u); f_103e43a0();
  /* 103e1e70 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1e75 jle 0x103e1ee3 */
  if ((C.zf||C.sf!=C.of)) goto L_103e1ee3;
  /* 103e1e77 mov esi, esp */
  ESI = (ESP);
  /* 103e1e79 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 103e1e7b call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e1e81u);
  /* 103e1e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1e84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1e86 call 0x103e43a0 */
  push32(0x103e1e8bu); f_103e43a0();
  /* 103e1e8b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e1e90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e1e92 je 0x103e1ee3 */
  if (C.zf) goto L_103e1ee3;
  /* 103e1e94 mov esi, esp */
  ESI = (ESP);
  /* 103e1e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1e98 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 103e1e9a call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e1ea0u);
  /* 103e1ea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1ea3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1ea5 call 0x103e43a0 */
  push32(0x103e1eaau); f_103e43a0();
  /* 103e1eaa mov esi, esp */
  ESI = (ESP);
  /* 103e1eac push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1eae push 0x10411418 */
  push32((uint32_t)(0x10411418u));
  /* 103e1eb3 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e1eb9u);
  /* 103e1eb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1ebc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1ebe call 0x103e43a0 */
  push32(0x103e1ec3u); f_103e43a0();
  /* 103e1ec3 mov esi, esp */
  ESI = (ESP);
  /* 103e1ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1ec7 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103e1ecc push 0x10411538 */
  push32((uint32_t)(0x10411538u));
  /* 103e1ed1 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1ed3 call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e1ed9u);
  /* 103e1ed9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1edc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1ede call 0x103e43a0 */
  push32(0x103e1ee3u); f_103e43a0();
L_103e1ee3:;
  /* 103e1ee3 mov esi, esp */
  ESI = (ESP);
  /* 103e1ee5 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 103e1ee7 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e1eedu);
  /* 103e1eed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1ef0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1ef2 call 0x103e43a0 */
  push32(0x103e1ef7u); f_103e43a0();
  /* 103e1ef7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e1efc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e1efe je 0x103e1f72 */
  if (C.zf) goto L_103e1f72;
  /* 103e1f00 mov esi, esp */
  ESI = (ESP);
  /* 103e1f02 call dword ptr [0x10414474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414474))), 0x103e1f08u);
  /* 103e1f08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1f0a call 0x103e43a0 */
  push32(0x103e1f0fu); f_103e43a0();
  /* 103e1f0f cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1f14 jle 0x103e1f72 */
  if ((C.zf||C.sf!=C.of)) goto L_103e1f72;
  /* 103e1f16 mov esi, esp */
  ESI = (ESP);
  /* 103e1f18 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1f1a push 0x34 */
  push32((uint32_t)(0x34u));
  /* 103e1f1c call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e1f22u);
  /* 103e1f22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1f25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1f27 call 0x103e43a0 */
  push32(0x103e1f2cu); f_103e43a0();
  /* 103e1f2c mov esi, esp */
  ESI = (ESP);
  /* 103e1f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1f30 push 0x10411438 */
  push32((uint32_t)(0x10411438u));
  /* 103e1f35 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e1f3bu);
  /* 103e1f3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1f3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1f40 call 0x103e43a0 */
  push32(0x103e1f45u); f_103e43a0();
  /* 103e1f45 mov esi, esp */
  ESI = (ESP);
  /* 103e1f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e1f49 push 0x10411450 */
  push32((uint32_t)(0x10411450u));
  /* 103e1f4e call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e1f54u);
  /* 103e1f54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1f57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1f59 call 0x103e43a0 */
  push32(0x103e1f5eu); f_103e43a0();
  /* 103e1f5e mov esi, esp */
  ESI = (ESP);
  /* 103e1f60 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1f62 call dword ptr [0x10414478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414478))), 0x103e1f68u);
  /* 103e1f68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1f6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1f6d call 0x103e43a0 */
  push32(0x103e1f72u); f_103e43a0();
L_103e1f72:;
  /* 103e1f72 mov esi, esp */
  ESI = (ESP);
  /* 103e1f74 call dword ptr [0x10414474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414474))), 0x103e1f7au);
  /* 103e1f7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1f7c call 0x103e43a0 */
  push32(0x103e1f81u); f_103e43a0();
  /* 103e1f81 cmp eax, 0x15f90 */
  { uint32_t _a=(EAX),_b=(0x15f90u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1f86 jle 0x103e2035 */
  if ((C.zf||C.sf!=C.of)) goto L_103e2035;
  /* 103e1f8c mov esi, esp */
  ESI = (ESP);
  /* 103e1f8e push 0x35 */
  push32((uint32_t)(0x35u));
  /* 103e1f90 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e1f96u);
  /* 103e1f96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1f99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1f9b call 0x103e43a0 */
  push32(0x103e1fa0u); f_103e43a0();
  /* 103e1fa0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e1fa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e1fa7 je 0x103e2035 */
  if (C.zf) goto L_103e2035;
  /* 103e1fad mov esi, esp */
  ESI = (ESP);
  /* 103e1faf push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1fb1 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 103e1fb3 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e1fb9u);
  /* 103e1fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1fbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1fbe call 0x103e43a0 */
  push32(0x103e1fc3u); f_103e43a0();
  /* 103e1fc3 mov esi, esp */
  ESI = (ESP);
  /* 103e1fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1fc7 push 0x10411438 */
  push32((uint32_t)(0x10411438u));
  /* 103e1fcc call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e1fd2u);
  /* 103e1fd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1fd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1fd7 call 0x103e43a0 */
  push32(0x103e1fdcu); f_103e43a0();
  /* 103e1fdc mov esi, esp */
  ESI = (ESP);
  /* 103e1fde push 0 */
  push32((uint32_t)(0x0u));
  /* 103e1fe0 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 103e1fe5 push 0x10411510 */
  push32((uint32_t)(0x10411510u));
  /* 103e1fea push 5 */
  push32((uint32_t)(0x5u));
  /* 103e1fec call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e1ff2u);
  /* 103e1ff2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e1ff5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e1ff7 call 0x103e43a0 */
  push32(0x103e1ffcu); f_103e43a0();
  /* 103e1ffc mov esi, esp */
  ESI = (ESP);
  /* 103e1ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2000 push 0x10411440 */
  push32((uint32_t)(0x10411440u));
  /* 103e2005 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e200bu);
  /* 103e200b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e200e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2010 call 0x103e43a0 */
  push32(0x103e2015u); f_103e43a0();
  /* 103e2015 mov esi, esp */
  ESI = (ESP);
  /* 103e2017 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2019 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 103e201e push 0x10411558 */
  push32((uint32_t)(0x10411558u));
  /* 103e2023 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2025 call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e202bu);
  /* 103e202b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e202e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2030 call 0x103e43a0 */
  push32(0x103e2035u); f_103e43a0();
L_103e2035:;
  /* 103e2035 mov esi, esp */
  ESI = (ESP);
  /* 103e2037 call dword ptr [0x10414474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414474))), 0x103e203du);
  /* 103e203d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e203f call 0x103e43a0 */
  push32(0x103e2044u); f_103e43a0();
  /* 103e2044 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2049 jle 0x103e2118 */
  if ((C.zf||C.sf!=C.of)) goto L_103e2118;
  /* 103e204f mov esi, esp */
  ESI = (ESP);
  /* 103e2051 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103e2053 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2059u);
  /* 103e2059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e205c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e205e call 0x103e43a0 */
  push32(0x103e2063u); f_103e43a0();
  /* 103e2063 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2068 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e206a je 0x103e2118 */
  if (C.zf) goto L_103e2118;
  /* 103e2070 mov esi, esp */
  ESI = (ESP);
  /* 103e2072 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2074 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103e2076 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e207cu);
  /* 103e207c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e207f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2081 call 0x103e43a0 */
  push32(0x103e2086u); f_103e43a0();
  /* 103e2086 mov esi, esp */
  ESI = (ESP);
  /* 103e2088 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 103e208a push 0x104114b0 */
  push32((uint32_t)(0x104114b0u));
  /* 103e208f push 4 */
  push32((uint32_t)(0x4u));
  /* 103e2091 push 0x10411520 */
  push32((uint32_t)(0x10411520u));
  /* 103e2096 push 0x10411400 */
  push32((uint32_t)(0x10411400u));
  /* 103e209b push 0x104115b0 */
  push32((uint32_t)(0x104115b0u));
  /* 103e20a0 call dword ptr [0x1041447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041447c))), 0x103e20a6u);
  /* 103e20a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e20a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e20ab call 0x103e43a0 */
  push32(0x103e20b0u); f_103e43a0();
  /* 103e20b0 mov esi, esp */
  ESI = (ESP);
  /* 103e20b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e20b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e20b6 push 0x104114b0 */
  push32((uint32_t)(0x104114b0u));
  /* 103e20bb call dword ptr [0x10414480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414480))), 0x103e20c1u);
  /* 103e20c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e20c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e20c6 call 0x103e43a0 */
  push32(0x103e20cbu); f_103e43a0();
  /* 103e20cb mov esi, esp */
  ESI = (ESP);
  /* 103e20cd push 0x1040c3b0 */
  push32((uint32_t)(0x1040c3b0u));
  /* 103e20d2 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e20d8u);
  /* 103e20d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e20db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e20dd call 0x103e43a0 */
  push32(0x103e20e2u); f_103e43a0();
  /* 103e20e2 mov esi, esp */
  ESI = (ESP);
  /* 103e20e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e20e6 push 0x104115b0 */
  push32((uint32_t)(0x104115b0u));
  /* 103e20eb call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e20f1u);
  /* 103e20f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e20f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e20f6 call 0x103e43a0 */
  push32(0x103e20fbu); f_103e43a0();
  /* 103e20fb mov esi, esp */
  ESI = (ESP);
  /* 103e20fd push 0 */
  push32((uint32_t)(0x0u));
  /* 103e20ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 103e2101 push 0x104114a0 */
  push32((uint32_t)(0x104114a0u));
  /* 103e2106 push 4 */
  push32((uint32_t)(0x4u));
  /* 103e2108 call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e210eu);
  /* 103e210e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2113 call 0x103e43a0 */
  push32(0x103e2118u); f_103e43a0();
L_103e2118:;
  /* 103e2118 mov esi, esp */
  ESI = (ESP);
  /* 103e211a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103e211c call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2122u);
  /* 103e2122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2125 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2127 call 0x103e43a0 */
  push32(0x103e212cu); f_103e43a0();
  /* 103e212c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2133 jne 0x103e219c */
  if (!C.zf) goto L_103e219c;
  /* 103e2135 mov esi, esp */
  ESI = (ESP);
  /* 103e2137 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103e2139 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e213fu);
  /* 103e213f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2142 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2144 call 0x103e43a0 */
  push32(0x103e2149u); f_103e43a0();
  /* 103e2149 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e214e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2150 je 0x103e219c */
  if (C.zf) goto L_103e219c;
  /* 103e2152 mov esi, esp */
  ESI = (ESP);
  /* 103e2154 push 0x104115b0 */
  push32((uint32_t)(0x104115b0u));
  /* 103e2159 push 0x104114b0 */
  push32((uint32_t)(0x104114b0u));
  /* 103e215e call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e2164u);
  /* 103e2164 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2167 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2169 call 0x103e43a0 */
  push32(0x103e216eu); f_103e43a0();
  /* 103e216e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2170 jne 0x103e219c */
  if (!C.zf) goto L_103e219c;
  /* 103e2172 mov esi, esp */
  ESI = (ESP);
  /* 103e2174 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2176 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103e2178 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e217eu);
  /* 103e217e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2183 call 0x103e43a0 */
  push32(0x103e2188u); f_103e43a0();
  /* 103e2188 mov esi, esp */
  ESI = (ESP);
  /* 103e218a push 2 */
  push32((uint32_t)(0x2u));
  /* 103e218c call dword ptr [0x10414484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414484))), 0x103e2192u);
  /* 103e2192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2195 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2197 call 0x103e43a0 */
  push32(0x103e219cu); f_103e43a0();
L_103e219c:;
  /* 103e219c mov esi, esp */
  ESI = (ESP);
  /* 103e219e push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103e21a0 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e21a6u);
  /* 103e21a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e21a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e21ab call 0x103e43a0 */
  push32(0x103e21b0u); f_103e43a0();
  /* 103e21b0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e21b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e21b7 jne 0x103e2256 */
  if (!C.zf) goto L_103e2256;
  /* 103e21bd push 0x104115b0 */
  push32((uint32_t)(0x104115b0u));
  /* 103e21c2 call 0x103e1005 */
  push32(0x103e21c7u); f_103e1005();
  /* 103e21c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e21ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e21cc jne 0x103e2256 */
  if (!C.zf) goto L_103e2256;
  /* 103e21d2 mov esi, esp */
  ESI = (ESP);
  /* 103e21d4 push 0xe */
  push32((uint32_t)(0xeu));
  /* 103e21d6 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e21dcu);
  /* 103e21dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e21df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e21e1 call 0x103e43a0 */
  push32(0x103e21e6u); f_103e43a0();
  /* 103e21e6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e21eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e21ed je 0x103e2256 */
  if (C.zf) goto L_103e2256;
  /* 103e21ef mov esi, esp */
  ESI = (ESP);
  /* 103e21f1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 103e21f3 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e21f9u);
  /* 103e21f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e21fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e21fe call 0x103e43a0 */
  push32(0x103e2203u); f_103e43a0();
  /* 103e2203 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2208 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e220a je 0x103e2256 */
  if (C.zf) goto L_103e2256;
  /* 103e220c mov esi, esp */
  ESI = (ESP);
  /* 103e220e push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103e2210 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2216u);
  /* 103e2216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2219 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e221b call 0x103e43a0 */
  push32(0x103e2220u); f_103e43a0();
  /* 103e2220 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2227 jne 0x103e2256 */
  if (!C.zf) goto L_103e2256;
  /* 103e2229 mov esi, esp */
  ESI = (ESP);
  /* 103e222b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e222d push 0xe */
  push32((uint32_t)(0xeu));
  /* 103e222f call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e2235u);
  /* 103e2235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2238 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e223a call 0x103e43a0 */
  push32(0x103e223fu); f_103e43a0();
  /* 103e223f mov esi, esp */
  ESI = (ESP);
  /* 103e2241 push 0x1040c3a4 */
  push32((uint32_t)(0x1040c3a4u));
  /* 103e2246 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e224cu);
  /* 103e224c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e224f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2251 call 0x103e43a0 */
  push32(0x103e2256u); f_103e43a0();
L_103e2256:;
  /* 103e2256 mov esi, esp */
  ESI = (ESP);
  /* 103e2258 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103e225a call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2260u);
  /* 103e2260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2263 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2265 call 0x103e43a0 */
  push32(0x103e226au); f_103e43a0();
  /* 103e226a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e226f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2271 jne 0x103e2367 */
  if (!C.zf) goto L_103e2367;
  /* 103e2277 mov esi, esp */
  ESI = (ESP);
  /* 103e2279 push 0x104115b0 */
  push32((uint32_t)(0x104115b0u));
  /* 103e227e push 0x104114c0 */
  push32((uint32_t)(0x104114c0u));
  /* 103e2283 call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e2289u);
  /* 103e2289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e228c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e228e call 0x103e43a0 */
  push32(0x103e2293u); f_103e43a0();
  /* 103e2293 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2295 je 0x103e2367 */
  if (C.zf) goto L_103e2367;
  /* 103e229b mov esi, esp */
  ESI = (ESP);
  /* 103e229d push 0xd */
  push32((uint32_t)(0xdu));
  /* 103e229f call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e22a5u);
  /* 103e22a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e22a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e22aa call 0x103e43a0 */
  push32(0x103e22afu); f_103e43a0();
  /* 103e22af and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e22b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e22b6 je 0x103e2367 */
  if (C.zf) goto L_103e2367;
  /* 103e22bc mov esi, esp */
  ESI = (ESP);
  /* 103e22be push 0 */
  push32((uint32_t)(0x0u));
  /* 103e22c0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 103e22c2 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e22c8u);
  /* 103e22c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e22cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e22cd call 0x103e43a0 */
  push32(0x103e22d2u); f_103e43a0();
  /* 103e22d2 mov esi, esp */
  ESI = (ESP);
  /* 103e22d4 push 0x1040c398 */
  push32((uint32_t)(0x1040c398u));
  /* 103e22d9 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e22dfu);
  /* 103e22df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e22e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e22e4 call 0x103e43a0 */
  push32(0x103e22e9u); f_103e43a0();
  /* 103e22e9 mov esi, esp */
  ESI = (ESP);
  /* 103e22eb push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 103e22f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e22f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e22f4 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e22fau);
  /* 103e22fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e22fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e22ff call 0x103e43a0 */
  push32(0x103e2304u); f_103e43a0();
  /* 103e2304 mov esi, esp */
  ESI = (ESP);
  /* 103e2306 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 103e230b push 4 */
  push32((uint32_t)(0x4u));
  /* 103e230d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e230f call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e2315u);
  /* 103e2315 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2318 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e231a call 0x103e43a0 */
  push32(0x103e231fu); f_103e43a0();
  /* 103e231f mov esi, esp */
  ESI = (ESP);
  /* 103e2321 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 103e2326 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2328 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e232a call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e2330u);
  /* 103e2330 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2333 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2335 call 0x103e43a0 */
  push32(0x103e233au); f_103e43a0();
  /* 103e233a mov esi, esp */
  ESI = (ESP);
  /* 103e233c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e233e push 0x104115b0 */
  push32((uint32_t)(0x104115b0u));
  /* 103e2343 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2349u);
  /* 103e2349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e234c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e234e call 0x103e43a0 */
  push32(0x103e2353u); f_103e43a0();
  /* 103e2353 mov esi, esp */
  ESI = (ESP);
  /* 103e2355 push 4 */
  push32((uint32_t)(0x4u));
  /* 103e2357 call dword ptr [0x1041448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041448c))), 0x103e235du);
  /* 103e235d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2360 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2362 call 0x103e43a0 */
  push32(0x103e2367u); f_103e43a0();
L_103e2367:;
  /* 103e2367 mov esi, esp */
  ESI = (ESP);
  /* 103e2369 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103e236b call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2371u);
  /* 103e2371 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2374 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2376 call 0x103e43a0 */
  push32(0x103e237bu); f_103e43a0();
  /* 103e237b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2380 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2382 jne 0x103e23db */
  if (!C.zf) goto L_103e23db;
  /* 103e2384 mov esi, esp */
  ESI = (ESP);
  /* 103e2386 push 0x104115b0 */
  push32((uint32_t)(0x104115b0u));
  /* 103e238b push 0x104114a0 */
  push32((uint32_t)(0x104114a0u));
  /* 103e2390 call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e2396u);
  /* 103e2396 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2399 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e239b call 0x103e43a0 */
  push32(0x103e23a0u); f_103e43a0();
  /* 103e23a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e23a3 jne 0x103e23db */
  if (!C.zf) goto L_103e23db;
  /* 103e23a5 mov esi, esp */
  ESI = (ESP);
  /* 103e23a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e23a9 push 0x104115b0 */
  push32((uint32_t)(0x104115b0u));
  /* 103e23ae call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e23b4u);
  /* 103e23b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e23b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e23b9 call 0x103e43a0 */
  push32(0x103e23beu); f_103e43a0();
  /* 103e23be mov esi, esp */
  ESI = (ESP);
  /* 103e23c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e23c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e23c4 push 0x104114d0 */
  push32((uint32_t)(0x104114d0u));
  /* 103e23c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 103e23cb call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e23d1u);
  /* 103e23d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e23d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e23d6 call 0x103e43a0 */
  push32(0x103e23dbu); f_103e43a0();
L_103e23db:;
  /* 103e23db mov esi, esp */
  ESI = (ESP);
  /* 103e23dd push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 103e23df call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e23e5u);
  /* 103e23e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e23e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e23ea call 0x103e43a0 */
  push32(0x103e23efu); f_103e43a0();
  /* 103e23ef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e23f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e23f6 jne 0x103e24c3 */
  if (!C.zf) goto L_103e24c3;
  /* 103e23fc mov esi, esp */
  ESI = (ESP);
  /* 103e23fe push 0x104115b0 */
  push32((uint32_t)(0x104115b0u));
  /* 103e2403 push 0x104114d0 */
  push32((uint32_t)(0x104114d0u));
  /* 103e2408 call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e240eu);
  /* 103e240e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2411 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2413 call 0x103e43a0 */
  push32(0x103e2418u); f_103e43a0();
  /* 103e2418 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e241b jne 0x103e24c3 */
  if (!C.zf) goto L_103e24c3;
  /* 103e2421 mov esi, esp */
  ESI = (ESP);
  /* 103e2423 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2425 push 0x104115b0 */
  push32((uint32_t)(0x104115b0u));
  /* 103e242a call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2430u);
  /* 103e2430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2433 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2435 call 0x103e43a0 */
  push32(0x103e243au); f_103e43a0();
  /* 103e243a mov esi, esp */
  ESI = (ESP);
  /* 103e243c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e243e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2440 push 0x104114c0 */
  push32((uint32_t)(0x104114c0u));
  /* 103e2445 push 4 */
  push32((uint32_t)(0x4u));
  /* 103e2447 call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e244du);
  /* 103e244d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2450 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2452 call 0x103e43a0 */
  push32(0x103e2457u); f_103e43a0();
  /* 103e2457 mov esi, esp */
  ESI = (ESP);
  /* 103e2459 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e245b push 0x104115c0 */
  push32((uint32_t)(0x104115c0u));
  /* 103e2460 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2466u);
  /* 103e2466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e246b call 0x103e43a0 */
  push32(0x103e2470u); f_103e43a0();
  /* 103e2470 mov esi, esp */
  ESI = (ESP);
  /* 103e2472 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2474 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2476 push 0x104114a8 */
  push32((uint32_t)(0x104114a8u));
  /* 103e247b push 5 */
  push32((uint32_t)(0x5u));
  /* 103e247d call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e2483u);
  /* 103e2483 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2486 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2488 call 0x103e43a0 */
  push32(0x103e248du); f_103e43a0();
  /* 103e248d mov esi, esp */
  ESI = (ESP);
  /* 103e248f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2491 push 0x104115a8 */
  push32((uint32_t)(0x104115a8u));
  /* 103e2496 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e249cu);
  /* 103e249c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e249f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e24a1 call 0x103e43a0 */
  push32(0x103e24a6u); f_103e43a0();
  /* 103e24a6 mov esi, esp */
  ESI = (ESP);
  /* 103e24a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e24aa push 0 */
  push32((uint32_t)(0x0u));
  /* 103e24ac push 0x10411498 */
  push32((uint32_t)(0x10411498u));
  /* 103e24b1 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e24b3 call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e24b9u);
  /* 103e24b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e24bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e24be call 0x103e43a0 */
  push32(0x103e24c3u); f_103e43a0();
L_103e24c3:;
  /* 103e24c3 mov esi, esp */
  ESI = (ESP);
  /* 103e24c5 push 0x104115c0 */
  push32((uint32_t)(0x104115c0u));
  /* 103e24ca push 0x104114a8 */
  push32((uint32_t)(0x104114a8u));
  /* 103e24cf call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e24d5u);
  /* 103e24d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e24d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e24da call 0x103e43a0 */
  push32(0x103e24dfu); f_103e43a0();
  /* 103e24df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e24e1 jle 0x103e2519 */
  if ((C.zf||C.sf!=C.of)) goto L_103e2519;
  /* 103e24e3 mov esi, esp */
  ESI = (ESP);
  /* 103e24e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e24e7 push 0x104115c0 */
  push32((uint32_t)(0x104115c0u));
  /* 103e24ec call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e24f2u);
  /* 103e24f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e24f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e24f7 call 0x103e43a0 */
  push32(0x103e24fcu); f_103e43a0();
  /* 103e24fc mov esi, esp */
  ESI = (ESP);
  /* 103e24fe push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2500 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2502 push 0x10411498 */
  push32((uint32_t)(0x10411498u));
  /* 103e2507 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2509 call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e250fu);
  /* 103e250f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2512 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2514 call 0x103e43a0 */
  push32(0x103e2519u); f_103e43a0();
L_103e2519:;
  /* 103e2519 mov esi, esp */
  ESI = (ESP);
  /* 103e251b call dword ptr [0x10414474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414474))), 0x103e2521u);
  /* 103e2521 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2523 call 0x103e43a0 */
  push32(0x103e2528u); f_103e43a0();
  /* 103e2528 cmp eax, 0x222e0 */
  { uint32_t _a=(EAX),_b=(0x222e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e252d jle 0x103e25ad */
  if ((C.zf||C.sf!=C.of)) goto L_103e25ad;
  /* 103e252f mov esi, esp */
  ESI = (ESP);
  /* 103e2531 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 103e2533 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2539u);
  /* 103e2539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e253c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e253e call 0x103e43a0 */
  push32(0x103e2543u); f_103e43a0();
  /* 103e2543 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e254a je 0x103e25ad */
  if (C.zf) goto L_103e25ad;
  /* 103e254c push 5 */
  push32((uint32_t)(0x5u));
  /* 103e254e push 0x10411570 */
  push32((uint32_t)(0x10411570u));
  /* 103e2553 call 0x103e100f */
  push32(0x103e2558u); f_103e100f();
  /* 103e2558 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e255b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e255d jle 0x103e25ad */
  if ((C.zf||C.sf!=C.of)) goto L_103e25ad;
  /* 103e255f mov esi, esp */
  ESI = (ESP);
  /* 103e2561 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2563 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 103e2565 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e256bu);
  /* 103e256b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e256e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2570 call 0x103e43a0 */
  push32(0x103e2575u); f_103e43a0();
  /* 103e2575 mov esi, esp */
  ESI = (ESP);
  /* 103e2577 push 0x1040c38c */
  push32((uint32_t)(0x1040c38cu));
  /* 103e257c call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e2582u);
  /* 103e2582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2585 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2587 call 0x103e43a0 */
  push32(0x103e258cu); f_103e43a0();
  /* 103e258c mov esi, esp */
  ESI = (ESP);
  /* 103e258e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2590 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2592 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e2594 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e2596 push 0x1040c380 */
  push32((uint32_t)(0x1040c380u));
  /* 103e259b push 5 */
  push32((uint32_t)(0x5u));
  /* 103e259d call dword ptr [0x10414490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414490))), 0x103e25a3u);
  /* 103e25a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e25a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e25a8 call 0x103e43a0 */
  push32(0x103e25adu); f_103e43a0();
L_103e25ad:;
  /* 103e25ad mov esi, esp */
  ESI = (ESP);
  /* 103e25af push 0x10411438 */
  push32((uint32_t)(0x10411438u));
  /* 103e25b4 push 0x10411510 */
  push32((uint32_t)(0x10411510u));
  /* 103e25b9 call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e25bfu);
  /* 103e25bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e25c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e25c4 call 0x103e43a0 */
  push32(0x103e25c9u); f_103e43a0();
  /* 103e25c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e25cb jle 0x103e267a */
  if ((C.zf||C.sf!=C.of)) goto L_103e267a;
  /* 103e25d1 mov esi, esp */
  ESI = (ESP);
  /* 103e25d3 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 103e25d5 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e25dbu);
  /* 103e25db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e25de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e25e0 call 0x103e43a0 */
  push32(0x103e25e5u); f_103e43a0();
  /* 103e25e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e25ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e25ec je 0x103e267a */
  if (C.zf) goto L_103e267a;
  /* 103e25f2 mov esi, esp */
  ESI = (ESP);
  /* 103e25f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e25f6 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 103e25f8 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e25feu);
  /* 103e25fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2601 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2603 call 0x103e43a0 */
  push32(0x103e2608u); f_103e43a0();
  /* 103e2608 mov esi, esp */
  ESI = (ESP);
  /* 103e260a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e260c push 0x10411438 */
  push32((uint32_t)(0x10411438u));
  /* 103e2611 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2617u);
  /* 103e2617 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e261a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e261c call 0x103e43a0 */
  push32(0x103e2621u); f_103e43a0();
  /* 103e2621 mov esi, esp */
  ESI = (ESP);
  /* 103e2623 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2625 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 103e262a push 0x10411518 */
  push32((uint32_t)(0x10411518u));
  /* 103e262f push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2631 call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e2637u);
  /* 103e2637 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e263a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e263c call 0x103e43a0 */
  push32(0x103e2641u); f_103e43a0();
  /* 103e2641 mov esi, esp */
  ESI = (ESP);
  /* 103e2643 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2645 push 0x10411440 */
  push32((uint32_t)(0x10411440u));
  /* 103e264a call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2650u);
  /* 103e2650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2653 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2655 call 0x103e43a0 */
  push32(0x103e265au); f_103e43a0();
  /* 103e265a mov esi, esp */
  ESI = (ESP);
  /* 103e265c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e265e push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 103e2663 push 0x10411560 */
  push32((uint32_t)(0x10411560u));
  /* 103e2668 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e266a call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e2670u);
  /* 103e2670 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2673 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2675 call 0x103e43a0 */
  push32(0x103e267au); f_103e43a0();
L_103e267a:;
  /* 103e267a mov esi, esp */
  ESI = (ESP);
  /* 103e267c push 0x10411438 */
  push32((uint32_t)(0x10411438u));
  /* 103e2681 push 0x10411518 */
  push32((uint32_t)(0x10411518u));
  /* 103e2686 call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e268cu);
  /* 103e268c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e268f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2691 call 0x103e43a0 */
  push32(0x103e2696u); f_103e43a0();
  /* 103e2696 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2698 jle 0x103e2703 */
  if ((C.zf||C.sf!=C.of)) goto L_103e2703;
  /* 103e269a mov esi, esp */
  ESI = (ESP);
  /* 103e269c push 0x37 */
  push32((uint32_t)(0x37u));
  /* 103e269e call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e26a4u);
  /* 103e26a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e26a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e26a9 call 0x103e43a0 */
  push32(0x103e26aeu); f_103e43a0();
  /* 103e26ae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e26b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e26b5 je 0x103e2703 */
  if (C.zf) goto L_103e2703;
  /* 103e26b7 mov esi, esp */
  ESI = (ESP);
  /* 103e26b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e26bb push 0x37 */
  push32((uint32_t)(0x37u));
  /* 103e26bd call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e26c3u);
  /* 103e26c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e26c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e26c8 call 0x103e43a0 */
  push32(0x103e26cdu); f_103e43a0();
  /* 103e26cd mov esi, esp */
  ESI = (ESP);
  /* 103e26cf push 0 */
  push32((uint32_t)(0x0u));
  /* 103e26d1 push 0x10411438 */
  push32((uint32_t)(0x10411438u));
  /* 103e26d6 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e26dcu);
  /* 103e26dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e26df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e26e1 call 0x103e43a0 */
  push32(0x103e26e6u); f_103e43a0();
  /* 103e26e6 mov esi, esp */
  ESI = (ESP);
  /* 103e26e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e26ea push 0 */
  push32((uint32_t)(0x0u));
  /* 103e26ec push 0x10411550 */
  push32((uint32_t)(0x10411550u));
  /* 103e26f1 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e26f3 call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e26f9u);
  /* 103e26f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e26fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e26fe call 0x103e43a0 */
  push32(0x103e2703u); f_103e43a0();
L_103e2703:;
  /* 103e2703 mov esi, esp */
  ESI = (ESP);
  /* 103e2705 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 103e2707 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e270du);
  /* 103e270d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2710 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2712 call 0x103e43a0 */
  push32(0x103e2717u); f_103e43a0();
  /* 103e2717 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e271c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e271e jne 0x103e27d4 */
  if (!C.zf) goto L_103e27d4;
  /* 103e2724 mov esi, esp */
  ESI = (ESP);
  /* 103e2726 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 103e2728 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e272eu);
  /* 103e272e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2731 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2733 call 0x103e43a0 */
  push32(0x103e2738u); f_103e43a0();
  /* 103e2738 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e273d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e273f je 0x103e27d4 */
  if (C.zf) goto L_103e27d4;
  /* 103e2745 mov esi, esp */
  ESI = (ESP);
  /* 103e2747 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2749 push 0x10411438 */
  push32((uint32_t)(0x10411438u));
  /* 103e274e call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2754u);
  /* 103e2754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2757 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2759 call 0x103e43a0 */
  push32(0x103e275eu); f_103e43a0();
  /* 103e275e mov esi, esp */
  ESI = (ESP);
  /* 103e2760 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2762 call dword ptr [0x10414494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414494))), 0x103e2768u);
  /* 103e2768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e276b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e276d call 0x103e43a0 */
  push32(0x103e2772u); f_103e43a0();
  /* 103e2772 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2779 je 0x103e27d4 */
  if (C.zf) goto L_103e27d4;
  /* 103e277b mov esi, esp */
  ESI = (ESP);
  /* 103e277d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e277f push 0x39 */
  push32((uint32_t)(0x39u));
  /* 103e2781 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e2787u);
  /* 103e2787 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e278a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e278c call 0x103e43a0 */
  push32(0x103e2791u); f_103e43a0();
  /* 103e2791 mov esi, esp */
  ESI = (ESP);
  /* 103e2793 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2795 push 0x10411438 */
  push32((uint32_t)(0x10411438u));
  /* 103e279a call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e27a0u);
  /* 103e27a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e27a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e27a5 call 0x103e43a0 */
  push32(0x103e27aau); f_103e43a0();
  /* 103e27aa mov esi, esp */
  ESI = (ESP);
  /* 103e27ac push 5 */
  push32((uint32_t)(0x5u));
  /* 103e27ae call dword ptr [0x10414498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414498))), 0x103e27b4u);
  /* 103e27b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e27b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e27b9 call 0x103e43a0 */
  push32(0x103e27beu); f_103e43a0();
  /* 103e27be mov esi, esp */
  ESI = (ESP);
  /* 103e27c0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 103e27c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e27c4 call dword ptr [0x1041449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041449c))), 0x103e27cau);
  /* 103e27ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e27cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e27cf call 0x103e43a0 */
  push32(0x103e27d4u); f_103e43a0();
L_103e27d4:;
  /* 103e27d4 mov esi, esp */
  ESI = (ESP);
  /* 103e27d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e27d8 call dword ptr [0x104144a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144a0))), 0x103e27deu);
  /* 103e27de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e27e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e27e3 call 0x103e43a0 */
  push32(0x103e27e8u); f_103e43a0();
  /* 103e27e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e27ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e27ef je 0x103e28e2 */
  if (C.zf) goto L_103e28e2;
  /* 103e27f5 mov esi, esp */
  ESI = (ESP);
  /* 103e27f7 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 103e27f9 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e27ffu);
  /* 103e27ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2802 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2804 call 0x103e43a0 */
  push32(0x103e2809u); f_103e43a0();
  /* 103e2809 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e280e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2810 je 0x103e28e2 */
  if (C.zf) goto L_103e28e2;
  /* 103e2816 mov esi, esp */
  ESI = (ESP);
  /* 103e2818 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e281a push 0x10411450 */
  push32((uint32_t)(0x10411450u));
  /* 103e281f call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2825u);
  /* 103e2825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2828 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e282a call 0x103e43a0 */
  push32(0x103e282fu); f_103e43a0();
  /* 103e282f mov esi, esp */
  ESI = (ESP);
  /* 103e2831 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2833 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 103e2838 push 0x10411508 */
  push32((uint32_t)(0x10411508u));
  /* 103e283d push 5 */
  push32((uint32_t)(0x5u));
  /* 103e283f call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e2845u);
  /* 103e2845 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2848 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e284a call 0x103e43a0 */
  push32(0x103e284fu); f_103e43a0();
  /* 103e284f mov esi, esp */
  ESI = (ESP);
  /* 103e2851 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2853 push 0x10411438 */
  push32((uint32_t)(0x10411438u));
  /* 103e2858 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e285eu);
  /* 103e285e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2861 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2863 call 0x103e43a0 */
  push32(0x103e2868u); f_103e43a0();
  /* 103e2868 mov esi, esp */
  ESI = (ESP);
  /* 103e286a push 5 */
  push32((uint32_t)(0x5u));
  /* 103e286c call dword ptr [0x104144a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144a4))), 0x103e2872u);
  /* 103e2872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2877 call 0x103e43a0 */
  push32(0x103e287cu); f_103e43a0();
  /* 103e287c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e287e jne 0x103e28cc */
  if (!C.zf) goto L_103e28cc;
  /* 103e2880 mov esi, esp */
  ESI = (ESP);
  /* 103e2882 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2884 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 103e2886 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e288cu);
  /* 103e288c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e288f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2891 call 0x103e43a0 */
  push32(0x103e2896u); f_103e43a0();
  /* 103e2896 mov esi, esp */
  ESI = (ESP);
  /* 103e2898 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e289a push 0x10411450 */
  push32((uint32_t)(0x10411450u));
  /* 103e289f call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e28a5u);
  /* 103e28a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e28a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e28aa call 0x103e43a0 */
  push32(0x103e28afu); f_103e43a0();
  /* 103e28af mov esi, esp */
  ESI = (ESP);
  /* 103e28b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e28b3 push 0x10411528 */
  push32((uint32_t)(0x10411528u));
  /* 103e28b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e28ba call dword ptr [0x10414460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414460))), 0x103e28c0u);
  /* 103e28c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e28c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e28c5 call 0x103e43a0 */
  push32(0x103e28cau); f_103e43a0();
  /* 103e28ca jmp 0x103e28e2 */
  goto L_103e28e2;
L_103e28cc:;
  /* 103e28cc mov esi, esp */
  ESI = (ESP);
  /* 103e28ce push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 103e28d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e28d2 call dword ptr [0x1041449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041449c))), 0x103e28d8u);
  /* 103e28d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e28db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e28dd call 0x103e43a0 */
  push32(0x103e28e2u); f_103e43a0();
L_103e28e2:;
  /* 103e28e2 mov esi, esp */
  ESI = (ESP);
  /* 103e28e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e28e6 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e28ecu);
  /* 103e28ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e28ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e28f1 call 0x103e43a0 */
  push32(0x103e28f6u); f_103e43a0();
  /* 103e28f6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e28fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e28fd je 0x103e2bb4 */
  if (C.zf) goto L_103e2bb4;
  /* 103e2903 mov esi, esp */
  ESI = (ESP);
  /* 103e2905 push 0x10411418 */
  push32((uint32_t)(0x10411418u));
  /* 103e290a push 0x10411538 */
  push32((uint32_t)(0x10411538u));
  /* 103e290f call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e2915u);
  /* 103e2915 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2918 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e291a call 0x103e43a0 */
  push32(0x103e291fu); f_103e43a0();
  /* 103e291f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2922 jne 0x103e2bb4 */
  if (!C.zf) goto L_103e2bb4;
  /* 103e2928 mov esi, esp */
  ESI = (ESP);
  /* 103e292a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e292c push 2 */
  push32((uint32_t)(0x2u));
  /* 103e292e call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e2934u);
  /* 103e2934 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2937 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2939 call 0x103e43a0 */
  push32(0x103e293eu); f_103e43a0();
  /* 103e293e mov esi, esp */
  ESI = (ESP);
  /* 103e2940 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e2942 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e2944 push 0x10411538 */
  push32((uint32_t)(0x10411538u));
  /* 103e2949 call dword ptr [0x10414480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414480))), 0x103e294fu);
  /* 103e294f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2954 call 0x103e43a0 */
  push32(0x103e2959u); f_103e43a0();
  /* 103e2959 mov esi, esp */
  ESI = (ESP);
  /* 103e295b push 0x1040c378 */
  push32((uint32_t)(0x1040c378u));
  /* 103e2960 call dword ptr [0x104144a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144a8))), 0x103e2966u);
  /* 103e2966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2969 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e296b call 0x103e43a0 */
  push32(0x103e2970u); f_103e43a0();
  /* 103e2970 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2977 je 0x103e2a6f */
  if (C.zf) goto L_103e2a6f;
  /* 103e297d mov esi, esp */
  ESI = (ESP);
  /* 103e297f push 0x1040c36c */
  push32((uint32_t)(0x1040c36cu));
  /* 103e2984 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e298au);
  /* 103e298a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e298d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e298f call 0x103e43a0 */
  push32(0x103e2994u); f_103e43a0();
  /* 103e2994 mov esi, esp */
  ESI = (ESP);
  /* 103e2996 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2998 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e299a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e299c call dword ptr [0x10414450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414450))), 0x103e29a2u);
  /* 103e29a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e29a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e29a7 call 0x103e43a0 */
  push32(0x103e29acu); f_103e43a0();
  /* 103e29ac mov esi, esp */
  ESI = (ESP);
  /* 103e29ae push 1 */
  push32((uint32_t)(0x1u));
  /* 103e29b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e29b2 call dword ptr [0x104144ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144ac))), 0x103e29b8u);
  /* 103e29b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e29bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e29bd call 0x103e43a0 */
  push32(0x103e29c2u); f_103e43a0();
  /* 103e29c2 cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e29c7 jge 0x103e2a31 */
  if ((C.sf==C.of)) goto L_103e2a31;
  /* 103e29c9 mov esi, esp */
  ESI = (ESP);
  /* 103e29cb push 0x1040c360 */
  push32((uint32_t)(0x1040c360u));
  /* 103e29d0 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e29d6u);
  /* 103e29d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e29d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e29db call 0x103e43a0 */
  push32(0x103e29e0u); f_103e43a0();
  /* 103e29e0 mov esi, esp */
  ESI = (ESP);
  /* 103e29e2 push 0xfffffe0c */
  push32((uint32_t)(0xfffffe0cu));
  /* 103e29e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 103e29e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e29eb call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e29f1u);
  /* 103e29f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e29f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e29f6 call 0x103e43a0 */
  push32(0x103e29fbu); f_103e43a0();
  /* 103e29fb mov esi, esp */
  ESI = (ESP);
  /* 103e29fd push 0xfffffe0c */
  push32((uint32_t)(0xfffffe0cu));
  /* 103e2a02 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2a06 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e2a0cu);
  /* 103e2a0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2a0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2a11 call 0x103e43a0 */
  push32(0x103e2a16u); f_103e43a0();
  /* 103e2a16 mov esi, esp */
  ESI = (ESP);
  /* 103e2a18 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 103e2a1d push 3 */
  push32((uint32_t)(0x3u));
  /* 103e2a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2a21 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e2a27u);
  /* 103e2a27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2a2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2a2c call 0x103e43a0 */
  push32(0x103e2a31u); f_103e43a0();
L_103e2a31:;
  /* 103e2a31 mov esi, esp */
  ESI = (ESP);
  /* 103e2a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2a35 push 0x10411418 */
  push32((uint32_t)(0x10411418u));
  /* 103e2a3a call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2a40u);
  /* 103e2a40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2a43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2a45 call 0x103e43a0 */
  push32(0x103e2a4au); f_103e43a0();
  /* 103e2a4a mov esi, esp */
  ESI = (ESP);
  /* 103e2a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2a4e push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103e2a53 push 0x104114e0 */
  push32((uint32_t)(0x104114e0u));
  /* 103e2a58 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2a5a call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e2a60u);
  /* 103e2a60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2a63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2a65 call 0x103e43a0 */
  push32(0x103e2a6au); f_103e43a0();
  /* 103e2a6a jmp 0x103e2bb4 */
  goto L_103e2bb4;
L_103e2a6f:;
  /* 103e2a6f mov esi, esp */
  ESI = (ESP);
  /* 103e2a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2a73 push 3 */
  push32((uint32_t)(0x3u));
  /* 103e2a75 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e2a7bu);
  /* 103e2a7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2a7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2a80 call 0x103e43a0 */
  push32(0x103e2a85u); f_103e43a0();
  /* 103e2a85 mov esi, esp */
  ESI = (ESP);
  /* 103e2a87 push 0x1040c354 */
  push32((uint32_t)(0x1040c354u));
  /* 103e2a8c call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e2a92u);
  /* 103e2a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2a95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2a97 call 0x103e43a0 */
  push32(0x103e2a9cu); f_103e43a0();
  /* 103e2a9c mov esi, esp */
  ESI = (ESP);
  /* 103e2a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2aa0 push 0x104115d0 */
  push32((uint32_t)(0x104115d0u));
  /* 103e2aa5 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2aabu);
  /* 103e2aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2aae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2ab0 call 0x103e43a0 */
  push32(0x103e2ab5u); f_103e43a0();
  /* 103e2ab5 mov esi, esp */
  ESI = (ESP);
  /* 103e2ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2ab9 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103e2abe push 0x104114f8 */
  push32((uint32_t)(0x104114f8u));
  /* 103e2ac3 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2ac5 call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e2acbu);
  /* 103e2acb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2ace cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2ad0 call 0x103e43a0 */
  push32(0x103e2ad5u); f_103e43a0();
  /* 103e2ad5 mov esi, esp */
  ESI = (ESP);
  /* 103e2ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2ad9 push 0x104115e0 */
  push32((uint32_t)(0x104115e0u));
  /* 103e2ade call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2ae4u);
  /* 103e2ae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2ae7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2ae9 call 0x103e43a0 */
  push32(0x103e2aeeu); f_103e43a0();
  /* 103e2aee mov esi, esp */
  ESI = (ESP);
  /* 103e2af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2af2 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103e2af7 push 0x104114f8 */
  push32((uint32_t)(0x104114f8u));
  /* 103e2afc push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2afe call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e2b04u);
  /* 103e2b04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2b07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2b09 call 0x103e43a0 */
  push32(0x103e2b0eu); f_103e43a0();
  /* 103e2b0e mov esi, esp */
  ESI = (ESP);
  /* 103e2b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2b12 push 0x104115d8 */
  push32((uint32_t)(0x104115d8u));
  /* 103e2b17 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2b1du);
  /* 103e2b1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2b20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2b22 call 0x103e43a0 */
  push32(0x103e2b27u); f_103e43a0();
  /* 103e2b27 mov esi, esp */
  ESI = (ESP);
  /* 103e2b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2b2b push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103e2b30 push 0x10411500 */
  push32((uint32_t)(0x10411500u));
  /* 103e2b35 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2b37 call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e2b3du);
  /* 103e2b3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2b40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2b42 call 0x103e43a0 */
  push32(0x103e2b47u); f_103e43a0();
  /* 103e2b47 mov esi, esp */
  ESI = (ESP);
  /* 103e2b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2b4b push 0x104115e8 */
  push32((uint32_t)(0x104115e8u));
  /* 103e2b50 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2b56u);
  /* 103e2b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2b59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2b5b call 0x103e43a0 */
  push32(0x103e2b60u); f_103e43a0();
  /* 103e2b60 mov esi, esp */
  ESI = (ESP);
  /* 103e2b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2b64 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103e2b69 push 0x10411500 */
  push32((uint32_t)(0x10411500u));
  /* 103e2b6e push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2b70 call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e2b76u);
  /* 103e2b76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2b79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2b7b call 0x103e43a0 */
  push32(0x103e2b80u); f_103e43a0();
  /* 103e2b80 mov esi, esp */
  ESI = (ESP);
  /* 103e2b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2b84 push 0x10411418 */
  push32((uint32_t)(0x10411418u));
  /* 103e2b89 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2b8fu);
  /* 103e2b8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2b92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2b94 call 0x103e43a0 */
  push32(0x103e2b99u); f_103e43a0();
  /* 103e2b99 mov esi, esp */
  ESI = (ESP);
  /* 103e2b9b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2b9d push 0x104114f8 */
  push32((uint32_t)(0x104114f8u));
  /* 103e2ba2 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2ba4 call dword ptr [0x10414460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414460))), 0x103e2baau);
  /* 103e2baa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2bad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2baf call 0x103e43a0 */
  push32(0x103e2bb4u); f_103e43a0();
L_103e2bb4:;
  /* 103e2bb4 mov esi, esp */
  ESI = (ESP);
  /* 103e2bb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e2bb8 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2bbeu);
  /* 103e2bbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2bc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2bc3 call 0x103e43a0 */
  push32(0x103e2bc8u); f_103e43a0();
  /* 103e2bc8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2bcf jne 0x103e2c38 */
  if (!C.zf) goto L_103e2c38;
  /* 103e2bd1 mov esi, esp */
  ESI = (ESP);
  /* 103e2bd3 push 0x10411418 */
  push32((uint32_t)(0x10411418u));
  /* 103e2bd8 push 0x10411538 */
  push32((uint32_t)(0x10411538u));
  /* 103e2bdd call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e2be3u);
  /* 103e2be3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2be6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2be8 call 0x103e43a0 */
  push32(0x103e2bedu); f_103e43a0();
  /* 103e2bed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2bef jne 0x103e2c38 */
  if (!C.zf) goto L_103e2c38;
  /* 103e2bf1 mov esi, esp */
  ESI = (ESP);
  /* 103e2bf3 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 103e2bf5 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2bfbu);
  /* 103e2bfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2bfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2c00 call 0x103e43a0 */
  push32(0x103e2c05u); f_103e43a0();
  /* 103e2c05 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2c0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2c0c je 0x103e2c38 */
  if (C.zf) goto L_103e2c38;
  /* 103e2c0e mov esi, esp */
  ESI = (ESP);
  /* 103e2c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2c12 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 103e2c14 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e2c1au);
  /* 103e2c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2c1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2c1f call 0x103e43a0 */
  push32(0x103e2c24u); f_103e43a0();
  /* 103e2c24 mov esi, esp */
  ESI = (ESP);
  /* 103e2c26 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e2c28 call dword ptr [0x10414484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414484))), 0x103e2c2eu);
  /* 103e2c2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2c31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2c33 call 0x103e43a0 */
  push32(0x103e2c38u); f_103e43a0();
L_103e2c38:;
  /* 103e2c38 mov esi, esp */
  ESI = (ESP);
  /* 103e2c3a push 3 */
  push32((uint32_t)(0x3u));
  /* 103e2c3c call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2c42u);
  /* 103e2c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2c45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2c47 call 0x103e43a0 */
  push32(0x103e2c4cu); f_103e43a0();
  /* 103e2c4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2c51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2c53 je 0x103e2d7f */
  if (C.zf) goto L_103e2d7f;
  /* 103e2c59 push 0x10411418 */
  push32((uint32_t)(0x10411418u));
  /* 103e2c5e call 0x103e1005 */
  push32(0x103e2c63u); f_103e1005();
  /* 103e2c63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2c66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2c68 jne 0x103e2d7f */
  if (!C.zf) goto L_103e2d7f;
  /* 103e2c6e mov esi, esp */
  ESI = (ESP);
  /* 103e2c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2c72 push 3 */
  push32((uint32_t)(0x3u));
  /* 103e2c74 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e2c7au);
  /* 103e2c7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2c7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2c7f call 0x103e43a0 */
  push32(0x103e2c84u); f_103e43a0();
  /* 103e2c84 mov esi, esp */
  ESI = (ESP);
  /* 103e2c86 push 0x1040c34c */
  push32((uint32_t)(0x1040c34cu));
  /* 103e2c8b call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e2c91u);
  /* 103e2c91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2c94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2c96 call 0x103e43a0 */
  push32(0x103e2c9bu); f_103e43a0();
  /* 103e2c9b mov esi, esp */
  ESI = (ESP);
  /* 103e2c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2c9f push 0x104115d0 */
  push32((uint32_t)(0x104115d0u));
  /* 103e2ca4 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2caau);
  /* 103e2caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2cad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2caf call 0x103e43a0 */
  push32(0x103e2cb4u); f_103e43a0();
  /* 103e2cb4 mov esi, esp */
  ESI = (ESP);
  /* 103e2cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2cb8 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103e2cbd push 0x104114f8 */
  push32((uint32_t)(0x104114f8u));
  /* 103e2cc2 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2cc4 call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e2ccau);
  /* 103e2cca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2ccd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2ccf call 0x103e43a0 */
  push32(0x103e2cd4u); f_103e43a0();
  /* 103e2cd4 mov esi, esp */
  ESI = (ESP);
  /* 103e2cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2cd8 push 0x104115e0 */
  push32((uint32_t)(0x104115e0u));
  /* 103e2cdd call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2ce3u);
  /* 103e2ce3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2ce6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2ce8 call 0x103e43a0 */
  push32(0x103e2cedu); f_103e43a0();
  /* 103e2ced mov esi, esp */
  ESI = (ESP);
  /* 103e2cef push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2cf1 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103e2cf6 push 0x104114f8 */
  push32((uint32_t)(0x104114f8u));
  /* 103e2cfb push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2cfd call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e2d03u);
  /* 103e2d03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2d06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2d08 call 0x103e43a0 */
  push32(0x103e2d0du); f_103e43a0();
  /* 103e2d0d mov esi, esp */
  ESI = (ESP);
  /* 103e2d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2d11 push 0x104115d8 */
  push32((uint32_t)(0x104115d8u));
  /* 103e2d16 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2d1cu);
  /* 103e2d1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2d1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2d21 call 0x103e43a0 */
  push32(0x103e2d26u); f_103e43a0();
  /* 103e2d26 mov esi, esp */
  ESI = (ESP);
  /* 103e2d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2d2a push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103e2d2f push 0x10411500 */
  push32((uint32_t)(0x10411500u));
  /* 103e2d34 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2d36 call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e2d3cu);
  /* 103e2d3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2d3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2d41 call 0x103e43a0 */
  push32(0x103e2d46u); f_103e43a0();
  /* 103e2d46 mov esi, esp */
  ESI = (ESP);
  /* 103e2d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2d4a push 0x104115e8 */
  push32((uint32_t)(0x104115e8u));
  /* 103e2d4f call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2d55u);
  /* 103e2d55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2d58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2d5a call 0x103e43a0 */
  push32(0x103e2d5fu); f_103e43a0();
  /* 103e2d5f mov esi, esp */
  ESI = (ESP);
  /* 103e2d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2d63 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103e2d68 push 0x10411500 */
  push32((uint32_t)(0x10411500u));
  /* 103e2d6d push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2d6f call dword ptr [0x1041445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041445c))), 0x103e2d75u);
  /* 103e2d75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2d78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2d7a call 0x103e43a0 */
  push32(0x103e2d7fu); f_103e43a0();
L_103e2d7f:;
  /* 103e2d7f mov esi, esp */
  ESI = (ESP);
  /* 103e2d81 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 103e2d83 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2d89u);
  /* 103e2d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2d8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2d8e call 0x103e43a0 */
  push32(0x103e2d93u); f_103e43a0();
  /* 103e2d93 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2d9a je 0x103e2df0 */
  if (C.zf) goto L_103e2df0;
  /* 103e2d9c mov esi, esp */
  ESI = (ESP);
  /* 103e2d9e push 0x104115e0 */
  push32((uint32_t)(0x104115e0u));
  /* 103e2da3 push 0x104114f8 */
  push32((uint32_t)(0x104114f8u));
  /* 103e2da8 call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e2daeu);
  /* 103e2dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2db1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2db3 call 0x103e43a0 */
  push32(0x103e2db8u); f_103e43a0();
  /* 103e2db8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2dba jle 0x103e2df0 */
  if ((C.zf||C.sf!=C.of)) goto L_103e2df0;
  /* 103e2dbc mov esi, esp */
  ESI = (ESP);
  /* 103e2dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2dc0 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 103e2dc2 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e2dc8u);
  /* 103e2dc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2dcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2dcd call 0x103e43a0 */
  push32(0x103e2dd2u); f_103e43a0();
  /* 103e2dd2 mov esi, esp */
  ESI = (ESP);
  /* 103e2dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2dd6 push 0x10411530 */
  push32((uint32_t)(0x10411530u));
  /* 103e2ddb push 0x104115e0 */
  push32((uint32_t)(0x104115e0u));
  /* 103e2de0 call dword ptr [0x104144b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144b0))), 0x103e2de6u);
  /* 103e2de6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2de9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2deb call 0x103e43a0 */
  push32(0x103e2df0u); f_103e43a0();
L_103e2df0:;
  /* 103e2df0 mov esi, esp */
  ESI = (ESP);
  /* 103e2df2 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 103e2df4 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2dfau);
  /* 103e2dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2dfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2dff call 0x103e43a0 */
  push32(0x103e2e04u); f_103e43a0();
  /* 103e2e04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2e0b je 0x103e2e61 */
  if (C.zf) goto L_103e2e61;
  /* 103e2e0d mov esi, esp */
  ESI = (ESP);
  /* 103e2e0f push 0x104115e8 */
  push32((uint32_t)(0x104115e8u));
  /* 103e2e14 push 0x10411500 */
  push32((uint32_t)(0x10411500u));
  /* 103e2e19 call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e2e1fu);
  /* 103e2e1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2e22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2e24 call 0x103e43a0 */
  push32(0x103e2e29u); f_103e43a0();
  /* 103e2e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2e2b jle 0x103e2e61 */
  if ((C.zf||C.sf!=C.of)) goto L_103e2e61;
  /* 103e2e2d mov esi, esp */
  ESI = (ESP);
  /* 103e2e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2e31 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 103e2e33 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e2e39u);
  /* 103e2e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2e3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2e3e call 0x103e43a0 */
  push32(0x103e2e43u); f_103e43a0();
  /* 103e2e43 mov esi, esp */
  ESI = (ESP);
  /* 103e2e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2e47 push 0x10411528 */
  push32((uint32_t)(0x10411528u));
  /* 103e2e4c push 0x104115e8 */
  push32((uint32_t)(0x104115e8u));
  /* 103e2e51 call dword ptr [0x104144b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144b0))), 0x103e2e57u);
  /* 103e2e57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2e5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2e5c call 0x103e43a0 */
  push32(0x103e2e61u); f_103e43a0();
L_103e2e61:;
  /* 103e2e61 mov esi, esp */
  ESI = (ESP);
  /* 103e2e63 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 103e2e65 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2e6bu);
  /* 103e2e6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2e6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2e70 call 0x103e43a0 */
  push32(0x103e2e75u); f_103e43a0();
  /* 103e2e75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2e7c je 0x103e2f30 */
  if (C.zf) goto L_103e2f30;
  /* 103e2e82 mov esi, esp */
  ESI = (ESP);
  /* 103e2e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2e86 push 0x10411568 */
  push32((uint32_t)(0x10411568u));
  /* 103e2e8b call dword ptr [0x104144b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144b4))), 0x103e2e91u);
  /* 103e2e91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2e94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2e96 call 0x103e43a0 */
  push32(0x103e2e9bu); f_103e43a0();
  /* 103e2e9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2e9d jle 0x103e2f30 */
  if ((C.zf||C.sf!=C.of)) goto L_103e2f30;
  /* 103e2ea3 mov esi, esp */
  ESI = (ESP);
  /* 103e2ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2ea7 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 103e2ea9 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e2eafu);
  /* 103e2eaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2eb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2eb4 call 0x103e43a0 */
  push32(0x103e2eb9u); f_103e43a0();
  /* 103e2eb9 mov esi, esp */
  ESI = (ESP);
  /* 103e2ebb push 0x320 */
  push32((uint32_t)(0x320u));
  /* 103e2ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2ec2 push 0x10411568 */
  push32((uint32_t)(0x10411568u));
  /* 103e2ec7 push 0x104114e8 */
  push32((uint32_t)(0x104114e8u));
  /* 103e2ecc push 0x104113e8 */
  push32((uint32_t)(0x104113e8u));
  /* 103e2ed1 call dword ptr [0x104144b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144b8))), 0x103e2ed7u);
  /* 103e2ed7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2eda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2edc call 0x103e43a0 */
  push32(0x103e2ee1u); f_103e43a0();
  /* 103e2ee1 mov esi, esp */
  ESI = (ESP);
  /* 103e2ee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2ee5 push 0x10411590 */
  push32((uint32_t)(0x10411590u));
  /* 103e2eea call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e2ef0u);
  /* 103e2ef0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2ef3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2ef5 call 0x103e43a0 */
  push32(0x103e2efau); f_103e43a0();
  /* 103e2efa mov esi, esp */
  ESI = (ESP);
  /* 103e2efc push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2efe push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2f00 push 0x104113e8 */
  push32((uint32_t)(0x104113e8u));
  /* 103e2f05 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e2f07 call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e2f0du);
  /* 103e2f0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2f10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2f12 call 0x103e43a0 */
  push32(0x103e2f17u); f_103e43a0();
  /* 103e2f17 mov esi, esp */
  ESI = (ESP);
  /* 103e2f19 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 103e2f1e push 3 */
  push32((uint32_t)(0x3u));
  /* 103e2f20 call dword ptr [0x1041449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041449c))), 0x103e2f26u);
  /* 103e2f26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2f29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2f2b call 0x103e43a0 */
  push32(0x103e2f30u); f_103e43a0();
L_103e2f30:;
  /* 103e2f30 mov esi, esp */
  ESI = (ESP);
  /* 103e2f32 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 103e2f34 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2f3au);
  /* 103e2f3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2f3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2f3f call 0x103e43a0 */
  push32(0x103e2f44u); f_103e43a0();
  /* 103e2f44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2f49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2f4b jne 0x103e304a */
  if (!C.zf) goto L_103e304a;
  /* 103e2f51 mov esi, esp */
  ESI = (ESP);
  /* 103e2f53 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 103e2f55 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e2f5bu);
  /* 103e2f5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2f5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2f60 call 0x103e43a0 */
  push32(0x103e2f65u); f_103e43a0();
  /* 103e2f65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e2f6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2f6c je 0x103e304a */
  if (C.zf) goto L_103e304a;
  /* 103e2f72 mov esi, esp */
  ESI = (ESP);
  /* 103e2f74 push 0x10411590 */
  push32((uint32_t)(0x10411590u));
  /* 103e2f79 push 0x104113e8 */
  push32((uint32_t)(0x104113e8u));
  /* 103e2f7e call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e2f84u);
  /* 103e2f84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2f87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2f89 call 0x103e43a0 */
  push32(0x103e2f8eu); f_103e43a0();
  /* 103e2f8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e2f90 jle 0x103e304a */
  if ((C.zf||C.sf!=C.of)) goto L_103e304a;
  /* 103e2f96 mov esi, esp */
  ESI = (ESP);
  /* 103e2f98 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2f9a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 103e2f9c call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e2fa2u);
  /* 103e2fa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2fa5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2fa7 call 0x103e43a0 */
  push32(0x103e2facu); f_103e43a0();
  /* 103e2fac mov esi, esp */
  ESI = (ESP);
  /* 103e2fae push 0x1040c340 */
  push32((uint32_t)(0x1040c340u));
  /* 103e2fb3 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e2fb9u);
  /* 103e2fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2fbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2fbe call 0x103e43a0 */
  push32(0x103e2fc3u); f_103e43a0();
  /* 103e2fc3 mov esi, esp */
  ESI = (ESP);
  /* 103e2fc5 push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 103e2fca push 3 */
  push32((uint32_t)(0x3u));
  /* 103e2fcc push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2fce call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e2fd4u);
  /* 103e2fd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2fd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2fd9 call 0x103e43a0 */
  push32(0x103e2fdeu); f_103e43a0();
  /* 103e2fde mov esi, esp */
  ESI = (ESP);
  /* 103e2fe0 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 103e2fe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e2fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e2fe9 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e2fefu);
  /* 103e2fef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e2ff2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e2ff4 call 0x103e43a0 */
  push32(0x103e2ff9u); f_103e43a0();
  /* 103e2ff9 mov esi, esp */
  ESI = (ESP);
  /* 103e2ffb push 0xfffffe0c */
  push32((uint32_t)(0xfffffe0cu));
  /* 103e3000 push 4 */
  push32((uint32_t)(0x4u));
  /* 103e3002 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3004 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e300au);
  /* 103e300a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e300d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e300f call 0x103e43a0 */
  push32(0x103e3014u); f_103e43a0();
  /* 103e3014 mov esi, esp */
  ESI = (ESP);
  /* 103e3016 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3018 push 0x10411590 */
  push32((uint32_t)(0x10411590u));
  /* 103e301d call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e3023u);
  /* 103e3023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3026 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3028 call 0x103e43a0 */
  push32(0x103e302du); f_103e43a0();
  /* 103e302d mov esi, esp */
  ESI = (ESP);
  /* 103e302f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3031 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3033 push 0x104114e8 */
  push32((uint32_t)(0x104114e8u));
  /* 103e3038 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e303a call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e3040u);
  /* 103e3040 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3043 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3045 call 0x103e43a0 */
  push32(0x103e304au); f_103e43a0();
L_103e304a:;
  /* 103e304a mov esi, esp */
  ESI = (ESP);
  /* 103e304c push 0x10411590 */
  push32((uint32_t)(0x10411590u));
  /* 103e3051 push 0x104114e8 */
  push32((uint32_t)(0x104114e8u));
  /* 103e3056 call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e305cu);
  /* 103e305c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e305f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3061 call 0x103e43a0 */
  push32(0x103e3066u); f_103e43a0();
  /* 103e3066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3068 jle 0x103e3097 */
  if ((C.zf||C.sf!=C.of)) goto L_103e3097;
  /* 103e306a mov esi, esp */
  ESI = (ESP);
  /* 103e306c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e306e push 0x10411590 */
  push32((uint32_t)(0x10411590u));
  /* 103e3073 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e3079u);
  /* 103e3079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e307c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e307e call 0x103e43a0 */
  push32(0x103e3083u); f_103e43a0();
  /* 103e3083 mov esi, esp */
  ESI = (ESP);
  /* 103e3085 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e3087 call dword ptr [0x1041448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041448c))), 0x103e308du);
  /* 103e308d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3090 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3092 call 0x103e43a0 */
  push32(0x103e3097u); f_103e43a0();
L_103e3097:;
  /* 103e3097 mov esi, esp */
  ESI = (ESP);
  /* 103e3099 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 103e309b call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e30a1u);
  /* 103e30a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e30a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e30a6 call 0x103e43a0 */
  push32(0x103e30abu); f_103e43a0();
  /* 103e30ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e30b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e30b2 je 0x103e316a */
  if (C.zf) goto L_103e316a;
  /* 103e30b8 mov esi, esp */
  ESI = (ESP);
  /* 103e30ba push 0 */
  push32((uint32_t)(0x0u));
  /* 103e30bc push 0x10411568 */
  push32((uint32_t)(0x10411568u));
  /* 103e30c1 call dword ptr [0x104144b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144b4))), 0x103e30c7u);
  /* 103e30c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e30ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e30cc call 0x103e43a0 */
  push32(0x103e30d1u); f_103e43a0();
  /* 103e30d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e30d3 jle 0x103e316a */
  if ((C.zf||C.sf!=C.of)) goto L_103e316a;
  /* 103e30d9 mov esi, esp */
  ESI = (ESP);
  /* 103e30db push 3 */
  push32((uint32_t)(0x3u));
  /* 103e30dd call dword ptr [0x104144a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144a0))), 0x103e30e3u);
  /* 103e30e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e30e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e30e8 call 0x103e43a0 */
  push32(0x103e30edu); f_103e43a0();
  /* 103e30ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e30f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e30f4 je 0x103e316a */
  if (C.zf) goto L_103e316a;
  /* 103e30f6 mov esi, esp */
  ESI = (ESP);
  /* 103e30f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e30fa push 0x24 */
  push32((uint32_t)(0x24u));
  /* 103e30fc call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e3102u);
  /* 103e3102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3107 call 0x103e43a0 */
  push32(0x103e310cu); f_103e43a0();
  /* 103e310c mov esi, esp */
  ESI = (ESP);
  /* 103e310e push 0x320 */
  push32((uint32_t)(0x320u));
  /* 103e3113 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3115 push 0x10411568 */
  push32((uint32_t)(0x10411568u));
  /* 103e311a push 0x104114d8 */
  push32((uint32_t)(0x104114d8u));
  /* 103e311f push 0x104113f0 */
  push32((uint32_t)(0x104113f0u));
  /* 103e3124 call dword ptr [0x104144b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144b8))), 0x103e312au);
  /* 103e312a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e312d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e312f call 0x103e43a0 */
  push32(0x103e3134u); f_103e43a0();
  /* 103e3134 mov esi, esp */
  ESI = (ESP);
  /* 103e3136 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3138 push 0x104115c8 */
  push32((uint32_t)(0x104115c8u));
  /* 103e313d call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e3143u);
  /* 103e3143 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3146 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3148 call 0x103e43a0 */
  push32(0x103e314du); f_103e43a0();
  /* 103e314d mov esi, esp */
  ESI = (ESP);
  /* 103e314f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3151 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3153 push 0x104113f0 */
  push32((uint32_t)(0x104113f0u));
  /* 103e3158 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e315a call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e3160u);
  /* 103e3160 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3163 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3165 call 0x103e43a0 */
  push32(0x103e316au); f_103e43a0();
L_103e316a:;
  /* 103e316a mov esi, esp */
  ESI = (ESP);
  /* 103e316c push 0x24 */
  push32((uint32_t)(0x24u));
  /* 103e316e call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e3174u);
  /* 103e3174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3177 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3179 call 0x103e43a0 */
  push32(0x103e317eu); f_103e43a0();
  /* 103e317e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e3183 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3185 jne 0x103e329f */
  if (!C.zf) goto L_103e329f;
  /* 103e318b mov esi, esp */
  ESI = (ESP);
  /* 103e318d push 0x17 */
  push32((uint32_t)(0x17u));
  /* 103e318f call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e3195u);
  /* 103e3195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3198 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e319a call 0x103e43a0 */
  push32(0x103e319fu); f_103e43a0();
  /* 103e319f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e31a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e31a6 je 0x103e329f */
  if (C.zf) goto L_103e329f;
  /* 103e31ac mov esi, esp */
  ESI = (ESP);
  /* 103e31ae push 0x104115c8 */
  push32((uint32_t)(0x104115c8u));
  /* 103e31b3 push 0x104113f0 */
  push32((uint32_t)(0x104113f0u));
  /* 103e31b8 call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e31beu);
  /* 103e31be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e31c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e31c3 call 0x103e43a0 */
  push32(0x103e31c8u); f_103e43a0();
  /* 103e31c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e31ca jle 0x103e329f */
  if ((C.zf||C.sf!=C.of)) goto L_103e329f;
  /* 103e31d0 mov esi, esp */
  ESI = (ESP);
  /* 103e31d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e31d4 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 103e31d6 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e31dcu);
  /* 103e31dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e31df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e31e1 call 0x103e43a0 */
  push32(0x103e31e6u); f_103e43a0();
  /* 103e31e6 mov esi, esp */
  ESI = (ESP);
  /* 103e31e8 push 0x1040c334 */
  push32((uint32_t)(0x1040c334u));
  /* 103e31ed call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e31f3u);
  /* 103e31f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e31f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e31f8 call 0x103e43a0 */
  push32(0x103e31fdu); f_103e43a0();
  /* 103e31fd mov esi, esp */
  ESI = (ESP);
  /* 103e31ff push 0xffffd8f0 */
  push32((uint32_t)(0xffffd8f0u));
  /* 103e3204 push 3 */
  push32((uint32_t)(0x3u));
  /* 103e3206 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3208 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e320eu);
  /* 103e320e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3211 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3213 call 0x103e43a0 */
  push32(0x103e3218u); f_103e43a0();
  /* 103e3218 mov esi, esp */
  ESI = (ESP);
  /* 103e321a push 0xfffffa24 */
  push32((uint32_t)(0xfffffa24u));
  /* 103e321f push 1 */
  push32((uint32_t)(0x1u));
  /* 103e3221 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3223 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e3229u);
  /* 103e3229 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e322c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e322e call 0x103e43a0 */
  push32(0x103e3233u); f_103e43a0();
  /* 103e3233 mov esi, esp */
  ESI = (ESP);
  /* 103e3235 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 103e323a push 4 */
  push32((uint32_t)(0x4u));
  /* 103e323c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e323e call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e3244u);
  /* 103e3244 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3247 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3249 call 0x103e43a0 */
  push32(0x103e324eu); f_103e43a0();
  /* 103e324e mov esi, esp */
  ESI = (ESP);
  /* 103e3250 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 103e3255 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e3257 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3259 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e325fu);
  /* 103e325f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3262 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3264 call 0x103e43a0 */
  push32(0x103e3269u); f_103e43a0();
  /* 103e3269 mov esi, esp */
  ESI = (ESP);
  /* 103e326b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e326d push 0x104115c8 */
  push32((uint32_t)(0x104115c8u));
  /* 103e3272 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e3278u);
  /* 103e3278 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e327b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e327d call 0x103e43a0 */
  push32(0x103e3282u); f_103e43a0();
  /* 103e3282 mov esi, esp */
  ESI = (ESP);
  /* 103e3284 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3286 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3288 push 0x104114d8 */
  push32((uint32_t)(0x104114d8u));
  /* 103e328d push 5 */
  push32((uint32_t)(0x5u));
  /* 103e328f call dword ptr [0x10414464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414464))), 0x103e3295u);
  /* 103e3295 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3298 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e329a call 0x103e43a0 */
  push32(0x103e329fu); f_103e43a0();
L_103e329f:;
  /* 103e329f mov esi, esp */
  ESI = (ESP);
  /* 103e32a1 push 0x104115c8 */
  push32((uint32_t)(0x104115c8u));
  /* 103e32a6 push 0x104114d8 */
  push32((uint32_t)(0x104114d8u));
  /* 103e32ab call dword ptr [0x10414470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414470))), 0x103e32b1u);
  /* 103e32b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e32b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e32b6 call 0x103e43a0 */
  push32(0x103e32bbu); f_103e43a0();
  /* 103e32bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e32bd jle 0x103e32ec */
  if ((C.zf||C.sf!=C.of)) goto L_103e32ec;
  /* 103e32bf mov esi, esp */
  ESI = (ESP);
  /* 103e32c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e32c3 push 0x104115c8 */
  push32((uint32_t)(0x104115c8u));
  /* 103e32c8 call dword ptr [0x10414458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414458))), 0x103e32ceu);
  /* 103e32ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e32d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e32d3 call 0x103e43a0 */
  push32(0x103e32d8u); f_103e43a0();
  /* 103e32d8 mov esi, esp */
  ESI = (ESP);
  /* 103e32da push 5 */
  push32((uint32_t)(0x5u));
  /* 103e32dc call dword ptr [0x1041448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041448c))), 0x103e32e2u);
  /* 103e32e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e32e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e32e7 call 0x103e43a0 */
  push32(0x103e32ecu); f_103e43a0();
L_103e32ec:;
  /* 103e32ec mov esi, esp */
  ESI = (ESP);
  /* 103e32ee push 4 */
  push32((uint32_t)(0x4u));
  /* 103e32f0 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e32f6u);
  /* 103e32f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e32f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e32fb call 0x103e43a0 */
  push32(0x103e3300u); f_103e43a0();
  /* 103e3300 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e3305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3307 je 0x103e3373 */
  if (C.zf) goto L_103e3373;
  /* 103e3309 push 0x104115c0 */
  push32((uint32_t)(0x104115c0u));
  /* 103e330e call 0x103e1005 */
  push32(0x103e3313u); f_103e1005();
  /* 103e3313 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3318 jne 0x103e3373 */
  if (!C.zf) goto L_103e3373;
  /* 103e331a push 0x104115a8 */
  push32((uint32_t)(0x104115a8u));
  /* 103e331f call 0x103e1005 */
  push32(0x103e3324u); f_103e1005();
  /* 103e3324 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3327 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3329 jne 0x103e3373 */
  if (!C.zf) goto L_103e3373;
  /* 103e332b mov esi, esp */
  ESI = (ESP);
  /* 103e332d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e332f push 4 */
  push32((uint32_t)(0x4u));
  /* 103e3331 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e3337u);
  /* 103e3337 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e333a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e333c call 0x103e43a0 */
  push32(0x103e3341u); f_103e43a0();
  /* 103e3341 mov esi, esp */
  ESI = (ESP);
  /* 103e3343 push 0x1040c32c */
  push32((uint32_t)(0x1040c32cu));
  /* 103e3348 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e334eu);
  /* 103e334e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3353 call 0x103e43a0 */
  push32(0x103e3358u); f_103e43a0();
  /* 103e3358 mov esi, esp */
  ESI = (ESP);
  /* 103e335a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 103e335f push 1 */
  push32((uint32_t)(0x1u));
  /* 103e3361 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3363 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e3369u);
  /* 103e3369 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e336c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e336e call 0x103e43a0 */
  push32(0x103e3373u); f_103e43a0();
L_103e3373:;
  /* 103e3373 mov esi, esp */
  ESI = (ESP);
  /* 103e3375 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e3377 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e337du);
  /* 103e337d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3380 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3382 call 0x103e43a0 */
  push32(0x103e3387u); f_103e43a0();
  /* 103e3387 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e338c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e338e je 0x103e33e9 */
  if (C.zf) goto L_103e33e9;
  /* 103e3390 push 0x10411430 */
  push32((uint32_t)(0x10411430u));
  /* 103e3395 call 0x103e1005 */
  push32(0x103e339au); f_103e1005();
  /* 103e339a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e339d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e339f jne 0x103e33e9 */
  if (!C.zf) goto L_103e33e9;
  /* 103e33a1 mov esi, esp */
  ESI = (ESP);
  /* 103e33a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e33a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e33a7 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e33adu);
  /* 103e33ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e33b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e33b2 call 0x103e43a0 */
  push32(0x103e33b7u); f_103e43a0();
  /* 103e33b7 mov esi, esp */
  ESI = (ESP);
  /* 103e33b9 push 0x1040c324 */
  push32((uint32_t)(0x1040c324u));
  /* 103e33be call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e33c4u);
  /* 103e33c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e33c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e33c9 call 0x103e43a0 */
  push32(0x103e33ceu); f_103e43a0();
  /* 103e33ce mov esi, esp */
  ESI = (ESP);
  /* 103e33d0 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 103e33d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e33d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e33d9 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e33dfu);
  /* 103e33df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e33e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e33e4 call 0x103e43a0 */
  push32(0x103e33e9u); f_103e43a0();
L_103e33e9:;
  /* 103e33e9 mov esi, esp */
  ESI = (ESP);
  /* 103e33eb push 6 */
  push32((uint32_t)(0x6u));
  /* 103e33ed call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e33f3u);
  /* 103e33f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e33f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e33f8 call 0x103e43a0 */
  push32(0x103e33fdu); f_103e43a0();
  /* 103e33fd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e3402 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3404 je 0x103e3444 */
  if (C.zf) goto L_103e3444;
  /* 103e3406 push 0x10411428 */
  push32((uint32_t)(0x10411428u));
  /* 103e340b call 0x103e1005 */
  push32(0x103e3410u); f_103e1005();
  /* 103e3410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3413 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3415 jne 0x103e3444 */
  if (!C.zf) goto L_103e3444;
  /* 103e3417 mov esi, esp */
  ESI = (ESP);
  /* 103e3419 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e341b push 6 */
  push32((uint32_t)(0x6u));
  /* 103e341d call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e3423u);
  /* 103e3423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3426 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3428 call 0x103e43a0 */
  push32(0x103e342du); f_103e43a0();
  /* 103e342d mov esi, esp */
  ESI = (ESP);
  /* 103e342f push 0x1040c31c */
  push32((uint32_t)(0x1040c31cu));
  /* 103e3434 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e343au);
  /* 103e343a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e343d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e343f call 0x103e43a0 */
  push32(0x103e3444u); f_103e43a0();
L_103e3444:;
  /* 103e3444 mov esi, esp */
  ESI = (ESP);
  /* 103e3446 push 7 */
  push32((uint32_t)(0x7u));
  /* 103e3448 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e344eu);
  /* 103e344e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3451 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3453 call 0x103e43a0 */
  push32(0x103e3458u); f_103e43a0();
  /* 103e3458 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e345d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e345f je 0x103e34e7 */
  if (C.zf) goto L_103e34e7;
  /* 103e3465 mov esi, esp */
  ESI = (ESP);
  /* 103e3467 push 6 */
  push32((uint32_t)(0x6u));
  /* 103e3469 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e346fu);
  /* 103e346f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3472 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3474 call 0x103e43a0 */
  push32(0x103e3479u); f_103e43a0();
  /* 103e3479 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e347e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3480 jne 0x103e34e7 */
  if (!C.zf) goto L_103e34e7;
  /* 103e3482 mov esi, esp */
  ESI = (ESP);
  /* 103e3484 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3486 push 0x10411540 */
  push32((uint32_t)(0x10411540u));
  /* 103e348b call dword ptr [0x104144bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144bc))), 0x103e3491u);
  /* 103e3491 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3494 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3496 call 0x103e43a0 */
  push32(0x103e349bu); f_103e43a0();
  /* 103e349b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e349d je 0x103e34e7 */
  if (C.zf) goto L_103e34e7;
  /* 103e349f mov esi, esp */
  ESI = (ESP);
  /* 103e34a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e34a3 push 7 */
  push32((uint32_t)(0x7u));
  /* 103e34a5 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e34abu);
  /* 103e34ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e34ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e34b0 call 0x103e43a0 */
  push32(0x103e34b5u); f_103e43a0();
  /* 103e34b5 mov esi, esp */
  ESI = (ESP);
  /* 103e34b7 push 0x1040c314 */
  push32((uint32_t)(0x1040c314u));
  /* 103e34bc call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e34c2u);
  /* 103e34c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e34c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e34c7 call 0x103e43a0 */
  push32(0x103e34ccu); f_103e43a0();
  /* 103e34cc mov esi, esp */
  ESI = (ESP);
  /* 103e34ce push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 103e34d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e34d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e34d7 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e34ddu);
  /* 103e34dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e34e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e34e2 call 0x103e43a0 */
  push32(0x103e34e7u); f_103e43a0();
L_103e34e7:;
  /* 103e34e7 mov esi, esp */
  ESI = (ESP);
  /* 103e34e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e34eb call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e34f1u);
  /* 103e34f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e34f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e34f6 call 0x103e43a0 */
  push32(0x103e34fbu); f_103e43a0();
  /* 103e34fb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e3500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3502 je 0x103e354e */
  if (C.zf) goto L_103e354e;
  /* 103e3504 mov esi, esp */
  ESI = (ESP);
  /* 103e3506 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3508 push 0x104113f8 */
  push32((uint32_t)(0x104113f8u));
  /* 103e350d call dword ptr [0x104144b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144b4))), 0x103e3513u);
  /* 103e3513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3516 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3518 call 0x103e43a0 */
  push32(0x103e351du); f_103e43a0();
  /* 103e351d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e351f jle 0x103e354e */
  if ((C.zf||C.sf!=C.of)) goto L_103e354e;
  /* 103e3521 mov esi, esp */
  ESI = (ESP);
  /* 103e3523 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3525 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e3527 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e352du);
  /* 103e352d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3532 call 0x103e43a0 */
  push32(0x103e3537u); f_103e43a0();
  /* 103e3537 mov esi, esp */
  ESI = (ESP);
  /* 103e3539 push 0x1040c30c */
  push32((uint32_t)(0x1040c30cu));
  /* 103e353e call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e3544u);
  /* 103e3544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3547 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3549 call 0x103e43a0 */
  push32(0x103e354eu); f_103e43a0();
L_103e354e:;
  /* 103e354e mov esi, esp */
  ESI = (ESP);
  /* 103e3550 push 0xa */
  push32((uint32_t)(0xau));
  /* 103e3552 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e3558u);
  /* 103e3558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e355b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e355d call 0x103e43a0 */
  push32(0x103e3562u); f_103e43a0();
  /* 103e3562 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e3567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3569 je 0x103e35a9 */
  if (C.zf) goto L_103e35a9;
  /* 103e356b push 0x10411420 */
  push32((uint32_t)(0x10411420u));
  /* 103e3570 call 0x103e1005 */
  push32(0x103e3575u); f_103e1005();
  /* 103e3575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3578 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e357a jne 0x103e35a9 */
  if (!C.zf) goto L_103e35a9;
  /* 103e357c mov esi, esp */
  ESI = (ESP);
  /* 103e357e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3580 push 0xa */
  push32((uint32_t)(0xau));
  /* 103e3582 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e3588u);
  /* 103e3588 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e358b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e358d call 0x103e43a0 */
  push32(0x103e3592u); f_103e43a0();
  /* 103e3592 mov esi, esp */
  ESI = (ESP);
  /* 103e3594 push 0x1040c300 */
  push32((uint32_t)(0x1040c300u));
  /* 103e3599 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e359fu);
  /* 103e359f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e35a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e35a4 call 0x103e43a0 */
  push32(0x103e35a9u); f_103e43a0();
L_103e35a9:;
  /* 103e35a9 mov esi, esp */
  ESI = (ESP);
  /* 103e35ab push 0xb */
  push32((uint32_t)(0xbu));
  /* 103e35ad call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e35b3u);
  /* 103e35b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e35b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e35b8 call 0x103e43a0 */
  push32(0x103e35bdu); f_103e43a0();
  /* 103e35bd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e35c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e35c4 je 0x103e3615 */
  if (C.zf) goto L_103e3615;
  /* 103e35c6 push 0x10411440 */
  push32((uint32_t)(0x10411440u));
  /* 103e35cb call 0x103e1005 */
  push32(0x103e35d0u); f_103e1005();
  /* 103e35d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e35d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e35d5 jne 0x103e3615 */
  if (!C.zf) goto L_103e3615;
  /* 103e35d7 push 0x10411450 */
  push32((uint32_t)(0x10411450u));
  /* 103e35dc call 0x103e1005 */
  push32(0x103e35e1u); f_103e1005();
  /* 103e35e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e35e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e35e6 jne 0x103e3615 */
  if (!C.zf) goto L_103e3615;
  /* 103e35e8 mov esi, esp */
  ESI = (ESP);
  /* 103e35ea push 0 */
  push32((uint32_t)(0x0u));
  /* 103e35ec push 0xb */
  push32((uint32_t)(0xbu));
  /* 103e35ee call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e35f4u);
  /* 103e35f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e35f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e35f9 call 0x103e43a0 */
  push32(0x103e35feu); f_103e43a0();
  /* 103e35fe mov esi, esp */
  ESI = (ESP);
  /* 103e3600 push 0x1040c2f4 */
  push32((uint32_t)(0x1040c2f4u));
  /* 103e3605 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e360bu);
  /* 103e360b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e360e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3610 call 0x103e43a0 */
  push32(0x103e3615u); f_103e43a0();
L_103e3615:;
  /* 103e3615 mov esi, esp */
  ESI = (ESP);
  /* 103e3617 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103e3619 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e361fu);
  /* 103e361f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3622 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3624 call 0x103e43a0 */
  push32(0x103e3629u); f_103e43a0();
  /* 103e3629 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e362e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3630 je 0x103e3695 */
  if (C.zf) goto L_103e3695;
  /* 103e3632 mov esi, esp */
  ESI = (ESP);
  /* 103e3634 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e3636 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3638 call dword ptr [0x104144ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144ac))), 0x103e363eu);
  /* 103e363e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3641 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3643 call 0x103e43a0 */
  push32(0x103e3648u); f_103e43a0();
  /* 103e3648 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e364b jl 0x103e3668 */
  if ((C.sf!=C.of)) goto L_103e3668;
  /* 103e364d mov esi, esp */
  ESI = (ESP);
  /* 103e364f push 4 */
  push32((uint32_t)(0x4u));
  /* 103e3651 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3653 call dword ptr [0x104144ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144ac))), 0x103e3659u);
  /* 103e3659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e365c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e365e call 0x103e43a0 */
  push32(0x103e3663u); f_103e43a0();
  /* 103e3663 cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3666 jge 0x103e3695 */
  if ((C.sf==C.of)) goto L_103e3695;
L_103e3668:;
  /* 103e3668 mov esi, esp */
  ESI = (ESP);
  /* 103e366a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e366c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103e366e call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e3674u);
  /* 103e3674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3677 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3679 call 0x103e43a0 */
  push32(0x103e367eu); f_103e43a0();
  /* 103e367e mov esi, esp */
  ESI = (ESP);
  /* 103e3680 push 0x1040c2e8 */
  push32((uint32_t)(0x1040c2e8u));
  /* 103e3685 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e368bu);
  /* 103e368b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e368e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3690 call 0x103e43a0 */
  push32(0x103e3695u); f_103e43a0();
L_103e3695:;
  /* 103e3695 mov esi, esp */
  ESI = (ESP);
  /* 103e3697 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e3699 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e369b call dword ptr [0x104144ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144ac))), 0x103e36a1u);
  /* 103e36a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e36a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e36a6 call 0x103e43a0 */
  push32(0x103e36abu); f_103e43a0();
  /* 103e36ab cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e36ae jle 0x103e36e1 */
  if ((C.zf||C.sf!=C.of)) goto L_103e36e1;
  /* 103e36b0 mov esi, esp */
  ESI = (ESP);
  /* 103e36b2 push 4 */
  push32((uint32_t)(0x4u));
  /* 103e36b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e36b6 call dword ptr [0x104144ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144ac))), 0x103e36bcu);
  /* 103e36bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e36bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e36c1 call 0x103e43a0 */
  push32(0x103e36c6u); f_103e43a0();
  /* 103e36c6 cmp eax, 0x1a */
  { uint32_t _a=(EAX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e36c9 jle 0x103e36e1 */
  if ((C.zf||C.sf!=C.of)) goto L_103e36e1;
  /* 103e36cb mov esi, esp */
  ESI = (ESP);
  /* 103e36cd push 1 */
  push32((uint32_t)(0x1u));
  /* 103e36cf push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103e36d1 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e36d7u);
  /* 103e36d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e36da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e36dc call 0x103e43a0 */
  push32(0x103e36e1u); f_103e43a0();
L_103e36e1:;
  /* 103e36e1 mov esi, esp */
  ESI = (ESP);
  /* 103e36e3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103e36e5 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e36ebu);
  /* 103e36eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e36ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e36f0 call 0x103e43a0 */
  push32(0x103e36f5u); f_103e43a0();
  /* 103e36f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e36fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e36fc je 0x103e3745 */
  if (C.zf) goto L_103e3745;
  /* 103e36fe mov esi, esp */
  ESI = (ESP);
  /* 103e3700 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e3702 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3704 call dword ptr [0x104144ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144ac))), 0x103e370au);
  /* 103e370a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e370d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e370f call 0x103e43a0 */
  push32(0x103e3714u); f_103e43a0();
  /* 103e3714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3716 jne 0x103e3745 */
  if (!C.zf) goto L_103e3745;
  /* 103e3718 mov esi, esp */
  ESI = (ESP);
  /* 103e371a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e371c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103e371e call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e3724u);
  /* 103e3724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3727 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3729 call 0x103e43a0 */
  push32(0x103e372eu); f_103e43a0();
  /* 103e372e mov esi, esp */
  ESI = (ESP);
  /* 103e3730 push 0x1040c2dc */
  push32((uint32_t)(0x1040c2dcu));
  /* 103e3735 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e373bu);
  /* 103e373b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e373e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3740 call 0x103e43a0 */
  push32(0x103e3745u); f_103e43a0();
L_103e3745:;
  /* 103e3745 mov esi, esp */
  ESI = (ESP);
  /* 103e3747 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e3749 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e374b call dword ptr [0x104144ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144ac))), 0x103e3751u);
  /* 103e3751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3754 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3756 call 0x103e43a0 */
  push32(0x103e375bu); f_103e43a0();
  /* 103e375b cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e375e jle 0x103e3776 */
  if ((C.zf||C.sf!=C.of)) goto L_103e3776;
  /* 103e3760 mov esi, esp */
  ESI = (ESP);
  /* 103e3762 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e3764 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103e3766 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e376cu);
  /* 103e376c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e376f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3771 call 0x103e43a0 */
  push32(0x103e3776u); f_103e43a0();
L_103e3776:;
  /* 103e3776 mov esi, esp */
  ESI = (ESP);
  /* 103e3778 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 103e377a call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e3780u);
  /* 103e3780 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3783 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3785 call 0x103e43a0 */
  push32(0x103e378au); f_103e43a0();
  /* 103e378a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e378f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3791 je 0x103e37ec */
  if (C.zf) goto L_103e37ec;
  /* 103e3793 mov esi, esp */
  ESI = (ESP);
  /* 103e3795 push 5 */
  push32((uint32_t)(0x5u));
  /* 103e3797 push 0x10411460 */
  push32((uint32_t)(0x10411460u));
  /* 103e379c call dword ptr [0x104144bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144bc))), 0x103e37a2u);
  /* 103e37a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e37a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e37a7 call 0x103e43a0 */
  push32(0x103e37acu); f_103e43a0();
  /* 103e37ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e37ae jne 0x103e37ec */
  if (!C.zf) goto L_103e37ec;
  /* 103e37b0 mov esi, esp */
  ESI = (ESP);
  /* 103e37b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e37b4 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 103e37b6 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e37bcu);
  /* 103e37bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e37bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e37c1 call 0x103e43a0 */
  push32(0x103e37c6u); f_103e43a0();
  /* 103e37c6 mov esi, esp */
  ESI = (ESP);
  /* 103e37c8 push 0x1040c2d0 */
  push32((uint32_t)(0x1040c2d0u));
  /* 103e37cd call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e37d3u);
  /* 103e37d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e37d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e37d8 call 0x103e43a0 */
  push32(0x103e37ddu); f_103e43a0();
  /* 103e37dd mov esi, esp */
  ESI = (ESP);
  /* 103e37df call dword ptr [0x104144c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144c0))), 0x103e37e5u);
  /* 103e37e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e37e7 call 0x103e43a0 */
  push32(0x103e37ecu); f_103e43a0();
L_103e37ec:;
  /* 103e37ec mov esi, esp */
  ESI = (ESP);
  /* 103e37ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103e37f0 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e37f6u);
  /* 103e37f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e37f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e37fb call 0x103e43a0 */
  push32(0x103e3800u); f_103e43a0();
  /* 103e3800 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e3805 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3807 je 0x103e3875 */
  if (C.zf) goto L_103e3875;
  /* 103e3809 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e380b push 0x10411578 */
  push32((uint32_t)(0x10411578u));
  /* 103e3810 call 0x103e100f */
  push32(0x103e3815u); f_103e100f();
  /* 103e3815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e381a jne 0x103e3875 */
  if (!C.zf) goto L_103e3875;
  /* 103e381c mov esi, esp */
  ESI = (ESP);
  /* 103e381e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3820 push 0x10411470 */
  push32((uint32_t)(0x10411470u));
  /* 103e3825 call dword ptr [0x104144b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144b4))), 0x103e382bu);
  /* 103e382b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e382e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3830 call 0x103e43a0 */
  push32(0x103e3835u); f_103e43a0();
  /* 103e3835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3837 jne 0x103e3875 */
  if (!C.zf) goto L_103e3875;
  /* 103e3839 mov esi, esp */
  ESI = (ESP);
  /* 103e383b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e383d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103e383f call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e3845u);
  /* 103e3845 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3848 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e384a call 0x103e43a0 */
  push32(0x103e384fu); f_103e43a0();
  /* 103e384f mov esi, esp */
  ESI = (ESP);
  /* 103e3851 push 0x1040c2c4 */
  push32((uint32_t)(0x1040c2c4u));
  /* 103e3856 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e385cu);
  /* 103e385c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e385f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3861 call 0x103e43a0 */
  push32(0x103e3866u); f_103e43a0();
  /* 103e3866 mov esi, esp */
  ESI = (ESP);
  /* 103e3868 call dword ptr [0x104144c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144c4))), 0x103e386eu);
  /* 103e386e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3870 call 0x103e43a0 */
  push32(0x103e3875u); f_103e43a0();
L_103e3875:;
  /* 103e3875 mov esi, esp */
  ESI = (ESP);
  /* 103e3877 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103e3879 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e387fu);
  /* 103e387f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3882 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3884 call 0x103e43a0 */
  push32(0x103e3889u); f_103e43a0();
  /* 103e3889 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e388e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3890 je 0x103e38d0 */
  if (C.zf) goto L_103e38d0;
  /* 103e3892 push 0x10411598 */
  push32((uint32_t)(0x10411598u));
  /* 103e3897 call 0x103e1005 */
  push32(0x103e389cu); f_103e1005();
  /* 103e389c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e389f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e38a1 jne 0x103e38d0 */
  if (!C.zf) goto L_103e38d0;
  /* 103e38a3 mov esi, esp */
  ESI = (ESP);
  /* 103e38a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e38a7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103e38a9 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e38afu);
  /* 103e38af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e38b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e38b4 call 0x103e43a0 */
  push32(0x103e38b9u); f_103e43a0();
  /* 103e38b9 mov esi, esp */
  ESI = (ESP);
  /* 103e38bb push 0x1040c2b8 */
  push32((uint32_t)(0x1040c2b8u));
  /* 103e38c0 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e38c6u);
  /* 103e38c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e38c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e38cb call 0x103e43a0 */
  push32(0x103e38d0u); f_103e43a0();
L_103e38d0:;
  /* 103e38d0 mov esi, esp */
  ESI = (ESP);
  /* 103e38d2 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 103e38d4 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e38dau);
  /* 103e38da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e38dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e38df call 0x103e43a0 */
  push32(0x103e38e4u); f_103e43a0();
  /* 103e38e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e38e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e38eb je 0x103e3973 */
  if (C.zf) goto L_103e3973;
  /* 103e38f1 mov esi, esp */
  ESI = (ESP);
  /* 103e38f3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103e38f5 call dword ptr [0x10414448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414448))), 0x103e38fbu);
  /* 103e38fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e38fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3900 call 0x103e43a0 */
  push32(0x103e3905u); f_103e43a0();
  /* 103e3905 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e390a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e390c jne 0x103e3973 */
  if (!C.zf) goto L_103e3973;
  /* 103e390e mov esi, esp */
  ESI = (ESP);
  /* 103e3910 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3912 push 0x104114f0 */
  push32((uint32_t)(0x104114f0u));
  /* 103e3917 call dword ptr [0x104144bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144bc))), 0x103e391du);
  /* 103e391d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3920 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3922 call 0x103e43a0 */
  push32(0x103e3927u); f_103e43a0();
  /* 103e3927 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e3929 jle 0x103e3973 */
  if ((C.zf||C.sf!=C.of)) goto L_103e3973;
  /* 103e392b mov esi, esp */
  ESI = (ESP);
  /* 103e392d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e392f push 0x15 */
  push32((uint32_t)(0x15u));
  /* 103e3931 call dword ptr [0x1041444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041444c))), 0x103e3937u);
  /* 103e3937 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e393a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e393c call 0x103e43a0 */
  push32(0x103e3941u); f_103e43a0();
  /* 103e3941 mov esi, esp */
  ESI = (ESP);
  /* 103e3943 push 0x1040c2ac */
  push32((uint32_t)(0x1040c2acu));
  /* 103e3948 call dword ptr [0x10414454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414454))), 0x103e394eu);
  /* 103e394e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3951 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3953 call 0x103e43a0 */
  push32(0x103e3958u); f_103e43a0();
  /* 103e3958 mov esi, esp */
  ESI = (ESP);
  /* 103e395a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 103e395f push 1 */
  push32((uint32_t)(0x1u));
  /* 103e3961 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3963 call dword ptr [0x10414488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414488))), 0x103e3969u);
  /* 103e3969 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e396c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e396e call 0x103e43a0 */
  push32(0x103e3973u); f_103e43a0();
L_103e3973:;
  /* 103e3973 mov esi, esp */
  ESI = (ESP);
  /* 103e3975 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3977 push 0x104114c8 */
  push32((uint32_t)(0x104114c8u));
  /* 103e397c call dword ptr [0x104144bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144bc))), 0x103e3982u);
  /* 103e3982 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e3985 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e3987 call 0x103e43a0 */
  push32(0x103e398cu); f_103e43a0();
  /* 103e398c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e398e jle 0x103e39ae */
  if ((C.zf||C.sf!=C.of)) goto L_103e39ae;
  /* 103e3990 mov esi, esp */
  ESI = (ESP);
  /* 103e3992 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e3994 push 0x104114c8 */
  push32((uint32_t)(0x104114c8u));
  /* 103e3999 push 0x104115a0 */
  push32((uint32_t)(0x104115a0u));
  /* 103e399e call dword ptr [0x104144c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144c8))), 0x103e39a4u);
  /* 103e39a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e39a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e39a9 call 0x103e43a0 */
  push32(0x103e39aeu); f_103e43a0();
L_103e39ae:;
  /* 103e39ae mov esi, esp */
  ESI = (ESP);
  /* 103e39b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e39b2 push 0x104114b8 */
  push32((uint32_t)(0x104114b8u));
  /* 103e39b7 call dword ptr [0x104144bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144bc))), 0x103e39bdu);
  /* 103e39bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e39c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e39c2 call 0x103e43a0 */
  push32(0x103e39c7u); f_103e43a0();
  /* 103e39c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e39c9 jle 0x103e39e9 */
  if ((C.zf||C.sf!=C.of)) goto L_103e39e9;
  /* 103e39cb mov esi, esp */
  ESI = (ESP);
  /* 103e39cd push 0 */
  push32((uint32_t)(0x0u));
  /* 103e39cf push 0x104114b8 */
  push32((uint32_t)(0x104114b8u));
  /* 103e39d4 push 0x10411588 */
  push32((uint32_t)(0x10411588u));
  /* 103e39d9 call dword ptr [0x104144c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104144c8))), 0x103e39dfu);
  /* 103e39df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e39e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e39e4 call 0x103e43a0 */
  push32(0x103e39e9u); f_103e43a0();
L_103e39e9:;
  /* 103e39e9 pop edi */
  EDI = (pop32());
  /* 103e39ea pop esi */
  ESI = (pop32());
  /* 103e39eb pop ebx */
  EBX = (pop32());
  /* 103e39ec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e39ef cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e39f1 call 0x103e43a0 */
  push32(0x103e39f6u); f_103e43a0();
  /* 103e39f6 mov esp, ebp */
  ESP = (EBP);
  /* 103e39f8 pop ebp */
  EBP = (pop32());
  /* 103e39f9 ret  */
  ESPCHK(0x103e1a50u, _esp0);
  ESP += 4; return;
}

/* FUN_100041f0 @ 0x103e41f0 (63 bytes, 26 insns) */
void f_103e41f0(void) {
  FTRACE(0x103e41f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e41f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e41f1 mov ebp, esp */
  EBP = (ESP);
  /* 103e41f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e41f6 push ebx */
  push32((uint32_t)(EBX));
  /* 103e41f7 push esi */
  push32((uint32_t)(ESI));
  /* 103e41f8 push edi */
  push32((uint32_t)(EDI));
  /* 103e41f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 103e41fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 103e4201 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 103e4206 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103e4208 mov esi, esp */
  ESI = (ESP);
  /* 103e420a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e420d push eax */
  push32((uint32_t)(EAX));
  /* 103e420e call dword ptr [0x10414444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414444))), 0x103e4214u);
  /* 103e4214 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4217 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4219 call 0x103e43a0 */
  push32(0x103e421eu); f_103e43a0();
  /* 103e421e pop edi */
  EDI = (pop32());
  /* 103e421f pop esi */
  ESI = (pop32());
  /* 103e4220 pop ebx */
  EBX = (pop32());
  /* 103e4221 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4224 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4226 call 0x103e43a0 */
  push32(0x103e422bu); f_103e43a0();
  /* 103e422b mov esp, ebp */
  ESP = (EBP);
  /* 103e422d pop ebp */
  EBP = (pop32());
  /* 103e422e ret  */
  ESPCHK(0x103e41f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004240 @ 0x103e4240 (67 bytes, 28 insns) */
void f_103e4240(void) {
  FTRACE(0x103e4240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4240 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4241 mov ebp, esp */
  EBP = (ESP);
  /* 103e4243 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e4246 push ebx */
  push32((uint32_t)(EBX));
  /* 103e4247 push esi */
  push32((uint32_t)(ESI));
  /* 103e4248 push edi */
  push32((uint32_t)(EDI));
  /* 103e4249 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 103e424c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 103e4251 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 103e4256 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103e4258 mov esi, esp */
  ESI = (ESP);
  /* 103e425a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 103e425d push eax */
  push32((uint32_t)(EAX));
  /* 103e425e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4261 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4262 call dword ptr [0x10414440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414440))), 0x103e4268u);
  /* 103e4268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e426b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e426d call 0x103e43a0 */
  push32(0x103e4272u); f_103e43a0();
  /* 103e4272 pop edi */
  EDI = (pop32());
  /* 103e4273 pop esi */
  ESI = (pop32());
  /* 103e4274 pop ebx */
  EBX = (pop32());
  /* 103e4275 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4278 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e427a call 0x103e43a0 */
  push32(0x103e427fu); f_103e43a0();
  /* 103e427f mov esp, ebp */
  ESP = (EBP);
  /* 103e4281 pop ebp */
  EBP = (pop32());
  /* 103e4282 ret  */
  ESPCHK(0x103e4240u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x103e43a0 (56 bytes, 28 insns) */
void f_103e43a0(void) {
  FTRACE(0x103e43a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e43a0 jne 0x103e43a3 */
  if (!C.zf) goto L_103e43a3;
  /* 103e43a2 ret  */
  ESPCHK(0x103e43a0u, _esp0);
  ESP += 4; return;
L_103e43a3:;
  /* 103e43a3 push ebp */
  push32((uint32_t)(EBP));
  /* 103e43a4 mov ebp, esp */
  EBP = (ESP);
  /* 103e43a6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e43a9 push eax */
  push32((uint32_t)(EAX));
  /* 103e43aa push edx */
  push32((uint32_t)(EDX));
  /* 103e43ab push ebx */
  push32((uint32_t)(EBX));
  /* 103e43ac push esi */
  push32((uint32_t)(ESI));
  /* 103e43ad push edi */
  push32((uint32_t)(EDI));
  /* 103e43ae push 0x1040c3ec */
  push32((uint32_t)(0x1040c3ecu));
  /* 103e43b3 push 0x1040c3e8 */
  push32((uint32_t)(0x1040c3e8u));
  /* 103e43b8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 103e43ba push 0x1040c3d8 */
  push32((uint32_t)(0x1040c3d8u));
  /* 103e43bf push 1 */
  push32((uint32_t)(0x1u));
  /* 103e43c1 call 0x103e4770 */
  push32(0x103e43c6u); f_103e4770();
  /* 103e43c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e43c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e43cc jne 0x103e43cf */
  if (!C.zf) goto L_103e43cf;
  /* 103e43ce int3  */
  x86_unimpl("int3 @ 0x103e43ce");
L_103e43cf:;
  /* 103e43cf pop edi */
  EDI = (pop32());
  /* 103e43d0 pop esi */
  ESI = (pop32());
  /* 103e43d1 pop ebx */
  EBX = (pop32());
  /* 103e43d2 pop edx */
  EDX = (pop32());
  /* 103e43d3 pop eax */
  EAX = (pop32());
  /* 103e43d4 mov esp, ebp */
  ESP = (EBP);
  /* 103e43d6 pop ebp */
  EBP = (pop32());
  /* 103e43d7 ret  */
  ESPCHK(0x103e43a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e0 @ 0x103e43e0 (313 bytes, 78 insns) */
void f_103e43e0(void) {
  FTRACE(0x103e43e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e43e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e43e1 mov ebp, esp */
  EBP = (ESP);
  /* 103e43e3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e43e7 jne 0x103e44a7 */
  if (!C.zf) goto L_103e44a7;
  /* 103e43ed call dword ptr [0x10414370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414370))), 0x103e43f3u);
  /* 103e43f3 mov dword ptr [0x1041167c], eax */
  w32((uint32_t)(0x1041167c), (EAX));
  /* 103e43f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e43fa call 0x103e7ea0 */
  push32(0x103e43ffu); f_103e7ea0();
  /* 103e43ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4402 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e4404 jne 0x103e440d */
  if (!C.zf) goto L_103e440d;
  /* 103e4406 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e4408 jmp 0x103e4515 */
  goto L_103e4515;
L_103e440d:;
  /* 103e440d mov eax, dword ptr [0x1041167c] */
  EAX = (r32((uint32_t)(0x1041167c)));
  /* 103e4412 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103e4415 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e441a mov dword ptr [0x10411688], eax */
  w32((uint32_t)(0x10411688), (EAX));
  /* 103e441f mov ecx, dword ptr [0x1041167c] */
  ECX = (r32((uint32_t)(0x1041167c)));
  /* 103e4425 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e442b mov dword ptr [0x10411684], ecx */
  w32((uint32_t)(0x10411684), (ECX));
  /* 103e4431 mov edx, dword ptr [0x10411684] */
  EDX = (r32((uint32_t)(0x10411684)));
  /* 103e4437 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 103e443a add edx, dword ptr [0x10411688] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10411688))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4440 mov dword ptr [0x10411680], edx */
  w32((uint32_t)(0x10411680), (EDX));
  /* 103e4446 mov eax, dword ptr [0x1041167c] */
  EAX = (r32((uint32_t)(0x1041167c)));
  /* 103e444b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103e444e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e4453 mov dword ptr [0x1041167c], eax */
  w32((uint32_t)(0x1041167c), (EAX));
  /* 103e4458 call 0x103e5010 */
  push32(0x103e445du); f_103e5010();
  /* 103e445d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e445f jne 0x103e446d */
  if (!C.zf) goto L_103e446d;
  /* 103e4461 call 0x103e7ef0 */
  push32(0x103e4466u); f_103e7ef0();
  /* 103e4466 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e4468 jmp 0x103e4515 */
  goto L_103e4515;
L_103e446d:;
  /* 103e446d call dword ptr [0x1041436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041436c))), 0x103e4473u);
  /* 103e4473 mov dword ptr [0x104131cc], eax */
  w32((uint32_t)(0x104131cc), (EAX));
  /* 103e4478 call 0x103e7c80 */
  push32(0x103e447du); f_103e7c80();
  /* 103e447d mov dword ptr [0x10411664], eax */
  w32((uint32_t)(0x10411664), (EAX));
  /* 103e4482 call 0x103e52c0 */
  push32(0x103e4487u); f_103e52c0();
  /* 103e4487 call 0x103e7770 */
  push32(0x103e448cu); f_103e7770();
  /* 103e448c call 0x103e7620 */
  push32(0x103e4491u); f_103e7620();
  /* 103e4491 call 0x103e4e10 */
  push32(0x103e4496u); f_103e4e10();
  /* 103e4496 mov ecx, dword ptr [0x10411660] */
  ECX = (r32((uint32_t)(0x10411660)));
  /* 103e449c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e449f mov dword ptr [0x10411660], ecx */
  w32((uint32_t)(0x10411660), (ECX));
  /* 103e44a5 jmp 0x103e4510 */
  goto L_103e4510;
L_103e44a7:;
  /* 103e44a7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e44ab jne 0x103e4500 */
  if (!C.zf) goto L_103e4500;
  /* 103e44ad cmp dword ptr [0x10411660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e44b4 jle 0x103e44fa */
  if ((C.zf||C.sf!=C.of)) goto L_103e44fa;
  /* 103e44b6 mov edx, dword ptr [0x10411660] */
  EDX = (r32((uint32_t)(0x10411660)));
  /* 103e44bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e44bf mov dword ptr [0x10411660], edx */
  w32((uint32_t)(0x10411660), (EDX));
  /* 103e44c5 cmp dword ptr [0x104116b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104116b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e44cc jne 0x103e44d3 */
  if (!C.zf) goto L_103e44d3;
  /* 103e44ce call 0x103e4e90 */
  push32(0x103e44d3u); f_103e4e90();
L_103e44d3:;
  /* 103e44d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103e44d5 call 0x103e6bc0 */
  push32(0x103e44dau); f_103e6bc0();
  /* 103e44da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e44dd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 103e44e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e44e2 je 0x103e44e9 */
  if (C.zf) goto L_103e44e9;
  /* 103e44e4 call 0x103e74d0 */
  push32(0x103e44e9u); f_103e74d0();
L_103e44e9:;
  /* 103e44e9 call 0x103e55f0 */
  push32(0x103e44eeu); f_103e55f0();
  /* 103e44ee call 0x103e50a0 */
  push32(0x103e44f3u); f_103e50a0();
  /* 103e44f3 call 0x103e7ef0 */
  push32(0x103e44f8u); f_103e7ef0();
  /* 103e44f8 jmp 0x103e44fe */
  goto L_103e44fe;
L_103e44fa:;
  /* 103e44fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e44fc jmp 0x103e4515 */
  goto L_103e4515;
L_103e44fe:;
  /* 103e44fe jmp 0x103e4510 */
  goto L_103e4510;
L_103e4500:;
  /* 103e4500 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4504 jne 0x103e4510 */
  if (!C.zf) goto L_103e4510;
  /* 103e4506 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e4508 call 0x103e5190 */
  push32(0x103e450du); f_103e5190();
  /* 103e450d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e4510:;
  /* 103e4510 mov eax, 1 */
  EAX = (0x1u);
L_103e4515:;
  /* 103e4515 pop ebp */
  EBP = (pop32());
  /* 103e4516 ret 0xc */
  ESPCHK(0x103e43e0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x103e4520 (243 bytes, 86 insns) */
void f_103e4520(void) {
  FTRACE(0x103e4520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4520 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4521 mov ebp, esp */
  EBP = (ESP);
  /* 103e4523 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4524 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103e452b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e452f jne 0x103e4541 */
  if (!C.zf) goto L_103e4541;
  /* 103e4531 cmp dword ptr [0x10411660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4538 jne 0x103e4541 */
  if (!C.zf) goto L_103e4541;
  /* 103e453a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e453c jmp 0x103e460d */
  goto L_103e460d;
L_103e4541:;
  /* 103e4541 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4545 je 0x103e454d */
  if (C.zf) goto L_103e454d;
  /* 103e4547 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e454b jne 0x103e458f */
  if (!C.zf) goto L_103e458f;
L_103e454d:;
  /* 103e454d cmp dword ptr [0x104131dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104131dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4554 je 0x103e456b */
  if (C.zf) goto L_103e456b;
  /* 103e4556 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e4559 push eax */
  push32((uint32_t)(EAX));
  /* 103e455a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e455d push ecx */
  push32((uint32_t)(ECX));
  /* 103e455e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4561 push edx */
  push32((uint32_t)(EDX));
  /* 103e4562 call dword ptr [0x104131dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104131dc))), 0x103e4568u);
  /* 103e4568 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e456b:;
  /* 103e456b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e456f je 0x103e4585 */
  if (C.zf) goto L_103e4585;
  /* 103e4571 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e4574 push eax */
  push32((uint32_t)(EAX));
  /* 103e4575 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e4578 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4579 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e457c push edx */
  push32((uint32_t)(EDX));
  /* 103e457d call 0x103e43e0 */
  push32(0x103e4582u); f_103e43e0();
  /* 103e4582 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e4585:;
  /* 103e4585 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4589 jne 0x103e458f */
  if (!C.zf) goto L_103e458f;
  /* 103e458b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e458d jmp 0x103e460d */
  goto L_103e460d;
L_103e458f:;
  /* 103e458f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e4592 push eax */
  push32((uint32_t)(EAX));
  /* 103e4593 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e4596 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4597 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e459a push edx */
  push32((uint32_t)(EDX));
  /* 103e459b call 0x103e1014 */
  push32(0x103e45a0u); f_103e1014();
  /* 103e45a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e45a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e45a7 jne 0x103e45be */
  if (!C.zf) goto L_103e45be;
  /* 103e45a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e45ad jne 0x103e45be */
  if (!C.zf) goto L_103e45be;
  /* 103e45af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e45b2 push eax */
  push32((uint32_t)(EAX));
  /* 103e45b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e45b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e45b8 push ecx */
  push32((uint32_t)(ECX));
  /* 103e45b9 call 0x103e43e0 */
  push32(0x103e45beu); f_103e43e0();
L_103e45be:;
  /* 103e45be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e45c2 je 0x103e45ca */
  if (C.zf) goto L_103e45ca;
  /* 103e45c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e45c8 jne 0x103e460a */
  if (!C.zf) goto L_103e460a;
L_103e45ca:;
  /* 103e45ca mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e45cd push edx */
  push32((uint32_t)(EDX));
  /* 103e45ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e45d1 push eax */
  push32((uint32_t)(EAX));
  /* 103e45d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e45d5 push ecx */
  push32((uint32_t)(ECX));
  /* 103e45d6 call 0x103e43e0 */
  push32(0x103e45dbu); f_103e43e0();
  /* 103e45db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e45dd jne 0x103e45e6 */
  if (!C.zf) goto L_103e45e6;
  /* 103e45df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103e45e6:;
  /* 103e45e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e45ea je 0x103e460a */
  if (C.zf) goto L_103e460a;
  /* 103e45ec cmp dword ptr [0x104131dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104131dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e45f3 je 0x103e460a */
  if (C.zf) goto L_103e460a;
  /* 103e45f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e45f8 push edx */
  push32((uint32_t)(EDX));
  /* 103e45f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e45fc push eax */
  push32((uint32_t)(EAX));
  /* 103e45fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4600 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4601 call dword ptr [0x104131dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104131dc))), 0x103e4607u);
  /* 103e4607 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e460a:;
  /* 103e460a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103e460d:;
  /* 103e460d mov esp, ebp */
  ESP = (EBP);
  /* 103e460f pop ebp */
  EBP = (pop32());
  /* 103e4610 ret 0xc */
  ESPCHK(0x103e4520u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x103e4620 (58 bytes, 18 insns) */
void f_103e4620(void) {
  FTRACE(0x103e4620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4620 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4621 mov ebp, esp */
  EBP = (ESP);
  /* 103e4623 cmp dword ptr [0x1041166c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1041166c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e462a je 0x103e463e */
  if (C.zf) goto L_103e463e;
  /* 103e462c cmp dword ptr [0x1041166c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1041166c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4633 jne 0x103e4643 */
  if (!C.zf) goto L_103e4643;
  /* 103e4635 cmp dword ptr [0x10411670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10411670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e463c jne 0x103e4643 */
  if (!C.zf) goto L_103e4643;
L_103e463e:;
  /* 103e463e call 0x103e7f90 */
  push32(0x103e4643u); f_103e7f90();
L_103e4643:;
  /* 103e4643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4646 push eax */
  push32((uint32_t)(EAX));
  /* 103e4647 call 0x103e7fe0 */
  push32(0x103e464cu); f_103e7fe0();
  /* 103e464c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e464f push 0xff */
  push32((uint32_t)(0xffu));
  /* 103e4654 call dword ptr [0x1040fa30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1040fa30))), 0x103e465au);
  /* 103e465a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e465d pop ebp */
  EBP = (pop32());
  /* 103e465e ret  */
  ESPCHK(0x103e4620u, _esp0);
  ESP += 4; return;
}

/* FUN_10004660 @ 0x103e4660 (11 bytes, 5 insns) */
void f_103e4660(void) {
  FTRACE(0x103e4660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4660 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4661 mov ebp, esp */
  EBP = (ESP);
  /* 103e4663 call dword ptr [0x10414374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414374))), 0x103e4669u);
  /* 103e4669 pop ebp */
  EBP = (pop32());
  /* 103e466a ret  */
  ESPCHK(0x103e4660u, _esp0);
  ESP += 4; return;
}

/* FUN_10004670 @ 0x103e4670 (87 bytes, 30 insns) */
void f_103e4670(void) {
  FTRACE(0x103e4670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4670 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4671 mov ebp, esp */
  EBP = (ESP);
  /* 103e4673 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4674 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4678 jl 0x103e4680 */
  if ((C.sf!=C.of)) goto L_103e4680;
  /* 103e467a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e467e jl 0x103e4685 */
  if ((C.sf!=C.of)) goto L_103e4685;
L_103e4680:;
  /* 103e4680 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e4683 jmp 0x103e46c3 */
  goto L_103e46c3;
L_103e4685:;
  /* 103e4685 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4689 jne 0x103e4697 */
  if (!C.zf) goto L_103e4697;
  /* 103e468b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e468e mov eax, dword ptr [eax*4 + 0x1040fa38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1040fa38)));
  /* 103e4695 jmp 0x103e46c3 */
  goto L_103e46c3;
L_103e4697:;
  /* 103e4697 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e469a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 103e469d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e469f je 0x103e46a6 */
  if (C.zf) goto L_103e46a6;
  /* 103e46a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e46a4 jmp 0x103e46c3 */
  goto L_103e46c3;
L_103e46a6:;
  /* 103e46a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e46a9 mov eax, dword ptr [edx*4 + 0x1040fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1040fa38)));
  /* 103e46b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e46b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e46b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e46b9 mov dword ptr [ecx*4 + 0x1040fa38], edx */
  w32((uint32_t)(ECX*4 + 0x1040fa38), (EDX));
  /* 103e46c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103e46c3:;
  /* 103e46c3 mov esp, ebp */
  ESP = (EBP);
  /* 103e46c5 pop ebp */
  EBP = (pop32());
  /* 103e46c6 ret  */
  ESPCHK(0x103e4670u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x103e46d0 (126 bytes, 38 insns) */
void f_103e46d0(void) {
  FTRACE(0x103e46d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e46d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e46d1 mov ebp, esp */
  EBP = (ESP);
  /* 103e46d3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e46d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e46d8 jl 0x103e46e0 */
  if ((C.sf!=C.of)) goto L_103e46e0;
  /* 103e46da cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e46de jl 0x103e46e7 */
  if ((C.sf!=C.of)) goto L_103e46e7;
L_103e46e0:;
  /* 103e46e0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 103e46e5 jmp 0x103e474a */
  goto L_103e474a;
L_103e46e7:;
  /* 103e46e7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e46eb jne 0x103e46f9 */
  if (!C.zf) goto L_103e46f9;
  /* 103e46ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e46f0 mov eax, dword ptr [eax*4 + 0x1040fa44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1040fa44)));
  /* 103e46f7 jmp 0x103e474a */
  goto L_103e474a;
L_103e46f9:;
  /* 103e46f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e46fc mov edx, dword ptr [ecx*4 + 0x1040fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1040fa44)));
  /* 103e4703 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e4706 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e470a jne 0x103e4720 */
  if (!C.zf) goto L_103e4720;
  /* 103e470c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 103e470e call dword ptr [0x10414378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414378))), 0x103e4714u);
  /* 103e4714 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4717 mov dword ptr [ecx*4 + 0x1040fa44], eax */
  w32((uint32_t)(ECX*4 + 0x1040fa44), (EAX));
  /* 103e471e jmp 0x103e4747 */
  goto L_103e4747;
L_103e4720:;
  /* 103e4720 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4724 jne 0x103e473a */
  if (!C.zf) goto L_103e473a;
  /* 103e4726 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 103e4728 call dword ptr [0x10414378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414378))), 0x103e472eu);
  /* 103e472e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4731 mov dword ptr [edx*4 + 0x1040fa44], eax */
  w32((uint32_t)(EDX*4 + 0x1040fa44), (EAX));
  /* 103e4738 jmp 0x103e4747 */
  goto L_103e4747;
L_103e473a:;
  /* 103e473a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e473d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e4740 mov dword ptr [eax*4 + 0x1040fa44], ecx */
  w32((uint32_t)(EAX*4 + 0x1040fa44), (ECX));
L_103e4747:;
  /* 103e4747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103e474a:;
  /* 103e474a mov esp, ebp */
  ESP = (EBP);
  /* 103e474c pop ebp */
  EBP = (pop32());
  /* 103e474d ret  */
  ESPCHK(0x103e46d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004750 @ 0x103e4750 (28 bytes, 11 insns) */
void f_103e4750(void) {
  FTRACE(0x103e4750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4750 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4751 mov ebp, esp */
  EBP = (ESP);
  /* 103e4753 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4754 mov eax, dword ptr [0x104131c0] */
  EAX = (r32((uint32_t)(0x104131c0)));
  /* 103e4759 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e475c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e475f mov dword ptr [0x104131c0], ecx */
  w32((uint32_t)(0x104131c0), (ECX));
  /* 103e4765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e4768 mov esp, ebp */
  ESP = (EBP);
  /* 103e476a pop ebp */
  EBP = (pop32());
  /* 103e476b ret  */
  ESPCHK(0x103e4750u, _esp0);
  ESP += 4; return;
}

/* FUN_10004770 @ 0x103e4770 (912 bytes, 248 insns) */
void f_103e4770(void) {
  FTRACE(0x103e4770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4770 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4771 mov ebp, esp */
  EBP = (ESP);
  /* 103e4773 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 103e4778 call 0x103e8850 */
  push32(0x103e477du); f_103e8850();
  /* 103e477d push edi */
  push32((uint32_t)(EDI));
  /* 103e477e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 103e4785 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 103e478a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e478c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 103e4792 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103e4794 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 103e4796 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103e4797 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 103e479e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 103e47a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e47a5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 103e47ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103e47ad stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 103e47af stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103e47b0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 103e47b7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 103e47bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e47be lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 103e47c4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103e47c6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 103e47c8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103e47c9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 103e47cc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 103e47d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e47d6 jl 0x103e47de */
  if ((C.sf!=C.of)) goto L_103e47de;
  /* 103e47d8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e47dc jl 0x103e47e6 */
  if ((C.sf!=C.of)) goto L_103e47e6;
L_103e47de:;
  /* 103e47de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e47e1 jmp 0x103e4afb */
  goto L_103e4afb;
L_103e47e6:;
  /* 103e47e6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e47ea jne 0x103e4890 */
  if (!C.zf) goto L_103e4890;
  /* 103e47f0 push 0x1040fa34 */
  push32((uint32_t)(0x1040fa34u));
  /* 103e47f5 call dword ptr [0x10414390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414390))), 0x103e47fbu);
  /* 103e47fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e47fd jle 0x103e4890 */
  if ((C.zf||C.sf!=C.of)) goto L_103e4890;
  /* 103e4803 cmp dword ptr [0x10411674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e480a jne 0x103e484e */
  if (!C.zf) goto L_103e484e;
  /* 103e480c push 0x1040c594 */
  push32((uint32_t)(0x1040c594u));
  /* 103e4811 call dword ptr [0x1041438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041438c))), 0x103e4817u);
  /* 103e4817 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 103e481d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4824 je 0x103e4846 */
  if (C.zf) goto L_103e4846;
  /* 103e4826 push 0x1040c588 */
  push32((uint32_t)(0x1040c588u));
  /* 103e482b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 103e4831 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4832 call dword ptr [0x10414388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414388))), 0x103e4838u);
  /* 103e4838 mov dword ptr [0x10411674], eax */
  w32((uint32_t)(0x10411674), (EAX));
  /* 103e483d cmp dword ptr [0x10411674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4844 jne 0x103e484e */
  if (!C.zf) goto L_103e484e;
L_103e4846:;
  /* 103e4846 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e4849 jmp 0x103e4afb */
  goto L_103e4afb;
L_103e484e:;
  /* 103e484e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e4851 push edx */
  push32((uint32_t)(EDX));
  /* 103e4852 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e4855 push eax */
  push32((uint32_t)(EAX));
  /* 103e4856 push 0x1040c554 */
  push32((uint32_t)(0x1040c554u));
  /* 103e485b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 103e4861 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4862 call dword ptr [0x10411674] */
  call_ind((uint32_t)(r32((uint32_t)(0x10411674))), 0x103e4868u);
  /* 103e4868 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e486b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 103e4871 push edx */
  push32((uint32_t)(EDX));
  /* 103e4872 call dword ptr [0x10414384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414384))), 0x103e4878u);
  /* 103e4878 push 0x1040fa34 */
  push32((uint32_t)(0x1040fa34u));
  /* 103e487d call dword ptr [0x10414380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414380))), 0x103e4883u);
  /* 103e4883 call 0x103e4660 */
  push32(0x103e4888u); f_103e4660();
  /* 103e4888 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e488b jmp 0x103e4afb */
  goto L_103e4afb;
L_103e4890:;
  /* 103e4890 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4894 je 0x103e48cd */
  if (C.zf) goto L_103e48cd;
  /* 103e4896 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 103e489c push eax */
  push32((uint32_t)(EAX));
  /* 103e489d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e48a0 push ecx */
  push32((uint32_t)(ECX));
  /* 103e48a1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 103e48a6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 103e48ac push edx */
  push32((uint32_t)(EDX));
  /* 103e48ad call 0x103e8750 */
  push32(0x103e48b2u); f_103e8750();
  /* 103e48b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e48b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e48b7 jge 0x103e48cd */
  if ((C.sf==C.of)) goto L_103e48cd;
  /* 103e48b9 push 0x1040c528 */
  push32((uint32_t)(0x1040c528u));
  /* 103e48be lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 103e48c4 push eax */
  push32((uint32_t)(EAX));
  /* 103e48c5 call 0x103e8660 */
  push32(0x103e48cau); f_103e8660();
  /* 103e48ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e48cd:;
  /* 103e48cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e48d1 jne 0x103e4905 */
  if (!C.zf) goto L_103e4905;
  /* 103e48d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e48d7 je 0x103e48e5 */
  if (C.zf) goto L_103e48e5;
  /* 103e48d9 mov dword ptr [ebp - 0x3028], 0x1040c514 */
  w32((uint32_t)(EBP + -0x3028), (0x1040c514u));
  /* 103e48e3 jmp 0x103e48ef */
  goto L_103e48ef;
L_103e48e5:;
  /* 103e48e5 mov dword ptr [ebp - 0x3028], 0x1040c500 */
  w32((uint32_t)(EBP + -0x3028), (0x1040c500u));
L_103e48ef:;
  /* 103e48ef mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 103e48f5 push ecx */
  push32((uint32_t)(ECX));
  /* 103e48f6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 103e48fc push edx */
  push32((uint32_t)(EDX));
  /* 103e48fd call 0x103e8660 */
  push32(0x103e4902u); f_103e8660();
  /* 103e4902 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e4905:;
  /* 103e4905 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 103e490b push eax */
  push32((uint32_t)(EAX));
  /* 103e490c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 103e4912 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4913 call 0x103e8670 */
  push32(0x103e4918u); f_103e8670();
  /* 103e4918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e491b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e491f jne 0x103e495a */
  if (!C.zf) goto L_103e495a;
  /* 103e4921 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4924 mov eax, dword ptr [edx*4 + 0x1040fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1040fa38)));
  /* 103e492b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 103e492e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e4930 je 0x103e4946 */
  if (C.zf) goto L_103e4946;
  /* 103e4932 push 0x1040c4fc */
  push32((uint32_t)(0x1040c4fcu));
  /* 103e4937 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 103e493d push ecx */
  push32((uint32_t)(ECX));
  /* 103e493e call 0x103e8670 */
  push32(0x103e4943u); f_103e8670();
  /* 103e4943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e4946:;
  /* 103e4946 push 0x1040c4f8 */
  push32((uint32_t)(0x1040c4f8u));
  /* 103e494b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 103e4951 push edx */
  push32((uint32_t)(EDX));
  /* 103e4952 call 0x103e8670 */
  push32(0x103e4957u); f_103e8670();
  /* 103e4957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e495a:;
  /* 103e495a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e495e je 0x103e49a2 */
  if (C.zf) goto L_103e49a2;
  /* 103e4960 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 103e4966 push eax */
  push32((uint32_t)(EAX));
  /* 103e4967 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e496a push ecx */
  push32((uint32_t)(ECX));
  /* 103e496b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e496e push edx */
  push32((uint32_t)(EDX));
  /* 103e496f push 0x1040c4ec */
  push32((uint32_t)(0x1040c4ecu));
  /* 103e4974 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103e4979 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 103e497f push eax */
  push32((uint32_t)(EAX));
  /* 103e4980 call 0x103e8560 */
  push32(0x103e4985u); f_103e8560();
  /* 103e4985 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e498a jge 0x103e49a0 */
  if ((C.sf==C.of)) goto L_103e49a0;
  /* 103e498c push 0x1040c528 */
  push32((uint32_t)(0x1040c528u));
  /* 103e4991 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 103e4997 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4998 call 0x103e8660 */
  push32(0x103e499du); f_103e8660();
  /* 103e499d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e49a0:;
  /* 103e49a0 jmp 0x103e49b8 */
  goto L_103e49b8;
L_103e49a2:;
  /* 103e49a2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 103e49a8 push edx */
  push32((uint32_t)(EDX));
  /* 103e49a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 103e49af push eax */
  push32((uint32_t)(EAX));
  /* 103e49b0 call 0x103e8660 */
  push32(0x103e49b5u); f_103e8660();
  /* 103e49b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e49b8:;
  /* 103e49b8 cmp dword ptr [0x104131c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104131c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e49bf je 0x103e49fc */
  if (C.zf) goto L_103e49fc;
  /* 103e49c1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 103e49c7 push ecx */
  push32((uint32_t)(ECX));
  /* 103e49c8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 103e49ce push edx */
  push32((uint32_t)(EDX));
  /* 103e49cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e49d2 push eax */
  push32((uint32_t)(EAX));
  /* 103e49d3 call dword ptr [0x104131c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104131c0))), 0x103e49d9u);
  /* 103e49d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e49dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e49de je 0x103e49fc */
  if (C.zf) goto L_103e49fc;
  /* 103e49e0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e49e4 jne 0x103e49f1 */
  if (!C.zf) goto L_103e49f1;
  /* 103e49e6 push 0x1040fa34 */
  push32((uint32_t)(0x1040fa34u));
  /* 103e49eb call dword ptr [0x10414380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414380))), 0x103e49f1u);
L_103e49f1:;
  /* 103e49f1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 103e49f7 jmp 0x103e4afb */
  goto L_103e4afb;
L_103e49fc:;
  /* 103e49fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e49ff mov edx, dword ptr [ecx*4 + 0x1040fa38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1040fa38)));
  /* 103e4a06 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103e4a09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e4a0b je 0x103e4a4b */
  if (C.zf) goto L_103e4a4b;
  /* 103e4a0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4a10 cmp dword ptr [eax*4 + 0x1040fa44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1040fa44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4a18 je 0x103e4a4b */
  if (C.zf) goto L_103e4a4b;
  /* 103e4a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e4a1c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 103e4a22 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4a23 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 103e4a29 push edx */
  push32((uint32_t)(EDX));
  /* 103e4a2a call 0x103e84e0 */
  push32(0x103e4a2fu); f_103e84e0();
  /* 103e4a2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4a32 push eax */
  push32((uint32_t)(EAX));
  /* 103e4a33 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 103e4a39 push eax */
  push32((uint32_t)(EAX));
  /* 103e4a3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4a3d mov edx, dword ptr [ecx*4 + 0x1040fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1040fa44)));
  /* 103e4a44 push edx */
  push32((uint32_t)(EDX));
  /* 103e4a45 call dword ptr [0x1041437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041437c))), 0x103e4a4bu);
L_103e4a4b:;
  /* 103e4a4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4a4e mov ecx, dword ptr [eax*4 + 0x1040fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1040fa38)));
  /* 103e4a55 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 103e4a58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e4a5a je 0x103e4a69 */
  if (C.zf) goto L_103e4a69;
  /* 103e4a5c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 103e4a62 push edx */
  push32((uint32_t)(EDX));
  /* 103e4a63 call dword ptr [0x10414384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414384))), 0x103e4a69u);
L_103e4a69:;
  /* 103e4a69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4a6c mov ecx, dword ptr [eax*4 + 0x1040fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1040fa38)));
  /* 103e4a73 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103e4a76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e4a78 je 0x103e4ae8 */
  if (C.zf) goto L_103e4ae8;
  /* 103e4a7a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4a7e je 0x103e4a9d */
  if (C.zf) goto L_103e4a9d;
  /* 103e4a80 push 0xa */
  push32((uint32_t)(0xau));
  /* 103e4a82 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 103e4a88 push edx */
  push32((uint32_t)(EDX));
  /* 103e4a89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e4a8c push eax */
  push32((uint32_t)(EAX));
  /* 103e4a8d call 0x103e81f0 */
  push32(0x103e4a92u); f_103e81f0();
  /* 103e4a92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4a95 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 103e4a9b jmp 0x103e4aa7 */
  goto L_103e4aa7;
L_103e4a9d:;
  /* 103e4a9d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_103e4aa7:;
  /* 103e4aa7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 103e4aad push ecx */
  push32((uint32_t)(ECX));
  /* 103e4aae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e4ab1 push edx */
  push32((uint32_t)(EDX));
  /* 103e4ab2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 103e4ab8 push eax */
  push32((uint32_t)(EAX));
  /* 103e4ab9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e4abc push ecx */
  push32((uint32_t)(ECX));
  /* 103e4abd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4ac0 push edx */
  push32((uint32_t)(EDX));
  /* 103e4ac1 call 0x103e4b00 */
  push32(0x103e4ac6u); f_103e4b00();
  /* 103e4ac6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4ac9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 103e4acf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4ad3 jne 0x103e4ae0 */
  if (!C.zf) goto L_103e4ae0;
  /* 103e4ad5 push 0x1040fa34 */
  push32((uint32_t)(0x1040fa34u));
  /* 103e4ada call dword ptr [0x10414380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414380))), 0x103e4ae0u);
L_103e4ae0:;
  /* 103e4ae0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 103e4ae6 jmp 0x103e4afb */
  goto L_103e4afb;
L_103e4ae8:;
  /* 103e4ae8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4aec jne 0x103e4af9 */
  if (!C.zf) goto L_103e4af9;
  /* 103e4aee push 0x1040fa34 */
  push32((uint32_t)(0x1040fa34u));
  /* 103e4af3 call dword ptr [0x10414380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414380))), 0x103e4af9u);
L_103e4af9:;
  /* 103e4af9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103e4afb:;
  /* 103e4afb pop edi */
  EDI = (pop32());
  /* 103e4afc mov esp, ebp */
  ESP = (EBP);
  /* 103e4afe pop ebp */
  EBP = (pop32());
  /* 103e4aff ret  */
  ESPCHK(0x103e4770u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b00 @ 0x103e4b00 (780 bytes, 197 insns) */
void f_103e4b00(void) {
  FTRACE(0x103e4b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4b00 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4b01 mov ebp, esp */
  EBP = (ESP);
  /* 103e4b03 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 103e4b08 call 0x103e8850 */
  push32(0x103e4b0du); f_103e8850();
L_103e4b0d:;
  /* 103e4b0d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4b11 jne 0x103e4b38 */
  if (!C.zf) goto L_103e4b38;
  /* 103e4b13 push 0x1040c6e4 */
  push32((uint32_t)(0x1040c6e4u));
  /* 103e4b18 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e4b1a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 103e4b1f push 0x1040c6d8 */
  push32((uint32_t)(0x1040c6d8u));
  /* 103e4b24 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e4b26 call 0x103e4770 */
  push32(0x103e4b2bu); f_103e4770();
  /* 103e4b2b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4b2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4b31 jne 0x103e4b38 */
  if (!C.zf) goto L_103e4b38;
  /* 103e4b33 call 0x103e4660 */
  push32(0x103e4b38u); f_103e4660();
L_103e4b38:;
  /* 103e4b38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e4b3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e4b3c jne 0x103e4b0d */
  if (!C.zf) goto L_103e4b0d;
  /* 103e4b3e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 103e4b43 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 103e4b49 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e4b4c call dword ptr [0x10414394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414394))), 0x103e4b52u);
  /* 103e4b52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e4b54 jne 0x103e4b6a */
  if (!C.zf) goto L_103e4b6a;
  /* 103e4b56 push 0x1040c6c0 */
  push32((uint32_t)(0x1040c6c0u));
  /* 103e4b5b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 103e4b61 push edx */
  push32((uint32_t)(EDX));
  /* 103e4b62 call 0x103e8660 */
  push32(0x103e4b67u); f_103e8660();
  /* 103e4b67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e4b6a:;
  /* 103e4b6a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 103e4b70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e4b73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e4b76 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4b77 call 0x103e84e0 */
  push32(0x103e4b7cu); f_103e84e0();
  /* 103e4b7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4b7f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4b82 jbe 0x103e4bad */
  if ((C.cf||C.zf)) goto L_103e4bad;
  /* 103e4b84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e4b87 push edx */
  push32((uint32_t)(EDX));
  /* 103e4b88 call 0x103e84e0 */
  push32(0x103e4b8du); f_103e84e0();
  /* 103e4b8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4b90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e4b93 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 103e4b97 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e4b9a push 3 */
  push32((uint32_t)(0x3u));
  /* 103e4b9c push 0x1040c6bc */
  push32((uint32_t)(0x1040c6bcu));
  /* 103e4ba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e4ba4 push eax */
  push32((uint32_t)(EAX));
  /* 103e4ba5 call 0x103e8ed0 */
  push32(0x103e4baau); f_103e8ed0();
  /* 103e4baa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e4bad:;
  /* 103e4bad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e4bb0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 103e4bb6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4bbd je 0x103e4c08 */
  if (C.zf) goto L_103e4c08;
  /* 103e4bbf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 103e4bc5 push edx */
  push32((uint32_t)(EDX));
  /* 103e4bc6 call 0x103e84e0 */
  push32(0x103e4bcbu); f_103e84e0();
  /* 103e4bcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4bce cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4bd1 jbe 0x103e4c08 */
  if ((C.cf||C.zf)) goto L_103e4c08;
  /* 103e4bd3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 103e4bd9 push eax */
  push32((uint32_t)(EAX));
  /* 103e4bda call 0x103e84e0 */
  push32(0x103e4bdfu); f_103e84e0();
  /* 103e4bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4be2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 103e4be8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 103e4bec mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 103e4bf2 push 3 */
  push32((uint32_t)(0x3u));
  /* 103e4bf4 push 0x1040c6bc */
  push32((uint32_t)(0x1040c6bcu));
  /* 103e4bf9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 103e4bff push eax */
  push32((uint32_t)(EAX));
  /* 103e4c00 call 0x103e8ed0 */
  push32(0x103e4c05u); f_103e8ed0();
  /* 103e4c05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e4c08:;
  /* 103e4c08 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4c0c jne 0x103e4c1a */
  if (!C.zf) goto L_103e4c1a;
  /* 103e4c0e mov dword ptr [ebp - 0x1114], 0x1040c648 */
  w32((uint32_t)(EBP + -0x1114), (0x1040c648u));
  /* 103e4c18 jmp 0x103e4c24 */
  goto L_103e4c24;
L_103e4c1a:;
  /* 103e4c1a mov dword ptr [ebp - 0x1114], 0x1040c3e8 */
  w32((uint32_t)(EBP + -0x1114), (0x1040c3e8u));
L_103e4c24:;
  /* 103e4c24 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e4c27 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103e4c2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e4c2c je 0x103e4c39 */
  if (C.zf) goto L_103e4c39;
  /* 103e4c2e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e4c31 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 103e4c37 jmp 0x103e4c43 */
  goto L_103e4c43;
L_103e4c39:;
  /* 103e4c39 mov dword ptr [ebp - 0x1118], 0x1040c3e8 */
  w32((uint32_t)(EBP + -0x1118), (0x1040c3e8u));
L_103e4c43:;
  /* 103e4c43 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e4c46 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103e4c49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e4c4b je 0x103e4c5f */
  if (C.zf) goto L_103e4c5f;
  /* 103e4c4d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4c51 jne 0x103e4c5f */
  if (!C.zf) goto L_103e4c5f;
  /* 103e4c53 mov dword ptr [ebp - 0x111c], 0x1040c638 */
  w32((uint32_t)(EBP + -0x111c), (0x1040c638u));
  /* 103e4c5d jmp 0x103e4c69 */
  goto L_103e4c69;
L_103e4c5f:;
  /* 103e4c5f mov dword ptr [ebp - 0x111c], 0x1040c3e8 */
  w32((uint32_t)(EBP + -0x111c), (0x1040c3e8u));
L_103e4c69:;
  /* 103e4c69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e4c6c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103e4c6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e4c71 je 0x103e4c7f */
  if (C.zf) goto L_103e4c7f;
  /* 103e4c73 mov dword ptr [ebp - 0x1120], 0x1040c634 */
  w32((uint32_t)(EBP + -0x1120), (0x1040c634u));
  /* 103e4c7d jmp 0x103e4c89 */
  goto L_103e4c89;
L_103e4c7f:;
  /* 103e4c7f mov dword ptr [ebp - 0x1120], 0x1040c3e8 */
  w32((uint32_t)(EBP + -0x1120), (0x1040c3e8u));
L_103e4c89:;
  /* 103e4c89 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4c8d je 0x103e4c9a */
  if (C.zf) goto L_103e4c9a;
  /* 103e4c8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e4c92 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 103e4c98 jmp 0x103e4ca4 */
  goto L_103e4ca4;
L_103e4c9a:;
  /* 103e4c9a mov dword ptr [ebp - 0x1124], 0x1040c3e8 */
  w32((uint32_t)(EBP + -0x1124), (0x1040c3e8u));
L_103e4ca4:;
  /* 103e4ca4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4ca8 je 0x103e4cb6 */
  if (C.zf) goto L_103e4cb6;
  /* 103e4caa mov dword ptr [ebp - 0x1128], 0x1040c62c */
  w32((uint32_t)(EBP + -0x1128), (0x1040c62cu));
  /* 103e4cb4 jmp 0x103e4cc0 */
  goto L_103e4cc0;
L_103e4cb6:;
  /* 103e4cb6 mov dword ptr [ebp - 0x1128], 0x1040c3e8 */
  w32((uint32_t)(EBP + -0x1128), (0x1040c3e8u));
L_103e4cc0:;
  /* 103e4cc0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4cc4 je 0x103e4cd1 */
  if (C.zf) goto L_103e4cd1;
  /* 103e4cc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e4cc9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 103e4ccf jmp 0x103e4cdb */
  goto L_103e4cdb;
L_103e4cd1:;
  /* 103e4cd1 mov dword ptr [ebp - 0x112c], 0x1040c3e8 */
  w32((uint32_t)(EBP + -0x112c), (0x1040c3e8u));
L_103e4cdb:;
  /* 103e4cdb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4cdf je 0x103e4ced */
  if (C.zf) goto L_103e4ced;
  /* 103e4ce1 mov dword ptr [ebp - 0x1130], 0x1040c624 */
  w32((uint32_t)(EBP + -0x1130), (0x1040c624u));
  /* 103e4ceb jmp 0x103e4cf7 */
  goto L_103e4cf7;
L_103e4ced:;
  /* 103e4ced mov dword ptr [ebp - 0x1130], 0x1040c3e8 */
  w32((uint32_t)(EBP + -0x1130), (0x1040c3e8u));
L_103e4cf7:;
  /* 103e4cf7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4cfe je 0x103e4d0e */
  if (C.zf) goto L_103e4d0e;
  /* 103e4d00 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 103e4d06 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 103e4d0c jmp 0x103e4d18 */
  goto L_103e4d18;
L_103e4d0e:;
  /* 103e4d0e mov dword ptr [ebp - 0x1134], 0x1040c3e8 */
  w32((uint32_t)(EBP + -0x1134), (0x1040c3e8u));
L_103e4d18:;
  /* 103e4d18 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4d1f je 0x103e4d2d */
  if (C.zf) goto L_103e4d2d;
  /* 103e4d21 mov dword ptr [ebp - 0x1138], 0x1040c618 */
  w32((uint32_t)(EBP + -0x1138), (0x1040c618u));
  /* 103e4d2b jmp 0x103e4d37 */
  goto L_103e4d37;
L_103e4d2d:;
  /* 103e4d2d mov dword ptr [ebp - 0x1138], 0x1040c3e8 */
  w32((uint32_t)(EBP + -0x1138), (0x1040c3e8u));
L_103e4d37:;
  /* 103e4d37 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 103e4d3d push edx */
  push32((uint32_t)(EDX));
  /* 103e4d3e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 103e4d44 push eax */
  push32((uint32_t)(EAX));
  /* 103e4d45 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 103e4d4b push ecx */
  push32((uint32_t)(ECX));
  /* 103e4d4c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 103e4d52 push edx */
  push32((uint32_t)(EDX));
  /* 103e4d53 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 103e4d59 push eax */
  push32((uint32_t)(EAX));
  /* 103e4d5a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 103e4d60 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4d61 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 103e4d67 push edx */
  push32((uint32_t)(EDX));
  /* 103e4d68 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 103e4d6e push eax */
  push32((uint32_t)(EAX));
  /* 103e4d6f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 103e4d75 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4d76 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 103e4d7c push edx */
  push32((uint32_t)(EDX));
  /* 103e4d7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e4d80 push eax */
  push32((uint32_t)(EAX));
  /* 103e4d81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4d84 mov edx, dword ptr [ecx*4 + 0x1040fa50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1040fa50)));
  /* 103e4d8b push edx */
  push32((uint32_t)(EDX));
  /* 103e4d8c push 0x1040c5c4 */
  push32((uint32_t)(0x1040c5c4u));
  /* 103e4d91 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103e4d96 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 103e4d9c push eax */
  push32((uint32_t)(EAX));
  /* 103e4d9d call 0x103e8560 */
  push32(0x103e4da2u); f_103e8560();
  /* 103e4da2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4da5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e4da7 jge 0x103e4dbd */
  if ((C.sf==C.of)) goto L_103e4dbd;
  /* 103e4da9 push 0x1040c528 */
  push32((uint32_t)(0x1040c528u));
  /* 103e4dae lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 103e4db4 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4db5 call 0x103e8660 */
  push32(0x103e4dbau); f_103e8660();
  /* 103e4dba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e4dbd:;
  /* 103e4dbd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 103e4dc2 push 0x1040c5a0 */
  push32((uint32_t)(0x1040c5a0u));
  /* 103e4dc7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 103e4dcd push edx */
  push32((uint32_t)(EDX));
  /* 103e4dce call 0x103e8e10 */
  push32(0x103e4dd3u); f_103e8e10();
  /* 103e4dd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4dd6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 103e4ddc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4de3 jne 0x103e4df6 */
  if (!C.zf) goto L_103e4df6;
  /* 103e4de5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 103e4de7 call 0x103e8b50 */
  push32(0x103e4decu); f_103e8b50();
  /* 103e4dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4def push 3 */
  push32((uint32_t)(0x3u));
  /* 103e4df1 call 0x103e4e70 */
  push32(0x103e4df6u); f_103e4e70();
L_103e4df6:;
  /* 103e4df6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4dfd jne 0x103e4e06 */
  if (!C.zf) goto L_103e4e06;
  /* 103e4dff mov eax, 1 */
  EAX = (0x1u);
  /* 103e4e04 jmp 0x103e4e08 */
  goto L_103e4e08;
L_103e4e06:;
  /* 103e4e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103e4e08:;
  /* 103e4e08 mov esp, ebp */
  ESP = (EBP);
  /* 103e4e0a pop ebp */
  EBP = (pop32());
  /* 103e4e0b ret  */
  ESPCHK(0x103e4b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e10 @ 0x103e4e10 (56 bytes, 15 insns) */
void f_103e4e10(void) {
  FTRACE(0x103e4e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4e10 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4e11 mov ebp, esp */
  EBP = (ESP);
  /* 103e4e13 cmp dword ptr [0x104131bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104131bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4e1a je 0x103e4e22 */
  if (C.zf) goto L_103e4e22;
  /* 103e4e1c call dword ptr [0x104131bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104131bc))), 0x103e4e22u);
L_103e4e22:;
  /* 103e4e22 push 0x1040f418 */
  push32((uint32_t)(0x1040f418u));
  /* 103e4e27 push 0x1040f208 */
  push32((uint32_t)(0x1040f208u));
  /* 103e4e2c call 0x103e4fe0 */
  push32(0x103e4e31u); f_103e4fe0();
  /* 103e4e31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4e34 push 0x1040f104 */
  push32((uint32_t)(0x1040f104u));
  /* 103e4e39 push 0x1040f000 */
  push32((uint32_t)(0x1040f000u));
  /* 103e4e3e call 0x103e4fe0 */
  push32(0x103e4e43u); f_103e4fe0();
  /* 103e4e43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4e46 pop ebp */
  EBP = (pop32());
  /* 103e4e47 ret  */
  ESPCHK(0x103e4e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e50 @ 0x103e4e50 (21 bytes, 10 insns) */
void f_103e4e50(void) {
  FTRACE(0x103e4e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4e50 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4e51 mov ebp, esp */
  EBP = (ESP);
  /* 103e4e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e4e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e4e57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4e5a push eax */
  push32((uint32_t)(EAX));
  /* 103e4e5b call 0x103e4ed0 */
  push32(0x103e4e60u); f_103e4ed0();
  /* 103e4e60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4e63 pop ebp */
  EBP = (pop32());
  /* 103e4e64 ret  */
  ESPCHK(0x103e4e50u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x103e4e70 (21 bytes, 10 insns) */
void f_103e4e70(void) {
  FTRACE(0x103e4e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4e70 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4e71 mov ebp, esp */
  EBP = (ESP);
  /* 103e4e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e4e75 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e4e77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4e7a push eax */
  push32((uint32_t)(EAX));
  /* 103e4e7b call 0x103e4ed0 */
  push32(0x103e4e80u); f_103e4ed0();
  /* 103e4e80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4e83 pop ebp */
  EBP = (pop32());
  /* 103e4e84 ret  */
  ESPCHK(0x103e4e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e90 @ 0x103e4e90 (19 bytes, 9 insns) */
void f_103e4e90(void) {
  FTRACE(0x103e4e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4e90 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4e91 mov ebp, esp */
  EBP = (ESP);
  /* 103e4e93 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e4e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e4e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e4e99 call 0x103e4ed0 */
  push32(0x103e4e9eu); f_103e4ed0();
  /* 103e4e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4ea1 pop ebp */
  EBP = (pop32());
  /* 103e4ea2 ret  */
  ESPCHK(0x103e4e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004eb0 @ 0x103e4eb0 (19 bytes, 9 insns) */
void f_103e4eb0(void) {
  FTRACE(0x103e4eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4eb1 mov ebp, esp */
  EBP = (ESP);
  /* 103e4eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e4eb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e4eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e4eb9 call 0x103e4ed0 */
  push32(0x103e4ebeu); f_103e4ed0();
  /* 103e4ebe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4ec1 pop ebp */
  EBP = (pop32());
  /* 103e4ec2 ret  */
  ESPCHK(0x103e4eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ed0 @ 0x103e4ed0 (227 bytes, 61 insns) */
void f_103e4ed0(void) {
  FTRACE(0x103e4ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4ed1 mov ebp, esp */
  EBP = (ESP);
  /* 103e4ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4ed4 call 0x103e4fc0 */
  push32(0x103e4ed9u); f_103e4fc0();
  /* 103e4ed9 cmp dword ptr [0x104116b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104116b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4ee0 jne 0x103e4ef3 */
  if (!C.zf) goto L_103e4ef3;
  /* 103e4ee2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4ee5 push eax */
  push32((uint32_t)(EAX));
  /* 103e4ee6 call dword ptr [0x104142c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142c0))), 0x103e4eecu);
  /* 103e4eec push eax */
  push32((uint32_t)(EAX));
  /* 103e4eed call dword ptr [0x1041439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041439c))), 0x103e4ef3u);
L_103e4ef3:;
  /* 103e4ef3 mov dword ptr [0x104116b4], 1 */
  w32((uint32_t)(0x104116b4), (0x1u));
  /* 103e4efd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 103e4f00 mov byte ptr [0x104116b0], cl */
  w8((uint32_t)(0x104116b0), (CL));
  /* 103e4f06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4f0a jne 0x103e4f53 */
  if (!C.zf) goto L_103e4f53;
  /* 103e4f0c cmp dword ptr [0x104131b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104131b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4f13 je 0x103e4f41 */
  if (C.zf) goto L_103e4f41;
  /* 103e4f15 mov edx, dword ptr [0x104131b4] */
  EDX = (r32((uint32_t)(0x104131b4)));
  /* 103e4f1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103e4f1e:;
  /* 103e4f1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e4f21 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e4f24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e4f27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e4f2a cmp ecx, dword ptr [0x104131b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104131b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4f30 jb 0x103e4f41 */
  if (C.cf) goto L_103e4f41;
  /* 103e4f32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e4f35 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4f38 je 0x103e4f3f */
  if (C.zf) goto L_103e4f3f;
  /* 103e4f3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e4f3d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x103e4f3fu);
L_103e4f3f:;
  /* 103e4f3f jmp 0x103e4f1e */
  goto L_103e4f1e;
L_103e4f41:;
  /* 103e4f41 push 0x1040f724 */
  push32((uint32_t)(0x1040f724u));
  /* 103e4f46 push 0x1040f51c */
  push32((uint32_t)(0x1040f51cu));
  /* 103e4f4b call 0x103e4fe0 */
  push32(0x103e4f50u); f_103e4fe0();
  /* 103e4f50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e4f53:;
  /* 103e4f53 push 0x1040f92c */
  push32((uint32_t)(0x1040f92cu));
  /* 103e4f58 push 0x1040f828 */
  push32((uint32_t)(0x1040f828u));
  /* 103e4f5d call 0x103e4fe0 */
  push32(0x103e4f62u); f_103e4fe0();
  /* 103e4f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4f65 cmp dword ptr [0x104116bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104116bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4f6c jne 0x103e4f8e */
  if (!C.zf) goto L_103e4f8e;
  /* 103e4f6e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103e4f70 call 0x103e6bc0 */
  push32(0x103e4f75u); f_103e6bc0();
  /* 103e4f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4f78 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 103e4f7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e4f7d je 0x103e4f8e */
  if (C.zf) goto L_103e4f8e;
  /* 103e4f7f mov dword ptr [0x104116bc], 1 */
  w32((uint32_t)(0x104116bc), (0x1u));
  /* 103e4f89 call 0x103e74d0 */
  push32(0x103e4f8eu); f_103e74d0();
L_103e4f8e:;
  /* 103e4f8e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4f92 je 0x103e4f9b */
  if (C.zf) goto L_103e4f9b;
  /* 103e4f94 call 0x103e4fd0 */
  push32(0x103e4f99u); f_103e4fd0();
  /* 103e4f99 jmp 0x103e4faf */
  goto L_103e4faf;
L_103e4f9b:;
  /* 103e4f9b mov dword ptr [0x104116b8], 1 */
  w32((uint32_t)(0x104116b8), (0x1u));
  /* 103e4fa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 103e4fa9 call dword ptr [0x10414398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414398))), 0x103e4fafu);
L_103e4faf:;
  /* 103e4faf mov esp, ebp */
  ESP = (EBP);
  /* 103e4fb1 pop ebp */
  EBP = (pop32());
  /* 103e4fb2 ret  */
  ESPCHK(0x103e4ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc0 @ 0x103e4fc0 (15 bytes, 7 insns) */
void f_103e4fc0(void) {
  FTRACE(0x103e4fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4fc1 mov ebp, esp */
  EBP = (ESP);
  /* 103e4fc3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 103e4fc5 call 0x103e90b0 */
  push32(0x103e4fcau); f_103e90b0();
  /* 103e4fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4fcd pop ebp */
  EBP = (pop32());
  /* 103e4fce ret  */
  ESPCHK(0x103e4fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fd0 @ 0x103e4fd0 (15 bytes, 7 insns) */
void f_103e4fd0(void) {
  FTRACE(0x103e4fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4fd1 mov ebp, esp */
  EBP = (ESP);
  /* 103e4fd3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 103e4fd5 call 0x103e9150 */
  push32(0x103e4fdau); f_103e9150();
  /* 103e4fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4fdd pop ebp */
  EBP = (pop32());
  /* 103e4fde ret  */
  ESPCHK(0x103e4fd0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x103e4fe0 (37 bytes, 16 insns) */
void f_103e4fe0(void) {
  FTRACE(0x103e4fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e4fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e4fe1 mov ebp, esp */
  EBP = (ESP);
L_103e4fe3:;
  /* 103e4fe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4fe6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4fe9 jae 0x103e5003 */
  if (!C.cf) goto L_103e5003;
  /* 103e4feb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4fee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e4ff1 je 0x103e4ff8 */
  if (C.zf) goto L_103e4ff8;
  /* 103e4ff3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4ff6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x103e4ff8u);
L_103e4ff8:;
  /* 103e4ff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e4ffb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e4ffe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103e5001 jmp 0x103e4fe3 */
  goto L_103e4fe3;
L_103e5003:;
  /* 103e5003 pop ebp */
  EBP = (pop32());
  /* 103e5004 ret  */
  ESPCHK(0x103e4fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005010 @ 0x103e5010 (130 bytes, 42 insns) */
void f_103e5010(void) {
  FTRACE(0x103e5010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e5010 push ebp */
  push32((uint32_t)(EBP));
  /* 103e5011 mov ebp, esp */
  EBP = (ESP);
  /* 103e5013 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5014 call 0x103e8fd0 */
  push32(0x103e5019u); f_103e8fd0();
  /* 103e5019 call dword ptr [0x104143ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143ac))), 0x103e501fu);
  /* 103e501f mov dword ptr [0x1040fa5c], eax */
  w32((uint32_t)(0x1040fa5c), (EAX));
  /* 103e5024 cmp dword ptr [0x1040fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e502b jne 0x103e5031 */
  if (!C.zf) goto L_103e5031;
  /* 103e502d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e502f jmp 0x103e508e */
  goto L_103e508e;
L_103e5031:;
  /* 103e5031 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 103e5033 push 0x1040c6fc */
  push32((uint32_t)(0x1040c6fcu));
  /* 103e5038 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e503a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 103e503c push 1 */
  push32((uint32_t)(0x1u));
  /* 103e503e call 0x103e5ac0 */
  push32(0x103e5043u); f_103e5ac0();
  /* 103e5043 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5046 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e5049 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e504d je 0x103e5064 */
  if (C.zf) goto L_103e5064;
  /* 103e504f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5052 push eax */
  push32((uint32_t)(EAX));
  /* 103e5053 mov ecx, dword ptr [0x1040fa5c] */
  ECX = (r32((uint32_t)(0x1040fa5c)));
  /* 103e5059 push ecx */
  push32((uint32_t)(ECX));
  /* 103e505a call dword ptr [0x104143a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143a8))), 0x103e5060u);
  /* 103e5060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e5062 jne 0x103e5068 */
  if (!C.zf) goto L_103e5068;
L_103e5064:;
  /* 103e5064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5066 jmp 0x103e508e */
  goto L_103e508e;
L_103e5068:;
  /* 103e5068 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e506b push edx */
  push32((uint32_t)(EDX));
  /* 103e506c call 0x103e50d0 */
  push32(0x103e5071u); f_103e50d0();
  /* 103e5071 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5074 call dword ptr [0x104142bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142bc))), 0x103e507au);
  /* 103e507a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e507d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103e507f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5082 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 103e5089 mov eax, 1 */
  EAX = (0x1u);
L_103e508e:;
  /* 103e508e mov esp, ebp */
  ESP = (EBP);
  /* 103e5090 pop ebp */
  EBP = (pop32());
  /* 103e5091 ret  */
  ESPCHK(0x103e5010u, _esp0);
  ESP += 4; return;
}

/* FUN_100050a0 @ 0x103e50a0 (41 bytes, 11 insns) */
void f_103e50a0(void) {
  FTRACE(0x103e50a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e50a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e50a1 mov ebp, esp */
  EBP = (ESP);
  /* 103e50a3 call 0x103e9010 */
  push32(0x103e50a8u); f_103e9010();
  /* 103e50a8 cmp dword ptr [0x1040fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e50af je 0x103e50c7 */
  if (C.zf) goto L_103e50c7;
  /* 103e50b1 mov eax, dword ptr [0x1040fa5c] */
  EAX = (r32((uint32_t)(0x1040fa5c)));
  /* 103e50b6 push eax */
  push32((uint32_t)(EAX));
  /* 103e50b7 call dword ptr [0x104143b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143b0))), 0x103e50bdu);
  /* 103e50bd mov dword ptr [0x1040fa5c], 0xffffffff */
  w32((uint32_t)(0x1040fa5c), (0xffffffffu));
L_103e50c7:;
  /* 103e50c7 pop ebp */
  EBP = (pop32());
  /* 103e50c8 ret  */
  ESPCHK(0x103e50a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050d0 @ 0x103e50d0 (25 bytes, 8 insns) */
void f_103e50d0(void) {
  FTRACE(0x103e50d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e50d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e50d1 mov ebp, esp */
  EBP = (ESP);
  /* 103e50d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e50d6 mov dword ptr [eax + 0x50], 0x1040fc00 */
  w32((uint32_t)(EAX + 0x50), (0x1040fc00u));
  /* 103e50dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e50e0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 103e50e7 pop ebp */
  EBP = (pop32());
  /* 103e50e8 ret  */
  ESPCHK(0x103e50d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050f0 @ 0x103e50f0 (152 bytes, 48 insns) */
void f_103e50f0(void) {
  FTRACE(0x103e50f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e50f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e50f1 mov ebp, esp */
  EBP = (ESP);
  /* 103e50f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e50f6 call dword ptr [0x104143bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143bc))), 0x103e50fcu);
  /* 103e50fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e50ff mov eax, dword ptr [0x1040fa5c] */
  EAX = (r32((uint32_t)(0x1040fa5c)));
  /* 103e5104 push eax */
  push32((uint32_t)(EAX));
  /* 103e5105 call dword ptr [0x104143b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143b8))), 0x103e510bu);
  /* 103e510b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e510e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5112 jne 0x103e5177 */
  if (!C.zf) goto L_103e5177;
  /* 103e5114 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 103e5119 push 0x1040c6fc */
  push32((uint32_t)(0x1040c6fcu));
  /* 103e511e push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5120 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 103e5122 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e5124 call 0x103e5ac0 */
  push32(0x103e5129u); f_103e5ac0();
  /* 103e5129 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e512c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e512f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5133 je 0x103e516d */
  if (C.zf) goto L_103e516d;
  /* 103e5135 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5138 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5139 mov edx, dword ptr [0x1040fa5c] */
  EDX = (r32((uint32_t)(0x1040fa5c)));
  /* 103e513f push edx */
  push32((uint32_t)(EDX));
  /* 103e5140 call dword ptr [0x104143a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143a8))), 0x103e5146u);
  /* 103e5146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e5148 je 0x103e516d */
  if (C.zf) goto L_103e516d;
  /* 103e514a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e514d push eax */
  push32((uint32_t)(EAX));
  /* 103e514e call 0x103e50d0 */
  push32(0x103e5153u); f_103e50d0();
  /* 103e5153 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5156 call dword ptr [0x104142bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142bc))), 0x103e515cu);
  /* 103e515c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e515f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103e5161 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5164 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 103e516b jmp 0x103e5177 */
  goto L_103e5177;
L_103e516d:;
  /* 103e516d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103e516f call 0x103e4620 */
  push32(0x103e5174u); f_103e4620();
  /* 103e5174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e5177:;
  /* 103e5177 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e517a push eax */
  push32((uint32_t)(EAX));
  /* 103e517b call dword ptr [0x104143b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143b4))), 0x103e5181u);
  /* 103e5181 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5184 mov esp, ebp */
  ESP = (EBP);
  /* 103e5186 pop ebp */
  EBP = (pop32());
  /* 103e5187 ret  */
  ESPCHK(0x103e50f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005190 @ 0x103e5190 (263 bytes, 86 insns) */
void f_103e5190(void) {
  FTRACE(0x103e5190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e5190 push ebp */
  push32((uint32_t)(EBP));
  /* 103e5191 mov ebp, esp */
  EBP = (ESP);
  /* 103e5193 cmp dword ptr [0x1040fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e519a je 0x103e5295 */
  if (C.zf) goto L_103e5295;
  /* 103e51a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e51a4 jne 0x103e51b5 */
  if (!C.zf) goto L_103e51b5;
  /* 103e51a6 mov eax, dword ptr [0x1040fa5c] */
  EAX = (r32((uint32_t)(0x1040fa5c)));
  /* 103e51ab push eax */
  push32((uint32_t)(EAX));
  /* 103e51ac call dword ptr [0x104143b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143b8))), 0x103e51b2u);
  /* 103e51b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103e51b5:;
  /* 103e51b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e51b9 je 0x103e5286 */
  if (C.zf) goto L_103e5286;
  /* 103e51bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e51c2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e51c6 je 0x103e51d9 */
  if (C.zf) goto L_103e51d9;
  /* 103e51c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e51ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e51cd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 103e51d0 push eax */
  push32((uint32_t)(EAX));
  /* 103e51d1 call 0x103e6140 */
  push32(0x103e51d6u); f_103e6140();
  /* 103e51d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e51d9:;
  /* 103e51d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e51dc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e51e0 je 0x103e51f3 */
  if (C.zf) goto L_103e51f3;
  /* 103e51e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e51e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e51e7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 103e51ea push eax */
  push32((uint32_t)(EAX));
  /* 103e51eb call 0x103e6140 */
  push32(0x103e51f0u); f_103e6140();
  /* 103e51f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e51f3:;
  /* 103e51f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e51f6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e51fa je 0x103e520d */
  if (C.zf) goto L_103e520d;
  /* 103e51fc push 2 */
  push32((uint32_t)(0x2u));
  /* 103e51fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5201 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 103e5204 push eax */
  push32((uint32_t)(EAX));
  /* 103e5205 call 0x103e6140 */
  push32(0x103e520au); f_103e6140();
  /* 103e520a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e520d:;
  /* 103e520d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5210 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5214 je 0x103e5227 */
  if (C.zf) goto L_103e5227;
  /* 103e5216 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e521b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 103e521e push eax */
  push32((uint32_t)(EAX));
  /* 103e521f call 0x103e6140 */
  push32(0x103e5224u); f_103e6140();
  /* 103e5224 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e5227:;
  /* 103e5227 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e522a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e522e je 0x103e5241 */
  if (C.zf) goto L_103e5241;
  /* 103e5230 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5232 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5235 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 103e5238 push eax */
  push32((uint32_t)(EAX));
  /* 103e5239 call 0x103e6140 */
  push32(0x103e523eu); f_103e6140();
  /* 103e523e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e5241:;
  /* 103e5241 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5244 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5248 je 0x103e525b */
  if (C.zf) goto L_103e525b;
  /* 103e524a push 2 */
  push32((uint32_t)(0x2u));
  /* 103e524c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e524f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 103e5252 push eax */
  push32((uint32_t)(EAX));
  /* 103e5253 call 0x103e6140 */
  push32(0x103e5258u); f_103e6140();
  /* 103e5258 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e525b:;
  /* 103e525b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e525e cmp dword ptr [ecx + 0x50], 0x1040fc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1040fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5265 je 0x103e5278 */
  if (C.zf) goto L_103e5278;
  /* 103e5267 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5269 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e526c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 103e526f push eax */
  push32((uint32_t)(EAX));
  /* 103e5270 call 0x103e6140 */
  push32(0x103e5275u); f_103e6140();
  /* 103e5275 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e5278:;
  /* 103e5278 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e527a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e527d push ecx */
  push32((uint32_t)(ECX));
  /* 103e527e call 0x103e6140 */
  push32(0x103e5283u); f_103e6140();
  /* 103e5283 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e5286:;
  /* 103e5286 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5288 mov edx, dword ptr [0x1040fa5c] */
  EDX = (r32((uint32_t)(0x1040fa5c)));
  /* 103e528e push edx */
  push32((uint32_t)(EDX));
  /* 103e528f call dword ptr [0x104143a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143a8))), 0x103e5295u);
L_103e5295:;
  /* 103e5295 pop ebp */
  EBP = (pop32());
  /* 103e5296 ret  */
  ESPCHK(0x103e5190u, _esp0);
  ESP += 4; return;
}

/* FUN_100052a0 @ 0x103e52a0 (11 bytes, 5 insns) */
void f_103e52a0(void) {
  FTRACE(0x103e52a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e52a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e52a1 mov ebp, esp */
  EBP = (ESP);
  /* 103e52a3 call dword ptr [0x104142bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104142bc))), 0x103e52a9u);
  /* 103e52a9 pop ebp */
  EBP = (pop32());
  /* 103e52aa ret  */
  ESPCHK(0x103e52a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x103e52b0 (11 bytes, 5 insns) */
void f_103e52b0(void) {
  FTRACE(0x103e52b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e52b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e52b1 mov ebp, esp */
  EBP = (ESP);
  /* 103e52b3 call dword ptr [0x104143a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143a4))), 0x103e52b9u);
  /* 103e52b9 pop ebp */
  EBP = (pop32());
  /* 103e52ba ret  */
  ESPCHK(0x103e52b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052c0 @ 0x103e52c0 (804 bytes, 236 insns) */
void f_103e52c0(void) {
  FTRACE(0x103e52c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e52c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e52c1 mov ebp, esp */
  EBP = (ESP);
  /* 103e52c3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e52c6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 103e52cb push 0x1040c708 */
  push32((uint32_t)(0x1040c708u));
  /* 103e52d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e52d2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 103e52d7 call 0x103e56b0 */
  push32(0x103e52dcu); f_103e56b0();
  /* 103e52dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e52df mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 103e52e2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e52e6 jne 0x103e52f2 */
  if (!C.zf) goto L_103e52f2;
  /* 103e52e8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 103e52ea call 0x103e4620 */
  push32(0x103e52efu); f_103e4620();
  /* 103e52ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e52f2:;
  /* 103e52f2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e52f5 mov dword ptr [0x10413060], eax */
  w32((uint32_t)(0x10413060), (EAX));
  /* 103e52fa mov dword ptr [0x1041319c], 0x20 */
  w32((uint32_t)(0x1041319c), (0x20u));
  /* 103e5304 jmp 0x103e530f */
  goto L_103e530f;
L_103e5306:;
  /* 103e5306 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e5309 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e530c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_103e530f:;
  /* 103e530f mov edx, dword ptr [0x10413060] */
  EDX = (r32((uint32_t)(0x10413060)));
  /* 103e5315 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e531b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e531e jae 0x103e5343 */
  if (!C.cf) goto L_103e5343;
  /* 103e5320 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e5323 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 103e5327 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e532a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 103e5330 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e5333 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 103e5337 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e533a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 103e5341 jmp 0x103e5306 */
  goto L_103e5306;
L_103e5343:;
  /* 103e5343 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 103e5346 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5347 call dword ptr [0x104143c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143c8))), 0x103e534du);
  /* 103e534d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 103e5350 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e5356 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e5358 je 0x103e54e5 */
  if (C.zf) goto L_103e54e5;
  /* 103e535e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5362 je 0x103e54e5 */
  if (C.zf) goto L_103e54e5;
  /* 103e5368 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e536b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e536d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 103e5370 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e5373 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5376 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e5379 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e537c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e537f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 103e5382 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5389 jge 0x103e5393 */
  if ((C.sf==C.of)) goto L_103e5393;
  /* 103e538b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 103e538e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 103e5391 jmp 0x103e539a */
  goto L_103e539a;
L_103e5393:;
  /* 103e5393 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_103e539a:;
  /* 103e539a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 103e539d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 103e53a0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 103e53a7 jmp 0x103e53b2 */
  goto L_103e53b2;
L_103e53a9:;
  /* 103e53a9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 103e53ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e53af mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_103e53b2:;
  /* 103e53b2 mov ecx, dword ptr [0x1041319c] */
  ECX = (r32((uint32_t)(0x1041319c)));
  /* 103e53b8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e53bb jge 0x103e5452 */
  if ((C.sf==C.of)) goto L_103e5452;
  /* 103e53c1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 103e53c6 push 0x1040c708 */
  push32((uint32_t)(0x1040c708u));
  /* 103e53cb push 2 */
  push32((uint32_t)(0x2u));
  /* 103e53cd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 103e53d2 call 0x103e56b0 */
  push32(0x103e53d7u); f_103e56b0();
  /* 103e53d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e53da mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 103e53dd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e53e1 jne 0x103e53ee */
  if (!C.zf) goto L_103e53ee;
  /* 103e53e3 mov edx, dword ptr [0x1041319c] */
  EDX = (r32((uint32_t)(0x1041319c)));
  /* 103e53e9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 103e53ec jmp 0x103e5452 */
  goto L_103e5452;
L_103e53ee:;
  /* 103e53ee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 103e53f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e53f4 mov dword ptr [eax*4 + 0x10413060], ecx */
  w32((uint32_t)(EAX*4 + 0x10413060), (ECX));
  /* 103e53fb mov edx, dword ptr [0x1041319c] */
  EDX = (r32((uint32_t)(0x1041319c)));
  /* 103e5401 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5404 mov dword ptr [0x1041319c], edx */
  w32((uint32_t)(0x1041319c), (EDX));
  /* 103e540a jmp 0x103e5415 */
  goto L_103e5415;
L_103e540c:;
  /* 103e540c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e540f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5412 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_103e5415:;
  /* 103e5415 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 103e5418 mov edx, dword ptr [ecx*4 + 0x10413060] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10413060)));
  /* 103e541f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5425 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5428 jae 0x103e544d */
  if (!C.cf) goto L_103e544d;
  /* 103e542a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e542d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 103e5431 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e5434 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 103e543a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e543d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 103e5441 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e5444 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 103e544b jmp 0x103e540c */
  goto L_103e540c;
L_103e544d:;
  /* 103e544d jmp 0x103e53a9 */
  goto L_103e53a9;
L_103e5452:;
  /* 103e5452 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 103e5459 jmp 0x103e5476 */
  goto L_103e5476;
L_103e545b:;
  /* 103e545b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 103e545e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5461 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 103e5464 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5467 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e546a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e546d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 103e5470 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5473 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_103e5476:;
  /* 103e5476 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 103e5479 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e547c jge 0x103e54e5 */
  if ((C.sf==C.of)) goto L_103e54e5;
  /* 103e547e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 103e5481 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5484 je 0x103e54e0 */
  if (C.zf) goto L_103e54e0;
  /* 103e5486 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5489 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103e548c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103e548f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e5491 je 0x103e54e0 */
  if (C.zf) goto L_103e54e0;
  /* 103e5493 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5496 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103e5499 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 103e549c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e549e jne 0x103e54b0 */
  if (!C.zf) goto L_103e54b0;
  /* 103e54a0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 103e54a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e54a5 push edx */
  push32((uint32_t)(EDX));
  /* 103e54a6 call dword ptr [0x104143c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143c4))), 0x103e54acu);
  /* 103e54ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e54ae je 0x103e54e0 */
  if (C.zf) goto L_103e54e0;
L_103e54b0:;
  /* 103e54b0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 103e54b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103e54b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 103e54b9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103e54bc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e54bf mov edx, dword ptr [eax*4 + 0x10413060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103e54c6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e54c8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 103e54cb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e54ce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 103e54d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e54d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103e54d5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e54d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e54db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103e54dd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_103e54e0:;
  /* 103e54e0 jmp 0x103e545b */
  goto L_103e545b;
L_103e54e5:;
  /* 103e54e5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 103e54ec jmp 0x103e54f7 */
  goto L_103e54f7;
L_103e54ee:;
  /* 103e54ee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 103e54f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e54f4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_103e54f7:;
  /* 103e54f7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e54fb jge 0x103e55d4 */
  if ((C.sf==C.of)) goto L_103e55d4;
  /* 103e5501 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 103e5504 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e5507 mov edx, dword ptr [0x10413060] */
  EDX = (r32((uint32_t)(0x10413060)));
  /* 103e550d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e550f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 103e5512 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e5515 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5518 jne 0x103e55c0 */
  if (!C.zf) goto L_103e55c0;
  /* 103e551e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e5521 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 103e5525 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5529 jne 0x103e5534 */
  if (!C.zf) goto L_103e5534;
  /* 103e552b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 103e5532 jmp 0x103e5544 */
  goto L_103e5544;
L_103e5534:;
  /* 103e5534 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 103e5537 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e553a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103e553c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e553e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5541 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_103e5544:;
  /* 103e5544 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 103e5547 push eax */
  push32((uint32_t)(EAX));
  /* 103e5548 call dword ptr [0x10414378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414378))), 0x103e554eu);
  /* 103e554e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 103e5551 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5555 je 0x103e55af */
  if (C.zf) goto L_103e55af;
  /* 103e5557 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103e555a push ecx */
  push32((uint32_t)(ECX));
  /* 103e555b call dword ptr [0x104143c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143c4))), 0x103e5561u);
  /* 103e5561 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 103e5564 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5568 je 0x103e55af */
  if (C.zf) goto L_103e55af;
  /* 103e556a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e556d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103e5570 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103e5572 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 103e5575 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e557b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e557e jne 0x103e5590 */
  if (!C.zf) goto L_103e5590;
  /* 103e5580 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e5583 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 103e5586 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 103e5588 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e558b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 103e558e jmp 0x103e55ad */
  goto L_103e55ad;
L_103e5590:;
  /* 103e5590 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 103e5593 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e5599 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e559c jne 0x103e55ad */
  if (!C.zf) goto L_103e55ad;
  /* 103e559e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e55a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103e55a4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 103e55a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e55aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_103e55ad:;
  /* 103e55ad jmp 0x103e55be */
  goto L_103e55be;
L_103e55af:;
  /* 103e55af mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e55b2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103e55b5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 103e55b8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e55bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_103e55be:;
  /* 103e55be jmp 0x103e55cf */
  goto L_103e55cf;
L_103e55c0:;
  /* 103e55c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e55c3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103e55c6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 103e55c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e55cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_103e55cf:;
  /* 103e55cf jmp 0x103e54ee */
  goto L_103e54ee;
L_103e55d4:;
  /* 103e55d4 mov eax, dword ptr [0x1041319c] */
  EAX = (r32((uint32_t)(0x1041319c)));
  /* 103e55d9 push eax */
  push32((uint32_t)(EAX));
  /* 103e55da call dword ptr [0x104143c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143c0))), 0x103e55e0u);
  /* 103e55e0 mov esp, ebp */
  ESP = (EBP);
  /* 103e55e2 pop ebp */
  EBP = (pop32());
  /* 103e55e3 ret  */
  ESPCHK(0x103e52c0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x103e55f0 (155 bytes, 45 insns) */
void f_103e55f0(void) {
  FTRACE(0x103e55f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e55f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e55f1 mov ebp, esp */
  EBP = (ESP);
  /* 103e55f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e55f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103e55fd jmp 0x103e5608 */
  goto L_103e5608;
L_103e55ff:;
  /* 103e55ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5602 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5605 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103e5608:;
  /* 103e5608 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e560c jge 0x103e5687 */
  if ((C.sf==C.of)) goto L_103e5687;
  /* 103e560e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5611 cmp dword ptr [ecx*4 + 0x10413060], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10413060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5619 je 0x103e5682 */
  if (C.zf) goto L_103e5682;
  /* 103e561b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e561e mov eax, dword ptr [edx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10413060)));
  /* 103e5625 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e5628 jmp 0x103e5633 */
  goto L_103e5633;
L_103e562a:;
  /* 103e562a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e562d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5630 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103e5633:;
  /* 103e5633 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5636 mov eax, dword ptr [edx*4 + 0x10413060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10413060)));
  /* 103e563d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5642 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5645 jae 0x103e565f */
  if (!C.cf) goto L_103e565f;
  /* 103e5647 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e564a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e564e je 0x103e565d */
  if (C.zf) goto L_103e565d;
  /* 103e5650 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5653 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5656 push edx */
  push32((uint32_t)(EDX));
  /* 103e5657 call dword ptr [0x104143cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143cc))), 0x103e565du);
L_103e565d:;
  /* 103e565d jmp 0x103e562a */
  goto L_103e562a;
L_103e565f:;
  /* 103e565f push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5661 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5664 mov ecx, dword ptr [eax*4 + 0x10413060] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10413060)));
  /* 103e566b push ecx */
  push32((uint32_t)(ECX));
  /* 103e566c call 0x103e6140 */
  push32(0x103e5671u); f_103e6140();
  /* 103e5671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5674 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5677 mov dword ptr [edx*4 + 0x10413060], 0 */
  w32((uint32_t)(EDX*4 + 0x10413060), (0x0u));
L_103e5682:;
  /* 103e5682 jmp 0x103e55ff */
  goto L_103e55ff;
L_103e5687:;
  /* 103e5687 mov esp, ebp */
  ESP = (EBP);
  /* 103e5689 pop ebp */
  EBP = (pop32());
  /* 103e568a ret  */
  ESPCHK(0x103e55f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005690 @ 0x103e5690 (29 bytes, 13 insns) */
void f_103e5690(void) {
  FTRACE(0x103e5690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e5690 push ebp */
  push32((uint32_t)(EBP));
  /* 103e5691 mov ebp, esp */
  EBP = (ESP);
  /* 103e5693 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5695 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5697 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e5699 mov eax, dword ptr [0x10411860] */
  EAX = (r32((uint32_t)(0x10411860)));
  /* 103e569e push eax */
  push32((uint32_t)(EAX));
  /* 103e569f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e56a2 push ecx */
  push32((uint32_t)(ECX));
  /* 103e56a3 call 0x103e5700 */
  push32(0x103e56a8u); f_103e5700();
  /* 103e56a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e56ab pop ebp */
  EBP = (pop32());
  /* 103e56ac ret  */
  ESPCHK(0x103e5690u, _esp0);
  ESP += 4; return;
}

/* FUN_100056b0 @ 0x103e56b0 (35 bytes, 16 insns) */
void f_103e56b0(void) {
  FTRACE(0x103e56b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e56b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e56b1 mov ebp, esp */
  EBP = (ESP);
  /* 103e56b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e56b6 push eax */
  push32((uint32_t)(EAX));
  /* 103e56b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e56ba push ecx */
  push32((uint32_t)(ECX));
  /* 103e56bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e56be push edx */
  push32((uint32_t)(EDX));
  /* 103e56bf mov eax, dword ptr [0x10411860] */
  EAX = (r32((uint32_t)(0x10411860)));
  /* 103e56c4 push eax */
  push32((uint32_t)(EAX));
  /* 103e56c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e56c8 push ecx */
  push32((uint32_t)(ECX));
  /* 103e56c9 call 0x103e5700 */
  push32(0x103e56ceu); f_103e5700();
  /* 103e56ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e56d1 pop ebp */
  EBP = (pop32());
  /* 103e56d2 ret  */
  ESPCHK(0x103e56b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100056e0 @ 0x103e56e0 (27 bytes, 13 insns) */
void f_103e56e0(void) {
  FTRACE(0x103e56e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e56e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e56e1 mov ebp, esp */
  EBP = (ESP);
  /* 103e56e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e56e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e56e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e56e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e56ec push eax */
  push32((uint32_t)(EAX));
  /* 103e56ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e56f0 push ecx */
  push32((uint32_t)(ECX));
  /* 103e56f1 call 0x103e5700 */
  push32(0x103e56f6u); f_103e5700();
  /* 103e56f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e56f9 pop ebp */
  EBP = (pop32());
  /* 103e56fa ret  */
  ESPCHK(0x103e56e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005700 @ 0x103e5700 (94 bytes, 38 insns) */
void f_103e5700(void) {
  FTRACE(0x103e5700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e5700 push ebp */
  push32((uint32_t)(EBP));
  /* 103e5701 mov ebp, esp */
  EBP = (ESP);
  /* 103e5703 push ecx */
  push32((uint32_t)(ECX));
L_103e5704:;
  /* 103e5704 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e5706 call 0x103e90b0 */
  push32(0x103e570bu); f_103e90b0();
  /* 103e570b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e570e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e5711 push eax */
  push32((uint32_t)(EAX));
  /* 103e5712 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e5715 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5716 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5719 push edx */
  push32((uint32_t)(EDX));
  /* 103e571a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e571d push eax */
  push32((uint32_t)(EAX));
  /* 103e571e call 0x103e5780 */
  push32(0x103e5723u); f_103e5780();
  /* 103e5723 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5726 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e5729 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e572b call 0x103e9150 */
  push32(0x103e5730u); f_103e9150();
  /* 103e5730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5733 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5737 jne 0x103e573f */
  if (!C.zf) goto L_103e573f;
  /* 103e5739 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e573d jne 0x103e5744 */
  if (!C.zf) goto L_103e5744;
L_103e573f:;
  /* 103e573f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5742 jmp 0x103e575a */
  goto L_103e575a;
L_103e5744:;
  /* 103e5744 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5747 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5748 call 0x103e93f0 */
  push32(0x103e574du); f_103e93f0();
  /* 103e574d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5750 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e5752 jne 0x103e5758 */
  if (!C.zf) goto L_103e5758;
  /* 103e5754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5756 jmp 0x103e575a */
  goto L_103e575a;
L_103e5758:;
  /* 103e5758 jmp 0x103e5704 */
  goto L_103e5704;
L_103e575a:;
  /* 103e575a mov esp, ebp */
  ESP = (EBP);
  /* 103e575c pop ebp */
  EBP = (pop32());
  /* 103e575d ret  */
  ESPCHK(0x103e5700u, _esp0);
  ESP += 4; return;
}

/* FUN_10005760 @ 0x103e5760 (23 bytes, 11 insns) */
void f_103e5760(void) {
  FTRACE(0x103e5760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e5760 push ebp */
  push32((uint32_t)(EBP));
  /* 103e5761 mov ebp, esp */
  EBP = (ESP);
  /* 103e5763 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5765 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5767 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e5769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e576c push eax */
  push32((uint32_t)(EAX));
  /* 103e576d call 0x103e5780 */
  push32(0x103e5772u); f_103e5780();
  /* 103e5772 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5775 pop ebp */
  EBP = (pop32());
  /* 103e5776 ret  */
  ESPCHK(0x103e5760u, _esp0);
  ESP += 4; return;
}

/* FUN_10005780 @ 0x103e5780 (787 bytes, 254 insns) */
void f_103e5780(void) {
  FTRACE(0x103e5780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e5780 push ebp */
  push32((uint32_t)(EBP));
  /* 103e5781 mov ebp, esp */
  EBP = (ESP);
  /* 103e5783 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e5786 push ebx */
  push32((uint32_t)(EBX));
  /* 103e5787 push esi */
  push32((uint32_t)(ESI));
  /* 103e5788 push edi */
  push32((uint32_t)(EDI));
  /* 103e5789 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103e5790 mov eax, dword ptr [0x1040fa84] */
  EAX = (r32((uint32_t)(0x1040fa84)));
  /* 103e5795 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103e5798 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e579a je 0x103e57cc */
  if (C.zf) goto L_103e57cc;
L_103e579c:;
  /* 103e579c call 0x103e6850 */
  push32(0x103e57a1u); f_103e6850();
  /* 103e57a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e57a3 jne 0x103e57c6 */
  if (!C.zf) goto L_103e57c6;
  /* 103e57a5 push 0x1040c7fc */
  push32((uint32_t)(0x1040c7fcu));
  /* 103e57aa push 0 */
  push32((uint32_t)(0x0u));
  /* 103e57ac push 0x141 */
  push32((uint32_t)(0x141u));
  /* 103e57b1 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e57b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e57b8 call 0x103e4770 */
  push32(0x103e57bdu); f_103e4770();
  /* 103e57bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e57c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e57c3 jne 0x103e57c6 */
  if (!C.zf) goto L_103e57c6;
  /* 103e57c5 int3  */
  x86_unimpl("int3 @ 0x103e57c5");
L_103e57c6:;
  /* 103e57c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e57c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e57ca jne 0x103e579c */
  if (!C.zf) goto L_103e579c;
L_103e57cc:;
  /* 103e57cc mov edx, dword ptr [0x1040fa88] */
  EDX = (r32((uint32_t)(0x1040fa88)));
  /* 103e57d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103e57d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e57d8 cmp eax, dword ptr [0x1040fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1040fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e57de jne 0x103e57e1 */
  if (!C.zf) goto L_103e57e1;
  /* 103e57e0 int3  */
  x86_unimpl("int3 @ 0x103e57e0");
L_103e57e1:;
  /* 103e57e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e57e4 push ecx */
  push32((uint32_t)(ECX));
  /* 103e57e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e57e8 push edx */
  push32((uint32_t)(EDX));
  /* 103e57e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e57ec push eax */
  push32((uint32_t)(EAX));
  /* 103e57ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e57f0 push ecx */
  push32((uint32_t)(ECX));
  /* 103e57f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e57f4 push edx */
  push32((uint32_t)(EDX));
  /* 103e57f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e57f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e57f9 call dword ptr [0x1040fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1040fc90))), 0x103e57ffu);
  /* 103e57ff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5802 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e5804 jne 0x103e5864 */
  if (!C.zf) goto L_103e5864;
  /* 103e5806 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e580a je 0x103e5837 */
  if (C.zf) goto L_103e5837;
L_103e580c:;
  /* 103e580c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e580f push eax */
  push32((uint32_t)(EAX));
  /* 103e5810 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5813 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5814 push 0x1040c7b8 */
  push32((uint32_t)(0x1040c7b8u));
  /* 103e5819 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e581b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e581d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e581f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5821 call 0x103e4770 */
  push32(0x103e5826u); f_103e4770();
  /* 103e5826 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5829 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e582c jne 0x103e582f */
  if (!C.zf) goto L_103e582f;
  /* 103e582e int3  */
  x86_unimpl("int3 @ 0x103e582e");
L_103e582f:;
  /* 103e582f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e5831 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e5833 jne 0x103e580c */
  if (!C.zf) goto L_103e580c;
  /* 103e5835 jmp 0x103e585d */
  goto L_103e585d;
L_103e5837:;
  /* 103e5837 push 0x1040c794 */
  push32((uint32_t)(0x1040c794u));
  /* 103e583c push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e5841 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5843 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5845 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5847 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5849 call 0x103e4770 */
  push32(0x103e584eu); f_103e4770();
  /* 103e584e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5851 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5854 jne 0x103e5857 */
  if (!C.zf) goto L_103e5857;
  /* 103e5856 int3  */
  x86_unimpl("int3 @ 0x103e5856");
L_103e5857:;
  /* 103e5857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e585b jne 0x103e5837 */
  if (!C.zf) goto L_103e5837;
L_103e585d:;
  /* 103e585d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e585f jmp 0x103e5a8c */
  goto L_103e5a8c;
L_103e5864:;
  /* 103e5864 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5867 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e586d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5870 je 0x103e5886 */
  if (C.zf) goto L_103e5886;
  /* 103e5872 mov edx, dword ptr [0x1040fa84] */
  EDX = (r32((uint32_t)(0x1040fa84)));
  /* 103e5878 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103e587b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e587d jne 0x103e5886 */
  if (!C.zf) goto L_103e5886;
  /* 103e587f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_103e5886:;
  /* 103e5886 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e588a ja 0x103e5897 */
  if ((!C.cf&&!C.zf)) goto L_103e5897;
  /* 103e588c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e588f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5892 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5895 jbe 0x103e58c3 */
  if ((C.cf||C.zf)) goto L_103e58c3;
L_103e5897:;
  /* 103e5897 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e589a push ecx */
  push32((uint32_t)(ECX));
  /* 103e589b push 0x1040c76c */
  push32((uint32_t)(0x1040c76cu));
  /* 103e58a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e58a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e58a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e58a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e58a8 call 0x103e4770 */
  push32(0x103e58adu); f_103e4770();
  /* 103e58ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e58b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e58b3 jne 0x103e58b6 */
  if (!C.zf) goto L_103e58b6;
  /* 103e58b5 int3  */
  x86_unimpl("int3 @ 0x103e58b5");
L_103e58b6:;
  /* 103e58b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e58b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e58ba jne 0x103e5897 */
  if (!C.zf) goto L_103e5897;
  /* 103e58bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e58be jmp 0x103e5a8c */
  goto L_103e5a8c;
L_103e58c3:;
  /* 103e58c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e58c6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e58cb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e58ce je 0x103e5910 */
  if (C.zf) goto L_103e5910;
  /* 103e58d0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e58d4 je 0x103e5910 */
  if (C.zf) goto L_103e5910;
  /* 103e58d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e58d9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e58df cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e58e2 je 0x103e5910 */
  if (C.zf) goto L_103e5910;
  /* 103e58e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e58e8 je 0x103e5910 */
  if (C.zf) goto L_103e5910;
L_103e58ea:;
  /* 103e58ea push 0x1040c738 */
  push32((uint32_t)(0x1040c738u));
  /* 103e58ef push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e58f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e58f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e58f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e58fa push 1 */
  push32((uint32_t)(0x1u));
  /* 103e58fc call 0x103e4770 */
  push32(0x103e5901u); f_103e4770();
  /* 103e5901 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5904 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5907 jne 0x103e590a */
  if (!C.zf) goto L_103e590a;
  /* 103e5909 int3  */
  x86_unimpl("int3 @ 0x103e5909");
L_103e590a:;
  /* 103e590a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e590c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e590e jne 0x103e58ea */
  if (!C.zf) goto L_103e58ea;
L_103e5910:;
  /* 103e5910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5913 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5916 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103e5919 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e591c push ecx */
  push32((uint32_t)(ECX));
  /* 103e591d call 0x103e9500 */
  push32(0x103e5922u); f_103e9500();
  /* 103e5922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5925 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e5928 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e592c jne 0x103e5935 */
  if (!C.zf) goto L_103e5935;
  /* 103e592e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5930 jmp 0x103e5a8c */
  goto L_103e5a8c;
L_103e5935:;
  /* 103e5935 mov edx, dword ptr [0x1040fa88] */
  EDX = (r32((uint32_t)(0x1040fa88)));
  /* 103e593b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e593e mov dword ptr [0x1040fa88], edx */
  w32((uint32_t)(0x1040fa88), (EDX));
  /* 103e5944 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5948 je 0x103e5993 */
  if (C.zf) goto L_103e5993;
  /* 103e594a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e594d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103e5953 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5956 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 103e595d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5960 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 103e5967 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e596a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 103e5971 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5977 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 103e597a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e597d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 103e5984 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5987 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 103e598e jmp 0x103e5a33 */
  goto L_103e5a33;
L_103e5993:;
  /* 103e5993 mov edx, dword ptr [0x104116c4] */
  EDX = (r32((uint32_t)(0x104116c4)));
  /* 103e5999 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e599c mov dword ptr [0x104116c4], edx */
  w32((uint32_t)(0x104116c4), (EDX));
  /* 103e59a2 mov eax, dword ptr [0x104116cc] */
  EAX = (r32((uint32_t)(0x104116cc)));
  /* 103e59a7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e59aa mov dword ptr [0x104116cc], eax */
  w32((uint32_t)(0x104116cc), (EAX));
  /* 103e59af mov ecx, dword ptr [0x104116cc] */
  ECX = (r32((uint32_t)(0x104116cc)));
  /* 103e59b5 cmp ecx, dword ptr [0x104116d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104116d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e59bb jbe 0x103e59c9 */
  if ((C.cf||C.zf)) goto L_103e59c9;
  /* 103e59bd mov edx, dword ptr [0x104116cc] */
  EDX = (r32((uint32_t)(0x104116cc)));
  /* 103e59c3 mov dword ptr [0x104116d0], edx */
  w32((uint32_t)(0x104116d0), (EDX));
L_103e59c9:;
  /* 103e59c9 cmp dword ptr [0x104116c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104116c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e59d0 je 0x103e59df */
  if (C.zf) goto L_103e59df;
  /* 103e59d2 mov eax, dword ptr [0x104116c8] */
  EAX = (r32((uint32_t)(0x104116c8)));
  /* 103e59d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e59da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103e59dd jmp 0x103e59e8 */
  goto L_103e59e8;
L_103e59df:;
  /* 103e59df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e59e2 mov dword ptr [0x104116c0], edx */
  w32((uint32_t)(0x104116c0), (EDX));
L_103e59e8:;
  /* 103e59e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e59eb mov ecx, dword ptr [0x104116c8] */
  ECX = (r32((uint32_t)(0x104116c8)));
  /* 103e59f1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103e59f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e59f6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 103e59fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5a00 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5a03 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 103e5a06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5a09 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e5a0c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 103e5a0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5a12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5a15 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 103e5a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5a1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5a1e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 103e5a21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5a24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5a27 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 103e5a2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5a2d mov dword ptr [0x104116c8], ecx */
  w32((uint32_t)(0x104116c8), (ECX));
L_103e5a33:;
  /* 103e5a33 push 4 */
  push32((uint32_t)(0x4u));
  /* 103e5a35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e5a37 mov dl, byte ptr [0x1040fa90] */
  DL = (r8((uint32_t)(0x1040fa90)));
  /* 103e5a3d push edx */
  push32((uint32_t)(EDX));
  /* 103e5a3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5a41 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5a44 push eax */
  push32((uint32_t)(EAX));
  /* 103e5a45 call 0x103e9420 */
  push32(0x103e5a4au); f_103e9420();
  /* 103e5a4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5a4d push 4 */
  push32((uint32_t)(0x4u));
  /* 103e5a4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e5a51 mov cl, byte ptr [0x1040fa90] */
  CL = (r8((uint32_t)(0x1040fa90)));
  /* 103e5a57 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5a58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5a5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5a5e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 103e5a62 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5a63 call 0x103e9420 */
  push32(0x103e5a68u); f_103e9420();
  /* 103e5a68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5a6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5a6e push edx */
  push32((uint32_t)(EDX));
  /* 103e5a6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5a71 mov al, byte ptr [0x1040fa92] */
  AL = (r8((uint32_t)(0x1040fa92)));
  /* 103e5a76 push eax */
  push32((uint32_t)(EAX));
  /* 103e5a77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5a7a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5a7d push ecx */
  push32((uint32_t)(ECX));
  /* 103e5a7e call 0x103e9420 */
  push32(0x103e5a83u); f_103e9420();
  /* 103e5a83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5a86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5a89 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_103e5a8c:;
  /* 103e5a8c pop edi */
  EDI = (pop32());
  /* 103e5a8d pop esi */
  ESI = (pop32());
  /* 103e5a8e pop ebx */
  EBX = (pop32());
  /* 103e5a8f mov esp, ebp */
  ESP = (EBP);
  /* 103e5a91 pop ebp */
  EBP = (pop32());
  /* 103e5a92 ret  */
  ESPCHK(0x103e5780u, _esp0);
  ESP += 4; return;
}

/* FUN_10005aa0 @ 0x103e5aa0 (27 bytes, 13 insns) */
void f_103e5aa0(void) {
  FTRACE(0x103e5aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e5aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e5aa1 mov ebp, esp */
  EBP = (ESP);
  /* 103e5aa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5aa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e5aa9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5aac push eax */
  push32((uint32_t)(EAX));
  /* 103e5aad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5ab0 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5ab1 call 0x103e5ac0 */
  push32(0x103e5ab6u); f_103e5ac0();
  /* 103e5ab6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5ab9 pop ebp */
  EBP = (pop32());
  /* 103e5aba ret  */
  ESPCHK(0x103e5aa0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x103e5ac0 (96 bytes, 37 insns) */
void f_103e5ac0(void) {
  FTRACE(0x103e5ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e5ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e5ac1 mov ebp, esp */
  EBP = (ESP);
  /* 103e5ac3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e5ac6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5ac9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e5acd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 103e5ad0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e5ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5ad4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e5ad7 push edx */
  push32((uint32_t)(EDX));
  /* 103e5ad8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5adb push eax */
  push32((uint32_t)(EAX));
  /* 103e5adc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5adf push ecx */
  push32((uint32_t)(ECX));
  /* 103e5ae0 call 0x103e56b0 */
  push32(0x103e5ae5u); f_103e56b0();
  /* 103e5ae5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5ae8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e5aeb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5aef je 0x103e5b19 */
  if (C.zf) goto L_103e5b19;
  /* 103e5af1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5af4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103e5af7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5afa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5afd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e5b00:;
  /* 103e5b00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5b03 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5b06 jae 0x103e5b19 */
  if (!C.cf) goto L_103e5b19;
  /* 103e5b08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5b0b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103e5b0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5b11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5b14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e5b17 jmp 0x103e5b00 */
  goto L_103e5b00;
L_103e5b19:;
  /* 103e5b19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5b1c mov esp, ebp */
  ESP = (EBP);
  /* 103e5b1e pop ebp */
  EBP = (pop32());
  /* 103e5b1f ret  */
  ESPCHK(0x103e5ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b20 @ 0x103e5b20 (27 bytes, 13 insns) */
void f_103e5b20(void) {
  FTRACE(0x103e5b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e5b20 push ebp */
  push32((uint32_t)(EBP));
  /* 103e5b21 mov ebp, esp */
  EBP = (ESP);
  /* 103e5b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5b27 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e5b29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5b2c push eax */
  push32((uint32_t)(EAX));
  /* 103e5b2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5b30 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5b31 call 0x103e5b40 */
  push32(0x103e5b36u); f_103e5b40();
  /* 103e5b36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5b39 pop ebp */
  EBP = (pop32());
  /* 103e5b3a ret  */
  ESPCHK(0x103e5b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b40 @ 0x103e5b40 (64 bytes, 27 insns) */
void f_103e5b40(void) {
  FTRACE(0x103e5b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e5b40 push ebp */
  push32((uint32_t)(EBP));
  /* 103e5b41 mov ebp, esp */
  EBP = (ESP);
  /* 103e5b43 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5b44 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e5b46 call 0x103e90b0 */
  push32(0x103e5b4bu); f_103e90b0();
  /* 103e5b4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5b4e push 1 */
  push32((uint32_t)(0x1u));
  /* 103e5b50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e5b53 push eax */
  push32((uint32_t)(EAX));
  /* 103e5b54 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e5b57 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5b58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5b5b push edx */
  push32((uint32_t)(EDX));
  /* 103e5b5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5b5f push eax */
  push32((uint32_t)(EAX));
  /* 103e5b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5b63 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5b64 call 0x103e5b80 */
  push32(0x103e5b69u); f_103e5b80();
  /* 103e5b69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5b6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e5b6f push 9 */
  push32((uint32_t)(0x9u));
  /* 103e5b71 call 0x103e9150 */
  push32(0x103e5b76u); f_103e9150();
  /* 103e5b76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5b79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5b7c mov esp, ebp */
  ESP = (EBP);
  /* 103e5b7e pop ebp */
  EBP = (pop32());
  /* 103e5b7f ret  */
  ESPCHK(0x103e5b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x103e5b80 (1297 bytes, 431 insns) */
void f_103e5b80(void) {
  FTRACE(0x103e5b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e5b80 push ebp */
  push32((uint32_t)(EBP));
  /* 103e5b81 mov ebp, esp */
  EBP = (ESP);
  /* 103e5b83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e5b86 push ebx */
  push32((uint32_t)(EBX));
  /* 103e5b87 push esi */
  push32((uint32_t)(ESI));
  /* 103e5b88 push edi */
  push32((uint32_t)(EDI));
  /* 103e5b89 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 103e5b90 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5b94 jne 0x103e5bb3 */
  if (!C.zf) goto L_103e5bb3;
  /* 103e5b96 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e5b99 push eax */
  push32((uint32_t)(EAX));
  /* 103e5b9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e5b9d push ecx */
  push32((uint32_t)(ECX));
  /* 103e5b9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5ba1 push edx */
  push32((uint32_t)(EDX));
  /* 103e5ba2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5ba5 push eax */
  push32((uint32_t)(EAX));
  /* 103e5ba6 call 0x103e56b0 */
  push32(0x103e5babu); f_103e56b0();
  /* 103e5bab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5bae jmp 0x103e608a */
  goto L_103e608a;
L_103e5bb3:;
  /* 103e5bb3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5bb7 je 0x103e5bd6 */
  if (C.zf) goto L_103e5bd6;
  /* 103e5bb9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5bbd jne 0x103e5bd6 */
  if (!C.zf) goto L_103e5bd6;
  /* 103e5bbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5bc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5bc6 push edx */
  push32((uint32_t)(EDX));
  /* 103e5bc7 call 0x103e6140 */
  push32(0x103e5bccu); f_103e6140();
  /* 103e5bcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5bcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5bd1 jmp 0x103e608a */
  goto L_103e608a;
L_103e5bd6:;
  /* 103e5bd6 mov eax, dword ptr [0x1040fa84] */
  EAX = (r32((uint32_t)(0x1040fa84)));
  /* 103e5bdb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103e5bde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e5be0 je 0x103e5c12 */
  if (C.zf) goto L_103e5c12;
L_103e5be2:;
  /* 103e5be2 call 0x103e6850 */
  push32(0x103e5be7u); f_103e6850();
  /* 103e5be7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e5be9 jne 0x103e5c0c */
  if (!C.zf) goto L_103e5c0c;
  /* 103e5beb push 0x1040c7fc */
  push32((uint32_t)(0x1040c7fcu));
  /* 103e5bf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5bf2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 103e5bf7 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e5bfc push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5bfe call 0x103e4770 */
  push32(0x103e5c03u); f_103e4770();
  /* 103e5c03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5c06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5c09 jne 0x103e5c0c */
  if (!C.zf) goto L_103e5c0c;
  /* 103e5c0b int3  */
  x86_unimpl("int3 @ 0x103e5c0b");
L_103e5c0c:;
  /* 103e5c0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e5c0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e5c10 jne 0x103e5be2 */
  if (!C.zf) goto L_103e5be2;
L_103e5c12:;
  /* 103e5c12 mov edx, dword ptr [0x1040fa88] */
  EDX = (r32((uint32_t)(0x1040fa88)));
  /* 103e5c18 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103e5c1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e5c1e cmp eax, dword ptr [0x1040fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1040fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5c24 jne 0x103e5c27 */
  if (!C.zf) goto L_103e5c27;
  /* 103e5c26 int3  */
  x86_unimpl("int3 @ 0x103e5c26");
L_103e5c27:;
  /* 103e5c27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e5c2a push ecx */
  push32((uint32_t)(ECX));
  /* 103e5c2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e5c2e push edx */
  push32((uint32_t)(EDX));
  /* 103e5c2f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e5c32 push eax */
  push32((uint32_t)(EAX));
  /* 103e5c33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5c36 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5c37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5c3a push edx */
  push32((uint32_t)(EDX));
  /* 103e5c3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5c3e push eax */
  push32((uint32_t)(EAX));
  /* 103e5c3f push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5c41 call dword ptr [0x1040fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1040fc90))), 0x103e5c47u);
  /* 103e5c47 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e5c4c jne 0x103e5cac */
  if (!C.zf) goto L_103e5cac;
  /* 103e5c4e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5c52 je 0x103e5c7f */
  if (C.zf) goto L_103e5c7f;
L_103e5c54:;
  /* 103e5c54 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e5c57 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5c58 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e5c5b push edx */
  push32((uint32_t)(EDX));
  /* 103e5c5c push 0x1040c978 */
  push32((uint32_t)(0x1040c978u));
  /* 103e5c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5c65 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5c69 call 0x103e4770 */
  push32(0x103e5c6eu); f_103e4770();
  /* 103e5c6e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5c71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5c74 jne 0x103e5c77 */
  if (!C.zf) goto L_103e5c77;
  /* 103e5c76 int3  */
  x86_unimpl("int3 @ 0x103e5c76");
L_103e5c77:;
  /* 103e5c77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e5c7b jne 0x103e5c54 */
  if (!C.zf) goto L_103e5c54;
  /* 103e5c7d jmp 0x103e5ca5 */
  goto L_103e5ca5;
L_103e5c7f:;
  /* 103e5c7f push 0x1040c954 */
  push32((uint32_t)(0x1040c954u));
  /* 103e5c84 push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e5c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5c8b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5c91 call 0x103e4770 */
  push32(0x103e5c96u); f_103e4770();
  /* 103e5c96 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5c99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5c9c jne 0x103e5c9f */
  if (!C.zf) goto L_103e5c9f;
  /* 103e5c9e int3  */
  x86_unimpl("int3 @ 0x103e5c9e");
L_103e5c9f:;
  /* 103e5c9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e5ca1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e5ca3 jne 0x103e5c7f */
  if (!C.zf) goto L_103e5c7f;
L_103e5ca5:;
  /* 103e5ca5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5ca7 jmp 0x103e608a */
  goto L_103e608a;
L_103e5cac:;
  /* 103e5cac cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5cb0 jbe 0x103e5cde */
  if ((C.cf||C.zf)) goto L_103e5cde;
L_103e5cb2:;
  /* 103e5cb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5cb5 push edx */
  push32((uint32_t)(EDX));
  /* 103e5cb6 push 0x1040c924 */
  push32((uint32_t)(0x1040c924u));
  /* 103e5cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5cc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e5cc3 call 0x103e4770 */
  push32(0x103e5cc8u); f_103e4770();
  /* 103e5cc8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5ccb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5cce jne 0x103e5cd1 */
  if (!C.zf) goto L_103e5cd1;
  /* 103e5cd0 int3  */
  x86_unimpl("int3 @ 0x103e5cd0");
L_103e5cd1:;
  /* 103e5cd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5cd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e5cd5 jne 0x103e5cb2 */
  if (!C.zf) goto L_103e5cb2;
  /* 103e5cd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5cd9 jmp 0x103e608a */
  goto L_103e608a;
L_103e5cde:;
  /* 103e5cde cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5ce2 je 0x103e5d26 */
  if (C.zf) goto L_103e5d26;
  /* 103e5ce4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5ce7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e5ced cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5cf0 je 0x103e5d26 */
  if (C.zf) goto L_103e5d26;
  /* 103e5cf2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5cf5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e5cfb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5cfe je 0x103e5d26 */
  if (C.zf) goto L_103e5d26;
L_103e5d00:;
  /* 103e5d00 push 0x1040c738 */
  push32((uint32_t)(0x1040c738u));
  /* 103e5d05 push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e5d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5d0c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5d0e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5d10 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e5d12 call 0x103e4770 */
  push32(0x103e5d17u); f_103e4770();
  /* 103e5d17 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5d1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5d1d jne 0x103e5d20 */
  if (!C.zf) goto L_103e5d20;
  /* 103e5d1f int3  */
  x86_unimpl("int3 @ 0x103e5d1f");
L_103e5d20:;
  /* 103e5d20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e5d24 jne 0x103e5d00 */
  if (!C.zf) goto L_103e5d00;
L_103e5d26:;
  /* 103e5d26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5d29 push ecx */
  push32((uint32_t)(ECX));
  /* 103e5d2a call 0x103e6cb0 */
  push32(0x103e5d2fu); f_103e6cb0();
  /* 103e5d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e5d34 jne 0x103e5d57 */
  if (!C.zf) goto L_103e5d57;
  /* 103e5d36 push 0x1040c900 */
  push32((uint32_t)(0x1040c900u));
  /* 103e5d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5d3d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 103e5d42 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e5d47 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5d49 call 0x103e4770 */
  push32(0x103e5d4eu); f_103e4770();
  /* 103e5d4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5d51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5d54 jne 0x103e5d57 */
  if (!C.zf) goto L_103e5d57;
  /* 103e5d56 int3  */
  x86_unimpl("int3 @ 0x103e5d56");
L_103e5d57:;
  /* 103e5d57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e5d59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e5d5b jne 0x103e5d26 */
  if (!C.zf) goto L_103e5d26;
  /* 103e5d5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e5d60 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e5d63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e5d66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5d69 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5d6d jne 0x103e5d76 */
  if (!C.zf) goto L_103e5d76;
  /* 103e5d6f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_103e5d76:;
  /* 103e5d76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5d7a je 0x103e5dba */
  if (C.zf) goto L_103e5dba;
L_103e5d7c:;
  /* 103e5d7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5d7f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5d86 jne 0x103e5d91 */
  if (!C.zf) goto L_103e5d91;
  /* 103e5d88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5d8b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5d8f je 0x103e5db2 */
  if (C.zf) goto L_103e5db2;
L_103e5d91:;
  /* 103e5d91 push 0x1040c8b8 */
  push32((uint32_t)(0x1040c8b8u));
  /* 103e5d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5d98 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 103e5d9d push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e5da2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5da4 call 0x103e4770 */
  push32(0x103e5da9u); f_103e4770();
  /* 103e5da9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5dac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5daf jne 0x103e5db2 */
  if (!C.zf) goto L_103e5db2;
  /* 103e5db1 int3  */
  x86_unimpl("int3 @ 0x103e5db1");
L_103e5db2:;
  /* 103e5db2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e5db4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e5db6 jne 0x103e5d7c */
  if (!C.zf) goto L_103e5d7c;
  /* 103e5db8 jmp 0x103e5e1e */
  goto L_103e5e1e;
L_103e5dba:;
  /* 103e5dba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5dbd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e5dc0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e5dc5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5dc8 jne 0x103e5ddf */
  if (!C.zf) goto L_103e5ddf;
  /* 103e5dca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5dcd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e5dd3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5dd6 jne 0x103e5ddf */
  if (!C.zf) goto L_103e5ddf;
  /* 103e5dd8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_103e5ddf:;
  /* 103e5ddf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5de2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e5de5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e5dea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e5ded and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e5df3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5df5 je 0x103e5e18 */
  if (C.zf) goto L_103e5e18;
  /* 103e5df7 push 0x1040c87c */
  push32((uint32_t)(0x1040c87cu));
  /* 103e5dfc push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5dfe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 103e5e03 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e5e08 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5e0a call 0x103e4770 */
  push32(0x103e5e0fu); f_103e4770();
  /* 103e5e0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5e12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5e15 jne 0x103e5e18 */
  if (!C.zf) goto L_103e5e18;
  /* 103e5e17 int3  */
  x86_unimpl("int3 @ 0x103e5e17");
L_103e5e18:;
  /* 103e5e18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e5e1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e5e1c jne 0x103e5ddf */
  if (!C.zf) goto L_103e5ddf;
L_103e5e1e:;
  /* 103e5e1e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5e22 je 0x103e5e49 */
  if (C.zf) goto L_103e5e49;
  /* 103e5e24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5e27 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5e2a push eax */
  push32((uint32_t)(EAX));
  /* 103e5e2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5e2e push ecx */
  push32((uint32_t)(ECX));
  /* 103e5e2f call 0x103e9630 */
  push32(0x103e5e34u); f_103e9630();
  /* 103e5e34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5e37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e5e3a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5e3e jne 0x103e5e47 */
  if (!C.zf) goto L_103e5e47;
  /* 103e5e40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5e42 jmp 0x103e608a */
  goto L_103e608a;
L_103e5e47:;
  /* 103e5e47 jmp 0x103e5e6c */
  goto L_103e5e6c;
L_103e5e49:;
  /* 103e5e49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5e4c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5e4f push edx */
  push32((uint32_t)(EDX));
  /* 103e5e50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e5e53 push eax */
  push32((uint32_t)(EAX));
  /* 103e5e54 call 0x103e9580 */
  push32(0x103e5e59u); f_103e9580();
  /* 103e5e59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5e5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e5e5f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5e63 jne 0x103e5e6c */
  if (!C.zf) goto L_103e5e6c;
  /* 103e5e65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5e67 jmp 0x103e608a */
  goto L_103e608a;
L_103e5e6c:;
  /* 103e5e6c mov ecx, dword ptr [0x1040fa88] */
  ECX = (r32((uint32_t)(0x1040fa88)));
  /* 103e5e72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5e75 mov dword ptr [0x1040fa88], ecx */
  w32((uint32_t)(0x1040fa88), (ECX));
  /* 103e5e7b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5e7f jne 0x103e5ed7 */
  if (!C.zf) goto L_103e5ed7;
  /* 103e5e81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5e84 mov eax, dword ptr [0x104116c4] */
  EAX = (r32((uint32_t)(0x104116c4)));
  /* 103e5e89 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e5e8c mov dword ptr [0x104116c4], eax */
  w32((uint32_t)(0x104116c4), (EAX));
  /* 103e5e91 mov ecx, dword ptr [0x104116c4] */
  ECX = (r32((uint32_t)(0x104116c4)));
  /* 103e5e97 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5e9a mov dword ptr [0x104116c4], ecx */
  w32((uint32_t)(0x104116c4), (ECX));
  /* 103e5ea0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5ea3 mov eax, dword ptr [0x104116cc] */
  EAX = (r32((uint32_t)(0x104116cc)));
  /* 103e5ea8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e5eab mov dword ptr [0x104116cc], eax */
  w32((uint32_t)(0x104116cc), (EAX));
  /* 103e5eb0 mov ecx, dword ptr [0x104116cc] */
  ECX = (r32((uint32_t)(0x104116cc)));
  /* 103e5eb6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5eb9 mov dword ptr [0x104116cc], ecx */
  w32((uint32_t)(0x104116cc), (ECX));
  /* 103e5ebf mov edx, dword ptr [0x104116cc] */
  EDX = (r32((uint32_t)(0x104116cc)));
  /* 103e5ec5 cmp edx, dword ptr [0x104116d0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104116d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5ecb jbe 0x103e5ed7 */
  if ((C.cf||C.zf)) goto L_103e5ed7;
  /* 103e5ecd mov eax, dword ptr [0x104116cc] */
  EAX = (r32((uint32_t)(0x104116cc)));
  /* 103e5ed2 mov dword ptr [0x104116d0], eax */
  w32((uint32_t)(0x104116d0), (EAX));
L_103e5ed7:;
  /* 103e5ed7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5eda add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5edd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103e5ee0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5ee3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5ee6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5ee9 jbe 0x103e5f0f */
  if ((C.cf||C.zf)) goto L_103e5f0f;
  /* 103e5eeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5eee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5ef1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e5ef4 push edx */
  push32((uint32_t)(EDX));
  /* 103e5ef5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5ef7 mov al, byte ptr [0x1040fa92] */
  AL = (r8((uint32_t)(0x1040fa92)));
  /* 103e5efc push eax */
  push32((uint32_t)(EAX));
  /* 103e5efd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5f00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5f03 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5f06 push edx */
  push32((uint32_t)(EDX));
  /* 103e5f07 call 0x103e9420 */
  push32(0x103e5f0cu); f_103e9420();
  /* 103e5f0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e5f0f:;
  /* 103e5f0f push 4 */
  push32((uint32_t)(0x4u));
  /* 103e5f11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e5f13 mov al, byte ptr [0x1040fa90] */
  AL = (r8((uint32_t)(0x1040fa90)));
  /* 103e5f18 push eax */
  push32((uint32_t)(EAX));
  /* 103e5f19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5f1c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5f1f push ecx */
  push32((uint32_t)(ECX));
  /* 103e5f20 call 0x103e9420 */
  push32(0x103e5f25u); f_103e9420();
  /* 103e5f25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5f28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5f2c jne 0x103e5f49 */
  if (!C.zf) goto L_103e5f49;
  /* 103e5f2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5f31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e5f34 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103e5f37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5f3a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e5f3d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 103e5f40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5f43 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e5f46 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_103e5f49:;
  /* 103e5f49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5f4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e5f4f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_103e5f52:;
  /* 103e5f52 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5f56 jne 0x103e5f87 */
  if (!C.zf) goto L_103e5f87;
  /* 103e5f58 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5f5c jne 0x103e5f66 */
  if (!C.zf) goto L_103e5f66;
  /* 103e5f5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5f61 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5f64 je 0x103e5f87 */
  if (C.zf) goto L_103e5f87;
L_103e5f66:;
  /* 103e5f66 push 0x1040c848 */
  push32((uint32_t)(0x1040c848u));
  /* 103e5f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5f6d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 103e5f72 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e5f77 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5f79 call 0x103e4770 */
  push32(0x103e5f7eu); f_103e4770();
  /* 103e5f7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5f81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5f84 jne 0x103e5f87 */
  if (!C.zf) goto L_103e5f87;
  /* 103e5f86 int3  */
  x86_unimpl("int3 @ 0x103e5f86");
L_103e5f87:;
  /* 103e5f87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e5f89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e5f8b jne 0x103e5f52 */
  if (!C.zf) goto L_103e5f52;
  /* 103e5f8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5f90 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5f93 je 0x103e5f9b */
  if (C.zf) goto L_103e5f9b;
  /* 103e5f95 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5f99 je 0x103e5fa3 */
  if (C.zf) goto L_103e5fa3;
L_103e5f9b:;
  /* 103e5f9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e5f9e jmp 0x103e608a */
  goto L_103e608a;
L_103e5fa3:;
  /* 103e5fa3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5fa6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5fa9 je 0x103e5fbb */
  if (C.zf) goto L_103e5fbb;
  /* 103e5fab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5fae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e5fb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5fb3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103e5fb6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103e5fb9 jmp 0x103e5ff7 */
  goto L_103e5ff7;
L_103e5fbb:;
  /* 103e5fbb mov eax, dword ptr [0x104116c0] */
  EAX = (r32((uint32_t)(0x104116c0)));
  /* 103e5fc0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5fc3 je 0x103e5fe6 */
  if (C.zf) goto L_103e5fe6;
  /* 103e5fc5 push 0x1040c82c */
  push32((uint32_t)(0x1040c82cu));
  /* 103e5fca push 0 */
  push32((uint32_t)(0x0u));
  /* 103e5fcc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 103e5fd1 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e5fd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e5fd8 call 0x103e4770 */
  push32(0x103e5fddu); f_103e4770();
  /* 103e5fdd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e5fe0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5fe3 jne 0x103e5fe6 */
  if (!C.zf) goto L_103e5fe6;
  /* 103e5fe5 int3  */
  x86_unimpl("int3 @ 0x103e5fe5");
L_103e5fe6:;
  /* 103e5fe6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e5fe8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e5fea jne 0x103e5fbb */
  if (!C.zf) goto L_103e5fbb;
  /* 103e5fec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5fef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103e5ff2 mov dword ptr [0x104116c0], eax */
  w32((uint32_t)(0x104116c0), (EAX));
L_103e5ff7:;
  /* 103e5ff7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e5ffa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e5ffe je 0x103e600f */
  if (C.zf) goto L_103e600f;
  /* 103e6000 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e6003 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103e6006 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e6009 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e600b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103e600d jmp 0x103e604a */
  goto L_103e604a;
L_103e600f:;
  /* 103e600f mov eax, dword ptr [0x104116c8] */
  EAX = (r32((uint32_t)(0x104116c8)));
  /* 103e6014 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6017 je 0x103e603a */
  if (C.zf) goto L_103e603a;
  /* 103e6019 push 0x1040c810 */
  push32((uint32_t)(0x1040c810u));
  /* 103e601e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6020 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 103e6025 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e602a push 2 */
  push32((uint32_t)(0x2u));
  /* 103e602c call 0x103e4770 */
  push32(0x103e6031u); f_103e4770();
  /* 103e6031 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6034 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6037 jne 0x103e603a */
  if (!C.zf) goto L_103e603a;
  /* 103e6039 int3  */
  x86_unimpl("int3 @ 0x103e6039");
L_103e603a:;
  /* 103e603a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e603c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e603e jne 0x103e600f */
  if (!C.zf) goto L_103e600f;
  /* 103e6040 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e6043 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e6045 mov dword ptr [0x104116c8], eax */
  w32((uint32_t)(0x104116c8), (EAX));
L_103e604a:;
  /* 103e604a cmp dword ptr [0x104116c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104116c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6051 je 0x103e6061 */
  if (C.zf) goto L_103e6061;
  /* 103e6053 mov ecx, dword ptr [0x104116c8] */
  ECX = (r32((uint32_t)(0x104116c8)));
  /* 103e6059 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e605c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 103e605f jmp 0x103e6069 */
  goto L_103e6069;
L_103e6061:;
  /* 103e6061 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e6064 mov dword ptr [0x104116c0], eax */
  w32((uint32_t)(0x104116c0), (EAX));
L_103e6069:;
  /* 103e6069 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e606c mov edx, dword ptr [0x104116c8] */
  EDX = (r32((uint32_t)(0x104116c8)));
  /* 103e6072 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103e6074 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e6077 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 103e607e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e6081 mov dword ptr [0x104116c8], ecx */
  w32((uint32_t)(0x104116c8), (ECX));
  /* 103e6087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103e608a:;
  /* 103e608a pop edi */
  EDI = (pop32());
  /* 103e608b pop esi */
  ESI = (pop32());
  /* 103e608c pop ebx */
  EBX = (pop32());
  /* 103e608d mov esp, ebp */
  ESP = (EBP);
  /* 103e608f pop ebp */
  EBP = (pop32());
  /* 103e6090 ret  */
  ESPCHK(0x103e5b80u, _esp0);
  ESP += 4; return;
}

/* FUN_100060a0 @ 0x103e60a0 (27 bytes, 13 insns) */
void f_103e60a0(void) {
  FTRACE(0x103e60a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e60a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e60a1 mov ebp, esp */
  EBP = (ESP);
  /* 103e60a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e60a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e60a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e60a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e60ac push eax */
  push32((uint32_t)(EAX));
  /* 103e60ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e60b0 push ecx */
  push32((uint32_t)(ECX));
  /* 103e60b1 call 0x103e60c0 */
  push32(0x103e60b6u); f_103e60c0();
  /* 103e60b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e60b9 pop ebp */
  EBP = (pop32());
  /* 103e60ba ret  */
  ESPCHK(0x103e60a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060c0 @ 0x103e60c0 (64 bytes, 27 insns) */
void f_103e60c0(void) {
  FTRACE(0x103e60c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e60c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e60c1 mov ebp, esp */
  EBP = (ESP);
  /* 103e60c3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e60c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e60c6 call 0x103e90b0 */
  push32(0x103e60cbu); f_103e90b0();
  /* 103e60cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e60ce push 0 */
  push32((uint32_t)(0x0u));
  /* 103e60d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e60d3 push eax */
  push32((uint32_t)(EAX));
  /* 103e60d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e60d7 push ecx */
  push32((uint32_t)(ECX));
  /* 103e60d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e60db push edx */
  push32((uint32_t)(EDX));
  /* 103e60dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e60df push eax */
  push32((uint32_t)(EAX));
  /* 103e60e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e60e3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e60e4 call 0x103e5b80 */
  push32(0x103e60e9u); f_103e5b80();
  /* 103e60e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e60ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e60ef push 9 */
  push32((uint32_t)(0x9u));
  /* 103e60f1 call 0x103e9150 */
  push32(0x103e60f6u); f_103e9150();
  /* 103e60f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e60f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e60fc mov esp, ebp */
  ESP = (EBP);
  /* 103e60fe pop ebp */
  EBP = (pop32());
  /* 103e60ff ret  */
  ESPCHK(0x103e60c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006100 @ 0x103e6100 (19 bytes, 9 insns) */
void f_103e6100(void) {
  FTRACE(0x103e6100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6100 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6101 mov ebp, esp */
  EBP = (ESP);
  /* 103e6103 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e6105 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6108 push eax */
  push32((uint32_t)(EAX));
  /* 103e6109 call 0x103e6140 */
  push32(0x103e610eu); f_103e6140();
  /* 103e610e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6111 pop ebp */
  EBP = (pop32());
  /* 103e6112 ret  */
  ESPCHK(0x103e6100u, _esp0);
  ESP += 4; return;
}

/* FUN_10006120 @ 0x103e6120 (19 bytes, 9 insns) */
void f_103e6120(void) {
  FTRACE(0x103e6120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6120 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6121 mov ebp, esp */
  EBP = (ESP);
  /* 103e6123 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e6125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6128 push eax */
  push32((uint32_t)(EAX));
  /* 103e6129 call 0x103e6170 */
  push32(0x103e612eu); f_103e6170();
  /* 103e612e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6131 pop ebp */
  EBP = (pop32());
  /* 103e6132 ret  */
  ESPCHK(0x103e6120u, _esp0);
  ESP += 4; return;
}

/* FUN_10006140 @ 0x103e6140 (41 bytes, 16 insns) */
void f_103e6140(void) {
  FTRACE(0x103e6140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6140 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6141 mov ebp, esp */
  EBP = (ESP);
  /* 103e6143 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e6145 call 0x103e90b0 */
  push32(0x103e614au); f_103e90b0();
  /* 103e614a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e614d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e6150 push eax */
  push32((uint32_t)(EAX));
  /* 103e6151 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6154 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6155 call 0x103e6170 */
  push32(0x103e615au); f_103e6170();
  /* 103e615a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e615d push 9 */
  push32((uint32_t)(0x9u));
  /* 103e615f call 0x103e9150 */
  push32(0x103e6164u); f_103e9150();
  /* 103e6164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6167 pop ebp */
  EBP = (pop32());
  /* 103e6168 ret  */
  ESPCHK(0x103e6140u, _esp0);
  ESP += 4; return;
}

/* FUN_10006170 @ 0x103e6170 (1004 bytes, 342 insns) */
void f_103e6170(void) {
  FTRACE(0x103e6170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6170 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6171 mov ebp, esp */
  EBP = (ESP);
  /* 103e6173 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6174 push ebx */
  push32((uint32_t)(EBX));
  /* 103e6175 push esi */
  push32((uint32_t)(ESI));
  /* 103e6176 push edi */
  push32((uint32_t)(EDI));
  /* 103e6177 mov eax, dword ptr [0x1040fa84] */
  EAX = (r32((uint32_t)(0x1040fa84)));
  /* 103e617c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103e617f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6181 je 0x103e61b3 */
  if (C.zf) goto L_103e61b3;
L_103e6183:;
  /* 103e6183 call 0x103e6850 */
  push32(0x103e6188u); f_103e6850();
  /* 103e6188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e618a jne 0x103e61ad */
  if (!C.zf) goto L_103e61ad;
  /* 103e618c push 0x1040c7fc */
  push32((uint32_t)(0x1040c7fcu));
  /* 103e6191 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6193 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 103e6198 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e619d push 2 */
  push32((uint32_t)(0x2u));
  /* 103e619f call 0x103e4770 */
  push32(0x103e61a4u); f_103e4770();
  /* 103e61a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e61a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e61aa jne 0x103e61ad */
  if (!C.zf) goto L_103e61ad;
  /* 103e61ac int3  */
  x86_unimpl("int3 @ 0x103e61ac");
L_103e61ad:;
  /* 103e61ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e61af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e61b1 jne 0x103e6183 */
  if (!C.zf) goto L_103e6183;
L_103e61b3:;
  /* 103e61b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e61b7 jne 0x103e61be */
  if (!C.zf) goto L_103e61be;
  /* 103e61b9 jmp 0x103e6555 */
  goto L_103e6555;
L_103e61be:;
  /* 103e61be push 0 */
  push32((uint32_t)(0x0u));
  /* 103e61c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e61c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e61c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e61c7 push edx */
  push32((uint32_t)(EDX));
  /* 103e61c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e61ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e61cd push eax */
  push32((uint32_t)(EAX));
  /* 103e61ce push 3 */
  push32((uint32_t)(0x3u));
  /* 103e61d0 call dword ptr [0x1040fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1040fc90))), 0x103e61d6u);
  /* 103e61d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e61d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e61db jne 0x103e6208 */
  if (!C.zf) goto L_103e6208;
L_103e61dd:;
  /* 103e61dd push 0x1040cac0 */
  push32((uint32_t)(0x1040cac0u));
  /* 103e61e2 push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e61e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e61e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e61eb push 0 */
  push32((uint32_t)(0x0u));
  /* 103e61ed push 0 */
  push32((uint32_t)(0x0u));
  /* 103e61ef call 0x103e4770 */
  push32(0x103e61f4u); f_103e4770();
  /* 103e61f4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e61f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e61fa jne 0x103e61fd */
  if (!C.zf) goto L_103e61fd;
  /* 103e61fc int3  */
  x86_unimpl("int3 @ 0x103e61fc");
L_103e61fd:;
  /* 103e61fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e61ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e6201 jne 0x103e61dd */
  if (!C.zf) goto L_103e61dd;
  /* 103e6203 jmp 0x103e6555 */
  goto L_103e6555;
L_103e6208:;
  /* 103e6208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e620b push edx */
  push32((uint32_t)(EDX));
  /* 103e620c call 0x103e6cb0 */
  push32(0x103e6211u); f_103e6cb0();
  /* 103e6211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6216 jne 0x103e6239 */
  if (!C.zf) goto L_103e6239;
  /* 103e6218 push 0x1040c900 */
  push32((uint32_t)(0x1040c900u));
  /* 103e621d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e621f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 103e6224 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e6229 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e622b call 0x103e4770 */
  push32(0x103e6230u); f_103e4770();
  /* 103e6230 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6233 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6236 jne 0x103e6239 */
  if (!C.zf) goto L_103e6239;
  /* 103e6238 int3  */
  x86_unimpl("int3 @ 0x103e6238");
L_103e6239:;
  /* 103e6239 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e623b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e623d jne 0x103e6208 */
  if (!C.zf) goto L_103e6208;
  /* 103e623f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6242 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6245 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103e6248:;
  /* 103e6248 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e624b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e624e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e6253 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6256 je 0x103e629b */
  if (C.zf) goto L_103e629b;
  /* 103e6258 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e625b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e625f je 0x103e629b */
  if (C.zf) goto L_103e629b;
  /* 103e6261 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6264 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e6267 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e626c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e626f je 0x103e629b */
  if (C.zf) goto L_103e629b;
  /* 103e6271 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6274 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6278 je 0x103e629b */
  if (C.zf) goto L_103e629b;
  /* 103e627a push 0x1040ca98 */
  push32((uint32_t)(0x1040ca98u));
  /* 103e627f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6281 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 103e6286 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e628b push 2 */
  push32((uint32_t)(0x2u));
  /* 103e628d call 0x103e4770 */
  push32(0x103e6292u); f_103e4770();
  /* 103e6292 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6295 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6298 jne 0x103e629b */
  if (!C.zf) goto L_103e629b;
  /* 103e629a int3  */
  x86_unimpl("int3 @ 0x103e629a");
L_103e629b:;
  /* 103e629b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e629d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e629f jne 0x103e6248 */
  if (!C.zf) goto L_103e6248;
  /* 103e62a1 mov eax, dword ptr [0x1040fa84] */
  EAX = (r32((uint32_t)(0x1040fa84)));
  /* 103e62a6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103e62a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e62ab jne 0x103e6376 */
  if (!C.zf) goto L_103e6376;
  /* 103e62b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 103e62b3 mov cl, byte ptr [0x1040fa90] */
  CL = (r8((uint32_t)(0x1040fa90)));
  /* 103e62b9 push ecx */
  push32((uint32_t)(ECX));
  /* 103e62ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e62bd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e62c0 push edx */
  push32((uint32_t)(EDX));
  /* 103e62c1 call 0x103e67c0 */
  push32(0x103e62c6u); f_103e67c0();
  /* 103e62c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e62c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e62cb jne 0x103e6310 */
  if (!C.zf) goto L_103e6310;
L_103e62cd:;
  /* 103e62cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e62d0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e62d3 push eax */
  push32((uint32_t)(EAX));
  /* 103e62d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e62d7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103e62da push edx */
  push32((uint32_t)(EDX));
  /* 103e62db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e62de mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103e62e1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e62e7 mov edx, dword ptr [ecx*4 + 0x1040fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1040fa94)));
  /* 103e62ee push edx */
  push32((uint32_t)(EDX));
  /* 103e62ef push 0x1040ca6c */
  push32((uint32_t)(0x1040ca6cu));
  /* 103e62f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e62f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e62f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e62fa push 1 */
  push32((uint32_t)(0x1u));
  /* 103e62fc call 0x103e4770 */
  push32(0x103e6301u); f_103e4770();
  /* 103e6301 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6304 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6307 jne 0x103e630a */
  if (!C.zf) goto L_103e630a;
  /* 103e6309 int3  */
  x86_unimpl("int3 @ 0x103e6309");
L_103e630a:;
  /* 103e630a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e630c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e630e jne 0x103e62cd */
  if (!C.zf) goto L_103e62cd;
L_103e6310:;
  /* 103e6310 push 4 */
  push32((uint32_t)(0x4u));
  /* 103e6312 mov cl, byte ptr [0x1040fa90] */
  CL = (r8((uint32_t)(0x1040fa90)));
  /* 103e6318 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6319 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e631c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103e631f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6322 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 103e6326 push edx */
  push32((uint32_t)(EDX));
  /* 103e6327 call 0x103e67c0 */
  push32(0x103e632cu); f_103e67c0();
  /* 103e632c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e632f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6331 jne 0x103e6376 */
  if (!C.zf) goto L_103e6376;
L_103e6333:;
  /* 103e6333 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6336 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6339 push eax */
  push32((uint32_t)(EAX));
  /* 103e633a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e633d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103e6340 push edx */
  push32((uint32_t)(EDX));
  /* 103e6341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6344 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103e6347 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e634d mov edx, dword ptr [ecx*4 + 0x1040fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1040fa94)));
  /* 103e6354 push edx */
  push32((uint32_t)(EDX));
  /* 103e6355 push 0x1040ca40 */
  push32((uint32_t)(0x1040ca40u));
  /* 103e635a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e635c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e635e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6360 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e6362 call 0x103e4770 */
  push32(0x103e6367u); f_103e4770();
  /* 103e6367 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e636a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e636d jne 0x103e6370 */
  if (!C.zf) goto L_103e6370;
  /* 103e636f int3  */
  x86_unimpl("int3 @ 0x103e636f");
L_103e6370:;
  /* 103e6370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e6372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6374 jne 0x103e6333 */
  if (!C.zf) goto L_103e6333;
L_103e6376:;
  /* 103e6376 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6379 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e637d jne 0x103e63eb */
  if (!C.zf) goto L_103e63eb;
L_103e637f:;
  /* 103e637f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6382 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6389 jne 0x103e6394 */
  if (!C.zf) goto L_103e6394;
  /* 103e638b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e638e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6392 je 0x103e63b5 */
  if (C.zf) goto L_103e63b5;
L_103e6394:;
  /* 103e6394 push 0x1040ca00 */
  push32((uint32_t)(0x1040ca00u));
  /* 103e6399 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e639b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 103e63a0 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e63a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e63a7 call 0x103e4770 */
  push32(0x103e63acu); f_103e4770();
  /* 103e63ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e63af cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e63b2 jne 0x103e63b5 */
  if (!C.zf) goto L_103e63b5;
  /* 103e63b4 int3  */
  x86_unimpl("int3 @ 0x103e63b4");
L_103e63b5:;
  /* 103e63b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e63b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e63b9 jne 0x103e637f */
  if (!C.zf) goto L_103e637f;
  /* 103e63bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e63be mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103e63c1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e63c4 push eax */
  push32((uint32_t)(EAX));
  /* 103e63c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e63c7 mov cl, byte ptr [0x1040fa91] */
  CL = (r8((uint32_t)(0x1040fa91)));
  /* 103e63cd push ecx */
  push32((uint32_t)(ECX));
  /* 103e63ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e63d1 push edx */
  push32((uint32_t)(EDX));
  /* 103e63d2 call 0x103e9420 */
  push32(0x103e63d7u); f_103e9420();
  /* 103e63d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e63da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e63dd push eax */
  push32((uint32_t)(EAX));
  /* 103e63de call 0x103e9820 */
  push32(0x103e63e3u); f_103e9820();
  /* 103e63e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e63e6 jmp 0x103e6555 */
  goto L_103e6555;
L_103e63eb:;
  /* 103e63eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e63ee cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e63f2 jne 0x103e6401 */
  if (!C.zf) goto L_103e6401;
  /* 103e63f4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e63f8 jne 0x103e6401 */
  if (!C.zf) goto L_103e6401;
  /* 103e63fa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_103e6401:;
  /* 103e6401 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6404 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e6407 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e640a je 0x103e642d */
  if (C.zf) goto L_103e642d;
  /* 103e640c push 0x1040c9e0 */
  push32((uint32_t)(0x1040c9e0u));
  /* 103e6411 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6413 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 103e6418 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e641d push 2 */
  push32((uint32_t)(0x2u));
  /* 103e641f call 0x103e4770 */
  push32(0x103e6424u); f_103e4770();
  /* 103e6424 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6427 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e642a jne 0x103e642d */
  if (!C.zf) goto L_103e642d;
  /* 103e642c int3  */
  x86_unimpl("int3 @ 0x103e642c");
L_103e642d:;
  /* 103e642d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e642f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e6431 jne 0x103e6401 */
  if (!C.zf) goto L_103e6401;
  /* 103e6433 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6436 mov eax, dword ptr [0x104116cc] */
  EAX = (r32((uint32_t)(0x104116cc)));
  /* 103e643b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e643e mov dword ptr [0x104116cc], eax */
  w32((uint32_t)(0x104116cc), (EAX));
  /* 103e6443 mov ecx, dword ptr [0x1040fa84] */
  ECX = (r32((uint32_t)(0x1040fa84)));
  /* 103e6449 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 103e644c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e644e jne 0x103e652c */
  if (!C.zf) goto L_103e652c;
  /* 103e6454 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6457 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e645a je 0x103e646c */
  if (C.zf) goto L_103e646c;
  /* 103e645c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e645f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e6461 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6464 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103e6467 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103e646a jmp 0x103e64aa */
  goto L_103e64aa;
L_103e646c:;
  /* 103e646c mov ecx, dword ptr [0x104116c0] */
  ECX = (r32((uint32_t)(0x104116c0)));
  /* 103e6472 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6475 je 0x103e6498 */
  if (C.zf) goto L_103e6498;
  /* 103e6477 push 0x1040c9c8 */
  push32((uint32_t)(0x1040c9c8u));
  /* 103e647c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e647e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 103e6483 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e6488 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e648a call 0x103e4770 */
  push32(0x103e648fu); f_103e4770();
  /* 103e648f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6492 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6495 jne 0x103e6498 */
  if (!C.zf) goto L_103e6498;
  /* 103e6497 int3  */
  x86_unimpl("int3 @ 0x103e6497");
L_103e6498:;
  /* 103e6498 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e649a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e649c jne 0x103e646c */
  if (!C.zf) goto L_103e646c;
  /* 103e649e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e64a1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103e64a4 mov dword ptr [0x104116c0], ecx */
  w32((uint32_t)(0x104116c0), (ECX));
L_103e64aa:;
  /* 103e64aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e64ad cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e64b1 je 0x103e64c2 */
  if (C.zf) goto L_103e64c2;
  /* 103e64b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e64b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103e64b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e64bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e64be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103e64c0 jmp 0x103e64ff */
  goto L_103e64ff;
L_103e64c2:;
  /* 103e64c2 mov ecx, dword ptr [0x104116c8] */
  ECX = (r32((uint32_t)(0x104116c8)));
  /* 103e64c8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e64cb je 0x103e64ee */
  if (C.zf) goto L_103e64ee;
  /* 103e64cd push 0x1040c9b0 */
  push32((uint32_t)(0x1040c9b0u));
  /* 103e64d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e64d4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 103e64d9 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e64de push 2 */
  push32((uint32_t)(0x2u));
  /* 103e64e0 call 0x103e4770 */
  push32(0x103e64e5u); f_103e4770();
  /* 103e64e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e64e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e64eb jne 0x103e64ee */
  if (!C.zf) goto L_103e64ee;
  /* 103e64ed int3  */
  x86_unimpl("int3 @ 0x103e64ed");
L_103e64ee:;
  /* 103e64ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e64f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e64f2 jne 0x103e64c2 */
  if (!C.zf) goto L_103e64c2;
  /* 103e64f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e64f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e64f9 mov dword ptr [0x104116c8], ecx */
  w32((uint32_t)(0x104116c8), (ECX));
L_103e64ff:;
  /* 103e64ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6502 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103e6505 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6508 push eax */
  push32((uint32_t)(EAX));
  /* 103e6509 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e650b mov cl, byte ptr [0x1040fa91] */
  CL = (r8((uint32_t)(0x1040fa91)));
  /* 103e6511 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6512 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6515 push edx */
  push32((uint32_t)(EDX));
  /* 103e6516 call 0x103e9420 */
  push32(0x103e651bu); f_103e9420();
  /* 103e651b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e651e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6521 push eax */
  push32((uint32_t)(EAX));
  /* 103e6522 call 0x103e9820 */
  push32(0x103e6527u); f_103e9820();
  /* 103e6527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e652a jmp 0x103e6555 */
  goto L_103e6555;
L_103e652c:;
  /* 103e652c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e652f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 103e6536 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6539 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103e653c push eax */
  push32((uint32_t)(EAX));
  /* 103e653d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e653f mov cl, byte ptr [0x1040fa91] */
  CL = (r8((uint32_t)(0x1040fa91)));
  /* 103e6545 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6546 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6549 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e654c push edx */
  push32((uint32_t)(EDX));
  /* 103e654d call 0x103e9420 */
  push32(0x103e6552u); f_103e9420();
  /* 103e6552 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e6555:;
  /* 103e6555 pop edi */
  EDI = (pop32());
  /* 103e6556 pop esi */
  ESI = (pop32());
  /* 103e6557 pop ebx */
  EBX = (pop32());
  /* 103e6558 mov esp, ebp */
  ESP = (EBP);
  /* 103e655a pop ebp */
  EBP = (pop32());
  /* 103e655b ret  */
  ESPCHK(0x103e6170u, _esp0);
  ESP += 4; return;
}

/* FUN_10006560 @ 0x103e6560 (19 bytes, 9 insns) */
void f_103e6560(void) {
  FTRACE(0x103e6560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6560 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6561 mov ebp, esp */
  EBP = (ESP);
  /* 103e6563 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e6565 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6568 push eax */
  push32((uint32_t)(EAX));
  /* 103e6569 call 0x103e6580 */
  push32(0x103e656eu); f_103e6580();
  /* 103e656e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6571 pop ebp */
  EBP = (pop32());
  /* 103e6572 ret  */
  ESPCHK(0x103e6560u, _esp0);
  ESP += 4; return;
}

/* FUN_10006580 @ 0x103e6580 (342 bytes, 119 insns) */
void f_103e6580(void) {
  FTRACE(0x103e6580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6580 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6581 mov ebp, esp */
  EBP = (ESP);
  /* 103e6583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6586 push ebx */
  push32((uint32_t)(EBX));
  /* 103e6587 push esi */
  push32((uint32_t)(ESI));
  /* 103e6588 push edi */
  push32((uint32_t)(EDI));
  /* 103e6589 mov eax, dword ptr [0x1040fa84] */
  EAX = (r32((uint32_t)(0x1040fa84)));
  /* 103e658e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103e6591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6593 je 0x103e65c5 */
  if (C.zf) goto L_103e65c5;
L_103e6595:;
  /* 103e6595 call 0x103e6850 */
  push32(0x103e659au); f_103e6850();
  /* 103e659a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e659c jne 0x103e65bf */
  if (!C.zf) goto L_103e65bf;
  /* 103e659e push 0x1040c7fc */
  push32((uint32_t)(0x1040c7fcu));
  /* 103e65a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e65a5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 103e65aa push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e65af push 2 */
  push32((uint32_t)(0x2u));
  /* 103e65b1 call 0x103e4770 */
  push32(0x103e65b6u); f_103e4770();
  /* 103e65b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e65b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e65bc jne 0x103e65bf */
  if (!C.zf) goto L_103e65bf;
  /* 103e65be int3  */
  x86_unimpl("int3 @ 0x103e65be");
L_103e65bf:;
  /* 103e65bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e65c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e65c3 jne 0x103e6595 */
  if (!C.zf) goto L_103e6595;
L_103e65c5:;
  /* 103e65c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e65c7 call 0x103e90b0 */
  push32(0x103e65ccu); f_103e90b0();
  /* 103e65cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e65cf:;
  /* 103e65cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e65d2 push edx */
  push32((uint32_t)(EDX));
  /* 103e65d3 call 0x103e6cb0 */
  push32(0x103e65d8u); f_103e6cb0();
  /* 103e65d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e65db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e65dd jne 0x103e6600 */
  if (!C.zf) goto L_103e6600;
  /* 103e65df push 0x1040c900 */
  push32((uint32_t)(0x1040c900u));
  /* 103e65e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e65e6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 103e65eb push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e65f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e65f2 call 0x103e4770 */
  push32(0x103e65f7u); f_103e4770();
  /* 103e65f7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e65fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e65fd jne 0x103e6600 */
  if (!C.zf) goto L_103e6600;
  /* 103e65ff int3  */
  x86_unimpl("int3 @ 0x103e65ff");
L_103e6600:;
  /* 103e6600 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e6602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6604 jne 0x103e65cf */
  if (!C.zf) goto L_103e65cf;
  /* 103e6606 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6609 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e660c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103e660f:;
  /* 103e660f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6612 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e6615 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e661a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e661d je 0x103e6662 */
  if (C.zf) goto L_103e6662;
  /* 103e661f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6622 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6626 je 0x103e6662 */
  if (C.zf) goto L_103e6662;
  /* 103e6628 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e662b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e662e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e6633 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6636 je 0x103e6662 */
  if (C.zf) goto L_103e6662;
  /* 103e6638 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e663b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e663f je 0x103e6662 */
  if (C.zf) goto L_103e6662;
  /* 103e6641 push 0x1040ca98 */
  push32((uint32_t)(0x1040ca98u));
  /* 103e6646 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6648 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 103e664d push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e6652 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e6654 call 0x103e4770 */
  push32(0x103e6659u); f_103e4770();
  /* 103e6659 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e665c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e665f jne 0x103e6662 */
  if (!C.zf) goto L_103e6662;
  /* 103e6661 int3  */
  x86_unimpl("int3 @ 0x103e6661");
L_103e6662:;
  /* 103e6662 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e6664 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e6666 jne 0x103e660f */
  if (!C.zf) goto L_103e660f;
  /* 103e6668 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e666b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e666f jne 0x103e667e */
  if (!C.zf) goto L_103e667e;
  /* 103e6671 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6675 jne 0x103e667e */
  if (!C.zf) goto L_103e667e;
  /* 103e6677 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_103e667e:;
  /* 103e667e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6681 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6685 je 0x103e66b9 */
  if (C.zf) goto L_103e66b9;
L_103e6687:;
  /* 103e6687 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e668a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e668d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6690 je 0x103e66b3 */
  if (C.zf) goto L_103e66b3;
  /* 103e6692 push 0x1040c9e0 */
  push32((uint32_t)(0x1040c9e0u));
  /* 103e6697 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6699 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 103e669e push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e66a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e66a5 call 0x103e4770 */
  push32(0x103e66aau); f_103e4770();
  /* 103e66aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e66ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e66b0 jne 0x103e66b3 */
  if (!C.zf) goto L_103e66b3;
  /* 103e66b2 int3  */
  x86_unimpl("int3 @ 0x103e66b2");
L_103e66b3:;
  /* 103e66b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e66b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e66b7 jne 0x103e6687 */
  if (!C.zf) goto L_103e6687;
L_103e66b9:;
  /* 103e66b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e66bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103e66bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e66c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e66c4 call 0x103e9150 */
  push32(0x103e66c9u); f_103e9150();
  /* 103e66c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e66cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e66cf pop edi */
  EDI = (pop32());
  /* 103e66d0 pop esi */
  ESI = (pop32());
  /* 103e66d1 pop ebx */
  EBX = (pop32());
  /* 103e66d2 mov esp, ebp */
  ESP = (EBP);
  /* 103e66d4 pop ebp */
  EBP = (pop32());
  /* 103e66d5 ret  */
  ESPCHK(0x103e6580u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x103e66e0 (28 bytes, 11 insns) */
void f_103e66e0(void) {
  FTRACE(0x103e66e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e66e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e66e1 mov ebp, esp */
  EBP = (ESP);
  /* 103e66e3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e66e4 mov eax, dword ptr [0x1040fa8c] */
  EAX = (r32((uint32_t)(0x1040fa8c)));
  /* 103e66e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e66ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e66ef mov dword ptr [0x1040fa8c], ecx */
  w32((uint32_t)(0x1040fa8c), (ECX));
  /* 103e66f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e66f8 mov esp, ebp */
  ESP = (EBP);
  /* 103e66fa pop ebp */
  EBP = (pop32());
  /* 103e66fb ret  */
  ESPCHK(0x103e66e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006700 @ 0x103e6700 (157 bytes, 59 insns) */
void f_103e6700(void) {
  FTRACE(0x103e6700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6700 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6701 mov ebp, esp */
  EBP = (ESP);
  /* 103e6703 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6704 push ebx */
  push32((uint32_t)(EBX));
  /* 103e6705 push esi */
  push32((uint32_t)(ESI));
  /* 103e6706 push edi */
  push32((uint32_t)(EDI));
  /* 103e6707 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e6709 call 0x103e90b0 */
  push32(0x103e670eu); f_103e90b0();
  /* 103e670e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6714 push eax */
  push32((uint32_t)(EAX));
  /* 103e6715 call 0x103e6cb0 */
  push32(0x103e671au); f_103e6cb0();
  /* 103e671a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e671d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e671f je 0x103e678c */
  if (C.zf) goto L_103e678c;
  /* 103e6721 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6724 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6727 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103e672a:;
  /* 103e672a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e672d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e6730 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e6735 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6738 je 0x103e677d */
  if (C.zf) goto L_103e677d;
  /* 103e673a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e673d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6741 je 0x103e677d */
  if (C.zf) goto L_103e677d;
  /* 103e6743 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6746 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e6749 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e674e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6751 je 0x103e677d */
  if (C.zf) goto L_103e677d;
  /* 103e6753 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6756 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e675a je 0x103e677d */
  if (C.zf) goto L_103e677d;
  /* 103e675c push 0x1040ca98 */
  push32((uint32_t)(0x1040ca98u));
  /* 103e6761 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6763 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 103e6768 push 0x1040c7f0 */
  push32((uint32_t)(0x1040c7f0u));
  /* 103e676d push 2 */
  push32((uint32_t)(0x2u));
  /* 103e676f call 0x103e4770 */
  push32(0x103e6774u); f_103e4770();
  /* 103e6774 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6777 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e677a jne 0x103e677d */
  if (!C.zf) goto L_103e677d;
  /* 103e677c int3  */
  x86_unimpl("int3 @ 0x103e677c");
L_103e677d:;
  /* 103e677d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e677f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e6781 jne 0x103e672a */
  if (!C.zf) goto L_103e672a;
  /* 103e6783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6786 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e6789 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_103e678c:;
  /* 103e678c push 9 */
  push32((uint32_t)(0x9u));
  /* 103e678e call 0x103e9150 */
  push32(0x103e6793u); f_103e9150();
  /* 103e6793 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6796 pop edi */
  EDI = (pop32());
  /* 103e6797 pop esi */
  ESI = (pop32());
  /* 103e6798 pop ebx */
  EBX = (pop32());
  /* 103e6799 mov esp, ebp */
  ESP = (EBP);
  /* 103e679b pop ebp */
  EBP = (pop32());
  /* 103e679c ret  */
  ESPCHK(0x103e6700u, _esp0);
  ESP += 4; return;
}

/* FUN_100067a0 @ 0x103e67a0 (28 bytes, 11 insns) */
void f_103e67a0(void) {
  FTRACE(0x103e67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e67a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e67a1 mov ebp, esp */
  EBP = (ESP);
  /* 103e67a3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e67a4 mov eax, dword ptr [0x1040fc90] */
  EAX = (r32((uint32_t)(0x1040fc90)));
  /* 103e67a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e67ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e67af mov dword ptr [0x1040fc90], ecx */
  w32((uint32_t)(0x1040fc90), (ECX));
  /* 103e67b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e67b8 mov esp, ebp */
  ESP = (EBP);
  /* 103e67ba pop ebp */
  EBP = (pop32());
  /* 103e67bb ret  */
  ESPCHK(0x103e67a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067c0 @ 0x103e67c0 (136 bytes, 55 insns) */
void f_103e67c0(void) {
  FTRACE(0x103e67c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e67c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e67c1 mov ebp, esp */
  EBP = (ESP);
  /* 103e67c3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e67c4 push ebx */
  push32((uint32_t)(EBX));
  /* 103e67c5 push esi */
  push32((uint32_t)(ESI));
  /* 103e67c6 push edi */
  push32((uint32_t)(EDI));
  /* 103e67c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_103e67ce:;
  /* 103e67ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e67d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e67d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e67d7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103e67da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e67dc je 0x103e683e */
  if (C.zf) goto L_103e683e;
  /* 103e67de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e67e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e67e3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103e67e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e67e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e67ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e67f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e67f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103e67f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e67f9 je 0x103e683c */
  if (C.zf) goto L_103e683c;
L_103e67fb:;
  /* 103e67fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e67fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e6803 push eax */
  push32((uint32_t)(EAX));
  /* 103e6804 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6807 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e6809 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 103e680c push edx */
  push32((uint32_t)(EDX));
  /* 103e680d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6810 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6813 push eax */
  push32((uint32_t)(EAX));
  /* 103e6814 push 0x1040cadc */
  push32((uint32_t)(0x1040cadcu));
  /* 103e6819 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e681b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e681d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e681f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6821 call 0x103e4770 */
  push32(0x103e6826u); f_103e4770();
  /* 103e6826 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6829 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e682c jne 0x103e682f */
  if (!C.zf) goto L_103e682f;
  /* 103e682e int3  */
  x86_unimpl("int3 @ 0x103e682e");
L_103e682f:;
  /* 103e682f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e6831 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e6833 jne 0x103e67fb */
  if (!C.zf) goto L_103e67fb;
  /* 103e6835 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103e683c:;
  /* 103e683c jmp 0x103e67ce */
  goto L_103e67ce;
L_103e683e:;
  /* 103e683e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6841 pop edi */
  EDI = (pop32());
  /* 103e6842 pop esi */
  ESI = (pop32());
  /* 103e6843 pop ebx */
  EBX = (pop32());
  /* 103e6844 mov esp, ebp */
  ESP = (EBP);
  /* 103e6846 pop ebp */
  EBP = (pop32());
  /* 103e6847 ret  */
  ESPCHK(0x103e67c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006850 @ 0x103e6850 (863 bytes, 299 insns) [1 switch table(s)] */
void f_103e6850(void) {
  FTRACE(0x103e6850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6850 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6851 mov ebp, esp */
  EBP = (ESP);
  /* 103e6853 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6856 push ebx */
  push32((uint32_t)(EBX));
  /* 103e6857 push esi */
  push32((uint32_t)(ESI));
  /* 103e6858 push edi */
  push32((uint32_t)(EDI));
  /* 103e6859 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103e6860 mov eax, dword ptr [0x1040fa84] */
  EAX = (r32((uint32_t)(0x1040fa84)));
  /* 103e6865 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 103e6868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e686a jne 0x103e6876 */
  if (!C.zf) goto L_103e6876;
  /* 103e686c mov eax, 1 */
  EAX = (0x1u);
  /* 103e6871 jmp 0x103e6ba8 */
  goto L_103e6ba8;
L_103e6876:;
  /* 103e6876 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e6878 call 0x103e90b0 */
  push32(0x103e687du); f_103e90b0();
  /* 103e687d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6880 call 0x103e9890 */
  push32(0x103e6885u); f_103e9890();
  /* 103e6885 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e6888 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e688c je 0x103e6999 */
  if (C.zf) goto L_103e6999;
  /* 103e6892 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6896 je 0x103e6999 */
  if (C.zf) goto L_103e6999;
  /* 103e689c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e689f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103e68a2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e68a5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e68a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103e68ab cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e68af ja 0x103e6962 */
  if ((!C.cf&&!C.zf)) goto L_103e6962;
  /* 103e68b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e68b8 jmp dword ptr [eax*4 + 0x103e6baf] */
  switch (EAX) {
    case 0: goto L_103e693a;
    case 1: goto L_103e6912;
    case 2: goto L_103e68ea;
    case 3: goto L_103e68bf;
    default: x86_unimpl("switch@0x103e68b8 out of table"); return;
  }
L_103e68bf:;
  /* 103e68bf push 0x1040cc30 */
  push32((uint32_t)(0x1040cc30u));
  /* 103e68c4 push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e68c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e68cb push 0 */
  push32((uint32_t)(0x0u));
  /* 103e68cd push 0 */
  push32((uint32_t)(0x0u));
  /* 103e68cf push 0 */
  push32((uint32_t)(0x0u));
  /* 103e68d1 call 0x103e4770 */
  push32(0x103e68d6u); f_103e4770();
  /* 103e68d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e68d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e68dc jne 0x103e68df */
  if (!C.zf) goto L_103e68df;
  /* 103e68de int3  */
  x86_unimpl("int3 @ 0x103e68de");
L_103e68df:;
  /* 103e68df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e68e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e68e3 jne 0x103e68bf */
  if (!C.zf) goto L_103e68bf;
  /* 103e68e5 jmp 0x103e6988 */
  goto L_103e6988;
L_103e68ea:;
  /* 103e68ea push 0x1040cc0c */
  push32((uint32_t)(0x1040cc0cu));
  /* 103e68ef push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e68f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e68f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e68f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e68fa push 0 */
  push32((uint32_t)(0x0u));
  /* 103e68fc call 0x103e4770 */
  push32(0x103e6901u); f_103e4770();
  /* 103e6901 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6904 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6907 jne 0x103e690a */
  if (!C.zf) goto L_103e690a;
  /* 103e6909 int3  */
  x86_unimpl("int3 @ 0x103e6909");
L_103e690a:;
  /* 103e690a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e690c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e690e jne 0x103e68ea */
  if (!C.zf) goto L_103e68ea;
  /* 103e6910 jmp 0x103e6988 */
  goto L_103e6988;
L_103e6912:;
  /* 103e6912 push 0x1040cbe8 */
  push32((uint32_t)(0x1040cbe8u));
  /* 103e6917 push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e691c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e691e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6920 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6922 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6924 call 0x103e4770 */
  push32(0x103e6929u); f_103e4770();
  /* 103e6929 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e692c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e692f jne 0x103e6932 */
  if (!C.zf) goto L_103e6932;
  /* 103e6931 int3  */
  x86_unimpl("int3 @ 0x103e6931");
L_103e6932:;
  /* 103e6932 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e6934 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6936 jne 0x103e6912 */
  if (!C.zf) goto L_103e6912;
  /* 103e6938 jmp 0x103e6988 */
  goto L_103e6988;
L_103e693a:;
  /* 103e693a push 0x1040cbc4 */
  push32((uint32_t)(0x1040cbc4u));
  /* 103e693f push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e6944 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6946 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6948 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e694a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e694c call 0x103e4770 */
  push32(0x103e6951u); f_103e4770();
  /* 103e6951 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6954 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6957 jne 0x103e695a */
  if (!C.zf) goto L_103e695a;
  /* 103e6959 int3  */
  x86_unimpl("int3 @ 0x103e6959");
L_103e695a:;
  /* 103e695a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e695c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e695e jne 0x103e693a */
  if (!C.zf) goto L_103e693a;
  /* 103e6960 jmp 0x103e6988 */
  goto L_103e6988;
L_103e6962:;
  /* 103e6962 push 0x1040cb98 */
  push32((uint32_t)(0x1040cb98u));
  /* 103e6967 push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e696c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e696e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6970 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6972 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6974 call 0x103e4770 */
  push32(0x103e6979u); f_103e4770();
  /* 103e6979 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e697c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e697f jne 0x103e6982 */
  if (!C.zf) goto L_103e6982;
  /* 103e6981 int3  */
  x86_unimpl("int3 @ 0x103e6981");
L_103e6982:;
  /* 103e6982 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e6984 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e6986 jne 0x103e6962 */
  if (!C.zf) goto L_103e6962;
L_103e6988:;
  /* 103e6988 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e698a call 0x103e9150 */
  push32(0x103e698fu); f_103e9150();
  /* 103e698f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6992 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e6994 jmp 0x103e6ba8 */
  goto L_103e6ba8;
L_103e6999:;
  /* 103e6999 mov eax, dword ptr [0x104116c8] */
  EAX = (r32((uint32_t)(0x104116c8)));
  /* 103e699e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e69a1 jmp 0x103e69ab */
  goto L_103e69ab;
L_103e69a3:;
  /* 103e69a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e69a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e69a8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103e69ab:;
  /* 103e69ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e69af je 0x103e6b9b */
  if (C.zf) goto L_103e6b9b;
  /* 103e69b5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 103e69bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e69bf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103e69c2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e69c8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e69cb je 0x103e69f0 */
  if (C.zf) goto L_103e69f0;
  /* 103e69cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e69d0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e69d4 je 0x103e69f0 */
  if (C.zf) goto L_103e69f0;
  /* 103e69d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e69d9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103e69dc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e69e2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e69e5 je 0x103e69f0 */
  if (C.zf) goto L_103e69f0;
  /* 103e69e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e69ea cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e69ee jne 0x103e6a08 */
  if (!C.zf) goto L_103e6a08;
L_103e69f0:;
  /* 103e69f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e69f3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103e69f6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e69fc mov edx, dword ptr [ecx*4 + 0x1040fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1040fa94)));
  /* 103e6a03 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103e6a06 jmp 0x103e6a0f */
  goto L_103e6a0f;
L_103e6a08:;
  /* 103e6a08 mov dword ptr [ebp - 0x14], 0x1040cb90 */
  w32((uint32_t)(EBP + -0x14), (0x1040cb90u));
L_103e6a0f:;
  /* 103e6a0f push 4 */
  push32((uint32_t)(0x4u));
  /* 103e6a11 mov al, byte ptr [0x1040fa90] */
  AL = (r8((uint32_t)(0x1040fa90)));
  /* 103e6a16 push eax */
  push32((uint32_t)(EAX));
  /* 103e6a17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6a1a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6a1d push ecx */
  push32((uint32_t)(ECX));
  /* 103e6a1e call 0x103e67c0 */
  push32(0x103e6a23u); f_103e67c0();
  /* 103e6a23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6a26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6a28 jne 0x103e6a64 */
  if (!C.zf) goto L_103e6a64;
L_103e6a2a:;
  /* 103e6a2a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6a2d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6a30 push edx */
  push32((uint32_t)(EDX));
  /* 103e6a31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6a34 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 103e6a37 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6a38 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e6a3b push edx */
  push32((uint32_t)(EDX));
  /* 103e6a3c push 0x1040ca6c */
  push32((uint32_t)(0x1040ca6cu));
  /* 103e6a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6a49 call 0x103e4770 */
  push32(0x103e6a4eu); f_103e4770();
  /* 103e6a4e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6a51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6a54 jne 0x103e6a57 */
  if (!C.zf) goto L_103e6a57;
  /* 103e6a56 int3  */
  x86_unimpl("int3 @ 0x103e6a56");
L_103e6a57:;
  /* 103e6a57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e6a59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6a5b jne 0x103e6a2a */
  if (!C.zf) goto L_103e6a2a;
  /* 103e6a5d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_103e6a64:;
  /* 103e6a64 push 4 */
  push32((uint32_t)(0x4u));
  /* 103e6a66 mov cl, byte ptr [0x1040fa90] */
  CL = (r8((uint32_t)(0x1040fa90)));
  /* 103e6a6c push ecx */
  push32((uint32_t)(ECX));
  /* 103e6a6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6a70 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103e6a73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6a76 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 103e6a7a push edx */
  push32((uint32_t)(EDX));
  /* 103e6a7b call 0x103e67c0 */
  push32(0x103e6a80u); f_103e67c0();
  /* 103e6a80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6a83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6a85 jne 0x103e6ac1 */
  if (!C.zf) goto L_103e6ac1;
L_103e6a87:;
  /* 103e6a87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6a8a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6a8d push eax */
  push32((uint32_t)(EAX));
  /* 103e6a8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6a91 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103e6a94 push edx */
  push32((uint32_t)(EDX));
  /* 103e6a95 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e6a98 push eax */
  push32((uint32_t)(EAX));
  /* 103e6a99 push 0x1040ca40 */
  push32((uint32_t)(0x1040ca40u));
  /* 103e6a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6aa6 call 0x103e4770 */
  push32(0x103e6aabu); f_103e4770();
  /* 103e6aab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6aae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6ab1 jne 0x103e6ab4 */
  if (!C.zf) goto L_103e6ab4;
  /* 103e6ab3 int3  */
  x86_unimpl("int3 @ 0x103e6ab3");
L_103e6ab4:;
  /* 103e6ab4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e6ab6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e6ab8 jne 0x103e6a87 */
  if (!C.zf) goto L_103e6a87;
  /* 103e6aba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_103e6ac1:;
  /* 103e6ac1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6ac4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6ac8 jne 0x103e6b1a */
  if (!C.zf) goto L_103e6b1a;
  /* 103e6aca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6acd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103e6ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6ad1 mov dl, byte ptr [0x1040fa91] */
  DL = (r8((uint32_t)(0x1040fa91)));
  /* 103e6ad7 push edx */
  push32((uint32_t)(EDX));
  /* 103e6ad8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6adb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6ade push eax */
  push32((uint32_t)(EAX));
  /* 103e6adf call 0x103e67c0 */
  push32(0x103e6ae4u); f_103e67c0();
  /* 103e6ae4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6ae9 jne 0x103e6b1a */
  if (!C.zf) goto L_103e6b1a;
L_103e6aeb:;
  /* 103e6aeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6aee add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6af1 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6af2 push 0x1040cb64 */
  push32((uint32_t)(0x1040cb64u));
  /* 103e6af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6afb push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6afd push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6aff call 0x103e4770 */
  push32(0x103e6b04u); f_103e4770();
  /* 103e6b04 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6b07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6b0a jne 0x103e6b0d */
  if (!C.zf) goto L_103e6b0d;
  /* 103e6b0c int3  */
  x86_unimpl("int3 @ 0x103e6b0c");
L_103e6b0d:;
  /* 103e6b0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e6b0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e6b11 jne 0x103e6aeb */
  if (!C.zf) goto L_103e6aeb;
  /* 103e6b13 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_103e6b1a:;
  /* 103e6b1a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6b1e jne 0x103e6b96 */
  if (!C.zf) goto L_103e6b96;
  /* 103e6b20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6b23 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6b27 je 0x103e6b5c */
  if (C.zf) goto L_103e6b5c;
L_103e6b29:;
  /* 103e6b29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6b2c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103e6b2f push edx */
  push32((uint32_t)(EDX));
  /* 103e6b30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6b33 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103e6b36 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6b37 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e6b3a push edx */
  push32((uint32_t)(EDX));
  /* 103e6b3b push 0x1040cb44 */
  push32((uint32_t)(0x1040cb44u));
  /* 103e6b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6b48 call 0x103e4770 */
  push32(0x103e6b4du); f_103e4770();
  /* 103e6b4d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6b50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6b53 jne 0x103e6b56 */
  if (!C.zf) goto L_103e6b56;
  /* 103e6b55 int3  */
  x86_unimpl("int3 @ 0x103e6b55");
L_103e6b56:;
  /* 103e6b56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e6b58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6b5a jne 0x103e6b29 */
  if (!C.zf) goto L_103e6b29;
L_103e6b5c:;
  /* 103e6b5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6b5f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103e6b62 push edx */
  push32((uint32_t)(EDX));
  /* 103e6b63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6b66 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6b69 push eax */
  push32((uint32_t)(EAX));
  /* 103e6b6a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e6b6d push ecx */
  push32((uint32_t)(ECX));
  /* 103e6b6e push 0x1040cb18 */
  push32((uint32_t)(0x1040cb18u));
  /* 103e6b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6b7b call 0x103e4770 */
  push32(0x103e6b80u); f_103e4770();
  /* 103e6b80 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6b83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6b86 jne 0x103e6b89 */
  if (!C.zf) goto L_103e6b89;
  /* 103e6b88 int3  */
  x86_unimpl("int3 @ 0x103e6b88");
L_103e6b89:;
  /* 103e6b89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e6b8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e6b8d jne 0x103e6b5c */
  if (!C.zf) goto L_103e6b5c;
  /* 103e6b8f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103e6b96:;
  /* 103e6b96 jmp 0x103e69a3 */
  goto L_103e69a3;
L_103e6b9b:;
  /* 103e6b9b push 9 */
  push32((uint32_t)(0x9u));
  /* 103e6b9d call 0x103e9150 */
  push32(0x103e6ba2u); f_103e9150();
  /* 103e6ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6ba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103e6ba8:;
  /* 103e6ba8 pop edi */
  EDI = (pop32());
  /* 103e6ba9 pop esi */
  ESI = (pop32());
  /* 103e6baa pop ebx */
  EBX = (pop32());
  /* 103e6bab mov esp, ebp */
  ESP = (EBP);
  /* 103e6bad pop ebp */
  EBP = (pop32());
  /* 103e6bae ret  */
  ESPCHK(0x103e6850u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc0 @ 0x103e6bc0 (34 bytes, 13 insns) */
void f_103e6bc0(void) {
  FTRACE(0x103e6bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6bc1 mov ebp, esp */
  EBP = (ESP);
  /* 103e6bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6bc4 mov eax, dword ptr [0x1040fa84] */
  EAX = (r32((uint32_t)(0x1040fa84)));
  /* 103e6bc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e6bcc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6bd0 je 0x103e6bdb */
  if (C.zf) goto L_103e6bdb;
  /* 103e6bd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6bd5 mov dword ptr [0x1040fa84], ecx */
  w32((uint32_t)(0x1040fa84), (ECX));
L_103e6bdb:;
  /* 103e6bdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6bde mov esp, ebp */
  ESP = (EBP);
  /* 103e6be0 pop ebp */
  EBP = (pop32());
  /* 103e6be1 ret  */
  ESPCHK(0x103e6bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x103e6bf0 (103 bytes, 38 insns) */
void f_103e6bf0(void) {
  FTRACE(0x103e6bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6bf1 mov ebp, esp */
  EBP = (ESP);
  /* 103e6bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6bf4 mov eax, dword ptr [0x1040fa84] */
  EAX = (r32((uint32_t)(0x1040fa84)));
  /* 103e6bf9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 103e6bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6bfe jne 0x103e6c02 */
  if (!C.zf) goto L_103e6c02;
  /* 103e6c00 jmp 0x103e6c53 */
  goto L_103e6c53;
L_103e6c02:;
  /* 103e6c02 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e6c04 call 0x103e90b0 */
  push32(0x103e6c09u); f_103e90b0();
  /* 103e6c09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6c0c mov ecx, dword ptr [0x104116c8] */
  ECX = (r32((uint32_t)(0x104116c8)));
  /* 103e6c12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103e6c15 jmp 0x103e6c1f */
  goto L_103e6c1f;
L_103e6c17:;
  /* 103e6c17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6c1a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e6c1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e6c1f:;
  /* 103e6c1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6c23 je 0x103e6c49 */
  if (C.zf) goto L_103e6c49;
  /* 103e6c25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6c28 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103e6c2b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e6c31 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6c34 jne 0x103e6c47 */
  if (!C.zf) goto L_103e6c47;
  /* 103e6c36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e6c39 push eax */
  push32((uint32_t)(EAX));
  /* 103e6c3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6c3d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6c40 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6c41 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x103e6c44u);
  /* 103e6c44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e6c47:;
  /* 103e6c47 jmp 0x103e6c17 */
  goto L_103e6c17;
L_103e6c49:;
  /* 103e6c49 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e6c4b call 0x103e9150 */
  push32(0x103e6c50u); f_103e9150();
  /* 103e6c50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e6c53:;
  /* 103e6c53 mov esp, ebp */
  ESP = (EBP);
  /* 103e6c55 pop ebp */
  EBP = (pop32());
  /* 103e6c56 ret  */
  ESPCHK(0x103e6bf0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x103e6c60 (75 bytes, 28 insns) */
void f_103e6c60(void) {
  FTRACE(0x103e6c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6c60 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6c61 mov ebp, esp */
  EBP = (ESP);
  /* 103e6c63 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6c64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6c68 je 0x103e6c9d */
  if (C.zf) goto L_103e6c9d;
  /* 103e6c6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e6c6d push eax */
  push32((uint32_t)(EAX));
  /* 103e6c6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6c71 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6c72 call dword ptr [0x104143d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143d4))), 0x103e6c78u);
  /* 103e6c78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6c7a jne 0x103e6c9d */
  if (!C.zf) goto L_103e6c9d;
  /* 103e6c7c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6c80 je 0x103e6c94 */
  if (C.zf) goto L_103e6c94;
  /* 103e6c82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e6c85 push edx */
  push32((uint32_t)(EDX));
  /* 103e6c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6c89 push eax */
  push32((uint32_t)(EAX));
  /* 103e6c8a call dword ptr [0x104143d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143d0))), 0x103e6c90u);
  /* 103e6c90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6c92 jne 0x103e6c9d */
  if (!C.zf) goto L_103e6c9d;
L_103e6c94:;
  /* 103e6c94 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103e6c9b jmp 0x103e6ca4 */
  goto L_103e6ca4;
L_103e6c9d:;
  /* 103e6c9d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103e6ca4:;
  /* 103e6ca4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6ca7 mov esp, ebp */
  ESP = (EBP);
  /* 103e6ca9 pop ebp */
  EBP = (pop32());
  /* 103e6caa ret  */
  ESPCHK(0x103e6c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x103e6cb0 (134 bytes, 50 insns) */
void f_103e6cb0(void) {
  FTRACE(0x103e6cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6cb1 mov ebp, esp */
  EBP = (ESP);
  /* 103e6cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6cb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6cb8 jne 0x103e6cbe */
  if (!C.zf) goto L_103e6cbe;
  /* 103e6cba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e6cbc jmp 0x103e6d32 */
  goto L_103e6d32;
L_103e6cbe:;
  /* 103e6cbe push 1 */
  push32((uint32_t)(0x1u));
  /* 103e6cc0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103e6cc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6cc5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6cc8 push eax */
  push32((uint32_t)(EAX));
  /* 103e6cc9 call 0x103e6c60 */
  push32(0x103e6cceu); f_103e6c60();
  /* 103e6cce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6cd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6cd3 jne 0x103e6cd9 */
  if (!C.zf) goto L_103e6cd9;
  /* 103e6cd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e6cd7 jmp 0x103e6d32 */
  goto L_103e6d32;
L_103e6cd9:;
  /* 103e6cd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6cdc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6cdf push ecx */
  push32((uint32_t)(ECX));
  /* 103e6ce0 call 0x103e99b0 */
  push32(0x103e6ce5u); f_103e99b0();
  /* 103e6ce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6ce8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e6ceb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6cef je 0x103e6d06 */
  if (C.zf) goto L_103e6d06;
  /* 103e6cf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6cf4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6cf7 push edx */
  push32((uint32_t)(EDX));
  /* 103e6cf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6cfb push eax */
  push32((uint32_t)(EAX));
  /* 103e6cfc call 0x103e9a10 */
  push32(0x103e6d01u); f_103e9a10();
  /* 103e6d01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6d04 jmp 0x103e6d32 */
  goto L_103e6d32;
L_103e6d06:;
  /* 103e6d06 mov ecx, dword ptr [0x1041167c] */
  ECX = (r32((uint32_t)(0x1041167c)));
  /* 103e6d0c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 103e6d12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e6d14 je 0x103e6d1d */
  if (C.zf) goto L_103e6d1d;
  /* 103e6d16 mov eax, 1 */
  EAX = (0x1u);
  /* 103e6d1b jmp 0x103e6d32 */
  goto L_103e6d32;
L_103e6d1d:;
  /* 103e6d1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6d20 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6d23 push edx */
  push32((uint32_t)(EDX));
  /* 103e6d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6d26 mov eax, dword ptr [0x1041302c] */
  EAX = (r32((uint32_t)(0x1041302c)));
  /* 103e6d2b push eax */
  push32((uint32_t)(EAX));
  /* 103e6d2c call dword ptr [0x104143d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143d8))), 0x103e6d32u);
L_103e6d32:;
  /* 103e6d32 mov esp, ebp */
  ESP = (EBP);
  /* 103e6d34 pop ebp */
  EBP = (pop32());
  /* 103e6d35 ret  */
  ESPCHK(0x103e6cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x103e6d40 (227 bytes, 80 insns) */
void f_103e6d40(void) {
  FTRACE(0x103e6d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6d40 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6d41 mov ebp, esp */
  EBP = (ESP);
  /* 103e6d43 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6d47 push eax */
  push32((uint32_t)(EAX));
  /* 103e6d48 call 0x103e6cb0 */
  push32(0x103e6d4du); f_103e6cb0();
  /* 103e6d4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6d50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6d52 jne 0x103e6d5b */
  if (!C.zf) goto L_103e6d5b;
  /* 103e6d54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e6d56 jmp 0x103e6e1f */
  goto L_103e6e1f;
L_103e6d5b:;
  /* 103e6d5b push 9 */
  push32((uint32_t)(0x9u));
  /* 103e6d5d call 0x103e90b0 */
  push32(0x103e6d62u); f_103e90b0();
  /* 103e6d62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6d65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6d68 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6d6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103e6d6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6d71 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e6d74 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e6d79 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6d7c je 0x103e6da0 */
  if (C.zf) goto L_103e6da0;
  /* 103e6d7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6d81 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6d85 je 0x103e6da0 */
  if (C.zf) goto L_103e6da0;
  /* 103e6d87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6d8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e6d8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e6d92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6d95 je 0x103e6da0 */
  if (C.zf) goto L_103e6da0;
  /* 103e6d97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6d9a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6d9e jne 0x103e6e13 */
  if (!C.zf) goto L_103e6e13;
L_103e6da0:;
  /* 103e6da0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e6da2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e6da5 push edx */
  push32((uint32_t)(EDX));
  /* 103e6da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6da9 push eax */
  push32((uint32_t)(EAX));
  /* 103e6daa call 0x103e6c60 */
  push32(0x103e6dafu); f_103e6c60();
  /* 103e6daf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6db2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6db4 je 0x103e6e13 */
  if (C.zf) goto L_103e6e13;
  /* 103e6db6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6db9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103e6dbc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6dbf jne 0x103e6e13 */
  if (!C.zf) goto L_103e6e13;
  /* 103e6dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6dc4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 103e6dc7 cmp ecx, dword ptr [0x1040fa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1040fa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6dcd jg 0x103e6e13 */
  if ((!C.zf&&C.sf==C.of)) goto L_103e6e13;
  /* 103e6dcf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6dd3 je 0x103e6de0 */
  if (C.zf) goto L_103e6de0;
  /* 103e6dd5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e6dd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6ddb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 103e6dde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103e6de0:;
  /* 103e6de0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6de4 je 0x103e6df1 */
  if (C.zf) goto L_103e6df1;
  /* 103e6de6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e6de9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6dec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103e6def mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103e6df1:;
  /* 103e6df1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6df5 je 0x103e6e02 */
  if (C.zf) goto L_103e6e02;
  /* 103e6df7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e6dfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6dfd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103e6e00 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103e6e02:;
  /* 103e6e02 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e6e04 call 0x103e9150 */
  push32(0x103e6e09u); f_103e9150();
  /* 103e6e09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6e0c mov eax, 1 */
  EAX = (0x1u);
  /* 103e6e11 jmp 0x103e6e1f */
  goto L_103e6e1f;
L_103e6e13:;
  /* 103e6e13 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e6e15 call 0x103e9150 */
  push32(0x103e6e1au); f_103e9150();
  /* 103e6e1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6e1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103e6e1f:;
  /* 103e6e1f mov esp, ebp */
  ESP = (EBP);
  /* 103e6e21 pop ebp */
  EBP = (pop32());
  /* 103e6e22 ret  */
  ESPCHK(0x103e6d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e30 @ 0x103e6e30 (28 bytes, 11 insns) */
void f_103e6e30(void) {
  FTRACE(0x103e6e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6e30 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6e31 mov ebp, esp */
  EBP = (ESP);
  /* 103e6e33 push ecx */
  push32((uint32_t)(ECX));
  /* 103e6e34 mov eax, dword ptr [0x10413038] */
  EAX = (r32((uint32_t)(0x10413038)));
  /* 103e6e39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e6e3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6e3f mov dword ptr [0x10413038], ecx */
  w32((uint32_t)(0x10413038), (ECX));
  /* 103e6e45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6e48 mov esp, ebp */
  ESP = (EBP);
  /* 103e6e4a pop ebp */
  EBP = (pop32());
  /* 103e6e4b ret  */
  ESPCHK(0x103e6e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e50 @ 0x103e6e50 (362 bytes, 116 insns) */
void f_103e6e50(void) {
  FTRACE(0x103e6e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6e50 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6e51 mov ebp, esp */
  EBP = (ESP);
  /* 103e6e53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6e56 push ebx */
  push32((uint32_t)(EBX));
  /* 103e6e57 push esi */
  push32((uint32_t)(ESI));
  /* 103e6e58 push edi */
  push32((uint32_t)(EDI));
  /* 103e6e59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6e5d jne 0x103e6e8a */
  if (!C.zf) goto L_103e6e8a;
L_103e6e5f:;
  /* 103e6e5f push 0x1040cc78 */
  push32((uint32_t)(0x1040cc78u));
  /* 103e6e64 push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e6e69 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6e71 call 0x103e4770 */
  push32(0x103e6e76u); f_103e4770();
  /* 103e6e76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6e79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6e7c jne 0x103e6e7f */
  if (!C.zf) goto L_103e6e7f;
  /* 103e6e7e int3  */
  x86_unimpl("int3 @ 0x103e6e7e");
L_103e6e7f:;
  /* 103e6e7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e6e81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6e83 jne 0x103e6e5f */
  if (!C.zf) goto L_103e6e5f;
  /* 103e6e85 jmp 0x103e6fb3 */
  goto L_103e6fb3;
L_103e6e8a:;
  /* 103e6e8a push 9 */
  push32((uint32_t)(0x9u));
  /* 103e6e8c call 0x103e90b0 */
  push32(0x103e6e91u); f_103e90b0();
  /* 103e6e91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6e94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6e97 mov edx, dword ptr [0x104116c8] */
  EDX = (r32((uint32_t)(0x104116c8)));
  /* 103e6e9d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103e6e9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103e6ea6 jmp 0x103e6eb1 */
  goto L_103e6eb1;
L_103e6ea8:;
  /* 103e6ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6eab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6eae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e6eb1:;
  /* 103e6eb1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6eb5 jge 0x103e6ed5 */
  if ((C.sf==C.of)) goto L_103e6ed5;
  /* 103e6eb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6eba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6ebd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 103e6ec5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e6ec8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6ecb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 103e6ed3 jmp 0x103e6ea8 */
  goto L_103e6ea8;
L_103e6ed5:;
  /* 103e6ed5 mov edx, dword ptr [0x104116c8] */
  EDX = (r32((uint32_t)(0x104116c8)));
  /* 103e6edb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103e6ede jmp 0x103e6ee8 */
  goto L_103e6ee8;
L_103e6ee0:;
  /* 103e6ee0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6ee3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e6ee5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103e6ee8:;
  /* 103e6ee8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6eec je 0x103e6f91 */
  if (C.zf) goto L_103e6f91;
  /* 103e6ef2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6ef5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e6ef8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e6efd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6eff jl 0x103e6f67 */
  if ((C.sf!=C.of)) goto L_103e6f67;
  /* 103e6f01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6f04 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103e6f07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e6f0d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6f10 jge 0x103e6f67 */
  if ((C.sf==C.of)) goto L_103e6f67;
  /* 103e6f12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6f15 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103e6f18 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e6f1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6f21 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 103e6f25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6f28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6f2b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103e6f2e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e6f34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6f37 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 103e6f3b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6f3e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e6f41 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e6f46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6f49 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 103e6f4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6f50 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6f53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6f56 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 103e6f59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e6f5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6f61 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 103e6f65 jmp 0x103e6f8c */
  goto L_103e6f8c;
L_103e6f67:;
  /* 103e6f67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e6f6a push edx */
  push32((uint32_t)(EDX));
  /* 103e6f6b push 0x1040cc54 */
  push32((uint32_t)(0x1040cc54u));
  /* 103e6f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6f78 call 0x103e4770 */
  push32(0x103e6f7du); f_103e4770();
  /* 103e6f7d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6f80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6f83 jne 0x103e6f86 */
  if (!C.zf) goto L_103e6f86;
  /* 103e6f85 int3  */
  x86_unimpl("int3 @ 0x103e6f85");
L_103e6f86:;
  /* 103e6f86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e6f88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e6f8a jne 0x103e6f67 */
  if (!C.zf) goto L_103e6f67;
L_103e6f8c:;
  /* 103e6f8c jmp 0x103e6ee0 */
  goto L_103e6ee0;
L_103e6f91:;
  /* 103e6f91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6f94 mov edx, dword ptr [0x104116d0] */
  EDX = (r32((uint32_t)(0x104116d0)));
  /* 103e6f9a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 103e6f9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e6fa0 mov ecx, dword ptr [0x104116c4] */
  ECX = (r32((uint32_t)(0x104116c4)));
  /* 103e6fa6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 103e6fa9 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e6fab call 0x103e9150 */
  push32(0x103e6fb0u); f_103e9150();
  /* 103e6fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e6fb3:;
  /* 103e6fb3 pop edi */
  EDI = (pop32());
  /* 103e6fb4 pop esi */
  ESI = (pop32());
  /* 103e6fb5 pop ebx */
  EBX = (pop32());
  /* 103e6fb6 mov esp, ebp */
  ESP = (EBP);
  /* 103e6fb8 pop ebp */
  EBP = (pop32());
  /* 103e6fb9 ret  */
  ESPCHK(0x103e6e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fc0 @ 0x103e6fc0 (291 bytes, 95 insns) */
void f_103e6fc0(void) {
  FTRACE(0x103e6fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e6fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e6fc1 mov ebp, esp */
  EBP = (ESP);
  /* 103e6fc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e6fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 103e6fc7 push esi */
  push32((uint32_t)(ESI));
  /* 103e6fc8 push edi */
  push32((uint32_t)(EDI));
  /* 103e6fc9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103e6fd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6fd4 je 0x103e6fe2 */
  if (C.zf) goto L_103e6fe2;
  /* 103e6fd6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6fda je 0x103e6fe2 */
  if (C.zf) goto L_103e6fe2;
  /* 103e6fdc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6fe0 jne 0x103e7010 */
  if (!C.zf) goto L_103e7010;
L_103e6fe2:;
  /* 103e6fe2 push 0x1040cca0 */
  push32((uint32_t)(0x1040cca0u));
  /* 103e6fe7 push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e6fec push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6fee push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e6ff4 call 0x103e4770 */
  push32(0x103e6ff9u); f_103e4770();
  /* 103e6ff9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e6ffc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e6fff jne 0x103e7002 */
  if (!C.zf) goto L_103e7002;
  /* 103e7001 int3  */
  x86_unimpl("int3 @ 0x103e7001");
L_103e7002:;
  /* 103e7002 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e7006 jne 0x103e6fe2 */
  if (!C.zf) goto L_103e6fe2;
  /* 103e7008 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e700b jmp 0x103e70dc */
  goto L_103e70dc;
L_103e7010:;
  /* 103e7010 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103e7017 jmp 0x103e7022 */
  goto L_103e7022;
L_103e7019:;
  /* 103e7019 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e701c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e701f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103e7022:;
  /* 103e7022 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7026 jge 0x103e70ac */
  if ((C.sf==C.of)) goto L_103e70ac;
  /* 103e702c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e702f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7032 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7035 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103e7038 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 103e703c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7040 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7043 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e7046 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 103e704a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e704d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7050 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7053 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103e7056 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 103e705a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e705e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7061 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e7064 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 103e7068 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e706b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e706e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7073 jne 0x103e7082 */
  if (!C.zf) goto L_103e7082;
  /* 103e7075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7078 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e707b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7080 je 0x103e70a7 */
  if (C.zf) goto L_103e70a7;
L_103e7082:;
  /* 103e7082 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7086 je 0x103e70a7 */
  if (C.zf) goto L_103e70a7;
  /* 103e7088 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e708c jne 0x103e70a0 */
  if (!C.zf) goto L_103e70a0;
  /* 103e708e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7092 jne 0x103e70a7 */
  if (!C.zf) goto L_103e70a7;
  /* 103e7094 mov eax, dword ptr [0x1040fa84] */
  EAX = (r32((uint32_t)(0x1040fa84)));
  /* 103e7099 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 103e709c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e709e je 0x103e70a7 */
  if (C.zf) goto L_103e70a7;
L_103e70a0:;
  /* 103e70a0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_103e70a7:;
  /* 103e70a7 jmp 0x103e7019 */
  goto L_103e7019;
L_103e70ac:;
  /* 103e70ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e70af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e70b2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 103e70b5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e70b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e70bb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 103e70be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e70c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e70c4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 103e70c7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e70ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e70cd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 103e70d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e70d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103e70d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103e70dc:;
  /* 103e70dc pop edi */
  EDI = (pop32());
  /* 103e70dd pop esi */
  ESI = (pop32());
  /* 103e70de pop ebx */
  EBX = (pop32());
  /* 103e70df mov esp, ebp */
  ESP = (EBP);
  /* 103e70e1 pop ebp */
  EBP = (pop32());
  /* 103e70e2 ret  */
  ESPCHK(0x103e6fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070f0 @ 0x103e70f0 (697 bytes, 253 insns) */
void f_103e70f0(void) {
  FTRACE(0x103e70f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e70f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e70f1 mov ebp, esp */
  EBP = (ESP);
  /* 103e70f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e70f6 push ebx */
  push32((uint32_t)(EBX));
  /* 103e70f7 push esi */
  push32((uint32_t)(ESI));
  /* 103e70f8 push edi */
  push32((uint32_t)(EDI));
  /* 103e70f9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103e7100 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e7102 call 0x103e90b0 */
  push32(0x103e7107u); f_103e90b0();
  /* 103e7107 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e710a:;
  /* 103e710a push 0x1040cd98 */
  push32((uint32_t)(0x1040cd98u));
  /* 103e710f push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e7114 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7116 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7118 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e711a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e711c call 0x103e4770 */
  push32(0x103e7121u); f_103e4770();
  /* 103e7121 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7124 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7127 jne 0x103e712a */
  if (!C.zf) goto L_103e712a;
  /* 103e7129 int3  */
  x86_unimpl("int3 @ 0x103e7129");
L_103e712a:;
  /* 103e712a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e712c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e712e jne 0x103e710a */
  if (!C.zf) goto L_103e710a;
  /* 103e7130 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7134 je 0x103e713e */
  if (C.zf) goto L_103e713e;
  /* 103e7136 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e7139 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e713b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103e713e:;
  /* 103e713e mov eax, dword ptr [0x104116c8] */
  EAX = (r32((uint32_t)(0x104116c8)));
  /* 103e7143 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e7146 jmp 0x103e7150 */
  goto L_103e7150;
L_103e7148:;
  /* 103e7148 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e714b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e714d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103e7150:;
  /* 103e7150 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7154 je 0x103e7372 */
  if (C.zf) goto L_103e7372;
  /* 103e715a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e715d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7160 je 0x103e7372 */
  if (C.zf) goto L_103e7372;
  /* 103e7166 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7169 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103e716c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e7172 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7175 je 0x103e71a4 */
  if (C.zf) goto L_103e71a4;
  /* 103e7177 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e717a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103e717d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e7183 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e7185 je 0x103e71a4 */
  if (C.zf) goto L_103e71a4;
  /* 103e7187 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e718a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e718d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e7192 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7195 jne 0x103e71a9 */
  if (!C.zf) goto L_103e71a9;
  /* 103e7197 mov ecx, dword ptr [0x1040fa84] */
  ECX = (r32((uint32_t)(0x1040fa84)));
  /* 103e719d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 103e71a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e71a2 jne 0x103e71a9 */
  if (!C.zf) goto L_103e71a9;
L_103e71a4:;
  /* 103e71a4 jmp 0x103e736d */
  goto L_103e736d;
L_103e71a9:;
  /* 103e71a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e71ac cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e71b0 je 0x103e7222 */
  if (C.zf) goto L_103e7222;
  /* 103e71b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e71b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e71b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e71b9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103e71bc push ecx */
  push32((uint32_t)(ECX));
  /* 103e71bd call 0x103e6c60 */
  push32(0x103e71c2u); f_103e6c60();
  /* 103e71c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e71c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e71c7 jne 0x103e71f3 */
  if (!C.zf) goto L_103e71f3;
L_103e71c9:;
  /* 103e71c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e71cc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103e71cf push eax */
  push32((uint32_t)(EAX));
  /* 103e71d0 push 0x1040cd84 */
  push32((uint32_t)(0x1040cd84u));
  /* 103e71d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e71d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e71d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e71db push 0 */
  push32((uint32_t)(0x0u));
  /* 103e71dd call 0x103e4770 */
  push32(0x103e71e2u); f_103e4770();
  /* 103e71e2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e71e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e71e8 jne 0x103e71eb */
  if (!C.zf) goto L_103e71eb;
  /* 103e71ea int3  */
  x86_unimpl("int3 @ 0x103e71ea");
L_103e71eb:;
  /* 103e71eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e71ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e71ef jne 0x103e71c9 */
  if (!C.zf) goto L_103e71c9;
  /* 103e71f1 jmp 0x103e7222 */
  goto L_103e7222;
L_103e71f3:;
  /* 103e71f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e71f6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103e71f9 push eax */
  push32((uint32_t)(EAX));
  /* 103e71fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e71fd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103e7200 push edx */
  push32((uint32_t)(EDX));
  /* 103e7201 push 0x1040cd78 */
  push32((uint32_t)(0x1040cd78u));
  /* 103e7206 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7208 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e720a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e720c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e720e call 0x103e4770 */
  push32(0x103e7213u); f_103e4770();
  /* 103e7213 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7216 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7219 jne 0x103e721c */
  if (!C.zf) goto L_103e721c;
  /* 103e721b int3  */
  x86_unimpl("int3 @ 0x103e721b");
L_103e721c:;
  /* 103e721c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e721e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e7220 jne 0x103e71f3 */
  if (!C.zf) goto L_103e71f3;
L_103e7222:;
  /* 103e7222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7225 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103e7228 push edx */
  push32((uint32_t)(EDX));
  /* 103e7229 push 0x1040cd70 */
  push32((uint32_t)(0x1040cd70u));
  /* 103e722e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7230 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7232 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7234 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7236 call 0x103e4770 */
  push32(0x103e723bu); f_103e4770();
  /* 103e723b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e723e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7241 jne 0x103e7244 */
  if (!C.zf) goto L_103e7244;
  /* 103e7243 int3  */
  x86_unimpl("int3 @ 0x103e7243");
L_103e7244:;
  /* 103e7244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e7248 jne 0x103e7222 */
  if (!C.zf) goto L_103e7222;
  /* 103e724a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e724d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103e7250 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e7256 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7259 jne 0x103e72cc */
  if (!C.zf) goto L_103e72cc;
L_103e725b:;
  /* 103e725b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e725e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103e7261 push ecx */
  push32((uint32_t)(ECX));
  /* 103e7262 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7265 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e7268 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103e726b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e7270 push eax */
  push32((uint32_t)(EAX));
  /* 103e7271 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7274 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7277 push ecx */
  push32((uint32_t)(ECX));
  /* 103e7278 push 0x1040cd3c */
  push32((uint32_t)(0x1040cd3cu));
  /* 103e727d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e727f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7281 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7283 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7285 call 0x103e4770 */
  push32(0x103e728au); f_103e4770();
  /* 103e728a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e728d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7290 jne 0x103e7293 */
  if (!C.zf) goto L_103e7293;
  /* 103e7292 int3  */
  x86_unimpl("int3 @ 0x103e7292");
L_103e7293:;
  /* 103e7293 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e7295 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e7297 jne 0x103e725b */
  if (!C.zf) goto L_103e725b;
  /* 103e7299 cmp dword ptr [0x10413038], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10413038))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e72a0 je 0x103e72bb */
  if (C.zf) goto L_103e72bb;
  /* 103e72a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e72a5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103e72a8 push ecx */
  push32((uint32_t)(ECX));
  /* 103e72a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e72ac add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e72af push edx */
  push32((uint32_t)(EDX));
  /* 103e72b0 call dword ptr [0x10413038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10413038))), 0x103e72b6u);
  /* 103e72b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e72b9 jmp 0x103e72c7 */
  goto L_103e72c7;
L_103e72bb:;
  /* 103e72bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e72be push eax */
  push32((uint32_t)(EAX));
  /* 103e72bf call 0x103e73b0 */
  push32(0x103e72c4u); f_103e73b0();
  /* 103e72c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e72c7:;
  /* 103e72c7 jmp 0x103e736d */
  goto L_103e736d;
L_103e72cc:;
  /* 103e72cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e72cf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e72d3 jne 0x103e7312 */
  if (!C.zf) goto L_103e7312;
L_103e72d5:;
  /* 103e72d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e72d8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103e72db push eax */
  push32((uint32_t)(EAX));
  /* 103e72dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e72df add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e72e2 push ecx */
  push32((uint32_t)(ECX));
  /* 103e72e3 push 0x1040cd14 */
  push32((uint32_t)(0x1040cd14u));
  /* 103e72e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e72ea push 0 */
  push32((uint32_t)(0x0u));
  /* 103e72ec push 0 */
  push32((uint32_t)(0x0u));
  /* 103e72ee push 0 */
  push32((uint32_t)(0x0u));
  /* 103e72f0 call 0x103e4770 */
  push32(0x103e72f5u); f_103e4770();
  /* 103e72f5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e72f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e72fb jne 0x103e72fe */
  if (!C.zf) goto L_103e72fe;
  /* 103e72fd int3  */
  x86_unimpl("int3 @ 0x103e72fd");
L_103e72fe:;
  /* 103e72fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e7300 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e7302 jne 0x103e72d5 */
  if (!C.zf) goto L_103e72d5;
  /* 103e7304 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7307 push eax */
  push32((uint32_t)(EAX));
  /* 103e7308 call 0x103e73b0 */
  push32(0x103e730du); f_103e73b0();
  /* 103e730d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7310 jmp 0x103e736d */
  goto L_103e736d;
L_103e7312:;
  /* 103e7312 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7315 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103e7318 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e731e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7321 jne 0x103e736d */
  if (!C.zf) goto L_103e736d;
L_103e7323:;
  /* 103e7323 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7326 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103e7329 push ecx */
  push32((uint32_t)(ECX));
  /* 103e732a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e732d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103e7330 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103e7333 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e7338 push eax */
  push32((uint32_t)(EAX));
  /* 103e7339 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e733c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e733f push ecx */
  push32((uint32_t)(ECX));
  /* 103e7340 push 0x1040cce0 */
  push32((uint32_t)(0x1040cce0u));
  /* 103e7345 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7347 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7349 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e734b push 0 */
  push32((uint32_t)(0x0u));
  /* 103e734d call 0x103e4770 */
  push32(0x103e7352u); f_103e4770();
  /* 103e7352 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7355 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7358 jne 0x103e735b */
  if (!C.zf) goto L_103e735b;
  /* 103e735a int3  */
  x86_unimpl("int3 @ 0x103e735a");
L_103e735b:;
  /* 103e735b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e735d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e735f jne 0x103e7323 */
  if (!C.zf) goto L_103e7323;
  /* 103e7361 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7364 push eax */
  push32((uint32_t)(EAX));
  /* 103e7365 call 0x103e73b0 */
  push32(0x103e736au); f_103e73b0();
  /* 103e736a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e736d:;
  /* 103e736d jmp 0x103e7148 */
  goto L_103e7148;
L_103e7372:;
  /* 103e7372 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e7374 call 0x103e9150 */
  push32(0x103e7379u); f_103e9150();
  /* 103e7379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e737c:;
  /* 103e737c push 0x1040ccc8 */
  push32((uint32_t)(0x1040ccc8u));
  /* 103e7381 push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e7386 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7388 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e738a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e738c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e738e call 0x103e4770 */
  push32(0x103e7393u); f_103e4770();
  /* 103e7393 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7396 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7399 jne 0x103e739c */
  if (!C.zf) goto L_103e739c;
  /* 103e739b int3  */
  x86_unimpl("int3 @ 0x103e739b");
L_103e739c:;
  /* 103e739c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e739e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e73a0 jne 0x103e737c */
  if (!C.zf) goto L_103e737c;
  /* 103e73a2 pop edi */
  EDI = (pop32());
  /* 103e73a3 pop esi */
  ESI = (pop32());
  /* 103e73a4 pop ebx */
  EBX = (pop32());
  /* 103e73a5 mov esp, ebp */
  ESP = (EBP);
  /* 103e73a7 pop ebp */
  EBP = (pop32());
  /* 103e73a8 ret  */
  ESPCHK(0x103e70f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100073b0 @ 0x103e73b0 (276 bytes, 89 insns) */
void f_103e73b0(void) {
  FTRACE(0x103e73b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e73b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e73b1 mov ebp, esp */
  EBP = (ESP);
  /* 103e73b3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e73b6 push ebx */
  push32((uint32_t)(EBX));
  /* 103e73b7 push esi */
  push32((uint32_t)(ESI));
  /* 103e73b8 push edi */
  push32((uint32_t)(EDI));
  /* 103e73b9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 103e73c0 jmp 0x103e73cb */
  goto L_103e73cb;
L_103e73c2:;
  /* 103e73c2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103e73c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e73c8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_103e73cb:;
  /* 103e73cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e73ce cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e73d2 jge 0x103e73df */
  if ((C.sf==C.of)) goto L_103e73df;
  /* 103e73d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e73d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103e73da mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 103e73dd jmp 0x103e73e6 */
  goto L_103e73e6;
L_103e73df:;
  /* 103e73df mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_103e73e6:;
  /* 103e73e6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103e73e9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e73ec jge 0x103e748c */
  if ((C.sf==C.of)) goto L_103e748c;
  /* 103e73f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e73f5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e73f8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 103e73fb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 103e73fe cmp dword ptr [0x1040fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1040fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7405 jle 0x103e7423 */
  if ((C.zf||C.sf!=C.of)) goto L_103e7423;
  /* 103e7407 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 103e740c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e740f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e7415 push ecx */
  push32((uint32_t)(ECX));
  /* 103e7416 call 0x103eb6c0 */
  push32(0x103e741bu); f_103eb6c0();
  /* 103e741b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e741e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 103e7421 jmp 0x103e7440 */
  goto L_103e7440;
L_103e7423:;
  /* 103e7423 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e7426 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e742c mov eax, dword ptr [0x1040fc98] */
  EAX = (r32((uint32_t)(0x1040fc98)));
  /* 103e7431 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e7433 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 103e7437 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 103e743d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_103e7440:;
  /* 103e7440 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7444 je 0x103e7454 */
  if (C.zf) goto L_103e7454;
  /* 103e7446 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e7449 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e744f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 103e7452 jmp 0x103e745b */
  goto L_103e745b;
L_103e7454:;
  /* 103e7454 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_103e745b:;
  /* 103e745b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103e745e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 103e7461 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 103e7465 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103e7468 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e746e push edx */
  push32((uint32_t)(EDX));
  /* 103e746f push 0x1040cdbc */
  push32((uint32_t)(0x1040cdbcu));
  /* 103e7474 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103e7477 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e747a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 103e747e push ecx */
  push32((uint32_t)(ECX));
  /* 103e747f call 0x103eb5c0 */
  push32(0x103e7484u); f_103eb5c0();
  /* 103e7484 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7487 jmp 0x103e73c2 */
  goto L_103e73c2;
L_103e748c:;
  /* 103e748c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103e748f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_103e7494:;
  /* 103e7494 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 103e7497 push eax */
  push32((uint32_t)(EAX));
  /* 103e7498 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 103e749b push ecx */
  push32((uint32_t)(ECX));
  /* 103e749c push 0x1040cdac */
  push32((uint32_t)(0x1040cdacu));
  /* 103e74a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e74a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e74a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e74a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e74a9 call 0x103e4770 */
  push32(0x103e74aeu); f_103e4770();
  /* 103e74ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e74b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e74b4 jne 0x103e74b7 */
  if (!C.zf) goto L_103e74b7;
  /* 103e74b6 int3  */
  x86_unimpl("int3 @ 0x103e74b6");
L_103e74b7:;
  /* 103e74b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e74b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e74bb jne 0x103e7494 */
  if (!C.zf) goto L_103e7494;
  /* 103e74bd pop edi */
  EDI = (pop32());
  /* 103e74be pop esi */
  ESI = (pop32());
  /* 103e74bf pop ebx */
  EBX = (pop32());
  /* 103e74c0 mov esp, ebp */
  ESP = (EBP);
  /* 103e74c2 pop ebp */
  EBP = (pop32());
  /* 103e74c3 ret  */
  ESPCHK(0x103e73b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074d0 @ 0x103e74d0 (116 bytes, 46 insns) */
void f_103e74d0(void) {
  FTRACE(0x103e74d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e74d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e74d1 mov ebp, esp */
  EBP = (ESP);
  /* 103e74d3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e74d6 push ebx */
  push32((uint32_t)(EBX));
  /* 103e74d7 push esi */
  push32((uint32_t)(ESI));
  /* 103e74d8 push edi */
  push32((uint32_t)(EDI));
  /* 103e74d9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 103e74dc push eax */
  push32((uint32_t)(EAX));
  /* 103e74dd call 0x103e6e50 */
  push32(0x103e74e2u); f_103e6e50();
  /* 103e74e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e74e5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e74e9 jne 0x103e7504 */
  if (!C.zf) goto L_103e7504;
  /* 103e74eb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e74ef jne 0x103e7504 */
  if (!C.zf) goto L_103e7504;
  /* 103e74f1 mov ecx, dword ptr [0x1040fa84] */
  ECX = (r32((uint32_t)(0x1040fa84)));
  /* 103e74f7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 103e74fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e74fc je 0x103e753b */
  if (C.zf) goto L_103e753b;
  /* 103e74fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7502 je 0x103e753b */
  if (C.zf) goto L_103e753b;
L_103e7504:;
  /* 103e7504 push 0x1040cdc4 */
  push32((uint32_t)(0x1040cdc4u));
  /* 103e7509 push 0x1040c790 */
  push32((uint32_t)(0x1040c790u));
  /* 103e750e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7510 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7512 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7514 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7516 call 0x103e4770 */
  push32(0x103e751bu); f_103e4770();
  /* 103e751b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e751e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7521 jne 0x103e7524 */
  if (!C.zf) goto L_103e7524;
  /* 103e7523 int3  */
  x86_unimpl("int3 @ 0x103e7523");
L_103e7524:;
  /* 103e7524 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e7526 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e7528 jne 0x103e7504 */
  if (!C.zf) goto L_103e7504;
  /* 103e752a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e752c call 0x103e70f0 */
  push32(0x103e7531u); f_103e70f0();
  /* 103e7531 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7534 mov eax, 1 */
  EAX = (0x1u);
  /* 103e7539 jmp 0x103e753d */
  goto L_103e753d;
L_103e753b:;
  /* 103e753b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103e753d:;
  /* 103e753d pop edi */
  EDI = (pop32());
  /* 103e753e pop esi */
  ESI = (pop32());
  /* 103e753f pop ebx */
  EBX = (pop32());
  /* 103e7540 mov esp, ebp */
  ESP = (EBP);
  /* 103e7542 pop ebp */
  EBP = (pop32());
  /* 103e7543 ret  */
  ESPCHK(0x103e74d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x103e7550 (197 bytes, 79 insns) */
void f_103e7550(void) {
  FTRACE(0x103e7550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e7550 push ebp */
  push32((uint32_t)(EBP));
  /* 103e7551 mov ebp, esp */
  EBP = (ESP);
  /* 103e7553 push ecx */
  push32((uint32_t)(ECX));
  /* 103e7554 push ebx */
  push32((uint32_t)(EBX));
  /* 103e7555 push esi */
  push32((uint32_t)(ESI));
  /* 103e7556 push edi */
  push32((uint32_t)(EDI));
  /* 103e7557 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e755b jne 0x103e7562 */
  if (!C.zf) goto L_103e7562;
  /* 103e755d jmp 0x103e760e */
  goto L_103e760e;
L_103e7562:;
  /* 103e7562 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103e7569 jmp 0x103e7574 */
  goto L_103e7574;
L_103e756b:;
  /* 103e756b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e756e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7571 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e7574:;
  /* 103e7574 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7578 jge 0x103e75be */
  if ((C.sf==C.of)) goto L_103e75be;
L_103e757a:;
  /* 103e757a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e757d mov edx, dword ptr [ecx*4 + 0x1040fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1040fa94)));
  /* 103e7584 push edx */
  push32((uint32_t)(EDX));
  /* 103e7585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7588 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e758b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 103e758f push edx */
  push32((uint32_t)(EDX));
  /* 103e7590 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7593 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e7596 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 103e759a push edx */
  push32((uint32_t)(EDX));
  /* 103e759b push 0x1040ce20 */
  push32((uint32_t)(0x1040ce20u));
  /* 103e75a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75a8 call 0x103e4770 */
  push32(0x103e75adu); f_103e4770();
  /* 103e75ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e75b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e75b3 jne 0x103e75b6 */
  if (!C.zf) goto L_103e75b6;
  /* 103e75b5 int3  */
  x86_unimpl("int3 @ 0x103e75b5");
L_103e75b6:;
  /* 103e75b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e75b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e75ba jne 0x103e757a */
  if (!C.zf) goto L_103e757a;
  /* 103e75bc jmp 0x103e756b */
  goto L_103e756b;
L_103e75be:;
  /* 103e75be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e75c1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 103e75c4 push edx */
  push32((uint32_t)(EDX));
  /* 103e75c5 push 0x1040cdfc */
  push32((uint32_t)(0x1040cdfcu));
  /* 103e75ca push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75cc push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75ce push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75d2 call 0x103e4770 */
  push32(0x103e75d7u); f_103e4770();
  /* 103e75d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e75da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e75dd jne 0x103e75e0 */
  if (!C.zf) goto L_103e75e0;
  /* 103e75df int3  */
  x86_unimpl("int3 @ 0x103e75df");
L_103e75e0:;
  /* 103e75e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e75e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e75e4 jne 0x103e75be */
  if (!C.zf) goto L_103e75be;
L_103e75e6:;
  /* 103e75e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e75e9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 103e75ec push edx */
  push32((uint32_t)(EDX));
  /* 103e75ed push 0x1040cddc */
  push32((uint32_t)(0x1040cddcu));
  /* 103e75f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e75fa call 0x103e4770 */
  push32(0x103e75ffu); f_103e4770();
  /* 103e75ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7602 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7605 jne 0x103e7608 */
  if (!C.zf) goto L_103e7608;
  /* 103e7607 int3  */
  x86_unimpl("int3 @ 0x103e7607");
L_103e7608:;
  /* 103e7608 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e760a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e760c jne 0x103e75e6 */
  if (!C.zf) goto L_103e75e6;
L_103e760e:;
  /* 103e760e pop edi */
  EDI = (pop32());
  /* 103e760f pop esi */
  ESI = (pop32());
  /* 103e7610 pop ebx */
  EBX = (pop32());
  /* 103e7611 mov esp, ebp */
  ESP = (EBP);
  /* 103e7613 pop ebp */
  EBP = (pop32());
  /* 103e7614 ret  */
  ESPCHK(0x103e7550u, _esp0);
  ESP += 4; return;
}

/* FUN_10007620 @ 0x103e7620 (329 bytes, 102 insns) */
void f_103e7620(void) {
  FTRACE(0x103e7620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e7620 push ebp */
  push32((uint32_t)(EBP));
  /* 103e7621 mov ebp, esp */
  EBP = (ESP);
  /* 103e7623 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7626 cmp dword ptr [0x104131b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104131b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e762d jne 0x103e7634 */
  if (!C.zf) goto L_103e7634;
  /* 103e762f call 0x103ebf60 */
  push32(0x103e7634u); f_103ebf60();
L_103e7634:;
  /* 103e7634 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103e763b mov eax, dword ptr [0x10411664] */
  EAX = (r32((uint32_t)(0x10411664)));
  /* 103e7640 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e7643:;
  /* 103e7643 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7646 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103e7649 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e764b je 0x103e7679 */
  if (C.zf) goto L_103e7679;
  /* 103e764d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7650 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103e7653 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7656 je 0x103e7661 */
  if (C.zf) goto L_103e7661;
  /* 103e7658 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e765b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e765e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103e7661:;
  /* 103e7661 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7664 push eax */
  push32((uint32_t)(EAX));
  /* 103e7665 call 0x103e84e0 */
  push32(0x103e766au); f_103e84e0();
  /* 103e766a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e766d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7670 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103e7674 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e7677 jmp 0x103e7643 */
  goto L_103e7643;
L_103e7679:;
  /* 103e7679 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 103e767b push 0x1040ce40 */
  push32((uint32_t)(0x1040ce40u));
  /* 103e7680 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e7682 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7685 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 103e768c push ecx */
  push32((uint32_t)(ECX));
  /* 103e768d call 0x103e56b0 */
  push32(0x103e7692u); f_103e56b0();
  /* 103e7692 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7695 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e7698 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e769b mov dword ptr [0x10411698], edx */
  w32((uint32_t)(0x10411698), (EDX));
  /* 103e76a1 cmp dword ptr [0x10411698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10411698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e76a8 jne 0x103e76b4 */
  if (!C.zf) goto L_103e76b4;
  /* 103e76aa push 9 */
  push32((uint32_t)(0x9u));
  /* 103e76ac call 0x103e4620 */
  push32(0x103e76b1u); f_103e4620();
  /* 103e76b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e76b4:;
  /* 103e76b4 mov eax, dword ptr [0x10411664] */
  EAX = (r32((uint32_t)(0x10411664)));
  /* 103e76b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e76bc jmp 0x103e76c7 */
  goto L_103e76c7;
L_103e76be:;
  /* 103e76be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e76c1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e76c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103e76c7:;
  /* 103e76c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e76ca movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103e76cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e76cf je 0x103e7737 */
  if (C.zf) goto L_103e7737;
  /* 103e76d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e76d4 push ecx */
  push32((uint32_t)(ECX));
  /* 103e76d5 call 0x103e84e0 */
  push32(0x103e76dau); f_103e84e0();
  /* 103e76da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e76dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e76e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103e76e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e76e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103e76e9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e76ec je 0x103e7735 */
  if (C.zf) goto L_103e7735;
  /* 103e76ee push 0x79 */
  push32((uint32_t)(0x79u));
  /* 103e76f0 push 0x1040ce40 */
  push32((uint32_t)(0x1040ce40u));
  /* 103e76f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e76f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e76fa push ecx */
  push32((uint32_t)(ECX));
  /* 103e76fb call 0x103e56b0 */
  push32(0x103e7700u); f_103e56b0();
  /* 103e7700 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7703 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7706 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103e7708 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e770b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e770e jne 0x103e771a */
  if (!C.zf) goto L_103e771a;
  /* 103e7710 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e7712 call 0x103e4620 */
  push32(0x103e7717u); f_103e4620();
  /* 103e7717 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e771a:;
  /* 103e771a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e771d push ecx */
  push32((uint32_t)(ECX));
  /* 103e771e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7721 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e7723 push eax */
  push32((uint32_t)(EAX));
  /* 103e7724 call 0x103e8660 */
  push32(0x103e7729u); f_103e8660();
  /* 103e7729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e772c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e772f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7732 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_103e7735:;
  /* 103e7735 jmp 0x103e76be */
  goto L_103e76be;
L_103e7737:;
  /* 103e7737 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e7739 mov edx, dword ptr [0x10411664] */
  EDX = (r32((uint32_t)(0x10411664)));
  /* 103e773f push edx */
  push32((uint32_t)(EDX));
  /* 103e7740 call 0x103e6140 */
  push32(0x103e7745u); f_103e6140();
  /* 103e7745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7748 mov dword ptr [0x10411664], 0 */
  w32((uint32_t)(0x10411664), (0x0u));
  /* 103e7752 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7755 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103e775b mov dword ptr [0x104131a0], 1 */
  w32((uint32_t)(0x104131a0), (0x1u));
  /* 103e7765 mov esp, ebp */
  ESP = (EBP);
  /* 103e7767 pop ebp */
  EBP = (pop32());
  /* 103e7768 ret  */
  ESPCHK(0x103e7620u, _esp0);
  ESP += 4; return;
}

/* FUN_10007770 @ 0x103e7770 (216 bytes, 69 insns) */
void f_103e7770(void) {
  FTRACE(0x103e7770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e7770 push ebp */
  push32((uint32_t)(EBP));
  /* 103e7771 mov ebp, esp */
  EBP = (ESP);
  /* 103e7773 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7776 cmp dword ptr [0x104131b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104131b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e777d jne 0x103e7784 */
  if (!C.zf) goto L_103e7784;
  /* 103e777f call 0x103ebf60 */
  push32(0x103e7784u); f_103ebf60();
L_103e7784:;
  /* 103e7784 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 103e7789 push 0x104116d4 */
  push32((uint32_t)(0x104116d4u));
  /* 103e778e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7790 call dword ptr [0x10414394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414394))), 0x103e7796u);
  /* 103e7796 mov dword ptr [0x104116a8], 0x104116d4 */
  w32((uint32_t)(0x104116a8), (0x104116d4u));
  /* 103e77a0 mov eax, dword ptr [0x104131cc] */
  EAX = (r32((uint32_t)(0x104131cc)));
  /* 103e77a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103e77a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e77aa jne 0x103e77b7 */
  if (!C.zf) goto L_103e77b7;
  /* 103e77ac mov edx, dword ptr [0x104116a8] */
  EDX = (r32((uint32_t)(0x104116a8)));
  /* 103e77b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103e77b5 jmp 0x103e77bf */
  goto L_103e77bf;
L_103e77b7:;
  /* 103e77b7 mov eax, dword ptr [0x104131cc] */
  EAX = (r32((uint32_t)(0x104131cc)));
  /* 103e77bc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_103e77bf:;
  /* 103e77bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e77c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103e77c5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 103e77c8 push edx */
  push32((uint32_t)(EDX));
  /* 103e77c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 103e77cc push eax */
  push32((uint32_t)(EAX));
  /* 103e77cd push 0 */
  push32((uint32_t)(0x0u));
  /* 103e77cf push 0 */
  push32((uint32_t)(0x0u));
  /* 103e77d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e77d4 push ecx */
  push32((uint32_t)(ECX));
  /* 103e77d5 call 0x103e7850 */
  push32(0x103e77dau); f_103e7850();
  /* 103e77da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e77dd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 103e77e2 push 0x1040ce4c */
  push32((uint32_t)(0x1040ce4cu));
  /* 103e77e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e77e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e77ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e77ef lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 103e77f2 push ecx */
  push32((uint32_t)(ECX));
  /* 103e77f3 call 0x103e56b0 */
  push32(0x103e77f8u); f_103e56b0();
  /* 103e77f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e77fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e77fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7802 jne 0x103e780e */
  if (!C.zf) goto L_103e780e;
  /* 103e7804 push 8 */
  push32((uint32_t)(0x8u));
  /* 103e7806 call 0x103e4620 */
  push32(0x103e780bu); f_103e4620();
  /* 103e780b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e780e:;
  /* 103e780e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 103e7811 push edx */
  push32((uint32_t)(EDX));
  /* 103e7812 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 103e7815 push eax */
  push32((uint32_t)(EAX));
  /* 103e7816 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7819 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e781c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 103e781f push eax */
  push32((uint32_t)(EAX));
  /* 103e7820 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7823 push ecx */
  push32((uint32_t)(ECX));
  /* 103e7824 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e7827 push edx */
  push32((uint32_t)(EDX));
  /* 103e7828 call 0x103e7850 */
  push32(0x103e782du); f_103e7850();
  /* 103e782d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7830 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7833 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7836 mov dword ptr [0x1041168c], eax */
  w32((uint32_t)(0x1041168c), (EAX));
  /* 103e783b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e783e mov dword ptr [0x10411690], ecx */
  w32((uint32_t)(0x10411690), (ECX));
  /* 103e7844 mov esp, ebp */
  ESP = (EBP);
  /* 103e7846 pop ebp */
  EBP = (pop32());
  /* 103e7847 ret  */
  ESPCHK(0x103e7770u, _esp0);
  ESP += 4; return;
}

/* FUN_10007850 @ 0x103e7850 (1060 bytes, 360 insns) */
void f_103e7850(void) {
  FTRACE(0x103e7850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e7850 push ebp */
  push32((uint32_t)(EBP));
  /* 103e7851 mov ebp, esp */
  EBP = (ESP);
  /* 103e7853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7856 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7859 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103e785f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e7862 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 103e7868 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e786b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e786e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7872 je 0x103e7885 */
  if (C.zf) goto L_103e7885;
  /* 103e7874 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e7877 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e787a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103e787c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e787f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7882 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_103e7885:;
  /* 103e7885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7888 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103e788b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e788e jne 0x103e795d */
  if (!C.zf) goto L_103e795d;
L_103e7894:;
  /* 103e7894 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7897 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e789a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e789d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e78a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103e78a3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e78a6 je 0x103e7922 */
  if (C.zf) goto L_103e7922;
  /* 103e78a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e78ab movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103e78ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e78b0 je 0x103e7922 */
  if (C.zf) goto L_103e7922;
  /* 103e78b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e78b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e78b7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103e78b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e78bb mov al, byte ptr [edx + 0x10412f01] */
  AL = (r8((uint32_t)(EDX + 0x10412f01)));
  /* 103e78c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103e78c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e78c6 je 0x103e78f7 */
  if (C.zf) goto L_103e78f7;
  /* 103e78c8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e78cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e78cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e78d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e78d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103e78d5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e78d9 je 0x103e78f7 */
  if (C.zf) goto L_103e78f7;
  /* 103e78db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e78de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e78e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103e78e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103e78e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e78e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e78eb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103e78ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e78f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e78f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103e78f7:;
  /* 103e78f7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e78fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e78fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e78ff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7902 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103e7904 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7908 je 0x103e791d */
  if (C.zf) goto L_103e791d;
  /* 103e790a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e790d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7910 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103e7912 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103e7914 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7917 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e791a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_103e791d:;
  /* 103e791d jmp 0x103e7894 */
  goto L_103e7894;
L_103e7922:;
  /* 103e7922 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7925 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e7927 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e792a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e792d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103e792f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7933 je 0x103e7944 */
  if (C.zf) goto L_103e7944;
  /* 103e7935 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7938 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 103e793b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e793e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7941 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_103e7944:;
  /* 103e7944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7947 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103e794a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e794d jne 0x103e7958 */
  if (!C.zf) goto L_103e7958;
  /* 103e794f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7952 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7955 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103e7958:;
  /* 103e7958 jmp 0x103e7a2c */
  goto L_103e7a2c;
L_103e795d:;
  /* 103e795d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7960 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e7962 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7965 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7968 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103e796a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e796e je 0x103e7983 */
  if (C.zf) goto L_103e7983;
  /* 103e7970 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7976 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103e7978 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103e797a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e797d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7980 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_103e7983:;
  /* 103e7983 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7986 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103e7988 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 103e798b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e798e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7991 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e7994 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7997 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e799d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e799f mov dl, byte ptr [ecx + 0x10412f01] */
  DL = (r8((uint32_t)(ECX + 0x10412f01)));
  /* 103e79a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103e79a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e79aa je 0x103e79db */
  if (C.zf) goto L_103e79db;
  /* 103e79ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e79af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e79b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e79b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e79b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103e79b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e79bd je 0x103e79d2 */
  if (C.zf) goto L_103e79d2;
  /* 103e79bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e79c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e79c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103e79c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103e79c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e79cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e79cf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_103e79d2:;
  /* 103e79d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e79d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e79d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103e79db:;
  /* 103e79db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e79de and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e79e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e79e7 je 0x103e7a07 */
  if (C.zf) goto L_103e7a07;
  /* 103e79e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e79ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e79f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e79f3 je 0x103e7a07 */
  if (C.zf) goto L_103e7a07;
  /* 103e79f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e79f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e79fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7a01 jne 0x103e795d */
  if (!C.zf) goto L_103e795d;
L_103e7a07:;
  /* 103e7a07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7a0a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e7a10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e7a12 jne 0x103e7a1f */
  if (!C.zf) goto L_103e7a1f;
  /* 103e7a14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7a17 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7a1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e7a1d jmp 0x103e7a2c */
  goto L_103e7a2c;
L_103e7a1f:;
  /* 103e7a1f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7a23 je 0x103e7a2c */
  if (C.zf) goto L_103e7a2c;
  /* 103e7a25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7a28 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_103e7a2c:;
  /* 103e7a2c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_103e7a33:;
  /* 103e7a33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7a36 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103e7a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e7a3b je 0x103e7a5e */
  if (C.zf) goto L_103e7a5e;
L_103e7a3d:;
  /* 103e7a3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7a40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103e7a43 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7a46 je 0x103e7a53 */
  if (C.zf) goto L_103e7a53;
  /* 103e7a48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7a4b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103e7a4e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7a51 jne 0x103e7a5e */
  if (!C.zf) goto L_103e7a5e;
L_103e7a53:;
  /* 103e7a53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7a56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7a59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e7a5c jmp 0x103e7a3d */
  goto L_103e7a3d;
L_103e7a5e:;
  /* 103e7a5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7a61 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103e7a64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e7a66 jne 0x103e7a6d */
  if (!C.zf) goto L_103e7a6d;
  /* 103e7a68 jmp 0x103e7c4b */
  goto L_103e7c4b;
L_103e7a6d:;
  /* 103e7a6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7a71 je 0x103e7a84 */
  if (C.zf) goto L_103e7a84;
  /* 103e7a73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e7a76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7a79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103e7a7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e7a7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7a81 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_103e7a84:;
  /* 103e7a84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e7a87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e7a89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7a8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e7a8f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_103e7a91:;
  /* 103e7a91 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 103e7a98 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_103e7a9f:;
  /* 103e7a9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7aa2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103e7aa5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7aa8 jne 0x103e7abe */
  if (!C.zf) goto L_103e7abe;
  /* 103e7aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7aad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7ab0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103e7ab3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e7ab6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7ab9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103e7abc jmp 0x103e7a9f */
  goto L_103e7a9f;
L_103e7abe:;
  /* 103e7abe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7ac1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103e7ac4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7ac7 jne 0x103e7b1a */
  if (!C.zf) goto L_103e7b1a;
  /* 103e7ac9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e7acc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e7ace mov ecx, 2 */
  ECX = (0x2u);
  /* 103e7ad3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103e7ad5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e7ad7 jne 0x103e7b12 */
  if (!C.zf) goto L_103e7b12;
  /* 103e7ad9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7add je 0x103e7aff */
  if (C.zf) goto L_103e7aff;
  /* 103e7adf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7ae2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103e7ae6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7ae9 jne 0x103e7af6 */
  if (!C.zf) goto L_103e7af6;
  /* 103e7aeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7aee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7af1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103e7af4 jmp 0x103e7afd */
  goto L_103e7afd;
L_103e7af6:;
  /* 103e7af6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103e7afd:;
  /* 103e7afd jmp 0x103e7b06 */
  goto L_103e7b06;
L_103e7aff:;
  /* 103e7aff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103e7b06:;
  /* 103e7b06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e7b08 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7b0c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 103e7b0f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_103e7b12:;
  /* 103e7b12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e7b15 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103e7b17 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_103e7b1a:;
  /* 103e7b1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e7b1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e7b20 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7b23 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103e7b26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e7b28 je 0x103e7b4e */
  if (C.zf) goto L_103e7b4e;
  /* 103e7b2a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7b2e je 0x103e7b3f */
  if (C.zf) goto L_103e7b3f;
  /* 103e7b30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7b33 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 103e7b36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7b39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7b3c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_103e7b3f:;
  /* 103e7b3f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7b42 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e7b44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7b47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7b4a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103e7b4c jmp 0x103e7b1a */
  goto L_103e7b1a;
L_103e7b4e:;
  /* 103e7b4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7b51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103e7b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e7b56 je 0x103e7b74 */
  if (C.zf) goto L_103e7b74;
  /* 103e7b58 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7b5c jne 0x103e7b79 */
  if (!C.zf) goto L_103e7b79;
  /* 103e7b5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7b61 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103e7b64 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7b67 je 0x103e7b74 */
  if (C.zf) goto L_103e7b74;
  /* 103e7b69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7b6c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103e7b6f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7b72 jne 0x103e7b79 */
  if (!C.zf) goto L_103e7b79;
L_103e7b74:;
  /* 103e7b74 jmp 0x103e7c24 */
  goto L_103e7c24;
L_103e7b79:;
  /* 103e7b79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7b7d je 0x103e7c16 */
  if (C.zf) goto L_103e7c16;
  /* 103e7b83 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7b87 je 0x103e7bdd */
  if (C.zf) goto L_103e7bdd;
  /* 103e7b89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7b8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7b8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103e7b90 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e7b92 mov cl, byte ptr [eax + 0x10412f01] */
  CL = (r8((uint32_t)(EAX + 0x10412f01)));
  /* 103e7b98 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103e7b9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e7b9d je 0x103e7bc8 */
  if (C.zf) goto L_103e7bc8;
  /* 103e7b9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7ba2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7ba5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103e7ba7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103e7ba9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7bac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7baf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 103e7bb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7bb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7bb8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e7bbb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7bbe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e7bc0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7bc3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7bc6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103e7bc8:;
  /* 103e7bc8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7bcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7bce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103e7bd0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103e7bd2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7bd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7bd8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103e7bdb jmp 0x103e7c09 */
  goto L_103e7c09;
L_103e7bdd:;
  /* 103e7bdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7be0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7be2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103e7be4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e7be6 mov cl, byte ptr [eax + 0x10412f01] */
  CL = (r8((uint32_t)(EAX + 0x10412f01)));
  /* 103e7bec and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103e7bef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e7bf1 je 0x103e7c09 */
  if (C.zf) goto L_103e7c09;
  /* 103e7bf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7bf6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7bf9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e7bfc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7bff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e7c01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7c04 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7c07 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103e7c09:;
  /* 103e7c09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7c0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e7c0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7c11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7c14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103e7c16:;
  /* 103e7c16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7c19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7c1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e7c1f jmp 0x103e7a91 */
  goto L_103e7a91;
L_103e7c24:;
  /* 103e7c24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7c28 je 0x103e7c39 */
  if (C.zf) goto L_103e7c39;
  /* 103e7c2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7c2d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 103e7c30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e7c33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7c36 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_103e7c39:;
  /* 103e7c39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7c3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e7c3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7c41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103e7c44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103e7c46 jmp 0x103e7a33 */
  goto L_103e7a33;
L_103e7c4b:;
  /* 103e7c4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7c4f je 0x103e7c63 */
  if (C.zf) goto L_103e7c63;
  /* 103e7c51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e7c54 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103e7c5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e7c5d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7c60 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_103e7c63:;
  /* 103e7c63 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e7c66 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e7c68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7c6b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e7c6e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103e7c70 mov esp, ebp */
  ESP = (EBP);
  /* 103e7c72 pop ebp */
  EBP = (pop32());
  /* 103e7c73 ret  */
  ESPCHK(0x103e7850u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c80 @ 0x103e7c80 (537 bytes, 173 insns) */
void f_103e7c80(void) {
  FTRACE(0x103e7c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e7c80 push ebp */
  push32((uint32_t)(EBP));
  /* 103e7c81 mov ebp, esp */
  EBP = (ESP);
  /* 103e7c83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7c86 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 103e7c8d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 103e7c94 cmp dword ptr [0x104117d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104117d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7c9b jne 0x103e7cda */
  if (!C.zf) goto L_103e7cda;
  /* 103e7c9d call dword ptr [0x1041435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041435c))), 0x103e7ca3u);
  /* 103e7ca3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103e7ca6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7caa je 0x103e7cb8 */
  if (C.zf) goto L_103e7cb8;
  /* 103e7cac mov dword ptr [0x104117d8], 1 */
  w32((uint32_t)(0x104117d8), (0x1u));
  /* 103e7cb6 jmp 0x103e7cda */
  goto L_103e7cda;
L_103e7cb8:;
  /* 103e7cb8 call dword ptr [0x10414360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414360))), 0x103e7cbeu);
  /* 103e7cbe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103e7cc1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7cc5 je 0x103e7cd3 */
  if (C.zf) goto L_103e7cd3;
  /* 103e7cc7 mov dword ptr [0x104117d8], 2 */
  w32((uint32_t)(0x104117d8), (0x2u));
  /* 103e7cd1 jmp 0x103e7cda */
  goto L_103e7cda;
L_103e7cd3:;
  /* 103e7cd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7cd5 jmp 0x103e7e95 */
  goto L_103e7e95;
L_103e7cda:;
  /* 103e7cda cmp dword ptr [0x104117d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104117d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7ce1 jne 0x103e7dde */
  if (!C.zf) goto L_103e7dde;
  /* 103e7ce7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7ceb jne 0x103e7d03 */
  if (!C.zf) goto L_103e7d03;
  /* 103e7ced call dword ptr [0x1041435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041435c))), 0x103e7cf3u);
  /* 103e7cf3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103e7cf6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7cfa jne 0x103e7d03 */
  if (!C.zf) goto L_103e7d03;
  /* 103e7cfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7cfe jmp 0x103e7e95 */
  goto L_103e7e95;
L_103e7d03:;
  /* 103e7d03 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e7d06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103e7d09:;
  /* 103e7d09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7d0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e7d0e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 103e7d11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e7d13 je 0x103e7d35 */
  if (C.zf) goto L_103e7d35;
  /* 103e7d15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7d18 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7d1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e7d1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7d21 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e7d23 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 103e7d26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e7d28 jne 0x103e7d33 */
  if (!C.zf) goto L_103e7d33;
  /* 103e7d2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7d2d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7d30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103e7d33:;
  /* 103e7d33 jmp 0x103e7d09 */
  goto L_103e7d09;
L_103e7d35:;
  /* 103e7d35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7d38 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7d3b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103e7d3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7d40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103e7d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7d49 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7d4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7d4e push edx */
  push32((uint32_t)(EDX));
  /* 103e7d4f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e7d52 push eax */
  push32((uint32_t)(EAX));
  /* 103e7d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7d57 call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103e7d5du);
  /* 103e7d5d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103e7d60 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7d64 je 0x103e7d84 */
  if (C.zf) goto L_103e7d84;
  /* 103e7d66 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 103e7d68 push 0x1040ce58 */
  push32((uint32_t)(0x1040ce58u));
  /* 103e7d6d push 2 */
  push32((uint32_t)(0x2u));
  /* 103e7d6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e7d72 push ecx */
  push32((uint32_t)(ECX));
  /* 103e7d73 call 0x103e56b0 */
  push32(0x103e7d78u); f_103e56b0();
  /* 103e7d78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7d7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103e7d7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7d82 jne 0x103e7d95 */
  if (!C.zf) goto L_103e7d95;
L_103e7d84:;
  /* 103e7d84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e7d87 push edx */
  push32((uint32_t)(EDX));
  /* 103e7d88 call dword ptr [0x10414368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414368))), 0x103e7d8eu);
  /* 103e7d8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7d90 jmp 0x103e7e95 */
  goto L_103e7e95;
L_103e7d95:;
  /* 103e7d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7d99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e7d9c push eax */
  push32((uint32_t)(EAX));
  /* 103e7d9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e7da0 push ecx */
  push32((uint32_t)(ECX));
  /* 103e7da1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7da4 push edx */
  push32((uint32_t)(EDX));
  /* 103e7da5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e7da8 push eax */
  push32((uint32_t)(EAX));
  /* 103e7da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7dab push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7dad call dword ptr [0x10414364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414364))), 0x103e7db3u);
  /* 103e7db3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e7db5 jne 0x103e7dcc */
  if (!C.zf) goto L_103e7dcc;
  /* 103e7db7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e7db9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e7dbc push ecx */
  push32((uint32_t)(ECX));
  /* 103e7dbd call 0x103e6140 */
  push32(0x103e7dc2u); f_103e6140();
  /* 103e7dc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7dc5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_103e7dcc:;
  /* 103e7dcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e7dcf push edx */
  push32((uint32_t)(EDX));
  /* 103e7dd0 call dword ptr [0x10414368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414368))), 0x103e7dd6u);
  /* 103e7dd6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e7dd9 jmp 0x103e7e95 */
  goto L_103e7e95;
L_103e7dde:;
  /* 103e7dde cmp dword ptr [0x104117d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104117d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7de5 jne 0x103e7e93 */
  if (!C.zf) goto L_103e7e93;
  /* 103e7deb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7def jne 0x103e7e07 */
  if (!C.zf) goto L_103e7e07;
  /* 103e7df1 call dword ptr [0x10414360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414360))), 0x103e7df7u);
  /* 103e7df7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103e7dfa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7dfe jne 0x103e7e07 */
  if (!C.zf) goto L_103e7e07;
  /* 103e7e00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7e02 jmp 0x103e7e95 */
  goto L_103e7e95;
L_103e7e07:;
  /* 103e7e07 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e7e0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103e7e0d:;
  /* 103e7e0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7e10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103e7e13 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e7e15 je 0x103e7e35 */
  if (C.zf) goto L_103e7e35;
  /* 103e7e17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7e1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7e1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e7e20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7e23 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103e7e26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e7e28 jne 0x103e7e33 */
  if (!C.zf) goto L_103e7e33;
  /* 103e7e2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7e2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7e30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103e7e33:;
  /* 103e7e33 jmp 0x103e7e0d */
  goto L_103e7e0d;
L_103e7e35:;
  /* 103e7e35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7e38 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7e3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7e3e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103e7e41 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 103e7e46 push 0x1040ce58 */
  push32((uint32_t)(0x1040ce58u));
  /* 103e7e4b push 2 */
  push32((uint32_t)(0x2u));
  /* 103e7e4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e7e50 push edx */
  push32((uint32_t)(EDX));
  /* 103e7e51 call 0x103e56b0 */
  push32(0x103e7e56u); f_103e56b0();
  /* 103e7e56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7e59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e7e5c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7e60 jne 0x103e7e70 */
  if (!C.zf) goto L_103e7e70;
  /* 103e7e62 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e7e65 push eax */
  push32((uint32_t)(EAX));
  /* 103e7e66 call dword ptr [0x104143a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143a0))), 0x103e7e6cu);
  /* 103e7e6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7e6e jmp 0x103e7e95 */
  goto L_103e7e95;
L_103e7e70:;
  /* 103e7e70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e7e73 push ecx */
  push32((uint32_t)(ECX));
  /* 103e7e74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e7e77 push edx */
  push32((uint32_t)(EDX));
  /* 103e7e78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7e7b push eax */
  push32((uint32_t)(EAX));
  /* 103e7e7c call 0x103ebf90 */
  push32(0x103e7e81u); f_103ebf90();
  /* 103e7e81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7e84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e7e87 push ecx */
  push32((uint32_t)(ECX));
  /* 103e7e88 call dword ptr [0x104143a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143a0))), 0x103e7e8eu);
  /* 103e7e8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e7e91 jmp 0x103e7e95 */
  goto L_103e7e95;
L_103e7e93:;
  /* 103e7e93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103e7e95:;
  /* 103e7e95 mov esp, ebp */
  ESP = (EBP);
  /* 103e7e97 pop ebp */
  EBP = (pop32());
  /* 103e7e98 ret  */
  ESPCHK(0x103e7c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea0 @ 0x103e7ea0 (77 bytes, 25 insns) */
void f_103e7ea0(void) {
  FTRACE(0x103e7ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e7ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e7ea1 mov ebp, esp */
  EBP = (ESP);
  /* 103e7ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7ea5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103e7eaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7eac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7eb0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 103e7eb3 push eax */
  push32((uint32_t)(EAX));
  /* 103e7eb4 call dword ptr [0x10414354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414354))), 0x103e7ebau);
  /* 103e7eba mov dword ptr [0x1041302c], eax */
  w32((uint32_t)(0x1041302c), (EAX));
  /* 103e7ebf cmp dword ptr [0x1041302c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1041302c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7ec6 jne 0x103e7ecc */
  if (!C.zf) goto L_103e7ecc;
  /* 103e7ec8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7eca jmp 0x103e7eeb */
  goto L_103e7eeb;
L_103e7ecc:;
  /* 103e7ecc call 0x103e9950 */
  push32(0x103e7ed1u); f_103e9950();
  /* 103e7ed1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e7ed3 jne 0x103e7ee6 */
  if (!C.zf) goto L_103e7ee6;
  /* 103e7ed5 mov ecx, dword ptr [0x1041302c] */
  ECX = (r32((uint32_t)(0x1041302c)));
  /* 103e7edb push ecx */
  push32((uint32_t)(ECX));
  /* 103e7edc call dword ptr [0x10414358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414358))), 0x103e7ee2u);
  /* 103e7ee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e7ee4 jmp 0x103e7eeb */
  goto L_103e7eeb;
L_103e7ee6:;
  /* 103e7ee6 mov eax, 1 */
  EAX = (0x1u);
L_103e7eeb:;
  /* 103e7eeb pop ebp */
  EBP = (pop32());
  /* 103e7eec ret  */
  ESPCHK(0x103e7ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef0 @ 0x103e7ef0 (156 bytes, 48 insns) */
void f_103e7ef0(void) {
  FTRACE(0x103e7ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e7ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e7ef1 mov ebp, esp */
  EBP = (ESP);
  /* 103e7ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7ef6 mov eax, dword ptr [0x10413028] */
  EAX = (r32((uint32_t)(0x10413028)));
  /* 103e7efb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e7efe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103e7f05 jmp 0x103e7f10 */
  goto L_103e7f10;
L_103e7f07:;
  /* 103e7f07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7f0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7f0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103e7f10:;
  /* 103e7f10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e7f13 cmp edx, dword ptr [0x10413024] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10413024))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7f19 jge 0x103e7f66 */
  if ((C.sf==C.of)) goto L_103e7f66;
  /* 103e7f1b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 103e7f20 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 103e7f25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7f28 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103e7f2b push ecx */
  push32((uint32_t)(ECX));
  /* 103e7f2c call dword ptr [0x1041434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041434c))), 0x103e7f32u);
  /* 103e7f32 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103e7f37 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7f39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7f3c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103e7f3f push eax */
  push32((uint32_t)(EAX));
  /* 103e7f40 call dword ptr [0x1041434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041434c))), 0x103e7f46u);
  /* 103e7f46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7f49 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103e7f4c push edx */
  push32((uint32_t)(EDX));
  /* 103e7f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7f4f mov eax, dword ptr [0x1041302c] */
  EAX = (r32((uint32_t)(0x1041302c)));
  /* 103e7f54 push eax */
  push32((uint32_t)(EAX));
  /* 103e7f55 call dword ptr [0x10414350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414350))), 0x103e7f5bu);
  /* 103e7f5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7f5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7f61 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103e7f64 jmp 0x103e7f07 */
  goto L_103e7f07;
L_103e7f66:;
  /* 103e7f66 mov edx, dword ptr [0x10413028] */
  EDX = (r32((uint32_t)(0x10413028)));
  /* 103e7f6c push edx */
  push32((uint32_t)(EDX));
  /* 103e7f6d push 0 */
  push32((uint32_t)(0x0u));
  /* 103e7f6f mov eax, dword ptr [0x1041302c] */
  EAX = (r32((uint32_t)(0x1041302c)));
  /* 103e7f74 push eax */
  push32((uint32_t)(EAX));
  /* 103e7f75 call dword ptr [0x10414350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414350))), 0x103e7f7bu);
  /* 103e7f7b mov ecx, dword ptr [0x1041302c] */
  ECX = (r32((uint32_t)(0x1041302c)));
  /* 103e7f81 push ecx */
  push32((uint32_t)(ECX));
  /* 103e7f82 call dword ptr [0x10414358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414358))), 0x103e7f88u);
  /* 103e7f88 mov esp, ebp */
  ESP = (EBP);
  /* 103e7f8a pop ebp */
  EBP = (pop32());
  /* 103e7f8b ret  */
  ESPCHK(0x103e7ef0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x103e7f90 (73 bytes, 19 insns) */
void f_103e7f90(void) {
  FTRACE(0x103e7f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e7f90 push ebp */
  push32((uint32_t)(EBP));
  /* 103e7f91 mov ebp, esp */
  EBP = (ESP);
  /* 103e7f93 cmp dword ptr [0x1041166c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1041166c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7f9a je 0x103e7fae */
  if (C.zf) goto L_103e7fae;
  /* 103e7f9c cmp dword ptr [0x1041166c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1041166c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7fa3 jne 0x103e7fd7 */
  if (!C.zf) goto L_103e7fd7;
  /* 103e7fa5 cmp dword ptr [0x10411670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10411670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7fac jne 0x103e7fd7 */
  if (!C.zf) goto L_103e7fd7;
L_103e7fae:;
  /* 103e7fae push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 103e7fb3 call 0x103e7fe0 */
  push32(0x103e7fb8u); f_103e7fe0();
  /* 103e7fb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7fbb cmp dword ptr [0x104117dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104117dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e7fc2 je 0x103e7fca */
  if (C.zf) goto L_103e7fca;
  /* 103e7fc4 call dword ptr [0x104117dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104117dc))), 0x103e7fcau);
L_103e7fca:;
  /* 103e7fca push 0xff */
  push32((uint32_t)(0xffu));
  /* 103e7fcf call 0x103e7fe0 */
  push32(0x103e7fd4u); f_103e7fe0();
  /* 103e7fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e7fd7:;
  /* 103e7fd7 pop ebp */
  EBP = (pop32());
  /* 103e7fd8 ret  */
  ESPCHK(0x103e7f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe0 @ 0x103e7fe0 (447 bytes, 131 insns) */
void f_103e7fe0(void) {
  FTRACE(0x103e7fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e7fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e7fe1 mov ebp, esp */
  EBP = (ESP);
  /* 103e7fe3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e7fe9 push ebx */
  push32((uint32_t)(EBX));
  /* 103e7fea push esi */
  push32((uint32_t)(ESI));
  /* 103e7feb push edi */
  push32((uint32_t)(EDI));
  /* 103e7fec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103e7ff3 jmp 0x103e7ffe */
  goto L_103e7ffe;
L_103e7ff5:;
  /* 103e7ff5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e7ff8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e7ffb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103e7ffe:;
  /* 103e7ffe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8002 jae 0x103e8017 */
  if (!C.cf) goto L_103e8017;
  /* 103e8004 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e800a cmp edx, dword ptr [ecx*8 + 0x1040fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1040fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8011 jne 0x103e8015 */
  if (!C.zf) goto L_103e8015;
  /* 103e8013 jmp 0x103e8017 */
  goto L_103e8017;
L_103e8015:;
  /* 103e8015 jmp 0x103e7ff5 */
  goto L_103e7ff5;
L_103e8017:;
  /* 103e8017 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e801a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e801d cmp ecx, dword ptr [eax*8 + 0x1040fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1040fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8024 jne 0x103e8198 */
  if (!C.zf) goto L_103e8198;
  /* 103e802a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8031 je 0x103e8054 */
  if (C.zf) goto L_103e8054;
  /* 103e8033 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8036 mov eax, dword ptr [edx*8 + 0x1040fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1040fab4)));
  /* 103e803d push eax */
  push32((uint32_t)(EAX));
  /* 103e803e push 0 */
  push32((uint32_t)(0x0u));
  /* 103e8040 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e8042 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e8044 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8046 call 0x103e4770 */
  push32(0x103e804bu); f_103e4770();
  /* 103e804b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e804e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8051 jne 0x103e8054 */
  if (!C.zf) goto L_103e8054;
  /* 103e8053 int3  */
  x86_unimpl("int3 @ 0x103e8053");
L_103e8054:;
  /* 103e8054 cmp dword ptr [0x1041166c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1041166c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e805b je 0x103e806f */
  if (C.zf) goto L_103e806f;
  /* 103e805d cmp dword ptr [0x1041166c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1041166c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8064 jne 0x103e80a8 */
  if (!C.zf) goto L_103e80a8;
  /* 103e8066 cmp dword ptr [0x10411670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10411670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e806d jne 0x103e80a8 */
  if (!C.zf) goto L_103e80a8;
L_103e806f:;
  /* 103e806f push 0 */
  push32((uint32_t)(0x0u));
  /* 103e8071 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 103e8074 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8075 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8078 mov eax, dword ptr [edx*8 + 0x1040fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1040fab4)));
  /* 103e807f push eax */
  push32((uint32_t)(EAX));
  /* 103e8080 call 0x103e84e0 */
  push32(0x103e8085u); f_103e84e0();
  /* 103e8085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8088 push eax */
  push32((uint32_t)(EAX));
  /* 103e8089 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e808c mov edx, dword ptr [ecx*8 + 0x1040fab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1040fab4)));
  /* 103e8093 push edx */
  push32((uint32_t)(EDX));
  /* 103e8094 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 103e8096 call dword ptr [0x10414378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414378))), 0x103e809cu);
  /* 103e809c push eax */
  push32((uint32_t)(EAX));
  /* 103e809d call dword ptr [0x1041437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041437c))), 0x103e80a3u);
  /* 103e80a3 jmp 0x103e8198 */
  goto L_103e8198;
L_103e80a8:;
  /* 103e80a8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e80af je 0x103e8198 */
  if (C.zf) goto L_103e8198;
  /* 103e80b5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 103e80ba lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 103e80c0 push eax */
  push32((uint32_t)(EAX));
  /* 103e80c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e80c3 call dword ptr [0x10414394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414394))), 0x103e80c9u);
  /* 103e80c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e80cb jne 0x103e80e1 */
  if (!C.zf) goto L_103e80e1;
  /* 103e80cd push 0x1040c6c0 */
  push32((uint32_t)(0x1040c6c0u));
  /* 103e80d2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 103e80d8 push ecx */
  push32((uint32_t)(ECX));
  /* 103e80d9 call 0x103e8660 */
  push32(0x103e80deu); f_103e8660();
  /* 103e80de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e80e1:;
  /* 103e80e1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 103e80e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103e80ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e80ed push eax */
  push32((uint32_t)(EAX));
  /* 103e80ee call 0x103e84e0 */
  push32(0x103e80f3u); f_103e84e0();
  /* 103e80f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e80f6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e80f9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e80fc jbe 0x103e812a */
  if ((C.cf||C.zf)) goto L_103e812a;
  /* 103e80fe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 103e8104 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8105 call 0x103e84e0 */
  push32(0x103e810au); f_103e84e0();
  /* 103e810a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e810d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e8110 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 103e8114 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e8117 push 3 */
  push32((uint32_t)(0x3u));
  /* 103e8119 push 0x1040c6bc */
  push32((uint32_t)(0x1040c6bcu));
  /* 103e811e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e8121 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8122 call 0x103e8ed0 */
  push32(0x103e8127u); f_103e8ed0();
  /* 103e8127 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e812a:;
  /* 103e812a push 0x1040d114 */
  push32((uint32_t)(0x1040d114u));
  /* 103e812f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 103e8135 push edx */
  push32((uint32_t)(EDX));
  /* 103e8136 call 0x103e8660 */
  push32(0x103e813bu); f_103e8660();
  /* 103e813b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e813e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e8141 push eax */
  push32((uint32_t)(EAX));
  /* 103e8142 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 103e8148 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8149 call 0x103e8670 */
  push32(0x103e814eu); f_103e8670();
  /* 103e814e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8151 push 0x1040c634 */
  push32((uint32_t)(0x1040c634u));
  /* 103e8156 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 103e815c push edx */
  push32((uint32_t)(EDX));
  /* 103e815d call 0x103e8670 */
  push32(0x103e8162u); f_103e8670();
  /* 103e8162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8165 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8168 mov ecx, dword ptr [eax*8 + 0x1040fab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1040fab4)));
  /* 103e816f push ecx */
  push32((uint32_t)(ECX));
  /* 103e8170 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 103e8176 push edx */
  push32((uint32_t)(EDX));
  /* 103e8177 call 0x103e8670 */
  push32(0x103e817cu); f_103e8670();
  /* 103e817c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e817f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 103e8184 push 0x1040d0ec */
  push32((uint32_t)(0x1040d0ecu));
  /* 103e8189 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 103e818f push eax */
  push32((uint32_t)(EAX));
  /* 103e8190 call 0x103e8e10 */
  push32(0x103e8195u); f_103e8e10();
  /* 103e8195 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e8198:;
  /* 103e8198 pop edi */
  EDI = (pop32());
  /* 103e8199 pop esi */
  ESI = (pop32());
  /* 103e819a pop ebx */
  EBX = (pop32());
  /* 103e819b mov esp, ebp */
  ESP = (EBP);
  /* 103e819d pop ebp */
  EBP = (pop32());
  /* 103e819e ret  */
  ESPCHK(0x103e7fe0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x103e81a0 (80 bytes, 27 insns) */
void f_103e81a0(void) {
  FTRACE(0x103e81a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e81a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e81a1 mov ebp, esp */
  EBP = (ESP);
  /* 103e81a3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e81a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103e81ab jmp 0x103e81b6 */
  goto L_103e81b6;
L_103e81ad:;
  /* 103e81ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e81b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e81b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e81b6:;
  /* 103e81b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e81ba jae 0x103e81cf */
  if (!C.cf) goto L_103e81cf;
  /* 103e81bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e81bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e81c2 cmp edx, dword ptr [ecx*8 + 0x1040fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1040fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e81c9 jne 0x103e81cd */
  if (!C.zf) goto L_103e81cd;
  /* 103e81cb jmp 0x103e81cf */
  goto L_103e81cf;
L_103e81cd:;
  /* 103e81cd jmp 0x103e81ad */
  goto L_103e81ad;
L_103e81cf:;
  /* 103e81cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e81d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e81d5 cmp ecx, dword ptr [eax*8 + 0x1040fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1040fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e81dc jne 0x103e81ea */
  if (!C.zf) goto L_103e81ea;
  /* 103e81de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e81e1 mov eax, dword ptr [edx*8 + 0x1040fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1040fab4)));
  /* 103e81e8 jmp 0x103e81ec */
  goto L_103e81ec;
L_103e81ea:;
  /* 103e81ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103e81ec:;
  /* 103e81ec mov esp, ebp */
  ESP = (EBP);
  /* 103e81ee pop ebp */
  EBP = (pop32());
  /* 103e81ef ret  */
  ESPCHK(0x103e81a0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x103e81f0 (66 bytes, 28 insns) */
void f_103e81f0(void) {
  FTRACE(0x103e81f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e81f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e81f1 mov ebp, esp */
  EBP = (ESP);
  /* 103e81f3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e81f7 jne 0x103e8217 */
  if (!C.zf) goto L_103e8217;
  /* 103e81f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e81fd jge 0x103e8217 */
  if ((C.sf==C.of)) goto L_103e8217;
  /* 103e81ff push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8201 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e8204 push eax */
  push32((uint32_t)(EAX));
  /* 103e8205 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8208 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e820c push edx */
  push32((uint32_t)(EDX));
  /* 103e820d call 0x103e8240 */
  push32(0x103e8212u); f_103e8240();
  /* 103e8212 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8215 jmp 0x103e822d */
  goto L_103e822d;
L_103e8217:;
  /* 103e8217 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e8219 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e821c push eax */
  push32((uint32_t)(EAX));
  /* 103e821d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8220 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8221 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e8224 push edx */
  push32((uint32_t)(EDX));
  /* 103e8225 call 0x103e8240 */
  push32(0x103e822au); f_103e8240();
  /* 103e822a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e822d:;
  /* 103e822d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8230 pop ebp */
  EBP = (pop32());
  /* 103e8231 ret  */
  ESPCHK(0x103e81f0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x103e8240 (194 bytes, 71 insns) */
void f_103e8240(void) {
  FTRACE(0x103e8240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8240 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8241 mov ebp, esp */
  EBP = (ESP);
  /* 103e8243 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8246 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e824c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8250 je 0x103e8269 */
  if (C.zf) goto L_103e8269;
  /* 103e8252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8255 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 103e8258 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e825b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e825e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e8261 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e8264 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103e8266 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103e8269:;
  /* 103e8269 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e826c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103e826f:;
  /* 103e826f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e8272 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e8274 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103e8277 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103e827a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e827d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e827f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103e8282 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103e8285 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8289 jbe 0x103e82a1 */
  if ((C.cf||C.zf)) goto L_103e82a1;
  /* 103e828b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e828e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8294 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103e8296 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8299 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e829c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103e829f jmp 0x103e82b5 */
  goto L_103e82b5;
L_103e82a1:;
  /* 103e82a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e82a4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e82a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e82aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103e82ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e82af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e82b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103e82b5:;
  /* 103e82b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e82b9 ja 0x103e826f */
  if ((!C.cf&&!C.zf)) goto L_103e826f;
  /* 103e82bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e82be mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103e82c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e82c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e82c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e82ca:;
  /* 103e82ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e82cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103e82cf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 103e82d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e82d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e82d8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103e82da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103e82dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e82df mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 103e82e2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 103e82e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e82e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e82ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e82ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e82f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e82f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e82f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e82f9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e82fc jb 0x103e82ca */
  if (C.cf) goto L_103e82ca;
  /* 103e82fe mov esp, ebp */
  ESP = (EBP);
  /* 103e8300 pop ebp */
  EBP = (pop32());
  /* 103e8301 ret  */
  ESPCHK(0x103e8240u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x103e8310 (63 bytes, 24 insns) */
void f_103e8310(void) {
  FTRACE(0x103e8310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8310 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8311 mov ebp, esp */
  EBP = (ESP);
  /* 103e8313 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8314 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8318 jne 0x103e8329 */
  if (!C.zf) goto L_103e8329;
  /* 103e831a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e831e jge 0x103e8329 */
  if ((C.sf==C.of)) goto L_103e8329;
  /* 103e8320 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103e8327 jmp 0x103e8330 */
  goto L_103e8330;
L_103e8329:;
  /* 103e8329 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103e8330:;
  /* 103e8330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8333 push eax */
  push32((uint32_t)(EAX));
  /* 103e8334 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e8337 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8338 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e833b push edx */
  push32((uint32_t)(EDX));
  /* 103e833c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e833f push eax */
  push32((uint32_t)(EAX));
  /* 103e8340 call 0x103e8240 */
  push32(0x103e8345u); f_103e8240();
  /* 103e8345 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8348 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e834b mov esp, ebp */
  ESP = (EBP);
  /* 103e834d pop ebp */
  EBP = (pop32());
  /* 103e834e ret  */
  ESPCHK(0x103e8310u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x103e8350 (30 bytes, 14 insns) */
void f_103e8350(void) {
  FTRACE(0x103e8350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8350 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8351 mov ebp, esp */
  EBP = (ESP);
  /* 103e8353 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e8355 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e8358 push eax */
  push32((uint32_t)(EAX));
  /* 103e8359 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e835c push ecx */
  push32((uint32_t)(ECX));
  /* 103e835d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e8360 push edx */
  push32((uint32_t)(EDX));
  /* 103e8361 call 0x103e8240 */
  push32(0x103e8366u); f_103e8240();
  /* 103e8366 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8369 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e836c pop ebp */
  EBP = (pop32());
  /* 103e836d ret  */
  ESPCHK(0x103e8350u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x103e8370 (72 bytes, 28 insns) */
void f_103e8370(void) {
  FTRACE(0x103e8370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8370 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8371 mov ebp, esp */
  EBP = (ESP);
  /* 103e8373 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8374 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8378 jne 0x103e8391 */
  if (!C.zf) goto L_103e8391;
  /* 103e837a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e837e jg 0x103e8391 */
  if ((!C.zf&&C.sf==C.of)) goto L_103e8391;
  /* 103e8380 jl 0x103e8388 */
  if ((C.sf!=C.of)) goto L_103e8388;
  /* 103e8382 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8386 jae 0x103e8391 */
  if (!C.cf) goto L_103e8391;
L_103e8388:;
  /* 103e8388 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103e838f jmp 0x103e8398 */
  goto L_103e8398;
L_103e8391:;
  /* 103e8391 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103e8398:;
  /* 103e8398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e839b push eax */
  push32((uint32_t)(EAX));
  /* 103e839c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e839f push ecx */
  push32((uint32_t)(ECX));
  /* 103e83a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e83a3 push edx */
  push32((uint32_t)(EDX));
  /* 103e83a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e83a7 push eax */
  push32((uint32_t)(EAX));
  /* 103e83a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e83ab push ecx */
  push32((uint32_t)(ECX));
  /* 103e83ac call 0x103e83c0 */
  push32(0x103e83b1u); f_103e83c0();
  /* 103e83b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e83b4 mov esp, ebp */
  ESP = (EBP);
  /* 103e83b6 pop ebp */
  EBP = (pop32());
  /* 103e83b7 ret  */
  ESPCHK(0x103e8370u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x103e83c0 (242 bytes, 91 insns) */
void f_103e83c0(void) {
  FTRACE(0x103e83c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e83c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e83c1 mov ebp, esp */
  EBP = (ESP);
  /* 103e83c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e83c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e83c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e83cc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e83d0 je 0x103e83f4 */
  if (C.zf) goto L_103e83f4;
  /* 103e83d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e83d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 103e83d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e83db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e83de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e83e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e83e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103e83e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e83e9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e83ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103e83ee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103e83f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_103e83f4:;
  /* 103e83f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e83f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103e83fa:;
  /* 103e83fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e83fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e83ff push ecx */
  push32((uint32_t)(ECX));
  /* 103e8400 push eax */
  push32((uint32_t)(EAX));
  /* 103e8401 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8404 push edx */
  push32((uint32_t)(EDX));
  /* 103e8405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e8408 push eax */
  push32((uint32_t)(EAX));
  /* 103e8409 call 0x103ec340 */
  push32(0x103e840eu); f_103ec340();
  /* 103e840e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e8411 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e8414 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e8416 push edx */
  push32((uint32_t)(EDX));
  /* 103e8417 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8418 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e841b push eax */
  push32((uint32_t)(EAX));
  /* 103e841c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e841f push ecx */
  push32((uint32_t)(ECX));
  /* 103e8420 call 0x103ec2d0 */
  push32(0x103e8425u); f_103ec2d0();
  /* 103e8425 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103e8428 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 103e842b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e842f jbe 0x103e8447 */
  if ((C.cf||C.zf)) goto L_103e8447;
  /* 103e8431 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e8434 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8437 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e843a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103e843c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e843f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8442 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103e8445 jmp 0x103e845b */
  goto L_103e845b;
L_103e8447:;
  /* 103e8447 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e844a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e844d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8450 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103e8452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8458 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103e845b:;
  /* 103e845b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e845f ja 0x103e83fa */
  if ((!C.cf&&!C.zf)) goto L_103e83fa;
  /* 103e8461 jb 0x103e8469 */
  if (C.cf) goto L_103e8469;
  /* 103e8463 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8467 ja 0x103e83fa */
  if ((!C.cf&&!C.zf)) goto L_103e83fa;
L_103e8469:;
  /* 103e8469 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e846c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103e846f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8472 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8475 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e8478:;
  /* 103e8478 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e847b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103e847d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 103e8480 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8483 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8486 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103e8488 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103e848a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e848d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 103e8490 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 103e8492 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8495 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8498 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103e849b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e849e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e84a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e84a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e84a7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e84aa jb 0x103e8478 */
  if (C.cf) goto L_103e8478;
  /* 103e84ac mov esp, ebp */
  ESP = (EBP);
  /* 103e84ae pop ebp */
  EBP = (pop32());
  /* 103e84af ret 0x14 */
  ESPCHK(0x103e83c0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x103e84c0 (31 bytes, 15 insns) */
void f_103e84c0(void) {
  FTRACE(0x103e84c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e84c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e84c1 mov ebp, esp */
  EBP = (ESP);
  /* 103e84c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e84c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e84c8 push eax */
  push32((uint32_t)(EAX));
  /* 103e84c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e84cc push ecx */
  push32((uint32_t)(ECX));
  /* 103e84cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e84d0 push edx */
  push32((uint32_t)(EDX));
  /* 103e84d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e84d4 push eax */
  push32((uint32_t)(EAX));
  /* 103e84d5 call 0x103e83c0 */
  push32(0x103e84dau); f_103e83c0();
  /* 103e84da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e84dd pop ebp */
  EBP = (pop32());
  /* 103e84de ret  */
  ESPCHK(0x103e84c0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x103e84e0 (123 bytes, 44 insns) */
void f_103e84e0(void) {
  FTRACE(0x103e84e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e84e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103e84e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103e84ea je 0x103e8500 */
  if (C.zf) goto L_103e8500;
L_103e84ec:;
  /* 103e84ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 103e84ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103e84ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103e84f1 je 0x103e8533 */
  if (C.zf) goto L_103e8533;
  /* 103e84f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103e84f9 jne 0x103e84ec */
  if (!C.zf) goto L_103e84ec;
  /* 103e84fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_103e8500:;
  /* 103e8500 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103e8502 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103e8507 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8509 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e850c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103e850e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8511 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103e8516 je 0x103e8500 */
  if (C.zf) goto L_103e8500;
  /* 103e8518 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 103e851b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103e851d je 0x103e8551 */
  if (C.zf) goto L_103e8551;
  /* 103e851f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103e8521 je 0x103e8547 */
  if (C.zf) goto L_103e8547;
  /* 103e8523 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 103e8528 je 0x103e853d */
  if (C.zf) goto L_103e853d;
  /* 103e852a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 103e852f je 0x103e8533 */
  if (C.zf) goto L_103e8533;
  /* 103e8531 jmp 0x103e8500 */
  goto L_103e8500;
L_103e8533:;
  /* 103e8533 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 103e8536 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103e853a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e853c ret  */
  ESPCHK(0x103e84e0u, _esp0);
  ESP += 4; return;
L_103e853d:;
  /* 103e853d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 103e8540 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103e8544 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8546 ret  */
  ESPCHK(0x103e84e0u, _esp0);
  ESP += 4; return;
L_103e8547:;
  /* 103e8547 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 103e854a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103e854e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8550 ret  */
  ESPCHK(0x103e84e0u, _esp0);
  ESP += 4; return;
L_103e8551:;
  /* 103e8551 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 103e8554 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103e8558 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e855a ret  */
  ESPCHK(0x103e84e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008560 @ 0x103e8560 (249 bytes, 93 insns) */
void f_103e8560(void) {
  FTRACE(0x103e8560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8560 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8561 mov ebp, esp */
  EBP = (ESP);
  /* 103e8563 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8566 push ebx */
  push32((uint32_t)(EBX));
  /* 103e8567 push esi */
  push32((uint32_t)(ESI));
  /* 103e8568 push edi */
  push32((uint32_t)(EDI));
  /* 103e8569 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 103e856c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103e856f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 103e8572 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_103e8575:;
  /* 103e8575 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8579 jne 0x103e8599 */
  if (!C.zf) goto L_103e8599;
  /* 103e857b push 0x1040d14c */
  push32((uint32_t)(0x1040d14cu));
  /* 103e8580 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e8582 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 103e8584 push 0x1040d140 */
  push32((uint32_t)(0x1040d140u));
  /* 103e8589 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e858b call 0x103e4770 */
  push32(0x103e8590u); f_103e4770();
  /* 103e8590 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8593 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8596 jne 0x103e8599 */
  if (!C.zf) goto L_103e8599;
  /* 103e8598 int3  */
  x86_unimpl("int3 @ 0x103e8598");
L_103e8599:;
  /* 103e8599 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e859b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e859d jne 0x103e8575 */
  if (!C.zf) goto L_103e8575;
L_103e859f:;
  /* 103e859f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e85a3 jne 0x103e85c3 */
  if (!C.zf) goto L_103e85c3;
  /* 103e85a5 push 0x1040d130 */
  push32((uint32_t)(0x1040d130u));
  /* 103e85aa push 0 */
  push32((uint32_t)(0x0u));
  /* 103e85ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 103e85ae push 0x1040d140 */
  push32((uint32_t)(0x1040d140u));
  /* 103e85b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e85b5 call 0x103e4770 */
  push32(0x103e85bau); f_103e4770();
  /* 103e85ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e85bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e85c0 jne 0x103e85c3 */
  if (!C.zf) goto L_103e85c3;
  /* 103e85c2 int3  */
  x86_unimpl("int3 @ 0x103e85c2");
L_103e85c3:;
  /* 103e85c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e85c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e85c7 jne 0x103e859f */
  if (!C.zf) goto L_103e859f;
  /* 103e85c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e85cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 103e85d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e85d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e85d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103e85dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e85df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e85e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103e85e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e85e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e85ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103e85ed mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103e85f0 push edx */
  push32((uint32_t)(EDX));
  /* 103e85f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e85f4 push eax */
  push32((uint32_t)(EAX));
  /* 103e85f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e85f8 push ecx */
  push32((uint32_t)(ECX));
  /* 103e85f9 call 0x103ec640 */
  push32(0x103e85feu); f_103ec640();
  /* 103e85fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8601 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103e8604 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e8607 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103e860a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e860d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e8610 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103e8613 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e8616 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e861a jl 0x103e863e */
  if ((C.sf!=C.of)) goto L_103e863e;
  /* 103e861c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e861f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e8621 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 103e8624 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e8626 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e862c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 103e862f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e8632 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e8634 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8637 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e863a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103e863c jmp 0x103e864f */
  goto L_103e864f;
L_103e863e:;
  /* 103e863e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e8641 push eax */
  push32((uint32_t)(EAX));
  /* 103e8642 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e8644 call 0x103ec3c0 */
  push32(0x103e8649u); f_103ec3c0();
  /* 103e8649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e864c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_103e864f:;
  /* 103e864f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103e8652 pop edi */
  EDI = (pop32());
  /* 103e8653 pop esi */
  ESI = (pop32());
  /* 103e8654 pop ebx */
  EBX = (pop32());
  /* 103e8655 mov esp, ebp */
  ESP = (EBP);
  /* 103e8657 pop ebp */
  EBP = (pop32());
  /* 103e8658 ret  */
  ESPCHK(0x103e8560u, _esp0);
  ESP += 4; return;
}

/* FUN_10008660 @ 0x103e8660 (7 bytes, 3 insns) */
void f_103e8660(void) {
  FTRACE(0x103e8660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8660 push edi */
  push32((uint32_t)(EDI));
  /* 103e8661 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 103e8665 jmp 0x103e86d1 */
  jmp_ind(0x103e86d1u); return;
}

/* FUN_10008670 @ 0x103e8670 (224 bytes, 84 insns) */
void f_103e8670(void) {
  FTRACE(0x103e8670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8670 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103e8674 push edi */
  push32((uint32_t)(EDI));
  /* 103e8675 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103e867b je 0x103e868c */
  if (C.zf) goto L_103e868c;
L_103e867d:;
  /* 103e867d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 103e867f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103e8680 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103e8682 je 0x103e86bf */
  if (C.zf) goto L_103e86bf;
  /* 103e8684 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103e868a jne 0x103e867d */
  if (!C.zf) goto L_103e867d;
L_103e868c:;
  /* 103e868c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103e868e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103e8693 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8695 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e8698 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103e869a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e869d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103e86a2 je 0x103e868c */
  if (C.zf) goto L_103e868c;
  /* 103e86a4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 103e86a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103e86a9 je 0x103e86ce */
  if (C.zf) goto L_103e86ce;
  /* 103e86ab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103e86ad je 0x103e86c9 */
  if (C.zf) goto L_103e86c9;
  /* 103e86af test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 103e86b4 je 0x103e86c4 */
  if (C.zf) goto L_103e86c4;
  /* 103e86b6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 103e86bb je 0x103e86bf */
  if (C.zf) goto L_103e86bf;
  /* 103e86bd jmp 0x103e868c */
  goto L_103e868c;
L_103e86bf:;
  /* 103e86bf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 103e86c2 jmp 0x103e86d1 */
  goto L_103e86d1;
L_103e86c4:;
  /* 103e86c4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 103e86c7 jmp 0x103e86d1 */
  goto L_103e86d1;
L_103e86c9:;
  /* 103e86c9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 103e86cc jmp 0x103e86d1 */
  goto L_103e86d1;
L_103e86ce:;
  /* 103e86ce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_103e86d1:;
  /* 103e86d1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 103e86d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103e86db je 0x103e86f6 */
  if (C.zf) goto L_103e86f6;
L_103e86dd:;
  /* 103e86dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103e86df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103e86e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103e86e2 je 0x103e8748 */
  if (C.zf) goto L_103e8748;
  /* 103e86e4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 103e86e6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103e86e7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103e86ed jne 0x103e86dd */
  if (!C.zf) goto L_103e86dd;
  /* 103e86ef jmp 0x103e86f6 */
  goto L_103e86f6;
L_103e86f1:;
  /* 103e86f1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103e86f3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103e86f6:;
  /* 103e86f6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103e86fb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103e86fd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e86ff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e8702 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103e8704 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e8706 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8709 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103e870e je 0x103e86f1 */
  if (C.zf) goto L_103e86f1;
  /* 103e8710 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103e8712 je 0x103e8748 */
  if (C.zf) goto L_103e8748;
  /* 103e8714 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 103e8716 je 0x103e873f */
  if (C.zf) goto L_103e873f;
  /* 103e8718 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 103e871e je 0x103e8732 */
  if (C.zf) goto L_103e8732;
  /* 103e8720 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 103e8726 je 0x103e872a */
  if (C.zf) goto L_103e872a;
  /* 103e8728 jmp 0x103e86f1 */
  goto L_103e86f1;
L_103e872a:;
  /* 103e872a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103e872c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103e8730 pop edi */
  EDI = (pop32());
  /* 103e8731 ret  */
  ESPCHK(0x103e8670u, _esp0);
  ESP += 4; return;
L_103e8732:;
  /* 103e8732 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 103e8735 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103e8739 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 103e873d pop edi */
  EDI = (pop32());
  /* 103e873e ret  */
  ESPCHK(0x103e8670u, _esp0);
  ESP += 4; return;
L_103e873f:;
  /* 103e873f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 103e8742 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103e8746 pop edi */
  EDI = (pop32());
  /* 103e8747 ret  */
  ESPCHK(0x103e8670u, _esp0);
  ESP += 4; return;
L_103e8748:;
  /* 103e8748 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 103e874a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103e874e pop edi */
  EDI = (pop32());
  /* 103e874f ret  */
  ESPCHK(0x103e8670u, _esp0);
  ESP += 4; return;
}

/* FUN_10008750 @ 0x103e8750 (243 bytes, 91 insns) */
void f_103e8750(void) {
  FTRACE(0x103e8750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8750 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8751 mov ebp, esp */
  EBP = (ESP);
  /* 103e8753 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8756 push ebx */
  push32((uint32_t)(EBX));
  /* 103e8757 push esi */
  push32((uint32_t)(ESI));
  /* 103e8758 push edi */
  push32((uint32_t)(EDI));
  /* 103e8759 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 103e875c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103e875f:;
  /* 103e875f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8763 jne 0x103e8783 */
  if (!C.zf) goto L_103e8783;
  /* 103e8765 push 0x1040d14c */
  push32((uint32_t)(0x1040d14cu));
  /* 103e876a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e876c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 103e876e push 0x1040d15c */
  push32((uint32_t)(0x1040d15cu));
  /* 103e8773 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e8775 call 0x103e4770 */
  push32(0x103e877au); f_103e4770();
  /* 103e877a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e877d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8780 jne 0x103e8783 */
  if (!C.zf) goto L_103e8783;
  /* 103e8782 int3  */
  x86_unimpl("int3 @ 0x103e8782");
L_103e8783:;
  /* 103e8783 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e8785 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e8787 jne 0x103e875f */
  if (!C.zf) goto L_103e875f;
L_103e8789:;
  /* 103e8789 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e878d jne 0x103e87ad */
  if (!C.zf) goto L_103e87ad;
  /* 103e878f push 0x1040d130 */
  push32((uint32_t)(0x1040d130u));
  /* 103e8794 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e8796 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 103e8798 push 0x1040d15c */
  push32((uint32_t)(0x1040d15cu));
  /* 103e879d push 2 */
  push32((uint32_t)(0x2u));
  /* 103e879f call 0x103e4770 */
  push32(0x103e87a4u); f_103e4770();
  /* 103e87a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e87a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e87aa jne 0x103e87ad */
  if (!C.zf) goto L_103e87ad;
  /* 103e87ac int3  */
  x86_unimpl("int3 @ 0x103e87ac");
L_103e87ad:;
  /* 103e87ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e87af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e87b1 jne 0x103e8789 */
  if (!C.zf) goto L_103e8789;
  /* 103e87b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e87b6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 103e87bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e87c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e87c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103e87c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e87c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e87cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103e87ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e87d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e87d4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 103e87d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103e87da push ecx */
  push32((uint32_t)(ECX));
  /* 103e87db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e87de push edx */
  push32((uint32_t)(EDX));
  /* 103e87df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e87e2 push eax */
  push32((uint32_t)(EAX));
  /* 103e87e3 call 0x103ec640 */
  push32(0x103e87e8u); f_103ec640();
  /* 103e87e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e87eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103e87ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e87f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103e87f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e87f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e87fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103e87fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e8800 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8804 jl 0x103e8828 */
  if ((C.sf!=C.of)) goto L_103e8828;
  /* 103e8806 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e8809 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e880b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103e880e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103e8810 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103e8816 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103e8819 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e881c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e881e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8821 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e8824 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103e8826 jmp 0x103e8839 */
  goto L_103e8839;
L_103e8828:;
  /* 103e8828 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103e882b push edx */
  push32((uint32_t)(EDX));
  /* 103e882c push 0 */
  push32((uint32_t)(0x0u));
  /* 103e882e call 0x103ec3c0 */
  push32(0x103e8833u); f_103ec3c0();
  /* 103e8833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8836 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_103e8839:;
  /* 103e8839 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103e883c pop edi */
  EDI = (pop32());
  /* 103e883d pop esi */
  ESI = (pop32());
  /* 103e883e pop ebx */
  EBX = (pop32());
  /* 103e883f mov esp, ebp */
  ESP = (EBP);
  /* 103e8841 pop ebp */
  EBP = (pop32());
  /* 103e8842 ret  */
  ESPCHK(0x103e8750u, _esp0);
  ESP += 4; return;
}

/* FUN_10008850 @ 0x103e8850 (47 bytes, 17 insns) */
void f_103e8850(void) {
  FTRACE(0x103e8850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8850 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8851 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8856 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 103e885a jb 0x103e8870 */
  if (C.cf) goto L_103e8870;
L_103e885c:;
  /* 103e885c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8862 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8867 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 103e8869 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e886e jae 0x103e885c */
  if (!C.cf) goto L_103e885c;
L_103e8870:;
  /* 103e8870 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8872 mov eax, esp */
  EAX = (ESP);
  /* 103e8874 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 103e8876 mov esp, ecx */
  ESP = (ECX);
  /* 103e8878 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e887a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 103e887d push eax */
  push32((uint32_t)(EAX));
  /* 103e887e ret  */
  ESPCHK(0x103e8850u, _esp0);
  ESP += 4; return;
}

/* FUN_10008880 @ 0x103e8880 (507 bytes, 151 insns) [1 switch table(s)] */
void f_103e8880(void) {
  FTRACE(0x103e8880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8880 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8881 mov ebp, esp */
  EBP = (ESP);
  /* 103e8883 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8886 push esi */
  push32((uint32_t)(ESI));
  /* 103e8887 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e888b je 0x103e8893 */
  if (C.zf) goto L_103e8893;
  /* 103e888d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8891 jne 0x103e8898 */
  if (!C.zf) goto L_103e8898;
L_103e8893:;
  /* 103e8893 jmp 0x103e8a68 */
  goto L_103e8a68;
L_103e8898:;
  /* 103e8898 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e889c je 0x103e88b4 */
  if (C.zf) goto L_103e88b4;
  /* 103e889e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e88a2 je 0x103e88b4 */
  if (C.zf) goto L_103e88b4;
  /* 103e88a4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e88a8 je 0x103e88b4 */
  if (C.zf) goto L_103e88b4;
  /* 103e88aa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e88ae jne 0x103e8991 */
  if (!C.zf) goto L_103e8991;
L_103e88b4:;
  /* 103e88b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e88b6 call 0x103e90b0 */
  push32(0x103e88bbu); f_103e90b0();
  /* 103e88bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e88be cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e88c2 je 0x103e88ca */
  if (C.zf) goto L_103e88ca;
  /* 103e88c4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e88c8 jne 0x103e890f */
  if (!C.zf) goto L_103e890f;
L_103e88ca:;
  /* 103e88ca cmp dword ptr [0x104117f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104117f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e88d1 jne 0x103e890f */
  if (!C.zf) goto L_103e890f;
  /* 103e88d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e88d5 push 0x103e8ab0 */
  push32((uint32_t)(0x103e8ab0u));
  /* 103e88da call dword ptr [0x10414348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414348))), 0x103e88e0u);
  /* 103e88e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e88e3 jne 0x103e88f1 */
  if (!C.zf) goto L_103e88f1;
  /* 103e88e5 mov dword ptr [0x104117f0], 1 */
  w32((uint32_t)(0x104117f0), (0x1u));
  /* 103e88ef jmp 0x103e890f */
  goto L_103e890f;
L_103e88f1:;
  /* 103e88f1 call dword ptr [0x104143bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143bc))), 0x103e88f7u);
  /* 103e88f7 mov esi, eax */
  ESI = (EAX);
  /* 103e88f9 call 0x103ed590 */
  push32(0x103e88feu); f_103ed590();
  /* 103e88fe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 103e8900 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8902 call 0x103e9150 */
  push32(0x103e8907u); f_103e9150();
  /* 103e8907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e890a jmp 0x103e8a68 */
  goto L_103e8a68;
L_103e890f:;
  /* 103e890f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e8912 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103e8915 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e8918 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e891b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103e891e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8922 ja 0x103e8982 */
  if ((!C.cf&&!C.zf)) goto L_103e8982;
  /* 103e8924 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e8927 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e8929 mov dl, byte ptr [eax + 0x103e8a8f] */
  DL = (r8((uint32_t)(EAX + 0x103e8a8f)));
  /* 103e892f jmp dword ptr [edx*4 + 0x103e8a7b] */
  switch (EDX) {
    case 0: goto L_103e8936;
    case 1: goto L_103e8970;
    case 2: goto L_103e894a;
    case 3: goto L_103e895d;
    case 4: goto L_103e8982;
    default: x86_unimpl("switch@0x103e892f out of table"); return;
  }
L_103e8936:;
  /* 103e8936 mov ecx, dword ptr [0x104117e0] */
  ECX = (r32((uint32_t)(0x104117e0)));
  /* 103e893c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103e893f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8942 mov dword ptr [0x104117e0], edx */
  w32((uint32_t)(0x104117e0), (EDX));
  /* 103e8948 jmp 0x103e8982 */
  goto L_103e8982;
L_103e894a:;
  /* 103e894a mov eax, dword ptr [0x104117e4] */
  EAX = (r32((uint32_t)(0x104117e4)));
  /* 103e894f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e8952 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8955 mov dword ptr [0x104117e4], ecx */
  w32((uint32_t)(0x104117e4), (ECX));
  /* 103e895b jmp 0x103e8982 */
  goto L_103e8982;
L_103e895d:;
  /* 103e895d mov edx, dword ptr [0x104117e8] */
  EDX = (r32((uint32_t)(0x104117e8)));
  /* 103e8963 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103e8966 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8969 mov dword ptr [0x104117e8], eax */
  w32((uint32_t)(0x104117e8), (EAX));
  /* 103e896e jmp 0x103e8982 */
  goto L_103e8982;
L_103e8970:;
  /* 103e8970 mov ecx, dword ptr [0x104117ec] */
  ECX = (r32((uint32_t)(0x104117ec)));
  /* 103e8976 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103e8979 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e897c mov dword ptr [0x104117ec], edx */
  w32((uint32_t)(0x104117ec), (EDX));
L_103e8982:;
  /* 103e8982 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8984 call 0x103e9150 */
  push32(0x103e8989u); f_103e9150();
  /* 103e8989 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e898c jmp 0x103e8a63 */
  goto L_103e8a63;
L_103e8991:;
  /* 103e8991 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8995 je 0x103e89a8 */
  if (C.zf) goto L_103e89a8;
  /* 103e8997 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e899b je 0x103e89a8 */
  if (C.zf) goto L_103e89a8;
  /* 103e899d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e89a1 je 0x103e89a8 */
  if (C.zf) goto L_103e89a8;
  /* 103e89a3 jmp 0x103e8a68 */
  goto L_103e8a68;
L_103e89a8:;
  /* 103e89a8 call 0x103e50f0 */
  push32(0x103e89adu); f_103e50f0();
  /* 103e89ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e89b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e89b3 cmp dword ptr [eax + 0x50], 0x1040fc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1040fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e89ba jne 0x103e8a05 */
  if (!C.zf) goto L_103e8a05;
  /* 103e89bc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 103e89c1 push 0x1040d168 */
  push32((uint32_t)(0x1040d168u));
  /* 103e89c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e89c8 mov ecx, dword ptr [0x1040fc80] */
  ECX = (r32((uint32_t)(0x1040fc80)));
  /* 103e89ce push ecx */
  push32((uint32_t)(ECX));
  /* 103e89cf call 0x103e56b0 */
  push32(0x103e89d4u); f_103e56b0();
  /* 103e89d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e89d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e89da mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 103e89dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e89e0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e89e4 je 0x103e8a03 */
  if (C.zf) goto L_103e8a03;
  /* 103e89e6 mov ecx, dword ptr [0x1040fc80] */
  ECX = (r32((uint32_t)(0x1040fc80)));
  /* 103e89ec push ecx */
  push32((uint32_t)(ECX));
  /* 103e89ed push 0x1040fc00 */
  push32((uint32_t)(0x1040fc00u));
  /* 103e89f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e89f5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 103e89f8 push eax */
  push32((uint32_t)(EAX));
  /* 103e89f9 call 0x103ebf90 */
  push32(0x103e89feu); f_103ebf90();
  /* 103e89fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8a01 jmp 0x103e8a05 */
  goto L_103e8a05;
L_103e8a03:;
  /* 103e8a03 jmp 0x103e8a68 */
  goto L_103e8a68;
L_103e8a05:;
  /* 103e8a05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8a08 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 103e8a0b push edx */
  push32((uint32_t)(EDX));
  /* 103e8a0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e8a0f push eax */
  push32((uint32_t)(EAX));
  /* 103e8a10 call 0x103e8d90 */
  push32(0x103e8a15u); f_103e8d90();
  /* 103e8a15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8a18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e8a1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8a1f jne 0x103e8a23 */
  if (!C.zf) goto L_103e8a23;
  /* 103e8a21 jmp 0x103e8a68 */
  goto L_103e8a68;
L_103e8a23:;
  /* 103e8a23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8a26 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103e8a29 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103e8a2c:;
  /* 103e8a2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8a2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103e8a32 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8a35 jne 0x103e8a63 */
  if (!C.zf) goto L_103e8a63;
  /* 103e8a37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8a3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8a3d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103e8a40 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8a43 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8a46 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103e8a49 mov edx, dword ptr [0x1040fc84] */
  EDX = (r32((uint32_t)(0x1040fc84)));
  /* 103e8a4f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e8a52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8a55 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 103e8a58 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8a5a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8a5d jb 0x103e8a61 */
  if (C.cf) goto L_103e8a61;
  /* 103e8a5f jmp 0x103e8a63 */
  goto L_103e8a63;
L_103e8a61:;
  /* 103e8a61 jmp 0x103e8a2c */
  goto L_103e8a2c;
L_103e8a63:;
  /* 103e8a63 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e8a66 jmp 0x103e8a76 */
  goto L_103e8a76;
L_103e8a68:;
  /* 103e8a68 call 0x103ed580 */
  push32(0x103e8a6du); f_103ed580();
  /* 103e8a6d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 103e8a73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103e8a76:;
  /* 103e8a76 pop esi */
  ESI = (pop32());
  /* 103e8a77 mov esp, ebp */
  ESP = (EBP);
  /* 103e8a79 pop ebp */
  EBP = (pop32());
  /* 103e8a7a ret  */
  ESPCHK(0x103e8880u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ab0 @ 0x103e8ab0 (146 bytes, 45 insns) */
void f_103e8ab0(void) {
  FTRACE(0x103e8ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8ab1 mov ebp, esp */
  EBP = (ESP);
  /* 103e8ab3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8ab8 call 0x103e90b0 */
  push32(0x103e8abdu); f_103e90b0();
  /* 103e8abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8ac0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8ac4 jne 0x103e8ade */
  if (!C.zf) goto L_103e8ade;
  /* 103e8ac6 mov dword ptr [ebp - 8], 0x104117e0 */
  w32((uint32_t)(EBP + -0x8), (0x104117e0u));
  /* 103e8acd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8ad0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103e8ad2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103e8ad5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 103e8adc jmp 0x103e8af4 */
  goto L_103e8af4;
L_103e8ade:;
  /* 103e8ade mov dword ptr [ebp - 8], 0x104117e4 */
  w32((uint32_t)(EBP + -0x8), (0x104117e4u));
  /* 103e8ae5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8ae8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e8aea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e8aed mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_103e8af4:;
  /* 103e8af4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8af8 jne 0x103e8b08 */
  if (!C.zf) goto L_103e8b08;
  /* 103e8afa push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8afc call 0x103e9150 */
  push32(0x103e8b01u); f_103e9150();
  /* 103e8b01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8b04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e8b06 jmp 0x103e8b3c */
  goto L_103e8b3c;
L_103e8b08:;
  /* 103e8b08 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8b0c je 0x103e8b2d */
  if (C.zf) goto L_103e8b2d;
  /* 103e8b0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8b11 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 103e8b17 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8b19 call 0x103e9150 */
  push32(0x103e8b1eu); f_103e9150();
  /* 103e8b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8b24 push edx */
  push32((uint32_t)(EDX));
  /* 103e8b25 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x103e8b28u);
  /* 103e8b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8b2b jmp 0x103e8b37 */
  goto L_103e8b37;
L_103e8b2d:;
  /* 103e8b2d push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8b2f call 0x103e9150 */
  push32(0x103e8b34u); f_103e9150();
  /* 103e8b34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e8b37:;
  /* 103e8b37 mov eax, 1 */
  EAX = (0x1u);
L_103e8b3c:;
  /* 103e8b3c mov esp, ebp */
  ESP = (EBP);
  /* 103e8b3e pop ebp */
  EBP = (pop32());
  /* 103e8b3f ret 4 */
  ESPCHK(0x103e8ab0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008b50 @ 0x103e8b50 (522 bytes, 162 insns) [1 switch table(s)] */
void f_103e8b50(void) {
  FTRACE(0x103e8b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8b50 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8b51 mov ebp, esp */
  EBP = (ESP);
  /* 103e8b53 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8b56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103e8b5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e8b60 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103e8b63 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103e8b66 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8b69 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103e8b6c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8b70 ja 0x103e8c1e */
  if ((!C.cf&&!C.zf)) goto L_103e8c1e;
  /* 103e8b76 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103e8b79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e8b7b mov dl, byte ptr [eax + 0x103e8d72] */
  DL = (r8((uint32_t)(EAX + 0x103e8d72)));
  /* 103e8b81 jmp dword ptr [edx*4 + 0x103e8d5a] */
  switch (EDX) {
    case 0: goto L_103e8b88;
    case 1: goto L_103e8bf3;
    case 2: goto L_103e8bd9;
    case 3: goto L_103e8ba5;
    case 4: goto L_103e8bbf;
    case 5: goto L_103e8c1e;
    default: x86_unimpl("switch@0x103e8b81 out of table"); return;
  }
L_103e8b88:;
  /* 103e8b88 mov dword ptr [ebp - 0x18], 0x104117e0 */
  w32((uint32_t)(EBP + -0x18), (0x104117e0u));
  /* 103e8b8f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e8b92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e8b94 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103e8b97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e8b9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8b9d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e8ba0 jmp 0x103e8c26 */
  goto L_103e8c26;
L_103e8ba5:;
  /* 103e8ba5 mov dword ptr [ebp - 0x18], 0x104117e4 */
  w32((uint32_t)(EBP + -0x18), (0x104117e4u));
  /* 103e8bac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e8baf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e8bb1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103e8bb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e8bb7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8bba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e8bbd jmp 0x103e8c26 */
  goto L_103e8c26;
L_103e8bbf:;
  /* 103e8bbf mov dword ptr [ebp - 0x18], 0x104117e8 */
  w32((uint32_t)(EBP + -0x18), (0x104117e8u));
  /* 103e8bc6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e8bc9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e8bcb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103e8bce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e8bd1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8bd4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e8bd7 jmp 0x103e8c26 */
  goto L_103e8c26;
L_103e8bd9:;
  /* 103e8bd9 mov dword ptr [ebp - 0x18], 0x104117ec */
  w32((uint32_t)(EBP + -0x18), (0x104117ecu));
  /* 103e8be0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e8be3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e8be5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103e8be8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e8beb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8bee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103e8bf1 jmp 0x103e8c26 */
  goto L_103e8c26;
L_103e8bf3:;
  /* 103e8bf3 call 0x103e50f0 */
  push32(0x103e8bf8u); f_103e50f0();
  /* 103e8bf8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e8bfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8bfe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 103e8c01 push edx */
  push32((uint32_t)(EDX));
  /* 103e8c02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e8c05 push eax */
  push32((uint32_t)(EAX));
  /* 103e8c06 call 0x103e8d90 */
  push32(0x103e8c0bu); f_103e8d90();
  /* 103e8c0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8c0e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8c11 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103e8c14 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e8c17 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e8c19 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103e8c1c jmp 0x103e8c26 */
  goto L_103e8c26;
L_103e8c1e:;
  /* 103e8c1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e8c21 jmp 0x103e8d56 */
  goto L_103e8d56;
L_103e8c26:;
  /* 103e8c26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8c2a je 0x103e8c36 */
  if (C.zf) goto L_103e8c36;
  /* 103e8c2c push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8c2e call 0x103e90b0 */
  push32(0x103e8c33u); f_103e90b0();
  /* 103e8c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e8c36:;
  /* 103e8c36 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8c3a jne 0x103e8c53 */
  if (!C.zf) goto L_103e8c53;
  /* 103e8c3c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8c40 je 0x103e8c4c */
  if (C.zf) goto L_103e8c4c;
  /* 103e8c42 push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8c44 call 0x103e9150 */
  push32(0x103e8c49u); f_103e9150();
  /* 103e8c49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e8c4c:;
  /* 103e8c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e8c4e jmp 0x103e8d56 */
  goto L_103e8d56;
L_103e8c53:;
  /* 103e8c53 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8c57 jne 0x103e8c70 */
  if (!C.zf) goto L_103e8c70;
  /* 103e8c59 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8c5d je 0x103e8c69 */
  if (C.zf) goto L_103e8c69;
  /* 103e8c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8c61 call 0x103e9150 */
  push32(0x103e8c66u); f_103e9150();
  /* 103e8c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e8c69:;
  /* 103e8c69 push 3 */
  push32((uint32_t)(0x3u));
  /* 103e8c6b call 0x103e4e70 */
  push32(0x103e8c70u); f_103e4e70();
L_103e8c70:;
  /* 103e8c70 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8c74 je 0x103e8c82 */
  if (C.zf) goto L_103e8c82;
  /* 103e8c76 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8c7a je 0x103e8c82 */
  if (C.zf) goto L_103e8c82;
  /* 103e8c7c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8c80 jne 0x103e8cae */
  if (!C.zf) goto L_103e8cae;
L_103e8c82:;
  /* 103e8c82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8c85 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 103e8c88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103e8c8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8c8e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 103e8c95 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8c99 jne 0x103e8cae */
  if (!C.zf) goto L_103e8cae;
  /* 103e8c9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8c9e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 103e8ca1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103e8ca4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8ca7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_103e8cae:;
  /* 103e8cae cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8cb2 jne 0x103e8cf0 */
  if (!C.zf) goto L_103e8cf0;
  /* 103e8cb4 mov eax, dword ptr [0x1040fc78] */
  EAX = (r32((uint32_t)(0x1040fc78)));
  /* 103e8cb9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103e8cbc jmp 0x103e8cc7 */
  goto L_103e8cc7;
L_103e8cbe:;
  /* 103e8cbe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e8cc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8cc4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103e8cc7:;
  /* 103e8cc7 mov edx, dword ptr [0x1040fc78] */
  EDX = (r32((uint32_t)(0x1040fc78)));
  /* 103e8ccd add edx, dword ptr [0x1040fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1040fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8cd3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8cd6 jge 0x103e8cee */
  if ((C.sf==C.of)) goto L_103e8cee;
  /* 103e8cd8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e8cdb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e8cde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8ce1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 103e8ce4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 103e8cec jmp 0x103e8cbe */
  goto L_103e8cbe;
L_103e8cee:;
  /* 103e8cee jmp 0x103e8cf9 */
  goto L_103e8cf9;
L_103e8cf0:;
  /* 103e8cf0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e8cf3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_103e8cf9:;
  /* 103e8cf9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8cfd je 0x103e8d09 */
  if (C.zf) goto L_103e8d09;
  /* 103e8cff push 1 */
  push32((uint32_t)(0x1u));
  /* 103e8d01 call 0x103e9150 */
  push32(0x103e8d06u); f_103e9150();
  /* 103e8d06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e8d09:;
  /* 103e8d09 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8d0d jne 0x103e8d20 */
  if (!C.zf) goto L_103e8d20;
  /* 103e8d0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8d12 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 103e8d15 push edx */
  push32((uint32_t)(EDX));
  /* 103e8d16 push 8 */
  push32((uint32_t)(0x8u));
  /* 103e8d18 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x103e8d1bu);
  /* 103e8d1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8d1e jmp 0x103e8d2a */
  goto L_103e8d2a;
L_103e8d20:;
  /* 103e8d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e8d23 push eax */
  push32((uint32_t)(EAX));
  /* 103e8d24 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x103e8d27u);
  /* 103e8d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e8d2a:;
  /* 103e8d2a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8d2e je 0x103e8d3c */
  if (C.zf) goto L_103e8d3c;
  /* 103e8d30 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8d34 je 0x103e8d3c */
  if (C.zf) goto L_103e8d3c;
  /* 103e8d36 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8d3a jne 0x103e8d54 */
  if (!C.zf) goto L_103e8d54;
L_103e8d3c:;
  /* 103e8d3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8d3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e8d42 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 103e8d45 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8d49 jne 0x103e8d54 */
  if (!C.zf) goto L_103e8d54;
  /* 103e8d4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8d4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8d51 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_103e8d54:;
  /* 103e8d54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103e8d56:;
  /* 103e8d56 mov esp, ebp */
  ESP = (EBP);
  /* 103e8d58 pop ebp */
  EBP = (pop32());
  /* 103e8d59 ret  */
  ESPCHK(0x103e8b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d90 @ 0x103e8d90 (91 bytes, 35 insns) */
void f_103e8d90(void) {
  FTRACE(0x103e8d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8d90 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8d91 mov ebp, esp */
  EBP = (ESP);
  /* 103e8d93 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8d94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8d97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e8d9a:;
  /* 103e8d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8d9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103e8da0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8da3 je 0x103e8dc3 */
  if (C.zf) goto L_103e8dc3;
  /* 103e8da5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8da8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8dab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e8dae mov ecx, dword ptr [0x1040fc84] */
  ECX = (r32((uint32_t)(0x1040fc84)));
  /* 103e8db4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e8db7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8dba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8dbc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8dbf jae 0x103e8dc3 */
  if (!C.cf) goto L_103e8dc3;
  /* 103e8dc1 jmp 0x103e8d9a */
  goto L_103e8d9a;
L_103e8dc3:;
  /* 103e8dc3 mov eax, dword ptr [0x1040fc84] */
  EAX = (r32((uint32_t)(0x1040fc84)));
  /* 103e8dc8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e8dcb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8dce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8dd0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8dd3 jae 0x103e8de5 */
  if (!C.cf) goto L_103e8de5;
  /* 103e8dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8dd8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103e8ddb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8dde jne 0x103e8de5 */
  if (!C.zf) goto L_103e8de5;
  /* 103e8de0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8de3 jmp 0x103e8de7 */
  goto L_103e8de7;
L_103e8de5:;
  /* 103e8de5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103e8de7:;
  /* 103e8de7 mov esp, ebp */
  ESP = (EBP);
  /* 103e8de9 pop ebp */
  EBP = (pop32());
  /* 103e8dea ret  */
  ESPCHK(0x103e8d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008df0 @ 0x103e8df0 (13 bytes, 6 insns) */
void f_103e8df0(void) {
  FTRACE(0x103e8df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8df0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8df1 mov ebp, esp */
  EBP = (ESP);
  /* 103e8df3 call 0x103e50f0 */
  push32(0x103e8df8u); f_103e50f0();
  /* 103e8df8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8dfb pop ebp */
  EBP = (pop32());
  /* 103e8dfc ret  */
  ESPCHK(0x103e8df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e00 @ 0x103e8e00 (13 bytes, 6 insns) */
void f_103e8e00(void) {
  FTRACE(0x103e8e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8e00 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8e01 mov ebp, esp */
  EBP = (ESP);
  /* 103e8e03 call 0x103e50f0 */
  push32(0x103e8e08u); f_103e50f0();
  /* 103e8e08 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8e0b pop ebp */
  EBP = (pop32());
  /* 103e8e0c ret  */
  ESPCHK(0x103e8e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e10 @ 0x103e8e10 (187 bytes, 54 insns) */
void f_103e8e10(void) {
  FTRACE(0x103e8e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8e10 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8e11 mov ebp, esp */
  EBP = (ESP);
  /* 103e8e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e8e16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103e8e1d cmp dword ptr [0x104117f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104117f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8e24 jne 0x103e8e83 */
  if (!C.zf) goto L_103e8e83;
  /* 103e8e26 push 0x1040c594 */
  push32((uint32_t)(0x1040c594u));
  /* 103e8e2b call dword ptr [0x1041438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041438c))), 0x103e8e31u);
  /* 103e8e31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e8e34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8e38 je 0x103e8e57 */
  if (C.zf) goto L_103e8e57;
  /* 103e8e3a push 0x1040d198 */
  push32((uint32_t)(0x1040d198u));
  /* 103e8e3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8e42 push eax */
  push32((uint32_t)(EAX));
  /* 103e8e43 call dword ptr [0x10414388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414388))), 0x103e8e49u);
  /* 103e8e49 mov dword ptr [0x104117f4], eax */
  w32((uint32_t)(0x104117f4), (EAX));
  /* 103e8e4e cmp dword ptr [0x104117f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104117f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8e55 jne 0x103e8e5b */
  if (!C.zf) goto L_103e8e5b;
L_103e8e57:;
  /* 103e8e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e8e59 jmp 0x103e8ec7 */
  goto L_103e8ec7;
L_103e8e5b:;
  /* 103e8e5b push 0x1040d188 */
  push32((uint32_t)(0x1040d188u));
  /* 103e8e60 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8e63 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8e64 call dword ptr [0x10414388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414388))), 0x103e8e6au);
  /* 103e8e6a mov dword ptr [0x104117f8], eax */
  w32((uint32_t)(0x104117f8), (EAX));
  /* 103e8e6f push 0x1040d174 */
  push32((uint32_t)(0x1040d174u));
  /* 103e8e74 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e8e77 push edx */
  push32((uint32_t)(EDX));
  /* 103e8e78 call dword ptr [0x10414388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414388))), 0x103e8e7eu);
  /* 103e8e7e mov dword ptr [0x104117fc], eax */
  w32((uint32_t)(0x104117fc), (EAX));
L_103e8e83:;
  /* 103e8e83 cmp dword ptr [0x104117f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104117f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8e8a je 0x103e8e95 */
  if (C.zf) goto L_103e8e95;
  /* 103e8e8c call dword ptr [0x104117f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104117f8))), 0x103e8e92u);
  /* 103e8e92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e8e95:;
  /* 103e8e95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8e99 je 0x103e8eb1 */
  if (C.zf) goto L_103e8eb1;
  /* 103e8e9b cmp dword ptr [0x104117fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104117fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e8ea2 je 0x103e8eb1 */
  if (C.zf) goto L_103e8eb1;
  /* 103e8ea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8ea7 push eax */
  push32((uint32_t)(EAX));
  /* 103e8ea8 call dword ptr [0x104117fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104117fc))), 0x103e8eaeu);
  /* 103e8eae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e8eb1:;
  /* 103e8eb1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103e8eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8eb5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e8eb8 push edx */
  push32((uint32_t)(EDX));
  /* 103e8eb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e8ebc push eax */
  push32((uint32_t)(EAX));
  /* 103e8ebd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e8ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8ec1 call dword ptr [0x104117f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104117f4))), 0x103e8ec7u);
L_103e8ec7:;
  /* 103e8ec7 mov esp, ebp */
  ESP = (EBP);
  /* 103e8ec9 pop ebp */
  EBP = (pop32());
  /* 103e8eca ret  */
  ESPCHK(0x103e8e10u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x103e8ed0 (254 bytes, 109 insns) */
void f_103e8ed0(void) {
  FTRACE(0x103e8ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8ed0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 103e8ed4 push edi */
  push32((uint32_t)(EDI));
  /* 103e8ed5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103e8ed7 je 0x103e8f53 */
  if (C.zf) goto L_103e8f53;
  /* 103e8ed9 push esi */
  push32((uint32_t)(ESI));
  /* 103e8eda push ebx */
  push32((uint32_t)(EBX));
  /* 103e8edb mov ebx, ecx */
  EBX = (ECX);
  /* 103e8edd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 103e8ee1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 103e8ee7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 103e8eeb jne 0x103e8ef4 */
  if (!C.zf) goto L_103e8ef4;
  /* 103e8eed shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103e8ef0 jne 0x103e8f61 */
  if (!C.zf) goto L_103e8f61;
  /* 103e8ef2 jmp 0x103e8f15 */
  goto L_103e8f15;
L_103e8ef4:;
  /* 103e8ef4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103e8ef6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103e8ef7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103e8ef9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103e8efa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103e8efb je 0x103e8f22 */
  if (C.zf) goto L_103e8f22;
  /* 103e8efd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103e8eff je 0x103e8f2a */
  if (C.zf) goto L_103e8f2a;
  /* 103e8f01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 103e8f07 jne 0x103e8ef4 */
  if (!C.zf) goto L_103e8ef4;
  /* 103e8f09 mov ebx, ecx */
  EBX = (ECX);
  /* 103e8f0b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103e8f0e jne 0x103e8f61 */
  if (!C.zf) goto L_103e8f61;
L_103e8f10:;
  /* 103e8f10 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 103e8f13 je 0x103e8f22 */
  if (C.zf) goto L_103e8f22;
L_103e8f15:;
  /* 103e8f15 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103e8f17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103e8f18 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103e8f1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103e8f1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103e8f1d je 0x103e8f4e */
  if (C.zf) goto L_103e8f4e;
  /* 103e8f1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103e8f20 jne 0x103e8f15 */
  if (!C.zf) goto L_103e8f15;
L_103e8f22:;
  /* 103e8f22 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103e8f26 pop ebx */
  EBX = (pop32());
  /* 103e8f27 pop esi */
  ESI = (pop32());
  /* 103e8f28 pop edi */
  EDI = (pop32());
  /* 103e8f29 ret  */
  ESPCHK(0x103e8ed0u, _esp0);
  ESP += 4; return;
L_103e8f2a:;
  /* 103e8f2a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103e8f30 je 0x103e8f44 */
  if (C.zf) goto L_103e8f44;
L_103e8f32:;
  /* 103e8f32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103e8f34 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103e8f35 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103e8f36 je 0x103e8fc6 */
  if (C.zf) goto L_103e8fc6;
  /* 103e8f3c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103e8f42 jne 0x103e8f32 */
  if (!C.zf) goto L_103e8f32;
L_103e8f44:;
  /* 103e8f44 mov ebx, ecx */
  EBX = (ECX);
  /* 103e8f46 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103e8f49 jne 0x103e8fb7 */
  if (!C.zf) goto L_103e8fb7;
L_103e8f4b:;
  /* 103e8f4b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103e8f4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_103e8f4e:;
  /* 103e8f4e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103e8f4f jne 0x103e8f4b */
  if (!C.zf) goto L_103e8f4b;
  /* 103e8f51 pop ebx */
  EBX = (pop32());
  /* 103e8f52 pop esi */
  ESI = (pop32());
L_103e8f53:;
  /* 103e8f53 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103e8f57 pop edi */
  EDI = (pop32());
  /* 103e8f58 ret  */
  ESPCHK(0x103e8ed0u, _esp0);
  ESP += 4; return;
L_103e8f59:;
  /* 103e8f59 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103e8f5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8f5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103e8f5f je 0x103e8f10 */
  if (C.zf) goto L_103e8f10;
L_103e8f61:;
  /* 103e8f61 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103e8f66 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 103e8f68 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8f6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e8f6d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103e8f6f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 103e8f71 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8f74 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103e8f79 je 0x103e8f59 */
  if (C.zf) goto L_103e8f59;
  /* 103e8f7b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103e8f7d je 0x103e8fab */
  if (C.zf) goto L_103e8fab;
  /* 103e8f7f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 103e8f81 je 0x103e8fa1 */
  if (C.zf) goto L_103e8fa1;
  /* 103e8f83 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 103e8f89 je 0x103e8f97 */
  if (C.zf) goto L_103e8f97;
  /* 103e8f8b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 103e8f91 jne 0x103e8f59 */
  if (!C.zf) goto L_103e8f59;
  /* 103e8f93 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103e8f95 jmp 0x103e8faf */
  goto L_103e8faf;
L_103e8f97:;
  /* 103e8f97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e8f9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103e8f9f jmp 0x103e8faf */
  goto L_103e8faf;
L_103e8fa1:;
  /* 103e8fa1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103e8fa7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103e8fa9 jmp 0x103e8faf */
  goto L_103e8faf;
L_103e8fab:;
  /* 103e8fab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103e8fad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_103e8faf:;
  /* 103e8faf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8fb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e8fb4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103e8fb5 je 0x103e8fc1 */
  if (C.zf) goto L_103e8fc1;
L_103e8fb7:;
  /* 103e8fb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103e8fb9:;
  /* 103e8fb9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 103e8fbb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103e8fbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103e8fbf jne 0x103e8fb9 */
  if (!C.zf) goto L_103e8fb9;
L_103e8fc1:;
  /* 103e8fc1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 103e8fc4 jne 0x103e8f4b */
  if (!C.zf) goto L_103e8f4b;
L_103e8fc6:;
  /* 103e8fc6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103e8fca pop ebx */
  EBX = (pop32());
  /* 103e8fcb pop esi */
  ESI = (pop32());
  /* 103e8fcc pop edi */
  EDI = (pop32());
  /* 103e8fcd ret  */
  ESPCHK(0x103e8ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fd0 @ 0x103e8fd0 (55 bytes, 16 insns) */
void f_103e8fd0(void) {
  FTRACE(0x103e8fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e8fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e8fd1 mov ebp, esp */
  EBP = (ESP);
  /* 103e8fd3 mov eax, dword ptr [0x1040fb84] */
  EAX = (r32((uint32_t)(0x1040fb84)));
  /* 103e8fd8 push eax */
  push32((uint32_t)(EAX));
  /* 103e8fd9 call dword ptr [0x10414344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414344))), 0x103e8fdfu);
  /* 103e8fdf mov ecx, dword ptr [0x1040fb74] */
  ECX = (r32((uint32_t)(0x1040fb74)));
  /* 103e8fe5 push ecx */
  push32((uint32_t)(ECX));
  /* 103e8fe6 call dword ptr [0x10414344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414344))), 0x103e8fecu);
  /* 103e8fec mov edx, dword ptr [0x1040fb64] */
  EDX = (r32((uint32_t)(0x1040fb64)));
  /* 103e8ff2 push edx */
  push32((uint32_t)(EDX));
  /* 103e8ff3 call dword ptr [0x10414344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414344))), 0x103e8ff9u);
  /* 103e8ff9 mov eax, dword ptr [0x1040fb44] */
  EAX = (r32((uint32_t)(0x1040fb44)));
  /* 103e8ffe push eax */
  push32((uint32_t)(EAX));
  /* 103e8fff call dword ptr [0x10414344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414344))), 0x103e9005u);
  /* 103e9005 pop ebp */
  EBP = (pop32());
  /* 103e9006 ret  */
  ESPCHK(0x103e8fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009010 @ 0x103e9010 (159 bytes, 47 insns) */
void f_103e9010(void) {
  FTRACE(0x103e9010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9010 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9011 mov ebp, esp */
  EBP = (ESP);
  /* 103e9013 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9014 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103e901b jmp 0x103e9026 */
  goto L_103e9026;
L_103e901d:;
  /* 103e901d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9020 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9023 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e9026:;
  /* 103e9026 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e902a jge 0x103e9079 */
  if ((C.sf==C.of)) goto L_103e9079;
  /* 103e902c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e902f cmp dword ptr [ecx*4 + 0x1040fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1040fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9037 je 0x103e9077 */
  if (C.zf) goto L_103e9077;
  /* 103e9039 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e903d je 0x103e9077 */
  if (C.zf) goto L_103e9077;
  /* 103e903f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9043 je 0x103e9077 */
  if (C.zf) goto L_103e9077;
  /* 103e9045 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9049 je 0x103e9077 */
  if (C.zf) goto L_103e9077;
  /* 103e904b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e904f je 0x103e9077 */
  if (C.zf) goto L_103e9077;
  /* 103e9051 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9054 mov eax, dword ptr [edx*4 + 0x1040fb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1040fb40)));
  /* 103e905b push eax */
  push32((uint32_t)(EAX));
  /* 103e905c call dword ptr [0x104143cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143cc))), 0x103e9062u);
  /* 103e9062 push 2 */
  push32((uint32_t)(0x2u));
  /* 103e9064 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9067 mov edx, dword ptr [ecx*4 + 0x1040fb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1040fb40)));
  /* 103e906e push edx */
  push32((uint32_t)(EDX));
  /* 103e906f call 0x103e6140 */
  push32(0x103e9074u); f_103e6140();
  /* 103e9074 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e9077:;
  /* 103e9077 jmp 0x103e901d */
  goto L_103e901d;
L_103e9079:;
  /* 103e9079 mov eax, dword ptr [0x1040fb64] */
  EAX = (r32((uint32_t)(0x1040fb64)));
  /* 103e907e push eax */
  push32((uint32_t)(EAX));
  /* 103e907f call dword ptr [0x104143cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143cc))), 0x103e9085u);
  /* 103e9085 mov ecx, dword ptr [0x1040fb74] */
  ECX = (r32((uint32_t)(0x1040fb74)));
  /* 103e908b push ecx */
  push32((uint32_t)(ECX));
  /* 103e908c call dword ptr [0x104143cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143cc))), 0x103e9092u);
  /* 103e9092 mov edx, dword ptr [0x1040fb84] */
  EDX = (r32((uint32_t)(0x1040fb84)));
  /* 103e9098 push edx */
  push32((uint32_t)(EDX));
  /* 103e9099 call dword ptr [0x104143cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143cc))), 0x103e909fu);
  /* 103e909f mov eax, dword ptr [0x1040fb44] */
  EAX = (r32((uint32_t)(0x1040fb44)));
  /* 103e90a4 push eax */
  push32((uint32_t)(EAX));
  /* 103e90a5 call dword ptr [0x104143cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104143cc))), 0x103e90abu);
  /* 103e90ab mov esp, ebp */
  ESP = (EBP);
  /* 103e90ad pop ebp */
  EBP = (pop32());
  /* 103e90ae ret  */
  ESPCHK(0x103e9010u, _esp0);
  ESP += 4; return;
}

/* FUN_100090b0 @ 0x103e90b0 (151 bytes, 46 insns) */
void f_103e90b0(void) {
  FTRACE(0x103e90b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e90b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e90b1 mov ebp, esp */
  EBP = (ESP);
  /* 103e90b3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e90b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e90b7 cmp dword ptr [eax*4 + 0x1040fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1040fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e90bf jne 0x103e9132 */
  if (!C.zf) goto L_103e9132;
  /* 103e90c1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 103e90c6 push 0x1040d1a4 */
  push32((uint32_t)(0x1040d1a4u));
  /* 103e90cb push 2 */
  push32((uint32_t)(0x2u));
  /* 103e90cd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103e90cf call 0x103e56b0 */
  push32(0x103e90d4u); f_103e56b0();
  /* 103e90d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e90d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e90da cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e90de jne 0x103e90ea */
  if (!C.zf) goto L_103e90ea;
  /* 103e90e0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103e90e2 call 0x103e4620 */
  push32(0x103e90e7u); f_103e4620();
  /* 103e90e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e90ea:;
  /* 103e90ea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103e90ec call 0x103e90b0 */
  push32(0x103e90f1u); f_103e90b0();
  /* 103e90f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e90f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e90f7 cmp dword ptr [ecx*4 + 0x1040fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1040fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e90ff jne 0x103e911a */
  if (!C.zf) goto L_103e911a;
  /* 103e9101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9104 push edx */
  push32((uint32_t)(EDX));
  /* 103e9105 call dword ptr [0x10414344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414344))), 0x103e910bu);
  /* 103e910b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e910e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9111 mov dword ptr [eax*4 + 0x1040fb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1040fb40), (ECX));
  /* 103e9118 jmp 0x103e9128 */
  goto L_103e9128;
L_103e911a:;
  /* 103e911a push 2 */
  push32((uint32_t)(0x2u));
  /* 103e911c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e911f push edx */
  push32((uint32_t)(EDX));
  /* 103e9120 call 0x103e6140 */
  push32(0x103e9125u); f_103e6140();
  /* 103e9125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e9128:;
  /* 103e9128 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103e912a call 0x103e9150 */
  push32(0x103e912fu); f_103e9150();
  /* 103e912f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e9132:;
  /* 103e9132 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9135 mov ecx, dword ptr [eax*4 + 0x1040fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1040fb40)));
  /* 103e913c push ecx */
  push32((uint32_t)(ECX));
  /* 103e913d call dword ptr [0x10414340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414340))), 0x103e9143u);
  /* 103e9143 mov esp, ebp */
  ESP = (EBP);
  /* 103e9145 pop ebp */
  EBP = (pop32());
  /* 103e9146 ret  */
  ESPCHK(0x103e90b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009150 @ 0x103e9150 (22 bytes, 8 insns) */
void f_103e9150(void) {
  FTRACE(0x103e9150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9150 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9151 mov ebp, esp */
  EBP = (ESP);
  /* 103e9153 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9156 mov ecx, dword ptr [eax*4 + 0x1040fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1040fb40)));
  /* 103e915d push ecx */
  push32((uint32_t)(ECX));
  /* 103e915e call dword ptr [0x1041433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041433c))), 0x103e9164u);
  /* 103e9164 pop ebp */
  EBP = (pop32());
  /* 103e9165 ret  */
  ESPCHK(0x103e9150u, _esp0);
  ESP += 4; return;
}

/* FUN_10009170 @ 0x103e9170 (26 bytes, 10 insns) */
void f_103e9170(void) {
  FTRACE(0x103e9170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9170 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9171 mov ebp, esp */
  EBP = (ESP);
  /* 103e9173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9176 push eax */
  push32((uint32_t)(EAX));
  /* 103e9177 push 0 */
  push32((uint32_t)(0x0u));
  /* 103e9179 call dword ptr [0x10414338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414338))), 0x103e917fu);
  /* 103e917f push 0xff */
  push32((uint32_t)(0xffu));
  /* 103e9184 call dword ptr [0x10414398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414398))), 0x103e918au);
  /* 103e918a pop ebp */
  EBP = (pop32());
  /* 103e918b ret  */
  ESPCHK(0x103e9170u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x103e9190 (446 bytes, 130 insns) */
void f_103e9190(void) {
  FTRACE(0x103e9190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9190 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9191 mov ebp, esp */
  EBP = (ESP);
  /* 103e9193 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9196 call 0x103e50f0 */
  push32(0x103e919bu); f_103e50f0();
  /* 103e919b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e919e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e91a1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 103e91a4 push ecx */
  push32((uint32_t)(ECX));
  /* 103e91a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e91a8 push edx */
  push32((uint32_t)(EDX));
  /* 103e91a9 call 0x103e9350 */
  push32(0x103e91aeu); f_103e9350();
  /* 103e91ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e91b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103e91b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e91b8 je 0x103e91c3 */
  if (C.zf) goto L_103e91c3;
  /* 103e91ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e91bd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e91c1 jne 0x103e91d2 */
  if (!C.zf) goto L_103e91d2;
L_103e91c3:;
  /* 103e91c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e91c6 push ecx */
  push32((uint32_t)(ECX));
  /* 103e91c7 call dword ptr [0x10414334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414334))), 0x103e91cdu);
  /* 103e91cd jmp 0x103e934a */
  goto L_103e934a;
L_103e91d2:;
  /* 103e91d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e91d5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e91d9 jne 0x103e91ef */
  if (!C.zf) goto L_103e91ef;
  /* 103e91db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e91de mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 103e91e5 mov eax, 1 */
  EAX = (0x1u);
  /* 103e91ea jmp 0x103e934a */
  goto L_103e934a;
L_103e91ef:;
  /* 103e91ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e91f2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e91f6 jne 0x103e9200 */
  if (!C.zf) goto L_103e9200;
  /* 103e91f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103e91fb jmp 0x103e934a */
  goto L_103e934a;
L_103e9200:;
  /* 103e9200 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e9203 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103e9206 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e9209 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e920c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 103e920f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103e9212 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9215 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e9218 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 103e921b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e921e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9222 jne 0x103e9327 */
  if (!C.zf) goto L_103e9327;
  /* 103e9228 mov eax, dword ptr [0x1040fc78] */
  EAX = (r32((uint32_t)(0x1040fc78)));
  /* 103e922d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103e9230 jmp 0x103e923b */
  goto L_103e923b;
L_103e9232:;
  /* 103e9232 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e9235 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9238 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_103e923b:;
  /* 103e923b mov edx, dword ptr [0x1040fc78] */
  EDX = (r32((uint32_t)(0x1040fc78)));
  /* 103e9241 add edx, dword ptr [0x1040fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1040fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9247 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e924a jge 0x103e9262 */
  if ((C.sf==C.of)) goto L_103e9262;
  /* 103e924c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103e924f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e9252 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9255 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 103e9258 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 103e9260 jmp 0x103e9232 */
  goto L_103e9232;
L_103e9262:;
  /* 103e9262 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9265 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 103e9268 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103e926b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e926e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9274 jne 0x103e9285 */
  if (!C.zf) goto L_103e9285;
  /* 103e9276 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9279 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 103e9280 jmp 0x103e930d */
  goto L_103e930d;
L_103e9285:;
  /* 103e9285 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e9288 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e928e jne 0x103e929c */
  if (!C.zf) goto L_103e929c;
  /* 103e9290 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9293 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 103e929a jmp 0x103e930d */
  goto L_103e930d;
L_103e929c:;
  /* 103e929c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e929f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e92a5 jne 0x103e92b3 */
  if (!C.zf) goto L_103e92b3;
  /* 103e92a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e92aa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 103e92b1 jmp 0x103e930d */
  goto L_103e930d;
L_103e92b3:;
  /* 103e92b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e92b6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e92bc jne 0x103e92ca */
  if (!C.zf) goto L_103e92ca;
  /* 103e92be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e92c1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 103e92c8 jmp 0x103e930d */
  goto L_103e930d;
L_103e92ca:;
  /* 103e92ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e92cd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e92d3 jne 0x103e92e1 */
  if (!C.zf) goto L_103e92e1;
  /* 103e92d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e92d8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 103e92df jmp 0x103e930d */
  goto L_103e930d;
L_103e92e1:;
  /* 103e92e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e92e4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e92ea jne 0x103e92f8 */
  if (!C.zf) goto L_103e92f8;
  /* 103e92ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e92ef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 103e92f6 jmp 0x103e930d */
  goto L_103e930d;
L_103e92f8:;
  /* 103e92f8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e92fb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9301 jne 0x103e930d */
  if (!C.zf) goto L_103e930d;
  /* 103e9303 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9306 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_103e930d:;
  /* 103e930d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9310 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 103e9313 push edx */
  push32((uint32_t)(EDX));
  /* 103e9314 push 8 */
  push32((uint32_t)(0x8u));
  /* 103e9316 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x103e9319u);
  /* 103e9319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e931c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e931f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103e9322 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 103e9325 jmp 0x103e933e */
  goto L_103e933e;
L_103e9327:;
  /* 103e9327 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e932a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 103e9331 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103e9334 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103e9337 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9338 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x103e933bu);
  /* 103e933b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103e933e:;
  /* 103e933e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e9341 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103e9344 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 103e9347 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103e934a:;
  /* 103e934a mov esp, ebp */
  ESP = (EBP);
  /* 103e934c pop ebp */
  EBP = (pop32());
  /* 103e934d ret  */
  ESPCHK(0x103e9190u, _esp0);
  ESP += 4; return;
}

/* FUN_10009350 @ 0x103e9350 (89 bytes, 35 insns) */
void f_103e9350(void) {
  FTRACE(0x103e9350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9350 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9351 mov ebp, esp */
  EBP = (ESP);
  /* 103e9353 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9354 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e9357 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103e935a:;
  /* 103e935a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e935d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103e935f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9362 je 0x103e9382 */
  if (C.zf) goto L_103e9382;
  /* 103e9364 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9367 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e936a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e936d mov ecx, dword ptr [0x1040fc84] */
  ECX = (r32((uint32_t)(0x1040fc84)));
  /* 103e9373 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e9376 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e9379 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e937b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e937e jae 0x103e9382 */
  if (!C.cf) goto L_103e9382;
  /* 103e9380 jmp 0x103e935a */
  goto L_103e935a;
L_103e9382:;
  /* 103e9382 mov eax, dword ptr [0x1040fc84] */
  EAX = (r32((uint32_t)(0x1040fc84)));
  /* 103e9387 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103e938a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e938d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e938f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9392 jae 0x103e939e */
  if (!C.cf) goto L_103e939e;
  /* 103e9394 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e9397 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103e9399 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e939c je 0x103e93a2 */
  if (C.zf) goto L_103e93a2;
L_103e939e:;
  /* 103e939e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e93a0 jmp 0x103e93a5 */
  goto L_103e93a5;
L_103e93a2:;
  /* 103e93a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103e93a5:;
  /* 103e93a5 mov esp, ebp */
  ESP = (EBP);
  /* 103e93a7 pop ebp */
  EBP = (pop32());
  /* 103e93a8 ret  */
  ESPCHK(0x103e9350u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x103e93b0 (48 bytes, 17 insns) */
void f_103e93b0(void) {
  FTRACE(0x103e93b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e93b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e93b1 mov ebp, esp */
  EBP = (ESP);
  /* 103e93b3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e93b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e93b6 call 0x103e90b0 */
  push32(0x103e93bbu); f_103e90b0();
  /* 103e93bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e93be mov eax, dword ptr [0x10411864] */
  EAX = (r32((uint32_t)(0x10411864)));
  /* 103e93c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e93c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e93c9 mov dword ptr [0x10411864], ecx */
  w32((uint32_t)(0x10411864), (ECX));
  /* 103e93cf push 9 */
  push32((uint32_t)(0x9u));
  /* 103e93d1 call 0x103e9150 */
  push32(0x103e93d6u); f_103e9150();
  /* 103e93d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e93d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e93dc mov esp, ebp */
  ESP = (EBP);
  /* 103e93de pop ebp */
  EBP = (pop32());
  /* 103e93df ret  */
  ESPCHK(0x103e93b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093e0 @ 0x103e93e0 (10 bytes, 5 insns) */
void f_103e93e0(void) {
  FTRACE(0x103e93e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e93e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e93e1 mov ebp, esp */
  EBP = (ESP);
  /* 103e93e3 mov eax, dword ptr [0x10411864] */
  EAX = (r32((uint32_t)(0x10411864)));
  /* 103e93e8 pop ebp */
  EBP = (pop32());
  /* 103e93e9 ret  */
  ESPCHK(0x103e93e0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x103e93f0 (45 bytes, 19 insns) */
void f_103e93f0(void) {
  FTRACE(0x103e93f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e93f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e93f1 mov ebp, esp */
  EBP = (ESP);
  /* 103e93f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e93f4 mov eax, dword ptr [0x10411864] */
  EAX = (r32((uint32_t)(0x10411864)));
  /* 103e93f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e93fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9400 je 0x103e9410 */
  if (C.zf) goto L_103e9410;
  /* 103e9402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9405 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9406 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x103e9409u);
  /* 103e9409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e940c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e940e jne 0x103e9414 */
  if (!C.zf) goto L_103e9414;
L_103e9410:;
  /* 103e9410 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e9412 jmp 0x103e9419 */
  goto L_103e9419;
L_103e9414:;
  /* 103e9414 mov eax, 1 */
  EAX = (0x1u);
L_103e9419:;
  /* 103e9419 mov esp, ebp */
  ESP = (EBP);
  /* 103e941b pop ebp */
  EBP = (pop32());
  /* 103e941c ret  */
  ESPCHK(0x103e93f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x103e9420 (88 bytes, 40 insns) */
void f_103e9420(void) {
  FTRACE(0x103e9420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9420 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 103e9424 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103e9428 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e942a je 0x103e9473 */
  if (C.zf) goto L_103e9473;
  /* 103e942c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e942e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 103e9432 push edi */
  push32((uint32_t)(EDI));
  /* 103e9433 mov edi, ecx */
  EDI = (ECX);
  /* 103e9435 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9438 jb 0x103e9467 */
  if (C.cf) goto L_103e9467;
  /* 103e943a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103e943c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 103e943f je 0x103e9449 */
  if (C.zf) goto L_103e9449;
  /* 103e9441 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_103e9443:;
  /* 103e9443 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103e9445 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103e9446 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103e9447 jne 0x103e9443 */
  if (!C.zf) goto L_103e9443;
L_103e9449:;
  /* 103e9449 mov ecx, eax */
  ECX = (EAX);
  /* 103e944b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103e944e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9450 mov ecx, eax */
  ECX = (EAX);
  /* 103e9452 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103e9455 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9457 mov ecx, edx */
  ECX = (EDX);
  /* 103e9459 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103e945c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103e945f je 0x103e9467 */
  if (C.zf) goto L_103e9467;
  /* 103e9461 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103e9463 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103e9465 je 0x103e946d */
  if (C.zf) goto L_103e946d;
L_103e9467:;
  /* 103e9467 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103e9469 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103e946a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 103e946b jne 0x103e9467 */
  if (!C.zf) goto L_103e9467;
L_103e946d:;
  /* 103e946d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103e9471 pop edi */
  EDI = (pop32());
  /* 103e9472 ret  */
  ESPCHK(0x103e9420u, _esp0);
  ESP += 4; return;
L_103e9473:;
  /* 103e9473 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 103e9477 ret  */
  ESPCHK(0x103e9420u, _esp0);
  ESP += 4; return;
}

/* FUN_10009480 @ 0x103e9480 (23 bytes, 10 insns) */
void f_103e9480(void) {
  FTRACE(0x103e9480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9480 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9481 mov ebp, esp */
  EBP = (ESP);
  /* 103e9483 mov eax, dword ptr [0x10411860] */
  EAX = (r32((uint32_t)(0x10411860)));
  /* 103e9488 push eax */
  push32((uint32_t)(EAX));
  /* 103e9489 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e948c push ecx */
  push32((uint32_t)(ECX));
  /* 103e948d call 0x103e94a0 */
  push32(0x103e9492u); f_103e94a0();
  /* 103e9492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9495 pop ebp */
  EBP = (pop32());
  /* 103e9496 ret  */
  ESPCHK(0x103e9480u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x103e94a0 (87 bytes, 34 insns) */
void f_103e94a0(void) {
  FTRACE(0x103e94a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e94a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103e94a1 mov ebp, esp */
  EBP = (ESP);
  /* 103e94a3 push ecx */
  push32((uint32_t)(ECX));
  /* 103e94a4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e94a8 jbe 0x103e94ae */
  if ((C.cf||C.zf)) goto L_103e94ae;
  /* 103e94aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e94ac jmp 0x103e94f3 */
  goto L_103e94f3;
L_103e94ae:;
  /* 103e94ae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e94b2 ja 0x103e94c5 */
  if ((!C.cf&&!C.zf)) goto L_103e94c5;
  /* 103e94b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e94b7 push eax */
  push32((uint32_t)(EAX));
  /* 103e94b8 call 0x103e9500 */
  push32(0x103e94bdu); f_103e9500();
  /* 103e94bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e94c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e94c3 jmp 0x103e94cc */
  goto L_103e94cc;
L_103e94c5:;
  /* 103e94c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103e94cc:;
  /* 103e94cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e94d0 jne 0x103e94d8 */
  if (!C.zf) goto L_103e94d8;
  /* 103e94d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e94d6 jne 0x103e94dd */
  if (!C.zf) goto L_103e94dd;
L_103e94d8:;
  /* 103e94d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e94db jmp 0x103e94f3 */
  goto L_103e94f3;
L_103e94dd:;
  /* 103e94dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e94e0 push ecx */
  push32((uint32_t)(ECX));
  /* 103e94e1 call 0x103e93f0 */
  push32(0x103e94e6u); f_103e93f0();
  /* 103e94e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e94e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e94eb jne 0x103e94f1 */
  if (!C.zf) goto L_103e94f1;
  /* 103e94ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e94ef jmp 0x103e94f3 */
  goto L_103e94f3;
L_103e94f1:;
  /* 103e94f1 jmp 0x103e94ae */
  goto L_103e94ae;
L_103e94f3:;
  /* 103e94f3 mov esp, ebp */
  ESP = (EBP);
  /* 103e94f5 pop ebp */
  EBP = (pop32());
  /* 103e94f6 ret  */
  ESPCHK(0x103e94a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009500 @ 0x103e9500 (109 bytes, 37 insns) */
void f_103e9500(void) {
  FTRACE(0x103e9500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9500 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9501 mov ebp, esp */
  EBP = (ESP);
  /* 103e9503 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9507 cmp eax, dword ptr [0x1040fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1040fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e950d ja 0x103e953d */
  if ((!C.cf&&!C.zf)) goto L_103e953d;
  /* 103e950f push 9 */
  push32((uint32_t)(0x9u));
  /* 103e9511 call 0x103e90b0 */
  push32(0x103e9516u); f_103e90b0();
  /* 103e9516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9519 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e951c push ecx */
  push32((uint32_t)(ECX));
  /* 103e951d call 0x103ea040 */
  push32(0x103e9522u); f_103ea040();
  /* 103e9522 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9525 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103e9528 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e952a call 0x103e9150 */
  push32(0x103e952fu); f_103e9150();
  /* 103e952f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9532 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9536 je 0x103e953d */
  if (C.zf) goto L_103e953d;
  /* 103e9538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e953b jmp 0x103e9569 */
  goto L_103e9569;
L_103e953d:;
  /* 103e953d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e9541 jne 0x103e954a */
  if (!C.zf) goto L_103e954a;
  /* 103e9543 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_103e954a:;
  /* 103e954a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e954d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e9550 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 103e9553 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103e9556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e9559 push eax */
  push32((uint32_t)(EAX));
  /* 103e955a push 0 */
  push32((uint32_t)(0x0u));
  /* 103e955c mov ecx, dword ptr [0x1041302c] */
  ECX = (r32((uint32_t)(0x1041302c)));
  /* 103e9562 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9563 call dword ptr [0x10414330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10414330))), 0x103e9569u);
L_103e9569:;
  /* 103e9569 mov esp, ebp */
  ESP = (EBP);
  /* 103e956b pop ebp */
  EBP = (pop32());
  /* 103e956c ret  */
  ESPCHK(0x103e9500u, _esp0);
  ESP += 4; return;
}

/* FUN_10009570 @ 0x103e9570 (10 bytes, 5 insns) */
void f_103e9570(void) {
  FTRACE(0x103e9570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9570 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9571 mov ebp, esp */
  EBP = (ESP);
  /* 103e9573 mov eax, 1 */
  EAX = (0x1u);
  /* 103e9578 pop ebp */
  EBP = (pop32());
  /* 103e9579 ret  */
  ESPCHK(0x103e9570u, _esp0);
  ESP += 4; return;
}

/* FUN_10009580 @ 0x103e9580 (173 bytes, 59 insns) */
void f_103e9580(void) {
  FTRACE(0x103e9580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103e9580 push ebp */
  push32((uint32_t)(EBP));
  /* 103e9581 mov ebp, esp */
  EBP = (ESP);
  /* 103e9583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103e9586 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e958a jbe 0x103e9593 */
  if ((C.cf||C.zf)) goto L_103e9593;
  /* 103e958c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103e958e jmp 0x103e9629 */
  goto L_103e9629;
L_103e9593:;
  /* 103e9593 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e9595 call 0x103e90b0 */
  push32(0x103e959au); f_103e90b0();
  /* 103e959a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e959d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e95a0 push eax */
  push32((uint32_t)(EAX));
  /* 103e95a1 call 0x103e99b0 */
  push32(0x103e95a6u); f_103e99b0();
  /* 103e95a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e95a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103e95ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e95b0 je 0x103e95f1 */
  if (C.zf) goto L_103e95f1;
  /* 103e95b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103e95b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e95bc cmp ecx, dword ptr [0x1040fc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1040fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e95c2 ja 0x103e95e2 */
  if ((!C.cf&&!C.zf)) goto L_103e95e2;
  /* 103e95c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e95c7 push edx */
  push32((uint32_t)(EDX));
  /* 103e95c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e95cb push eax */
  push32((uint32_t)(EAX));
  /* 103e95cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103e95cf push ecx */
  push32((uint32_t)(ECX));
  /* 103e95d0 call 0x103ea880 */
  push32(0x103e95d5u); f_103ea880();
  /* 103e95d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e95d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103e95da je 0x103e95e2 */
  if (C.zf) goto L_103e95e2;
  /* 103e95dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e95df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103e95e2:;
  /* 103e95e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e95e4 call 0x103e9150 */
  push32(0x103e95e9u); f_103e9150();
  /* 103e95e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e95ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103e95ef jmp 0x103e9629 */
  goto L_103e9629;
L_103e95f1:;
  /* 103e95f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 103e95f3 call 0x103e9150 */
  push32(0x103e95f8u); f_103e9150();
  /* 103e95f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103e95fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103e95ff jne 0x103e9608 */
  if (!C.zf) goto L_103e9608;
  /* 103e9601 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_103e9608:;
  /* 103e9608 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e960b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103e960e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 103e9610 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 103e9613 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103e9616 push ecx */
  push32((uint32_t)(ECX));
  /* 103e9617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103e961a push edx */
  push32((uint32_t)(EDX));
  /* 103e961b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103e961d mov eax, dword ptr [0x1041302c] */
  EAX = (r32((uint32_t)(0x1041302c)));
  /* 103e9622 push eax */
  push32((uint32_t)(EAX));
  /* 103e9623 call dword ptr [0x1041432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1041432c))), 0x103e9629u);
L_103e9629:;
  /* 103e9629 mov esp, ebp */
  ESP = (EBP);
  /* 103e962b pop ebp */
  EBP = (pop32());
  /* 103e962c ret  */
  ESPCHK(0x103e9580u, _esp0);
  ESP += 4; return;
}

