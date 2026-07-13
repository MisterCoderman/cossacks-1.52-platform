#include "recomp.h"

/* thunk_FUN_100022e0 @ 0x106e1005 (5 bytes, 1 insns) */
void f_106e1005(void) {
  FTRACE(0x106e1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e1005 jmp 0x106e22e0 */
  f_106e22e0(); return;
}

/* OnInit @ 0x106e100a (5 bytes, 1 insns) */
void f_106e100a(void) {
  FTRACE(0x106e100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e100a jmp 0x106e10a0 */
  f_106e10a0(); return;
}

/* thunk_FUN_10002330 @ 0x106e100f (5 bytes, 1 insns) */
void f_106e100f(void) {
  FTRACE(0x106e100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e100f jmp 0x106e2330 */
  f_106e2330(); return;
}

/* thunk_FUN_10001040 @ 0x106e1014 (5 bytes, 1 insns) */
void f_106e1014(void) {
  FTRACE(0x106e1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e1014 jmp 0x106e1040 */
  f_106e1040(); return;
}

/* ProcessScenary @ 0x106e1019 (5 bytes, 1 insns) */
void f_106e1019(void) {
  FTRACE(0x106e1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e1019 jmp 0x106e1410 */
  f_106e1410(); return;
}

/* FUN_10001040 @ 0x106e1040 (67 bytes, 26 insns) */
void f_106e1040(void) {
  FTRACE(0x106e1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e1040 push ebp */
  push32((uint32_t)(EBP));
  /* 106e1041 mov ebp, esp */
  EBP = (ESP);
  /* 106e1043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e1046 push ebx */
  push32((uint32_t)(EBX));
  /* 106e1047 push esi */
  push32((uint32_t)(ESI));
  /* 106e1048 push edi */
  push32((uint32_t)(EDI));
  /* 106e1049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 106e104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 106e1051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106e1056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106e1058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1062 je 0x106e1066 */
  if (C.zf) goto L_106e1066;
  /* 106e1064 jmp 0x106e106b */
  goto L_106e106b;
L_106e1066:;
  /* 106e1066 call 0x106e100a */
  push32(0x106e106bu); f_106e100a();
L_106e106b:;
  /* 106e106b mov eax, 1 */
  EAX = (0x1u);
  /* 106e1070 pop edi */
  EDI = (pop32());
  /* 106e1071 pop esi */
  ESI = (pop32());
  /* 106e1072 pop ebx */
  EBX = (pop32());
  /* 106e1073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1078 call 0x106e2420 */
  push32(0x106e107du); f_106e2420();
  /* 106e107d mov esp, ebp */
  ESP = (EBP);
  /* 106e107f pop ebp */
  EBP = (pop32());
  /* 106e1080 ret 0xc */
  ESPCHK(0x106e1040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x106e10a0 (695 bytes, 187 insns) */
void f_106e10a0(void) {
  FTRACE(0x106e10a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e10a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e10a1 mov ebp, esp */
  EBP = (ESP);
  /* 106e10a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e10a6 push ebx */
  push32((uint32_t)(EBX));
  /* 106e10a7 push esi */
  push32((uint32_t)(ESI));
  /* 106e10a8 push edi */
  push32((uint32_t)(EDI));
  /* 106e10a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 106e10ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 106e10b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106e10b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106e10b8 mov esi, esp */
  ESI = (ESP);
  /* 106e10ba push 0x1070a0d4 */
  push32((uint32_t)(0x1070a0d4u));
  /* 106e10bf push 0x1070f438 */
  push32((uint32_t)(0x1070f438u));
  /* 106e10c4 call dword ptr [0x1071242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071242c))), 0x106e10cau);
  /* 106e10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e10cf call 0x106e2420 */
  push32(0x106e10d4u); f_106e2420();
  /* 106e10d4 mov esi, esp */
  ESI = (ESP);
  /* 106e10d6 push 0x1070a0cc */
  push32((uint32_t)(0x1070a0ccu));
  /* 106e10db push 0x1070f440 */
  push32((uint32_t)(0x1070f440u));
  /* 106e10e0 call dword ptr [0x1071242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071242c))), 0x106e10e6u);
  /* 106e10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e10eb call 0x106e2420 */
  push32(0x106e10f0u); f_106e2420();
  /* 106e10f0 mov esi, esp */
  ESI = (ESP);
  /* 106e10f2 push 0x1070a0c4 */
  push32((uint32_t)(0x1070a0c4u));
  /* 106e10f7 push 0x1070f448 */
  push32((uint32_t)(0x1070f448u));
  /* 106e10fc call dword ptr [0x1071242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071242c))), 0x106e1102u);
  /* 106e1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1107 call 0x106e2420 */
  push32(0x106e110cu); f_106e2420();
  /* 106e110c mov esi, esp */
  ESI = (ESP);
  /* 106e110e push 0x1070a0bc */
  push32((uint32_t)(0x1070a0bcu));
  /* 106e1113 push 0x1070f450 */
  push32((uint32_t)(0x1070f450u));
  /* 106e1118 call dword ptr [0x1071242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071242c))), 0x106e111eu);
  /* 106e111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1123 call 0x106e2420 */
  push32(0x106e1128u); f_106e2420();
  /* 106e1128 mov esi, esp */
  ESI = (ESP);
  /* 106e112a push 0x1070a0b4 */
  push32((uint32_t)(0x1070a0b4u));
  /* 106e112f push 0x1070f458 */
  push32((uint32_t)(0x1070f458u));
  /* 106e1134 call dword ptr [0x1071242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071242c))), 0x106e113au);
  /* 106e113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e113f call 0x106e2420 */
  push32(0x106e1144u); f_106e2420();
  /* 106e1144 mov esi, esp */
  ESI = (ESP);
  /* 106e1146 push 0x1070a0ac */
  push32((uint32_t)(0x1070a0acu));
  /* 106e114b push 0x1070f460 */
  push32((uint32_t)(0x1070f460u));
  /* 106e1150 call dword ptr [0x1071242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071242c))), 0x106e1156u);
  /* 106e1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e115b call 0x106e2420 */
  push32(0x106e1160u); f_106e2420();
  /* 106e1160 mov esi, esp */
  ESI = (ESP);
  /* 106e1162 push 0x1070a0a4 */
  push32((uint32_t)(0x1070a0a4u));
  /* 106e1167 push 0x1070f428 */
  push32((uint32_t)(0x1070f428u));
  /* 106e116c call dword ptr [0x1071242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071242c))), 0x106e1172u);
  /* 106e1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1177 call 0x106e2420 */
  push32(0x106e117cu); f_106e2420();
  /* 106e117c mov esi, esp */
  ESI = (ESP);
  /* 106e117e push 0x1070a09c */
  push32((uint32_t)(0x1070a09cu));
  /* 106e1183 push 0x1070f468 */
  push32((uint32_t)(0x1070f468u));
  /* 106e1188 call dword ptr [0x1071242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071242c))), 0x106e118eu);
  /* 106e118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1193 call 0x106e2420 */
  push32(0x106e1198u); f_106e2420();
  /* 106e1198 mov esi, esp */
  ESI = (ESP);
  /* 106e119a push 0x1070a094 */
  push32((uint32_t)(0x1070a094u));
  /* 106e119f push 0x1070f470 */
  push32((uint32_t)(0x1070f470u));
  /* 106e11a4 call dword ptr [0x1071242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071242c))), 0x106e11aau);
  /* 106e11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e11af call 0x106e2420 */
  push32(0x106e11b4u); f_106e2420();
  /* 106e11b4 mov esi, esp */
  ESI = (ESP);
  /* 106e11b6 push 0x1070a08c */
  push32((uint32_t)(0x1070a08cu));
  /* 106e11bb push 0x1070f478 */
  push32((uint32_t)(0x1070f478u));
  /* 106e11c0 call dword ptr [0x1071242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071242c))), 0x106e11c6u);
  /* 106e11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e11cb call 0x106e2420 */
  push32(0x106e11d0u); f_106e2420();
  /* 106e11d0 mov esi, esp */
  ESI = (ESP);
  /* 106e11d2 push 0x1070a084 */
  push32((uint32_t)(0x1070a084u));
  /* 106e11d7 push 0x1070f3e0 */
  push32((uint32_t)(0x1070f3e0u));
  /* 106e11dc call dword ptr [0x10712430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712430))), 0x106e11e2u);
  /* 106e11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e11e7 call 0x106e2420 */
  push32(0x106e11ecu); f_106e2420();
  /* 106e11ec mov esi, esp */
  ESI = (ESP);
  /* 106e11ee push 0x1070a07c */
  push32((uint32_t)(0x1070a07cu));
  /* 106e11f3 push 0x1070f3f0 */
  push32((uint32_t)(0x1070f3f0u));
  /* 106e11f8 call dword ptr [0x10712430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712430))), 0x106e11feu);
  /* 106e11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1203 call 0x106e2420 */
  push32(0x106e1208u); f_106e2420();
  /* 106e1208 mov esi, esp */
  ESI = (ESP);
  /* 106e120a push 0x1070a074 */
  push32((uint32_t)(0x1070a074u));
  /* 106e120f push 0x1070f3e8 */
  push32((uint32_t)(0x1070f3e8u));
  /* 106e1214 call dword ptr [0x10712430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712430))), 0x106e121au);
  /* 106e121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e121f call 0x106e2420 */
  push32(0x106e1224u); f_106e2420();
  /* 106e1224 mov esi, esp */
  ESI = (ESP);
  /* 106e1226 push 0x1070a06c */
  push32((uint32_t)(0x1070a06cu));
  /* 106e122b push 0x1070f400 */
  push32((uint32_t)(0x1070f400u));
  /* 106e1230 call dword ptr [0x10712430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712430))), 0x106e1236u);
  /* 106e1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e123b call 0x106e2420 */
  push32(0x106e1240u); f_106e2420();
  /* 106e1240 mov esi, esp */
  ESI = (ESP);
  /* 106e1242 push 0x1070a064 */
  push32((uint32_t)(0x1070a064u));
  /* 106e1247 push 0x1070f3f8 */
  push32((uint32_t)(0x1070f3f8u));
  /* 106e124c call dword ptr [0x10712430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712430))), 0x106e1252u);
  /* 106e1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1257 call 0x106e2420 */
  push32(0x106e125cu); f_106e2420();
  /* 106e125c mov esi, esp */
  ESI = (ESP);
  /* 106e125e push 0x1070a05c */
  push32((uint32_t)(0x1070a05cu));
  /* 106e1263 push 0x1070f410 */
  push32((uint32_t)(0x1070f410u));
  /* 106e1268 call dword ptr [0x10712430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712430))), 0x106e126eu);
  /* 106e126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1273 call 0x106e2420 */
  push32(0x106e1278u); f_106e2420();
  /* 106e1278 mov esi, esp */
  ESI = (ESP);
  /* 106e127a push 0x1070a054 */
  push32((uint32_t)(0x1070a054u));
  /* 106e127f push 0x1070f408 */
  push32((uint32_t)(0x1070f408u));
  /* 106e1284 call dword ptr [0x10712430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712430))), 0x106e128au);
  /* 106e128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e128f call 0x106e2420 */
  push32(0x106e1294u); f_106e2420();
  /* 106e1294 mov esi, esp */
  ESI = (ESP);
  /* 106e1296 push 0x1070a04c */
  push32((uint32_t)(0x1070a04cu));
  /* 106e129b push 0x1070f418 */
  push32((uint32_t)(0x1070f418u));
  /* 106e12a0 call dword ptr [0x10712430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712430))), 0x106e12a6u);
  /* 106e12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e12ab call 0x106e2420 */
  push32(0x106e12b0u); f_106e2420();
  /* 106e12b0 mov esi, esp */
  ESI = (ESP);
  /* 106e12b2 push 0x1070a03c */
  push32((uint32_t)(0x1070a03cu));
  /* 106e12b7 push 0x1070f430 */
  push32((uint32_t)(0x1070f430u));
  /* 106e12bc call dword ptr [0x10712434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712434))), 0x106e12c2u);
  /* 106e12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e12c7 call 0x106e2420 */
  push32(0x106e12ccu); f_106e2420();
  /* 106e12cc mov esi, esp */
  ESI = (ESP);
  /* 106e12ce push 0x1070a02c */
  push32((uint32_t)(0x1070a02cu));
  /* 106e12d3 push 0x1070f420 */
  push32((uint32_t)(0x1070f420u));
  /* 106e12d8 call dword ptr [0x10712434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712434))), 0x106e12deu);
  /* 106e12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e12e3 call 0x106e2420 */
  push32(0x106e12e8u); f_106e2420();
  /* 106e12e8 mov esi, esp */
  ESI = (ESP);
  /* 106e12ea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106e12ec push 0 */
  push32((uint32_t)(0x0u));
  /* 106e12ee call dword ptr [0x10712438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712438))), 0x106e12f4u);
  /* 106e12f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e12f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e12f9 call 0x106e2420 */
  push32(0x106e12feu); f_106e2420();
  /* 106e12fe mov esi, esp */
  ESI = (ESP);
  /* 106e1300 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106e1302 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e1304 call dword ptr [0x10712438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712438))), 0x106e130au);
  /* 106e130a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e130d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e130f call 0x106e2420 */
  push32(0x106e1314u); f_106e2420();
  /* 106e1314 mov esi, esp */
  ESI = (ESP);
  /* 106e1316 push 0x1070a024 */
  push32((uint32_t)(0x1070a024u));
  /* 106e131b push 1 */
  push32((uint32_t)(0x1u));
  /* 106e131d call dword ptr [0x1071243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071243c))), 0x106e1323u);
  /* 106e1323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1326 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1328 call 0x106e2420 */
  push32(0x106e132du); f_106e2420();
  /* 106e132d mov esi, esp */
  ESI = (ESP);
  /* 106e132f push 0x1070a01c */
  push32((uint32_t)(0x1070a01cu));
  /* 106e1334 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e1336 call dword ptr [0x1071243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071243c))), 0x106e133cu);
  /* 106e133c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e133f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1341 call 0x106e2420 */
  push32(0x106e1346u); f_106e2420();
  /* 106e1346 pop edi */
  EDI = (pop32());
  /* 106e1347 pop esi */
  ESI = (pop32());
  /* 106e1348 pop ebx */
  EBX = (pop32());
  /* 106e1349 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e134c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e134e call 0x106e2420 */
  push32(0x106e1353u); f_106e2420();
  /* 106e1353 mov esp, ebp */
  ESP = (EBP);
  /* 106e1355 pop ebp */
  EBP = (pop32());
  /* 106e1356 ret  */
  ESPCHK(0x106e10a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001410 @ 0x106e1410 (3024 bytes, 881 insns) */
void f_106e1410(void) {
  FTRACE(0x106e1410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e1410 push ebp */
  push32((uint32_t)(EBP));
  /* 106e1411 mov ebp, esp */
  EBP = (ESP);
  /* 106e1413 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e1416 push ebx */
  push32((uint32_t)(EBX));
  /* 106e1417 push esi */
  push32((uint32_t)(ESI));
  /* 106e1418 push edi */
  push32((uint32_t)(EDI));
  /* 106e1419 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 106e141c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 106e1421 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106e1426 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106e1428 mov esi, esp */
  ESI = (ESP);
  /* 106e142a push 1 */
  push32((uint32_t)(0x1u));
  /* 106e142c call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1432u);
  /* 106e1432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1437 call 0x106e2420 */
  push32(0x106e143cu); f_106e2420();
  /* 106e143c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1443 je 0x106e1518 */
  if (C.zf) goto L_106e1518;
  /* 106e1449 mov esi, esp */
  ESI = (ESP);
  /* 106e144b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e144d push 1 */
  push32((uint32_t)(0x1u));
  /* 106e144f call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e1455u);
  /* 106e1455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1458 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e145a call 0x106e2420 */
  push32(0x106e145fu); f_106e2420();
  /* 106e145f mov esi, esp */
  ESI = (ESP);
  /* 106e1461 push 0x1070a114 */
  push32((uint32_t)(0x1070a114u));
  /* 106e1466 call dword ptr [0x107123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f0))), 0x106e146cu);
  /* 106e146c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e146f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1471 call 0x106e2420 */
  push32(0x106e1476u); f_106e2420();
  /* 106e1476 mov esi, esp */
  ESI = (ESP);
  /* 106e1478 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e147a push 0x1070f3f0 */
  push32((uint32_t)(0x1070f3f0u));
  /* 106e147f call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1485u);
  /* 106e1485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e148a call 0x106e2420 */
  push32(0x106e148fu); f_106e2420();
  /* 106e148f mov esi, esp */
  ESI = (ESP);
  /* 106e1491 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1493 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 106e1495 push 0x1070f438 */
  push32((uint32_t)(0x1070f438u));
  /* 106e149a push 4 */
  push32((uint32_t)(0x4u));
  /* 106e149c call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e14a2u);
  /* 106e14a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e14a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e14a7 call 0x106e2420 */
  push32(0x106e14acu); f_106e2420();
  /* 106e14ac mov esi, esp */
  ESI = (ESP);
  /* 106e14ae push 0 */
  push32((uint32_t)(0x0u));
  /* 106e14b0 push 0x1070f3e8 */
  push32((uint32_t)(0x1070f3e8u));
  /* 106e14b5 call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e14bbu);
  /* 106e14bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e14be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e14c0 call 0x106e2420 */
  push32(0x106e14c5u); f_106e2420();
  /* 106e14c5 mov esi, esp */
  ESI = (ESP);
  /* 106e14c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e14c9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 106e14cb push 0x1070f448 */
  push32((uint32_t)(0x1070f448u));
  /* 106e14d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e14d2 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e14d8u);
  /* 106e14d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e14db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e14dd call 0x106e2420 */
  push32(0x106e14e2u); f_106e2420();
  /* 106e14e2 mov esi, esp */
  ESI = (ESP);
  /* 106e14e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e14e6 push 0x1070f400 */
  push32((uint32_t)(0x1070f400u));
  /* 106e14eb call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e14f1u);
  /* 106e14f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e14f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e14f6 call 0x106e2420 */
  push32(0x106e14fbu); f_106e2420();
  /* 106e14fb mov esi, esp */
  ESI = (ESP);
  /* 106e14fd push 0 */
  push32((uint32_t)(0x0u));
  /* 106e14ff push 0x5a */
  push32((uint32_t)(0x5au));
  /* 106e1501 push 0x1070f450 */
  push32((uint32_t)(0x1070f450u));
  /* 106e1506 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e1508 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e150eu);
  /* 106e150e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1513 call 0x106e2420 */
  push32(0x106e1518u); f_106e2420();
L_106e1518:;
  /* 106e1518 mov esi, esp */
  ESI = (ESP);
  /* 106e151a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 106e151c call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1522u);
  /* 106e1522 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1525 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1527 call 0x106e2420 */
  push32(0x106e152cu); f_106e2420();
  /* 106e152c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1531 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1533 je 0x106e15a4 */
  if (C.zf) goto L_106e15a4;
  /* 106e1535 mov esi, esp */
  ESI = (ESP);
  /* 106e1537 push 0x1070f3f0 */
  push32((uint32_t)(0x1070f3f0u));
  /* 106e153c push 0x1070f438 */
  push32((uint32_t)(0x1070f438u));
  /* 106e1541 call dword ptr [0x107123fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123fc))), 0x106e1547u);
  /* 106e1547 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e154a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e154c call 0x106e2420 */
  push32(0x106e1551u); f_106e2420();
  /* 106e1551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1553 jle 0x106e15a4 */
  if ((C.zf||C.sf!=C.of)) goto L_106e15a4;
  /* 106e1555 mov esi, esp */
  ESI = (ESP);
  /* 106e1557 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1559 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 106e155b call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e1561u);
  /* 106e1561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1564 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1566 call 0x106e2420 */
  push32(0x106e156bu); f_106e2420();
  /* 106e156b mov esi, esp */
  ESI = (ESP);
  /* 106e156d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e156f push 0x1070f3f8 */
  push32((uint32_t)(0x1070f3f8u));
  /* 106e1574 call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e157au);
  /* 106e157a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e157d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e157f call 0x106e2420 */
  push32(0x106e1584u); f_106e2420();
  /* 106e1584 mov esi, esp */
  ESI = (ESP);
  /* 106e1586 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1588 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 106e158d push 0x1070f440 */
  push32((uint32_t)(0x1070f440u));
  /* 106e1592 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1594 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e159au);
  /* 106e159a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e159f call 0x106e2420 */
  push32(0x106e15a4u); f_106e2420();
L_106e15a4:;
  /* 106e15a4 mov esi, esp */
  ESI = (ESP);
  /* 106e15a6 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 106e15a8 call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e15aeu);
  /* 106e15ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e15b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e15b3 call 0x106e2420 */
  push32(0x106e15b8u); f_106e2420();
  /* 106e15b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e15bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e15bf je 0x106e162e */
  if (C.zf) goto L_106e162e;
  /* 106e15c1 mov esi, esp */
  ESI = (ESP);
  /* 106e15c3 push 0x1070f3f0 */
  push32((uint32_t)(0x1070f3f0u));
  /* 106e15c8 push 0x1070f438 */
  push32((uint32_t)(0x1070f438u));
  /* 106e15cd call dword ptr [0x107123fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123fc))), 0x106e15d3u);
  /* 106e15d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e15d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e15d8 call 0x106e2420 */
  push32(0x106e15ddu); f_106e2420();
  /* 106e15dd cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e15e0 jle 0x106e162e */
  if ((C.zf||C.sf!=C.of)) goto L_106e162e;
  /* 106e15e2 mov esi, esp */
  ESI = (ESP);
  /* 106e15e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e15e6 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 106e15e8 call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e15eeu);
  /* 106e15ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e15f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e15f3 call 0x106e2420 */
  push32(0x106e15f8u); f_106e2420();
  /* 106e15f8 mov esi, esp */
  ESI = (ESP);
  /* 106e15fa push 0 */
  push32((uint32_t)(0x0u));
  /* 106e15fc push 0x1070f3f0 */
  push32((uint32_t)(0x1070f3f0u));
  /* 106e1601 call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1607u);
  /* 106e1607 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e160a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e160c call 0x106e2420 */
  push32(0x106e1611u); f_106e2420();
  /* 106e1611 mov esi, esp */
  ESI = (ESP);
  /* 106e1613 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1615 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 106e1617 push 0x1070f440 */
  push32((uint32_t)(0x1070f440u));
  /* 106e161c push 4 */
  push32((uint32_t)(0x4u));
  /* 106e161e call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e1624u);
  /* 106e1624 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1627 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1629 call 0x106e2420 */
  push32(0x106e162eu); f_106e2420();
L_106e162e:;
  /* 106e162e mov esi, esp */
  ESI = (ESP);
  /* 106e1630 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 106e1632 call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1638u);
  /* 106e1638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e163b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e163d call 0x106e2420 */
  push32(0x106e1642u); f_106e2420();
  /* 106e1642 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1649 je 0x106e16d5 */
  if (C.zf) goto L_106e16d5;
  /* 106e164f mov esi, esp */
  ESI = (ESP);
  /* 106e1651 push 0x1070f400 */
  push32((uint32_t)(0x1070f400u));
  /* 106e1656 push 0x1070f450 */
  push32((uint32_t)(0x1070f450u));
  /* 106e165b call dword ptr [0x107123fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123fc))), 0x106e1661u);
  /* 106e1661 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1664 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1666 call 0x106e2420 */
  push32(0x106e166bu); f_106e2420();
  /* 106e166b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e166e jne 0x106e16d5 */
  if (!C.zf) goto L_106e16d5;
  /* 106e1670 mov esi, esp */
  ESI = (ESP);
  /* 106e1672 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1674 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 106e1676 call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e167cu);
  /* 106e167c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e167f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1681 call 0x106e2420 */
  push32(0x106e1686u); f_106e2420();
  /* 106e1686 mov esi, esp */
  ESI = (ESP);
  /* 106e1688 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e168a push 0x1070f400 */
  push32((uint32_t)(0x1070f400u));
  /* 106e168f call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1695u);
  /* 106e1695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1698 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e169a call 0x106e2420 */
  push32(0x106e169fu); f_106e2420();
  /* 106e169f mov esi, esp */
  ESI = (ESP);
  /* 106e16a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e16a3 push 0x1070f3e8 */
  push32((uint32_t)(0x1070f3e8u));
  /* 106e16a8 call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e16aeu);
  /* 106e16ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e16b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e16b3 call 0x106e2420 */
  push32(0x106e16b8u); f_106e2420();
  /* 106e16b8 mov esi, esp */
  ESI = (ESP);
  /* 106e16ba push 0 */
  push32((uint32_t)(0x0u));
  /* 106e16bc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 106e16be push 0x1070f458 */
  push32((uint32_t)(0x1070f458u));
  /* 106e16c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e16c5 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e16cbu);
  /* 106e16cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e16ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e16d0 call 0x106e2420 */
  push32(0x106e16d5u); f_106e2420();
L_106e16d5:;
  /* 106e16d5 mov esi, esp */
  ESI = (ESP);
  /* 106e16d7 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 106e16d9 call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e16dfu);
  /* 106e16df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e16e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e16e4 call 0x106e2420 */
  push32(0x106e16e9u); f_106e2420();
  /* 106e16e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e16ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e16f0 je 0x106e1761 */
  if (C.zf) goto L_106e1761;
  /* 106e16f2 mov esi, esp */
  ESI = (ESP);
  /* 106e16f4 push 0x1070f3e8 */
  push32((uint32_t)(0x1070f3e8u));
  /* 106e16f9 push 0x1070f458 */
  push32((uint32_t)(0x1070f458u));
  /* 106e16fe call dword ptr [0x107123fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123fc))), 0x106e1704u);
  /* 106e1704 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1707 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1709 call 0x106e2420 */
  push32(0x106e170eu); f_106e2420();
  /* 106e170e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1710 jle 0x106e1761 */
  if ((C.zf||C.sf!=C.of)) goto L_106e1761;
  /* 106e1712 mov esi, esp */
  ESI = (ESP);
  /* 106e1714 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1716 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 106e1718 call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e171eu);
  /* 106e171e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1721 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1723 call 0x106e2420 */
  push32(0x106e1728u); f_106e2420();
  /* 106e1728 mov esi, esp */
  ESI = (ESP);
  /* 106e172a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e172c push 0x1070f408 */
  push32((uint32_t)(0x1070f408u));
  /* 106e1731 call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1737u);
  /* 106e1737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e173a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e173c call 0x106e2420 */
  push32(0x106e1741u); f_106e2420();
  /* 106e1741 mov esi, esp */
  ESI = (ESP);
  /* 106e1743 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1745 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 106e174a push 0x1070f458 */
  push32((uint32_t)(0x1070f458u));
  /* 106e174f push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1751 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e1757u);
  /* 106e1757 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e175a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e175c call 0x106e2420 */
  push32(0x106e1761u); f_106e2420();
L_106e1761:;
  /* 106e1761 mov esi, esp */
  ESI = (ESP);
  /* 106e1763 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 106e1765 call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e176bu);
  /* 106e176b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e176e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1770 call 0x106e2420 */
  push32(0x106e1775u); f_106e2420();
  /* 106e1775 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e177a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e177c jne 0x106e17ad */
  if (!C.zf) goto L_106e17ad;
  /* 106e177e push 0x1070f3f0 */
  push32((uint32_t)(0x1070f3f0u));
  /* 106e1783 call 0x106e1005 */
  push32(0x106e1788u); f_106e1005();
  /* 106e1788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e178b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e178d jle 0x106e17ad */
  if ((C.zf||C.sf!=C.of)) goto L_106e17ad;
  /* 106e178f mov esi, esp */
  ESI = (ESP);
  /* 106e1791 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e1793 push 0x1070f440 */
  push32((uint32_t)(0x1070f440u));
  /* 106e1798 push 0x1070f3f0 */
  push32((uint32_t)(0x1070f3f0u));
  /* 106e179d call dword ptr [0x10712400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712400))), 0x106e17a3u);
  /* 106e17a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e17a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e17a8 call 0x106e2420 */
  push32(0x106e17adu); f_106e2420();
L_106e17ad:;
  /* 106e17ad mov esi, esp */
  ESI = (ESP);
  /* 106e17af push 2 */
  push32((uint32_t)(0x2u));
  /* 106e17b1 call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e17b7u);
  /* 106e17b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e17ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e17bc call 0x106e2420 */
  push32(0x106e17c1u); f_106e2420();
  /* 106e17c1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e17c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e17c8 je 0x106e1814 */
  if (C.zf) goto L_106e1814;
  /* 106e17ca mov esi, esp */
  ESI = (ESP);
  /* 106e17cc push 0 */
  push32((uint32_t)(0x0u));
  /* 106e17ce push 0x1070f460 */
  push32((uint32_t)(0x1070f460u));
  /* 106e17d3 call dword ptr [0x10712404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712404))), 0x106e17d9u);
  /* 106e17d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e17dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e17de call 0x106e2420 */
  push32(0x106e17e3u); f_106e2420();
  /* 106e17e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e17e5 jle 0x106e1814 */
  if ((C.zf||C.sf!=C.of)) goto L_106e1814;
  /* 106e17e7 mov esi, esp */
  ESI = (ESP);
  /* 106e17e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e17eb push 2 */
  push32((uint32_t)(0x2u));
  /* 106e17ed call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e17f3u);
  /* 106e17f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e17f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e17f8 call 0x106e2420 */
  push32(0x106e17fdu); f_106e2420();
  /* 106e17fd mov esi, esp */
  ESI = (ESP);
  /* 106e17ff push 0x1070a10c */
  push32((uint32_t)(0x1070a10cu));
  /* 106e1804 call dword ptr [0x107123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f0))), 0x106e180au);
  /* 106e180a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e180d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e180f call 0x106e2420 */
  push32(0x106e1814u); f_106e2420();
L_106e1814:;
  /* 106e1814 mov esi, esp */
  ESI = (ESP);
  /* 106e1816 push 3 */
  push32((uint32_t)(0x3u));
  /* 106e1818 call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e181eu);
  /* 106e181e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1821 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1823 call 0x106e2420 */
  push32(0x106e1828u); f_106e2420();
  /* 106e1828 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e182d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e182f je 0x106e18c2 */
  if (C.zf) goto L_106e18c2;
  /* 106e1835 push 0x1070f3f0 */
  push32((uint32_t)(0x1070f3f0u));
  /* 106e183a call 0x106e1005 */
  push32(0x106e183fu); f_106e1005();
  /* 106e183f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1842 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1844 jne 0x106e18c2 */
  if (!C.zf) goto L_106e18c2;
  /* 106e1846 mov esi, esp */
  ESI = (ESP);
  /* 106e1848 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e184a push 3 */
  push32((uint32_t)(0x3u));
  /* 106e184c call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e1852u);
  /* 106e1852 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1855 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1857 call 0x106e2420 */
  push32(0x106e185cu); f_106e2420();
  /* 106e185c mov esi, esp */
  ESI = (ESP);
  /* 106e185e push 0x1070a104 */
  push32((uint32_t)(0x1070a104u));
  /* 106e1863 call dword ptr [0x107123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f0))), 0x106e1869u);
  /* 106e1869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e186c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e186e call 0x106e2420 */
  push32(0x106e1873u); f_106e2420();
  /* 106e1873 mov esi, esp */
  ESI = (ESP);
  /* 106e1875 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1877 push 0x1070f3f8 */
  push32((uint32_t)(0x1070f3f8u));
  /* 106e187c call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1882u);
  /* 106e1882 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1885 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1887 call 0x106e2420 */
  push32(0x106e188cu); f_106e2420();
  /* 106e188c mov esi, esp */
  ESI = (ESP);
  /* 106e188e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1890 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1892 push 0x1070f478 */
  push32((uint32_t)(0x1070f478u));
  /* 106e1897 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1899 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e189fu);
  /* 106e189f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e18a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e18a4 call 0x106e2420 */
  push32(0x106e18a9u); f_106e2420();
  /* 106e18a9 mov esi, esp */
  ESI = (ESP);
  /* 106e18ab push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 106e18b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e18b2 call dword ptr [0x10712408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712408))), 0x106e18b8u);
  /* 106e18b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e18bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e18bd call 0x106e2420 */
  push32(0x106e18c2u); f_106e2420();
L_106e18c2:;
  /* 106e18c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e18c4 push 0x1070f430 */
  push32((uint32_t)(0x1070f430u));
  /* 106e18c9 call 0x106e100f */
  push32(0x106e18ceu); f_106e100f();
  /* 106e18ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e18d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e18d3 jle 0x106e1918 */
  if ((C.zf||C.sf!=C.of)) goto L_106e1918;
  /* 106e18d5 mov esi, esp */
  ESI = (ESP);
  /* 106e18d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e18d9 call dword ptr [0x1071240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071240c))), 0x106e18dfu);
  /* 106e18df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e18e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e18e4 call 0x106e2420 */
  push32(0x106e18e9u); f_106e2420();
  /* 106e18e9 mov esi, esp */
  ESI = (ESP);
  /* 106e18eb push 0 */
  push32((uint32_t)(0x0u));
  /* 106e18ed push 0x1070f400 */
  push32((uint32_t)(0x1070f400u));
  /* 106e18f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e18f4 call dword ptr [0x10712410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712410))), 0x106e18fau);
  /* 106e18fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e18fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e18ff call 0x106e2420 */
  push32(0x106e1904u); f_106e2420();
  /* 106e1904 mov esi, esp */
  ESI = (ESP);
  /* 106e1906 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1908 call dword ptr [0x10712414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712414))), 0x106e190eu);
  /* 106e190e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1911 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1913 call 0x106e2420 */
  push32(0x106e1918u); f_106e2420();
L_106e1918:;
  /* 106e1918 mov esi, esp */
  ESI = (ESP);
  /* 106e191a push 4 */
  push32((uint32_t)(0x4u));
  /* 106e191c call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1922u);
  /* 106e1922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1925 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1927 call 0x106e2420 */
  push32(0x106e192cu); f_106e2420();
  /* 106e192c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1933 je 0x106e19e3 */
  if (C.zf) goto L_106e19e3;
  /* 106e1939 push 0x1070f3e8 */
  push32((uint32_t)(0x1070f3e8u));
  /* 106e193e call 0x106e1005 */
  push32(0x106e1943u); f_106e1005();
  /* 106e1943 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1946 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1948 jne 0x106e19e3 */
  if (!C.zf) goto L_106e19e3;
  /* 106e194e mov esi, esp */
  ESI = (ESP);
  /* 106e1950 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1952 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e1954 call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e195au);
  /* 106e195a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e195d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e195f call 0x106e2420 */
  push32(0x106e1964u); f_106e2420();
  /* 106e1964 mov esi, esp */
  ESI = (ESP);
  /* 106e1966 push 0x1070a0fc */
  push32((uint32_t)(0x1070a0fcu));
  /* 106e196b call dword ptr [0x107123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f0))), 0x106e1971u);
  /* 106e1971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1974 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1976 call 0x106e2420 */
  push32(0x106e197bu); f_106e2420();
  /* 106e197b mov esi, esp */
  ESI = (ESP);
  /* 106e197d push 0x190 */
  push32((uint32_t)(0x190u));
  /* 106e1982 push 7 */
  push32((uint32_t)(0x7u));
  /* 106e1984 call dword ptr [0x10712408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712408))), 0x106e198au);
  /* 106e198a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e198d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e198f call 0x106e2420 */
  push32(0x106e1994u); f_106e2420();
  /* 106e1994 mov esi, esp */
  ESI = (ESP);
  /* 106e1996 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1998 push 0x1070f408 */
  push32((uint32_t)(0x1070f408u));
  /* 106e199d call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e19a3u);
  /* 106e19a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e19a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e19a8 call 0x106e2420 */
  push32(0x106e19adu); f_106e2420();
  /* 106e19ad mov esi, esp */
  ESI = (ESP);
  /* 106e19af push 0 */
  push32((uint32_t)(0x0u));
  /* 106e19b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e19b3 push 0x1070f478 */
  push32((uint32_t)(0x1070f478u));
  /* 106e19b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e19ba call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e19c0u);
  /* 106e19c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e19c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e19c5 call 0x106e2420 */
  push32(0x106e19cau); f_106e2420();
  /* 106e19ca mov esi, esp */
  ESI = (ESP);
  /* 106e19cc push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 106e19d1 push 8 */
  push32((uint32_t)(0x8u));
  /* 106e19d3 call dword ptr [0x10712408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712408))), 0x106e19d9u);
  /* 106e19d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e19dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e19de call 0x106e2420 */
  push32(0x106e19e3u); f_106e2420();
L_106e19e3:;
  /* 106e19e3 mov esi, esp */
  ESI = (ESP);
  /* 106e19e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e19e7 call dword ptr [0x10712418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712418))), 0x106e19edu);
  /* 106e19ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e19f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e19f2 call 0x106e2420 */
  push32(0x106e19f7u); f_106e2420();
  /* 106e19f7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e19fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e19fe je 0x106e1a36 */
  if (C.zf) goto L_106e1a36;
  /* 106e1a00 mov esi, esp */
  ESI = (ESP);
  /* 106e1a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1a04 push 0x1070f3f8 */
  push32((uint32_t)(0x1070f3f8u));
  /* 106e1a09 call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1a0fu);
  /* 106e1a0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1a12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1a14 call 0x106e2420 */
  push32(0x106e1a19u); f_106e2420();
  /* 106e1a19 mov esi, esp */
  ESI = (ESP);
  /* 106e1a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1a1f push 0x1070f460 */
  push32((uint32_t)(0x1070f460u));
  /* 106e1a24 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1a26 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e1a2cu);
  /* 106e1a2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1a2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1a31 call 0x106e2420 */
  push32(0x106e1a36u); f_106e2420();
L_106e1a36:;
  /* 106e1a36 mov esi, esp */
  ESI = (ESP);
  /* 106e1a38 push 8 */
  push32((uint32_t)(0x8u));
  /* 106e1a3a call dword ptr [0x10712418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712418))), 0x106e1a40u);
  /* 106e1a40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1a43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1a45 call 0x106e2420 */
  push32(0x106e1a4au); f_106e2420();
  /* 106e1a4a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1a4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1a51 je 0x106e1a89 */
  if (C.zf) goto L_106e1a89;
  /* 106e1a53 mov esi, esp */
  ESI = (ESP);
  /* 106e1a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1a57 push 0x1070f408 */
  push32((uint32_t)(0x1070f408u));
  /* 106e1a5c call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1a62u);
  /* 106e1a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1a65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1a67 call 0x106e2420 */
  push32(0x106e1a6cu); f_106e2420();
  /* 106e1a6c mov esi, esp */
  ESI = (ESP);
  /* 106e1a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1a72 push 0x1070f460 */
  push32((uint32_t)(0x1070f460u));
  /* 106e1a77 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1a79 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e1a7fu);
  /* 106e1a7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1a82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1a84 call 0x106e2420 */
  push32(0x106e1a89u); f_106e2420();
L_106e1a89:;
  /* 106e1a89 mov esi, esp */
  ESI = (ESP);
  /* 106e1a8b push 9 */
  push32((uint32_t)(0x9u));
  /* 106e1a8d call dword ptr [0x1071241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071241c))), 0x106e1a93u);
  /* 106e1a93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1a96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1a98 call 0x106e2420 */
  push32(0x106e1a9du); f_106e2420();
  /* 106e1a9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1aa4 je 0x106e1b99 */
  if (C.zf) goto L_106e1b99;
  /* 106e1aaa mov esi, esp */
  ESI = (ESP);
  /* 106e1aac push 0x1070f3f8 */
  push32((uint32_t)(0x1070f3f8u));
  /* 106e1ab1 push 0x1070f460 */
  push32((uint32_t)(0x1070f460u));
  /* 106e1ab6 call dword ptr [0x107123fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123fc))), 0x106e1abcu);
  /* 106e1abc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1abf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1ac1 call 0x106e2420 */
  push32(0x106e1ac6u); f_106e2420();
  /* 106e1ac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1ac8 jle 0x106e1b99 */
  if ((C.zf||C.sf!=C.of)) goto L_106e1b99;
  /* 106e1ace mov esi, esp */
  ESI = (ESP);
  /* 106e1ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1ad2 push 0x1070f460 */
  push32((uint32_t)(0x1070f460u));
  /* 106e1ad7 call dword ptr [0x10712404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712404))), 0x106e1addu);
  /* 106e1add add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1ae0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1ae2 call 0x106e2420 */
  push32(0x106e1ae7u); f_106e2420();
  /* 106e1ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1ae9 jle 0x106e1b0e */
  if ((C.zf||C.sf!=C.of)) goto L_106e1b0e;
  /* 106e1aeb mov esi, esp */
  ESI = (ESP);
  /* 106e1aed push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1aef push 0x1070f460 */
  push32((uint32_t)(0x1070f460u));
  /* 106e1af4 push 0x1070f3f8 */
  push32((uint32_t)(0x1070f3f8u));
  /* 106e1af9 call dword ptr [0x10712400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712400))), 0x106e1affu);
  /* 106e1aff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1b02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1b04 call 0x106e2420 */
  push32(0x106e1b09u); f_106e2420();
  /* 106e1b09 jmp 0x106e1b99 */
  goto L_106e1b99;
L_106e1b0e:;
  /* 106e1b0e mov esi, esp */
  ESI = (ESP);
  /* 106e1b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1b12 push 0x1070f468 */
  push32((uint32_t)(0x1070f468u));
  /* 106e1b17 call dword ptr [0x10712404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712404))), 0x106e1b1du);
  /* 106e1b1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1b20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1b22 call 0x106e2420 */
  push32(0x106e1b27u); f_106e2420();
  /* 106e1b27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1b29 jle 0x106e1b63 */
  if ((C.zf||C.sf!=C.of)) goto L_106e1b63;
  /* 106e1b2b mov esi, esp */
  ESI = (ESP);
  /* 106e1b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1b2f push 0x1070f3f8 */
  push32((uint32_t)(0x1070f3f8u));
  /* 106e1b34 call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1b3au);
  /* 106e1b3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1b3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1b3f call 0x106e2420 */
  push32(0x106e1b44u); f_106e2420();
  /* 106e1b44 mov esi, esp */
  ESI = (ESP);
  /* 106e1b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1b4a push 0x1070f468 */
  push32((uint32_t)(0x1070f468u));
  /* 106e1b4f push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1b51 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e1b57u);
  /* 106e1b57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1b5c call 0x106e2420 */
  push32(0x106e1b61u); f_106e2420();
  /* 106e1b61 jmp 0x106e1b99 */
  goto L_106e1b99;
L_106e1b63:;
  /* 106e1b63 mov esi, esp */
  ESI = (ESP);
  /* 106e1b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1b67 push 0x1070f3f8 */
  push32((uint32_t)(0x1070f3f8u));
  /* 106e1b6c call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1b72u);
  /* 106e1b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1b75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1b77 call 0x106e2420 */
  push32(0x106e1b7cu); f_106e2420();
  /* 106e1b7c mov esi, esp */
  ESI = (ESP);
  /* 106e1b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1b82 push 0x1070f428 */
  push32((uint32_t)(0x1070f428u));
  /* 106e1b87 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1b89 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e1b8fu);
  /* 106e1b8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1b92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1b94 call 0x106e2420 */
  push32(0x106e1b99u); f_106e2420();
L_106e1b99:;
  /* 106e1b99 mov esi, esp */
  ESI = (ESP);
  /* 106e1b9b push 8 */
  push32((uint32_t)(0x8u));
  /* 106e1b9d call dword ptr [0x1071241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071241c))), 0x106e1ba3u);
  /* 106e1ba3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1ba6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1ba8 call 0x106e2420 */
  push32(0x106e1badu); f_106e2420();
  /* 106e1bad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1bb4 je 0x106e1ca9 */
  if (C.zf) goto L_106e1ca9;
  /* 106e1bba mov esi, esp */
  ESI = (ESP);
  /* 106e1bbc push 0x1070f408 */
  push32((uint32_t)(0x1070f408u));
  /* 106e1bc1 push 0x1070f460 */
  push32((uint32_t)(0x1070f460u));
  /* 106e1bc6 call dword ptr [0x107123fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123fc))), 0x106e1bccu);
  /* 106e1bcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1bcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1bd1 call 0x106e2420 */
  push32(0x106e1bd6u); f_106e2420();
  /* 106e1bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1bd8 jle 0x106e1ca9 */
  if ((C.zf||C.sf!=C.of)) goto L_106e1ca9;
  /* 106e1bde mov esi, esp */
  ESI = (ESP);
  /* 106e1be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1be2 push 0x1070f460 */
  push32((uint32_t)(0x1070f460u));
  /* 106e1be7 call dword ptr [0x10712404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712404))), 0x106e1bedu);
  /* 106e1bed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1bf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1bf2 call 0x106e2420 */
  push32(0x106e1bf7u); f_106e2420();
  /* 106e1bf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1bf9 jle 0x106e1c1e */
  if ((C.zf||C.sf!=C.of)) goto L_106e1c1e;
  /* 106e1bfb mov esi, esp */
  ESI = (ESP);
  /* 106e1bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1bff push 0x1070f460 */
  push32((uint32_t)(0x1070f460u));
  /* 106e1c04 push 0x1070f408 */
  push32((uint32_t)(0x1070f408u));
  /* 106e1c09 call dword ptr [0x10712400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712400))), 0x106e1c0fu);
  /* 106e1c0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1c12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1c14 call 0x106e2420 */
  push32(0x106e1c19u); f_106e2420();
  /* 106e1c19 jmp 0x106e1ca9 */
  goto L_106e1ca9;
L_106e1c1e:;
  /* 106e1c1e mov esi, esp */
  ESI = (ESP);
  /* 106e1c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1c22 push 0x1070f468 */
  push32((uint32_t)(0x1070f468u));
  /* 106e1c27 call dword ptr [0x10712404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712404))), 0x106e1c2du);
  /* 106e1c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1c30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1c32 call 0x106e2420 */
  push32(0x106e1c37u); f_106e2420();
  /* 106e1c37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1c39 jle 0x106e1c73 */
  if ((C.zf||C.sf!=C.of)) goto L_106e1c73;
  /* 106e1c3b mov esi, esp */
  ESI = (ESP);
  /* 106e1c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1c3f push 0x1070f408 */
  push32((uint32_t)(0x1070f408u));
  /* 106e1c44 call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1c4au);
  /* 106e1c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1c4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1c4f call 0x106e2420 */
  push32(0x106e1c54u); f_106e2420();
  /* 106e1c54 mov esi, esp */
  ESI = (ESP);
  /* 106e1c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1c5a push 0x1070f468 */
  push32((uint32_t)(0x1070f468u));
  /* 106e1c5f push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1c61 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e1c67u);
  /* 106e1c67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1c6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1c6c call 0x106e2420 */
  push32(0x106e1c71u); f_106e2420();
  /* 106e1c71 jmp 0x106e1ca9 */
  goto L_106e1ca9;
L_106e1c73:;
  /* 106e1c73 mov esi, esp */
  ESI = (ESP);
  /* 106e1c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1c77 push 0x1070f408 */
  push32((uint32_t)(0x1070f408u));
  /* 106e1c7c call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1c82u);
  /* 106e1c82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1c85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1c87 call 0x106e2420 */
  push32(0x106e1c8cu); f_106e2420();
  /* 106e1c8c mov esi, esp */
  ESI = (ESP);
  /* 106e1c8e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1c92 push 0x1070f428 */
  push32((uint32_t)(0x1070f428u));
  /* 106e1c97 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1c99 call dword ptr [0x107123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f8))), 0x106e1c9fu);
  /* 106e1c9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1ca2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1ca4 call 0x106e2420 */
  push32(0x106e1ca9u); f_106e2420();
L_106e1ca9:;
  /* 106e1ca9 mov esi, esp */
  ESI = (ESP);
  /* 106e1cab push 5 */
  push32((uint32_t)(0x5u));
  /* 106e1cad call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1cb3u);
  /* 106e1cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1cb8 call 0x106e2420 */
  push32(0x106e1cbdu); f_106e2420();
  /* 106e1cbd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1cc4 je 0x106e1dc0 */
  if (C.zf) goto L_106e1dc0;
  /* 106e1cca mov esi, esp */
  ESI = (ESP);
  /* 106e1ccc push 6 */
  push32((uint32_t)(0x6u));
  /* 106e1cce call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1cd4u);
  /* 106e1cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1cd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1cd9 call 0x106e2420 */
  push32(0x106e1cdeu); f_106e2420();
  /* 106e1cde and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1ce5 je 0x106e1dc0 */
  if (C.zf) goto L_106e1dc0;
  /* 106e1ceb mov esi, esp */
  ESI = (ESP);
  /* 106e1ced push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1cef push 0x1070f460 */
  push32((uint32_t)(0x1070f460u));
  /* 106e1cf4 call dword ptr [0x10712404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712404))), 0x106e1cfau);
  /* 106e1cfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1cfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1cff call 0x106e2420 */
  push32(0x106e1d04u); f_106e2420();
  /* 106e1d04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1d06 jne 0x106e1dc0 */
  if (!C.zf) goto L_106e1dc0;
  /* 106e1d0c mov esi, esp */
  ESI = (ESP);
  /* 106e1d0e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1d10 push 0x1070f468 */
  push32((uint32_t)(0x1070f468u));
  /* 106e1d15 call dword ptr [0x10712404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712404))), 0x106e1d1bu);
  /* 106e1d1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1d1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1d20 call 0x106e2420 */
  push32(0x106e1d25u); f_106e2420();
  /* 106e1d25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1d27 jne 0x106e1dc0 */
  if (!C.zf) goto L_106e1dc0;
  /* 106e1d2d mov esi, esp */
  ESI = (ESP);
  /* 106e1d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1d31 push 0x1070f428 */
  push32((uint32_t)(0x1070f428u));
  /* 106e1d36 call dword ptr [0x10712404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712404))), 0x106e1d3cu);
  /* 106e1d3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1d3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1d41 call 0x106e2420 */
  push32(0x106e1d46u); f_106e2420();
  /* 106e1d46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1d48 jne 0x106e1dc0 */
  if (!C.zf) goto L_106e1dc0;
  /* 106e1d4a mov esi, esp */
  ESI = (ESP);
  /* 106e1d4c push 3 */
  push32((uint32_t)(0x3u));
  /* 106e1d4e call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1d54u);
  /* 106e1d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1d57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1d59 call 0x106e2420 */
  push32(0x106e1d5eu); f_106e2420();
  /* 106e1d5e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1d63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1d65 jne 0x106e1dc0 */
  if (!C.zf) goto L_106e1dc0;
  /* 106e1d67 mov esi, esp */
  ESI = (ESP);
  /* 106e1d69 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e1d6b call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1d71u);
  /* 106e1d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1d74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1d76 call 0x106e2420 */
  push32(0x106e1d7bu); f_106e2420();
  /* 106e1d7b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1d82 jne 0x106e1dc0 */
  if (!C.zf) goto L_106e1dc0;
  /* 106e1d84 mov esi, esp */
  ESI = (ESP);
  /* 106e1d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1d88 push 5 */
  push32((uint32_t)(0x5u));
  /* 106e1d8a call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e1d90u);
  /* 106e1d90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1d93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1d95 call 0x106e2420 */
  push32(0x106e1d9au); f_106e2420();
  /* 106e1d9a mov esi, esp */
  ESI = (ESP);
  /* 106e1d9c push 0x1070a0f4 */
  push32((uint32_t)(0x1070a0f4u));
  /* 106e1da1 call dword ptr [0x107123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f0))), 0x106e1da7u);
  /* 106e1da7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1daa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1dac call 0x106e2420 */
  push32(0x106e1db1u); f_106e2420();
  /* 106e1db1 mov esi, esp */
  ESI = (ESP);
  /* 106e1db3 call dword ptr [0x10712420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712420))), 0x106e1db9u);
  /* 106e1db9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1dbb call 0x106e2420 */
  push32(0x106e1dc0u); f_106e2420();
L_106e1dc0:;
  /* 106e1dc0 mov esi, esp */
  ESI = (ESP);
  /* 106e1dc2 push 6 */
  push32((uint32_t)(0x6u));
  /* 106e1dc4 call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1dcau);
  /* 106e1dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1dcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1dcf call 0x106e2420 */
  push32(0x106e1dd4u); f_106e2420();
  /* 106e1dd4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1dd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1ddb je 0x106e1e9f */
  if (C.zf) goto L_106e1e9f;
  /* 106e1de1 push 0x1070f3f8 */
  push32((uint32_t)(0x1070f3f8u));
  /* 106e1de6 call 0x106e1005 */
  push32(0x106e1debu); f_106e1005();
  /* 106e1deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1df0 jne 0x106e1e9f */
  if (!C.zf) goto L_106e1e9f;
  /* 106e1df6 push 0x1070f408 */
  push32((uint32_t)(0x1070f408u));
  /* 106e1dfb call 0x106e1005 */
  push32(0x106e1e00u); f_106e1005();
  /* 106e1e00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1e03 mov esi, eax */
  ESI = (EAX);
  /* 106e1e05 push 0x1070f418 */
  push32((uint32_t)(0x1070f418u));
  /* 106e1e0a call 0x106e1005 */
  push32(0x106e1e0fu); f_106e1005();
  /* 106e1e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1e12 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1e14 jne 0x106e1e9f */
  if (!C.zf) goto L_106e1e9f;
  /* 106e1e1a push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1e1c push 0x1070f420 */
  push32((uint32_t)(0x1070f420u));
  /* 106e1e21 call 0x106e100f */
  push32(0x106e1e26u); f_106e100f();
  /* 106e1e26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1e2b jne 0x106e1e9f */
  if (!C.zf) goto L_106e1e9f;
  /* 106e1e2d mov esi, esp */
  ESI = (ESP);
  /* 106e1e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1e31 push 6 */
  push32((uint32_t)(0x6u));
  /* 106e1e33 call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e1e39u);
  /* 106e1e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1e3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1e3e call 0x106e2420 */
  push32(0x106e1e43u); f_106e2420();
  /* 106e1e43 mov esi, esp */
  ESI = (ESP);
  /* 106e1e45 push 7 */
  push32((uint32_t)(0x7u));
  /* 106e1e47 call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1e4du);
  /* 106e1e4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1e50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1e52 call 0x106e2420 */
  push32(0x106e1e57u); f_106e2420();
  /* 106e1e57 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1e5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1e5e je 0x106e1e79 */
  if (C.zf) goto L_106e1e79;
  /* 106e1e60 mov esi, esp */
  ESI = (ESP);
  /* 106e1e62 push 0x1070a0ec */
  push32((uint32_t)(0x1070a0ecu));
  /* 106e1e67 call dword ptr [0x107123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f0))), 0x106e1e6du);
  /* 106e1e6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1e70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1e72 call 0x106e2420 */
  push32(0x106e1e77u); f_106e2420();
  /* 106e1e77 jmp 0x106e1e9f */
  goto L_106e1e9f;
L_106e1e79:;
  /* 106e1e79 mov esi, esp */
  ESI = (ESP);
  /* 106e1e7b push 0x1070a0e4 */
  push32((uint32_t)(0x1070a0e4u));
  /* 106e1e80 call dword ptr [0x107123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f0))), 0x106e1e86u);
  /* 106e1e86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1e89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1e8b call 0x106e2420 */
  push32(0x106e1e90u); f_106e2420();
  /* 106e1e90 mov esi, esp */
  ESI = (ESP);
  /* 106e1e92 call dword ptr [0x10712424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712424))), 0x106e1e98u);
  /* 106e1e98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1e9a call 0x106e2420 */
  push32(0x106e1e9fu); f_106e2420();
L_106e1e9f:;
  /* 106e1e9f mov esi, esp */
  ESI = (ESP);
  /* 106e1ea1 push 7 */
  push32((uint32_t)(0x7u));
  /* 106e1ea3 call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1ea9u);
  /* 106e1ea9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1eac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1eae call 0x106e2420 */
  push32(0x106e1eb3u); f_106e2420();
  /* 106e1eb3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1eba je 0x106e1f65 */
  if (C.zf) goto L_106e1f65;
  /* 106e1ec0 push 0x1070f410 */
  push32((uint32_t)(0x1070f410u));
  /* 106e1ec5 call 0x106e1005 */
  push32(0x106e1ecau); f_106e1005();
  /* 106e1eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1ecd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1ed0 jge 0x106e1f65 */
  if ((C.sf==C.of)) goto L_106e1f65;
  /* 106e1ed6 mov esi, esp */
  ESI = (ESP);
  /* 106e1ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1eda push 7 */
  push32((uint32_t)(0x7u));
  /* 106e1edc call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e1ee2u);
  /* 106e1ee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1ee5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1ee7 call 0x106e2420 */
  push32(0x106e1eecu); f_106e2420();
  /* 106e1eec mov esi, esp */
  ESI = (ESP);
  /* 106e1eee push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1ef0 push 0x1070f410 */
  push32((uint32_t)(0x1070f410u));
  /* 106e1ef5 call dword ptr [0x107123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f4))), 0x106e1efbu);
  /* 106e1efb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1efe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1f00 call 0x106e2420 */
  push32(0x106e1f05u); f_106e2420();
  /* 106e1f05 mov esi, esp */
  ESI = (ESP);
  /* 106e1f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1f0b push 0x1070f470 */
  push32((uint32_t)(0x1070f470u));
  /* 106e1f10 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e1f12 call dword ptr [0x10712428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712428))), 0x106e1f18u);
  /* 106e1f18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1f1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1f1d call 0x106e2420 */
  push32(0x106e1f22u); f_106e2420();
  /* 106e1f22 mov esi, esp */
  ESI = (ESP);
  /* 106e1f24 push 6 */
  push32((uint32_t)(0x6u));
  /* 106e1f26 call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1f2cu);
  /* 106e1f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1f2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1f31 call 0x106e2420 */
  push32(0x106e1f36u); f_106e2420();
  /* 106e1f36 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1f3d jne 0x106e1f65 */
  if (!C.zf) goto L_106e1f65;
  /* 106e1f3f mov esi, esp */
  ESI = (ESP);
  /* 106e1f41 push 0x1070a0e4 */
  push32((uint32_t)(0x1070a0e4u));
  /* 106e1f46 call dword ptr [0x107123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f0))), 0x106e1f4cu);
  /* 106e1f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1f4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1f51 call 0x106e2420 */
  push32(0x106e1f56u); f_106e2420();
  /* 106e1f56 mov esi, esp */
  ESI = (ESP);
  /* 106e1f58 call dword ptr [0x10712424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712424))), 0x106e1f5eu);
  /* 106e1f5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1f60 call 0x106e2420 */
  push32(0x106e1f65u); f_106e2420();
L_106e1f65:;
  /* 106e1f65 mov esi, esp */
  ESI = (ESP);
  /* 106e1f67 push 8 */
  push32((uint32_t)(0x8u));
  /* 106e1f69 call dword ptr [0x107123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e8))), 0x106e1f6fu);
  /* 106e1f6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1f72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1f74 call 0x106e2420 */
  push32(0x106e1f79u); f_106e2420();
  /* 106e1f79 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e1f7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1f80 je 0x106e1fcf */
  if (C.zf) goto L_106e1fcf;
  /* 106e1f82 push 0x1070f3e0 */
  push32((uint32_t)(0x1070f3e0u));
  /* 106e1f87 call 0x106e1005 */
  push32(0x106e1f8cu); f_106e1005();
  /* 106e1f8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1f8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e1f91 jne 0x106e1fcf */
  if (!C.zf) goto L_106e1fcf;
  /* 106e1f93 mov esi, esp */
  ESI = (ESP);
  /* 106e1f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e1f97 push 8 */
  push32((uint32_t)(0x8u));
  /* 106e1f99 call dword ptr [0x107123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123ec))), 0x106e1f9fu);
  /* 106e1f9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1fa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1fa4 call 0x106e2420 */
  push32(0x106e1fa9u); f_106e2420();
  /* 106e1fa9 mov esi, esp */
  ESI = (ESP);
  /* 106e1fab push 0x1070a0dc */
  push32((uint32_t)(0x1070a0dcu));
  /* 106e1fb0 call dword ptr [0x107123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123f0))), 0x106e1fb6u);
  /* 106e1fb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1fb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1fbb call 0x106e2420 */
  push32(0x106e1fc0u); f_106e2420();
  /* 106e1fc0 mov esi, esp */
  ESI = (ESP);
  /* 106e1fc2 call dword ptr [0x10712420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712420))), 0x106e1fc8u);
  /* 106e1fc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1fca call 0x106e2420 */
  push32(0x106e1fcfu); f_106e2420();
L_106e1fcf:;
  /* 106e1fcf pop edi */
  EDI = (pop32());
  /* 106e1fd0 pop esi */
  ESI = (pop32());
  /* 106e1fd1 pop ebx */
  EBX = (pop32());
  /* 106e1fd2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e1fd5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e1fd7 call 0x106e2420 */
  push32(0x106e1fdcu); f_106e2420();
  /* 106e1fdc mov esp, ebp */
  ESP = (EBP);
  /* 106e1fde pop ebp */
  EBP = (pop32());
  /* 106e1fdf ret  */
  ESPCHK(0x106e1410u, _esp0);
  ESP += 4; return;
}

/* FUN_100022e0 @ 0x106e22e0 (63 bytes, 26 insns) */
void f_106e22e0(void) {
  FTRACE(0x106e22e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e22e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e22e1 mov ebp, esp */
  EBP = (ESP);
  /* 106e22e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e22e6 push ebx */
  push32((uint32_t)(EBX));
  /* 106e22e7 push esi */
  push32((uint32_t)(ESI));
  /* 106e22e8 push edi */
  push32((uint32_t)(EDI));
  /* 106e22e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 106e22ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 106e22f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106e22f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106e22f8 mov esi, esp */
  ESI = (ESP);
  /* 106e22fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e22fd push eax */
  push32((uint32_t)(EAX));
  /* 106e22fe call dword ptr [0x107123e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e4))), 0x106e2304u);
  /* 106e2304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2307 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2309 call 0x106e2420 */
  push32(0x106e230eu); f_106e2420();
  /* 106e230e pop edi */
  EDI = (pop32());
  /* 106e230f pop esi */
  ESI = (pop32());
  /* 106e2310 pop ebx */
  EBX = (pop32());
  /* 106e2311 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2314 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2316 call 0x106e2420 */
  push32(0x106e231bu); f_106e2420();
  /* 106e231b mov esp, ebp */
  ESP = (EBP);
  /* 106e231d pop ebp */
  EBP = (pop32());
  /* 106e231e ret  */
  ESPCHK(0x106e22e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002330 @ 0x106e2330 (67 bytes, 28 insns) */
void f_106e2330(void) {
  FTRACE(0x106e2330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e2330 push ebp */
  push32((uint32_t)(EBP));
  /* 106e2331 mov ebp, esp */
  EBP = (ESP);
  /* 106e2333 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e2336 push ebx */
  push32((uint32_t)(EBX));
  /* 106e2337 push esi */
  push32((uint32_t)(ESI));
  /* 106e2338 push edi */
  push32((uint32_t)(EDI));
  /* 106e2339 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 106e233c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 106e2341 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 106e2346 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106e2348 mov esi, esp */
  ESI = (ESP);
  /* 106e234a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 106e234d push eax */
  push32((uint32_t)(EAX));
  /* 106e234e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2351 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2352 call dword ptr [0x107123e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107123e0))), 0x106e2358u);
  /* 106e2358 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e235b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e235d call 0x106e2420 */
  push32(0x106e2362u); f_106e2420();
  /* 106e2362 pop edi */
  EDI = (pop32());
  /* 106e2363 pop esi */
  ESI = (pop32());
  /* 106e2364 pop ebx */
  EBX = (pop32());
  /* 106e2365 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2368 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e236a call 0x106e2420 */
  push32(0x106e236fu); f_106e2420();
  /* 106e236f mov esp, ebp */
  ESP = (EBP);
  /* 106e2371 pop ebp */
  EBP = (pop32());
  /* 106e2372 ret  */
  ESPCHK(0x106e2330u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x106e2420 (56 bytes, 28 insns) */
void f_106e2420(void) {
  FTRACE(0x106e2420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e2420 jne 0x106e2423 */
  if (!C.zf) goto L_106e2423;
  /* 106e2422 ret  */
  ESPCHK(0x106e2420u, _esp0);
  ESP += 4; return;
L_106e2423:;
  /* 106e2423 push ebp */
  push32((uint32_t)(EBP));
  /* 106e2424 mov ebp, esp */
  EBP = (ESP);
  /* 106e2426 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e2429 push eax */
  push32((uint32_t)(EAX));
  /* 106e242a push edx */
  push32((uint32_t)(EDX));
  /* 106e242b push ebx */
  push32((uint32_t)(EBX));
  /* 106e242c push esi */
  push32((uint32_t)(ESI));
  /* 106e242d push edi */
  push32((uint32_t)(EDI));
  /* 106e242e push 0x1070a130 */
  push32((uint32_t)(0x1070a130u));
  /* 106e2433 push 0x1070a12c */
  push32((uint32_t)(0x1070a12cu));
  /* 106e2438 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 106e243a push 0x1070a11c */
  push32((uint32_t)(0x1070a11cu));
  /* 106e243f push 1 */
  push32((uint32_t)(0x1u));
  /* 106e2441 call 0x106e27f0 */
  push32(0x106e2446u); f_106e27f0();
  /* 106e2446 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2449 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e244c jne 0x106e244f */
  if (!C.zf) goto L_106e244f;
  /* 106e244e int3  */
  x86_unimpl("int3 @ 0x106e244e");
L_106e244f:;
  /* 106e244f pop edi */
  EDI = (pop32());
  /* 106e2450 pop esi */
  ESI = (pop32());
  /* 106e2451 pop ebx */
  EBX = (pop32());
  /* 106e2452 pop edx */
  EDX = (pop32());
  /* 106e2453 pop eax */
  EAX = (pop32());
  /* 106e2454 mov esp, ebp */
  ESP = (EBP);
  /* 106e2456 pop ebp */
  EBP = (pop32());
  /* 106e2457 ret  */
  ESPCHK(0x106e2420u, _esp0);
  ESP += 4; return;
}

/* FUN_10002460 @ 0x106e2460 (313 bytes, 78 insns) */
void f_106e2460(void) {
  FTRACE(0x106e2460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e2460 push ebp */
  push32((uint32_t)(EBP));
  /* 106e2461 mov ebp, esp */
  EBP = (ESP);
  /* 106e2463 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2467 jne 0x106e2527 */
  if (!C.zf) goto L_106e2527;
  /* 106e246d call dword ptr [0x107122c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122c0))), 0x106e2473u);
  /* 106e2473 mov dword ptr [0x1070f4c0], eax */
  w32((uint32_t)(0x1070f4c0), (EAX));
  /* 106e2478 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e247a call 0x106e5f20 */
  push32(0x106e247fu); f_106e5f20();
  /* 106e247f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2482 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e2484 jne 0x106e248d */
  if (!C.zf) goto L_106e248d;
  /* 106e2486 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e2488 jmp 0x106e2595 */
  goto L_106e2595;
L_106e248d:;
  /* 106e248d mov eax, dword ptr [0x1070f4c0] */
  EAX = (r32((uint32_t)(0x1070f4c0)));
  /* 106e2492 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 106e2495 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e249a mov dword ptr [0x1070f4cc], eax */
  w32((uint32_t)(0x1070f4cc), (EAX));
  /* 106e249f mov ecx, dword ptr [0x1070f4c0] */
  ECX = (r32((uint32_t)(0x1070f4c0)));
  /* 106e24a5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e24ab mov dword ptr [0x1070f4c8], ecx */
  w32((uint32_t)(0x1070f4c8), (ECX));
  /* 106e24b1 mov edx, dword ptr [0x1070f4c8] */
  EDX = (r32((uint32_t)(0x1070f4c8)));
  /* 106e24b7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 106e24ba add edx, dword ptr [0x1070f4cc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1070f4cc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e24c0 mov dword ptr [0x1070f4c4], edx */
  w32((uint32_t)(0x1070f4c4), (EDX));
  /* 106e24c6 mov eax, dword ptr [0x1070f4c0] */
  EAX = (r32((uint32_t)(0x1070f4c0)));
  /* 106e24cb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106e24ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e24d3 mov dword ptr [0x1070f4c0], eax */
  w32((uint32_t)(0x1070f4c0), (EAX));
  /* 106e24d8 call 0x106e3090 */
  push32(0x106e24ddu); f_106e3090();
  /* 106e24dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e24df jne 0x106e24ed */
  if (!C.zf) goto L_106e24ed;
  /* 106e24e1 call 0x106e5f70 */
  push32(0x106e24e6u); f_106e5f70();
  /* 106e24e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e24e8 jmp 0x106e2595 */
  goto L_106e2595;
L_106e24ed:;
  /* 106e24ed call dword ptr [0x107122bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122bc))), 0x106e24f3u);
  /* 106e24f3 mov dword ptr [0x1071100c], eax */
  w32((uint32_t)(0x1071100c), (EAX));
  /* 106e24f8 call 0x106e5d00 */
  push32(0x106e24fdu); f_106e5d00();
  /* 106e24fd mov dword ptr [0x1070f4a8], eax */
  w32((uint32_t)(0x1070f4a8), (EAX));
  /* 106e2502 call 0x106e3340 */
  push32(0x106e2507u); f_106e3340();
  /* 106e2507 call 0x106e57f0 */
  push32(0x106e250cu); f_106e57f0();
  /* 106e250c call 0x106e56a0 */
  push32(0x106e2511u); f_106e56a0();
  /* 106e2511 call 0x106e2e90 */
  push32(0x106e2516u); f_106e2e90();
  /* 106e2516 mov ecx, dword ptr [0x1070f4a4] */
  ECX = (r32((uint32_t)(0x1070f4a4)));
  /* 106e251c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e251f mov dword ptr [0x1070f4a4], ecx */
  w32((uint32_t)(0x1070f4a4), (ECX));
  /* 106e2525 jmp 0x106e2590 */
  goto L_106e2590;
L_106e2527:;
  /* 106e2527 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e252b jne 0x106e2580 */
  if (!C.zf) goto L_106e2580;
  /* 106e252d cmp dword ptr [0x1070f4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2534 jle 0x106e257a */
  if ((C.zf||C.sf!=C.of)) goto L_106e257a;
  /* 106e2536 mov edx, dword ptr [0x1070f4a4] */
  EDX = (r32((uint32_t)(0x1070f4a4)));
  /* 106e253c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e253f mov dword ptr [0x1070f4a4], edx */
  w32((uint32_t)(0x1070f4a4), (EDX));
  /* 106e2545 cmp dword ptr [0x1070f4f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e254c jne 0x106e2553 */
  if (!C.zf) goto L_106e2553;
  /* 106e254e call 0x106e2f10 */
  push32(0x106e2553u); f_106e2f10();
L_106e2553:;
  /* 106e2553 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106e2555 call 0x106e4c40 */
  push32(0x106e255au); f_106e4c40();
  /* 106e255a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e255d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 106e2560 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e2562 je 0x106e2569 */
  if (C.zf) goto L_106e2569;
  /* 106e2564 call 0x106e5550 */
  push32(0x106e2569u); f_106e5550();
L_106e2569:;
  /* 106e2569 call 0x106e3670 */
  push32(0x106e256eu); f_106e3670();
  /* 106e256e call 0x106e3120 */
  push32(0x106e2573u); f_106e3120();
  /* 106e2573 call 0x106e5f70 */
  push32(0x106e2578u); f_106e5f70();
  /* 106e2578 jmp 0x106e257e */
  goto L_106e257e;
L_106e257a:;
  /* 106e257a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e257c jmp 0x106e2595 */
  goto L_106e2595;
L_106e257e:;
  /* 106e257e jmp 0x106e2590 */
  goto L_106e2590;
L_106e2580:;
  /* 106e2580 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2584 jne 0x106e2590 */
  if (!C.zf) goto L_106e2590;
  /* 106e2586 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e2588 call 0x106e3210 */
  push32(0x106e258du); f_106e3210();
  /* 106e258d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e2590:;
  /* 106e2590 mov eax, 1 */
  EAX = (0x1u);
L_106e2595:;
  /* 106e2595 pop ebp */
  EBP = (pop32());
  /* 106e2596 ret 0xc */
  ESPCHK(0x106e2460u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x106e25a0 (243 bytes, 86 insns) */
void f_106e25a0(void) {
  FTRACE(0x106e25a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e25a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e25a1 mov ebp, esp */
  EBP = (ESP);
  /* 106e25a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e25a4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106e25ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e25af jne 0x106e25c1 */
  if (!C.zf) goto L_106e25c1;
  /* 106e25b1 cmp dword ptr [0x1070f4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e25b8 jne 0x106e25c1 */
  if (!C.zf) goto L_106e25c1;
  /* 106e25ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e25bc jmp 0x106e268d */
  goto L_106e268d;
L_106e25c1:;
  /* 106e25c1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e25c5 je 0x106e25cd */
  if (C.zf) goto L_106e25cd;
  /* 106e25c7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e25cb jne 0x106e260f */
  if (!C.zf) goto L_106e260f;
L_106e25cd:;
  /* 106e25cd cmp dword ptr [0x1071101c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1071101c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e25d4 je 0x106e25eb */
  if (C.zf) goto L_106e25eb;
  /* 106e25d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e25d9 push eax */
  push32((uint32_t)(EAX));
  /* 106e25da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e25dd push ecx */
  push32((uint32_t)(ECX));
  /* 106e25de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e25e1 push edx */
  push32((uint32_t)(EDX));
  /* 106e25e2 call dword ptr [0x1071101c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071101c))), 0x106e25e8u);
  /* 106e25e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e25eb:;
  /* 106e25eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e25ef je 0x106e2605 */
  if (C.zf) goto L_106e2605;
  /* 106e25f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e25f4 push eax */
  push32((uint32_t)(EAX));
  /* 106e25f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e25f8 push ecx */
  push32((uint32_t)(ECX));
  /* 106e25f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e25fc push edx */
  push32((uint32_t)(EDX));
  /* 106e25fd call 0x106e2460 */
  push32(0x106e2602u); f_106e2460();
  /* 106e2602 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e2605:;
  /* 106e2605 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2609 jne 0x106e260f */
  if (!C.zf) goto L_106e260f;
  /* 106e260b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e260d jmp 0x106e268d */
  goto L_106e268d;
L_106e260f:;
  /* 106e260f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e2612 push eax */
  push32((uint32_t)(EAX));
  /* 106e2613 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e2616 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2617 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e261a push edx */
  push32((uint32_t)(EDX));
  /* 106e261b call 0x106e1014 */
  push32(0x106e2620u); f_106e1014();
  /* 106e2620 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e2623 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2627 jne 0x106e263e */
  if (!C.zf) goto L_106e263e;
  /* 106e2629 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e262d jne 0x106e263e */
  if (!C.zf) goto L_106e263e;
  /* 106e262f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e2632 push eax */
  push32((uint32_t)(EAX));
  /* 106e2633 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e2635 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2638 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2639 call 0x106e2460 */
  push32(0x106e263eu); f_106e2460();
L_106e263e:;
  /* 106e263e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2642 je 0x106e264a */
  if (C.zf) goto L_106e264a;
  /* 106e2644 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2648 jne 0x106e268a */
  if (!C.zf) goto L_106e268a;
L_106e264a:;
  /* 106e264a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e264d push edx */
  push32((uint32_t)(EDX));
  /* 106e264e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e2651 push eax */
  push32((uint32_t)(EAX));
  /* 106e2652 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2655 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2656 call 0x106e2460 */
  push32(0x106e265bu); f_106e2460();
  /* 106e265b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e265d jne 0x106e2666 */
  if (!C.zf) goto L_106e2666;
  /* 106e265f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106e2666:;
  /* 106e2666 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e266a je 0x106e268a */
  if (C.zf) goto L_106e268a;
  /* 106e266c cmp dword ptr [0x1071101c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1071101c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2673 je 0x106e268a */
  if (C.zf) goto L_106e268a;
  /* 106e2675 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e2678 push edx */
  push32((uint32_t)(EDX));
  /* 106e2679 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e267c push eax */
  push32((uint32_t)(EAX));
  /* 106e267d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2680 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2681 call dword ptr [0x1071101c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071101c))), 0x106e2687u);
  /* 106e2687 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e268a:;
  /* 106e268a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106e268d:;
  /* 106e268d mov esp, ebp */
  ESP = (EBP);
  /* 106e268f pop ebp */
  EBP = (pop32());
  /* 106e2690 ret 0xc */
  ESPCHK(0x106e25a0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x106e26a0 (58 bytes, 18 insns) */
void f_106e26a0(void) {
  FTRACE(0x106e26a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e26a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e26a1 mov ebp, esp */
  EBP = (ESP);
  /* 106e26a3 cmp dword ptr [0x1070f4b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e26aa je 0x106e26be */
  if (C.zf) goto L_106e26be;
  /* 106e26ac cmp dword ptr [0x1070f4b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e26b3 jne 0x106e26c3 */
  if (!C.zf) goto L_106e26c3;
  /* 106e26b5 cmp dword ptr [0x1070f4b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e26bc jne 0x106e26c3 */
  if (!C.zf) goto L_106e26c3;
L_106e26be:;
  /* 106e26be call 0x106e6010 */
  push32(0x106e26c3u); f_106e6010();
L_106e26c3:;
  /* 106e26c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e26c6 push eax */
  push32((uint32_t)(EAX));
  /* 106e26c7 call 0x106e6060 */
  push32(0x106e26ccu); f_106e6060();
  /* 106e26cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e26cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 106e26d4 call dword ptr [0x1070da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070da30))), 0x106e26dau);
  /* 106e26da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e26dd pop ebp */
  EBP = (pop32());
  /* 106e26de ret  */
  ESPCHK(0x106e26a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026e0 @ 0x106e26e0 (11 bytes, 5 insns) */
void f_106e26e0(void) {
  FTRACE(0x106e26e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e26e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e26e1 mov ebp, esp */
  EBP = (ESP);
  /* 106e26e3 call dword ptr [0x107122c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122c4))), 0x106e26e9u);
  /* 106e26e9 pop ebp */
  EBP = (pop32());
  /* 106e26ea ret  */
  ESPCHK(0x106e26e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x106e26f0 (87 bytes, 30 insns) */
void f_106e26f0(void) {
  FTRACE(0x106e26f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e26f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e26f1 mov ebp, esp */
  EBP = (ESP);
  /* 106e26f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e26f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e26f8 jl 0x106e2700 */
  if ((C.sf!=C.of)) goto L_106e2700;
  /* 106e26fa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e26fe jl 0x106e2705 */
  if ((C.sf!=C.of)) goto L_106e2705;
L_106e2700:;
  /* 106e2700 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e2703 jmp 0x106e2743 */
  goto L_106e2743;
L_106e2705:;
  /* 106e2705 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2709 jne 0x106e2717 */
  if (!C.zf) goto L_106e2717;
  /* 106e270b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e270e mov eax, dword ptr [eax*4 + 0x1070da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1070da38)));
  /* 106e2715 jmp 0x106e2743 */
  goto L_106e2743;
L_106e2717:;
  /* 106e2717 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e271a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 106e271d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e271f je 0x106e2726 */
  if (C.zf) goto L_106e2726;
  /* 106e2721 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e2724 jmp 0x106e2743 */
  goto L_106e2743;
L_106e2726:;
  /* 106e2726 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2729 mov eax, dword ptr [edx*4 + 0x1070da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1070da38)));
  /* 106e2730 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e2733 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2736 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e2739 mov dword ptr [ecx*4 + 0x1070da38], edx */
  w32((uint32_t)(ECX*4 + 0x1070da38), (EDX));
  /* 106e2740 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106e2743:;
  /* 106e2743 mov esp, ebp */
  ESP = (EBP);
  /* 106e2745 pop ebp */
  EBP = (pop32());
  /* 106e2746 ret  */
  ESPCHK(0x106e26f0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x106e2750 (126 bytes, 38 insns) */
void f_106e2750(void) {
  FTRACE(0x106e2750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e2750 push ebp */
  push32((uint32_t)(EBP));
  /* 106e2751 mov ebp, esp */
  EBP = (ESP);
  /* 106e2753 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2754 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2758 jl 0x106e2760 */
  if ((C.sf!=C.of)) goto L_106e2760;
  /* 106e275a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e275e jl 0x106e2767 */
  if ((C.sf!=C.of)) goto L_106e2767;
L_106e2760:;
  /* 106e2760 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 106e2765 jmp 0x106e27ca */
  goto L_106e27ca;
L_106e2767:;
  /* 106e2767 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e276b jne 0x106e2779 */
  if (!C.zf) goto L_106e2779;
  /* 106e276d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2770 mov eax, dword ptr [eax*4 + 0x1070da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1070da44)));
  /* 106e2777 jmp 0x106e27ca */
  goto L_106e27ca;
L_106e2779:;
  /* 106e2779 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e277c mov edx, dword ptr [ecx*4 + 0x1070da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1070da44)));
  /* 106e2783 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e2786 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e278a jne 0x106e27a0 */
  if (!C.zf) goto L_106e27a0;
  /* 106e278c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 106e278e call dword ptr [0x107122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122c8))), 0x106e2794u);
  /* 106e2794 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2797 mov dword ptr [ecx*4 + 0x1070da44], eax */
  w32((uint32_t)(ECX*4 + 0x1070da44), (EAX));
  /* 106e279e jmp 0x106e27c7 */
  goto L_106e27c7;
L_106e27a0:;
  /* 106e27a0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e27a4 jne 0x106e27ba */
  if (!C.zf) goto L_106e27ba;
  /* 106e27a6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 106e27a8 call dword ptr [0x107122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122c8))), 0x106e27aeu);
  /* 106e27ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e27b1 mov dword ptr [edx*4 + 0x1070da44], eax */
  w32((uint32_t)(EDX*4 + 0x1070da44), (EAX));
  /* 106e27b8 jmp 0x106e27c7 */
  goto L_106e27c7;
L_106e27ba:;
  /* 106e27ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e27bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e27c0 mov dword ptr [eax*4 + 0x1070da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1070da44), (ECX));
L_106e27c7:;
  /* 106e27c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106e27ca:;
  /* 106e27ca mov esp, ebp */
  ESP = (EBP);
  /* 106e27cc pop ebp */
  EBP = (pop32());
  /* 106e27cd ret  */
  ESPCHK(0x106e2750u, _esp0);
  ESP += 4; return;
}

/* FUN_100027d0 @ 0x106e27d0 (28 bytes, 11 insns) */
void f_106e27d0(void) {
  FTRACE(0x106e27d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e27d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e27d1 mov ebp, esp */
  EBP = (ESP);
  /* 106e27d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e27d4 mov eax, dword ptr [0x10711000] */
  EAX = (r32((uint32_t)(0x10711000)));
  /* 106e27d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e27dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e27df mov dword ptr [0x10711000], ecx */
  w32((uint32_t)(0x10711000), (ECX));
  /* 106e27e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e27e8 mov esp, ebp */
  ESP = (EBP);
  /* 106e27ea pop ebp */
  EBP = (pop32());
  /* 106e27eb ret  */
  ESPCHK(0x106e27d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027f0 @ 0x106e27f0 (912 bytes, 248 insns) */
void f_106e27f0(void) {
  FTRACE(0x106e27f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e27f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e27f1 mov ebp, esp */
  EBP = (ESP);
  /* 106e27f3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 106e27f8 call 0x106e68d0 */
  push32(0x106e27fdu); f_106e68d0();
  /* 106e27fd push edi */
  push32((uint32_t)(EDI));
  /* 106e27fe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 106e2805 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 106e280a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e280c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 106e2812 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106e2814 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 106e2816 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 106e2817 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 106e281e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 106e2823 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e2825 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 106e282b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106e282d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 106e282f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 106e2830 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 106e2837 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 106e283c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e283e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 106e2844 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106e2846 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 106e2848 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 106e2849 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 106e284c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 106e2852 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2856 jl 0x106e285e */
  if ((C.sf!=C.of)) goto L_106e285e;
  /* 106e2858 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e285c jl 0x106e2866 */
  if ((C.sf!=C.of)) goto L_106e2866;
L_106e285e:;
  /* 106e285e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e2861 jmp 0x106e2b7b */
  goto L_106e2b7b;
L_106e2866:;
  /* 106e2866 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e286a jne 0x106e2910 */
  if (!C.zf) goto L_106e2910;
  /* 106e2870 push 0x1070da34 */
  push32((uint32_t)(0x1070da34u));
  /* 106e2875 call dword ptr [0x107122e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122e0))), 0x106e287bu);
  /* 106e287b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e287d jle 0x106e2910 */
  if ((C.zf||C.sf!=C.of)) goto L_106e2910;
  /* 106e2883 cmp dword ptr [0x1070f4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e288a jne 0x106e28ce */
  if (!C.zf) goto L_106e28ce;
  /* 106e288c push 0x1070a2d8 */
  push32((uint32_t)(0x1070a2d8u));
  /* 106e2891 call dword ptr [0x107122dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122dc))), 0x106e2897u);
  /* 106e2897 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 106e289d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e28a4 je 0x106e28c6 */
  if (C.zf) goto L_106e28c6;
  /* 106e28a6 push 0x1070a2cc */
  push32((uint32_t)(0x1070a2ccu));
  /* 106e28ab mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 106e28b1 push ecx */
  push32((uint32_t)(ECX));
  /* 106e28b2 call dword ptr [0x107122d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d8))), 0x106e28b8u);
  /* 106e28b8 mov dword ptr [0x1070f4b8], eax */
  w32((uint32_t)(0x1070f4b8), (EAX));
  /* 106e28bd cmp dword ptr [0x1070f4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e28c4 jne 0x106e28ce */
  if (!C.zf) goto L_106e28ce;
L_106e28c6:;
  /* 106e28c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e28c9 jmp 0x106e2b7b */
  goto L_106e2b7b;
L_106e28ce:;
  /* 106e28ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e28d1 push edx */
  push32((uint32_t)(EDX));
  /* 106e28d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e28d5 push eax */
  push32((uint32_t)(EAX));
  /* 106e28d6 push 0x1070a298 */
  push32((uint32_t)(0x1070a298u));
  /* 106e28db lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 106e28e1 push ecx */
  push32((uint32_t)(ECX));
  /* 106e28e2 call dword ptr [0x1070f4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f4b8))), 0x106e28e8u);
  /* 106e28e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e28eb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 106e28f1 push edx */
  push32((uint32_t)(EDX));
  /* 106e28f2 call dword ptr [0x107122d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d4))), 0x106e28f8u);
  /* 106e28f8 push 0x1070da34 */
  push32((uint32_t)(0x1070da34u));
  /* 106e28fd call dword ptr [0x107122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d0))), 0x106e2903u);
  /* 106e2903 call 0x106e26e0 */
  push32(0x106e2908u); f_106e26e0();
  /* 106e2908 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e290b jmp 0x106e2b7b */
  goto L_106e2b7b;
L_106e2910:;
  /* 106e2910 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2914 je 0x106e294d */
  if (C.zf) goto L_106e294d;
  /* 106e2916 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 106e291c push eax */
  push32((uint32_t)(EAX));
  /* 106e291d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e2920 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2921 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 106e2926 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 106e292c push edx */
  push32((uint32_t)(EDX));
  /* 106e292d call 0x106e67d0 */
  push32(0x106e2932u); f_106e67d0();
  /* 106e2932 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e2937 jge 0x106e294d */
  if ((C.sf==C.of)) goto L_106e294d;
  /* 106e2939 push 0x1070a26c */
  push32((uint32_t)(0x1070a26cu));
  /* 106e293e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 106e2944 push eax */
  push32((uint32_t)(EAX));
  /* 106e2945 call 0x106e66e0 */
  push32(0x106e294au); f_106e66e0();
  /* 106e294a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e294d:;
  /* 106e294d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2951 jne 0x106e2985 */
  if (!C.zf) goto L_106e2985;
  /* 106e2953 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2957 je 0x106e2965 */
  if (C.zf) goto L_106e2965;
  /* 106e2959 mov dword ptr [ebp - 0x3028], 0x1070a258 */
  w32((uint32_t)(EBP + -0x3028), (0x1070a258u));
  /* 106e2963 jmp 0x106e296f */
  goto L_106e296f;
L_106e2965:;
  /* 106e2965 mov dword ptr [ebp - 0x3028], 0x1070a244 */
  w32((uint32_t)(EBP + -0x3028), (0x1070a244u));
L_106e296f:;
  /* 106e296f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 106e2975 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2976 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 106e297c push edx */
  push32((uint32_t)(EDX));
  /* 106e297d call 0x106e66e0 */
  push32(0x106e2982u); f_106e66e0();
  /* 106e2982 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e2985:;
  /* 106e2985 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 106e298b push eax */
  push32((uint32_t)(EAX));
  /* 106e298c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 106e2992 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2993 call 0x106e66f0 */
  push32(0x106e2998u); f_106e66f0();
  /* 106e2998 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e299b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e299f jne 0x106e29da */
  if (!C.zf) goto L_106e29da;
  /* 106e29a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e29a4 mov eax, dword ptr [edx*4 + 0x1070da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1070da38)));
  /* 106e29ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 106e29ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e29b0 je 0x106e29c6 */
  if (C.zf) goto L_106e29c6;
  /* 106e29b2 push 0x1070a240 */
  push32((uint32_t)(0x1070a240u));
  /* 106e29b7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 106e29bd push ecx */
  push32((uint32_t)(ECX));
  /* 106e29be call 0x106e66f0 */
  push32(0x106e29c3u); f_106e66f0();
  /* 106e29c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e29c6:;
  /* 106e29c6 push 0x1070a23c */
  push32((uint32_t)(0x1070a23cu));
  /* 106e29cb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 106e29d1 push edx */
  push32((uint32_t)(EDX));
  /* 106e29d2 call 0x106e66f0 */
  push32(0x106e29d7u); f_106e66f0();
  /* 106e29d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e29da:;
  /* 106e29da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e29de je 0x106e2a22 */
  if (C.zf) goto L_106e2a22;
  /* 106e29e0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 106e29e6 push eax */
  push32((uint32_t)(EAX));
  /* 106e29e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e29ea push ecx */
  push32((uint32_t)(ECX));
  /* 106e29eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e29ee push edx */
  push32((uint32_t)(EDX));
  /* 106e29ef push 0x1070a230 */
  push32((uint32_t)(0x1070a230u));
  /* 106e29f4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 106e29f9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 106e29ff push eax */
  push32((uint32_t)(EAX));
  /* 106e2a00 call 0x106e65e0 */
  push32(0x106e2a05u); f_106e65e0();
  /* 106e2a05 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e2a0a jge 0x106e2a20 */
  if ((C.sf==C.of)) goto L_106e2a20;
  /* 106e2a0c push 0x1070a26c */
  push32((uint32_t)(0x1070a26cu));
  /* 106e2a11 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 106e2a17 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2a18 call 0x106e66e0 */
  push32(0x106e2a1du); f_106e66e0();
  /* 106e2a1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e2a20:;
  /* 106e2a20 jmp 0x106e2a38 */
  goto L_106e2a38;
L_106e2a22:;
  /* 106e2a22 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 106e2a28 push edx */
  push32((uint32_t)(EDX));
  /* 106e2a29 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 106e2a2f push eax */
  push32((uint32_t)(EAX));
  /* 106e2a30 call 0x106e66e0 */
  push32(0x106e2a35u); f_106e66e0();
  /* 106e2a35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e2a38:;
  /* 106e2a38 cmp dword ptr [0x10711000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10711000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2a3f je 0x106e2a7c */
  if (C.zf) goto L_106e2a7c;
  /* 106e2a41 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 106e2a47 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2a48 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 106e2a4e push edx */
  push32((uint32_t)(EDX));
  /* 106e2a4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2a52 push eax */
  push32((uint32_t)(EAX));
  /* 106e2a53 call dword ptr [0x10711000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10711000))), 0x106e2a59u);
  /* 106e2a59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2a5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e2a5e je 0x106e2a7c */
  if (C.zf) goto L_106e2a7c;
  /* 106e2a60 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2a64 jne 0x106e2a71 */
  if (!C.zf) goto L_106e2a71;
  /* 106e2a66 push 0x1070da34 */
  push32((uint32_t)(0x1070da34u));
  /* 106e2a6b call dword ptr [0x107122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d0))), 0x106e2a71u);
L_106e2a71:;
  /* 106e2a71 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 106e2a77 jmp 0x106e2b7b */
  goto L_106e2b7b;
L_106e2a7c:;
  /* 106e2a7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2a7f mov edx, dword ptr [ecx*4 + 0x1070da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1070da38)));
  /* 106e2a86 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106e2a89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e2a8b je 0x106e2acb */
  if (C.zf) goto L_106e2acb;
  /* 106e2a8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2a90 cmp dword ptr [eax*4 + 0x1070da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1070da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2a98 je 0x106e2acb */
  if (C.zf) goto L_106e2acb;
  /* 106e2a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e2a9c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 106e2aa2 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2aa3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 106e2aa9 push edx */
  push32((uint32_t)(EDX));
  /* 106e2aaa call 0x106e6560 */
  push32(0x106e2aafu); f_106e6560();
  /* 106e2aaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2ab2 push eax */
  push32((uint32_t)(EAX));
  /* 106e2ab3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 106e2ab9 push eax */
  push32((uint32_t)(EAX));
  /* 106e2aba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2abd mov edx, dword ptr [ecx*4 + 0x1070da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1070da44)));
  /* 106e2ac4 push edx */
  push32((uint32_t)(EDX));
  /* 106e2ac5 call dword ptr [0x107122cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122cc))), 0x106e2acbu);
L_106e2acb:;
  /* 106e2acb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2ace mov ecx, dword ptr [eax*4 + 0x1070da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1070da38)));
  /* 106e2ad5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 106e2ad8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e2ada je 0x106e2ae9 */
  if (C.zf) goto L_106e2ae9;
  /* 106e2adc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 106e2ae2 push edx */
  push32((uint32_t)(EDX));
  /* 106e2ae3 call dword ptr [0x107122d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d4))), 0x106e2ae9u);
L_106e2ae9:;
  /* 106e2ae9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2aec mov ecx, dword ptr [eax*4 + 0x1070da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1070da38)));
  /* 106e2af3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106e2af6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e2af8 je 0x106e2b68 */
  if (C.zf) goto L_106e2b68;
  /* 106e2afa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2afe je 0x106e2b1d */
  if (C.zf) goto L_106e2b1d;
  /* 106e2b00 push 0xa */
  push32((uint32_t)(0xau));
  /* 106e2b02 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 106e2b08 push edx */
  push32((uint32_t)(EDX));
  /* 106e2b09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e2b0c push eax */
  push32((uint32_t)(EAX));
  /* 106e2b0d call 0x106e6270 */
  push32(0x106e2b12u); f_106e6270();
  /* 106e2b12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2b15 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 106e2b1b jmp 0x106e2b27 */
  goto L_106e2b27;
L_106e2b1d:;
  /* 106e2b1d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_106e2b27:;
  /* 106e2b27 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 106e2b2d push ecx */
  push32((uint32_t)(ECX));
  /* 106e2b2e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e2b31 push edx */
  push32((uint32_t)(EDX));
  /* 106e2b32 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 106e2b38 push eax */
  push32((uint32_t)(EAX));
  /* 106e2b39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e2b3c push ecx */
  push32((uint32_t)(ECX));
  /* 106e2b3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2b40 push edx */
  push32((uint32_t)(EDX));
  /* 106e2b41 call 0x106e2b80 */
  push32(0x106e2b46u); f_106e2b80();
  /* 106e2b46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2b49 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 106e2b4f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2b53 jne 0x106e2b60 */
  if (!C.zf) goto L_106e2b60;
  /* 106e2b55 push 0x1070da34 */
  push32((uint32_t)(0x1070da34u));
  /* 106e2b5a call dword ptr [0x107122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d0))), 0x106e2b60u);
L_106e2b60:;
  /* 106e2b60 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 106e2b66 jmp 0x106e2b7b */
  goto L_106e2b7b;
L_106e2b68:;
  /* 106e2b68 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2b6c jne 0x106e2b79 */
  if (!C.zf) goto L_106e2b79;
  /* 106e2b6e push 0x1070da34 */
  push32((uint32_t)(0x1070da34u));
  /* 106e2b73 call dword ptr [0x107122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d0))), 0x106e2b79u);
L_106e2b79:;
  /* 106e2b79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e2b7b:;
  /* 106e2b7b pop edi */
  EDI = (pop32());
  /* 106e2b7c mov esp, ebp */
  ESP = (EBP);
  /* 106e2b7e pop ebp */
  EBP = (pop32());
  /* 106e2b7f ret  */
  ESPCHK(0x106e27f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b80 @ 0x106e2b80 (780 bytes, 197 insns) */
void f_106e2b80(void) {
  FTRACE(0x106e2b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e2b80 push ebp */
  push32((uint32_t)(EBP));
  /* 106e2b81 mov ebp, esp */
  EBP = (ESP);
  /* 106e2b83 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 106e2b88 call 0x106e68d0 */
  push32(0x106e2b8du); f_106e68d0();
L_106e2b8d:;
  /* 106e2b8d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2b91 jne 0x106e2bb8 */
  if (!C.zf) goto L_106e2bb8;
  /* 106e2b93 push 0x1070a428 */
  push32((uint32_t)(0x1070a428u));
  /* 106e2b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e2b9a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 106e2b9f push 0x1070a41c */
  push32((uint32_t)(0x1070a41cu));
  /* 106e2ba4 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e2ba6 call 0x106e27f0 */
  push32(0x106e2babu); f_106e27f0();
  /* 106e2bab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2bae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2bb1 jne 0x106e2bb8 */
  if (!C.zf) goto L_106e2bb8;
  /* 106e2bb3 call 0x106e26e0 */
  push32(0x106e2bb8u); f_106e26e0();
L_106e2bb8:;
  /* 106e2bb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e2bba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e2bbc jne 0x106e2b8d */
  if (!C.zf) goto L_106e2b8d;
  /* 106e2bbe push 0x104 */
  push32((uint32_t)(0x104u));
  /* 106e2bc3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 106e2bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2bca push 0 */
  push32((uint32_t)(0x0u));
  /* 106e2bcc call dword ptr [0x107122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122e4))), 0x106e2bd2u);
  /* 106e2bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e2bd4 jne 0x106e2bea */
  if (!C.zf) goto L_106e2bea;
  /* 106e2bd6 push 0x1070a404 */
  push32((uint32_t)(0x1070a404u));
  /* 106e2bdb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 106e2be1 push edx */
  push32((uint32_t)(EDX));
  /* 106e2be2 call 0x106e66e0 */
  push32(0x106e2be7u); f_106e66e0();
  /* 106e2be7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e2bea:;
  /* 106e2bea lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 106e2bf0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e2bf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e2bf6 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2bf7 call 0x106e6560 */
  push32(0x106e2bfcu); f_106e6560();
  /* 106e2bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2bff cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2c02 jbe 0x106e2c2d */
  if ((C.cf||C.zf)) goto L_106e2c2d;
  /* 106e2c04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e2c07 push edx */
  push32((uint32_t)(EDX));
  /* 106e2c08 call 0x106e6560 */
  push32(0x106e2c0du); f_106e6560();
  /* 106e2c0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2c10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e2c13 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 106e2c17 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e2c1a push 3 */
  push32((uint32_t)(0x3u));
  /* 106e2c1c push 0x1070a400 */
  push32((uint32_t)(0x1070a400u));
  /* 106e2c21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e2c24 push eax */
  push32((uint32_t)(EAX));
  /* 106e2c25 call 0x106e6f50 */
  push32(0x106e2c2au); f_106e6f50();
  /* 106e2c2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e2c2d:;
  /* 106e2c2d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e2c30 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 106e2c36 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2c3d je 0x106e2c88 */
  if (C.zf) goto L_106e2c88;
  /* 106e2c3f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106e2c45 push edx */
  push32((uint32_t)(EDX));
  /* 106e2c46 call 0x106e6560 */
  push32(0x106e2c4bu); f_106e6560();
  /* 106e2c4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2c4e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2c51 jbe 0x106e2c88 */
  if ((C.cf||C.zf)) goto L_106e2c88;
  /* 106e2c53 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106e2c59 push eax */
  push32((uint32_t)(EAX));
  /* 106e2c5a call 0x106e6560 */
  push32(0x106e2c5fu); f_106e6560();
  /* 106e2c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2c62 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106e2c68 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 106e2c6c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 106e2c72 push 3 */
  push32((uint32_t)(0x3u));
  /* 106e2c74 push 0x1070a400 */
  push32((uint32_t)(0x1070a400u));
  /* 106e2c79 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106e2c7f push eax */
  push32((uint32_t)(EAX));
  /* 106e2c80 call 0x106e6f50 */
  push32(0x106e2c85u); f_106e6f50();
  /* 106e2c85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e2c88:;
  /* 106e2c88 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2c8c jne 0x106e2c9a */
  if (!C.zf) goto L_106e2c9a;
  /* 106e2c8e mov dword ptr [ebp - 0x1114], 0x1070a38c */
  w32((uint32_t)(EBP + -0x1114), (0x1070a38cu));
  /* 106e2c98 jmp 0x106e2ca4 */
  goto L_106e2ca4;
L_106e2c9a:;
  /* 106e2c9a mov dword ptr [ebp - 0x1114], 0x1070a12c */
  w32((uint32_t)(EBP + -0x1114), (0x1070a12cu));
L_106e2ca4:;
  /* 106e2ca4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e2ca7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106e2caa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e2cac je 0x106e2cb9 */
  if (C.zf) goto L_106e2cb9;
  /* 106e2cae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e2cb1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 106e2cb7 jmp 0x106e2cc3 */
  goto L_106e2cc3;
L_106e2cb9:;
  /* 106e2cb9 mov dword ptr [ebp - 0x1118], 0x1070a12c */
  w32((uint32_t)(EBP + -0x1118), (0x1070a12cu));
L_106e2cc3:;
  /* 106e2cc3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e2cc6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106e2cc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e2ccb je 0x106e2cdf */
  if (C.zf) goto L_106e2cdf;
  /* 106e2ccd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2cd1 jne 0x106e2cdf */
  if (!C.zf) goto L_106e2cdf;
  /* 106e2cd3 mov dword ptr [ebp - 0x111c], 0x1070a37c */
  w32((uint32_t)(EBP + -0x111c), (0x1070a37cu));
  /* 106e2cdd jmp 0x106e2ce9 */
  goto L_106e2ce9;
L_106e2cdf:;
  /* 106e2cdf mov dword ptr [ebp - 0x111c], 0x1070a12c */
  w32((uint32_t)(EBP + -0x111c), (0x1070a12cu));
L_106e2ce9:;
  /* 106e2ce9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e2cec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106e2cef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e2cf1 je 0x106e2cff */
  if (C.zf) goto L_106e2cff;
  /* 106e2cf3 mov dword ptr [ebp - 0x1120], 0x1070a378 */
  w32((uint32_t)(EBP + -0x1120), (0x1070a378u));
  /* 106e2cfd jmp 0x106e2d09 */
  goto L_106e2d09;
L_106e2cff:;
  /* 106e2cff mov dword ptr [ebp - 0x1120], 0x1070a12c */
  w32((uint32_t)(EBP + -0x1120), (0x1070a12cu));
L_106e2d09:;
  /* 106e2d09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2d0d je 0x106e2d1a */
  if (C.zf) goto L_106e2d1a;
  /* 106e2d0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e2d12 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 106e2d18 jmp 0x106e2d24 */
  goto L_106e2d24;
L_106e2d1a:;
  /* 106e2d1a mov dword ptr [ebp - 0x1124], 0x1070a12c */
  w32((uint32_t)(EBP + -0x1124), (0x1070a12cu));
L_106e2d24:;
  /* 106e2d24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2d28 je 0x106e2d36 */
  if (C.zf) goto L_106e2d36;
  /* 106e2d2a mov dword ptr [ebp - 0x1128], 0x1070a370 */
  w32((uint32_t)(EBP + -0x1128), (0x1070a370u));
  /* 106e2d34 jmp 0x106e2d40 */
  goto L_106e2d40;
L_106e2d36:;
  /* 106e2d36 mov dword ptr [ebp - 0x1128], 0x1070a12c */
  w32((uint32_t)(EBP + -0x1128), (0x1070a12cu));
L_106e2d40:;
  /* 106e2d40 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2d44 je 0x106e2d51 */
  if (C.zf) goto L_106e2d51;
  /* 106e2d46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e2d49 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 106e2d4f jmp 0x106e2d5b */
  goto L_106e2d5b;
L_106e2d51:;
  /* 106e2d51 mov dword ptr [ebp - 0x112c], 0x1070a12c */
  w32((uint32_t)(EBP + -0x112c), (0x1070a12cu));
L_106e2d5b:;
  /* 106e2d5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2d5f je 0x106e2d6d */
  if (C.zf) goto L_106e2d6d;
  /* 106e2d61 mov dword ptr [ebp - 0x1130], 0x1070a368 */
  w32((uint32_t)(EBP + -0x1130), (0x1070a368u));
  /* 106e2d6b jmp 0x106e2d77 */
  goto L_106e2d77;
L_106e2d6d:;
  /* 106e2d6d mov dword ptr [ebp - 0x1130], 0x1070a12c */
  w32((uint32_t)(EBP + -0x1130), (0x1070a12cu));
L_106e2d77:;
  /* 106e2d77 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2d7e je 0x106e2d8e */
  if (C.zf) goto L_106e2d8e;
  /* 106e2d80 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 106e2d86 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 106e2d8c jmp 0x106e2d98 */
  goto L_106e2d98;
L_106e2d8e:;
  /* 106e2d8e mov dword ptr [ebp - 0x1134], 0x1070a12c */
  w32((uint32_t)(EBP + -0x1134), (0x1070a12cu));
L_106e2d98:;
  /* 106e2d98 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2d9f je 0x106e2dad */
  if (C.zf) goto L_106e2dad;
  /* 106e2da1 mov dword ptr [ebp - 0x1138], 0x1070a35c */
  w32((uint32_t)(EBP + -0x1138), (0x1070a35cu));
  /* 106e2dab jmp 0x106e2db7 */
  goto L_106e2db7;
L_106e2dad:;
  /* 106e2dad mov dword ptr [ebp - 0x1138], 0x1070a12c */
  w32((uint32_t)(EBP + -0x1138), (0x1070a12cu));
L_106e2db7:;
  /* 106e2db7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 106e2dbd push edx */
  push32((uint32_t)(EDX));
  /* 106e2dbe mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 106e2dc4 push eax */
  push32((uint32_t)(EAX));
  /* 106e2dc5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 106e2dcb push ecx */
  push32((uint32_t)(ECX));
  /* 106e2dcc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 106e2dd2 push edx */
  push32((uint32_t)(EDX));
  /* 106e2dd3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 106e2dd9 push eax */
  push32((uint32_t)(EAX));
  /* 106e2dda mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 106e2de0 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2de1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 106e2de7 push edx */
  push32((uint32_t)(EDX));
  /* 106e2de8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 106e2dee push eax */
  push32((uint32_t)(EAX));
  /* 106e2def mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 106e2df5 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2df6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 106e2dfc push edx */
  push32((uint32_t)(EDX));
  /* 106e2dfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e2e00 push eax */
  push32((uint32_t)(EAX));
  /* 106e2e01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2e04 mov edx, dword ptr [ecx*4 + 0x1070da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1070da50)));
  /* 106e2e0b push edx */
  push32((uint32_t)(EDX));
  /* 106e2e0c push 0x1070a308 */
  push32((uint32_t)(0x1070a308u));
  /* 106e2e11 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 106e2e16 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 106e2e1c push eax */
  push32((uint32_t)(EAX));
  /* 106e2e1d call 0x106e65e0 */
  push32(0x106e2e22u); f_106e65e0();
  /* 106e2e22 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e2e27 jge 0x106e2e3d */
  if ((C.sf==C.of)) goto L_106e2e3d;
  /* 106e2e29 push 0x1070a26c */
  push32((uint32_t)(0x1070a26cu));
  /* 106e2e2e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 106e2e34 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2e35 call 0x106e66e0 */
  push32(0x106e2e3au); f_106e66e0();
  /* 106e2e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e2e3d:;
  /* 106e2e3d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 106e2e42 push 0x1070a2e4 */
  push32((uint32_t)(0x1070a2e4u));
  /* 106e2e47 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 106e2e4d push edx */
  push32((uint32_t)(EDX));
  /* 106e2e4e call 0x106e6e90 */
  push32(0x106e2e53u); f_106e6e90();
  /* 106e2e53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2e56 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 106e2e5c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2e63 jne 0x106e2e76 */
  if (!C.zf) goto L_106e2e76;
  /* 106e2e65 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 106e2e67 call 0x106e6bd0 */
  push32(0x106e2e6cu); f_106e6bd0();
  /* 106e2e6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2e6f push 3 */
  push32((uint32_t)(0x3u));
  /* 106e2e71 call 0x106e2ef0 */
  push32(0x106e2e76u); f_106e2ef0();
L_106e2e76:;
  /* 106e2e76 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2e7d jne 0x106e2e86 */
  if (!C.zf) goto L_106e2e86;
  /* 106e2e7f mov eax, 1 */
  EAX = (0x1u);
  /* 106e2e84 jmp 0x106e2e88 */
  goto L_106e2e88;
L_106e2e86:;
  /* 106e2e86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e2e88:;
  /* 106e2e88 mov esp, ebp */
  ESP = (EBP);
  /* 106e2e8a pop ebp */
  EBP = (pop32());
  /* 106e2e8b ret  */
  ESPCHK(0x106e2b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e90 @ 0x106e2e90 (56 bytes, 15 insns) */
void f_106e2e90(void) {
  FTRACE(0x106e2e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e2e90 push ebp */
  push32((uint32_t)(EBP));
  /* 106e2e91 mov ebp, esp */
  EBP = (ESP);
  /* 106e2e93 cmp dword ptr [0x10710ffc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710ffc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2e9a je 0x106e2ea2 */
  if (C.zf) goto L_106e2ea2;
  /* 106e2e9c call dword ptr [0x10710ffc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10710ffc))), 0x106e2ea2u);
L_106e2ea2:;
  /* 106e2ea2 push 0x1070d418 */
  push32((uint32_t)(0x1070d418u));
  /* 106e2ea7 push 0x1070d208 */
  push32((uint32_t)(0x1070d208u));
  /* 106e2eac call 0x106e3060 */
  push32(0x106e2eb1u); f_106e3060();
  /* 106e2eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2eb4 push 0x1070d104 */
  push32((uint32_t)(0x1070d104u));
  /* 106e2eb9 push 0x1070d000 */
  push32((uint32_t)(0x1070d000u));
  /* 106e2ebe call 0x106e3060 */
  push32(0x106e2ec3u); f_106e3060();
  /* 106e2ec3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2ec6 pop ebp */
  EBP = (pop32());
  /* 106e2ec7 ret  */
  ESPCHK(0x106e2e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ed0 @ 0x106e2ed0 (21 bytes, 10 insns) */
void f_106e2ed0(void) {
  FTRACE(0x106e2ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e2ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e2ed1 mov ebp, esp */
  EBP = (ESP);
  /* 106e2ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e2ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e2ed7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2eda push eax */
  push32((uint32_t)(EAX));
  /* 106e2edb call 0x106e2f50 */
  push32(0x106e2ee0u); f_106e2f50();
  /* 106e2ee0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2ee3 pop ebp */
  EBP = (pop32());
  /* 106e2ee4 ret  */
  ESPCHK(0x106e2ed0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x106e2ef0 (21 bytes, 10 insns) */
void f_106e2ef0(void) {
  FTRACE(0x106e2ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e2ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e2ef1 mov ebp, esp */
  EBP = (ESP);
  /* 106e2ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e2ef5 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e2ef7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2efa push eax */
  push32((uint32_t)(EAX));
  /* 106e2efb call 0x106e2f50 */
  push32(0x106e2f00u); f_106e2f50();
  /* 106e2f00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2f03 pop ebp */
  EBP = (pop32());
  /* 106e2f04 ret  */
  ESPCHK(0x106e2ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f10 @ 0x106e2f10 (19 bytes, 9 insns) */
void f_106e2f10(void) {
  FTRACE(0x106e2f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e2f10 push ebp */
  push32((uint32_t)(EBP));
  /* 106e2f11 mov ebp, esp */
  EBP = (ESP);
  /* 106e2f13 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e2f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e2f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e2f19 call 0x106e2f50 */
  push32(0x106e2f1eu); f_106e2f50();
  /* 106e2f1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2f21 pop ebp */
  EBP = (pop32());
  /* 106e2f22 ret  */
  ESPCHK(0x106e2f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f30 @ 0x106e2f30 (19 bytes, 9 insns) */
void f_106e2f30(void) {
  FTRACE(0x106e2f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e2f30 push ebp */
  push32((uint32_t)(EBP));
  /* 106e2f31 mov ebp, esp */
  EBP = (ESP);
  /* 106e2f33 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e2f35 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e2f37 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e2f39 call 0x106e2f50 */
  push32(0x106e2f3eu); f_106e2f50();
  /* 106e2f3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2f41 pop ebp */
  EBP = (pop32());
  /* 106e2f42 ret  */
  ESPCHK(0x106e2f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f50 @ 0x106e2f50 (227 bytes, 61 insns) */
void f_106e2f50(void) {
  FTRACE(0x106e2f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e2f50 push ebp */
  push32((uint32_t)(EBP));
  /* 106e2f51 mov ebp, esp */
  EBP = (ESP);
  /* 106e2f53 push ecx */
  push32((uint32_t)(ECX));
  /* 106e2f54 call 0x106e3040 */
  push32(0x106e2f59u); f_106e3040();
  /* 106e2f59 cmp dword ptr [0x1070f4fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2f60 jne 0x106e2f73 */
  if (!C.zf) goto L_106e2f73;
  /* 106e2f62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e2f65 push eax */
  push32((uint32_t)(EAX));
  /* 106e2f66 call dword ptr [0x107122f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122f0))), 0x106e2f6cu);
  /* 106e2f6c push eax */
  push32((uint32_t)(EAX));
  /* 106e2f6d call dword ptr [0x107122ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122ec))), 0x106e2f73u);
L_106e2f73:;
  /* 106e2f73 mov dword ptr [0x1070f4f8], 1 */
  w32((uint32_t)(0x1070f4f8), (0x1u));
  /* 106e2f7d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 106e2f80 mov byte ptr [0x1070f4f4], cl */
  w8((uint32_t)(0x1070f4f4), (CL));
  /* 106e2f86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2f8a jne 0x106e2fd3 */
  if (!C.zf) goto L_106e2fd3;
  /* 106e2f8c cmp dword ptr [0x10710ff8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710ff8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2f93 je 0x106e2fc1 */
  if (C.zf) goto L_106e2fc1;
  /* 106e2f95 mov edx, dword ptr [0x10710ff4] */
  EDX = (r32((uint32_t)(0x10710ff4)));
  /* 106e2f9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106e2f9e:;
  /* 106e2f9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e2fa1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e2fa4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e2fa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e2faa cmp ecx, dword ptr [0x10710ff8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10710ff8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2fb0 jb 0x106e2fc1 */
  if (C.cf) goto L_106e2fc1;
  /* 106e2fb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e2fb5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2fb8 je 0x106e2fbf */
  if (C.zf) goto L_106e2fbf;
  /* 106e2fba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e2fbd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x106e2fbfu);
L_106e2fbf:;
  /* 106e2fbf jmp 0x106e2f9e */
  goto L_106e2f9e;
L_106e2fc1:;
  /* 106e2fc1 push 0x1070d724 */
  push32((uint32_t)(0x1070d724u));
  /* 106e2fc6 push 0x1070d51c */
  push32((uint32_t)(0x1070d51cu));
  /* 106e2fcb call 0x106e3060 */
  push32(0x106e2fd0u); f_106e3060();
  /* 106e2fd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e2fd3:;
  /* 106e2fd3 push 0x1070d92c */
  push32((uint32_t)(0x1070d92cu));
  /* 106e2fd8 push 0x1070d828 */
  push32((uint32_t)(0x1070d828u));
  /* 106e2fdd call 0x106e3060 */
  push32(0x106e2fe2u); f_106e3060();
  /* 106e2fe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2fe5 cmp dword ptr [0x1070f500], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f500))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e2fec jne 0x106e300e */
  if (!C.zf) goto L_106e300e;
  /* 106e2fee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 106e2ff0 call 0x106e4c40 */
  push32(0x106e2ff5u); f_106e4c40();
  /* 106e2ff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e2ff8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 106e2ffb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e2ffd je 0x106e300e */
  if (C.zf) goto L_106e300e;
  /* 106e2fff mov dword ptr [0x1070f500], 1 */
  w32((uint32_t)(0x1070f500), (0x1u));
  /* 106e3009 call 0x106e5550 */
  push32(0x106e300eu); f_106e5550();
L_106e300e:;
  /* 106e300e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3012 je 0x106e301b */
  if (C.zf) goto L_106e301b;
  /* 106e3014 call 0x106e3050 */
  push32(0x106e3019u); f_106e3050();
  /* 106e3019 jmp 0x106e302f */
  goto L_106e302f;
L_106e301b:;
  /* 106e301b mov dword ptr [0x1070f4fc], 1 */
  w32((uint32_t)(0x1070f4fc), (0x1u));
  /* 106e3025 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3028 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3029 call dword ptr [0x107122e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122e8))), 0x106e302fu);
L_106e302f:;
  /* 106e302f mov esp, ebp */
  ESP = (EBP);
  /* 106e3031 pop ebp */
  EBP = (pop32());
  /* 106e3032 ret  */
  ESPCHK(0x106e2f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x106e3040 (15 bytes, 7 insns) */
void f_106e3040(void) {
  FTRACE(0x106e3040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3040 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3041 mov ebp, esp */
  EBP = (ESP);
  /* 106e3043 push 0xd */
  push32((uint32_t)(0xdu));
  /* 106e3045 call 0x106e7130 */
  push32(0x106e304au); f_106e7130();
  /* 106e304a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e304d pop ebp */
  EBP = (pop32());
  /* 106e304e ret  */
  ESPCHK(0x106e3040u, _esp0);
  ESP += 4; return;
}

/* FUN_10003050 @ 0x106e3050 (15 bytes, 7 insns) */
void f_106e3050(void) {
  FTRACE(0x106e3050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3050 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3051 mov ebp, esp */
  EBP = (ESP);
  /* 106e3053 push 0xd */
  push32((uint32_t)(0xdu));
  /* 106e3055 call 0x106e71d0 */
  push32(0x106e305au); f_106e71d0();
  /* 106e305a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e305d pop ebp */
  EBP = (pop32());
  /* 106e305e ret  */
  ESPCHK(0x106e3050u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x106e3060 (37 bytes, 16 insns) */
void f_106e3060(void) {
  FTRACE(0x106e3060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3060 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3061 mov ebp, esp */
  EBP = (ESP);
L_106e3063:;
  /* 106e3063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3066 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3069 jae 0x106e3083 */
  if (!C.cf) goto L_106e3083;
  /* 106e306b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e306e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3071 je 0x106e3078 */
  if (C.zf) goto L_106e3078;
  /* 106e3073 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3076 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x106e3078u);
L_106e3078:;
  /* 106e3078 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e307b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e307e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106e3081 jmp 0x106e3063 */
  goto L_106e3063;
L_106e3083:;
  /* 106e3083 pop ebp */
  EBP = (pop32());
  /* 106e3084 ret  */
  ESPCHK(0x106e3060u, _esp0);
  ESP += 4; return;
}

/* FUN_10003090 @ 0x106e3090 (130 bytes, 42 insns) */
void f_106e3090(void) {
  FTRACE(0x106e3090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3090 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3091 mov ebp, esp */
  EBP = (ESP);
  /* 106e3093 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3094 call 0x106e7050 */
  push32(0x106e3099u); f_106e7050();
  /* 106e3099 call dword ptr [0x107122fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122fc))), 0x106e309fu);
  /* 106e309f mov dword ptr [0x1070da5c], eax */
  w32((uint32_t)(0x1070da5c), (EAX));
  /* 106e30a4 cmp dword ptr [0x1070da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1070da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e30ab jne 0x106e30b1 */
  if (!C.zf) goto L_106e30b1;
  /* 106e30ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e30af jmp 0x106e310e */
  goto L_106e310e;
L_106e30b1:;
  /* 106e30b1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 106e30b3 push 0x1070a440 */
  push32((uint32_t)(0x1070a440u));
  /* 106e30b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e30ba push 0x74 */
  push32((uint32_t)(0x74u));
  /* 106e30bc push 1 */
  push32((uint32_t)(0x1u));
  /* 106e30be call 0x106e3b40 */
  push32(0x106e30c3u); f_106e3b40();
  /* 106e30c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e30c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e30c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e30cd je 0x106e30e4 */
  if (C.zf) goto L_106e30e4;
  /* 106e30cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e30d2 push eax */
  push32((uint32_t)(EAX));
  /* 106e30d3 mov ecx, dword ptr [0x1070da5c] */
  ECX = (r32((uint32_t)(0x1070da5c)));
  /* 106e30d9 push ecx */
  push32((uint32_t)(ECX));
  /* 106e30da call dword ptr [0x107122f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122f8))), 0x106e30e0u);
  /* 106e30e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e30e2 jne 0x106e30e8 */
  if (!C.zf) goto L_106e30e8;
L_106e30e4:;
  /* 106e30e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e30e6 jmp 0x106e310e */
  goto L_106e310e;
L_106e30e8:;
  /* 106e30e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e30eb push edx */
  push32((uint32_t)(EDX));
  /* 106e30ec call 0x106e3150 */
  push32(0x106e30f1u); f_106e3150();
  /* 106e30f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e30f4 call dword ptr [0x107122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122f4))), 0x106e30fau);
  /* 106e30fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e30fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106e30ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3102 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 106e3109 mov eax, 1 */
  EAX = (0x1u);
L_106e310e:;
  /* 106e310e mov esp, ebp */
  ESP = (EBP);
  /* 106e3110 pop ebp */
  EBP = (pop32());
  /* 106e3111 ret  */
  ESPCHK(0x106e3090u, _esp0);
  ESP += 4; return;
}

/* FUN_10003120 @ 0x106e3120 (41 bytes, 11 insns) */
void f_106e3120(void) {
  FTRACE(0x106e3120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3120 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3121 mov ebp, esp */
  EBP = (ESP);
  /* 106e3123 call 0x106e7090 */
  push32(0x106e3128u); f_106e7090();
  /* 106e3128 cmp dword ptr [0x1070da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1070da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e312f je 0x106e3147 */
  if (C.zf) goto L_106e3147;
  /* 106e3131 mov eax, dword ptr [0x1070da5c] */
  EAX = (r32((uint32_t)(0x1070da5c)));
  /* 106e3136 push eax */
  push32((uint32_t)(EAX));
  /* 106e3137 call dword ptr [0x10712300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712300))), 0x106e313du);
  /* 106e313d mov dword ptr [0x1070da5c], 0xffffffff */
  w32((uint32_t)(0x1070da5c), (0xffffffffu));
L_106e3147:;
  /* 106e3147 pop ebp */
  EBP = (pop32());
  /* 106e3148 ret  */
  ESPCHK(0x106e3120u, _esp0);
  ESP += 4; return;
}

/* FUN_10003150 @ 0x106e3150 (25 bytes, 8 insns) */
void f_106e3150(void) {
  FTRACE(0x106e3150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3150 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3151 mov ebp, esp */
  EBP = (ESP);
  /* 106e3153 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3156 mov dword ptr [eax + 0x50], 0x1070dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1070dc00u));
  /* 106e315d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3160 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 106e3167 pop ebp */
  EBP = (pop32());
  /* 106e3168 ret  */
  ESPCHK(0x106e3150u, _esp0);
  ESP += 4; return;
}

/* FUN_10003170 @ 0x106e3170 (152 bytes, 48 insns) */
void f_106e3170(void) {
  FTRACE(0x106e3170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3170 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3171 mov ebp, esp */
  EBP = (ESP);
  /* 106e3173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e3176 call dword ptr [0x1071230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071230c))), 0x106e317cu);
  /* 106e317c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e317f mov eax, dword ptr [0x1070da5c] */
  EAX = (r32((uint32_t)(0x1070da5c)));
  /* 106e3184 push eax */
  push32((uint32_t)(EAX));
  /* 106e3185 call dword ptr [0x10712308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712308))), 0x106e318bu);
  /* 106e318b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e318e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3192 jne 0x106e31f7 */
  if (!C.zf) goto L_106e31f7;
  /* 106e3194 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 106e3199 push 0x1070a440 */
  push32((uint32_t)(0x1070a440u));
  /* 106e319e push 2 */
  push32((uint32_t)(0x2u));
  /* 106e31a0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 106e31a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e31a4 call 0x106e3b40 */
  push32(0x106e31a9u); f_106e3b40();
  /* 106e31a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e31ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e31af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e31b3 je 0x106e31ed */
  if (C.zf) goto L_106e31ed;
  /* 106e31b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e31b8 push ecx */
  push32((uint32_t)(ECX));
  /* 106e31b9 mov edx, dword ptr [0x1070da5c] */
  EDX = (r32((uint32_t)(0x1070da5c)));
  /* 106e31bf push edx */
  push32((uint32_t)(EDX));
  /* 106e31c0 call dword ptr [0x107122f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122f8))), 0x106e31c6u);
  /* 106e31c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e31c8 je 0x106e31ed */
  if (C.zf) goto L_106e31ed;
  /* 106e31ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e31cd push eax */
  push32((uint32_t)(EAX));
  /* 106e31ce call 0x106e3150 */
  push32(0x106e31d3u); f_106e3150();
  /* 106e31d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e31d6 call dword ptr [0x107122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122f4))), 0x106e31dcu);
  /* 106e31dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e31df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106e31e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e31e4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 106e31eb jmp 0x106e31f7 */
  goto L_106e31f7;
L_106e31ed:;
  /* 106e31ed push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106e31ef call 0x106e26a0 */
  push32(0x106e31f4u); f_106e26a0();
  /* 106e31f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e31f7:;
  /* 106e31f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e31fa push eax */
  push32((uint32_t)(EAX));
  /* 106e31fb call dword ptr [0x10712304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712304))), 0x106e3201u);
  /* 106e3201 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3204 mov esp, ebp */
  ESP = (EBP);
  /* 106e3206 pop ebp */
  EBP = (pop32());
  /* 106e3207 ret  */
  ESPCHK(0x106e3170u, _esp0);
  ESP += 4; return;
}

/* FUN_10003210 @ 0x106e3210 (263 bytes, 86 insns) */
void f_106e3210(void) {
  FTRACE(0x106e3210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3210 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3211 mov ebp, esp */
  EBP = (ESP);
  /* 106e3213 cmp dword ptr [0x1070da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1070da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e321a je 0x106e3315 */
  if (C.zf) goto L_106e3315;
  /* 106e3220 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3224 jne 0x106e3235 */
  if (!C.zf) goto L_106e3235;
  /* 106e3226 mov eax, dword ptr [0x1070da5c] */
  EAX = (r32((uint32_t)(0x1070da5c)));
  /* 106e322b push eax */
  push32((uint32_t)(EAX));
  /* 106e322c call dword ptr [0x10712308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712308))), 0x106e3232u);
  /* 106e3232 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106e3235:;
  /* 106e3235 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3239 je 0x106e3306 */
  if (C.zf) goto L_106e3306;
  /* 106e323f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3242 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3246 je 0x106e3259 */
  if (C.zf) goto L_106e3259;
  /* 106e3248 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e324a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e324d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 106e3250 push eax */
  push32((uint32_t)(EAX));
  /* 106e3251 call 0x106e41c0 */
  push32(0x106e3256u); f_106e41c0();
  /* 106e3256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e3259:;
  /* 106e3259 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e325c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3260 je 0x106e3273 */
  if (C.zf) goto L_106e3273;
  /* 106e3262 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e3264 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3267 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 106e326a push eax */
  push32((uint32_t)(EAX));
  /* 106e326b call 0x106e41c0 */
  push32(0x106e3270u); f_106e41c0();
  /* 106e3270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e3273:;
  /* 106e3273 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3276 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e327a je 0x106e328d */
  if (C.zf) goto L_106e328d;
  /* 106e327c push 2 */
  push32((uint32_t)(0x2u));
  /* 106e327e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3281 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 106e3284 push eax */
  push32((uint32_t)(EAX));
  /* 106e3285 call 0x106e41c0 */
  push32(0x106e328au); f_106e41c0();
  /* 106e328a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e328d:;
  /* 106e328d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3290 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3294 je 0x106e32a7 */
  if (C.zf) goto L_106e32a7;
  /* 106e3296 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e3298 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e329b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 106e329e push eax */
  push32((uint32_t)(EAX));
  /* 106e329f call 0x106e41c0 */
  push32(0x106e32a4u); f_106e41c0();
  /* 106e32a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e32a7:;
  /* 106e32a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e32aa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e32ae je 0x106e32c1 */
  if (C.zf) goto L_106e32c1;
  /* 106e32b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e32b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e32b5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 106e32b8 push eax */
  push32((uint32_t)(EAX));
  /* 106e32b9 call 0x106e41c0 */
  push32(0x106e32beu); f_106e41c0();
  /* 106e32be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e32c1:;
  /* 106e32c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e32c4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e32c8 je 0x106e32db */
  if (C.zf) goto L_106e32db;
  /* 106e32ca push 2 */
  push32((uint32_t)(0x2u));
  /* 106e32cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e32cf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 106e32d2 push eax */
  push32((uint32_t)(EAX));
  /* 106e32d3 call 0x106e41c0 */
  push32(0x106e32d8u); f_106e41c0();
  /* 106e32d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e32db:;
  /* 106e32db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e32de cmp dword ptr [ecx + 0x50], 0x1070dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1070dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e32e5 je 0x106e32f8 */
  if (C.zf) goto L_106e32f8;
  /* 106e32e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e32e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e32ec mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 106e32ef push eax */
  push32((uint32_t)(EAX));
  /* 106e32f0 call 0x106e41c0 */
  push32(0x106e32f5u); f_106e41c0();
  /* 106e32f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e32f8:;
  /* 106e32f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e32fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e32fd push ecx */
  push32((uint32_t)(ECX));
  /* 106e32fe call 0x106e41c0 */
  push32(0x106e3303u); f_106e41c0();
  /* 106e3303 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e3306:;
  /* 106e3306 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3308 mov edx, dword ptr [0x1070da5c] */
  EDX = (r32((uint32_t)(0x1070da5c)));
  /* 106e330e push edx */
  push32((uint32_t)(EDX));
  /* 106e330f call dword ptr [0x107122f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122f8))), 0x106e3315u);
L_106e3315:;
  /* 106e3315 pop ebp */
  EBP = (pop32());
  /* 106e3316 ret  */
  ESPCHK(0x106e3210u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x106e3320 (11 bytes, 5 insns) */
void f_106e3320(void) {
  FTRACE(0x106e3320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3320 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3321 mov ebp, esp */
  EBP = (ESP);
  /* 106e3323 call dword ptr [0x107122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122f4))), 0x106e3329u);
  /* 106e3329 pop ebp */
  EBP = (pop32());
  /* 106e332a ret  */
  ESPCHK(0x106e3320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003330 @ 0x106e3330 (11 bytes, 5 insns) */
void f_106e3330(void) {
  FTRACE(0x106e3330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3330 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3331 mov ebp, esp */
  EBP = (ESP);
  /* 106e3333 call dword ptr [0x10712310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712310))), 0x106e3339u);
  /* 106e3339 pop ebp */
  EBP = (pop32());
  /* 106e333a ret  */
  ESPCHK(0x106e3330u, _esp0);
  ESP += 4; return;
}

/* FUN_10003340 @ 0x106e3340 (804 bytes, 236 insns) */
void f_106e3340(void) {
  FTRACE(0x106e3340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3340 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3341 mov ebp, esp */
  EBP = (ESP);
  /* 106e3343 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e3346 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 106e334b push 0x1070a44c */
  push32((uint32_t)(0x1070a44cu));
  /* 106e3350 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e3352 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 106e3357 call 0x106e3730 */
  push32(0x106e335cu); f_106e3730();
  /* 106e335c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e335f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 106e3362 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3366 jne 0x106e3372 */
  if (!C.zf) goto L_106e3372;
  /* 106e3368 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 106e336a call 0x106e26a0 */
  push32(0x106e336fu); f_106e26a0();
  /* 106e336f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e3372:;
  /* 106e3372 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e3375 mov dword ptr [0x10710ea0], eax */
  w32((uint32_t)(0x10710ea0), (EAX));
  /* 106e337a mov dword ptr [0x10710fdc], 0x20 */
  w32((uint32_t)(0x10710fdc), (0x20u));
  /* 106e3384 jmp 0x106e338f */
  goto L_106e338f;
L_106e3386:;
  /* 106e3386 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e3389 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e338c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_106e338f:;
  /* 106e338f mov edx, dword ptr [0x10710ea0] */
  EDX = (r32((uint32_t)(0x10710ea0)));
  /* 106e3395 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e339b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e339e jae 0x106e33c3 */
  if (!C.cf) goto L_106e33c3;
  /* 106e33a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e33a3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 106e33a7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e33aa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 106e33b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e33b3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 106e33b7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e33ba mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 106e33c1 jmp 0x106e3386 */
  goto L_106e3386;
L_106e33c3:;
  /* 106e33c3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 106e33c6 push ecx */
  push32((uint32_t)(ECX));
  /* 106e33c7 call dword ptr [0x1071225c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071225c))), 0x106e33cdu);
  /* 106e33cd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 106e33d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e33d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e33d8 je 0x106e3565 */
  if (C.zf) goto L_106e3565;
  /* 106e33de cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e33e2 je 0x106e3565 */
  if (C.zf) goto L_106e3565;
  /* 106e33e8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e33eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e33ed mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 106e33f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e33f3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e33f6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e33f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e33fc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e33ff mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 106e3402 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3409 jge 0x106e3413 */
  if ((C.sf==C.of)) goto L_106e3413;
  /* 106e340b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 106e340e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 106e3411 jmp 0x106e341a */
  goto L_106e341a;
L_106e3413:;
  /* 106e3413 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_106e341a:;
  /* 106e341a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 106e341d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 106e3420 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 106e3427 jmp 0x106e3432 */
  goto L_106e3432;
L_106e3429:;
  /* 106e3429 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 106e342c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e342f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_106e3432:;
  /* 106e3432 mov ecx, dword ptr [0x10710fdc] */
  ECX = (r32((uint32_t)(0x10710fdc)));
  /* 106e3438 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e343b jge 0x106e34d2 */
  if ((C.sf==C.of)) goto L_106e34d2;
  /* 106e3441 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 106e3446 push 0x1070a44c */
  push32((uint32_t)(0x1070a44cu));
  /* 106e344b push 2 */
  push32((uint32_t)(0x2u));
  /* 106e344d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 106e3452 call 0x106e3730 */
  push32(0x106e3457u); f_106e3730();
  /* 106e3457 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e345a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 106e345d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3461 jne 0x106e346e */
  if (!C.zf) goto L_106e346e;
  /* 106e3463 mov edx, dword ptr [0x10710fdc] */
  EDX = (r32((uint32_t)(0x10710fdc)));
  /* 106e3469 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 106e346c jmp 0x106e34d2 */
  goto L_106e34d2;
L_106e346e:;
  /* 106e346e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 106e3471 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e3474 mov dword ptr [eax*4 + 0x10710ea0], ecx */
  w32((uint32_t)(EAX*4 + 0x10710ea0), (ECX));
  /* 106e347b mov edx, dword ptr [0x10710fdc] */
  EDX = (r32((uint32_t)(0x10710fdc)));
  /* 106e3481 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3484 mov dword ptr [0x10710fdc], edx */
  w32((uint32_t)(0x10710fdc), (EDX));
  /* 106e348a jmp 0x106e3495 */
  goto L_106e3495;
L_106e348c:;
  /* 106e348c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e348f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3492 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_106e3495:;
  /* 106e3495 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 106e3498 mov edx, dword ptr [ecx*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10710ea0)));
  /* 106e349f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e34a5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e34a8 jae 0x106e34cd */
  if (!C.cf) goto L_106e34cd;
  /* 106e34aa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e34ad mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 106e34b1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e34b4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 106e34ba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e34bd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 106e34c1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e34c4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 106e34cb jmp 0x106e348c */
  goto L_106e348c;
L_106e34cd:;
  /* 106e34cd jmp 0x106e3429 */
  goto L_106e3429;
L_106e34d2:;
  /* 106e34d2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 106e34d9 jmp 0x106e34f6 */
  goto L_106e34f6;
L_106e34db:;
  /* 106e34db mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106e34de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e34e1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 106e34e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e34e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e34ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e34ed mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 106e34f0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e34f3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_106e34f6:;
  /* 106e34f6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106e34f9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e34fc jge 0x106e3565 */
  if ((C.sf==C.of)) goto L_106e3565;
  /* 106e34fe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 106e3501 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3504 je 0x106e3560 */
  if (C.zf) goto L_106e3560;
  /* 106e3506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3509 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106e350c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 106e350f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e3511 je 0x106e3560 */
  if (C.zf) goto L_106e3560;
  /* 106e3513 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3516 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106e3519 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 106e351c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e351e jne 0x106e3530 */
  if (!C.zf) goto L_106e3530;
  /* 106e3520 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 106e3523 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e3525 push edx */
  push32((uint32_t)(EDX));
  /* 106e3526 call dword ptr [0x10712260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712260))), 0x106e352cu);
  /* 106e352c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e352e je 0x106e3560 */
  if (C.zf) goto L_106e3560;
L_106e3530:;
  /* 106e3530 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 106e3533 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 106e3536 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106e3539 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 106e353c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e353f mov edx, dword ptr [eax*4 + 0x10710ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106e3546 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3548 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 106e354b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e354e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 106e3551 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e3553 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106e3555 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e3558 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e355b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e355d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_106e3560:;
  /* 106e3560 jmp 0x106e34db */
  goto L_106e34db;
L_106e3565:;
  /* 106e3565 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 106e356c jmp 0x106e3577 */
  goto L_106e3577;
L_106e356e:;
  /* 106e356e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 106e3571 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3574 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_106e3577:;
  /* 106e3577 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e357b jge 0x106e3654 */
  if ((C.sf==C.of)) goto L_106e3654;
  /* 106e3581 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 106e3584 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e3587 mov edx, dword ptr [0x10710ea0] */
  EDX = (r32((uint32_t)(0x10710ea0)));
  /* 106e358d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e358f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 106e3592 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e3595 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3598 jne 0x106e3640 */
  if (!C.zf) goto L_106e3640;
  /* 106e359e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e35a1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 106e35a5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e35a9 jne 0x106e35b4 */
  if (!C.zf) goto L_106e35b4;
  /* 106e35ab mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 106e35b2 jmp 0x106e35c4 */
  goto L_106e35c4;
L_106e35b4:;
  /* 106e35b4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 106e35b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e35ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 106e35bc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e35be add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e35c1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_106e35c4:;
  /* 106e35c4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 106e35c7 push eax */
  push32((uint32_t)(EAX));
  /* 106e35c8 call dword ptr [0x107122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122c8))), 0x106e35ceu);
  /* 106e35ce mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 106e35d1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e35d5 je 0x106e362f */
  if (C.zf) goto L_106e362f;
  /* 106e35d7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106e35da push ecx */
  push32((uint32_t)(ECX));
  /* 106e35db call dword ptr [0x10712260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712260))), 0x106e35e1u);
  /* 106e35e1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 106e35e4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e35e8 je 0x106e362f */
  if (C.zf) goto L_106e362f;
  /* 106e35ea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e35ed mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106e35f0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106e35f2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 106e35f5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e35fb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e35fe jne 0x106e3610 */
  if (!C.zf) goto L_106e3610;
  /* 106e3600 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e3603 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 106e3606 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 106e3608 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e360b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 106e360e jmp 0x106e362d */
  goto L_106e362d;
L_106e3610:;
  /* 106e3610 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 106e3613 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e3619 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e361c jne 0x106e362d */
  if (!C.zf) goto L_106e362d;
  /* 106e361e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e3621 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e3624 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 106e3627 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e362a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_106e362d:;
  /* 106e362d jmp 0x106e363e */
  goto L_106e363e;
L_106e362f:;
  /* 106e362f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e3632 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e3635 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 106e3638 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e363b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_106e363e:;
  /* 106e363e jmp 0x106e364f */
  goto L_106e364f;
L_106e3640:;
  /* 106e3640 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e3643 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 106e3646 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 106e3649 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e364c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_106e364f:;
  /* 106e364f jmp 0x106e356e */
  goto L_106e356e;
L_106e3654:;
  /* 106e3654 mov eax, dword ptr [0x10710fdc] */
  EAX = (r32((uint32_t)(0x10710fdc)));
  /* 106e3659 push eax */
  push32((uint32_t)(EAX));
  /* 106e365a call dword ptr [0x10712314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712314))), 0x106e3660u);
  /* 106e3660 mov esp, ebp */
  ESP = (EBP);
  /* 106e3662 pop ebp */
  EBP = (pop32());
  /* 106e3663 ret  */
  ESPCHK(0x106e3340u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x106e3670 (155 bytes, 45 insns) */
void f_106e3670(void) {
  FTRACE(0x106e3670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3670 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3671 mov ebp, esp */
  EBP = (ESP);
  /* 106e3673 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e3676 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106e367d jmp 0x106e3688 */
  goto L_106e3688;
L_106e367f:;
  /* 106e367f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3682 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3685 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106e3688:;
  /* 106e3688 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e368c jge 0x106e3707 */
  if ((C.sf==C.of)) goto L_106e3707;
  /* 106e368e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3691 cmp dword ptr [ecx*4 + 0x10710ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10710ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3699 je 0x106e3702 */
  if (C.zf) goto L_106e3702;
  /* 106e369b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e369e mov eax, dword ptr [edx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10710ea0)));
  /* 106e36a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e36a8 jmp 0x106e36b3 */
  goto L_106e36b3;
L_106e36aa:;
  /* 106e36aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e36ad add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e36b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106e36b3:;
  /* 106e36b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e36b6 mov eax, dword ptr [edx*4 + 0x10710ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10710ea0)));
  /* 106e36bd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e36c2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e36c5 jae 0x106e36df */
  if (!C.cf) goto L_106e36df;
  /* 106e36c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e36ca cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e36ce je 0x106e36dd */
  if (C.zf) goto L_106e36dd;
  /* 106e36d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e36d3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e36d6 push edx */
  push32((uint32_t)(EDX));
  /* 106e36d7 call dword ptr [0x10712320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712320))), 0x106e36ddu);
L_106e36dd:;
  /* 106e36dd jmp 0x106e36aa */
  goto L_106e36aa;
L_106e36df:;
  /* 106e36df push 2 */
  push32((uint32_t)(0x2u));
  /* 106e36e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e36e4 mov ecx, dword ptr [eax*4 + 0x10710ea0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10710ea0)));
  /* 106e36eb push ecx */
  push32((uint32_t)(ECX));
  /* 106e36ec call 0x106e41c0 */
  push32(0x106e36f1u); f_106e41c0();
  /* 106e36f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e36f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e36f7 mov dword ptr [edx*4 + 0x10710ea0], 0 */
  w32((uint32_t)(EDX*4 + 0x10710ea0), (0x0u));
L_106e3702:;
  /* 106e3702 jmp 0x106e367f */
  goto L_106e367f;
L_106e3707:;
  /* 106e3707 mov esp, ebp */
  ESP = (EBP);
  /* 106e3709 pop ebp */
  EBP = (pop32());
  /* 106e370a ret  */
  ESPCHK(0x106e3670u, _esp0);
  ESP += 4; return;
}

/* FUN_10003710 @ 0x106e3710 (29 bytes, 13 insns) */
void f_106e3710(void) {
  FTRACE(0x106e3710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3710 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3711 mov ebp, esp */
  EBP = (ESP);
  /* 106e3713 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3715 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3717 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e3719 mov eax, dword ptr [0x1070f6a8] */
  EAX = (r32((uint32_t)(0x1070f6a8)));
  /* 106e371e push eax */
  push32((uint32_t)(EAX));
  /* 106e371f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3722 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3723 call 0x106e3780 */
  push32(0x106e3728u); f_106e3780();
  /* 106e3728 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e372b pop ebp */
  EBP = (pop32());
  /* 106e372c ret  */
  ESPCHK(0x106e3710u, _esp0);
  ESP += 4; return;
}

/* FUN_10003730 @ 0x106e3730 (35 bytes, 16 insns) */
void f_106e3730(void) {
  FTRACE(0x106e3730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3730 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3731 mov ebp, esp */
  EBP = (ESP);
  /* 106e3733 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e3736 push eax */
  push32((uint32_t)(EAX));
  /* 106e3737 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e373a push ecx */
  push32((uint32_t)(ECX));
  /* 106e373b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e373e push edx */
  push32((uint32_t)(EDX));
  /* 106e373f mov eax, dword ptr [0x1070f6a8] */
  EAX = (r32((uint32_t)(0x1070f6a8)));
  /* 106e3744 push eax */
  push32((uint32_t)(EAX));
  /* 106e3745 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3748 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3749 call 0x106e3780 */
  push32(0x106e374eu); f_106e3780();
  /* 106e374e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3751 pop ebp */
  EBP = (pop32());
  /* 106e3752 ret  */
  ESPCHK(0x106e3730u, _esp0);
  ESP += 4; return;
}

/* FUN_10003760 @ 0x106e3760 (27 bytes, 13 insns) */
void f_106e3760(void) {
  FTRACE(0x106e3760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3760 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3761 mov ebp, esp */
  EBP = (ESP);
  /* 106e3763 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3765 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3767 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e3769 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e376c push eax */
  push32((uint32_t)(EAX));
  /* 106e376d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3770 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3771 call 0x106e3780 */
  push32(0x106e3776u); f_106e3780();
  /* 106e3776 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3779 pop ebp */
  EBP = (pop32());
  /* 106e377a ret  */
  ESPCHK(0x106e3760u, _esp0);
  ESP += 4; return;
}

/* FUN_10003780 @ 0x106e3780 (94 bytes, 38 insns) */
void f_106e3780(void) {
  FTRACE(0x106e3780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3780 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3781 mov ebp, esp */
  EBP = (ESP);
  /* 106e3783 push ecx */
  push32((uint32_t)(ECX));
L_106e3784:;
  /* 106e3784 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e3786 call 0x106e7130 */
  push32(0x106e378bu); f_106e7130();
  /* 106e378b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e378e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e3791 push eax */
  push32((uint32_t)(EAX));
  /* 106e3792 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e3795 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3796 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3799 push edx */
  push32((uint32_t)(EDX));
  /* 106e379a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e379d push eax */
  push32((uint32_t)(EAX));
  /* 106e379e call 0x106e3800 */
  push32(0x106e37a3u); f_106e3800();
  /* 106e37a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e37a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e37a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e37ab call 0x106e71d0 */
  push32(0x106e37b0u); f_106e71d0();
  /* 106e37b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e37b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e37b7 jne 0x106e37bf */
  if (!C.zf) goto L_106e37bf;
  /* 106e37b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e37bd jne 0x106e37c4 */
  if (!C.zf) goto L_106e37c4;
L_106e37bf:;
  /* 106e37bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e37c2 jmp 0x106e37da */
  goto L_106e37da;
L_106e37c4:;
  /* 106e37c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e37c7 push ecx */
  push32((uint32_t)(ECX));
  /* 106e37c8 call 0x106e7470 */
  push32(0x106e37cdu); f_106e7470();
  /* 106e37cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e37d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e37d2 jne 0x106e37d8 */
  if (!C.zf) goto L_106e37d8;
  /* 106e37d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e37d6 jmp 0x106e37da */
  goto L_106e37da;
L_106e37d8:;
  /* 106e37d8 jmp 0x106e3784 */
  goto L_106e3784;
L_106e37da:;
  /* 106e37da mov esp, ebp */
  ESP = (EBP);
  /* 106e37dc pop ebp */
  EBP = (pop32());
  /* 106e37dd ret  */
  ESPCHK(0x106e3780u, _esp0);
  ESP += 4; return;
}

/* FUN_100037e0 @ 0x106e37e0 (23 bytes, 11 insns) */
void f_106e37e0(void) {
  FTRACE(0x106e37e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e37e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e37e1 mov ebp, esp */
  EBP = (ESP);
  /* 106e37e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e37e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e37e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e37e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e37ec push eax */
  push32((uint32_t)(EAX));
  /* 106e37ed call 0x106e3800 */
  push32(0x106e37f2u); f_106e3800();
  /* 106e37f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e37f5 pop ebp */
  EBP = (pop32());
  /* 106e37f6 ret  */
  ESPCHK(0x106e37e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003800 @ 0x106e3800 (787 bytes, 254 insns) */
void f_106e3800(void) {
  FTRACE(0x106e3800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3800 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3801 mov ebp, esp */
  EBP = (ESP);
  /* 106e3803 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e3806 push ebx */
  push32((uint32_t)(EBX));
  /* 106e3807 push esi */
  push32((uint32_t)(ESI));
  /* 106e3808 push edi */
  push32((uint32_t)(EDI));
  /* 106e3809 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106e3810 mov eax, dword ptr [0x1070da84] */
  EAX = (r32((uint32_t)(0x1070da84)));
  /* 106e3815 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106e3818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e381a je 0x106e384c */
  if (C.zf) goto L_106e384c;
L_106e381c:;
  /* 106e381c call 0x106e48d0 */
  push32(0x106e3821u); f_106e48d0();
  /* 106e3821 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e3823 jne 0x106e3846 */
  if (!C.zf) goto L_106e3846;
  /* 106e3825 push 0x1070a540 */
  push32((uint32_t)(0x1070a540u));
  /* 106e382a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e382c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 106e3831 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e3836 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e3838 call 0x106e27f0 */
  push32(0x106e383du); f_106e27f0();
  /* 106e383d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3840 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3843 jne 0x106e3846 */
  if (!C.zf) goto L_106e3846;
  /* 106e3845 int3  */
  x86_unimpl("int3 @ 0x106e3845");
L_106e3846:;
  /* 106e3846 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e3848 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e384a jne 0x106e381c */
  if (!C.zf) goto L_106e381c;
L_106e384c:;
  /* 106e384c mov edx, dword ptr [0x1070da88] */
  EDX = (r32((uint32_t)(0x1070da88)));
  /* 106e3852 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106e3855 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3858 cmp eax, dword ptr [0x1070da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e385e jne 0x106e3861 */
  if (!C.zf) goto L_106e3861;
  /* 106e3860 int3  */
  x86_unimpl("int3 @ 0x106e3860");
L_106e3861:;
  /* 106e3861 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e3864 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3865 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3868 push edx */
  push32((uint32_t)(EDX));
  /* 106e3869 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e386c push eax */
  push32((uint32_t)(EAX));
  /* 106e386d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3870 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3874 push edx */
  push32((uint32_t)(EDX));
  /* 106e3875 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3877 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e3879 call dword ptr [0x1070dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070dc90))), 0x106e387fu);
  /* 106e387f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e3884 jne 0x106e38e4 */
  if (!C.zf) goto L_106e38e4;
  /* 106e3886 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e388a je 0x106e38b7 */
  if (C.zf) goto L_106e38b7;
L_106e388c:;
  /* 106e388c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e388f push eax */
  push32((uint32_t)(EAX));
  /* 106e3890 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3893 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3894 push 0x1070a4fc */
  push32((uint32_t)(0x1070a4fcu));
  /* 106e3899 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e389b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e389d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e389f push 0 */
  push32((uint32_t)(0x0u));
  /* 106e38a1 call 0x106e27f0 */
  push32(0x106e38a6u); f_106e27f0();
  /* 106e38a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e38a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e38ac jne 0x106e38af */
  if (!C.zf) goto L_106e38af;
  /* 106e38ae int3  */
  x86_unimpl("int3 @ 0x106e38ae");
L_106e38af:;
  /* 106e38af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e38b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e38b3 jne 0x106e388c */
  if (!C.zf) goto L_106e388c;
  /* 106e38b5 jmp 0x106e38dd */
  goto L_106e38dd;
L_106e38b7:;
  /* 106e38b7 push 0x1070a4d8 */
  push32((uint32_t)(0x1070a4d8u));
  /* 106e38bc push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e38c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e38c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e38c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e38c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e38c9 call 0x106e27f0 */
  push32(0x106e38ceu); f_106e27f0();
  /* 106e38ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e38d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e38d4 jne 0x106e38d7 */
  if (!C.zf) goto L_106e38d7;
  /* 106e38d6 int3  */
  x86_unimpl("int3 @ 0x106e38d6");
L_106e38d7:;
  /* 106e38d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e38d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e38db jne 0x106e38b7 */
  if (!C.zf) goto L_106e38b7;
L_106e38dd:;
  /* 106e38dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e38df jmp 0x106e3b0c */
  goto L_106e3b0c;
L_106e38e4:;
  /* 106e38e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e38e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e38ed cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e38f0 je 0x106e3906 */
  if (C.zf) goto L_106e3906;
  /* 106e38f2 mov edx, dword ptr [0x1070da84] */
  EDX = (r32((uint32_t)(0x1070da84)));
  /* 106e38f8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 106e38fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e38fd jne 0x106e3906 */
  if (!C.zf) goto L_106e3906;
  /* 106e38ff mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_106e3906:;
  /* 106e3906 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e390a ja 0x106e3917 */
  if ((!C.cf&&!C.zf)) goto L_106e3917;
  /* 106e390c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e390f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3912 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3915 jbe 0x106e3943 */
  if ((C.cf||C.zf)) goto L_106e3943;
L_106e3917:;
  /* 106e3917 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e391a push ecx */
  push32((uint32_t)(ECX));
  /* 106e391b push 0x1070a4b0 */
  push32((uint32_t)(0x1070a4b0u));
  /* 106e3920 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3922 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3924 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3926 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e3928 call 0x106e27f0 */
  push32(0x106e392du); f_106e27f0();
  /* 106e392d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3930 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3933 jne 0x106e3936 */
  if (!C.zf) goto L_106e3936;
  /* 106e3935 int3  */
  x86_unimpl("int3 @ 0x106e3935");
L_106e3936:;
  /* 106e3936 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e3938 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e393a jne 0x106e3917 */
  if (!C.zf) goto L_106e3917;
  /* 106e393c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e393e jmp 0x106e3b0c */
  goto L_106e3b0c;
L_106e3943:;
  /* 106e3943 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3946 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e394b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e394e je 0x106e3990 */
  if (C.zf) goto L_106e3990;
  /* 106e3950 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3954 je 0x106e3990 */
  if (C.zf) goto L_106e3990;
  /* 106e3956 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3959 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e395f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3962 je 0x106e3990 */
  if (C.zf) goto L_106e3990;
  /* 106e3964 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3968 je 0x106e3990 */
  if (C.zf) goto L_106e3990;
L_106e396a:;
  /* 106e396a push 0x1070a47c */
  push32((uint32_t)(0x1070a47cu));
  /* 106e396f push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e3974 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3976 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3978 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e397a push 1 */
  push32((uint32_t)(0x1u));
  /* 106e397c call 0x106e27f0 */
  push32(0x106e3981u); f_106e27f0();
  /* 106e3981 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3984 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3987 jne 0x106e398a */
  if (!C.zf) goto L_106e398a;
  /* 106e3989 int3  */
  x86_unimpl("int3 @ 0x106e3989");
L_106e398a:;
  /* 106e398a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e398c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e398e jne 0x106e396a */
  if (!C.zf) goto L_106e396a;
L_106e3990:;
  /* 106e3990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3993 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3996 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106e3999 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e399c push ecx */
  push32((uint32_t)(ECX));
  /* 106e399d call 0x106e7580 */
  push32(0x106e39a2u); f_106e7580();
  /* 106e39a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e39a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e39a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e39ac jne 0x106e39b5 */
  if (!C.zf) goto L_106e39b5;
  /* 106e39ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e39b0 jmp 0x106e3b0c */
  goto L_106e3b0c;
L_106e39b5:;
  /* 106e39b5 mov edx, dword ptr [0x1070da88] */
  EDX = (r32((uint32_t)(0x1070da88)));
  /* 106e39bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e39be mov dword ptr [0x1070da88], edx */
  w32((uint32_t)(0x1070da88), (EDX));
  /* 106e39c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e39c8 je 0x106e3a13 */
  if (C.zf) goto L_106e3a13;
  /* 106e39ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e39cd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106e39d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e39d6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 106e39dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e39e0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 106e39e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e39ea mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 106e39f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e39f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e39f7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 106e39fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e39fd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 106e3a04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3a07 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 106e3a0e jmp 0x106e3ab3 */
  goto L_106e3ab3;
L_106e3a13:;
  /* 106e3a13 mov edx, dword ptr [0x1070f508] */
  EDX = (r32((uint32_t)(0x1070f508)));
  /* 106e3a19 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3a1c mov dword ptr [0x1070f508], edx */
  w32((uint32_t)(0x1070f508), (EDX));
  /* 106e3a22 mov eax, dword ptr [0x1070f510] */
  EAX = (r32((uint32_t)(0x1070f510)));
  /* 106e3a27 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3a2a mov dword ptr [0x1070f510], eax */
  w32((uint32_t)(0x1070f510), (EAX));
  /* 106e3a2f mov ecx, dword ptr [0x1070f510] */
  ECX = (r32((uint32_t)(0x1070f510)));
  /* 106e3a35 cmp ecx, dword ptr [0x1070f514] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1070f514))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3a3b jbe 0x106e3a49 */
  if ((C.cf||C.zf)) goto L_106e3a49;
  /* 106e3a3d mov edx, dword ptr [0x1070f510] */
  EDX = (r32((uint32_t)(0x1070f510)));
  /* 106e3a43 mov dword ptr [0x1070f514], edx */
  w32((uint32_t)(0x1070f514), (EDX));
L_106e3a49:;
  /* 106e3a49 cmp dword ptr [0x1070f50c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f50c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3a50 je 0x106e3a5f */
  if (C.zf) goto L_106e3a5f;
  /* 106e3a52 mov eax, dword ptr [0x1070f50c] */
  EAX = (r32((uint32_t)(0x1070f50c)));
  /* 106e3a57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3a5a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 106e3a5d jmp 0x106e3a68 */
  goto L_106e3a68;
L_106e3a5f:;
  /* 106e3a5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3a62 mov dword ptr [0x1070f504], edx */
  w32((uint32_t)(0x1070f504), (EDX));
L_106e3a68:;
  /* 106e3a68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3a6b mov ecx, dword ptr [0x1070f50c] */
  ECX = (r32((uint32_t)(0x1070f50c)));
  /* 106e3a71 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106e3a73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3a76 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 106e3a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3a80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3a83 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 106e3a86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3a89 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e3a8c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 106e3a8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3a92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3a95 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 106e3a98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3a9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3a9e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 106e3aa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3aa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3aa7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 106e3aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3aad mov dword ptr [0x1070f50c], ecx */
  w32((uint32_t)(0x1070f50c), (ECX));
L_106e3ab3:;
  /* 106e3ab3 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e3ab5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e3ab7 mov dl, byte ptr [0x1070da90] */
  DL = (r8((uint32_t)(0x1070da90)));
  /* 106e3abd push edx */
  push32((uint32_t)(EDX));
  /* 106e3abe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3ac1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3ac4 push eax */
  push32((uint32_t)(EAX));
  /* 106e3ac5 call 0x106e74a0 */
  push32(0x106e3acau); f_106e74a0();
  /* 106e3aca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3acd push 4 */
  push32((uint32_t)(0x4u));
  /* 106e3acf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e3ad1 mov cl, byte ptr [0x1070da90] */
  CL = (r8((uint32_t)(0x1070da90)));
  /* 106e3ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3ad8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3adb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3ade lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 106e3ae2 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3ae3 call 0x106e74a0 */
  push32(0x106e3ae8u); f_106e74a0();
  /* 106e3ae8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3aeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3aee push edx */
  push32((uint32_t)(EDX));
  /* 106e3aef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e3af1 mov al, byte ptr [0x1070da92] */
  AL = (r8((uint32_t)(0x1070da92)));
  /* 106e3af6 push eax */
  push32((uint32_t)(EAX));
  /* 106e3af7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3afa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3afd push ecx */
  push32((uint32_t)(ECX));
  /* 106e3afe call 0x106e74a0 */
  push32(0x106e3b03u); f_106e74a0();
  /* 106e3b03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3b06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3b09 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_106e3b0c:;
  /* 106e3b0c pop edi */
  EDI = (pop32());
  /* 106e3b0d pop esi */
  ESI = (pop32());
  /* 106e3b0e pop ebx */
  EBX = (pop32());
  /* 106e3b0f mov esp, ebp */
  ESP = (EBP);
  /* 106e3b11 pop ebp */
  EBP = (pop32());
  /* 106e3b12 ret  */
  ESPCHK(0x106e3800u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b20 @ 0x106e3b20 (27 bytes, 13 insns) */
void f_106e3b20(void) {
  FTRACE(0x106e3b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3b20 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3b21 mov ebp, esp */
  EBP = (ESP);
  /* 106e3b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3b27 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e3b29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3b2c push eax */
  push32((uint32_t)(EAX));
  /* 106e3b2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3b30 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3b31 call 0x106e3b40 */
  push32(0x106e3b36u); f_106e3b40();
  /* 106e3b36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3b39 pop ebp */
  EBP = (pop32());
  /* 106e3b3a ret  */
  ESPCHK(0x106e3b20u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x106e3b40 (96 bytes, 37 insns) */
void f_106e3b40(void) {
  FTRACE(0x106e3b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3b40 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3b41 mov ebp, esp */
  EBP = (ESP);
  /* 106e3b43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e3b46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3b49 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e3b4d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 106e3b50 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e3b53 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3b54 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e3b57 push edx */
  push32((uint32_t)(EDX));
  /* 106e3b58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3b5b push eax */
  push32((uint32_t)(EAX));
  /* 106e3b5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3b5f push ecx */
  push32((uint32_t)(ECX));
  /* 106e3b60 call 0x106e3730 */
  push32(0x106e3b65u); f_106e3730();
  /* 106e3b65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3b68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e3b6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3b6f je 0x106e3b99 */
  if (C.zf) goto L_106e3b99;
  /* 106e3b71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3b74 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106e3b77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3b7a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3b7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e3b80:;
  /* 106e3b80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3b83 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3b86 jae 0x106e3b99 */
  if (!C.cf) goto L_106e3b99;
  /* 106e3b88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3b8b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106e3b8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3b91 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3b94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e3b97 jmp 0x106e3b80 */
  goto L_106e3b80;
L_106e3b99:;
  /* 106e3b99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3b9c mov esp, ebp */
  ESP = (EBP);
  /* 106e3b9e pop ebp */
  EBP = (pop32());
  /* 106e3b9f ret  */
  ESPCHK(0x106e3b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba0 @ 0x106e3ba0 (27 bytes, 13 insns) */
void f_106e3ba0(void) {
  FTRACE(0x106e3ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3ba1 mov ebp, esp */
  EBP = (ESP);
  /* 106e3ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3ba7 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e3ba9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3bac push eax */
  push32((uint32_t)(EAX));
  /* 106e3bad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3bb1 call 0x106e3bc0 */
  push32(0x106e3bb6u); f_106e3bc0();
  /* 106e3bb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3bb9 pop ebp */
  EBP = (pop32());
  /* 106e3bba ret  */
  ESPCHK(0x106e3ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bc0 @ 0x106e3bc0 (64 bytes, 27 insns) */
void f_106e3bc0(void) {
  FTRACE(0x106e3bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3bc1 mov ebp, esp */
  EBP = (ESP);
  /* 106e3bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3bc4 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e3bc6 call 0x106e7130 */
  push32(0x106e3bcbu); f_106e7130();
  /* 106e3bcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3bce push 1 */
  push32((uint32_t)(0x1u));
  /* 106e3bd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e3bd3 push eax */
  push32((uint32_t)(EAX));
  /* 106e3bd4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e3bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3bd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3bdb push edx */
  push32((uint32_t)(EDX));
  /* 106e3bdc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3bdf push eax */
  push32((uint32_t)(EAX));
  /* 106e3be0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3be3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3be4 call 0x106e3c00 */
  push32(0x106e3be9u); f_106e3c00();
  /* 106e3be9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3bec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e3bef push 9 */
  push32((uint32_t)(0x9u));
  /* 106e3bf1 call 0x106e71d0 */
  push32(0x106e3bf6u); f_106e71d0();
  /* 106e3bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3bf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3bfc mov esp, ebp */
  ESP = (EBP);
  /* 106e3bfe pop ebp */
  EBP = (pop32());
  /* 106e3bff ret  */
  ESPCHK(0x106e3bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c00 @ 0x106e3c00 (1297 bytes, 431 insns) */
void f_106e3c00(void) {
  FTRACE(0x106e3c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e3c00 push ebp */
  push32((uint32_t)(EBP));
  /* 106e3c01 mov ebp, esp */
  EBP = (ESP);
  /* 106e3c03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e3c06 push ebx */
  push32((uint32_t)(EBX));
  /* 106e3c07 push esi */
  push32((uint32_t)(ESI));
  /* 106e3c08 push edi */
  push32((uint32_t)(EDI));
  /* 106e3c09 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 106e3c10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3c14 jne 0x106e3c33 */
  if (!C.zf) goto L_106e3c33;
  /* 106e3c16 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e3c19 push eax */
  push32((uint32_t)(EAX));
  /* 106e3c1a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e3c1d push ecx */
  push32((uint32_t)(ECX));
  /* 106e3c1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3c21 push edx */
  push32((uint32_t)(EDX));
  /* 106e3c22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3c25 push eax */
  push32((uint32_t)(EAX));
  /* 106e3c26 call 0x106e3730 */
  push32(0x106e3c2bu); f_106e3730();
  /* 106e3c2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3c2e jmp 0x106e410a */
  goto L_106e410a;
L_106e3c33:;
  /* 106e3c33 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3c37 je 0x106e3c56 */
  if (C.zf) goto L_106e3c56;
  /* 106e3c39 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3c3d jne 0x106e3c56 */
  if (!C.zf) goto L_106e3c56;
  /* 106e3c3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3c42 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3c43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3c46 push edx */
  push32((uint32_t)(EDX));
  /* 106e3c47 call 0x106e41c0 */
  push32(0x106e3c4cu); f_106e41c0();
  /* 106e3c4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3c4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e3c51 jmp 0x106e410a */
  goto L_106e410a;
L_106e3c56:;
  /* 106e3c56 mov eax, dword ptr [0x1070da84] */
  EAX = (r32((uint32_t)(0x1070da84)));
  /* 106e3c5b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106e3c5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e3c60 je 0x106e3c92 */
  if (C.zf) goto L_106e3c92;
L_106e3c62:;
  /* 106e3c62 call 0x106e48d0 */
  push32(0x106e3c67u); f_106e48d0();
  /* 106e3c67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e3c69 jne 0x106e3c8c */
  if (!C.zf) goto L_106e3c8c;
  /* 106e3c6b push 0x1070a540 */
  push32((uint32_t)(0x1070a540u));
  /* 106e3c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3c72 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 106e3c77 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e3c7c push 2 */
  push32((uint32_t)(0x2u));
  /* 106e3c7e call 0x106e27f0 */
  push32(0x106e3c83u); f_106e27f0();
  /* 106e3c83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3c86 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3c89 jne 0x106e3c8c */
  if (!C.zf) goto L_106e3c8c;
  /* 106e3c8b int3  */
  x86_unimpl("int3 @ 0x106e3c8b");
L_106e3c8c:;
  /* 106e3c8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e3c8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e3c90 jne 0x106e3c62 */
  if (!C.zf) goto L_106e3c62;
L_106e3c92:;
  /* 106e3c92 mov edx, dword ptr [0x1070da88] */
  EDX = (r32((uint32_t)(0x1070da88)));
  /* 106e3c98 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106e3c9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e3c9e cmp eax, dword ptr [0x1070da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3ca4 jne 0x106e3ca7 */
  if (!C.zf) goto L_106e3ca7;
  /* 106e3ca6 int3  */
  x86_unimpl("int3 @ 0x106e3ca6");
L_106e3ca7:;
  /* 106e3ca7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e3caa push ecx */
  push32((uint32_t)(ECX));
  /* 106e3cab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e3cae push edx */
  push32((uint32_t)(EDX));
  /* 106e3caf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e3cb2 push eax */
  push32((uint32_t)(EAX));
  /* 106e3cb3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3cb6 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3cb7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3cba push edx */
  push32((uint32_t)(EDX));
  /* 106e3cbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3cbe push eax */
  push32((uint32_t)(EAX));
  /* 106e3cbf push 2 */
  push32((uint32_t)(0x2u));
  /* 106e3cc1 call dword ptr [0x1070dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070dc90))), 0x106e3cc7u);
  /* 106e3cc7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3cca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e3ccc jne 0x106e3d2c */
  if (!C.zf) goto L_106e3d2c;
  /* 106e3cce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3cd2 je 0x106e3cff */
  if (C.zf) goto L_106e3cff;
L_106e3cd4:;
  /* 106e3cd4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e3cd7 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3cd8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e3cdb push edx */
  push32((uint32_t)(EDX));
  /* 106e3cdc push 0x1070a6bc */
  push32((uint32_t)(0x1070a6bcu));
  /* 106e3ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3ce9 call 0x106e27f0 */
  push32(0x106e3ceeu); f_106e27f0();
  /* 106e3cee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3cf1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3cf4 jne 0x106e3cf7 */
  if (!C.zf) goto L_106e3cf7;
  /* 106e3cf6 int3  */
  x86_unimpl("int3 @ 0x106e3cf6");
L_106e3cf7:;
  /* 106e3cf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e3cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e3cfb jne 0x106e3cd4 */
  if (!C.zf) goto L_106e3cd4;
  /* 106e3cfd jmp 0x106e3d25 */
  goto L_106e3d25;
L_106e3cff:;
  /* 106e3cff push 0x1070a698 */
  push32((uint32_t)(0x1070a698u));
  /* 106e3d04 push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e3d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3d11 call 0x106e27f0 */
  push32(0x106e3d16u); f_106e27f0();
  /* 106e3d16 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3d19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3d1c jne 0x106e3d1f */
  if (!C.zf) goto L_106e3d1f;
  /* 106e3d1e int3  */
  x86_unimpl("int3 @ 0x106e3d1e");
L_106e3d1f:;
  /* 106e3d1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e3d21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e3d23 jne 0x106e3cff */
  if (!C.zf) goto L_106e3cff;
L_106e3d25:;
  /* 106e3d25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e3d27 jmp 0x106e410a */
  goto L_106e410a;
L_106e3d2c:;
  /* 106e3d2c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3d30 jbe 0x106e3d5e */
  if ((C.cf||C.zf)) goto L_106e3d5e;
L_106e3d32:;
  /* 106e3d32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3d35 push edx */
  push32((uint32_t)(EDX));
  /* 106e3d36 push 0x1070a668 */
  push32((uint32_t)(0x1070a668u));
  /* 106e3d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3d41 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e3d43 call 0x106e27f0 */
  push32(0x106e3d48u); f_106e27f0();
  /* 106e3d48 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3d4b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3d4e jne 0x106e3d51 */
  if (!C.zf) goto L_106e3d51;
  /* 106e3d50 int3  */
  x86_unimpl("int3 @ 0x106e3d50");
L_106e3d51:;
  /* 106e3d51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e3d53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e3d55 jne 0x106e3d32 */
  if (!C.zf) goto L_106e3d32;
  /* 106e3d57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e3d59 jmp 0x106e410a */
  goto L_106e410a;
L_106e3d5e:;
  /* 106e3d5e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3d62 je 0x106e3da6 */
  if (C.zf) goto L_106e3da6;
  /* 106e3d64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3d67 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e3d6d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3d70 je 0x106e3da6 */
  if (C.zf) goto L_106e3da6;
  /* 106e3d72 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3d75 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e3d7b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3d7e je 0x106e3da6 */
  if (C.zf) goto L_106e3da6;
L_106e3d80:;
  /* 106e3d80 push 0x1070a47c */
  push32((uint32_t)(0x1070a47cu));
  /* 106e3d85 push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e3d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3d8e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3d90 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e3d92 call 0x106e27f0 */
  push32(0x106e3d97u); f_106e27f0();
  /* 106e3d97 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3d9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3d9d jne 0x106e3da0 */
  if (!C.zf) goto L_106e3da0;
  /* 106e3d9f int3  */
  x86_unimpl("int3 @ 0x106e3d9f");
L_106e3da0:;
  /* 106e3da0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e3da2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e3da4 jne 0x106e3d80 */
  if (!C.zf) goto L_106e3d80;
L_106e3da6:;
  /* 106e3da6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3da9 push ecx */
  push32((uint32_t)(ECX));
  /* 106e3daa call 0x106e4d30 */
  push32(0x106e3dafu); f_106e4d30();
  /* 106e3daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3db2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e3db4 jne 0x106e3dd7 */
  if (!C.zf) goto L_106e3dd7;
  /* 106e3db6 push 0x1070a644 */
  push32((uint32_t)(0x1070a644u));
  /* 106e3dbb push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3dbd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 106e3dc2 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e3dc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e3dc9 call 0x106e27f0 */
  push32(0x106e3dceu); f_106e27f0();
  /* 106e3dce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3dd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3dd4 jne 0x106e3dd7 */
  if (!C.zf) goto L_106e3dd7;
  /* 106e3dd6 int3  */
  x86_unimpl("int3 @ 0x106e3dd6");
L_106e3dd7:;
  /* 106e3dd7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e3dd9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e3ddb jne 0x106e3da6 */
  if (!C.zf) goto L_106e3da6;
  /* 106e3ddd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e3de0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e3de3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e3de6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3de9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3ded jne 0x106e3df6 */
  if (!C.zf) goto L_106e3df6;
  /* 106e3def mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_106e3df6:;
  /* 106e3df6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3dfa je 0x106e3e3a */
  if (C.zf) goto L_106e3e3a;
L_106e3dfc:;
  /* 106e3dfc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3dff cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3e06 jne 0x106e3e11 */
  if (!C.zf) goto L_106e3e11;
  /* 106e3e08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3e0b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3e0f je 0x106e3e32 */
  if (C.zf) goto L_106e3e32;
L_106e3e11:;
  /* 106e3e11 push 0x1070a5fc */
  push32((uint32_t)(0x1070a5fcu));
  /* 106e3e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3e18 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 106e3e1d push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e3e22 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e3e24 call 0x106e27f0 */
  push32(0x106e3e29u); f_106e27f0();
  /* 106e3e29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3e2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3e2f jne 0x106e3e32 */
  if (!C.zf) goto L_106e3e32;
  /* 106e3e31 int3  */
  x86_unimpl("int3 @ 0x106e3e31");
L_106e3e32:;
  /* 106e3e32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e3e34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e3e36 jne 0x106e3dfc */
  if (!C.zf) goto L_106e3dfc;
  /* 106e3e38 jmp 0x106e3e9e */
  goto L_106e3e9e;
L_106e3e3a:;
  /* 106e3e3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3e3d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e3e40 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e3e45 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3e48 jne 0x106e3e5f */
  if (!C.zf) goto L_106e3e5f;
  /* 106e3e4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3e4d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e3e53 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3e56 jne 0x106e3e5f */
  if (!C.zf) goto L_106e3e5f;
  /* 106e3e58 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_106e3e5f:;
  /* 106e3e5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3e62 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e3e65 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e3e6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e3e6d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e3e73 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3e75 je 0x106e3e98 */
  if (C.zf) goto L_106e3e98;
  /* 106e3e77 push 0x1070a5c0 */
  push32((uint32_t)(0x1070a5c0u));
  /* 106e3e7c push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3e7e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 106e3e83 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e3e88 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e3e8a call 0x106e27f0 */
  push32(0x106e3e8fu); f_106e27f0();
  /* 106e3e8f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3e92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3e95 jne 0x106e3e98 */
  if (!C.zf) goto L_106e3e98;
  /* 106e3e97 int3  */
  x86_unimpl("int3 @ 0x106e3e97");
L_106e3e98:;
  /* 106e3e98 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e3e9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e3e9c jne 0x106e3e5f */
  if (!C.zf) goto L_106e3e5f;
L_106e3e9e:;
  /* 106e3e9e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3ea2 je 0x106e3ec9 */
  if (C.zf) goto L_106e3ec9;
  /* 106e3ea4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3ea7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3eaa push eax */
  push32((uint32_t)(EAX));
  /* 106e3eab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3eae push ecx */
  push32((uint32_t)(ECX));
  /* 106e3eaf call 0x106e76b0 */
  push32(0x106e3eb4u); f_106e76b0();
  /* 106e3eb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3eb7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e3eba cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3ebe jne 0x106e3ec7 */
  if (!C.zf) goto L_106e3ec7;
  /* 106e3ec0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e3ec2 jmp 0x106e410a */
  goto L_106e410a;
L_106e3ec7:;
  /* 106e3ec7 jmp 0x106e3eec */
  goto L_106e3eec;
L_106e3ec9:;
  /* 106e3ec9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3ecc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3ecf push edx */
  push32((uint32_t)(EDX));
  /* 106e3ed0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e3ed3 push eax */
  push32((uint32_t)(EAX));
  /* 106e3ed4 call 0x106e7600 */
  push32(0x106e3ed9u); f_106e7600();
  /* 106e3ed9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3edc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e3edf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3ee3 jne 0x106e3eec */
  if (!C.zf) goto L_106e3eec;
  /* 106e3ee5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e3ee7 jmp 0x106e410a */
  goto L_106e410a;
L_106e3eec:;
  /* 106e3eec mov ecx, dword ptr [0x1070da88] */
  ECX = (r32((uint32_t)(0x1070da88)));
  /* 106e3ef2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3ef5 mov dword ptr [0x1070da88], ecx */
  w32((uint32_t)(0x1070da88), (ECX));
  /* 106e3efb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3eff jne 0x106e3f57 */
  if (!C.zf) goto L_106e3f57;
  /* 106e3f01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3f04 mov eax, dword ptr [0x1070f508] */
  EAX = (r32((uint32_t)(0x1070f508)));
  /* 106e3f09 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e3f0c mov dword ptr [0x1070f508], eax */
  w32((uint32_t)(0x1070f508), (EAX));
  /* 106e3f11 mov ecx, dword ptr [0x1070f508] */
  ECX = (r32((uint32_t)(0x1070f508)));
  /* 106e3f17 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3f1a mov dword ptr [0x1070f508], ecx */
  w32((uint32_t)(0x1070f508), (ECX));
  /* 106e3f20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3f23 mov eax, dword ptr [0x1070f510] */
  EAX = (r32((uint32_t)(0x1070f510)));
  /* 106e3f28 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e3f2b mov dword ptr [0x1070f510], eax */
  w32((uint32_t)(0x1070f510), (EAX));
  /* 106e3f30 mov ecx, dword ptr [0x1070f510] */
  ECX = (r32((uint32_t)(0x1070f510)));
  /* 106e3f36 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3f39 mov dword ptr [0x1070f510], ecx */
  w32((uint32_t)(0x1070f510), (ECX));
  /* 106e3f3f mov edx, dword ptr [0x1070f510] */
  EDX = (r32((uint32_t)(0x1070f510)));
  /* 106e3f45 cmp edx, dword ptr [0x1070f514] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1070f514))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3f4b jbe 0x106e3f57 */
  if ((C.cf||C.zf)) goto L_106e3f57;
  /* 106e3f4d mov eax, dword ptr [0x1070f510] */
  EAX = (r32((uint32_t)(0x1070f510)));
  /* 106e3f52 mov dword ptr [0x1070f514], eax */
  w32((uint32_t)(0x1070f514), (EAX));
L_106e3f57:;
  /* 106e3f57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3f5a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3f5d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e3f60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3f63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3f66 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3f69 jbe 0x106e3f8f */
  if ((C.cf||C.zf)) goto L_106e3f8f;
  /* 106e3f6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3f6e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3f71 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e3f74 push edx */
  push32((uint32_t)(EDX));
  /* 106e3f75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e3f77 mov al, byte ptr [0x1070da92] */
  AL = (r8((uint32_t)(0x1070da92)));
  /* 106e3f7c push eax */
  push32((uint32_t)(EAX));
  /* 106e3f7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3f80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3f83 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3f86 push edx */
  push32((uint32_t)(EDX));
  /* 106e3f87 call 0x106e74a0 */
  push32(0x106e3f8cu); f_106e74a0();
  /* 106e3f8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e3f8f:;
  /* 106e3f8f push 4 */
  push32((uint32_t)(0x4u));
  /* 106e3f91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e3f93 mov al, byte ptr [0x1070da90] */
  AL = (r8((uint32_t)(0x1070da90)));
  /* 106e3f98 push eax */
  push32((uint32_t)(EAX));
  /* 106e3f99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e3f9c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3f9f push ecx */
  push32((uint32_t)(ECX));
  /* 106e3fa0 call 0x106e74a0 */
  push32(0x106e3fa5u); f_106e74a0();
  /* 106e3fa5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e3fa8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3fac jne 0x106e3fc9 */
  if (!C.zf) goto L_106e3fc9;
  /* 106e3fae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3fb1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e3fb4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106e3fb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3fba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e3fbd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 106e3fc0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3fc3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e3fc6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_106e3fc9:;
  /* 106e3fc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3fcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e3fcf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_106e3fd2:;
  /* 106e3fd2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3fd6 jne 0x106e4007 */
  if (!C.zf) goto L_106e4007;
  /* 106e3fd8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3fdc jne 0x106e3fe6 */
  if (!C.zf) goto L_106e3fe6;
  /* 106e3fde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e3fe1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e3fe4 je 0x106e4007 */
  if (C.zf) goto L_106e4007;
L_106e3fe6:;
  /* 106e3fe6 push 0x1070a58c */
  push32((uint32_t)(0x1070a58cu));
  /* 106e3feb push 0 */
  push32((uint32_t)(0x0u));
  /* 106e3fed push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 106e3ff2 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e3ff7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e3ff9 call 0x106e27f0 */
  push32(0x106e3ffeu); f_106e27f0();
  /* 106e3ffe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4001 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4004 jne 0x106e4007 */
  if (!C.zf) goto L_106e4007;
  /* 106e4006 int3  */
  x86_unimpl("int3 @ 0x106e4006");
L_106e4007:;
  /* 106e4007 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e4009 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e400b jne 0x106e3fd2 */
  if (!C.zf) goto L_106e3fd2;
  /* 106e400d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e4010 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4013 je 0x106e401b */
  if (C.zf) goto L_106e401b;
  /* 106e4015 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4019 je 0x106e4023 */
  if (C.zf) goto L_106e4023;
L_106e401b:;
  /* 106e401b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e401e jmp 0x106e410a */
  goto L_106e410a;
L_106e4023:;
  /* 106e4023 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e4026 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4029 je 0x106e403b */
  if (C.zf) goto L_106e403b;
  /* 106e402b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e402e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e4030 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e4033 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e4036 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106e4039 jmp 0x106e4077 */
  goto L_106e4077;
L_106e403b:;
  /* 106e403b mov eax, dword ptr [0x1070f504] */
  EAX = (r32((uint32_t)(0x1070f504)));
  /* 106e4040 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4043 je 0x106e4066 */
  if (C.zf) goto L_106e4066;
  /* 106e4045 push 0x1070a570 */
  push32((uint32_t)(0x1070a570u));
  /* 106e404a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e404c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 106e4051 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e4056 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e4058 call 0x106e27f0 */
  push32(0x106e405du); f_106e27f0();
  /* 106e405d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4060 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4063 jne 0x106e4066 */
  if (!C.zf) goto L_106e4066;
  /* 106e4065 int3  */
  x86_unimpl("int3 @ 0x106e4065");
L_106e4066:;
  /* 106e4066 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e4068 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e406a jne 0x106e403b */
  if (!C.zf) goto L_106e403b;
  /* 106e406c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e406f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e4072 mov dword ptr [0x1070f504], eax */
  w32((uint32_t)(0x1070f504), (EAX));
L_106e4077:;
  /* 106e4077 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e407a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e407e je 0x106e408f */
  if (C.zf) goto L_106e408f;
  /* 106e4080 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e4083 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e4086 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e4089 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e408b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106e408d jmp 0x106e40ca */
  goto L_106e40ca;
L_106e408f:;
  /* 106e408f mov eax, dword ptr [0x1070f50c] */
  EAX = (r32((uint32_t)(0x1070f50c)));
  /* 106e4094 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4097 je 0x106e40ba */
  if (C.zf) goto L_106e40ba;
  /* 106e4099 push 0x1070a554 */
  push32((uint32_t)(0x1070a554u));
  /* 106e409e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e40a0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 106e40a5 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e40aa push 2 */
  push32((uint32_t)(0x2u));
  /* 106e40ac call 0x106e27f0 */
  push32(0x106e40b1u); f_106e27f0();
  /* 106e40b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e40b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e40b7 jne 0x106e40ba */
  if (!C.zf) goto L_106e40ba;
  /* 106e40b9 int3  */
  x86_unimpl("int3 @ 0x106e40b9");
L_106e40ba:;
  /* 106e40ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e40bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e40be jne 0x106e408f */
  if (!C.zf) goto L_106e408f;
  /* 106e40c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e40c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e40c5 mov dword ptr [0x1070f50c], eax */
  w32((uint32_t)(0x1070f50c), (EAX));
L_106e40ca:;
  /* 106e40ca cmp dword ptr [0x1070f50c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f50c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e40d1 je 0x106e40e1 */
  if (C.zf) goto L_106e40e1;
  /* 106e40d3 mov ecx, dword ptr [0x1070f50c] */
  ECX = (r32((uint32_t)(0x1070f50c)));
  /* 106e40d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e40dc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 106e40df jmp 0x106e40e9 */
  goto L_106e40e9;
L_106e40e1:;
  /* 106e40e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e40e4 mov dword ptr [0x1070f504], eax */
  w32((uint32_t)(0x1070f504), (EAX));
L_106e40e9:;
  /* 106e40e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e40ec mov edx, dword ptr [0x1070f50c] */
  EDX = (r32((uint32_t)(0x1070f50c)));
  /* 106e40f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106e40f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e40f7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 106e40fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e4101 mov dword ptr [0x1070f50c], ecx */
  w32((uint32_t)(0x1070f50c), (ECX));
  /* 106e4107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106e410a:;
  /* 106e410a pop edi */
  EDI = (pop32());
  /* 106e410b pop esi */
  ESI = (pop32());
  /* 106e410c pop ebx */
  EBX = (pop32());
  /* 106e410d mov esp, ebp */
  ESP = (EBP);
  /* 106e410f pop ebp */
  EBP = (pop32());
  /* 106e4110 ret  */
  ESPCHK(0x106e3c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004120 @ 0x106e4120 (27 bytes, 13 insns) */
void f_106e4120(void) {
  FTRACE(0x106e4120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4120 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4121 mov ebp, esp */
  EBP = (ESP);
  /* 106e4123 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4125 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4127 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e4129 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e412c push eax */
  push32((uint32_t)(EAX));
  /* 106e412d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4130 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4131 call 0x106e4140 */
  push32(0x106e4136u); f_106e4140();
  /* 106e4136 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4139 pop ebp */
  EBP = (pop32());
  /* 106e413a ret  */
  ESPCHK(0x106e4120u, _esp0);
  ESP += 4; return;
}

/* FUN_10004140 @ 0x106e4140 (64 bytes, 27 insns) */
void f_106e4140(void) {
  FTRACE(0x106e4140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4140 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4141 mov ebp, esp */
  EBP = (ESP);
  /* 106e4143 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4144 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4146 call 0x106e7130 */
  push32(0x106e414bu); f_106e7130();
  /* 106e414b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e414e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4150 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e4153 push eax */
  push32((uint32_t)(EAX));
  /* 106e4154 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e4157 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4158 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e415b push edx */
  push32((uint32_t)(EDX));
  /* 106e415c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e415f push eax */
  push32((uint32_t)(EAX));
  /* 106e4160 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4163 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4164 call 0x106e3c00 */
  push32(0x106e4169u); f_106e3c00();
  /* 106e4169 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e416c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e416f push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4171 call 0x106e71d0 */
  push32(0x106e4176u); f_106e71d0();
  /* 106e4176 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4179 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e417c mov esp, ebp */
  ESP = (EBP);
  /* 106e417e pop ebp */
  EBP = (pop32());
  /* 106e417f ret  */
  ESPCHK(0x106e4140u, _esp0);
  ESP += 4; return;
}

/* FUN_10004180 @ 0x106e4180 (19 bytes, 9 insns) */
void f_106e4180(void) {
  FTRACE(0x106e4180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4180 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4181 mov ebp, esp */
  EBP = (ESP);
  /* 106e4183 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e4185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4188 push eax */
  push32((uint32_t)(EAX));
  /* 106e4189 call 0x106e41c0 */
  push32(0x106e418eu); f_106e41c0();
  /* 106e418e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4191 pop ebp */
  EBP = (pop32());
  /* 106e4192 ret  */
  ESPCHK(0x106e4180u, _esp0);
  ESP += 4; return;
}

/* FUN_100041a0 @ 0x106e41a0 (19 bytes, 9 insns) */
void f_106e41a0(void) {
  FTRACE(0x106e41a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e41a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e41a1 mov ebp, esp */
  EBP = (ESP);
  /* 106e41a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e41a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e41a8 push eax */
  push32((uint32_t)(EAX));
  /* 106e41a9 call 0x106e41f0 */
  push32(0x106e41aeu); f_106e41f0();
  /* 106e41ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e41b1 pop ebp */
  EBP = (pop32());
  /* 106e41b2 ret  */
  ESPCHK(0x106e41a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041c0 @ 0x106e41c0 (41 bytes, 16 insns) */
void f_106e41c0(void) {
  FTRACE(0x106e41c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e41c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e41c1 mov ebp, esp */
  EBP = (ESP);
  /* 106e41c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e41c5 call 0x106e7130 */
  push32(0x106e41cau); f_106e7130();
  /* 106e41ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e41cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e41d0 push eax */
  push32((uint32_t)(EAX));
  /* 106e41d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e41d4 push ecx */
  push32((uint32_t)(ECX));
  /* 106e41d5 call 0x106e41f0 */
  push32(0x106e41dau); f_106e41f0();
  /* 106e41da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e41dd push 9 */
  push32((uint32_t)(0x9u));
  /* 106e41df call 0x106e71d0 */
  push32(0x106e41e4u); f_106e71d0();
  /* 106e41e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e41e7 pop ebp */
  EBP = (pop32());
  /* 106e41e8 ret  */
  ESPCHK(0x106e41c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041f0 @ 0x106e41f0 (1004 bytes, 342 insns) */
void f_106e41f0(void) {
  FTRACE(0x106e41f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e41f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e41f1 mov ebp, esp */
  EBP = (ESP);
  /* 106e41f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e41f4 push ebx */
  push32((uint32_t)(EBX));
  /* 106e41f5 push esi */
  push32((uint32_t)(ESI));
  /* 106e41f6 push edi */
  push32((uint32_t)(EDI));
  /* 106e41f7 mov eax, dword ptr [0x1070da84] */
  EAX = (r32((uint32_t)(0x1070da84)));
  /* 106e41fc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106e41ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4201 je 0x106e4233 */
  if (C.zf) goto L_106e4233;
L_106e4203:;
  /* 106e4203 call 0x106e48d0 */
  push32(0x106e4208u); f_106e48d0();
  /* 106e4208 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e420a jne 0x106e422d */
  if (!C.zf) goto L_106e422d;
  /* 106e420c push 0x1070a540 */
  push32((uint32_t)(0x1070a540u));
  /* 106e4211 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4213 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 106e4218 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e421d push 2 */
  push32((uint32_t)(0x2u));
  /* 106e421f call 0x106e27f0 */
  push32(0x106e4224u); f_106e27f0();
  /* 106e4224 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4227 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e422a jne 0x106e422d */
  if (!C.zf) goto L_106e422d;
  /* 106e422c int3  */
  x86_unimpl("int3 @ 0x106e422c");
L_106e422d:;
  /* 106e422d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e422f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e4231 jne 0x106e4203 */
  if (!C.zf) goto L_106e4203;
L_106e4233:;
  /* 106e4233 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4237 jne 0x106e423e */
  if (!C.zf) goto L_106e423e;
  /* 106e4239 jmp 0x106e45d5 */
  goto L_106e45d5;
L_106e423e:;
  /* 106e423e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4240 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4242 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4244 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e4247 push edx */
  push32((uint32_t)(EDX));
  /* 106e4248 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e424a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e424d push eax */
  push32((uint32_t)(EAX));
  /* 106e424e push 3 */
  push32((uint32_t)(0x3u));
  /* 106e4250 call dword ptr [0x1070dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070dc90))), 0x106e4256u);
  /* 106e4256 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e425b jne 0x106e4288 */
  if (!C.zf) goto L_106e4288;
L_106e425d:;
  /* 106e425d push 0x1070a804 */
  push32((uint32_t)(0x1070a804u));
  /* 106e4262 push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e4267 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4269 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e426b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e426d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e426f call 0x106e27f0 */
  push32(0x106e4274u); f_106e27f0();
  /* 106e4274 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e427a jne 0x106e427d */
  if (!C.zf) goto L_106e427d;
  /* 106e427c int3  */
  x86_unimpl("int3 @ 0x106e427c");
L_106e427d:;
  /* 106e427d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e427f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e4281 jne 0x106e425d */
  if (!C.zf) goto L_106e425d;
  /* 106e4283 jmp 0x106e45d5 */
  goto L_106e45d5;
L_106e4288:;
  /* 106e4288 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e428b push edx */
  push32((uint32_t)(EDX));
  /* 106e428c call 0x106e4d30 */
  push32(0x106e4291u); f_106e4d30();
  /* 106e4291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4296 jne 0x106e42b9 */
  if (!C.zf) goto L_106e42b9;
  /* 106e4298 push 0x1070a644 */
  push32((uint32_t)(0x1070a644u));
  /* 106e429d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e429f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 106e42a4 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e42a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e42ab call 0x106e27f0 */
  push32(0x106e42b0u); f_106e27f0();
  /* 106e42b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e42b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e42b6 jne 0x106e42b9 */
  if (!C.zf) goto L_106e42b9;
  /* 106e42b8 int3  */
  x86_unimpl("int3 @ 0x106e42b8");
L_106e42b9:;
  /* 106e42b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e42bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e42bd jne 0x106e4288 */
  if (!C.zf) goto L_106e4288;
  /* 106e42bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e42c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e42c5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106e42c8:;
  /* 106e42c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e42cb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e42ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e42d3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e42d6 je 0x106e431b */
  if (C.zf) goto L_106e431b;
  /* 106e42d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e42db cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e42df je 0x106e431b */
  if (C.zf) goto L_106e431b;
  /* 106e42e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e42e4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e42e7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e42ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e42ef je 0x106e431b */
  if (C.zf) goto L_106e431b;
  /* 106e42f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e42f4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e42f8 je 0x106e431b */
  if (C.zf) goto L_106e431b;
  /* 106e42fa push 0x1070a7dc */
  push32((uint32_t)(0x1070a7dcu));
  /* 106e42ff push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4301 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 106e4306 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e430b push 2 */
  push32((uint32_t)(0x2u));
  /* 106e430d call 0x106e27f0 */
  push32(0x106e4312u); f_106e27f0();
  /* 106e4312 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4318 jne 0x106e431b */
  if (!C.zf) goto L_106e431b;
  /* 106e431a int3  */
  x86_unimpl("int3 @ 0x106e431a");
L_106e431b:;
  /* 106e431b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e431d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e431f jne 0x106e42c8 */
  if (!C.zf) goto L_106e42c8;
  /* 106e4321 mov eax, dword ptr [0x1070da84] */
  EAX = (r32((uint32_t)(0x1070da84)));
  /* 106e4326 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106e4329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e432b jne 0x106e43f6 */
  if (!C.zf) goto L_106e43f6;
  /* 106e4331 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e4333 mov cl, byte ptr [0x1070da90] */
  CL = (r8((uint32_t)(0x1070da90)));
  /* 106e4339 push ecx */
  push32((uint32_t)(ECX));
  /* 106e433a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e433d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4340 push edx */
  push32((uint32_t)(EDX));
  /* 106e4341 call 0x106e4840 */
  push32(0x106e4346u); f_106e4840();
  /* 106e4346 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4349 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e434b jne 0x106e4390 */
  if (!C.zf) goto L_106e4390;
L_106e434d:;
  /* 106e434d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4350 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4353 push eax */
  push32((uint32_t)(EAX));
  /* 106e4354 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4357 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106e435a push edx */
  push32((uint32_t)(EDX));
  /* 106e435b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e435e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106e4361 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e4367 mov edx, dword ptr [ecx*4 + 0x1070da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1070da94)));
  /* 106e436e push edx */
  push32((uint32_t)(EDX));
  /* 106e436f push 0x1070a7b0 */
  push32((uint32_t)(0x1070a7b0u));
  /* 106e4374 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4376 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4378 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e437a push 1 */
  push32((uint32_t)(0x1u));
  /* 106e437c call 0x106e27f0 */
  push32(0x106e4381u); f_106e27f0();
  /* 106e4381 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4384 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4387 jne 0x106e438a */
  if (!C.zf) goto L_106e438a;
  /* 106e4389 int3  */
  x86_unimpl("int3 @ 0x106e4389");
L_106e438a:;
  /* 106e438a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e438c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e438e jne 0x106e434d */
  if (!C.zf) goto L_106e434d;
L_106e4390:;
  /* 106e4390 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e4392 mov cl, byte ptr [0x1070da90] */
  CL = (r8((uint32_t)(0x1070da90)));
  /* 106e4398 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4399 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e439c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e439f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e43a2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 106e43a6 push edx */
  push32((uint32_t)(EDX));
  /* 106e43a7 call 0x106e4840 */
  push32(0x106e43acu); f_106e4840();
  /* 106e43ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e43af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e43b1 jne 0x106e43f6 */
  if (!C.zf) goto L_106e43f6;
L_106e43b3:;
  /* 106e43b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e43b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e43b9 push eax */
  push32((uint32_t)(EAX));
  /* 106e43ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e43bd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106e43c0 push edx */
  push32((uint32_t)(EDX));
  /* 106e43c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e43c4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106e43c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e43cd mov edx, dword ptr [ecx*4 + 0x1070da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1070da94)));
  /* 106e43d4 push edx */
  push32((uint32_t)(EDX));
  /* 106e43d5 push 0x1070a784 */
  push32((uint32_t)(0x1070a784u));
  /* 106e43da push 0 */
  push32((uint32_t)(0x0u));
  /* 106e43dc push 0 */
  push32((uint32_t)(0x0u));
  /* 106e43de push 0 */
  push32((uint32_t)(0x0u));
  /* 106e43e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e43e2 call 0x106e27f0 */
  push32(0x106e43e7u); f_106e27f0();
  /* 106e43e7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e43ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e43ed jne 0x106e43f0 */
  if (!C.zf) goto L_106e43f0;
  /* 106e43ef int3  */
  x86_unimpl("int3 @ 0x106e43ef");
L_106e43f0:;
  /* 106e43f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e43f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e43f4 jne 0x106e43b3 */
  if (!C.zf) goto L_106e43b3;
L_106e43f6:;
  /* 106e43f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e43f9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e43fd jne 0x106e446b */
  if (!C.zf) goto L_106e446b;
L_106e43ff:;
  /* 106e43ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4402 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4409 jne 0x106e4414 */
  if (!C.zf) goto L_106e4414;
  /* 106e440b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e440e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4412 je 0x106e4435 */
  if (C.zf) goto L_106e4435;
L_106e4414:;
  /* 106e4414 push 0x1070a744 */
  push32((uint32_t)(0x1070a744u));
  /* 106e4419 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e441b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 106e4420 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e4425 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e4427 call 0x106e27f0 */
  push32(0x106e442cu); f_106e27f0();
  /* 106e442c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e442f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4432 jne 0x106e4435 */
  if (!C.zf) goto L_106e4435;
  /* 106e4434 int3  */
  x86_unimpl("int3 @ 0x106e4434");
L_106e4435:;
  /* 106e4435 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e4437 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e4439 jne 0x106e43ff */
  if (!C.zf) goto L_106e43ff;
  /* 106e443b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e443e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e4441 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4444 push eax */
  push32((uint32_t)(EAX));
  /* 106e4445 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e4447 mov cl, byte ptr [0x1070da91] */
  CL = (r8((uint32_t)(0x1070da91)));
  /* 106e444d push ecx */
  push32((uint32_t)(ECX));
  /* 106e444e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4451 push edx */
  push32((uint32_t)(EDX));
  /* 106e4452 call 0x106e74a0 */
  push32(0x106e4457u); f_106e74a0();
  /* 106e4457 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e445a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e445d push eax */
  push32((uint32_t)(EAX));
  /* 106e445e call 0x106e78a0 */
  push32(0x106e4463u); f_106e78a0();
  /* 106e4463 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4466 jmp 0x106e45d5 */
  goto L_106e45d5;
L_106e446b:;
  /* 106e446b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e446e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4472 jne 0x106e4481 */
  if (!C.zf) goto L_106e4481;
  /* 106e4474 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4478 jne 0x106e4481 */
  if (!C.zf) goto L_106e4481;
  /* 106e447a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_106e4481:;
  /* 106e4481 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4484 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e4487 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e448a je 0x106e44ad */
  if (C.zf) goto L_106e44ad;
  /* 106e448c push 0x1070a724 */
  push32((uint32_t)(0x1070a724u));
  /* 106e4491 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4493 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 106e4498 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e449d push 2 */
  push32((uint32_t)(0x2u));
  /* 106e449f call 0x106e27f0 */
  push32(0x106e44a4u); f_106e27f0();
  /* 106e44a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e44a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e44aa jne 0x106e44ad */
  if (!C.zf) goto L_106e44ad;
  /* 106e44ac int3  */
  x86_unimpl("int3 @ 0x106e44ac");
L_106e44ad:;
  /* 106e44ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e44af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e44b1 jne 0x106e4481 */
  if (!C.zf) goto L_106e4481;
  /* 106e44b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e44b6 mov eax, dword ptr [0x1070f510] */
  EAX = (r32((uint32_t)(0x1070f510)));
  /* 106e44bb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e44be mov dword ptr [0x1070f510], eax */
  w32((uint32_t)(0x1070f510), (EAX));
  /* 106e44c3 mov ecx, dword ptr [0x1070da84] */
  ECX = (r32((uint32_t)(0x1070da84)));
  /* 106e44c9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 106e44cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e44ce jne 0x106e45ac */
  if (!C.zf) goto L_106e45ac;
  /* 106e44d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e44d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e44da je 0x106e44ec */
  if (C.zf) goto L_106e44ec;
  /* 106e44dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e44df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e44e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e44e4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e44e7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106e44ea jmp 0x106e452a */
  goto L_106e452a;
L_106e44ec:;
  /* 106e44ec mov ecx, dword ptr [0x1070f504] */
  ECX = (r32((uint32_t)(0x1070f504)));
  /* 106e44f2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e44f5 je 0x106e4518 */
  if (C.zf) goto L_106e4518;
  /* 106e44f7 push 0x1070a70c */
  push32((uint32_t)(0x1070a70cu));
  /* 106e44fc push 0 */
  push32((uint32_t)(0x0u));
  /* 106e44fe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 106e4503 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e4508 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e450a call 0x106e27f0 */
  push32(0x106e450fu); f_106e27f0();
  /* 106e450f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4512 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4515 jne 0x106e4518 */
  if (!C.zf) goto L_106e4518;
  /* 106e4517 int3  */
  x86_unimpl("int3 @ 0x106e4517");
L_106e4518:;
  /* 106e4518 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e451a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e451c jne 0x106e44ec */
  if (!C.zf) goto L_106e44ec;
  /* 106e451e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4521 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e4524 mov dword ptr [0x1070f504], ecx */
  w32((uint32_t)(0x1070f504), (ECX));
L_106e452a:;
  /* 106e452a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e452d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4531 je 0x106e4542 */
  if (C.zf) goto L_106e4542;
  /* 106e4533 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4536 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e4539 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e453c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e453e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106e4540 jmp 0x106e457f */
  goto L_106e457f;
L_106e4542:;
  /* 106e4542 mov ecx, dword ptr [0x1070f50c] */
  ECX = (r32((uint32_t)(0x1070f50c)));
  /* 106e4548 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e454b je 0x106e456e */
  if (C.zf) goto L_106e456e;
  /* 106e454d push 0x1070a6f4 */
  push32((uint32_t)(0x1070a6f4u));
  /* 106e4552 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4554 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 106e4559 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e455e push 2 */
  push32((uint32_t)(0x2u));
  /* 106e4560 call 0x106e27f0 */
  push32(0x106e4565u); f_106e27f0();
  /* 106e4565 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4568 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e456b jne 0x106e456e */
  if (!C.zf) goto L_106e456e;
  /* 106e456d int3  */
  x86_unimpl("int3 @ 0x106e456d");
L_106e456e:;
  /* 106e456e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e4570 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e4572 jne 0x106e4542 */
  if (!C.zf) goto L_106e4542;
  /* 106e4574 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4577 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e4579 mov dword ptr [0x1070f50c], ecx */
  w32((uint32_t)(0x1070f50c), (ECX));
L_106e457f:;
  /* 106e457f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4582 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e4585 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4588 push eax */
  push32((uint32_t)(EAX));
  /* 106e4589 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e458b mov cl, byte ptr [0x1070da91] */
  CL = (r8((uint32_t)(0x1070da91)));
  /* 106e4591 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4592 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4595 push edx */
  push32((uint32_t)(EDX));
  /* 106e4596 call 0x106e74a0 */
  push32(0x106e459bu); f_106e74a0();
  /* 106e459b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e459e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e45a1 push eax */
  push32((uint32_t)(EAX));
  /* 106e45a2 call 0x106e78a0 */
  push32(0x106e45a7u); f_106e78a0();
  /* 106e45a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e45aa jmp 0x106e45d5 */
  goto L_106e45d5;
L_106e45ac:;
  /* 106e45ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e45af mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 106e45b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e45b9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e45bc push eax */
  push32((uint32_t)(EAX));
  /* 106e45bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e45bf mov cl, byte ptr [0x1070da91] */
  CL = (r8((uint32_t)(0x1070da91)));
  /* 106e45c5 push ecx */
  push32((uint32_t)(ECX));
  /* 106e45c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e45c9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e45cc push edx */
  push32((uint32_t)(EDX));
  /* 106e45cd call 0x106e74a0 */
  push32(0x106e45d2u); f_106e74a0();
  /* 106e45d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e45d5:;
  /* 106e45d5 pop edi */
  EDI = (pop32());
  /* 106e45d6 pop esi */
  ESI = (pop32());
  /* 106e45d7 pop ebx */
  EBX = (pop32());
  /* 106e45d8 mov esp, ebp */
  ESP = (EBP);
  /* 106e45da pop ebp */
  EBP = (pop32());
  /* 106e45db ret  */
  ESPCHK(0x106e41f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045e0 @ 0x106e45e0 (19 bytes, 9 insns) */
void f_106e45e0(void) {
  FTRACE(0x106e45e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e45e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e45e1 mov ebp, esp */
  EBP = (ESP);
  /* 106e45e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e45e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e45e8 push eax */
  push32((uint32_t)(EAX));
  /* 106e45e9 call 0x106e4600 */
  push32(0x106e45eeu); f_106e4600();
  /* 106e45ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e45f1 pop ebp */
  EBP = (pop32());
  /* 106e45f2 ret  */
  ESPCHK(0x106e45e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004600 @ 0x106e4600 (342 bytes, 119 insns) */
void f_106e4600(void) {
  FTRACE(0x106e4600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4600 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4601 mov ebp, esp */
  EBP = (ESP);
  /* 106e4603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e4606 push ebx */
  push32((uint32_t)(EBX));
  /* 106e4607 push esi */
  push32((uint32_t)(ESI));
  /* 106e4608 push edi */
  push32((uint32_t)(EDI));
  /* 106e4609 mov eax, dword ptr [0x1070da84] */
  EAX = (r32((uint32_t)(0x1070da84)));
  /* 106e460e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106e4611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4613 je 0x106e4645 */
  if (C.zf) goto L_106e4645;
L_106e4615:;
  /* 106e4615 call 0x106e48d0 */
  push32(0x106e461au); f_106e48d0();
  /* 106e461a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e461c jne 0x106e463f */
  if (!C.zf) goto L_106e463f;
  /* 106e461e push 0x1070a540 */
  push32((uint32_t)(0x1070a540u));
  /* 106e4623 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4625 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 106e462a push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e462f push 2 */
  push32((uint32_t)(0x2u));
  /* 106e4631 call 0x106e27f0 */
  push32(0x106e4636u); f_106e27f0();
  /* 106e4636 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4639 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e463c jne 0x106e463f */
  if (!C.zf) goto L_106e463f;
  /* 106e463e int3  */
  x86_unimpl("int3 @ 0x106e463e");
L_106e463f:;
  /* 106e463f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e4641 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e4643 jne 0x106e4615 */
  if (!C.zf) goto L_106e4615;
L_106e4645:;
  /* 106e4645 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4647 call 0x106e7130 */
  push32(0x106e464cu); f_106e7130();
  /* 106e464c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e464f:;
  /* 106e464f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4652 push edx */
  push32((uint32_t)(EDX));
  /* 106e4653 call 0x106e4d30 */
  push32(0x106e4658u); f_106e4d30();
  /* 106e4658 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e465b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e465d jne 0x106e4680 */
  if (!C.zf) goto L_106e4680;
  /* 106e465f push 0x1070a644 */
  push32((uint32_t)(0x1070a644u));
  /* 106e4664 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4666 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 106e466b push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e4670 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e4672 call 0x106e27f0 */
  push32(0x106e4677u); f_106e27f0();
  /* 106e4677 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e467a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e467d jne 0x106e4680 */
  if (!C.zf) goto L_106e4680;
  /* 106e467f int3  */
  x86_unimpl("int3 @ 0x106e467f");
L_106e4680:;
  /* 106e4680 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e4682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4684 jne 0x106e464f */
  if (!C.zf) goto L_106e464f;
  /* 106e4686 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4689 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e468c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106e468f:;
  /* 106e468f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4692 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e4695 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e469a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e469d je 0x106e46e2 */
  if (C.zf) goto L_106e46e2;
  /* 106e469f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e46a2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e46a6 je 0x106e46e2 */
  if (C.zf) goto L_106e46e2;
  /* 106e46a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e46ab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e46ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e46b3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e46b6 je 0x106e46e2 */
  if (C.zf) goto L_106e46e2;
  /* 106e46b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e46bb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e46bf je 0x106e46e2 */
  if (C.zf) goto L_106e46e2;
  /* 106e46c1 push 0x1070a7dc */
  push32((uint32_t)(0x1070a7dcu));
  /* 106e46c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e46c8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 106e46cd push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e46d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e46d4 call 0x106e27f0 */
  push32(0x106e46d9u); f_106e27f0();
  /* 106e46d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e46dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e46df jne 0x106e46e2 */
  if (!C.zf) goto L_106e46e2;
  /* 106e46e1 int3  */
  x86_unimpl("int3 @ 0x106e46e1");
L_106e46e2:;
  /* 106e46e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e46e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e46e6 jne 0x106e468f */
  if (!C.zf) goto L_106e468f;
  /* 106e46e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e46eb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e46ef jne 0x106e46fe */
  if (!C.zf) goto L_106e46fe;
  /* 106e46f1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e46f5 jne 0x106e46fe */
  if (!C.zf) goto L_106e46fe;
  /* 106e46f7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_106e46fe:;
  /* 106e46fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4701 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4705 je 0x106e4739 */
  if (C.zf) goto L_106e4739;
L_106e4707:;
  /* 106e4707 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e470a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e470d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4710 je 0x106e4733 */
  if (C.zf) goto L_106e4733;
  /* 106e4712 push 0x1070a724 */
  push32((uint32_t)(0x1070a724u));
  /* 106e4717 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4719 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 106e471e push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e4723 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e4725 call 0x106e27f0 */
  push32(0x106e472au); f_106e27f0();
  /* 106e472a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e472d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4730 jne 0x106e4733 */
  if (!C.zf) goto L_106e4733;
  /* 106e4732 int3  */
  x86_unimpl("int3 @ 0x106e4732");
L_106e4733:;
  /* 106e4733 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e4735 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e4737 jne 0x106e4707 */
  if (!C.zf) goto L_106e4707;
L_106e4739:;
  /* 106e4739 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e473c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e473f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e4742 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4744 call 0x106e71d0 */
  push32(0x106e4749u); f_106e71d0();
  /* 106e4749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e474c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e474f pop edi */
  EDI = (pop32());
  /* 106e4750 pop esi */
  ESI = (pop32());
  /* 106e4751 pop ebx */
  EBX = (pop32());
  /* 106e4752 mov esp, ebp */
  ESP = (EBP);
  /* 106e4754 pop ebp */
  EBP = (pop32());
  /* 106e4755 ret  */
  ESPCHK(0x106e4600u, _esp0);
  ESP += 4; return;
}

/* FUN_10004760 @ 0x106e4760 (28 bytes, 11 insns) */
void f_106e4760(void) {
  FTRACE(0x106e4760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4760 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4761 mov ebp, esp */
  EBP = (ESP);
  /* 106e4763 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4764 mov eax, dword ptr [0x1070da8c] */
  EAX = (r32((uint32_t)(0x1070da8c)));
  /* 106e4769 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e476c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e476f mov dword ptr [0x1070da8c], ecx */
  w32((uint32_t)(0x1070da8c), (ECX));
  /* 106e4775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4778 mov esp, ebp */
  ESP = (EBP);
  /* 106e477a pop ebp */
  EBP = (pop32());
  /* 106e477b ret  */
  ESPCHK(0x106e4760u, _esp0);
  ESP += 4; return;
}

/* FUN_10004780 @ 0x106e4780 (157 bytes, 59 insns) */
void f_106e4780(void) {
  FTRACE(0x106e4780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4780 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4781 mov ebp, esp */
  EBP = (ESP);
  /* 106e4783 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4784 push ebx */
  push32((uint32_t)(EBX));
  /* 106e4785 push esi */
  push32((uint32_t)(ESI));
  /* 106e4786 push edi */
  push32((uint32_t)(EDI));
  /* 106e4787 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4789 call 0x106e7130 */
  push32(0x106e478eu); f_106e7130();
  /* 106e478e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4791 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4794 push eax */
  push32((uint32_t)(EAX));
  /* 106e4795 call 0x106e4d30 */
  push32(0x106e479au); f_106e4d30();
  /* 106e479a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e479d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e479f je 0x106e480c */
  if (C.zf) goto L_106e480c;
  /* 106e47a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e47a4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e47a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106e47aa:;
  /* 106e47aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e47ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e47b0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e47b5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e47b8 je 0x106e47fd */
  if (C.zf) goto L_106e47fd;
  /* 106e47ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e47bd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e47c1 je 0x106e47fd */
  if (C.zf) goto L_106e47fd;
  /* 106e47c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e47c6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e47c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e47ce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e47d1 je 0x106e47fd */
  if (C.zf) goto L_106e47fd;
  /* 106e47d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e47d6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e47da je 0x106e47fd */
  if (C.zf) goto L_106e47fd;
  /* 106e47dc push 0x1070a7dc */
  push32((uint32_t)(0x1070a7dcu));
  /* 106e47e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e47e3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 106e47e8 push 0x1070a534 */
  push32((uint32_t)(0x1070a534u));
  /* 106e47ed push 2 */
  push32((uint32_t)(0x2u));
  /* 106e47ef call 0x106e27f0 */
  push32(0x106e47f4u); f_106e27f0();
  /* 106e47f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e47f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e47fa jne 0x106e47fd */
  if (!C.zf) goto L_106e47fd;
  /* 106e47fc int3  */
  x86_unimpl("int3 @ 0x106e47fc");
L_106e47fd:;
  /* 106e47fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e47ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e4801 jne 0x106e47aa */
  if (!C.zf) goto L_106e47aa;
  /* 106e4803 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4806 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e4809 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_106e480c:;
  /* 106e480c push 9 */
  push32((uint32_t)(0x9u));
  /* 106e480e call 0x106e71d0 */
  push32(0x106e4813u); f_106e71d0();
  /* 106e4813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4816 pop edi */
  EDI = (pop32());
  /* 106e4817 pop esi */
  ESI = (pop32());
  /* 106e4818 pop ebx */
  EBX = (pop32());
  /* 106e4819 mov esp, ebp */
  ESP = (EBP);
  /* 106e481b pop ebp */
  EBP = (pop32());
  /* 106e481c ret  */
  ESPCHK(0x106e4780u, _esp0);
  ESP += 4; return;
}

/* FUN_10004820 @ 0x106e4820 (28 bytes, 11 insns) */
void f_106e4820(void) {
  FTRACE(0x106e4820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4820 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4821 mov ebp, esp */
  EBP = (ESP);
  /* 106e4823 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4824 mov eax, dword ptr [0x1070dc90] */
  EAX = (r32((uint32_t)(0x1070dc90)));
  /* 106e4829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e482c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e482f mov dword ptr [0x1070dc90], ecx */
  w32((uint32_t)(0x1070dc90), (ECX));
  /* 106e4835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4838 mov esp, ebp */
  ESP = (EBP);
  /* 106e483a pop ebp */
  EBP = (pop32());
  /* 106e483b ret  */
  ESPCHK(0x106e4820u, _esp0);
  ESP += 4; return;
}

/* FUN_10004840 @ 0x106e4840 (136 bytes, 55 insns) */
void f_106e4840(void) {
  FTRACE(0x106e4840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4840 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4841 mov ebp, esp */
  EBP = (ESP);
  /* 106e4843 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4844 push ebx */
  push32((uint32_t)(EBX));
  /* 106e4845 push esi */
  push32((uint32_t)(ESI));
  /* 106e4846 push edi */
  push32((uint32_t)(EDI));
  /* 106e4847 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_106e484e:;
  /* 106e484e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e4851 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e4854 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e4857 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106e485a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e485c je 0x106e48be */
  if (C.zf) goto L_106e48be;
  /* 106e485e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4861 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e4863 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106e4865 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e4868 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e486e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4871 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4874 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106e4877 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4879 je 0x106e48bc */
  if (C.zf) goto L_106e48bc;
L_106e487b:;
  /* 106e487b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e487e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e4883 push eax */
  push32((uint32_t)(EAX));
  /* 106e4884 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4887 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e4889 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 106e488c push edx */
  push32((uint32_t)(EDX));
  /* 106e488d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4890 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e4893 push eax */
  push32((uint32_t)(EAX));
  /* 106e4894 push 0x1070a820 */
  push32((uint32_t)(0x1070a820u));
  /* 106e4899 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e489b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e489d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e489f push 0 */
  push32((uint32_t)(0x0u));
  /* 106e48a1 call 0x106e27f0 */
  push32(0x106e48a6u); f_106e27f0();
  /* 106e48a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e48a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e48ac jne 0x106e48af */
  if (!C.zf) goto L_106e48af;
  /* 106e48ae int3  */
  x86_unimpl("int3 @ 0x106e48ae");
L_106e48af:;
  /* 106e48af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e48b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e48b3 jne 0x106e487b */
  if (!C.zf) goto L_106e487b;
  /* 106e48b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106e48bc:;
  /* 106e48bc jmp 0x106e484e */
  goto L_106e484e;
L_106e48be:;
  /* 106e48be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e48c1 pop edi */
  EDI = (pop32());
  /* 106e48c2 pop esi */
  ESI = (pop32());
  /* 106e48c3 pop ebx */
  EBX = (pop32());
  /* 106e48c4 mov esp, ebp */
  ESP = (EBP);
  /* 106e48c6 pop ebp */
  EBP = (pop32());
  /* 106e48c7 ret  */
  ESPCHK(0x106e4840u, _esp0);
  ESP += 4; return;
}

/* FUN_100048d0 @ 0x106e48d0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_106e48d0(void) {
  FTRACE(0x106e48d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e48d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e48d1 mov ebp, esp */
  EBP = (ESP);
  /* 106e48d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e48d6 push ebx */
  push32((uint32_t)(EBX));
  /* 106e48d7 push esi */
  push32((uint32_t)(ESI));
  /* 106e48d8 push edi */
  push32((uint32_t)(EDI));
  /* 106e48d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106e48e0 mov eax, dword ptr [0x1070da84] */
  EAX = (r32((uint32_t)(0x1070da84)));
  /* 106e48e5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 106e48e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e48ea jne 0x106e48f6 */
  if (!C.zf) goto L_106e48f6;
  /* 106e48ec mov eax, 1 */
  EAX = (0x1u);
  /* 106e48f1 jmp 0x106e4c28 */
  goto L_106e4c28;
L_106e48f6:;
  /* 106e48f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e48f8 call 0x106e7130 */
  push32(0x106e48fdu); f_106e7130();
  /* 106e48fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4900 call 0x106e7910 */
  push32(0x106e4905u); f_106e7910();
  /* 106e4905 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e4908 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e490c je 0x106e4a19 */
  if (C.zf) goto L_106e4a19;
  /* 106e4912 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4916 je 0x106e4a19 */
  if (C.zf) goto L_106e4a19;
  /* 106e491c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e491f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 106e4922 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e4925 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4928 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106e492b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e492f ja 0x106e49e2 */
  if ((!C.cf&&!C.zf)) goto L_106e49e2;
  /* 106e4935 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e4938 jmp dword ptr [eax*4 + 0x106e4c2f] */
  switch (EAX) {
    case 0: goto L_106e49ba;
    case 1: goto L_106e4992;
    case 2: goto L_106e496a;
    case 3: goto L_106e493f;
    default: x86_unimpl("switch@0x106e4938 out of table"); return;
  }
L_106e493f:;
  /* 106e493f push 0x1070a974 */
  push32((uint32_t)(0x1070a974u));
  /* 106e4944 push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e4949 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e494b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e494d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e494f push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4951 call 0x106e27f0 */
  push32(0x106e4956u); f_106e27f0();
  /* 106e4956 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4959 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e495c jne 0x106e495f */
  if (!C.zf) goto L_106e495f;
  /* 106e495e int3  */
  x86_unimpl("int3 @ 0x106e495e");
L_106e495f:;
  /* 106e495f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e4961 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e4963 jne 0x106e493f */
  if (!C.zf) goto L_106e493f;
  /* 106e4965 jmp 0x106e4a08 */
  goto L_106e4a08;
L_106e496a:;
  /* 106e496a push 0x1070a950 */
  push32((uint32_t)(0x1070a950u));
  /* 106e496f push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e4974 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4976 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4978 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e497a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e497c call 0x106e27f0 */
  push32(0x106e4981u); f_106e27f0();
  /* 106e4981 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4984 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4987 jne 0x106e498a */
  if (!C.zf) goto L_106e498a;
  /* 106e4989 int3  */
  x86_unimpl("int3 @ 0x106e4989");
L_106e498a:;
  /* 106e498a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e498c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e498e jne 0x106e496a */
  if (!C.zf) goto L_106e496a;
  /* 106e4990 jmp 0x106e4a08 */
  goto L_106e4a08;
L_106e4992:;
  /* 106e4992 push 0x1070a92c */
  push32((uint32_t)(0x1070a92cu));
  /* 106e4997 push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e499c push 0 */
  push32((uint32_t)(0x0u));
  /* 106e499e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e49a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e49a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e49a4 call 0x106e27f0 */
  push32(0x106e49a9u); f_106e27f0();
  /* 106e49a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e49ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e49af jne 0x106e49b2 */
  if (!C.zf) goto L_106e49b2;
  /* 106e49b1 int3  */
  x86_unimpl("int3 @ 0x106e49b1");
L_106e49b2:;
  /* 106e49b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e49b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e49b6 jne 0x106e4992 */
  if (!C.zf) goto L_106e4992;
  /* 106e49b8 jmp 0x106e4a08 */
  goto L_106e4a08;
L_106e49ba:;
  /* 106e49ba push 0x1070a908 */
  push32((uint32_t)(0x1070a908u));
  /* 106e49bf push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e49c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e49c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e49c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e49ca push 0 */
  push32((uint32_t)(0x0u));
  /* 106e49cc call 0x106e27f0 */
  push32(0x106e49d1u); f_106e27f0();
  /* 106e49d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e49d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e49d7 jne 0x106e49da */
  if (!C.zf) goto L_106e49da;
  /* 106e49d9 int3  */
  x86_unimpl("int3 @ 0x106e49d9");
L_106e49da:;
  /* 106e49da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e49dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e49de jne 0x106e49ba */
  if (!C.zf) goto L_106e49ba;
  /* 106e49e0 jmp 0x106e4a08 */
  goto L_106e4a08;
L_106e49e2:;
  /* 106e49e2 push 0x1070a8dc */
  push32((uint32_t)(0x1070a8dcu));
  /* 106e49e7 push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e49ec push 0 */
  push32((uint32_t)(0x0u));
  /* 106e49ee push 0 */
  push32((uint32_t)(0x0u));
  /* 106e49f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e49f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e49f4 call 0x106e27f0 */
  push32(0x106e49f9u); f_106e27f0();
  /* 106e49f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e49fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e49ff jne 0x106e4a02 */
  if (!C.zf) goto L_106e4a02;
  /* 106e4a01 int3  */
  x86_unimpl("int3 @ 0x106e4a01");
L_106e4a02:;
  /* 106e4a02 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e4a04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e4a06 jne 0x106e49e2 */
  if (!C.zf) goto L_106e49e2;
L_106e4a08:;
  /* 106e4a08 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4a0a call 0x106e71d0 */
  push32(0x106e4a0fu); f_106e71d0();
  /* 106e4a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4a12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e4a14 jmp 0x106e4c28 */
  goto L_106e4c28;
L_106e4a19:;
  /* 106e4a19 mov eax, dword ptr [0x1070f50c] */
  EAX = (r32((uint32_t)(0x1070f50c)));
  /* 106e4a1e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e4a21 jmp 0x106e4a2b */
  goto L_106e4a2b;
L_106e4a23:;
  /* 106e4a23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4a26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e4a28 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106e4a2b:;
  /* 106e4a2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4a2f je 0x106e4c1b */
  if (C.zf) goto L_106e4c1b;
  /* 106e4a35 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 106e4a3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4a3f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106e4a42 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e4a48 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4a4b je 0x106e4a70 */
  if (C.zf) goto L_106e4a70;
  /* 106e4a4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4a50 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4a54 je 0x106e4a70 */
  if (C.zf) goto L_106e4a70;
  /* 106e4a56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4a59 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106e4a5c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e4a62 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4a65 je 0x106e4a70 */
  if (C.zf) goto L_106e4a70;
  /* 106e4a67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4a6a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4a6e jne 0x106e4a88 */
  if (!C.zf) goto L_106e4a88;
L_106e4a70:;
  /* 106e4a70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4a73 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106e4a76 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e4a7c mov edx, dword ptr [ecx*4 + 0x1070da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1070da94)));
  /* 106e4a83 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106e4a86 jmp 0x106e4a8f */
  goto L_106e4a8f;
L_106e4a88:;
  /* 106e4a88 mov dword ptr [ebp - 0x14], 0x1070a8d4 */
  w32((uint32_t)(EBP + -0x14), (0x1070a8d4u));
L_106e4a8f:;
  /* 106e4a8f push 4 */
  push32((uint32_t)(0x4u));
  /* 106e4a91 mov al, byte ptr [0x1070da90] */
  AL = (r8((uint32_t)(0x1070da90)));
  /* 106e4a96 push eax */
  push32((uint32_t)(EAX));
  /* 106e4a97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4a9a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4a9d push ecx */
  push32((uint32_t)(ECX));
  /* 106e4a9e call 0x106e4840 */
  push32(0x106e4aa3u); f_106e4840();
  /* 106e4aa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4aa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4aa8 jne 0x106e4ae4 */
  if (!C.zf) goto L_106e4ae4;
L_106e4aaa:;
  /* 106e4aaa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4aad add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4ab0 push edx */
  push32((uint32_t)(EDX));
  /* 106e4ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4ab4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106e4ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4ab8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e4abb push edx */
  push32((uint32_t)(EDX));
  /* 106e4abc push 0x1070a7b0 */
  push32((uint32_t)(0x1070a7b0u));
  /* 106e4ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4ac9 call 0x106e27f0 */
  push32(0x106e4aceu); f_106e27f0();
  /* 106e4ace add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4ad1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4ad4 jne 0x106e4ad7 */
  if (!C.zf) goto L_106e4ad7;
  /* 106e4ad6 int3  */
  x86_unimpl("int3 @ 0x106e4ad6");
L_106e4ad7:;
  /* 106e4ad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e4ad9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4adb jne 0x106e4aaa */
  if (!C.zf) goto L_106e4aaa;
  /* 106e4add mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_106e4ae4:;
  /* 106e4ae4 push 4 */
  push32((uint32_t)(0x4u));
  /* 106e4ae6 mov cl, byte ptr [0x1070da90] */
  CL = (r8((uint32_t)(0x1070da90)));
  /* 106e4aec push ecx */
  push32((uint32_t)(ECX));
  /* 106e4aed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4af0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e4af3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4af6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 106e4afa push edx */
  push32((uint32_t)(EDX));
  /* 106e4afb call 0x106e4840 */
  push32(0x106e4b00u); f_106e4840();
  /* 106e4b00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4b03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4b05 jne 0x106e4b41 */
  if (!C.zf) goto L_106e4b41;
L_106e4b07:;
  /* 106e4b07 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4b0a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4b0d push eax */
  push32((uint32_t)(EAX));
  /* 106e4b0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4b11 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106e4b14 push edx */
  push32((uint32_t)(EDX));
  /* 106e4b15 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e4b18 push eax */
  push32((uint32_t)(EAX));
  /* 106e4b19 push 0x1070a784 */
  push32((uint32_t)(0x1070a784u));
  /* 106e4b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4b26 call 0x106e27f0 */
  push32(0x106e4b2bu); f_106e27f0();
  /* 106e4b2b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4b2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4b31 jne 0x106e4b34 */
  if (!C.zf) goto L_106e4b34;
  /* 106e4b33 int3  */
  x86_unimpl("int3 @ 0x106e4b33");
L_106e4b34:;
  /* 106e4b34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e4b36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e4b38 jne 0x106e4b07 */
  if (!C.zf) goto L_106e4b07;
  /* 106e4b3a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_106e4b41:;
  /* 106e4b41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4b44 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4b48 jne 0x106e4b9a */
  if (!C.zf) goto L_106e4b9a;
  /* 106e4b4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4b4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e4b50 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4b51 mov dl, byte ptr [0x1070da91] */
  DL = (r8((uint32_t)(0x1070da91)));
  /* 106e4b57 push edx */
  push32((uint32_t)(EDX));
  /* 106e4b58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4b5b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4b5e push eax */
  push32((uint32_t)(EAX));
  /* 106e4b5f call 0x106e4840 */
  push32(0x106e4b64u); f_106e4840();
  /* 106e4b64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4b69 jne 0x106e4b9a */
  if (!C.zf) goto L_106e4b9a;
L_106e4b6b:;
  /* 106e4b6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4b6e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4b71 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4b72 push 0x1070a8a8 */
  push32((uint32_t)(0x1070a8a8u));
  /* 106e4b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4b7b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4b7f call 0x106e27f0 */
  push32(0x106e4b84u); f_106e27f0();
  /* 106e4b84 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4b87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4b8a jne 0x106e4b8d */
  if (!C.zf) goto L_106e4b8d;
  /* 106e4b8c int3  */
  x86_unimpl("int3 @ 0x106e4b8c");
L_106e4b8d:;
  /* 106e4b8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e4b8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e4b91 jne 0x106e4b6b */
  if (!C.zf) goto L_106e4b6b;
  /* 106e4b93 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_106e4b9a:;
  /* 106e4b9a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4b9e jne 0x106e4c16 */
  if (!C.zf) goto L_106e4c16;
  /* 106e4ba0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4ba3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4ba7 je 0x106e4bdc */
  if (C.zf) goto L_106e4bdc;
L_106e4ba9:;
  /* 106e4ba9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4bac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 106e4baf push edx */
  push32((uint32_t)(EDX));
  /* 106e4bb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4bb3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106e4bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4bb7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e4bba push edx */
  push32((uint32_t)(EDX));
  /* 106e4bbb push 0x1070a888 */
  push32((uint32_t)(0x1070a888u));
  /* 106e4bc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4bc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4bc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4bc8 call 0x106e27f0 */
  push32(0x106e4bcdu); f_106e27f0();
  /* 106e4bcd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4bd0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4bd3 jne 0x106e4bd6 */
  if (!C.zf) goto L_106e4bd6;
  /* 106e4bd5 int3  */
  x86_unimpl("int3 @ 0x106e4bd5");
L_106e4bd6:;
  /* 106e4bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e4bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4bda jne 0x106e4ba9 */
  if (!C.zf) goto L_106e4ba9;
L_106e4bdc:;
  /* 106e4bdc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4bdf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106e4be2 push edx */
  push32((uint32_t)(EDX));
  /* 106e4be3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4be6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4be9 push eax */
  push32((uint32_t)(EAX));
  /* 106e4bea mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e4bed push ecx */
  push32((uint32_t)(ECX));
  /* 106e4bee push 0x1070a85c */
  push32((uint32_t)(0x1070a85cu));
  /* 106e4bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4bfb call 0x106e27f0 */
  push32(0x106e4c00u); f_106e27f0();
  /* 106e4c00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4c03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4c06 jne 0x106e4c09 */
  if (!C.zf) goto L_106e4c09;
  /* 106e4c08 int3  */
  x86_unimpl("int3 @ 0x106e4c08");
L_106e4c09:;
  /* 106e4c09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e4c0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e4c0d jne 0x106e4bdc */
  if (!C.zf) goto L_106e4bdc;
  /* 106e4c0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106e4c16:;
  /* 106e4c16 jmp 0x106e4a23 */
  goto L_106e4a23;
L_106e4c1b:;
  /* 106e4c1b push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4c1d call 0x106e71d0 */
  push32(0x106e4c22u); f_106e71d0();
  /* 106e4c22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4c25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106e4c28:;
  /* 106e4c28 pop edi */
  EDI = (pop32());
  /* 106e4c29 pop esi */
  ESI = (pop32());
  /* 106e4c2a pop ebx */
  EBX = (pop32());
  /* 106e4c2b mov esp, ebp */
  ESP = (EBP);
  /* 106e4c2d pop ebp */
  EBP = (pop32());
  /* 106e4c2e ret  */
  ESPCHK(0x106e48d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x106e4c40 (34 bytes, 13 insns) */
void f_106e4c40(void) {
  FTRACE(0x106e4c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4c40 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4c41 mov ebp, esp */
  EBP = (ESP);
  /* 106e4c43 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4c44 mov eax, dword ptr [0x1070da84] */
  EAX = (r32((uint32_t)(0x1070da84)));
  /* 106e4c49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e4c4c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4c50 je 0x106e4c5b */
  if (C.zf) goto L_106e4c5b;
  /* 106e4c52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4c55 mov dword ptr [0x1070da84], ecx */
  w32((uint32_t)(0x1070da84), (ECX));
L_106e4c5b:;
  /* 106e4c5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4c5e mov esp, ebp */
  ESP = (EBP);
  /* 106e4c60 pop ebp */
  EBP = (pop32());
  /* 106e4c61 ret  */
  ESPCHK(0x106e4c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c70 @ 0x106e4c70 (103 bytes, 38 insns) */
void f_106e4c70(void) {
  FTRACE(0x106e4c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4c70 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4c71 mov ebp, esp */
  EBP = (ESP);
  /* 106e4c73 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4c74 mov eax, dword ptr [0x1070da84] */
  EAX = (r32((uint32_t)(0x1070da84)));
  /* 106e4c79 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 106e4c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4c7e jne 0x106e4c82 */
  if (!C.zf) goto L_106e4c82;
  /* 106e4c80 jmp 0x106e4cd3 */
  goto L_106e4cd3;
L_106e4c82:;
  /* 106e4c82 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4c84 call 0x106e7130 */
  push32(0x106e4c89u); f_106e7130();
  /* 106e4c89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4c8c mov ecx, dword ptr [0x1070f50c] */
  ECX = (r32((uint32_t)(0x1070f50c)));
  /* 106e4c92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e4c95 jmp 0x106e4c9f */
  goto L_106e4c9f;
L_106e4c97:;
  /* 106e4c97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4c9a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e4c9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e4c9f:;
  /* 106e4c9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4ca3 je 0x106e4cc9 */
  if (C.zf) goto L_106e4cc9;
  /* 106e4ca5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4ca8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106e4cab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e4cb1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4cb4 jne 0x106e4cc7 */
  if (!C.zf) goto L_106e4cc7;
  /* 106e4cb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e4cb9 push eax */
  push32((uint32_t)(EAX));
  /* 106e4cba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4cbd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4cc1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x106e4cc4u);
  /* 106e4cc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e4cc7:;
  /* 106e4cc7 jmp 0x106e4c97 */
  goto L_106e4c97;
L_106e4cc9:;
  /* 106e4cc9 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4ccb call 0x106e71d0 */
  push32(0x106e4cd0u); f_106e71d0();
  /* 106e4cd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e4cd3:;
  /* 106e4cd3 mov esp, ebp */
  ESP = (EBP);
  /* 106e4cd5 pop ebp */
  EBP = (pop32());
  /* 106e4cd6 ret  */
  ESPCHK(0x106e4c70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x106e4ce0 (75 bytes, 28 insns) */
void f_106e4ce0(void) {
  FTRACE(0x106e4ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4ce1 mov ebp, esp */
  EBP = (ESP);
  /* 106e4ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4ce4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4ce8 je 0x106e4d1d */
  if (C.zf) goto L_106e4d1d;
  /* 106e4cea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e4ced push eax */
  push32((uint32_t)(EAX));
  /* 106e4cee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4cf1 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4cf2 call dword ptr [0x10712328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712328))), 0x106e4cf8u);
  /* 106e4cf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4cfa jne 0x106e4d1d */
  if (!C.zf) goto L_106e4d1d;
  /* 106e4cfc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4d00 je 0x106e4d14 */
  if (C.zf) goto L_106e4d14;
  /* 106e4d02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e4d05 push edx */
  push32((uint32_t)(EDX));
  /* 106e4d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4d09 push eax */
  push32((uint32_t)(EAX));
  /* 106e4d0a call dword ptr [0x10712324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712324))), 0x106e4d10u);
  /* 106e4d10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4d12 jne 0x106e4d1d */
  if (!C.zf) goto L_106e4d1d;
L_106e4d14:;
  /* 106e4d14 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106e4d1b jmp 0x106e4d24 */
  goto L_106e4d24;
L_106e4d1d:;
  /* 106e4d1d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106e4d24:;
  /* 106e4d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4d27 mov esp, ebp */
  ESP = (EBP);
  /* 106e4d29 pop ebp */
  EBP = (pop32());
  /* 106e4d2a ret  */
  ESPCHK(0x106e4ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d30 @ 0x106e4d30 (134 bytes, 50 insns) */
void f_106e4d30(void) {
  FTRACE(0x106e4d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4d30 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4d31 mov ebp, esp */
  EBP = (ESP);
  /* 106e4d33 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4d34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4d38 jne 0x106e4d3e */
  if (!C.zf) goto L_106e4d3e;
  /* 106e4d3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e4d3c jmp 0x106e4db2 */
  goto L_106e4db2;
L_106e4d3e:;
  /* 106e4d3e push 1 */
  push32((uint32_t)(0x1u));
  /* 106e4d40 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 106e4d42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4d45 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e4d48 push eax */
  push32((uint32_t)(EAX));
  /* 106e4d49 call 0x106e4ce0 */
  push32(0x106e4d4eu); f_106e4ce0();
  /* 106e4d4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4d51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4d53 jne 0x106e4d59 */
  if (!C.zf) goto L_106e4d59;
  /* 106e4d55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e4d57 jmp 0x106e4db2 */
  goto L_106e4db2;
L_106e4d59:;
  /* 106e4d59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4d5c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e4d5f push ecx */
  push32((uint32_t)(ECX));
  /* 106e4d60 call 0x106e7a30 */
  push32(0x106e4d65u); f_106e7a30();
  /* 106e4d65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4d68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e4d6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4d6f je 0x106e4d86 */
  if (C.zf) goto L_106e4d86;
  /* 106e4d71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4d74 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e4d77 push edx */
  push32((uint32_t)(EDX));
  /* 106e4d78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4d7b push eax */
  push32((uint32_t)(EAX));
  /* 106e4d7c call 0x106e7a90 */
  push32(0x106e4d81u); f_106e7a90();
  /* 106e4d81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4d84 jmp 0x106e4db2 */
  goto L_106e4db2;
L_106e4d86:;
  /* 106e4d86 mov ecx, dword ptr [0x1070f4c0] */
  ECX = (r32((uint32_t)(0x1070f4c0)));
  /* 106e4d8c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 106e4d92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e4d94 je 0x106e4d9d */
  if (C.zf) goto L_106e4d9d;
  /* 106e4d96 mov eax, 1 */
  EAX = (0x1u);
  /* 106e4d9b jmp 0x106e4db2 */
  goto L_106e4db2;
L_106e4d9d:;
  /* 106e4d9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4da0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e4da3 push edx */
  push32((uint32_t)(EDX));
  /* 106e4da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4da6 mov eax, dword ptr [0x10710e6c] */
  EAX = (r32((uint32_t)(0x10710e6c)));
  /* 106e4dab push eax */
  push32((uint32_t)(EAX));
  /* 106e4dac call dword ptr [0x1071232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071232c))), 0x106e4db2u);
L_106e4db2:;
  /* 106e4db2 mov esp, ebp */
  ESP = (EBP);
  /* 106e4db4 pop ebp */
  EBP = (pop32());
  /* 106e4db5 ret  */
  ESPCHK(0x106e4d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dc0 @ 0x106e4dc0 (227 bytes, 80 insns) */
void f_106e4dc0(void) {
  FTRACE(0x106e4dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4dc1 mov ebp, esp */
  EBP = (ESP);
  /* 106e4dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4dc7 push eax */
  push32((uint32_t)(EAX));
  /* 106e4dc8 call 0x106e4d30 */
  push32(0x106e4dcdu); f_106e4d30();
  /* 106e4dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4dd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4dd2 jne 0x106e4ddb */
  if (!C.zf) goto L_106e4ddb;
  /* 106e4dd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e4dd6 jmp 0x106e4e9f */
  goto L_106e4e9f;
L_106e4ddb:;
  /* 106e4ddb push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4ddd call 0x106e7130 */
  push32(0x106e4de2u); f_106e7130();
  /* 106e4de2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4de5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4de8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e4deb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e4dee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4df1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e4df4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e4df9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4dfc je 0x106e4e20 */
  if (C.zf) goto L_106e4e20;
  /* 106e4dfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4e01 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4e05 je 0x106e4e20 */
  if (C.zf) goto L_106e4e20;
  /* 106e4e07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4e0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e4e0d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e4e12 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4e15 je 0x106e4e20 */
  if (C.zf) goto L_106e4e20;
  /* 106e4e17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4e1a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4e1e jne 0x106e4e93 */
  if (!C.zf) goto L_106e4e93;
L_106e4e20:;
  /* 106e4e20 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e4e22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e4e25 push edx */
  push32((uint32_t)(EDX));
  /* 106e4e26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4e29 push eax */
  push32((uint32_t)(EAX));
  /* 106e4e2a call 0x106e4ce0 */
  push32(0x106e4e2fu); f_106e4ce0();
  /* 106e4e2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4e32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4e34 je 0x106e4e93 */
  if (C.zf) goto L_106e4e93;
  /* 106e4e36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4e39 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106e4e3c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4e3f jne 0x106e4e93 */
  if (!C.zf) goto L_106e4e93;
  /* 106e4e41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4e44 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106e4e47 cmp ecx, dword ptr [0x1070da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1070da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4e4d jg 0x106e4e93 */
  if ((!C.zf&&C.sf==C.of)) goto L_106e4e93;
  /* 106e4e4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4e53 je 0x106e4e60 */
  if (C.zf) goto L_106e4e60;
  /* 106e4e55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e4e58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4e5b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 106e4e5e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106e4e60:;
  /* 106e4e60 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4e64 je 0x106e4e71 */
  if (C.zf) goto L_106e4e71;
  /* 106e4e66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e4e69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4e6c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106e4e6f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106e4e71:;
  /* 106e4e71 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4e75 je 0x106e4e82 */
  if (C.zf) goto L_106e4e82;
  /* 106e4e77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e4e7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4e7d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106e4e80 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106e4e82:;
  /* 106e4e82 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4e84 call 0x106e71d0 */
  push32(0x106e4e89u); f_106e71d0();
  /* 106e4e89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4e8c mov eax, 1 */
  EAX = (0x1u);
  /* 106e4e91 jmp 0x106e4e9f */
  goto L_106e4e9f;
L_106e4e93:;
  /* 106e4e93 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4e95 call 0x106e71d0 */
  push32(0x106e4e9au); f_106e71d0();
  /* 106e4e9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4e9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e4e9f:;
  /* 106e4e9f mov esp, ebp */
  ESP = (EBP);
  /* 106e4ea1 pop ebp */
  EBP = (pop32());
  /* 106e4ea2 ret  */
  ESPCHK(0x106e4dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004eb0 @ 0x106e4eb0 (28 bytes, 11 insns) */
void f_106e4eb0(void) {
  FTRACE(0x106e4eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4eb1 mov ebp, esp */
  EBP = (ESP);
  /* 106e4eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e4eb4 mov eax, dword ptr [0x10710e78] */
  EAX = (r32((uint32_t)(0x10710e78)));
  /* 106e4eb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e4ebc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4ebf mov dword ptr [0x10710e78], ecx */
  w32((uint32_t)(0x10710e78), (ECX));
  /* 106e4ec5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4ec8 mov esp, ebp */
  ESP = (EBP);
  /* 106e4eca pop ebp */
  EBP = (pop32());
  /* 106e4ecb ret  */
  ESPCHK(0x106e4eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ed0 @ 0x106e4ed0 (362 bytes, 116 insns) */
void f_106e4ed0(void) {
  FTRACE(0x106e4ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e4ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e4ed1 mov ebp, esp */
  EBP = (ESP);
  /* 106e4ed3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e4ed6 push ebx */
  push32((uint32_t)(EBX));
  /* 106e4ed7 push esi */
  push32((uint32_t)(ESI));
  /* 106e4ed8 push edi */
  push32((uint32_t)(EDI));
  /* 106e4ed9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4edd jne 0x106e4f0a */
  if (!C.zf) goto L_106e4f0a;
L_106e4edf:;
  /* 106e4edf push 0x1070a9bc */
  push32((uint32_t)(0x1070a9bcu));
  /* 106e4ee4 push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e4ee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4eed push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4eef push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4ef1 call 0x106e27f0 */
  push32(0x106e4ef6u); f_106e27f0();
  /* 106e4ef6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4ef9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4efc jne 0x106e4eff */
  if (!C.zf) goto L_106e4eff;
  /* 106e4efe int3  */
  x86_unimpl("int3 @ 0x106e4efe");
L_106e4eff:;
  /* 106e4eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e4f01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4f03 jne 0x106e4edf */
  if (!C.zf) goto L_106e4edf;
  /* 106e4f05 jmp 0x106e5033 */
  goto L_106e5033;
L_106e4f0a:;
  /* 106e4f0a push 9 */
  push32((uint32_t)(0x9u));
  /* 106e4f0c call 0x106e7130 */
  push32(0x106e4f11u); f_106e7130();
  /* 106e4f11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4f14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4f17 mov edx, dword ptr [0x1070f50c] */
  EDX = (r32((uint32_t)(0x1070f50c)));
  /* 106e4f1d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106e4f1f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106e4f26 jmp 0x106e4f31 */
  goto L_106e4f31;
L_106e4f28:;
  /* 106e4f28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4f2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4f2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e4f31:;
  /* 106e4f31 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4f35 jge 0x106e4f55 */
  if ((C.sf==C.of)) goto L_106e4f55;
  /* 106e4f37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4f3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4f3d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 106e4f45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e4f48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4f4b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 106e4f53 jmp 0x106e4f28 */
  goto L_106e4f28;
L_106e4f55:;
  /* 106e4f55 mov edx, dword ptr [0x1070f50c] */
  EDX = (r32((uint32_t)(0x1070f50c)));
  /* 106e4f5b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 106e4f5e jmp 0x106e4f68 */
  goto L_106e4f68;
L_106e4f60:;
  /* 106e4f60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4f63 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e4f65 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106e4f68:;
  /* 106e4f68 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4f6c je 0x106e5011 */
  if (C.zf) goto L_106e5011;
  /* 106e4f72 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4f75 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e4f78 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e4f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e4f7f jl 0x106e4fe7 */
  if ((C.sf!=C.of)) goto L_106e4fe7;
  /* 106e4f81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4f84 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106e4f87 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e4f8d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e4f90 jge 0x106e4fe7 */
  if ((C.sf==C.of)) goto L_106e4fe7;
  /* 106e4f92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4f95 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106e4f98 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e4f9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4fa1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 106e4fa5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4fa8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4fab mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106e4fae and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e4fb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4fb7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 106e4fbb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4fbe mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e4fc1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e4fc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4fc9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 106e4fcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4fd0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e4fd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4fd6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 106e4fd9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e4fde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e4fe1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 106e4fe5 jmp 0x106e500c */
  goto L_106e500c;
L_106e4fe7:;
  /* 106e4fe7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e4fea push edx */
  push32((uint32_t)(EDX));
  /* 106e4feb push 0x1070a998 */
  push32((uint32_t)(0x1070a998u));
  /* 106e4ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e4ff8 call 0x106e27f0 */
  push32(0x106e4ffdu); f_106e27f0();
  /* 106e4ffd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5000 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5003 jne 0x106e5006 */
  if (!C.zf) goto L_106e5006;
  /* 106e5005 int3  */
  x86_unimpl("int3 @ 0x106e5005");
L_106e5006:;
  /* 106e5006 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e500a jne 0x106e4fe7 */
  if (!C.zf) goto L_106e4fe7;
L_106e500c:;
  /* 106e500c jmp 0x106e4f60 */
  goto L_106e4f60;
L_106e5011:;
  /* 106e5011 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e5014 mov edx, dword ptr [0x1070f514] */
  EDX = (r32((uint32_t)(0x1070f514)));
  /* 106e501a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 106e501d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e5020 mov ecx, dword ptr [0x1070f508] */
  ECX = (r32((uint32_t)(0x1070f508)));
  /* 106e5026 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 106e5029 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e502b call 0x106e71d0 */
  push32(0x106e5030u); f_106e71d0();
  /* 106e5030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e5033:;
  /* 106e5033 pop edi */
  EDI = (pop32());
  /* 106e5034 pop esi */
  ESI = (pop32());
  /* 106e5035 pop ebx */
  EBX = (pop32());
  /* 106e5036 mov esp, ebp */
  ESP = (EBP);
  /* 106e5038 pop ebp */
  EBP = (pop32());
  /* 106e5039 ret  */
  ESPCHK(0x106e4ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005040 @ 0x106e5040 (291 bytes, 95 insns) */
void f_106e5040(void) {
  FTRACE(0x106e5040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e5040 push ebp */
  push32((uint32_t)(EBP));
  /* 106e5041 mov ebp, esp */
  EBP = (ESP);
  /* 106e5043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e5046 push ebx */
  push32((uint32_t)(EBX));
  /* 106e5047 push esi */
  push32((uint32_t)(ESI));
  /* 106e5048 push edi */
  push32((uint32_t)(EDI));
  /* 106e5049 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106e5050 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5054 je 0x106e5062 */
  if (C.zf) goto L_106e5062;
  /* 106e5056 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e505a je 0x106e5062 */
  if (C.zf) goto L_106e5062;
  /* 106e505c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5060 jne 0x106e5090 */
  if (!C.zf) goto L_106e5090;
L_106e5062:;
  /* 106e5062 push 0x1070a9e4 */
  push32((uint32_t)(0x1070a9e4u));
  /* 106e5067 push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e506c push 0 */
  push32((uint32_t)(0x0u));
  /* 106e506e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5070 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5072 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5074 call 0x106e27f0 */
  push32(0x106e5079u); f_106e27f0();
  /* 106e5079 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e507c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e507f jne 0x106e5082 */
  if (!C.zf) goto L_106e5082;
  /* 106e5081 int3  */
  x86_unimpl("int3 @ 0x106e5081");
L_106e5082:;
  /* 106e5082 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e5086 jne 0x106e5062 */
  if (!C.zf) goto L_106e5062;
  /* 106e5088 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e508b jmp 0x106e515c */
  goto L_106e515c;
L_106e5090:;
  /* 106e5090 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106e5097 jmp 0x106e50a2 */
  goto L_106e50a2;
L_106e5099:;
  /* 106e5099 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e509c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e509f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106e50a2:;
  /* 106e50a2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e50a6 jge 0x106e512c */
  if ((C.sf==C.of)) goto L_106e512c;
  /* 106e50ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e50af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e50b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e50b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106e50b8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 106e50bc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e50c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e50c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e50c6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 106e50ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e50cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e50d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e50d3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 106e50d6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 106e50da sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e50de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e50e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e50e4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 106e50e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e50eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e50ee cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e50f3 jne 0x106e5102 */
  if (!C.zf) goto L_106e5102;
  /* 106e50f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e50f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e50fb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5100 je 0x106e5127 */
  if (C.zf) goto L_106e5127;
L_106e5102:;
  /* 106e5102 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5106 je 0x106e5127 */
  if (C.zf) goto L_106e5127;
  /* 106e5108 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e510c jne 0x106e5120 */
  if (!C.zf) goto L_106e5120;
  /* 106e510e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5112 jne 0x106e5127 */
  if (!C.zf) goto L_106e5127;
  /* 106e5114 mov eax, dword ptr [0x1070da84] */
  EAX = (r32((uint32_t)(0x1070da84)));
  /* 106e5119 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 106e511c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e511e je 0x106e5127 */
  if (C.zf) goto L_106e5127;
L_106e5120:;
  /* 106e5120 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_106e5127:;
  /* 106e5127 jmp 0x106e5099 */
  goto L_106e5099;
L_106e512c:;
  /* 106e512c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e512f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e5132 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 106e5135 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e5138 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e513b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 106e513e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5141 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e5144 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 106e5147 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e514a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e514d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 106e5150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e5153 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106e5159 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_106e515c:;
  /* 106e515c pop edi */
  EDI = (pop32());
  /* 106e515d pop esi */
  ESI = (pop32());
  /* 106e515e pop ebx */
  EBX = (pop32());
  /* 106e515f mov esp, ebp */
  ESP = (EBP);
  /* 106e5161 pop ebp */
  EBP = (pop32());
  /* 106e5162 ret  */
  ESPCHK(0x106e5040u, _esp0);
  ESP += 4; return;
}

/* FUN_10005170 @ 0x106e5170 (697 bytes, 253 insns) */
void f_106e5170(void) {
  FTRACE(0x106e5170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e5170 push ebp */
  push32((uint32_t)(EBP));
  /* 106e5171 mov ebp, esp */
  EBP = (ESP);
  /* 106e5173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e5176 push ebx */
  push32((uint32_t)(EBX));
  /* 106e5177 push esi */
  push32((uint32_t)(ESI));
  /* 106e5178 push edi */
  push32((uint32_t)(EDI));
  /* 106e5179 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106e5180 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e5182 call 0x106e7130 */
  push32(0x106e5187u); f_106e7130();
  /* 106e5187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e518a:;
  /* 106e518a push 0x1070aadc */
  push32((uint32_t)(0x1070aadcu));
  /* 106e518f push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e5194 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5196 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5198 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e519a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e519c call 0x106e27f0 */
  push32(0x106e51a1u); f_106e27f0();
  /* 106e51a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e51a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e51a7 jne 0x106e51aa */
  if (!C.zf) goto L_106e51aa;
  /* 106e51a9 int3  */
  x86_unimpl("int3 @ 0x106e51a9");
L_106e51aa:;
  /* 106e51aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e51ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e51ae jne 0x106e518a */
  if (!C.zf) goto L_106e518a;
  /* 106e51b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e51b4 je 0x106e51be */
  if (C.zf) goto L_106e51be;
  /* 106e51b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e51b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e51bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106e51be:;
  /* 106e51be mov eax, dword ptr [0x1070f50c] */
  EAX = (r32((uint32_t)(0x1070f50c)));
  /* 106e51c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e51c6 jmp 0x106e51d0 */
  goto L_106e51d0;
L_106e51c8:;
  /* 106e51c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e51cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e51cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106e51d0:;
  /* 106e51d0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e51d4 je 0x106e53f2 */
  if (C.zf) goto L_106e53f2;
  /* 106e51da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e51dd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e51e0 je 0x106e53f2 */
  if (C.zf) goto L_106e53f2;
  /* 106e51e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e51e9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106e51ec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e51f2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e51f5 je 0x106e5224 */
  if (C.zf) goto L_106e5224;
  /* 106e51f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e51fa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 106e51fd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e5203 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e5205 je 0x106e5224 */
  if (C.zf) goto L_106e5224;
  /* 106e5207 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e520a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e520d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e5212 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5215 jne 0x106e5229 */
  if (!C.zf) goto L_106e5229;
  /* 106e5217 mov ecx, dword ptr [0x1070da84] */
  ECX = (r32((uint32_t)(0x1070da84)));
  /* 106e521d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 106e5220 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e5222 jne 0x106e5229 */
  if (!C.zf) goto L_106e5229;
L_106e5224:;
  /* 106e5224 jmp 0x106e53ed */
  goto L_106e53ed;
L_106e5229:;
  /* 106e5229 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e522c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5230 je 0x106e52a2 */
  if (C.zf) goto L_106e52a2;
  /* 106e5232 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5234 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e5236 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5239 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 106e523c push ecx */
  push32((uint32_t)(ECX));
  /* 106e523d call 0x106e4ce0 */
  push32(0x106e5242u); f_106e4ce0();
  /* 106e5242 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e5247 jne 0x106e5273 */
  if (!C.zf) goto L_106e5273;
L_106e5249:;
  /* 106e5249 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e524c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106e524f push eax */
  push32((uint32_t)(EAX));
  /* 106e5250 push 0x1070aac8 */
  push32((uint32_t)(0x1070aac8u));
  /* 106e5255 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5257 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5259 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e525b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e525d call 0x106e27f0 */
  push32(0x106e5262u); f_106e27f0();
  /* 106e5262 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5265 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5268 jne 0x106e526b */
  if (!C.zf) goto L_106e526b;
  /* 106e526a int3  */
  x86_unimpl("int3 @ 0x106e526a");
L_106e526b:;
  /* 106e526b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e526d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e526f jne 0x106e5249 */
  if (!C.zf) goto L_106e5249;
  /* 106e5271 jmp 0x106e52a2 */
  goto L_106e52a2;
L_106e5273:;
  /* 106e5273 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5276 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106e5279 push eax */
  push32((uint32_t)(EAX));
  /* 106e527a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e527d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106e5280 push edx */
  push32((uint32_t)(EDX));
  /* 106e5281 push 0x1070aabc */
  push32((uint32_t)(0x1070aabcu));
  /* 106e5286 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5288 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e528a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e528c push 0 */
  push32((uint32_t)(0x0u));
  /* 106e528e call 0x106e27f0 */
  push32(0x106e5293u); f_106e27f0();
  /* 106e5293 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5296 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5299 jne 0x106e529c */
  if (!C.zf) goto L_106e529c;
  /* 106e529b int3  */
  x86_unimpl("int3 @ 0x106e529b");
L_106e529c:;
  /* 106e529c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e529e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e52a0 jne 0x106e5273 */
  if (!C.zf) goto L_106e5273;
L_106e52a2:;
  /* 106e52a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e52a5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 106e52a8 push edx */
  push32((uint32_t)(EDX));
  /* 106e52a9 push 0x1070aab4 */
  push32((uint32_t)(0x1070aab4u));
  /* 106e52ae push 0 */
  push32((uint32_t)(0x0u));
  /* 106e52b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e52b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e52b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e52b6 call 0x106e27f0 */
  push32(0x106e52bbu); f_106e27f0();
  /* 106e52bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e52be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e52c1 jne 0x106e52c4 */
  if (!C.zf) goto L_106e52c4;
  /* 106e52c3 int3  */
  x86_unimpl("int3 @ 0x106e52c3");
L_106e52c4:;
  /* 106e52c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e52c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e52c8 jne 0x106e52a2 */
  if (!C.zf) goto L_106e52a2;
  /* 106e52ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e52cd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106e52d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e52d6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e52d9 jne 0x106e534c */
  if (!C.zf) goto L_106e534c;
L_106e52db:;
  /* 106e52db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e52de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e52e1 push ecx */
  push32((uint32_t)(ECX));
  /* 106e52e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e52e5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e52e8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106e52eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e52f0 push eax */
  push32((uint32_t)(EAX));
  /* 106e52f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e52f4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e52f7 push ecx */
  push32((uint32_t)(ECX));
  /* 106e52f8 push 0x1070aa80 */
  push32((uint32_t)(0x1070aa80u));
  /* 106e52fd push 0 */
  push32((uint32_t)(0x0u));
  /* 106e52ff push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5301 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5303 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5305 call 0x106e27f0 */
  push32(0x106e530au); f_106e27f0();
  /* 106e530a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e530d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5310 jne 0x106e5313 */
  if (!C.zf) goto L_106e5313;
  /* 106e5312 int3  */
  x86_unimpl("int3 @ 0x106e5312");
L_106e5313:;
  /* 106e5313 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e5315 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e5317 jne 0x106e52db */
  if (!C.zf) goto L_106e52db;
  /* 106e5319 cmp dword ptr [0x10710e78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710e78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5320 je 0x106e533b */
  if (C.zf) goto L_106e533b;
  /* 106e5322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5325 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e5328 push ecx */
  push32((uint32_t)(ECX));
  /* 106e5329 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e532c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e532f push edx */
  push32((uint32_t)(EDX));
  /* 106e5330 call dword ptr [0x10710e78] */
  call_ind((uint32_t)(r32((uint32_t)(0x10710e78))), 0x106e5336u);
  /* 106e5336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5339 jmp 0x106e5347 */
  goto L_106e5347;
L_106e533b:;
  /* 106e533b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e533e push eax */
  push32((uint32_t)(EAX));
  /* 106e533f call 0x106e5430 */
  push32(0x106e5344u); f_106e5430();
  /* 106e5344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e5347:;
  /* 106e5347 jmp 0x106e53ed */
  goto L_106e53ed;
L_106e534c:;
  /* 106e534c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e534f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5353 jne 0x106e5392 */
  if (!C.zf) goto L_106e5392;
L_106e5355:;
  /* 106e5355 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5358 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e535b push eax */
  push32((uint32_t)(EAX));
  /* 106e535c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e535f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5362 push ecx */
  push32((uint32_t)(ECX));
  /* 106e5363 push 0x1070aa58 */
  push32((uint32_t)(0x1070aa58u));
  /* 106e5368 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e536a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e536c push 0 */
  push32((uint32_t)(0x0u));
  /* 106e536e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5370 call 0x106e27f0 */
  push32(0x106e5375u); f_106e27f0();
  /* 106e5375 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5378 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e537b jne 0x106e537e */
  if (!C.zf) goto L_106e537e;
  /* 106e537d int3  */
  x86_unimpl("int3 @ 0x106e537d");
L_106e537e:;
  /* 106e537e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e5380 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e5382 jne 0x106e5355 */
  if (!C.zf) goto L_106e5355;
  /* 106e5384 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5387 push eax */
  push32((uint32_t)(EAX));
  /* 106e5388 call 0x106e5430 */
  push32(0x106e538du); f_106e5430();
  /* 106e538d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5390 jmp 0x106e53ed */
  goto L_106e53ed;
L_106e5392:;
  /* 106e5392 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5395 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 106e5398 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e539e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e53a1 jne 0x106e53ed */
  if (!C.zf) goto L_106e53ed;
L_106e53a3:;
  /* 106e53a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e53a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 106e53a9 push ecx */
  push32((uint32_t)(ECX));
  /* 106e53aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e53ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 106e53b0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106e53b3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e53b8 push eax */
  push32((uint32_t)(EAX));
  /* 106e53b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e53bc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e53bf push ecx */
  push32((uint32_t)(ECX));
  /* 106e53c0 push 0x1070aa24 */
  push32((uint32_t)(0x1070aa24u));
  /* 106e53c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e53c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e53c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e53cb push 0 */
  push32((uint32_t)(0x0u));
  /* 106e53cd call 0x106e27f0 */
  push32(0x106e53d2u); f_106e27f0();
  /* 106e53d2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e53d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e53d8 jne 0x106e53db */
  if (!C.zf) goto L_106e53db;
  /* 106e53da int3  */
  x86_unimpl("int3 @ 0x106e53da");
L_106e53db:;
  /* 106e53db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e53dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e53df jne 0x106e53a3 */
  if (!C.zf) goto L_106e53a3;
  /* 106e53e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e53e4 push eax */
  push32((uint32_t)(EAX));
  /* 106e53e5 call 0x106e5430 */
  push32(0x106e53eau); f_106e5430();
  /* 106e53ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e53ed:;
  /* 106e53ed jmp 0x106e51c8 */
  goto L_106e51c8;
L_106e53f2:;
  /* 106e53f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e53f4 call 0x106e71d0 */
  push32(0x106e53f9u); f_106e71d0();
  /* 106e53f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e53fc:;
  /* 106e53fc push 0x1070aa0c */
  push32((uint32_t)(0x1070aa0cu));
  /* 106e5401 push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e5406 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5408 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e540a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e540c push 0 */
  push32((uint32_t)(0x0u));
  /* 106e540e call 0x106e27f0 */
  push32(0x106e5413u); f_106e27f0();
  /* 106e5413 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5416 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5419 jne 0x106e541c */
  if (!C.zf) goto L_106e541c;
  /* 106e541b int3  */
  x86_unimpl("int3 @ 0x106e541b");
L_106e541c:;
  /* 106e541c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e541e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e5420 jne 0x106e53fc */
  if (!C.zf) goto L_106e53fc;
  /* 106e5422 pop edi */
  EDI = (pop32());
  /* 106e5423 pop esi */
  ESI = (pop32());
  /* 106e5424 pop ebx */
  EBX = (pop32());
  /* 106e5425 mov esp, ebp */
  ESP = (EBP);
  /* 106e5427 pop ebp */
  EBP = (pop32());
  /* 106e5428 ret  */
  ESPCHK(0x106e5170u, _esp0);
  ESP += 4; return;
}

/* FUN_10005430 @ 0x106e5430 (276 bytes, 89 insns) */
void f_106e5430(void) {
  FTRACE(0x106e5430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e5430 push ebp */
  push32((uint32_t)(EBP));
  /* 106e5431 mov ebp, esp */
  EBP = (ESP);
  /* 106e5433 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e5436 push ebx */
  push32((uint32_t)(EBX));
  /* 106e5437 push esi */
  push32((uint32_t)(ESI));
  /* 106e5438 push edi */
  push32((uint32_t)(EDI));
  /* 106e5439 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 106e5440 jmp 0x106e544b */
  goto L_106e544b;
L_106e5442:;
  /* 106e5442 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106e5445 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5448 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_106e544b:;
  /* 106e544b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e544e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5452 jge 0x106e545f */
  if ((C.sf==C.of)) goto L_106e545f;
  /* 106e5454 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e5457 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 106e545a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 106e545d jmp 0x106e5466 */
  goto L_106e5466;
L_106e545f:;
  /* 106e545f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_106e5466:;
  /* 106e5466 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106e5469 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e546c jge 0x106e550c */
  if ((C.sf==C.of)) goto L_106e550c;
  /* 106e5472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e5475 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5478 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 106e547b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 106e547e cmp dword ptr [0x1070dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5485 jle 0x106e54a3 */
  if ((C.zf||C.sf!=C.of)) goto L_106e54a3;
  /* 106e5487 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 106e548c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e548f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e5495 push ecx */
  push32((uint32_t)(ECX));
  /* 106e5496 call 0x106e9740 */
  push32(0x106e549bu); f_106e9740();
  /* 106e549b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e549e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 106e54a1 jmp 0x106e54c0 */
  goto L_106e54c0;
L_106e54a3:;
  /* 106e54a3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e54a6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e54ac mov eax, dword ptr [0x1070dc98] */
  EAX = (r32((uint32_t)(0x1070dc98)));
  /* 106e54b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e54b3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 106e54b7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 106e54bd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_106e54c0:;
  /* 106e54c0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e54c4 je 0x106e54d4 */
  if (C.zf) goto L_106e54d4;
  /* 106e54c6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e54c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e54cf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 106e54d2 jmp 0x106e54db */
  goto L_106e54db;
L_106e54d4:;
  /* 106e54d4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_106e54db:;
  /* 106e54db mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106e54de mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 106e54e1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 106e54e5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 106e54e8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e54ee push edx */
  push32((uint32_t)(EDX));
  /* 106e54ef push 0x1070ab00 */
  push32((uint32_t)(0x1070ab00u));
  /* 106e54f4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106e54f7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e54fa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 106e54fe push ecx */
  push32((uint32_t)(ECX));
  /* 106e54ff call 0x106e9640 */
  push32(0x106e5504u); f_106e9640();
  /* 106e5504 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5507 jmp 0x106e5442 */
  goto L_106e5442;
L_106e550c:;
  /* 106e550c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 106e550f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_106e5514:;
  /* 106e5514 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 106e5517 push eax */
  push32((uint32_t)(EAX));
  /* 106e5518 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 106e551b push ecx */
  push32((uint32_t)(ECX));
  /* 106e551c push 0x1070aaf0 */
  push32((uint32_t)(0x1070aaf0u));
  /* 106e5521 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5523 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5525 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5527 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5529 call 0x106e27f0 */
  push32(0x106e552eu); f_106e27f0();
  /* 106e552e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5531 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5534 jne 0x106e5537 */
  if (!C.zf) goto L_106e5537;
  /* 106e5536 int3  */
  x86_unimpl("int3 @ 0x106e5536");
L_106e5537:;
  /* 106e5537 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e5539 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e553b jne 0x106e5514 */
  if (!C.zf) goto L_106e5514;
  /* 106e553d pop edi */
  EDI = (pop32());
  /* 106e553e pop esi */
  ESI = (pop32());
  /* 106e553f pop ebx */
  EBX = (pop32());
  /* 106e5540 mov esp, ebp */
  ESP = (EBP);
  /* 106e5542 pop ebp */
  EBP = (pop32());
  /* 106e5543 ret  */
  ESPCHK(0x106e5430u, _esp0);
  ESP += 4; return;
}

/* FUN_10005550 @ 0x106e5550 (116 bytes, 46 insns) */
void f_106e5550(void) {
  FTRACE(0x106e5550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e5550 push ebp */
  push32((uint32_t)(EBP));
  /* 106e5551 mov ebp, esp */
  EBP = (ESP);
  /* 106e5553 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e5556 push ebx */
  push32((uint32_t)(EBX));
  /* 106e5557 push esi */
  push32((uint32_t)(ESI));
  /* 106e5558 push edi */
  push32((uint32_t)(EDI));
  /* 106e5559 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 106e555c push eax */
  push32((uint32_t)(EAX));
  /* 106e555d call 0x106e4ed0 */
  push32(0x106e5562u); f_106e4ed0();
  /* 106e5562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5565 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5569 jne 0x106e5584 */
  if (!C.zf) goto L_106e5584;
  /* 106e556b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e556f jne 0x106e5584 */
  if (!C.zf) goto L_106e5584;
  /* 106e5571 mov ecx, dword ptr [0x1070da84] */
  ECX = (r32((uint32_t)(0x1070da84)));
  /* 106e5577 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 106e557a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e557c je 0x106e55bb */
  if (C.zf) goto L_106e55bb;
  /* 106e557e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5582 je 0x106e55bb */
  if (C.zf) goto L_106e55bb;
L_106e5584:;
  /* 106e5584 push 0x1070ab08 */
  push32((uint32_t)(0x1070ab08u));
  /* 106e5589 push 0x1070a4d4 */
  push32((uint32_t)(0x1070a4d4u));
  /* 106e558e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5590 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5592 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5594 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5596 call 0x106e27f0 */
  push32(0x106e559bu); f_106e27f0();
  /* 106e559b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e559e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e55a1 jne 0x106e55a4 */
  if (!C.zf) goto L_106e55a4;
  /* 106e55a3 int3  */
  x86_unimpl("int3 @ 0x106e55a3");
L_106e55a4:;
  /* 106e55a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e55a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e55a8 jne 0x106e5584 */
  if (!C.zf) goto L_106e5584;
  /* 106e55aa push 0 */
  push32((uint32_t)(0x0u));
  /* 106e55ac call 0x106e5170 */
  push32(0x106e55b1u); f_106e5170();
  /* 106e55b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e55b4 mov eax, 1 */
  EAX = (0x1u);
  /* 106e55b9 jmp 0x106e55bd */
  goto L_106e55bd;
L_106e55bb:;
  /* 106e55bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e55bd:;
  /* 106e55bd pop edi */
  EDI = (pop32());
  /* 106e55be pop esi */
  ESI = (pop32());
  /* 106e55bf pop ebx */
  EBX = (pop32());
  /* 106e55c0 mov esp, ebp */
  ESP = (EBP);
  /* 106e55c2 pop ebp */
  EBP = (pop32());
  /* 106e55c3 ret  */
  ESPCHK(0x106e5550u, _esp0);
  ESP += 4; return;
}

/* FUN_100055d0 @ 0x106e55d0 (197 bytes, 79 insns) */
void f_106e55d0(void) {
  FTRACE(0x106e55d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e55d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e55d1 mov ebp, esp */
  EBP = (ESP);
  /* 106e55d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e55d4 push ebx */
  push32((uint32_t)(EBX));
  /* 106e55d5 push esi */
  push32((uint32_t)(ESI));
  /* 106e55d6 push edi */
  push32((uint32_t)(EDI));
  /* 106e55d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e55db jne 0x106e55e2 */
  if (!C.zf) goto L_106e55e2;
  /* 106e55dd jmp 0x106e568e */
  goto L_106e568e;
L_106e55e2:;
  /* 106e55e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106e55e9 jmp 0x106e55f4 */
  goto L_106e55f4;
L_106e55eb:;
  /* 106e55eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e55ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e55f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e55f4:;
  /* 106e55f4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e55f8 jge 0x106e563e */
  if ((C.sf==C.of)) goto L_106e563e;
L_106e55fa:;
  /* 106e55fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e55fd mov edx, dword ptr [ecx*4 + 0x1070da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1070da94)));
  /* 106e5604 push edx */
  push32((uint32_t)(EDX));
  /* 106e5605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5608 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e560b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 106e560f push edx */
  push32((uint32_t)(EDX));
  /* 106e5610 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5613 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e5616 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 106e561a push edx */
  push32((uint32_t)(EDX));
  /* 106e561b push 0x1070ab64 */
  push32((uint32_t)(0x1070ab64u));
  /* 106e5620 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5622 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5624 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5626 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5628 call 0x106e27f0 */
  push32(0x106e562du); f_106e27f0();
  /* 106e562d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5630 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5633 jne 0x106e5636 */
  if (!C.zf) goto L_106e5636;
  /* 106e5635 int3  */
  x86_unimpl("int3 @ 0x106e5635");
L_106e5636:;
  /* 106e5636 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e563a jne 0x106e55fa */
  if (!C.zf) goto L_106e55fa;
  /* 106e563c jmp 0x106e55eb */
  goto L_106e55eb;
L_106e563e:;
  /* 106e563e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e5641 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 106e5644 push edx */
  push32((uint32_t)(EDX));
  /* 106e5645 push 0x1070ab40 */
  push32((uint32_t)(0x1070ab40u));
  /* 106e564a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e564c push 0 */
  push32((uint32_t)(0x0u));
  /* 106e564e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5650 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5652 call 0x106e27f0 */
  push32(0x106e5657u); f_106e27f0();
  /* 106e5657 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e565a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e565d jne 0x106e5660 */
  if (!C.zf) goto L_106e5660;
  /* 106e565f int3  */
  x86_unimpl("int3 @ 0x106e565f");
L_106e5660:;
  /* 106e5660 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5662 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e5664 jne 0x106e563e */
  if (!C.zf) goto L_106e563e;
L_106e5666:;
  /* 106e5666 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e5669 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 106e566c push edx */
  push32((uint32_t)(EDX));
  /* 106e566d push 0x1070ab20 */
  push32((uint32_t)(0x1070ab20u));
  /* 106e5672 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5674 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5676 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5678 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e567a call 0x106e27f0 */
  push32(0x106e567fu); f_106e27f0();
  /* 106e567f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5682 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5685 jne 0x106e5688 */
  if (!C.zf) goto L_106e5688;
  /* 106e5687 int3  */
  x86_unimpl("int3 @ 0x106e5687");
L_106e5688:;
  /* 106e5688 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e568a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e568c jne 0x106e5666 */
  if (!C.zf) goto L_106e5666;
L_106e568e:;
  /* 106e568e pop edi */
  EDI = (pop32());
  /* 106e568f pop esi */
  ESI = (pop32());
  /* 106e5690 pop ebx */
  EBX = (pop32());
  /* 106e5691 mov esp, ebp */
  ESP = (EBP);
  /* 106e5693 pop ebp */
  EBP = (pop32());
  /* 106e5694 ret  */
  ESPCHK(0x106e55d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100056a0 @ 0x106e56a0 (329 bytes, 102 insns) */
void f_106e56a0(void) {
  FTRACE(0x106e56a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e56a0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e56a1 mov ebp, esp */
  EBP = (ESP);
  /* 106e56a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e56a6 cmp dword ptr [0x10710ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e56ad jne 0x106e56b4 */
  if (!C.zf) goto L_106e56b4;
  /* 106e56af call 0x106e9fe0 */
  push32(0x106e56b4u); f_106e9fe0();
L_106e56b4:;
  /* 106e56b4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106e56bb mov eax, dword ptr [0x1070f4a8] */
  EAX = (r32((uint32_t)(0x1070f4a8)));
  /* 106e56c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e56c3:;
  /* 106e56c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e56c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106e56c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e56cb je 0x106e56f9 */
  if (C.zf) goto L_106e56f9;
  /* 106e56cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e56d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106e56d3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e56d6 je 0x106e56e1 */
  if (C.zf) goto L_106e56e1;
  /* 106e56d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e56db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e56de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106e56e1:;
  /* 106e56e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e56e4 push eax */
  push32((uint32_t)(EAX));
  /* 106e56e5 call 0x106e6560 */
  push32(0x106e56eau); f_106e6560();
  /* 106e56ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e56ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e56f0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 106e56f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e56f7 jmp 0x106e56c3 */
  goto L_106e56c3;
L_106e56f9:;
  /* 106e56f9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 106e56fb push 0x1070ab84 */
  push32((uint32_t)(0x1070ab84u));
  /* 106e5700 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e5702 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e5705 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 106e570c push ecx */
  push32((uint32_t)(ECX));
  /* 106e570d call 0x106e3730 */
  push32(0x106e5712u); f_106e3730();
  /* 106e5712 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5715 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e5718 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e571b mov dword ptr [0x1070f4dc], edx */
  w32((uint32_t)(0x1070f4dc), (EDX));
  /* 106e5721 cmp dword ptr [0x1070f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5728 jne 0x106e5734 */
  if (!C.zf) goto L_106e5734;
  /* 106e572a push 9 */
  push32((uint32_t)(0x9u));
  /* 106e572c call 0x106e26a0 */
  push32(0x106e5731u); f_106e26a0();
  /* 106e5731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e5734:;
  /* 106e5734 mov eax, dword ptr [0x1070f4a8] */
  EAX = (r32((uint32_t)(0x1070f4a8)));
  /* 106e5739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e573c jmp 0x106e5747 */
  goto L_106e5747;
L_106e573e:;
  /* 106e573e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5741 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5744 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106e5747:;
  /* 106e5747 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e574a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106e574d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e574f je 0x106e57b7 */
  if (C.zf) goto L_106e57b7;
  /* 106e5751 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5754 push ecx */
  push32((uint32_t)(ECX));
  /* 106e5755 call 0x106e6560 */
  push32(0x106e575au); f_106e6560();
  /* 106e575a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e575d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5760 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106e5763 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5766 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106e5769 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e576c je 0x106e57b5 */
  if (C.zf) goto L_106e57b5;
  /* 106e576e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 106e5770 push 0x1070ab84 */
  push32((uint32_t)(0x1070ab84u));
  /* 106e5775 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e5777 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e577a push ecx */
  push32((uint32_t)(ECX));
  /* 106e577b call 0x106e3730 */
  push32(0x106e5780u); f_106e3730();
  /* 106e5780 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5783 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5786 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106e5788 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e578b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e578e jne 0x106e579a */
  if (!C.zf) goto L_106e579a;
  /* 106e5790 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e5792 call 0x106e26a0 */
  push32(0x106e5797u); f_106e26a0();
  /* 106e5797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e579a:;
  /* 106e579a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e579d push ecx */
  push32((uint32_t)(ECX));
  /* 106e579e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e57a1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e57a3 push eax */
  push32((uint32_t)(EAX));
  /* 106e57a4 call 0x106e66e0 */
  push32(0x106e57a9u); f_106e66e0();
  /* 106e57a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e57ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e57af add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e57b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_106e57b5:;
  /* 106e57b5 jmp 0x106e573e */
  goto L_106e573e;
L_106e57b7:;
  /* 106e57b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e57b9 mov edx, dword ptr [0x1070f4a8] */
  EDX = (r32((uint32_t)(0x1070f4a8)));
  /* 106e57bf push edx */
  push32((uint32_t)(EDX));
  /* 106e57c0 call 0x106e41c0 */
  push32(0x106e57c5u); f_106e41c0();
  /* 106e57c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e57c8 mov dword ptr [0x1070f4a8], 0 */
  w32((uint32_t)(0x1070f4a8), (0x0u));
  /* 106e57d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e57d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106e57db mov dword ptr [0x10710fe0], 1 */
  w32((uint32_t)(0x10710fe0), (0x1u));
  /* 106e57e5 mov esp, ebp */
  ESP = (EBP);
  /* 106e57e7 pop ebp */
  EBP = (pop32());
  /* 106e57e8 ret  */
  ESPCHK(0x106e56a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057f0 @ 0x106e57f0 (216 bytes, 69 insns) */
void f_106e57f0(void) {
  FTRACE(0x106e57f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e57f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e57f1 mov ebp, esp */
  EBP = (ESP);
  /* 106e57f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e57f6 cmp dword ptr [0x10710ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e57fd jne 0x106e5804 */
  if (!C.zf) goto L_106e5804;
  /* 106e57ff call 0x106e9fe0 */
  push32(0x106e5804u); f_106e9fe0();
L_106e5804:;
  /* 106e5804 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 106e5809 push 0x1070f518 */
  push32((uint32_t)(0x1070f518u));
  /* 106e580e push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5810 call dword ptr [0x107122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122e4))), 0x106e5816u);
  /* 106e5816 mov dword ptr [0x1070f4ec], 0x1070f518 */
  w32((uint32_t)(0x1070f4ec), (0x1070f518u));
  /* 106e5820 mov eax, dword ptr [0x1071100c] */
  EAX = (r32((uint32_t)(0x1071100c)));
  /* 106e5825 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106e5828 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e582a jne 0x106e5837 */
  if (!C.zf) goto L_106e5837;
  /* 106e582c mov edx, dword ptr [0x1070f4ec] */
  EDX = (r32((uint32_t)(0x1070f4ec)));
  /* 106e5832 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 106e5835 jmp 0x106e583f */
  goto L_106e583f;
L_106e5837:;
  /* 106e5837 mov eax, dword ptr [0x1071100c] */
  EAX = (r32((uint32_t)(0x1071100c)));
  /* 106e583c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_106e583f:;
  /* 106e583f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e5842 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106e5845 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 106e5848 push edx */
  push32((uint32_t)(EDX));
  /* 106e5849 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 106e584c push eax */
  push32((uint32_t)(EAX));
  /* 106e584d push 0 */
  push32((uint32_t)(0x0u));
  /* 106e584f push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5851 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e5854 push ecx */
  push32((uint32_t)(ECX));
  /* 106e5855 call 0x106e58d0 */
  push32(0x106e585au); f_106e58d0();
  /* 106e585a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e585d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 106e5862 push 0x1070ab90 */
  push32((uint32_t)(0x1070ab90u));
  /* 106e5867 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e5869 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e586c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e586f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 106e5872 push ecx */
  push32((uint32_t)(ECX));
  /* 106e5873 call 0x106e3730 */
  push32(0x106e5878u); f_106e3730();
  /* 106e5878 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e587b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e587e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5882 jne 0x106e588e */
  if (!C.zf) goto L_106e588e;
  /* 106e5884 push 8 */
  push32((uint32_t)(0x8u));
  /* 106e5886 call 0x106e26a0 */
  push32(0x106e588bu); f_106e26a0();
  /* 106e588b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e588e:;
  /* 106e588e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 106e5891 push edx */
  push32((uint32_t)(EDX));
  /* 106e5892 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 106e5895 push eax */
  push32((uint32_t)(EAX));
  /* 106e5896 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5899 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e589c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 106e589f push eax */
  push32((uint32_t)(EAX));
  /* 106e58a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e58a3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e58a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e58a7 push edx */
  push32((uint32_t)(EDX));
  /* 106e58a8 call 0x106e58d0 */
  push32(0x106e58adu); f_106e58d0();
  /* 106e58ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e58b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e58b3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e58b6 mov dword ptr [0x1070f4d0], eax */
  w32((uint32_t)(0x1070f4d0), (EAX));
  /* 106e58bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e58be mov dword ptr [0x1070f4d4], ecx */
  w32((uint32_t)(0x1070f4d4), (ECX));
  /* 106e58c4 mov esp, ebp */
  ESP = (EBP);
  /* 106e58c6 pop ebp */
  EBP = (pop32());
  /* 106e58c7 ret  */
  ESPCHK(0x106e57f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058d0 @ 0x106e58d0 (1060 bytes, 360 insns) */
void f_106e58d0(void) {
  FTRACE(0x106e58d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e58d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e58d1 mov ebp, esp */
  EBP = (ESP);
  /* 106e58d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e58d6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e58d9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106e58df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e58e2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 106e58e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e58eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e58ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e58f2 je 0x106e5905 */
  if (C.zf) goto L_106e5905;
  /* 106e58f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e58f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e58fa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106e58fc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e58ff add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5902 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_106e5905:;
  /* 106e5905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5908 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106e590b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e590e jne 0x106e59dd */
  if (!C.zf) goto L_106e59dd;
L_106e5914:;
  /* 106e5914 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5917 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e591a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e591d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5920 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106e5923 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5926 je 0x106e59a2 */
  if (C.zf) goto L_106e59a2;
  /* 106e5928 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e592b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106e592e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e5930 je 0x106e59a2 */
  if (C.zf) goto L_106e59a2;
  /* 106e5932 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5935 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e5937 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e5939 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e593b mov al, byte ptr [edx + 0x10710d41] */
  AL = (r8((uint32_t)(EDX + 0x10710d41)));
  /* 106e5941 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 106e5944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e5946 je 0x106e5977 */
  if (C.zf) goto L_106e5977;
  /* 106e5948 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e594b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e594d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5950 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5953 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106e5955 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5959 je 0x106e5977 */
  if (C.zf) goto L_106e5977;
  /* 106e595b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e595e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5961 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106e5963 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106e5965 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5968 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e596b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106e596e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5971 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5974 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106e5977:;
  /* 106e5977 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e597a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e597c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e597f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5982 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106e5984 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5988 je 0x106e599d */
  if (C.zf) goto L_106e599d;
  /* 106e598a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e598d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5990 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e5992 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106e5994 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5997 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e599a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_106e599d:;
  /* 106e599d jmp 0x106e5914 */
  goto L_106e5914;
L_106e59a2:;
  /* 106e59a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e59a5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e59a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e59aa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e59ad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 106e59af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e59b3 je 0x106e59c4 */
  if (C.zf) goto L_106e59c4;
  /* 106e59b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e59b8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 106e59bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e59be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e59c1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_106e59c4:;
  /* 106e59c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e59c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106e59ca cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e59cd jne 0x106e59d8 */
  if (!C.zf) goto L_106e59d8;
  /* 106e59cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e59d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e59d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106e59d8:;
  /* 106e59d8 jmp 0x106e5aac */
  goto L_106e5aac;
L_106e59dd:;
  /* 106e59dd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e59e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e59e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e59e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e59e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106e59ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e59ee je 0x106e5a03 */
  if (C.zf) goto L_106e5a03;
  /* 106e59f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e59f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e59f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e59f8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106e59fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e59fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5a00 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_106e5a03:;
  /* 106e5a03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5a06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e5a08 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 106e5a0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5a0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5a11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e5a14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5a17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e5a1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e5a1f mov dl, byte ptr [ecx + 0x10710d41] */
  DL = (r8((uint32_t)(ECX + 0x10710d41)));
  /* 106e5a25 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 106e5a28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e5a2a je 0x106e5a5b */
  if (C.zf) goto L_106e5a5b;
  /* 106e5a2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5a2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e5a31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5a34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5a37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106e5a39 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5a3d je 0x106e5a52 */
  if (C.zf) goto L_106e5a52;
  /* 106e5a3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5a42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5a45 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e5a47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106e5a49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5a4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5a4f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_106e5a52:;
  /* 106e5a52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5a55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5a58 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106e5a5b:;
  /* 106e5a5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5a5e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e5a64 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5a67 je 0x106e5a87 */
  if (C.zf) goto L_106e5a87;
  /* 106e5a69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5a6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e5a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e5a73 je 0x106e5a87 */
  if (C.zf) goto L_106e5a87;
  /* 106e5a75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5a78 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e5a7e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5a81 jne 0x106e59dd */
  if (!C.zf) goto L_106e59dd;
L_106e5a87:;
  /* 106e5a87 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5a8a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e5a90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e5a92 jne 0x106e5a9f */
  if (!C.zf) goto L_106e5a9f;
  /* 106e5a94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5a97 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e5a9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e5a9d jmp 0x106e5aac */
  goto L_106e5aac;
L_106e5a9f:;
  /* 106e5a9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5aa3 je 0x106e5aac */
  if (C.zf) goto L_106e5aac;
  /* 106e5aa5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5aa8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_106e5aac:;
  /* 106e5aac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_106e5ab3:;
  /* 106e5ab3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5ab6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106e5ab9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e5abb je 0x106e5ade */
  if (C.zf) goto L_106e5ade;
L_106e5abd:;
  /* 106e5abd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5ac0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106e5ac3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5ac6 je 0x106e5ad3 */
  if (C.zf) goto L_106e5ad3;
  /* 106e5ac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5acb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106e5ace cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5ad1 jne 0x106e5ade */
  if (!C.zf) goto L_106e5ade;
L_106e5ad3:;
  /* 106e5ad3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5ad6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5ad9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e5adc jmp 0x106e5abd */
  goto L_106e5abd;
L_106e5ade:;
  /* 106e5ade mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5ae1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106e5ae4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e5ae6 jne 0x106e5aed */
  if (!C.zf) goto L_106e5aed;
  /* 106e5ae8 jmp 0x106e5ccb */
  goto L_106e5ccb;
L_106e5aed:;
  /* 106e5aed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5af1 je 0x106e5b04 */
  if (C.zf) goto L_106e5b04;
  /* 106e5af3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e5af6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5af9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 106e5afb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e5afe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5b01 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_106e5b04:;
  /* 106e5b04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e5b07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e5b09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5b0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e5b0f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_106e5b11:;
  /* 106e5b11 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 106e5b18 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_106e5b1f:;
  /* 106e5b1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5b22 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106e5b25 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5b28 jne 0x106e5b3e */
  if (!C.zf) goto L_106e5b3e;
  /* 106e5b2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5b2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5b30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e5b33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e5b36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5b39 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106e5b3c jmp 0x106e5b1f */
  goto L_106e5b1f;
L_106e5b3e:;
  /* 106e5b3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5b41 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106e5b44 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5b47 jne 0x106e5b9a */
  if (!C.zf) goto L_106e5b9a;
  /* 106e5b49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e5b4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e5b4e mov ecx, 2 */
  ECX = (0x2u);
  /* 106e5b53 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106e5b55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e5b57 jne 0x106e5b92 */
  if (!C.zf) goto L_106e5b92;
  /* 106e5b59 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5b5d je 0x106e5b7f */
  if (C.zf) goto L_106e5b7f;
  /* 106e5b5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5b62 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 106e5b66 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5b69 jne 0x106e5b76 */
  if (!C.zf) goto L_106e5b76;
  /* 106e5b6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5b6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5b71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e5b74 jmp 0x106e5b7d */
  goto L_106e5b7d;
L_106e5b76:;
  /* 106e5b76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106e5b7d:;
  /* 106e5b7d jmp 0x106e5b86 */
  goto L_106e5b86;
L_106e5b7f:;
  /* 106e5b7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_106e5b86:;
  /* 106e5b86 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e5b88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5b8c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 106e5b8f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_106e5b92:;
  /* 106e5b92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e5b95 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 106e5b97 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_106e5b9a:;
  /* 106e5b9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e5b9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e5ba0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e5ba3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 106e5ba6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e5ba8 je 0x106e5bce */
  if (C.zf) goto L_106e5bce;
  /* 106e5baa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5bae je 0x106e5bbf */
  if (C.zf) goto L_106e5bbf;
  /* 106e5bb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5bb3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 106e5bb6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5bb9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5bbc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_106e5bbf:;
  /* 106e5bbf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5bc2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e5bc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5bc7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5bca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106e5bcc jmp 0x106e5b9a */
  goto L_106e5b9a;
L_106e5bce:;
  /* 106e5bce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5bd1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 106e5bd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e5bd6 je 0x106e5bf4 */
  if (C.zf) goto L_106e5bf4;
  /* 106e5bd8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5bdc jne 0x106e5bf9 */
  if (!C.zf) goto L_106e5bf9;
  /* 106e5bde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5be1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106e5be4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5be7 je 0x106e5bf4 */
  if (C.zf) goto L_106e5bf4;
  /* 106e5be9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5bec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 106e5bef cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5bf2 jne 0x106e5bf9 */
  if (!C.zf) goto L_106e5bf9;
L_106e5bf4:;
  /* 106e5bf4 jmp 0x106e5ca4 */
  goto L_106e5ca4;
L_106e5bf9:;
  /* 106e5bf9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5bfd je 0x106e5c96 */
  if (C.zf) goto L_106e5c96;
  /* 106e5c03 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5c07 je 0x106e5c5d */
  if (C.zf) goto L_106e5c5d;
  /* 106e5c09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5c0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106e5c10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e5c12 mov cl, byte ptr [eax + 0x10710d41] */
  CL = (r8((uint32_t)(EAX + 0x10710d41)));
  /* 106e5c18 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106e5c1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e5c1d je 0x106e5c48 */
  if (C.zf) goto L_106e5c48;
  /* 106e5c1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5c22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5c25 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 106e5c27 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 106e5c29 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5c2c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5c2f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 106e5c32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5c35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5c38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e5c3b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5c3e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e5c40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5c43 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5c46 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_106e5c48:;
  /* 106e5c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5c4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5c4e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106e5c50 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 106e5c52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5c55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5c58 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 106e5c5b jmp 0x106e5c89 */
  goto L_106e5c89;
L_106e5c5d:;
  /* 106e5c5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5c60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5c62 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 106e5c64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e5c66 mov cl, byte ptr [eax + 0x10710d41] */
  CL = (r8((uint32_t)(EAX + 0x10710d41)));
  /* 106e5c6c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 106e5c6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e5c71 je 0x106e5c89 */
  if (C.zf) goto L_106e5c89;
  /* 106e5c73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5c76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5c79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e5c7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5c7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e5c81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5c84 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5c87 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106e5c89:;
  /* 106e5c89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5c8c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e5c8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5c91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5c94 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_106e5c96:;
  /* 106e5c96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5c99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5c9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e5c9f jmp 0x106e5b11 */
  goto L_106e5b11;
L_106e5ca4:;
  /* 106e5ca4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5ca8 je 0x106e5cb9 */
  if (C.zf) goto L_106e5cb9;
  /* 106e5caa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5cad mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 106e5cb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e5cb3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5cb6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_106e5cb9:;
  /* 106e5cb9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5cbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e5cbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5cc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 106e5cc4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106e5cc6 jmp 0x106e5ab3 */
  goto L_106e5ab3;
L_106e5ccb:;
  /* 106e5ccb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5ccf je 0x106e5ce3 */
  if (C.zf) goto L_106e5ce3;
  /* 106e5cd1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e5cd4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 106e5cda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e5cdd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5ce0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_106e5ce3:;
  /* 106e5ce3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e5ce6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e5ce8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5ceb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e5cee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106e5cf0 mov esp, ebp */
  ESP = (EBP);
  /* 106e5cf2 pop ebp */
  EBP = (pop32());
  /* 106e5cf3 ret  */
  ESPCHK(0x106e58d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d00 @ 0x106e5d00 (537 bytes, 173 insns) */
void f_106e5d00(void) {
  FTRACE(0x106e5d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e5d00 push ebp */
  push32((uint32_t)(EBP));
  /* 106e5d01 mov ebp, esp */
  EBP = (ESP);
  /* 106e5d03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e5d06 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 106e5d0d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 106e5d14 cmp dword ptr [0x1070f61c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f61c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5d1b jne 0x106e5d5a */
  if (!C.zf) goto L_106e5d5a;
  /* 106e5d1d call dword ptr [0x10712340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712340))), 0x106e5d23u);
  /* 106e5d23 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106e5d26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5d2a je 0x106e5d38 */
  if (C.zf) goto L_106e5d38;
  /* 106e5d2c mov dword ptr [0x1070f61c], 1 */
  w32((uint32_t)(0x1070f61c), (0x1u));
  /* 106e5d36 jmp 0x106e5d5a */
  goto L_106e5d5a;
L_106e5d38:;
  /* 106e5d38 call dword ptr [0x1071233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071233c))), 0x106e5d3eu);
  /* 106e5d3e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e5d41 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5d45 je 0x106e5d53 */
  if (C.zf) goto L_106e5d53;
  /* 106e5d47 mov dword ptr [0x1070f61c], 2 */
  w32((uint32_t)(0x1070f61c), (0x2u));
  /* 106e5d51 jmp 0x106e5d5a */
  goto L_106e5d5a;
L_106e5d53:;
  /* 106e5d53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5d55 jmp 0x106e5f15 */
  goto L_106e5f15;
L_106e5d5a:;
  /* 106e5d5a cmp dword ptr [0x1070f61c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f61c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5d61 jne 0x106e5e5e */
  if (!C.zf) goto L_106e5e5e;
  /* 106e5d67 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5d6b jne 0x106e5d83 */
  if (!C.zf) goto L_106e5d83;
  /* 106e5d6d call dword ptr [0x10712340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712340))), 0x106e5d73u);
  /* 106e5d73 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106e5d76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5d7a jne 0x106e5d83 */
  if (!C.zf) goto L_106e5d83;
  /* 106e5d7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5d7e jmp 0x106e5f15 */
  goto L_106e5f15;
L_106e5d83:;
  /* 106e5d83 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e5d86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106e5d89:;
  /* 106e5d89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e5d8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e5d8e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 106e5d91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e5d93 je 0x106e5db5 */
  if (C.zf) goto L_106e5db5;
  /* 106e5d95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e5d98 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5d9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e5d9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e5da1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e5da3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 106e5da6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e5da8 jne 0x106e5db3 */
  if (!C.zf) goto L_106e5db3;
  /* 106e5daa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e5dad add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5db0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106e5db3:;
  /* 106e5db3 jmp 0x106e5d89 */
  goto L_106e5d89;
L_106e5db5:;
  /* 106e5db5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e5db8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e5dbb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 106e5dbd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5dc0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e5dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5dc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5dcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5dce push edx */
  push32((uint32_t)(EDX));
  /* 106e5dcf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e5dd2 push eax */
  push32((uint32_t)(EAX));
  /* 106e5dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5dd7 call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106e5dddu);
  /* 106e5ddd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106e5de0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5de4 je 0x106e5e04 */
  if (C.zf) goto L_106e5e04;
  /* 106e5de6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 106e5de8 push 0x1070ab9c */
  push32((uint32_t)(0x1070ab9cu));
  /* 106e5ded push 2 */
  push32((uint32_t)(0x2u));
  /* 106e5def mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e5df2 push ecx */
  push32((uint32_t)(ECX));
  /* 106e5df3 call 0x106e3730 */
  push32(0x106e5df8u); f_106e3730();
  /* 106e5df8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5dfb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e5dfe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5e02 jne 0x106e5e15 */
  if (!C.zf) goto L_106e5e15;
L_106e5e04:;
  /* 106e5e04 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e5e07 push edx */
  push32((uint32_t)(EDX));
  /* 106e5e08 call dword ptr [0x10712334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712334))), 0x106e5e0eu);
  /* 106e5e0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5e10 jmp 0x106e5f15 */
  goto L_106e5f15;
L_106e5e15:;
  /* 106e5e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5e19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e5e1c push eax */
  push32((uint32_t)(EAX));
  /* 106e5e1d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e5e20 push ecx */
  push32((uint32_t)(ECX));
  /* 106e5e21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5e24 push edx */
  push32((uint32_t)(EDX));
  /* 106e5e25 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e5e28 push eax */
  push32((uint32_t)(EAX));
  /* 106e5e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5e2d call dword ptr [0x10712338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712338))), 0x106e5e33u);
  /* 106e5e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e5e35 jne 0x106e5e4c */
  if (!C.zf) goto L_106e5e4c;
  /* 106e5e37 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e5e39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e5e3c push ecx */
  push32((uint32_t)(ECX));
  /* 106e5e3d call 0x106e41c0 */
  push32(0x106e5e42u); f_106e41c0();
  /* 106e5e42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5e45 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_106e5e4c:;
  /* 106e5e4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e5e4f push edx */
  push32((uint32_t)(EDX));
  /* 106e5e50 call dword ptr [0x10712334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712334))), 0x106e5e56u);
  /* 106e5e56 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e5e59 jmp 0x106e5f15 */
  goto L_106e5f15;
L_106e5e5e:;
  /* 106e5e5e cmp dword ptr [0x1070f61c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1070f61c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5e65 jne 0x106e5f13 */
  if (!C.zf) goto L_106e5f13;
  /* 106e5e6b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5e6f jne 0x106e5e87 */
  if (!C.zf) goto L_106e5e87;
  /* 106e5e71 call dword ptr [0x1071233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071233c))), 0x106e5e77u);
  /* 106e5e77 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e5e7a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5e7e jne 0x106e5e87 */
  if (!C.zf) goto L_106e5e87;
  /* 106e5e80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5e82 jmp 0x106e5f15 */
  goto L_106e5f15;
L_106e5e87:;
  /* 106e5e87 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e5e8a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106e5e8d:;
  /* 106e5e8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5e90 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106e5e93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e5e95 je 0x106e5eb5 */
  if (C.zf) goto L_106e5eb5;
  /* 106e5e97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5e9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5e9d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e5ea0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5ea3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 106e5ea6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e5ea8 jne 0x106e5eb3 */
  if (!C.zf) goto L_106e5eb3;
  /* 106e5eaa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5ead add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5eb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_106e5eb3:;
  /* 106e5eb3 jmp 0x106e5e8d */
  goto L_106e5e8d;
L_106e5eb5:;
  /* 106e5eb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5eb8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e5ebb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5ebe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106e5ec1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 106e5ec6 push 0x1070ab9c */
  push32((uint32_t)(0x1070ab9cu));
  /* 106e5ecb push 2 */
  push32((uint32_t)(0x2u));
  /* 106e5ecd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e5ed0 push edx */
  push32((uint32_t)(EDX));
  /* 106e5ed1 call 0x106e3730 */
  push32(0x106e5ed6u); f_106e3730();
  /* 106e5ed6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5ed9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e5edc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5ee0 jne 0x106e5ef0 */
  if (!C.zf) goto L_106e5ef0;
  /* 106e5ee2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e5ee5 push eax */
  push32((uint32_t)(EAX));
  /* 106e5ee6 call dword ptr [0x10712330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712330))), 0x106e5eecu);
  /* 106e5eec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5eee jmp 0x106e5f15 */
  goto L_106e5f15;
L_106e5ef0:;
  /* 106e5ef0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e5ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e5ef4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e5ef7 push edx */
  push32((uint32_t)(EDX));
  /* 106e5ef8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5efb push eax */
  push32((uint32_t)(EAX));
  /* 106e5efc call 0x106ea010 */
  push32(0x106e5f01u); f_106ea010();
  /* 106e5f01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5f04 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e5f07 push ecx */
  push32((uint32_t)(ECX));
  /* 106e5f08 call dword ptr [0x10712330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712330))), 0x106e5f0eu);
  /* 106e5f0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e5f11 jmp 0x106e5f15 */
  goto L_106e5f15;
L_106e5f13:;
  /* 106e5f13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e5f15:;
  /* 106e5f15 mov esp, ebp */
  ESP = (EBP);
  /* 106e5f17 pop ebp */
  EBP = (pop32());
  /* 106e5f18 ret  */
  ESPCHK(0x106e5d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f20 @ 0x106e5f20 (77 bytes, 25 insns) */
void f_106e5f20(void) {
  FTRACE(0x106e5f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e5f20 push ebp */
  push32((uint32_t)(EBP));
  /* 106e5f21 mov ebp, esp */
  EBP = (ESP);
  /* 106e5f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5f25 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 106e5f2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5f2c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5f30 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 106e5f33 push eax */
  push32((uint32_t)(EAX));
  /* 106e5f34 call dword ptr [0x10712348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712348))), 0x106e5f3au);
  /* 106e5f3a mov dword ptr [0x10710e6c], eax */
  w32((uint32_t)(0x10710e6c), (EAX));
  /* 106e5f3f cmp dword ptr [0x10710e6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10710e6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5f46 jne 0x106e5f4c */
  if (!C.zf) goto L_106e5f4c;
  /* 106e5f48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5f4a jmp 0x106e5f6b */
  goto L_106e5f6b;
L_106e5f4c:;
  /* 106e5f4c call 0x106e79d0 */
  push32(0x106e5f51u); f_106e79d0();
  /* 106e5f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e5f53 jne 0x106e5f66 */
  if (!C.zf) goto L_106e5f66;
  /* 106e5f55 mov ecx, dword ptr [0x10710e6c] */
  ECX = (r32((uint32_t)(0x10710e6c)));
  /* 106e5f5b push ecx */
  push32((uint32_t)(ECX));
  /* 106e5f5c call dword ptr [0x10712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712344))), 0x106e5f62u);
  /* 106e5f62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e5f64 jmp 0x106e5f6b */
  goto L_106e5f6b;
L_106e5f66:;
  /* 106e5f66 mov eax, 1 */
  EAX = (0x1u);
L_106e5f6b:;
  /* 106e5f6b pop ebp */
  EBP = (pop32());
  /* 106e5f6c ret  */
  ESPCHK(0x106e5f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f70 @ 0x106e5f70 (156 bytes, 48 insns) */
void f_106e5f70(void) {
  FTRACE(0x106e5f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e5f70 push ebp */
  push32((uint32_t)(EBP));
  /* 106e5f71 mov ebp, esp */
  EBP = (ESP);
  /* 106e5f73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e5f76 mov eax, dword ptr [0x10710e68] */
  EAX = (r32((uint32_t)(0x10710e68)));
  /* 106e5f7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e5f7e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106e5f85 jmp 0x106e5f90 */
  goto L_106e5f90;
L_106e5f87:;
  /* 106e5f87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5f8a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5f8d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106e5f90:;
  /* 106e5f90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e5f93 cmp edx, dword ptr [0x10710e64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10710e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e5f99 jge 0x106e5fe6 */
  if ((C.sf==C.of)) goto L_106e5fe6;
  /* 106e5f9b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 106e5fa0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 106e5fa5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e5fa8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 106e5fab push ecx */
  push32((uint32_t)(ECX));
  /* 106e5fac call dword ptr [0x10712350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712350))), 0x106e5fb2u);
  /* 106e5fb2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 106e5fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5fb9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e5fbc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 106e5fbf push eax */
  push32((uint32_t)(EAX));
  /* 106e5fc0 call dword ptr [0x10712350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712350))), 0x106e5fc6u);
  /* 106e5fc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e5fc9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 106e5fcc push edx */
  push32((uint32_t)(EDX));
  /* 106e5fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5fcf mov eax, dword ptr [0x10710e6c] */
  EAX = (r32((uint32_t)(0x10710e6c)));
  /* 106e5fd4 push eax */
  push32((uint32_t)(EAX));
  /* 106e5fd5 call dword ptr [0x1071231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071231c))), 0x106e5fdbu);
  /* 106e5fdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e5fde add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e5fe1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106e5fe4 jmp 0x106e5f87 */
  goto L_106e5f87;
L_106e5fe6:;
  /* 106e5fe6 mov edx, dword ptr [0x10710e68] */
  EDX = (r32((uint32_t)(0x10710e68)));
  /* 106e5fec push edx */
  push32((uint32_t)(EDX));
  /* 106e5fed push 0 */
  push32((uint32_t)(0x0u));
  /* 106e5fef mov eax, dword ptr [0x10710e6c] */
  EAX = (r32((uint32_t)(0x10710e6c)));
  /* 106e5ff4 push eax */
  push32((uint32_t)(EAX));
  /* 106e5ff5 call dword ptr [0x1071231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071231c))), 0x106e5ffbu);
  /* 106e5ffb mov ecx, dword ptr [0x10710e6c] */
  ECX = (r32((uint32_t)(0x10710e6c)));
  /* 106e6001 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6002 call dword ptr [0x10712344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712344))), 0x106e6008u);
  /* 106e6008 mov esp, ebp */
  ESP = (EBP);
  /* 106e600a pop ebp */
  EBP = (pop32());
  /* 106e600b ret  */
  ESPCHK(0x106e5f70u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x106e6010 (73 bytes, 19 insns) */
void f_106e6010(void) {
  FTRACE(0x106e6010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6010 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6011 mov ebp, esp */
  EBP = (ESP);
  /* 106e6013 cmp dword ptr [0x1070f4b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e601a je 0x106e602e */
  if (C.zf) goto L_106e602e;
  /* 106e601c cmp dword ptr [0x1070f4b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6023 jne 0x106e6057 */
  if (!C.zf) goto L_106e6057;
  /* 106e6025 cmp dword ptr [0x1070f4b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e602c jne 0x106e6057 */
  if (!C.zf) goto L_106e6057;
L_106e602e:;
  /* 106e602e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 106e6033 call 0x106e6060 */
  push32(0x106e6038u); f_106e6060();
  /* 106e6038 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e603b cmp dword ptr [0x1070f620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6042 je 0x106e604a */
  if (C.zf) goto L_106e604a;
  /* 106e6044 call dword ptr [0x1070f620] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f620))), 0x106e604au);
L_106e604a:;
  /* 106e604a push 0xff */
  push32((uint32_t)(0xffu));
  /* 106e604f call 0x106e6060 */
  push32(0x106e6054u); f_106e6060();
  /* 106e6054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e6057:;
  /* 106e6057 pop ebp */
  EBP = (pop32());
  /* 106e6058 ret  */
  ESPCHK(0x106e6010u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x106e6060 (447 bytes, 131 insns) */
void f_106e6060(void) {
  FTRACE(0x106e6060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6060 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6061 mov ebp, esp */
  EBP = (ESP);
  /* 106e6063 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e6069 push ebx */
  push32((uint32_t)(EBX));
  /* 106e606a push esi */
  push32((uint32_t)(ESI));
  /* 106e606b push edi */
  push32((uint32_t)(EDI));
  /* 106e606c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 106e6073 jmp 0x106e607e */
  goto L_106e607e;
L_106e6075:;
  /* 106e6075 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6078 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e607b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_106e607e:;
  /* 106e607e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6082 jae 0x106e6097 */
  if (!C.cf) goto L_106e6097;
  /* 106e6084 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6087 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e608a cmp edx, dword ptr [ecx*8 + 0x1070dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1070dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6091 jne 0x106e6095 */
  if (!C.zf) goto L_106e6095;
  /* 106e6093 jmp 0x106e6097 */
  goto L_106e6097;
L_106e6095:;
  /* 106e6095 jmp 0x106e6075 */
  goto L_106e6075;
L_106e6097:;
  /* 106e6097 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e609a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e609d cmp ecx, dword ptr [eax*8 + 0x1070dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1070dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e60a4 jne 0x106e6218 */
  if (!C.zf) goto L_106e6218;
  /* 106e60aa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e60b1 je 0x106e60d4 */
  if (C.zf) goto L_106e60d4;
  /* 106e60b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e60b6 mov eax, dword ptr [edx*8 + 0x1070dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1070dab4)));
  /* 106e60bd push eax */
  push32((uint32_t)(EAX));
  /* 106e60be push 0 */
  push32((uint32_t)(0x0u));
  /* 106e60c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e60c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e60c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e60c6 call 0x106e27f0 */
  push32(0x106e60cbu); f_106e27f0();
  /* 106e60cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e60ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e60d1 jne 0x106e60d4 */
  if (!C.zf) goto L_106e60d4;
  /* 106e60d3 int3  */
  x86_unimpl("int3 @ 0x106e60d3");
L_106e60d4:;
  /* 106e60d4 cmp dword ptr [0x1070f4b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e60db je 0x106e60ef */
  if (C.zf) goto L_106e60ef;
  /* 106e60dd cmp dword ptr [0x1070f4b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e60e4 jne 0x106e6128 */
  if (!C.zf) goto L_106e6128;
  /* 106e60e6 cmp dword ptr [0x1070f4b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1070f4b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e60ed jne 0x106e6128 */
  if (!C.zf) goto L_106e6128;
L_106e60ef:;
  /* 106e60ef push 0 */
  push32((uint32_t)(0x0u));
  /* 106e60f1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 106e60f4 push ecx */
  push32((uint32_t)(ECX));
  /* 106e60f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e60f8 mov eax, dword ptr [edx*8 + 0x1070dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1070dab4)));
  /* 106e60ff push eax */
  push32((uint32_t)(EAX));
  /* 106e6100 call 0x106e6560 */
  push32(0x106e6105u); f_106e6560();
  /* 106e6105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6108 push eax */
  push32((uint32_t)(EAX));
  /* 106e6109 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e610c mov edx, dword ptr [ecx*8 + 0x1070dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1070dab4)));
  /* 106e6113 push edx */
  push32((uint32_t)(EDX));
  /* 106e6114 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 106e6116 call dword ptr [0x107122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122c8))), 0x106e611cu);
  /* 106e611c push eax */
  push32((uint32_t)(EAX));
  /* 106e611d call dword ptr [0x107122cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122cc))), 0x106e6123u);
  /* 106e6123 jmp 0x106e6218 */
  goto L_106e6218;
L_106e6128:;
  /* 106e6128 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e612f je 0x106e6218 */
  if (C.zf) goto L_106e6218;
  /* 106e6135 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 106e613a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 106e6140 push eax */
  push32((uint32_t)(EAX));
  /* 106e6141 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e6143 call dword ptr [0x107122e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122e4))), 0x106e6149u);
  /* 106e6149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e614b jne 0x106e6161 */
  if (!C.zf) goto L_106e6161;
  /* 106e614d push 0x1070a404 */
  push32((uint32_t)(0x1070a404u));
  /* 106e6152 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 106e6158 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6159 call 0x106e66e0 */
  push32(0x106e615eu); f_106e66e0();
  /* 106e615e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e6161:;
  /* 106e6161 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 106e6167 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106e616a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e616d push eax */
  push32((uint32_t)(EAX));
  /* 106e616e call 0x106e6560 */
  push32(0x106e6173u); f_106e6560();
  /* 106e6173 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6176 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6179 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e617c jbe 0x106e61aa */
  if ((C.cf||C.zf)) goto L_106e61aa;
  /* 106e617e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 106e6184 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6185 call 0x106e6560 */
  push32(0x106e618au); f_106e6560();
  /* 106e618a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e618d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e6190 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 106e6194 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e6197 push 3 */
  push32((uint32_t)(0x3u));
  /* 106e6199 push 0x1070a400 */
  push32((uint32_t)(0x1070a400u));
  /* 106e619e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e61a1 push ecx */
  push32((uint32_t)(ECX));
  /* 106e61a2 call 0x106e6f50 */
  push32(0x106e61a7u); f_106e6f50();
  /* 106e61a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e61aa:;
  /* 106e61aa push 0x1070ae58 */
  push32((uint32_t)(0x1070ae58u));
  /* 106e61af lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 106e61b5 push edx */
  push32((uint32_t)(EDX));
  /* 106e61b6 call 0x106e66e0 */
  push32(0x106e61bbu); f_106e66e0();
  /* 106e61bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e61be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e61c1 push eax */
  push32((uint32_t)(EAX));
  /* 106e61c2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 106e61c8 push ecx */
  push32((uint32_t)(ECX));
  /* 106e61c9 call 0x106e66f0 */
  push32(0x106e61ceu); f_106e66f0();
  /* 106e61ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e61d1 push 0x1070a378 */
  push32((uint32_t)(0x1070a378u));
  /* 106e61d6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 106e61dc push edx */
  push32((uint32_t)(EDX));
  /* 106e61dd call 0x106e66f0 */
  push32(0x106e61e2u); f_106e66f0();
  /* 106e61e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e61e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e61e8 mov ecx, dword ptr [eax*8 + 0x1070dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1070dab4)));
  /* 106e61ef push ecx */
  push32((uint32_t)(ECX));
  /* 106e61f0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 106e61f6 push edx */
  push32((uint32_t)(EDX));
  /* 106e61f7 call 0x106e66f0 */
  push32(0x106e61fcu); f_106e66f0();
  /* 106e61fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e61ff push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 106e6204 push 0x1070ae30 */
  push32((uint32_t)(0x1070ae30u));
  /* 106e6209 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 106e620f push eax */
  push32((uint32_t)(EAX));
  /* 106e6210 call 0x106e6e90 */
  push32(0x106e6215u); f_106e6e90();
  /* 106e6215 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e6218:;
  /* 106e6218 pop edi */
  EDI = (pop32());
  /* 106e6219 pop esi */
  ESI = (pop32());
  /* 106e621a pop ebx */
  EBX = (pop32());
  /* 106e621b mov esp, ebp */
  ESP = (EBP);
  /* 106e621d pop ebp */
  EBP = (pop32());
  /* 106e621e ret  */
  ESPCHK(0x106e6060u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x106e6220 (80 bytes, 27 insns) */
void f_106e6220(void) {
  FTRACE(0x106e6220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6220 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6221 mov ebp, esp */
  EBP = (ESP);
  /* 106e6223 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6224 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106e622b jmp 0x106e6236 */
  goto L_106e6236;
L_106e622d:;
  /* 106e622d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6230 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6233 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e6236:;
  /* 106e6236 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e623a jae 0x106e624f */
  if (!C.cf) goto L_106e624f;
  /* 106e623c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e623f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6242 cmp edx, dword ptr [ecx*8 + 0x1070dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1070dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6249 jne 0x106e624d */
  if (!C.zf) goto L_106e624d;
  /* 106e624b jmp 0x106e624f */
  goto L_106e624f;
L_106e624d:;
  /* 106e624d jmp 0x106e622d */
  goto L_106e622d;
L_106e624f:;
  /* 106e624f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6252 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6255 cmp ecx, dword ptr [eax*8 + 0x1070dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1070dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e625c jne 0x106e626a */
  if (!C.zf) goto L_106e626a;
  /* 106e625e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6261 mov eax, dword ptr [edx*8 + 0x1070dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1070dab4)));
  /* 106e6268 jmp 0x106e626c */
  goto L_106e626c;
L_106e626a:;
  /* 106e626a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e626c:;
  /* 106e626c mov esp, ebp */
  ESP = (EBP);
  /* 106e626e pop ebp */
  EBP = (pop32());
  /* 106e626f ret  */
  ESPCHK(0x106e6220u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x106e6270 (66 bytes, 28 insns) */
void f_106e6270(void) {
  FTRACE(0x106e6270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6270 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6271 mov ebp, esp */
  EBP = (ESP);
  /* 106e6273 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6277 jne 0x106e6297 */
  if (!C.zf) goto L_106e6297;
  /* 106e6279 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e627d jge 0x106e6297 */
  if ((C.sf==C.of)) goto L_106e6297;
  /* 106e627f push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6281 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e6284 push eax */
  push32((uint32_t)(EAX));
  /* 106e6285 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e6288 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6289 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e628c push edx */
  push32((uint32_t)(EDX));
  /* 106e628d call 0x106e62c0 */
  push32(0x106e6292u); f_106e62c0();
  /* 106e6292 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6295 jmp 0x106e62ad */
  goto L_106e62ad;
L_106e6297:;
  /* 106e6297 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e6299 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e629c push eax */
  push32((uint32_t)(EAX));
  /* 106e629d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e62a0 push ecx */
  push32((uint32_t)(ECX));
  /* 106e62a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e62a4 push edx */
  push32((uint32_t)(EDX));
  /* 106e62a5 call 0x106e62c0 */
  push32(0x106e62aau); f_106e62c0();
  /* 106e62aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e62ad:;
  /* 106e62ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e62b0 pop ebp */
  EBP = (pop32());
  /* 106e62b1 ret  */
  ESPCHK(0x106e6270u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x106e62c0 (194 bytes, 71 insns) */
void f_106e62c0(void) {
  FTRACE(0x106e62c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e62c0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e62c1 mov ebp, esp */
  EBP = (ESP);
  /* 106e62c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e62c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e62c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e62cc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e62d0 je 0x106e62e9 */
  if (C.zf) goto L_106e62e9;
  /* 106e62d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e62d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 106e62d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e62db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e62de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e62e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e62e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106e62e6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_106e62e9:;
  /* 106e62e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e62ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_106e62ef:;
  /* 106e62ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e62f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e62f4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106e62f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106e62fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e62fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e62ff div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 106e6302 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106e6305 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6309 jbe 0x106e6321 */
  if ((C.cf||C.zf)) goto L_106e6321;
  /* 106e630b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e630e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6314 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106e6316 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6319 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e631c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e631f jmp 0x106e6335 */
  goto L_106e6335;
L_106e6321:;
  /* 106e6321 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e6324 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6327 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e632a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106e632c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e632f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6332 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106e6335:;
  /* 106e6335 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6339 ja 0x106e62ef */
  if ((!C.cf&&!C.zf)) goto L_106e62ef;
  /* 106e633b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e633e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106e6341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6344 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e6347 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e634a:;
  /* 106e634a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e634d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e634f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 106e6352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6355 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6358 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e635a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106e635c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e635f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 106e6362 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 106e6364 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6367 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e636a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e636d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6370 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6373 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e6376 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6379 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e637c jb 0x106e634a */
  if (C.cf) goto L_106e634a;
  /* 106e637e mov esp, ebp */
  ESP = (EBP);
  /* 106e6380 pop ebp */
  EBP = (pop32());
  /* 106e6381 ret  */
  ESPCHK(0x106e62c0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x106e6390 (63 bytes, 24 insns) */
void f_106e6390(void) {
  FTRACE(0x106e6390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6390 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6391 mov ebp, esp */
  EBP = (ESP);
  /* 106e6393 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6394 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6398 jne 0x106e63a9 */
  if (!C.zf) goto L_106e63a9;
  /* 106e639a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e639e jge 0x106e63a9 */
  if ((C.sf==C.of)) goto L_106e63a9;
  /* 106e63a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106e63a7 jmp 0x106e63b0 */
  goto L_106e63b0;
L_106e63a9:;
  /* 106e63a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106e63b0:;
  /* 106e63b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e63b3 push eax */
  push32((uint32_t)(EAX));
  /* 106e63b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e63b7 push ecx */
  push32((uint32_t)(ECX));
  /* 106e63b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e63bb push edx */
  push32((uint32_t)(EDX));
  /* 106e63bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e63bf push eax */
  push32((uint32_t)(EAX));
  /* 106e63c0 call 0x106e62c0 */
  push32(0x106e63c5u); f_106e62c0();
  /* 106e63c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e63c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e63cb mov esp, ebp */
  ESP = (EBP);
  /* 106e63cd pop ebp */
  EBP = (pop32());
  /* 106e63ce ret  */
  ESPCHK(0x106e6390u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x106e63d0 (30 bytes, 14 insns) */
void f_106e63d0(void) {
  FTRACE(0x106e63d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e63d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e63d1 mov ebp, esp */
  EBP = (ESP);
  /* 106e63d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e63d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e63d8 push eax */
  push32((uint32_t)(EAX));
  /* 106e63d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e63dc push ecx */
  push32((uint32_t)(ECX));
  /* 106e63dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e63e0 push edx */
  push32((uint32_t)(EDX));
  /* 106e63e1 call 0x106e62c0 */
  push32(0x106e63e6u); f_106e62c0();
  /* 106e63e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e63e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e63ec pop ebp */
  EBP = (pop32());
  /* 106e63ed ret  */
  ESPCHK(0x106e63d0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x106e63f0 (72 bytes, 28 insns) */
void f_106e63f0(void) {
  FTRACE(0x106e63f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e63f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e63f1 mov ebp, esp */
  EBP = (ESP);
  /* 106e63f3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e63f4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e63f8 jne 0x106e6411 */
  if (!C.zf) goto L_106e6411;
  /* 106e63fa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e63fe jg 0x106e6411 */
  if ((!C.zf&&C.sf==C.of)) goto L_106e6411;
  /* 106e6400 jl 0x106e6408 */
  if ((C.sf!=C.of)) goto L_106e6408;
  /* 106e6402 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6406 jae 0x106e6411 */
  if (!C.cf) goto L_106e6411;
L_106e6408:;
  /* 106e6408 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 106e640f jmp 0x106e6418 */
  goto L_106e6418;
L_106e6411:;
  /* 106e6411 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106e6418:;
  /* 106e6418 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e641b push eax */
  push32((uint32_t)(EAX));
  /* 106e641c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e641f push ecx */
  push32((uint32_t)(ECX));
  /* 106e6420 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e6423 push edx */
  push32((uint32_t)(EDX));
  /* 106e6424 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e6427 push eax */
  push32((uint32_t)(EAX));
  /* 106e6428 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e642b push ecx */
  push32((uint32_t)(ECX));
  /* 106e642c call 0x106e6440 */
  push32(0x106e6431u); f_106e6440();
  /* 106e6431 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e6434 mov esp, ebp */
  ESP = (EBP);
  /* 106e6436 pop ebp */
  EBP = (pop32());
  /* 106e6437 ret  */
  ESPCHK(0x106e63f0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x106e6440 (242 bytes, 91 insns) */
void f_106e6440(void) {
  FTRACE(0x106e6440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6440 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6441 mov ebp, esp */
  EBP = (ESP);
  /* 106e6443 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e6446 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e6449 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e644c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6450 je 0x106e6474 */
  if (C.zf) goto L_106e6474;
  /* 106e6452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6455 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 106e6458 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e645b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e645e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e6461 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6464 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 106e6466 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e6469 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e646c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106e646e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106e6471 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_106e6474:;
  /* 106e6474 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6477 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_106e647a:;
  /* 106e647a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e647d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e647f push ecx */
  push32((uint32_t)(ECX));
  /* 106e6480 push eax */
  push32((uint32_t)(EAX));
  /* 106e6481 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e6484 push edx */
  push32((uint32_t)(EDX));
  /* 106e6485 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6488 push eax */
  push32((uint32_t)(EAX));
  /* 106e6489 call 0x106ea3c0 */
  push32(0x106e648eu); f_106ea3c0();
  /* 106e648e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e6491 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e6494 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e6496 push edx */
  push32((uint32_t)(EDX));
  /* 106e6497 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6498 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e649b push eax */
  push32((uint32_t)(EAX));
  /* 106e649c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e649f push ecx */
  push32((uint32_t)(ECX));
  /* 106e64a0 call 0x106ea350 */
  push32(0x106e64a5u); f_106ea350();
  /* 106e64a5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 106e64a8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 106e64ab cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e64af jbe 0x106e64c7 */
  if ((C.cf||C.zf)) goto L_106e64c7;
  /* 106e64b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e64b4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e64b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e64ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106e64bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e64bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e64c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 106e64c5 jmp 0x106e64db */
  goto L_106e64db;
L_106e64c7:;
  /* 106e64c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e64ca add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e64cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e64d0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106e64d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e64d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e64d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_106e64db:;
  /* 106e64db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e64df ja 0x106e647a */
  if ((!C.cf&&!C.zf)) goto L_106e647a;
  /* 106e64e1 jb 0x106e64e9 */
  if (C.cf) goto L_106e64e9;
  /* 106e64e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e64e7 ja 0x106e647a */
  if ((!C.cf&&!C.zf)) goto L_106e647a;
L_106e64e9:;
  /* 106e64e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e64ec mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 106e64ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e64f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e64f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e64f8:;
  /* 106e64f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e64fb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e64fd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 106e6500 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6503 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6506 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e6508 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 106e650a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e650d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 106e6510 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 106e6512 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6515 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e6518 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 106e651b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e651e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6521 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e6524 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6527 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e652a jb 0x106e64f8 */
  if (C.cf) goto L_106e64f8;
  /* 106e652c mov esp, ebp */
  ESP = (EBP);
  /* 106e652e pop ebp */
  EBP = (pop32());
  /* 106e652f ret 0x14 */
  ESPCHK(0x106e6440u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x106e6540 (31 bytes, 15 insns) */
void f_106e6540(void) {
  FTRACE(0x106e6540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6540 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6541 mov ebp, esp */
  EBP = (ESP);
  /* 106e6543 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e6545 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e6548 push eax */
  push32((uint32_t)(EAX));
  /* 106e6549 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e654c push ecx */
  push32((uint32_t)(ECX));
  /* 106e654d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e6550 push edx */
  push32((uint32_t)(EDX));
  /* 106e6551 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6554 push eax */
  push32((uint32_t)(EAX));
  /* 106e6555 call 0x106e6440 */
  push32(0x106e655au); f_106e6440();
  /* 106e655a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e655d pop ebp */
  EBP = (pop32());
  /* 106e655e ret  */
  ESPCHK(0x106e6540u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x106e6560 (123 bytes, 44 insns) */
void f_106e6560(void) {
  FTRACE(0x106e6560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6560 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106e6564 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106e656a je 0x106e6580 */
  if (C.zf) goto L_106e6580;
L_106e656c:;
  /* 106e656c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 106e656e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106e656f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106e6571 je 0x106e65b3 */
  if (C.zf) goto L_106e65b3;
  /* 106e6573 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106e6579 jne 0x106e656c */
  if (!C.zf) goto L_106e656c;
  /* 106e657b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_106e6580:;
  /* 106e6580 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106e6582 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 106e6587 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6589 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e658c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e658e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6591 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 106e6596 je 0x106e6580 */
  if (C.zf) goto L_106e6580;
  /* 106e6598 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 106e659b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106e659d je 0x106e65d1 */
  if (C.zf) goto L_106e65d1;
  /* 106e659f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 106e65a1 je 0x106e65c7 */
  if (C.zf) goto L_106e65c7;
  /* 106e65a3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 106e65a8 je 0x106e65bd */
  if (C.zf) goto L_106e65bd;
  /* 106e65aa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 106e65af je 0x106e65b3 */
  if (C.zf) goto L_106e65b3;
  /* 106e65b1 jmp 0x106e6580 */
  goto L_106e6580;
L_106e65b3:;
  /* 106e65b3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 106e65b6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106e65ba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e65bc ret  */
  ESPCHK(0x106e6560u, _esp0);
  ESP += 4; return;
L_106e65bd:;
  /* 106e65bd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 106e65c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106e65c4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e65c6 ret  */
  ESPCHK(0x106e6560u, _esp0);
  ESP += 4; return;
L_106e65c7:;
  /* 106e65c7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 106e65ca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106e65ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e65d0 ret  */
  ESPCHK(0x106e6560u, _esp0);
  ESP += 4; return;
L_106e65d1:;
  /* 106e65d1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 106e65d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106e65d8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e65da ret  */
  ESPCHK(0x106e6560u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e0 @ 0x106e65e0 (249 bytes, 93 insns) */
void f_106e65e0(void) {
  FTRACE(0x106e65e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e65e0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e65e1 mov ebp, esp */
  EBP = (ESP);
  /* 106e65e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e65e6 push ebx */
  push32((uint32_t)(EBX));
  /* 106e65e7 push esi */
  push32((uint32_t)(ESI));
  /* 106e65e8 push edi */
  push32((uint32_t)(EDI));
  /* 106e65e9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 106e65ec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 106e65ef lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 106e65f2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_106e65f5:;
  /* 106e65f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e65f9 jne 0x106e6619 */
  if (!C.zf) goto L_106e6619;
  /* 106e65fb push 0x1070ae90 */
  push32((uint32_t)(0x1070ae90u));
  /* 106e6600 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e6602 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 106e6604 push 0x1070ae84 */
  push32((uint32_t)(0x1070ae84u));
  /* 106e6609 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e660b call 0x106e27f0 */
  push32(0x106e6610u); f_106e27f0();
  /* 106e6610 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6613 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6616 jne 0x106e6619 */
  if (!C.zf) goto L_106e6619;
  /* 106e6618 int3  */
  x86_unimpl("int3 @ 0x106e6618");
L_106e6619:;
  /* 106e6619 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e661b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e661d jne 0x106e65f5 */
  if (!C.zf) goto L_106e65f5;
L_106e661f:;
  /* 106e661f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6623 jne 0x106e6643 */
  if (!C.zf) goto L_106e6643;
  /* 106e6625 push 0x1070ae74 */
  push32((uint32_t)(0x1070ae74u));
  /* 106e662a push 0 */
  push32((uint32_t)(0x0u));
  /* 106e662c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 106e662e push 0x1070ae84 */
  push32((uint32_t)(0x1070ae84u));
  /* 106e6633 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e6635 call 0x106e27f0 */
  push32(0x106e663au); f_106e27f0();
  /* 106e663a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e663d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6640 jne 0x106e6643 */
  if (!C.zf) goto L_106e6643;
  /* 106e6642 int3  */
  x86_unimpl("int3 @ 0x106e6642");
L_106e6643:;
  /* 106e6643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e6645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e6647 jne 0x106e661f */
  if (!C.zf) goto L_106e661f;
  /* 106e6649 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e664c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 106e6653 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6659 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106e665c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e665f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6662 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 106e6664 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6667 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e666a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 106e666d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 106e6670 push edx */
  push32((uint32_t)(EDX));
  /* 106e6671 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e6674 push eax */
  push32((uint32_t)(EAX));
  /* 106e6675 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6678 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6679 call 0x106ea6c0 */
  push32(0x106e667eu); f_106ea6c0();
  /* 106e667e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6681 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106e6684 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6687 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e668a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e668d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6690 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 106e6693 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6696 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e669a jl 0x106e66be */
  if ((C.sf!=C.of)) goto L_106e66be;
  /* 106e669c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e669f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e66a1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 106e66a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e66a6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e66ac mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 106e66af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e66b2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e66b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e66b7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e66ba mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 106e66bc jmp 0x106e66cf */
  goto L_106e66cf;
L_106e66be:;
  /* 106e66be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e66c1 push eax */
  push32((uint32_t)(EAX));
  /* 106e66c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e66c4 call 0x106ea440 */
  push32(0x106e66c9u); f_106ea440();
  /* 106e66c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e66cc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_106e66cf:;
  /* 106e66cf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e66d2 pop edi */
  EDI = (pop32());
  /* 106e66d3 pop esi */
  ESI = (pop32());
  /* 106e66d4 pop ebx */
  EBX = (pop32());
  /* 106e66d5 mov esp, ebp */
  ESP = (EBP);
  /* 106e66d7 pop ebp */
  EBP = (pop32());
  /* 106e66d8 ret  */
  ESPCHK(0x106e65e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x106e66e0 (7 bytes, 3 insns) */
void f_106e66e0(void) {
  FTRACE(0x106e66e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e66e0 push edi */
  push32((uint32_t)(EDI));
  /* 106e66e1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 106e66e5 jmp 0x106e6751 */
  jmp_ind(0x106e6751u); return;
}

/* FUN_100066f0 @ 0x106e66f0 (224 bytes, 84 insns) */
void f_106e66f0(void) {
  FTRACE(0x106e66f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e66f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106e66f4 push edi */
  push32((uint32_t)(EDI));
  /* 106e66f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106e66fb je 0x106e670c */
  if (C.zf) goto L_106e670c;
L_106e66fd:;
  /* 106e66fd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 106e66ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106e6700 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106e6702 je 0x106e673f */
  if (C.zf) goto L_106e673f;
  /* 106e6704 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106e670a jne 0x106e66fd */
  if (!C.zf) goto L_106e66fd;
L_106e670c:;
  /* 106e670c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106e670e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 106e6713 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6715 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e6718 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e671a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e671d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 106e6722 je 0x106e670c */
  if (C.zf) goto L_106e670c;
  /* 106e6724 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 106e6727 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106e6729 je 0x106e674e */
  if (C.zf) goto L_106e674e;
  /* 106e672b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 106e672d je 0x106e6749 */
  if (C.zf) goto L_106e6749;
  /* 106e672f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 106e6734 je 0x106e6744 */
  if (C.zf) goto L_106e6744;
  /* 106e6736 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 106e673b je 0x106e673f */
  if (C.zf) goto L_106e673f;
  /* 106e673d jmp 0x106e670c */
  goto L_106e670c;
L_106e673f:;
  /* 106e673f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 106e6742 jmp 0x106e6751 */
  goto L_106e6751;
L_106e6744:;
  /* 106e6744 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 106e6747 jmp 0x106e6751 */
  goto L_106e6751;
L_106e6749:;
  /* 106e6749 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 106e674c jmp 0x106e6751 */
  goto L_106e6751;
L_106e674e:;
  /* 106e674e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_106e6751:;
  /* 106e6751 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 106e6755 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106e675b je 0x106e6776 */
  if (C.zf) goto L_106e6776;
L_106e675d:;
  /* 106e675d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 106e675f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 106e6760 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 106e6762 je 0x106e67c8 */
  if (C.zf) goto L_106e67c8;
  /* 106e6764 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 106e6766 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106e6767 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 106e676d jne 0x106e675d */
  if (!C.zf) goto L_106e675d;
  /* 106e676f jmp 0x106e6776 */
  goto L_106e6776;
L_106e6771:;
  /* 106e6771 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106e6773 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_106e6776:;
  /* 106e6776 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 106e677b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 106e677d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e677f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e6782 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e6784 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e6786 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6789 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 106e678e je 0x106e6771 */
  if (C.zf) goto L_106e6771;
  /* 106e6790 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 106e6792 je 0x106e67c8 */
  if (C.zf) goto L_106e67c8;
  /* 106e6794 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 106e6796 je 0x106e67bf */
  if (C.zf) goto L_106e67bf;
  /* 106e6798 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 106e679e je 0x106e67b2 */
  if (C.zf) goto L_106e67b2;
  /* 106e67a0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 106e67a6 je 0x106e67aa */
  if (C.zf) goto L_106e67aa;
  /* 106e67a8 jmp 0x106e6771 */
  goto L_106e6771;
L_106e67aa:;
  /* 106e67aa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106e67ac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106e67b0 pop edi */
  EDI = (pop32());
  /* 106e67b1 ret  */
  ESPCHK(0x106e66f0u, _esp0);
  ESP += 4; return;
L_106e67b2:;
  /* 106e67b2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 106e67b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106e67b9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 106e67bd pop edi */
  EDI = (pop32());
  /* 106e67be ret  */
  ESPCHK(0x106e66f0u, _esp0);
  ESP += 4; return;
L_106e67bf:;
  /* 106e67bf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 106e67c2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106e67c6 pop edi */
  EDI = (pop32());
  /* 106e67c7 ret  */
  ESPCHK(0x106e66f0u, _esp0);
  ESP += 4; return;
L_106e67c8:;
  /* 106e67c8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 106e67ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106e67ce pop edi */
  EDI = (pop32());
  /* 106e67cf ret  */
  ESPCHK(0x106e66f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067d0 @ 0x106e67d0 (243 bytes, 91 insns) */
void f_106e67d0(void) {
  FTRACE(0x106e67d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e67d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e67d1 mov ebp, esp */
  EBP = (ESP);
  /* 106e67d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e67d6 push ebx */
  push32((uint32_t)(EBX));
  /* 106e67d7 push esi */
  push32((uint32_t)(ESI));
  /* 106e67d8 push edi */
  push32((uint32_t)(EDI));
  /* 106e67d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 106e67dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_106e67df:;
  /* 106e67df cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e67e3 jne 0x106e6803 */
  if (!C.zf) goto L_106e6803;
  /* 106e67e5 push 0x1070ae90 */
  push32((uint32_t)(0x1070ae90u));
  /* 106e67ea push 0 */
  push32((uint32_t)(0x0u));
  /* 106e67ec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 106e67ee push 0x1070aea0 */
  push32((uint32_t)(0x1070aea0u));
  /* 106e67f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e67f5 call 0x106e27f0 */
  push32(0x106e67fau); f_106e27f0();
  /* 106e67fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e67fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6800 jne 0x106e6803 */
  if (!C.zf) goto L_106e6803;
  /* 106e6802 int3  */
  x86_unimpl("int3 @ 0x106e6802");
L_106e6803:;
  /* 106e6803 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e6805 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e6807 jne 0x106e67df */
  if (!C.zf) goto L_106e67df;
L_106e6809:;
  /* 106e6809 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e680d jne 0x106e682d */
  if (!C.zf) goto L_106e682d;
  /* 106e680f push 0x1070ae74 */
  push32((uint32_t)(0x1070ae74u));
  /* 106e6814 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e6816 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 106e6818 push 0x1070aea0 */
  push32((uint32_t)(0x1070aea0u));
  /* 106e681d push 2 */
  push32((uint32_t)(0x2u));
  /* 106e681f call 0x106e27f0 */
  push32(0x106e6824u); f_106e27f0();
  /* 106e6824 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6827 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e682a jne 0x106e682d */
  if (!C.zf) goto L_106e682d;
  /* 106e682c int3  */
  x86_unimpl("int3 @ 0x106e682c");
L_106e682d:;
  /* 106e682d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e682f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e6831 jne 0x106e6809 */
  if (!C.zf) goto L_106e6809;
  /* 106e6833 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6836 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 106e683d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6840 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6843 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 106e6846 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6849 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e684c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 106e684e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6851 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e6854 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 106e6857 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 106e685a push ecx */
  push32((uint32_t)(ECX));
  /* 106e685b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e685e push edx */
  push32((uint32_t)(EDX));
  /* 106e685f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6862 push eax */
  push32((uint32_t)(EAX));
  /* 106e6863 call 0x106ea6c0 */
  push32(0x106e6868u); f_106ea6c0();
  /* 106e6868 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e686b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 106e686e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6871 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e6874 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e6877 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e687a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 106e687d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6880 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6884 jl 0x106e68a8 */
  if ((C.sf!=C.of)) goto L_106e68a8;
  /* 106e6886 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e6889 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e688b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 106e688e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 106e6890 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 106e6896 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 106e6899 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e689c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e689e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e68a1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e68a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 106e68a6 jmp 0x106e68b9 */
  goto L_106e68b9;
L_106e68a8:;
  /* 106e68a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 106e68ab push edx */
  push32((uint32_t)(EDX));
  /* 106e68ac push 0 */
  push32((uint32_t)(0x0u));
  /* 106e68ae call 0x106ea440 */
  push32(0x106e68b3u); f_106ea440();
  /* 106e68b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e68b6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_106e68b9:;
  /* 106e68b9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 106e68bc pop edi */
  EDI = (pop32());
  /* 106e68bd pop esi */
  ESI = (pop32());
  /* 106e68be pop ebx */
  EBX = (pop32());
  /* 106e68bf mov esp, ebp */
  ESP = (EBP);
  /* 106e68c1 pop ebp */
  EBP = (pop32());
  /* 106e68c2 ret  */
  ESPCHK(0x106e67d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068d0 @ 0x106e68d0 (47 bytes, 17 insns) */
void f_106e68d0(void) {
  FTRACE(0x106e68d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e68d0 push ecx */
  push32((uint32_t)(ECX));
  /* 106e68d1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e68d6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 106e68da jb 0x106e68f0 */
  if (C.cf) goto L_106e68f0;
L_106e68dc:;
  /* 106e68dc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e68e2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e68e7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 106e68e9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e68ee jae 0x106e68dc */
  if (!C.cf) goto L_106e68dc;
L_106e68f0:;
  /* 106e68f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e68f2 mov eax, esp */
  EAX = (ESP);
  /* 106e68f4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 106e68f6 mov esp, ecx */
  ESP = (ECX);
  /* 106e68f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e68fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e68fd push eax */
  push32((uint32_t)(EAX));
  /* 106e68fe ret  */
  ESPCHK(0x106e68d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006900 @ 0x106e6900 (507 bytes, 151 insns) [1 switch table(s)] */
void f_106e6900(void) {
  FTRACE(0x106e6900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6900 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6901 mov ebp, esp */
  EBP = (ESP);
  /* 106e6903 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e6906 push esi */
  push32((uint32_t)(ESI));
  /* 106e6907 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e690b je 0x106e6913 */
  if (C.zf) goto L_106e6913;
  /* 106e690d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6911 jne 0x106e6918 */
  if (!C.zf) goto L_106e6918;
L_106e6913:;
  /* 106e6913 jmp 0x106e6ae8 */
  goto L_106e6ae8;
L_106e6918:;
  /* 106e6918 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e691c je 0x106e6934 */
  if (C.zf) goto L_106e6934;
  /* 106e691e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6922 je 0x106e6934 */
  if (C.zf) goto L_106e6934;
  /* 106e6924 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6928 je 0x106e6934 */
  if (C.zf) goto L_106e6934;
  /* 106e692a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e692e jne 0x106e6a11 */
  if (!C.zf) goto L_106e6a11;
L_106e6934:;
  /* 106e6934 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6936 call 0x106e7130 */
  push32(0x106e693bu); f_106e7130();
  /* 106e693b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e693e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6942 je 0x106e694a */
  if (C.zf) goto L_106e694a;
  /* 106e6944 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6948 jne 0x106e698f */
  if (!C.zf) goto L_106e698f;
L_106e694a:;
  /* 106e694a cmp dword ptr [0x1070f634], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f634))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6951 jne 0x106e698f */
  if (!C.zf) goto L_106e698f;
  /* 106e6953 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6955 push 0x106e6b30 */
  push32((uint32_t)(0x106e6b30u));
  /* 106e695a call dword ptr [0x10712354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712354))), 0x106e6960u);
  /* 106e6960 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6963 jne 0x106e6971 */
  if (!C.zf) goto L_106e6971;
  /* 106e6965 mov dword ptr [0x1070f634], 1 */
  w32((uint32_t)(0x1070f634), (0x1u));
  /* 106e696f jmp 0x106e698f */
  goto L_106e698f;
L_106e6971:;
  /* 106e6971 call dword ptr [0x1071230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071230c))), 0x106e6977u);
  /* 106e6977 mov esi, eax */
  ESI = (EAX);
  /* 106e6979 call 0x106eb610 */
  push32(0x106e697eu); f_106eb610();
  /* 106e697e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 106e6980 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6982 call 0x106e71d0 */
  push32(0x106e6987u); f_106e71d0();
  /* 106e6987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e698a jmp 0x106e6ae8 */
  goto L_106e6ae8;
L_106e698f:;
  /* 106e698f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6992 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106e6995 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e6998 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e699b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 106e699e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e69a2 ja 0x106e6a02 */
  if ((!C.cf&&!C.zf)) goto L_106e6a02;
  /* 106e69a4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e69a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e69a9 mov dl, byte ptr [eax + 0x106e6b0f] */
  DL = (r8((uint32_t)(EAX + 0x106e6b0f)));
  /* 106e69af jmp dword ptr [edx*4 + 0x106e6afb] */
  switch (EDX) {
    case 0: goto L_106e69b6;
    case 1: goto L_106e69f0;
    case 2: goto L_106e69ca;
    case 3: goto L_106e69dd;
    case 4: goto L_106e6a02;
    default: x86_unimpl("switch@0x106e69af out of table"); return;
  }
L_106e69b6:;
  /* 106e69b6 mov ecx, dword ptr [0x1070f624] */
  ECX = (r32((uint32_t)(0x1070f624)));
  /* 106e69bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106e69bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e69c2 mov dword ptr [0x1070f624], edx */
  w32((uint32_t)(0x1070f624), (EDX));
  /* 106e69c8 jmp 0x106e6a02 */
  goto L_106e6a02;
L_106e69ca:;
  /* 106e69ca mov eax, dword ptr [0x1070f628] */
  EAX = (r32((uint32_t)(0x1070f628)));
  /* 106e69cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e69d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e69d5 mov dword ptr [0x1070f628], ecx */
  w32((uint32_t)(0x1070f628), (ECX));
  /* 106e69db jmp 0x106e6a02 */
  goto L_106e6a02;
L_106e69dd:;
  /* 106e69dd mov edx, dword ptr [0x1070f62c] */
  EDX = (r32((uint32_t)(0x1070f62c)));
  /* 106e69e3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 106e69e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e69e9 mov dword ptr [0x1070f62c], eax */
  w32((uint32_t)(0x1070f62c), (EAX));
  /* 106e69ee jmp 0x106e6a02 */
  goto L_106e6a02;
L_106e69f0:;
  /* 106e69f0 mov ecx, dword ptr [0x1070f630] */
  ECX = (r32((uint32_t)(0x1070f630)));
  /* 106e69f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106e69f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e69fc mov dword ptr [0x1070f630], edx */
  w32((uint32_t)(0x1070f630), (EDX));
L_106e6a02:;
  /* 106e6a02 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6a04 call 0x106e71d0 */
  push32(0x106e6a09u); f_106e71d0();
  /* 106e6a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6a0c jmp 0x106e6ae3 */
  goto L_106e6ae3;
L_106e6a11:;
  /* 106e6a11 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6a15 je 0x106e6a28 */
  if (C.zf) goto L_106e6a28;
  /* 106e6a17 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6a1b je 0x106e6a28 */
  if (C.zf) goto L_106e6a28;
  /* 106e6a1d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6a21 je 0x106e6a28 */
  if (C.zf) goto L_106e6a28;
  /* 106e6a23 jmp 0x106e6ae8 */
  goto L_106e6ae8;
L_106e6a28:;
  /* 106e6a28 call 0x106e3170 */
  push32(0x106e6a2du); f_106e3170();
  /* 106e6a2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e6a30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6a33 cmp dword ptr [eax + 0x50], 0x1070dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1070dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6a3a jne 0x106e6a85 */
  if (!C.zf) goto L_106e6a85;
  /* 106e6a3c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 106e6a41 push 0x1070aeac */
  push32((uint32_t)(0x1070aeacu));
  /* 106e6a46 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e6a48 mov ecx, dword ptr [0x1070dc80] */
  ECX = (r32((uint32_t)(0x1070dc80)));
  /* 106e6a4e push ecx */
  push32((uint32_t)(ECX));
  /* 106e6a4f call 0x106e3730 */
  push32(0x106e6a54u); f_106e3730();
  /* 106e6a54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6a57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6a5a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 106e6a5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6a60 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6a64 je 0x106e6a83 */
  if (C.zf) goto L_106e6a83;
  /* 106e6a66 mov ecx, dword ptr [0x1070dc80] */
  ECX = (r32((uint32_t)(0x1070dc80)));
  /* 106e6a6c push ecx */
  push32((uint32_t)(ECX));
  /* 106e6a6d push 0x1070dc00 */
  push32((uint32_t)(0x1070dc00u));
  /* 106e6a72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6a75 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 106e6a78 push eax */
  push32((uint32_t)(EAX));
  /* 106e6a79 call 0x106ea010 */
  push32(0x106e6a7eu); f_106ea010();
  /* 106e6a7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6a81 jmp 0x106e6a85 */
  goto L_106e6a85;
L_106e6a83:;
  /* 106e6a83 jmp 0x106e6ae8 */
  goto L_106e6ae8;
L_106e6a85:;
  /* 106e6a85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6a88 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106e6a8b push edx */
  push32((uint32_t)(EDX));
  /* 106e6a8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6a8f push eax */
  push32((uint32_t)(EAX));
  /* 106e6a90 call 0x106e6e10 */
  push32(0x106e6a95u); f_106e6e10();
  /* 106e6a95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6a98 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e6a9b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6a9f jne 0x106e6aa3 */
  if (!C.zf) goto L_106e6aa3;
  /* 106e6aa1 jmp 0x106e6ae8 */
  goto L_106e6ae8;
L_106e6aa3:;
  /* 106e6aa3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6aa6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 106e6aa9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_106e6aac:;
  /* 106e6aac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6aaf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e6ab2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6ab5 jne 0x106e6ae3 */
  if (!C.zf) goto L_106e6ae3;
  /* 106e6ab7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6aba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e6abd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 106e6ac0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6ac3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6ac6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106e6ac9 mov edx, dword ptr [0x1070dc84] */
  EDX = (r32((uint32_t)(0x1070dc84)));
  /* 106e6acf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e6ad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6ad5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 106e6ad8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6ada cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6add jb 0x106e6ae1 */
  if (C.cf) goto L_106e6ae1;
  /* 106e6adf jmp 0x106e6ae3 */
  goto L_106e6ae3;
L_106e6ae1:;
  /* 106e6ae1 jmp 0x106e6aac */
  goto L_106e6aac;
L_106e6ae3:;
  /* 106e6ae3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e6ae6 jmp 0x106e6af6 */
  goto L_106e6af6;
L_106e6ae8:;
  /* 106e6ae8 call 0x106eb600 */
  push32(0x106e6aedu); f_106eb600();
  /* 106e6aed mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 106e6af3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106e6af6:;
  /* 106e6af6 pop esi */
  ESI = (pop32());
  /* 106e6af7 mov esp, ebp */
  ESP = (EBP);
  /* 106e6af9 pop ebp */
  EBP = (pop32());
  /* 106e6afa ret  */
  ESPCHK(0x106e6900u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b30 @ 0x106e6b30 (146 bytes, 45 insns) */
void f_106e6b30(void) {
  FTRACE(0x106e6b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6b30 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6b31 mov ebp, esp */
  EBP = (ESP);
  /* 106e6b33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e6b36 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6b38 call 0x106e7130 */
  push32(0x106e6b3du); f_106e7130();
  /* 106e6b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6b40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6b44 jne 0x106e6b5e */
  if (!C.zf) goto L_106e6b5e;
  /* 106e6b46 mov dword ptr [ebp - 8], 0x1070f624 */
  w32((uint32_t)(EBP + -0x8), (0x1070f624u));
  /* 106e6b4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6b50 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 106e6b52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106e6b55 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 106e6b5c jmp 0x106e6b74 */
  goto L_106e6b74;
L_106e6b5e:;
  /* 106e6b5e mov dword ptr [ebp - 8], 0x1070f628 */
  w32((uint32_t)(EBP + -0x8), (0x1070f628u));
  /* 106e6b65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6b68 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e6b6a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e6b6d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_106e6b74:;
  /* 106e6b74 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6b78 jne 0x106e6b88 */
  if (!C.zf) goto L_106e6b88;
  /* 106e6b7a push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6b7c call 0x106e71d0 */
  push32(0x106e6b81u); f_106e71d0();
  /* 106e6b81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6b84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e6b86 jmp 0x106e6bbc */
  goto L_106e6bbc;
L_106e6b88:;
  /* 106e6b88 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6b8c je 0x106e6bad */
  if (C.zf) goto L_106e6bad;
  /* 106e6b8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6b91 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 106e6b97 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6b99 call 0x106e71d0 */
  push32(0x106e6b9eu); f_106e71d0();
  /* 106e6b9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6ba1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6ba4 push edx */
  push32((uint32_t)(EDX));
  /* 106e6ba5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x106e6ba8u);
  /* 106e6ba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6bab jmp 0x106e6bb7 */
  goto L_106e6bb7;
L_106e6bad:;
  /* 106e6bad push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6baf call 0x106e71d0 */
  push32(0x106e6bb4u); f_106e71d0();
  /* 106e6bb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e6bb7:;
  /* 106e6bb7 mov eax, 1 */
  EAX = (0x1u);
L_106e6bbc:;
  /* 106e6bbc mov esp, ebp */
  ESP = (EBP);
  /* 106e6bbe pop ebp */
  EBP = (pop32());
  /* 106e6bbf ret 4 */
  ESPCHK(0x106e6b30u, _esp0);
  ESP += 8; return;
}

/* FUN_10006bd0 @ 0x106e6bd0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_106e6bd0(void) {
  FTRACE(0x106e6bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6bd1 mov ebp, esp */
  EBP = (ESP);
  /* 106e6bd3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e6bd6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 106e6bdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6be0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 106e6be3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e6be6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e6be9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 106e6bec cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6bf0 ja 0x106e6c9e */
  if ((!C.cf&&!C.zf)) goto L_106e6c9e;
  /* 106e6bf6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 106e6bf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e6bfb mov dl, byte ptr [eax + 0x106e6df2] */
  DL = (r8((uint32_t)(EAX + 0x106e6df2)));
  /* 106e6c01 jmp dword ptr [edx*4 + 0x106e6dda] */
  switch (EDX) {
    case 0: goto L_106e6c08;
    case 1: goto L_106e6c73;
    case 2: goto L_106e6c59;
    case 3: goto L_106e6c25;
    case 4: goto L_106e6c3f;
    case 5: goto L_106e6c9e;
    default: x86_unimpl("switch@0x106e6c01 out of table"); return;
  }
L_106e6c08:;
  /* 106e6c08 mov dword ptr [ebp - 0x18], 0x1070f624 */
  w32((uint32_t)(EBP + -0x18), (0x1070f624u));
  /* 106e6c0f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e6c12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e6c14 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106e6c17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e6c1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6c1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e6c20 jmp 0x106e6ca6 */
  goto L_106e6ca6;
L_106e6c25:;
  /* 106e6c25 mov dword ptr [ebp - 0x18], 0x1070f628 */
  w32((uint32_t)(EBP + -0x18), (0x1070f628u));
  /* 106e6c2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e6c2f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e6c31 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106e6c34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e6c37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6c3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e6c3d jmp 0x106e6ca6 */
  goto L_106e6ca6;
L_106e6c3f:;
  /* 106e6c3f mov dword ptr [ebp - 0x18], 0x1070f62c */
  w32((uint32_t)(EBP + -0x18), (0x1070f62cu));
  /* 106e6c46 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e6c49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e6c4b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106e6c4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e6c51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6c54 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e6c57 jmp 0x106e6ca6 */
  goto L_106e6ca6;
L_106e6c59:;
  /* 106e6c59 mov dword ptr [ebp - 0x18], 0x1070f630 */
  w32((uint32_t)(EBP + -0x18), (0x1070f630u));
  /* 106e6c60 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e6c63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e6c65 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106e6c68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e6c6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6c6e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 106e6c71 jmp 0x106e6ca6 */
  goto L_106e6ca6;
L_106e6c73:;
  /* 106e6c73 call 0x106e3170 */
  push32(0x106e6c78u); f_106e3170();
  /* 106e6c78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e6c7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6c7e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106e6c81 push edx */
  push32((uint32_t)(EDX));
  /* 106e6c82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6c85 push eax */
  push32((uint32_t)(EAX));
  /* 106e6c86 call 0x106e6e10 */
  push32(0x106e6c8bu); f_106e6e10();
  /* 106e6c8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6c8e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6c91 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 106e6c94 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e6c97 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e6c99 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 106e6c9c jmp 0x106e6ca6 */
  goto L_106e6ca6;
L_106e6c9e:;
  /* 106e6c9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e6ca1 jmp 0x106e6dd6 */
  goto L_106e6dd6;
L_106e6ca6:;
  /* 106e6ca6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6caa je 0x106e6cb6 */
  if (C.zf) goto L_106e6cb6;
  /* 106e6cac push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6cae call 0x106e7130 */
  push32(0x106e6cb3u); f_106e7130();
  /* 106e6cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e6cb6:;
  /* 106e6cb6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6cba jne 0x106e6cd3 */
  if (!C.zf) goto L_106e6cd3;
  /* 106e6cbc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6cc0 je 0x106e6ccc */
  if (C.zf) goto L_106e6ccc;
  /* 106e6cc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6cc4 call 0x106e71d0 */
  push32(0x106e6cc9u); f_106e71d0();
  /* 106e6cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e6ccc:;
  /* 106e6ccc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e6cce jmp 0x106e6dd6 */
  goto L_106e6dd6;
L_106e6cd3:;
  /* 106e6cd3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6cd7 jne 0x106e6cf0 */
  if (!C.zf) goto L_106e6cf0;
  /* 106e6cd9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6cdd je 0x106e6ce9 */
  if (C.zf) goto L_106e6ce9;
  /* 106e6cdf push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6ce1 call 0x106e71d0 */
  push32(0x106e6ce6u); f_106e71d0();
  /* 106e6ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e6ce9:;
  /* 106e6ce9 push 3 */
  push32((uint32_t)(0x3u));
  /* 106e6ceb call 0x106e2ef0 */
  push32(0x106e6cf0u); f_106e2ef0();
L_106e6cf0:;
  /* 106e6cf0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6cf4 je 0x106e6d02 */
  if (C.zf) goto L_106e6d02;
  /* 106e6cf6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6cfa je 0x106e6d02 */
  if (C.zf) goto L_106e6d02;
  /* 106e6cfc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6d00 jne 0x106e6d2e */
  if (!C.zf) goto L_106e6d2e;
L_106e6d02:;
  /* 106e6d02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6d05 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 106e6d08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 106e6d0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6d0e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 106e6d15 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6d19 jne 0x106e6d2e */
  if (!C.zf) goto L_106e6d2e;
  /* 106e6d1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6d1e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 106e6d21 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 106e6d24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6d27 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_106e6d2e:;
  /* 106e6d2e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6d32 jne 0x106e6d70 */
  if (!C.zf) goto L_106e6d70;
  /* 106e6d34 mov eax, dword ptr [0x1070dc78] */
  EAX = (r32((uint32_t)(0x1070dc78)));
  /* 106e6d39 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106e6d3c jmp 0x106e6d47 */
  goto L_106e6d47;
L_106e6d3e:;
  /* 106e6d3e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e6d41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6d44 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_106e6d47:;
  /* 106e6d47 mov edx, dword ptr [0x1070dc78] */
  EDX = (r32((uint32_t)(0x1070dc78)));
  /* 106e6d4d add edx, dword ptr [0x1070dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1070dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6d53 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6d56 jge 0x106e6d6e */
  if ((C.sf==C.of)) goto L_106e6d6e;
  /* 106e6d58 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e6d5b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e6d5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6d61 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106e6d64 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 106e6d6c jmp 0x106e6d3e */
  goto L_106e6d3e;
L_106e6d6e:;
  /* 106e6d6e jmp 0x106e6d79 */
  goto L_106e6d79;
L_106e6d70:;
  /* 106e6d70 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e6d73 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_106e6d79:;
  /* 106e6d79 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6d7d je 0x106e6d89 */
  if (C.zf) goto L_106e6d89;
  /* 106e6d7f push 1 */
  push32((uint32_t)(0x1u));
  /* 106e6d81 call 0x106e71d0 */
  push32(0x106e6d86u); f_106e71d0();
  /* 106e6d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e6d89:;
  /* 106e6d89 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6d8d jne 0x106e6da0 */
  if (!C.zf) goto L_106e6da0;
  /* 106e6d8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6d92 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 106e6d95 push edx */
  push32((uint32_t)(EDX));
  /* 106e6d96 push 8 */
  push32((uint32_t)(0x8u));
  /* 106e6d98 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x106e6d9bu);
  /* 106e6d9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6d9e jmp 0x106e6daa */
  goto L_106e6daa;
L_106e6da0:;
  /* 106e6da0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6da3 push eax */
  push32((uint32_t)(EAX));
  /* 106e6da4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x106e6da7u);
  /* 106e6da7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e6daa:;
  /* 106e6daa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6dae je 0x106e6dbc */
  if (C.zf) goto L_106e6dbc;
  /* 106e6db0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6db4 je 0x106e6dbc */
  if (C.zf) goto L_106e6dbc;
  /* 106e6db6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6dba jne 0x106e6dd4 */
  if (!C.zf) goto L_106e6dd4;
L_106e6dbc:;
  /* 106e6dbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6dbf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e6dc2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 106e6dc5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6dc9 jne 0x106e6dd4 */
  if (!C.zf) goto L_106e6dd4;
  /* 106e6dcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6dce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6dd1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_106e6dd4:;
  /* 106e6dd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e6dd6:;
  /* 106e6dd6 mov esp, ebp */
  ESP = (EBP);
  /* 106e6dd8 pop ebp */
  EBP = (pop32());
  /* 106e6dd9 ret  */
  ESPCHK(0x106e6bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e10 @ 0x106e6e10 (91 bytes, 35 insns) */
void f_106e6e10(void) {
  FTRACE(0x106e6e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6e10 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6e11 mov ebp, esp */
  EBP = (ESP);
  /* 106e6e13 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6e14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e6e17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e6e1a:;
  /* 106e6e1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6e1d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 106e6e20 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6e23 je 0x106e6e43 */
  if (C.zf) goto L_106e6e43;
  /* 106e6e25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6e28 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6e2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e6e2e mov ecx, dword ptr [0x1070dc84] */
  ECX = (r32((uint32_t)(0x1070dc84)));
  /* 106e6e34 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e6e37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e6e3a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6e3c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6e3f jae 0x106e6e43 */
  if (!C.cf) goto L_106e6e43;
  /* 106e6e41 jmp 0x106e6e1a */
  goto L_106e6e1a;
L_106e6e43:;
  /* 106e6e43 mov eax, dword ptr [0x1070dc84] */
  EAX = (r32((uint32_t)(0x1070dc84)));
  /* 106e6e48 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e6e4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e6e4e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6e50 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6e53 jae 0x106e6e65 */
  if (!C.cf) goto L_106e6e65;
  /* 106e6e55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6e58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 106e6e5b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6e5e jne 0x106e6e65 */
  if (!C.zf) goto L_106e6e65;
  /* 106e6e60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6e63 jmp 0x106e6e67 */
  goto L_106e6e67;
L_106e6e65:;
  /* 106e6e65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e6e67:;
  /* 106e6e67 mov esp, ebp */
  ESP = (EBP);
  /* 106e6e69 pop ebp */
  EBP = (pop32());
  /* 106e6e6a ret  */
  ESPCHK(0x106e6e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e70 @ 0x106e6e70 (13 bytes, 6 insns) */
void f_106e6e70(void) {
  FTRACE(0x106e6e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6e70 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6e71 mov ebp, esp */
  EBP = (ESP);
  /* 106e6e73 call 0x106e3170 */
  push32(0x106e6e78u); f_106e3170();
  /* 106e6e78 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6e7b pop ebp */
  EBP = (pop32());
  /* 106e6e7c ret  */
  ESPCHK(0x106e6e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e80 @ 0x106e6e80 (13 bytes, 6 insns) */
void f_106e6e80(void) {
  FTRACE(0x106e6e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6e80 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6e81 mov ebp, esp */
  EBP = (ESP);
  /* 106e6e83 call 0x106e3170 */
  push32(0x106e6e88u); f_106e3170();
  /* 106e6e88 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6e8b pop ebp */
  EBP = (pop32());
  /* 106e6e8c ret  */
  ESPCHK(0x106e6e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e90 @ 0x106e6e90 (187 bytes, 54 insns) */
void f_106e6e90(void) {
  FTRACE(0x106e6e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6e90 push ebp */
  push32((uint32_t)(EBP));
  /* 106e6e91 mov ebp, esp */
  EBP = (ESP);
  /* 106e6e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e6e96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106e6e9d cmp dword ptr [0x1070f638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6ea4 jne 0x106e6f03 */
  if (!C.zf) goto L_106e6f03;
  /* 106e6ea6 push 0x1070a2d8 */
  push32((uint32_t)(0x1070a2d8u));
  /* 106e6eab call dword ptr [0x107122dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122dc))), 0x106e6eb1u);
  /* 106e6eb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e6eb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6eb8 je 0x106e6ed7 */
  if (C.zf) goto L_106e6ed7;
  /* 106e6eba push 0x1070aedc */
  push32((uint32_t)(0x1070aedcu));
  /* 106e6ebf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6ec2 push eax */
  push32((uint32_t)(EAX));
  /* 106e6ec3 call dword ptr [0x107122d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d8))), 0x106e6ec9u);
  /* 106e6ec9 mov dword ptr [0x1070f638], eax */
  w32((uint32_t)(0x1070f638), (EAX));
  /* 106e6ece cmp dword ptr [0x1070f638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6ed5 jne 0x106e6edb */
  if (!C.zf) goto L_106e6edb;
L_106e6ed7:;
  /* 106e6ed7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e6ed9 jmp 0x106e6f47 */
  goto L_106e6f47;
L_106e6edb:;
  /* 106e6edb push 0x1070aecc */
  push32((uint32_t)(0x1070aeccu));
  /* 106e6ee0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6ee4 call dword ptr [0x107122d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d8))), 0x106e6eeau);
  /* 106e6eea mov dword ptr [0x1070f63c], eax */
  w32((uint32_t)(0x1070f63c), (EAX));
  /* 106e6eef push 0x1070aeb8 */
  push32((uint32_t)(0x1070aeb8u));
  /* 106e6ef4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e6ef7 push edx */
  push32((uint32_t)(EDX));
  /* 106e6ef8 call dword ptr [0x107122d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122d8))), 0x106e6efeu);
  /* 106e6efe mov dword ptr [0x1070f640], eax */
  w32((uint32_t)(0x1070f640), (EAX));
L_106e6f03:;
  /* 106e6f03 cmp dword ptr [0x1070f63c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f63c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6f0a je 0x106e6f15 */
  if (C.zf) goto L_106e6f15;
  /* 106e6f0c call dword ptr [0x1070f63c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f63c))), 0x106e6f12u);
  /* 106e6f12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e6f15:;
  /* 106e6f15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6f19 je 0x106e6f31 */
  if (C.zf) goto L_106e6f31;
  /* 106e6f1b cmp dword ptr [0x1070f640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1070f640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e6f22 je 0x106e6f31 */
  if (C.zf) goto L_106e6f31;
  /* 106e6f24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6f27 push eax */
  push32((uint32_t)(EAX));
  /* 106e6f28 call dword ptr [0x1070f640] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f640))), 0x106e6f2eu);
  /* 106e6f2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e6f31:;
  /* 106e6f31 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 106e6f34 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6f35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e6f38 push edx */
  push32((uint32_t)(EDX));
  /* 106e6f39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e6f3c push eax */
  push32((uint32_t)(EAX));
  /* 106e6f3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e6f40 push ecx */
  push32((uint32_t)(ECX));
  /* 106e6f41 call dword ptr [0x1070f638] */
  call_ind((uint32_t)(r32((uint32_t)(0x1070f638))), 0x106e6f47u);
L_106e6f47:;
  /* 106e6f47 mov esp, ebp */
  ESP = (EBP);
  /* 106e6f49 pop ebp */
  EBP = (pop32());
  /* 106e6f4a ret  */
  ESPCHK(0x106e6e90u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x106e6f50 (254 bytes, 109 insns) */
void f_106e6f50(void) {
  FTRACE(0x106e6f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e6f50 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 106e6f54 push edi */
  push32((uint32_t)(EDI));
  /* 106e6f55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 106e6f57 je 0x106e6fd3 */
  if (C.zf) goto L_106e6fd3;
  /* 106e6f59 push esi */
  push32((uint32_t)(ESI));
  /* 106e6f5a push ebx */
  push32((uint32_t)(EBX));
  /* 106e6f5b mov ebx, ecx */
  EBX = (ECX);
  /* 106e6f5d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 106e6f61 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 106e6f67 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 106e6f6b jne 0x106e6f74 */
  if (!C.zf) goto L_106e6f74;
  /* 106e6f6d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106e6f70 jne 0x106e6fe1 */
  if (!C.zf) goto L_106e6fe1;
  /* 106e6f72 jmp 0x106e6f95 */
  goto L_106e6f95;
L_106e6f74:;
  /* 106e6f74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106e6f76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106e6f77 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106e6f79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106e6f7a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106e6f7b je 0x106e6fa2 */
  if (C.zf) goto L_106e6fa2;
  /* 106e6f7d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106e6f7f je 0x106e6faa */
  if (C.zf) goto L_106e6faa;
  /* 106e6f81 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 106e6f87 jne 0x106e6f74 */
  if (!C.zf) goto L_106e6f74;
  /* 106e6f89 mov ebx, ecx */
  EBX = (ECX);
  /* 106e6f8b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106e6f8e jne 0x106e6fe1 */
  if (!C.zf) goto L_106e6fe1;
L_106e6f90:;
  /* 106e6f90 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 106e6f93 je 0x106e6fa2 */
  if (C.zf) goto L_106e6fa2;
L_106e6f95:;
  /* 106e6f95 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 106e6f97 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 106e6f98 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106e6f9a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106e6f9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 106e6f9d je 0x106e6fce */
  if (C.zf) goto L_106e6fce;
  /* 106e6f9f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 106e6fa0 jne 0x106e6f95 */
  if (!C.zf) goto L_106e6f95;
L_106e6fa2:;
  /* 106e6fa2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 106e6fa6 pop ebx */
  EBX = (pop32());
  /* 106e6fa7 pop esi */
  ESI = (pop32());
  /* 106e6fa8 pop edi */
  EDI = (pop32());
  /* 106e6fa9 ret  */
  ESPCHK(0x106e6f50u, _esp0);
  ESP += 4; return;
L_106e6faa:;
  /* 106e6faa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106e6fb0 je 0x106e6fc4 */
  if (C.zf) goto L_106e6fc4;
L_106e6fb2:;
  /* 106e6fb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106e6fb4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106e6fb5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106e6fb6 je 0x106e7046 */
  if (C.zf) goto L_106e7046;
  /* 106e6fbc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 106e6fc2 jne 0x106e6fb2 */
  if (!C.zf) goto L_106e6fb2;
L_106e6fc4:;
  /* 106e6fc4 mov ebx, ecx */
  EBX = (ECX);
  /* 106e6fc6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106e6fc9 jne 0x106e7037 */
  if (!C.zf) goto L_106e7037;
L_106e6fcb:;
  /* 106e6fcb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106e6fcd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_106e6fce:;
  /* 106e6fce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 106e6fcf jne 0x106e6fcb */
  if (!C.zf) goto L_106e6fcb;
  /* 106e6fd1 pop ebx */
  EBX = (pop32());
  /* 106e6fd2 pop esi */
  ESI = (pop32());
L_106e6fd3:;
  /* 106e6fd3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106e6fd7 pop edi */
  EDI = (pop32());
  /* 106e6fd8 ret  */
  ESPCHK(0x106e6f50u, _esp0);
  ESP += 4; return;
L_106e6fd9:;
  /* 106e6fd9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106e6fdb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6fde dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106e6fdf je 0x106e6f90 */
  if (C.zf) goto L_106e6f90;
L_106e6fe1:;
  /* 106e6fe1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 106e6fe6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 106e6fe8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6fea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e6fed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 106e6fef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 106e6ff1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 106e6ff4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 106e6ff9 je 0x106e6fd9 */
  if (C.zf) goto L_106e6fd9;
  /* 106e6ffb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 106e6ffd je 0x106e702b */
  if (C.zf) goto L_106e702b;
  /* 106e6fff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 106e7001 je 0x106e7021 */
  if (C.zf) goto L_106e7021;
  /* 106e7003 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 106e7009 je 0x106e7017 */
  if (C.zf) goto L_106e7017;
  /* 106e700b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 106e7011 jne 0x106e6fd9 */
  if (!C.zf) goto L_106e6fd9;
  /* 106e7013 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106e7015 jmp 0x106e702f */
  goto L_106e702f;
L_106e7017:;
  /* 106e7017 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e701d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106e701f jmp 0x106e702f */
  goto L_106e702f;
L_106e7021:;
  /* 106e7021 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 106e7027 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 106e7029 jmp 0x106e702f */
  goto L_106e702f;
L_106e702b:;
  /* 106e702b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 106e702d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_106e702f:;
  /* 106e702f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7032 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e7034 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106e7035 je 0x106e7041 */
  if (C.zf) goto L_106e7041;
L_106e7037:;
  /* 106e7037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_106e7039:;
  /* 106e7039 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 106e703b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 106e703e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106e703f jne 0x106e7039 */
  if (!C.zf) goto L_106e7039;
L_106e7041:;
  /* 106e7041 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 106e7044 jne 0x106e6fcb */
  if (!C.zf) goto L_106e6fcb;
L_106e7046:;
  /* 106e7046 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 106e704a pop ebx */
  EBX = (pop32());
  /* 106e704b pop esi */
  ESI = (pop32());
  /* 106e704c pop edi */
  EDI = (pop32());
  /* 106e704d ret  */
  ESPCHK(0x106e6f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007050 @ 0x106e7050 (55 bytes, 16 insns) */
void f_106e7050(void) {
  FTRACE(0x106e7050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7050 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7051 mov ebp, esp */
  EBP = (ESP);
  /* 106e7053 mov eax, dword ptr [0x1070db84] */
  EAX = (r32((uint32_t)(0x1070db84)));
  /* 106e7058 push eax */
  push32((uint32_t)(EAX));
  /* 106e7059 call dword ptr [0x10712358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712358))), 0x106e705fu);
  /* 106e705f mov ecx, dword ptr [0x1070db74] */
  ECX = (r32((uint32_t)(0x1070db74)));
  /* 106e7065 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7066 call dword ptr [0x10712358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712358))), 0x106e706cu);
  /* 106e706c mov edx, dword ptr [0x1070db64] */
  EDX = (r32((uint32_t)(0x1070db64)));
  /* 106e7072 push edx */
  push32((uint32_t)(EDX));
  /* 106e7073 call dword ptr [0x10712358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712358))), 0x106e7079u);
  /* 106e7079 mov eax, dword ptr [0x1070db44] */
  EAX = (r32((uint32_t)(0x1070db44)));
  /* 106e707e push eax */
  push32((uint32_t)(EAX));
  /* 106e707f call dword ptr [0x10712358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712358))), 0x106e7085u);
  /* 106e7085 pop ebp */
  EBP = (pop32());
  /* 106e7086 ret  */
  ESPCHK(0x106e7050u, _esp0);
  ESP += 4; return;
}

/* FUN_10007090 @ 0x106e7090 (159 bytes, 47 insns) */
void f_106e7090(void) {
  FTRACE(0x106e7090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7090 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7091 mov ebp, esp */
  EBP = (ESP);
  /* 106e7093 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7094 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106e709b jmp 0x106e70a6 */
  goto L_106e70a6;
L_106e709d:;
  /* 106e709d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e70a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e70a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e70a6:;
  /* 106e70a6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e70aa jge 0x106e70f9 */
  if ((C.sf==C.of)) goto L_106e70f9;
  /* 106e70ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e70af cmp dword ptr [ecx*4 + 0x1070db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1070db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e70b7 je 0x106e70f7 */
  if (C.zf) goto L_106e70f7;
  /* 106e70b9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e70bd je 0x106e70f7 */
  if (C.zf) goto L_106e70f7;
  /* 106e70bf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e70c3 je 0x106e70f7 */
  if (C.zf) goto L_106e70f7;
  /* 106e70c5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e70c9 je 0x106e70f7 */
  if (C.zf) goto L_106e70f7;
  /* 106e70cb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e70cf je 0x106e70f7 */
  if (C.zf) goto L_106e70f7;
  /* 106e70d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e70d4 mov eax, dword ptr [edx*4 + 0x1070db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1070db40)));
  /* 106e70db push eax */
  push32((uint32_t)(EAX));
  /* 106e70dc call dword ptr [0x10712320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712320))), 0x106e70e2u);
  /* 106e70e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 106e70e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e70e7 mov edx, dword ptr [ecx*4 + 0x1070db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1070db40)));
  /* 106e70ee push edx */
  push32((uint32_t)(EDX));
  /* 106e70ef call 0x106e41c0 */
  push32(0x106e70f4u); f_106e41c0();
  /* 106e70f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e70f7:;
  /* 106e70f7 jmp 0x106e709d */
  goto L_106e709d;
L_106e70f9:;
  /* 106e70f9 mov eax, dword ptr [0x1070db64] */
  EAX = (r32((uint32_t)(0x1070db64)));
  /* 106e70fe push eax */
  push32((uint32_t)(EAX));
  /* 106e70ff call dword ptr [0x10712320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712320))), 0x106e7105u);
  /* 106e7105 mov ecx, dword ptr [0x1070db74] */
  ECX = (r32((uint32_t)(0x1070db74)));
  /* 106e710b push ecx */
  push32((uint32_t)(ECX));
  /* 106e710c call dword ptr [0x10712320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712320))), 0x106e7112u);
  /* 106e7112 mov edx, dword ptr [0x1070db84] */
  EDX = (r32((uint32_t)(0x1070db84)));
  /* 106e7118 push edx */
  push32((uint32_t)(EDX));
  /* 106e7119 call dword ptr [0x10712320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712320))), 0x106e711fu);
  /* 106e711f mov eax, dword ptr [0x1070db44] */
  EAX = (r32((uint32_t)(0x1070db44)));
  /* 106e7124 push eax */
  push32((uint32_t)(EAX));
  /* 106e7125 call dword ptr [0x10712320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712320))), 0x106e712bu);
  /* 106e712b mov esp, ebp */
  ESP = (EBP);
  /* 106e712d pop ebp */
  EBP = (pop32());
  /* 106e712e ret  */
  ESPCHK(0x106e7090u, _esp0);
  ESP += 4; return;
}

/* FUN_10007130 @ 0x106e7130 (151 bytes, 46 insns) */
void f_106e7130(void) {
  FTRACE(0x106e7130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7130 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7131 mov ebp, esp */
  EBP = (ESP);
  /* 106e7133 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7137 cmp dword ptr [eax*4 + 0x1070db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1070db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e713f jne 0x106e71b2 */
  if (!C.zf) goto L_106e71b2;
  /* 106e7141 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 106e7146 push 0x1070aee8 */
  push32((uint32_t)(0x1070aee8u));
  /* 106e714b push 2 */
  push32((uint32_t)(0x2u));
  /* 106e714d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 106e714f call 0x106e3730 */
  push32(0x106e7154u); f_106e3730();
  /* 106e7154 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7157 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e715a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e715e jne 0x106e716a */
  if (!C.zf) goto L_106e716a;
  /* 106e7160 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106e7162 call 0x106e26a0 */
  push32(0x106e7167u); f_106e26a0();
  /* 106e7167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e716a:;
  /* 106e716a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106e716c call 0x106e7130 */
  push32(0x106e7171u); f_106e7130();
  /* 106e7171 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7174 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7177 cmp dword ptr [ecx*4 + 0x1070db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1070db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e717f jne 0x106e719a */
  if (!C.zf) goto L_106e719a;
  /* 106e7181 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7184 push edx */
  push32((uint32_t)(EDX));
  /* 106e7185 call dword ptr [0x10712358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712358))), 0x106e718bu);
  /* 106e718b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e718e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7191 mov dword ptr [eax*4 + 0x1070db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1070db40), (ECX));
  /* 106e7198 jmp 0x106e71a8 */
  goto L_106e71a8;
L_106e719a:;
  /* 106e719a push 2 */
  push32((uint32_t)(0x2u));
  /* 106e719c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e719f push edx */
  push32((uint32_t)(EDX));
  /* 106e71a0 call 0x106e41c0 */
  push32(0x106e71a5u); f_106e41c0();
  /* 106e71a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e71a8:;
  /* 106e71a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 106e71aa call 0x106e71d0 */
  push32(0x106e71afu); f_106e71d0();
  /* 106e71af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e71b2:;
  /* 106e71b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e71b5 mov ecx, dword ptr [eax*4 + 0x1070db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1070db40)));
  /* 106e71bc push ecx */
  push32((uint32_t)(ECX));
  /* 106e71bd call dword ptr [0x1071235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071235c))), 0x106e71c3u);
  /* 106e71c3 mov esp, ebp */
  ESP = (EBP);
  /* 106e71c5 pop ebp */
  EBP = (pop32());
  /* 106e71c6 ret  */
  ESPCHK(0x106e7130u, _esp0);
  ESP += 4; return;
}

/* FUN_100071d0 @ 0x106e71d0 (22 bytes, 8 insns) */
void f_106e71d0(void) {
  FTRACE(0x106e71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e71d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e71d1 mov ebp, esp */
  EBP = (ESP);
  /* 106e71d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e71d6 mov ecx, dword ptr [eax*4 + 0x1070db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1070db40)));
  /* 106e71dd push ecx */
  push32((uint32_t)(ECX));
  /* 106e71de call dword ptr [0x10712360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712360))), 0x106e71e4u);
  /* 106e71e4 pop ebp */
  EBP = (pop32());
  /* 106e71e5 ret  */
  ESPCHK(0x106e71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071f0 @ 0x106e71f0 (26 bytes, 10 insns) */
void f_106e71f0(void) {
  FTRACE(0x106e71f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e71f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e71f1 mov ebp, esp */
  EBP = (ESP);
  /* 106e71f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e71f6 push eax */
  push32((uint32_t)(EAX));
  /* 106e71f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 106e71f9 call dword ptr [0x1071234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071234c))), 0x106e71ffu);
  /* 106e71ff push 0xff */
  push32((uint32_t)(0xffu));
  /* 106e7204 call dword ptr [0x107122e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107122e8))), 0x106e720au);
  /* 106e720a pop ebp */
  EBP = (pop32());
  /* 106e720b ret  */
  ESPCHK(0x106e71f0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x106e7210 (446 bytes, 130 insns) */
void f_106e7210(void) {
  FTRACE(0x106e7210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7210 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7211 mov ebp, esp */
  EBP = (ESP);
  /* 106e7213 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7216 call 0x106e3170 */
  push32(0x106e721bu); f_106e3170();
  /* 106e721b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e721e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7221 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 106e7224 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7225 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7228 push edx */
  push32((uint32_t)(EDX));
  /* 106e7229 call 0x106e73d0 */
  push32(0x106e722eu); f_106e73d0();
  /* 106e722e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7231 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 106e7234 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7238 je 0x106e7243 */
  if (C.zf) goto L_106e7243;
  /* 106e723a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e723d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7241 jne 0x106e7252 */
  if (!C.zf) goto L_106e7252;
L_106e7243:;
  /* 106e7243 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7246 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7247 call dword ptr [0x10712364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712364))), 0x106e724du);
  /* 106e724d jmp 0x106e73ca */
  goto L_106e73ca;
L_106e7252:;
  /* 106e7252 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e7255 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7259 jne 0x106e726f */
  if (!C.zf) goto L_106e726f;
  /* 106e725b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e725e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 106e7265 mov eax, 1 */
  EAX = (0x1u);
  /* 106e726a jmp 0x106e73ca */
  goto L_106e73ca;
L_106e726f:;
  /* 106e726f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e7272 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7276 jne 0x106e7280 */
  if (!C.zf) goto L_106e7280;
  /* 106e7278 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 106e727b jmp 0x106e73ca */
  goto L_106e73ca;
L_106e7280:;
  /* 106e7280 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e7283 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 106e7286 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e7289 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e728c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 106e728f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 106e7292 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7295 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7298 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 106e729b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e729e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e72a2 jne 0x106e73a7 */
  if (!C.zf) goto L_106e73a7;
  /* 106e72a8 mov eax, dword ptr [0x1070dc78] */
  EAX = (r32((uint32_t)(0x1070dc78)));
  /* 106e72ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 106e72b0 jmp 0x106e72bb */
  goto L_106e72bb;
L_106e72b2:;
  /* 106e72b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e72b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e72b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_106e72bb:;
  /* 106e72bb mov edx, dword ptr [0x1070dc78] */
  EDX = (r32((uint32_t)(0x1070dc78)));
  /* 106e72c1 add edx, dword ptr [0x1070dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1070dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e72c7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e72ca jge 0x106e72e2 */
  if ((C.sf==C.of)) goto L_106e72e2;
  /* 106e72cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 106e72cf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e72d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e72d5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 106e72d8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 106e72e0 jmp 0x106e72b2 */
  goto L_106e72b2;
L_106e72e2:;
  /* 106e72e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e72e5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 106e72e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 106e72eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e72ee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e72f4 jne 0x106e7305 */
  if (!C.zf) goto L_106e7305;
  /* 106e72f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e72f9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 106e7300 jmp 0x106e738d */
  goto L_106e738d;
L_106e7305:;
  /* 106e7305 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e7308 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e730e jne 0x106e731c */
  if (!C.zf) goto L_106e731c;
  /* 106e7310 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7313 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 106e731a jmp 0x106e738d */
  goto L_106e738d;
L_106e731c:;
  /* 106e731c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e731f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7325 jne 0x106e7333 */
  if (!C.zf) goto L_106e7333;
  /* 106e7327 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e732a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 106e7331 jmp 0x106e738d */
  goto L_106e738d;
L_106e7333:;
  /* 106e7333 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e7336 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e733c jne 0x106e734a */
  if (!C.zf) goto L_106e734a;
  /* 106e733e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7341 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 106e7348 jmp 0x106e738d */
  goto L_106e738d;
L_106e734a:;
  /* 106e734a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e734d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7353 jne 0x106e7361 */
  if (!C.zf) goto L_106e7361;
  /* 106e7355 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7358 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 106e735f jmp 0x106e738d */
  goto L_106e738d;
L_106e7361:;
  /* 106e7361 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e7364 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e736a jne 0x106e7378 */
  if (!C.zf) goto L_106e7378;
  /* 106e736c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e736f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 106e7376 jmp 0x106e738d */
  goto L_106e738d;
L_106e7378:;
  /* 106e7378 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e737b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7381 jne 0x106e738d */
  if (!C.zf) goto L_106e738d;
  /* 106e7383 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7386 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_106e738d:;
  /* 106e738d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e7390 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 106e7393 push edx */
  push32((uint32_t)(EDX));
  /* 106e7394 push 8 */
  push32((uint32_t)(0x8u));
  /* 106e7396 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x106e7399u);
  /* 106e7399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e739c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e739f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 106e73a2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 106e73a5 jmp 0x106e73be */
  goto L_106e73be;
L_106e73a7:;
  /* 106e73a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e73aa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 106e73b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 106e73b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 106e73b7 push ecx */
  push32((uint32_t)(ECX));
  /* 106e73b8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x106e73bbu);
  /* 106e73bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_106e73be:;
  /* 106e73be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e73c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 106e73c4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 106e73c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_106e73ca:;
  /* 106e73ca mov esp, ebp */
  ESP = (EBP);
  /* 106e73cc pop ebp */
  EBP = (pop32());
  /* 106e73cd ret  */
  ESPCHK(0x106e7210u, _esp0);
  ESP += 4; return;
}

/* FUN_100073d0 @ 0x106e73d0 (89 bytes, 35 insns) */
void f_106e73d0(void) {
  FTRACE(0x106e73d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e73d0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e73d1 mov ebp, esp */
  EBP = (ESP);
  /* 106e73d3 push ecx */
  push32((uint32_t)(ECX));
  /* 106e73d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e73d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_106e73da:;
  /* 106e73da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e73dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 106e73df cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e73e2 je 0x106e7402 */
  if (C.zf) goto L_106e7402;
  /* 106e73e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e73e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e73ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e73ed mov ecx, dword ptr [0x1070dc84] */
  ECX = (r32((uint32_t)(0x1070dc84)));
  /* 106e73f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e73f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e73f9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e73fb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e73fe jae 0x106e7402 */
  if (!C.cf) goto L_106e7402;
  /* 106e7400 jmp 0x106e73da */
  goto L_106e73da;
L_106e7402:;
  /* 106e7402 mov eax, dword ptr [0x1070dc84] */
  EAX = (r32((uint32_t)(0x1070dc84)));
  /* 106e7407 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 106e740a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e740d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e740f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7412 jae 0x106e741e */
  if (!C.cf) goto L_106e741e;
  /* 106e7414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e7417 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 106e7419 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e741c je 0x106e7422 */
  if (C.zf) goto L_106e7422;
L_106e741e:;
  /* 106e741e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e7420 jmp 0x106e7425 */
  goto L_106e7425;
L_106e7422:;
  /* 106e7422 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_106e7425:;
  /* 106e7425 mov esp, ebp */
  ESP = (EBP);
  /* 106e7427 pop ebp */
  EBP = (pop32());
  /* 106e7428 ret  */
  ESPCHK(0x106e73d0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x106e7430 (48 bytes, 17 insns) */
void f_106e7430(void) {
  FTRACE(0x106e7430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7430 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7431 mov ebp, esp */
  EBP = (ESP);
  /* 106e7433 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7434 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e7436 call 0x106e7130 */
  push32(0x106e743bu); f_106e7130();
  /* 106e743b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e743e mov eax, dword ptr [0x1070f6ac] */
  EAX = (r32((uint32_t)(0x1070f6ac)));
  /* 106e7443 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e7446 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7449 mov dword ptr [0x1070f6ac], ecx */
  w32((uint32_t)(0x1070f6ac), (ECX));
  /* 106e744f push 9 */
  push32((uint32_t)(0x9u));
  /* 106e7451 call 0x106e71d0 */
  push32(0x106e7456u); f_106e71d0();
  /* 106e7456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e745c mov esp, ebp */
  ESP = (EBP);
  /* 106e745e pop ebp */
  EBP = (pop32());
  /* 106e745f ret  */
  ESPCHK(0x106e7430u, _esp0);
  ESP += 4; return;
}

/* FUN_10007460 @ 0x106e7460 (10 bytes, 5 insns) */
void f_106e7460(void) {
  FTRACE(0x106e7460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7460 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7461 mov ebp, esp */
  EBP = (ESP);
  /* 106e7463 mov eax, dword ptr [0x1070f6ac] */
  EAX = (r32((uint32_t)(0x1070f6ac)));
  /* 106e7468 pop ebp */
  EBP = (pop32());
  /* 106e7469 ret  */
  ESPCHK(0x106e7460u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x106e7470 (45 bytes, 19 insns) */
void f_106e7470(void) {
  FTRACE(0x106e7470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7470 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7471 mov ebp, esp */
  EBP = (ESP);
  /* 106e7473 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7474 mov eax, dword ptr [0x1070f6ac] */
  EAX = (r32((uint32_t)(0x1070f6ac)));
  /* 106e7479 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e747c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7480 je 0x106e7490 */
  if (C.zf) goto L_106e7490;
  /* 106e7482 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7485 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7486 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x106e7489u);
  /* 106e7489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e748c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e748e jne 0x106e7494 */
  if (!C.zf) goto L_106e7494;
L_106e7490:;
  /* 106e7490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e7492 jmp 0x106e7499 */
  goto L_106e7499;
L_106e7494:;
  /* 106e7494 mov eax, 1 */
  EAX = (0x1u);
L_106e7499:;
  /* 106e7499 mov esp, ebp */
  ESP = (EBP);
  /* 106e749b pop ebp */
  EBP = (pop32());
  /* 106e749c ret  */
  ESPCHK(0x106e7470u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x106e74a0 (88 bytes, 40 insns) */
void f_106e74a0(void) {
  FTRACE(0x106e74a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e74a0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 106e74a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 106e74a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e74aa je 0x106e74f3 */
  if (C.zf) goto L_106e74f3;
  /* 106e74ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e74ae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 106e74b2 push edi */
  push32((uint32_t)(EDI));
  /* 106e74b3 mov edi, ecx */
  EDI = (ECX);
  /* 106e74b5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e74b8 jb 0x106e74e7 */
  if (C.cf) goto L_106e74e7;
  /* 106e74ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 106e74bc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 106e74bf je 0x106e74c9 */
  if (C.zf) goto L_106e74c9;
  /* 106e74c1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_106e74c3:;
  /* 106e74c3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106e74c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106e74c6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 106e74c7 jne 0x106e74c3 */
  if (!C.zf) goto L_106e74c3;
L_106e74c9:;
  /* 106e74c9 mov ecx, eax */
  ECX = (EAX);
  /* 106e74cb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 106e74ce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e74d0 mov ecx, eax */
  ECX = (EAX);
  /* 106e74d2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 106e74d5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e74d7 mov ecx, edx */
  ECX = (EDX);
  /* 106e74d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 106e74dc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 106e74df je 0x106e74e7 */
  if (C.zf) goto L_106e74e7;
  /* 106e74e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 106e74e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 106e74e5 je 0x106e74ed */
  if (C.zf) goto L_106e74ed;
L_106e74e7:;
  /* 106e74e7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 106e74e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 106e74ea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 106e74eb jne 0x106e74e7 */
  if (!C.zf) goto L_106e74e7;
L_106e74ed:;
  /* 106e74ed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 106e74f1 pop edi */
  EDI = (pop32());
  /* 106e74f2 ret  */
  ESPCHK(0x106e74a0u, _esp0);
  ESP += 4; return;
L_106e74f3:;
  /* 106e74f3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 106e74f7 ret  */
  ESPCHK(0x106e74a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007500 @ 0x106e7500 (23 bytes, 10 insns) */
void f_106e7500(void) {
  FTRACE(0x106e7500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7500 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7501 mov ebp, esp */
  EBP = (ESP);
  /* 106e7503 mov eax, dword ptr [0x1070f6a8] */
  EAX = (r32((uint32_t)(0x1070f6a8)));
  /* 106e7508 push eax */
  push32((uint32_t)(EAX));
  /* 106e7509 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e750c push ecx */
  push32((uint32_t)(ECX));
  /* 106e750d call 0x106e7520 */
  push32(0x106e7512u); f_106e7520();
  /* 106e7512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7515 pop ebp */
  EBP = (pop32());
  /* 106e7516 ret  */
  ESPCHK(0x106e7500u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x106e7520 (87 bytes, 34 insns) */
void f_106e7520(void) {
  FTRACE(0x106e7520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7520 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7521 mov ebp, esp */
  EBP = (ESP);
  /* 106e7523 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7524 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7528 jbe 0x106e752e */
  if ((C.cf||C.zf)) goto L_106e752e;
  /* 106e752a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e752c jmp 0x106e7573 */
  goto L_106e7573;
L_106e752e:;
  /* 106e752e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7532 ja 0x106e7545 */
  if ((!C.cf&&!C.zf)) goto L_106e7545;
  /* 106e7534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7537 push eax */
  push32((uint32_t)(EAX));
  /* 106e7538 call 0x106e7580 */
  push32(0x106e753du); f_106e7580();
  /* 106e753d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7540 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e7543 jmp 0x106e754c */
  goto L_106e754c;
L_106e7545:;
  /* 106e7545 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_106e754c:;
  /* 106e754c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7550 jne 0x106e7558 */
  if (!C.zf) goto L_106e7558;
  /* 106e7552 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7556 jne 0x106e755d */
  if (!C.zf) goto L_106e755d;
L_106e7558:;
  /* 106e7558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e755b jmp 0x106e7573 */
  goto L_106e7573;
L_106e755d:;
  /* 106e755d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7560 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7561 call 0x106e7470 */
  push32(0x106e7566u); f_106e7470();
  /* 106e7566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e756b jne 0x106e7571 */
  if (!C.zf) goto L_106e7571;
  /* 106e756d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e756f jmp 0x106e7573 */
  goto L_106e7573;
L_106e7571:;
  /* 106e7571 jmp 0x106e752e */
  goto L_106e752e;
L_106e7573:;
  /* 106e7573 mov esp, ebp */
  ESP = (EBP);
  /* 106e7575 pop ebp */
  EBP = (pop32());
  /* 106e7576 ret  */
  ESPCHK(0x106e7520u, _esp0);
  ESP += 4; return;
}

/* FUN_10007580 @ 0x106e7580 (109 bytes, 37 insns) */
void f_106e7580(void) {
  FTRACE(0x106e7580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7580 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7581 mov ebp, esp */
  EBP = (ESP);
  /* 106e7583 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7587 cmp eax, dword ptr [0x1070dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1070dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e758d ja 0x106e75bd */
  if ((!C.cf&&!C.zf)) goto L_106e75bd;
  /* 106e758f push 9 */
  push32((uint32_t)(0x9u));
  /* 106e7591 call 0x106e7130 */
  push32(0x106e7596u); f_106e7130();
  /* 106e7596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7599 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e759c push ecx */
  push32((uint32_t)(ECX));
  /* 106e759d call 0x106e80c0 */
  push32(0x106e75a2u); f_106e80c0();
  /* 106e75a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e75a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 106e75a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e75aa call 0x106e71d0 */
  push32(0x106e75afu); f_106e71d0();
  /* 106e75af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e75b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e75b6 je 0x106e75bd */
  if (C.zf) goto L_106e75bd;
  /* 106e75b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e75bb jmp 0x106e75e9 */
  goto L_106e75e9;
L_106e75bd:;
  /* 106e75bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e75c1 jne 0x106e75ca */
  if (!C.zf) goto L_106e75ca;
  /* 106e75c3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_106e75ca:;
  /* 106e75ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e75cd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e75d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 106e75d3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 106e75d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e75d9 push eax */
  push32((uint32_t)(EAX));
  /* 106e75da push 0 */
  push32((uint32_t)(0x0u));
  /* 106e75dc mov ecx, dword ptr [0x10710e6c] */
  ECX = (r32((uint32_t)(0x10710e6c)));
  /* 106e75e2 push ecx */
  push32((uint32_t)(ECX));
  /* 106e75e3 call dword ptr [0x10712368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10712368))), 0x106e75e9u);
L_106e75e9:;
  /* 106e75e9 mov esp, ebp */
  ESP = (EBP);
  /* 106e75eb pop ebp */
  EBP = (pop32());
  /* 106e75ec ret  */
  ESPCHK(0x106e7580u, _esp0);
  ESP += 4; return;
}

/* FUN_100075f0 @ 0x106e75f0 (10 bytes, 5 insns) */
void f_106e75f0(void) {
  FTRACE(0x106e75f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e75f0 push ebp */
  push32((uint32_t)(EBP));
  /* 106e75f1 mov ebp, esp */
  EBP = (ESP);
  /* 106e75f3 mov eax, 1 */
  EAX = (0x1u);
  /* 106e75f8 pop ebp */
  EBP = (pop32());
  /* 106e75f9 ret  */
  ESPCHK(0x106e75f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007600 @ 0x106e7600 (173 bytes, 59 insns) */
void f_106e7600(void) {
  FTRACE(0x106e7600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 106e7600 push ebp */
  push32((uint32_t)(EBP));
  /* 106e7601 mov ebp, esp */
  EBP = (ESP);
  /* 106e7603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 106e7606 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e760a jbe 0x106e7613 */
  if ((C.cf||C.zf)) goto L_106e7613;
  /* 106e760c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 106e760e jmp 0x106e76a9 */
  goto L_106e76a9;
L_106e7613:;
  /* 106e7613 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e7615 call 0x106e7130 */
  push32(0x106e761au); f_106e7130();
  /* 106e761a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e761d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e7620 push eax */
  push32((uint32_t)(EAX));
  /* 106e7621 call 0x106e7a30 */
  push32(0x106e7626u); f_106e7a30();
  /* 106e7626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7629 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 106e762c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7630 je 0x106e7671 */
  if (C.zf) goto L_106e7671;
  /* 106e7632 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 106e7639 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e763c cmp ecx, dword ptr [0x1070dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1070dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e7642 ja 0x106e7662 */
  if ((!C.cf&&!C.zf)) goto L_106e7662;
  /* 106e7644 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7647 push edx */
  push32((uint32_t)(EDX));
  /* 106e7648 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e764b push eax */
  push32((uint32_t)(EAX));
  /* 106e764c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 106e764f push ecx */
  push32((uint32_t)(ECX));
  /* 106e7650 call 0x106e8900 */
  push32(0x106e7655u); f_106e8900();
  /* 106e7655 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e7658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 106e765a je 0x106e7662 */
  if (C.zf) goto L_106e7662;
  /* 106e765c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e765f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_106e7662:;
  /* 106e7662 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e7664 call 0x106e71d0 */
  push32(0x106e7669u); f_106e71d0();
  /* 106e7669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e766c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 106e766f jmp 0x106e76a9 */
  goto L_106e76a9;
L_106e7671:;
  /* 106e7671 push 9 */
  push32((uint32_t)(0x9u));
  /* 106e7673 call 0x106e71d0 */
  push32(0x106e7678u); f_106e71d0();
  /* 106e7678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 106e767b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 106e767f jne 0x106e7688 */
  if (!C.zf) goto L_106e7688;
  /* 106e7681 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_106e7688:;
  /* 106e7688 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e768b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 106e768e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 106e7690 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 106e7693 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 106e7696 push ecx */
  push32((uint32_t)(ECX));
  /* 106e7697 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 106e769a push edx */
  push32((uint32_t)(EDX));
  /* 106e769b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 106e769d mov eax, dword ptr [0x10710e6c] */
  EAX = (r32((uint32_t)(0x10710e6c)));
  /* 106e76a2 push eax */
  push32((uint32_t)(EAX));
  /* 106e76a3 call dword ptr [0x1071236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1071236c))), 0x106e76a9u);
L_106e76a9:;
  /* 106e76a9 mov esp, ebp */
  ESP = (EBP);
  /* 106e76ab pop ebp */
  EBP = (pop32());
  /* 106e76ac ret  */
  ESPCHK(0x106e7600u, _esp0);
  ESP += 4; return;
}

