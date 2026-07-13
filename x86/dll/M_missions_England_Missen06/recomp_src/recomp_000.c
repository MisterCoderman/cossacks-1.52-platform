#include "recomp.h"

/* thunk_FUN_10001e00 @ 0x104e1005 (5 bytes, 1 insns) */
void f_104e1005(void) {
  FTRACE(0x104e1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e1005 jmp 0x104e1e00 */
  f_104e1e00(); return;
}

/* OnInit @ 0x104e100a (5 bytes, 1 insns) */
void f_104e100a(void) {
  FTRACE(0x104e100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e100a jmp 0x104e10a0 */
  f_104e10a0(); return;
}

/* thunk_FUN_10001e50 @ 0x104e100f (5 bytes, 1 insns) */
void f_104e100f(void) {
  FTRACE(0x104e100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e100f jmp 0x104e1e50 */
  f_104e1e50(); return;
}

/* thunk_FUN_10001040 @ 0x104e1014 (5 bytes, 1 insns) */
void f_104e1014(void) {
  FTRACE(0x104e1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e1014 jmp 0x104e1040 */
  f_104e1040(); return;
}

/* ProcessScenary @ 0x104e1019 (5 bytes, 1 insns) */
void f_104e1019(void) {
  FTRACE(0x104e1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e1019 jmp 0x104e13b0 */
  f_104e13b0(); return;
}

/* FUN_10001040 @ 0x104e1040 (67 bytes, 26 insns) */
void f_104e1040(void) {
  FTRACE(0x104e1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e1040 push ebp */
  push32((uint32_t)(EBP));
  /* 104e1041 mov ebp, esp */
  EBP = (ESP);
  /* 104e1043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e1046 push ebx */
  push32((uint32_t)(EBX));
  /* 104e1047 push esi */
  push32((uint32_t)(ESI));
  /* 104e1048 push edi */
  push32((uint32_t)(EDI));
  /* 104e1049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 104e104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 104e1051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104e1056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104e1058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1062 je 0x104e1066 */
  if (C.zf) goto L_104e1066;
  /* 104e1064 jmp 0x104e106b */
  goto L_104e106b;
L_104e1066:;
  /* 104e1066 call 0x104e100a */
  push32(0x104e106bu); f_104e100a();
L_104e106b:;
  /* 104e106b mov eax, 1 */
  EAX = (0x1u);
  /* 104e1070 pop edi */
  EDI = (pop32());
  /* 104e1071 pop esi */
  ESI = (pop32());
  /* 104e1072 pop ebx */
  EBX = (pop32());
  /* 104e1073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1078 call 0x104e1f10 */
  push32(0x104e107du); f_104e1f10();
  /* 104e107d mov esp, ebp */
  ESP = (EBP);
  /* 104e107f pop ebp */
  EBP = (pop32());
  /* 104e1080 ret 0xc */
  ESPCHK(0x104e1040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x104e10a0 (626 bytes, 166 insns) */
void f_104e10a0(void) {
  FTRACE(0x104e10a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e10a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e10a1 mov ebp, esp */
  EBP = (ESP);
  /* 104e10a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e10a6 push ebx */
  push32((uint32_t)(EBX));
  /* 104e10a7 push esi */
  push32((uint32_t)(ESI));
  /* 104e10a8 push edi */
  push32((uint32_t)(EDI));
  /* 104e10a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 104e10ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104e10b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104e10b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104e10b8 mov esi, esp */
  ESI = (ESP);
  /* 104e10ba push 0x1050a0f0 */
  push32((uint32_t)(0x1050a0f0u));
  /* 104e10bf push 0x1050f448 */
  push32((uint32_t)(0x1050f448u));
  /* 104e10c4 call dword ptr [0x105123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123ec))), 0x104e10cau);
  /* 104e10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e10cf call 0x104e1f10 */
  push32(0x104e10d4u); f_104e1f10();
  /* 104e10d4 mov esi, esp */
  ESI = (ESP);
  /* 104e10d6 push 0x1050a0e8 */
  push32((uint32_t)(0x1050a0e8u));
  /* 104e10db push 0x1050f450 */
  push32((uint32_t)(0x1050f450u));
  /* 104e10e0 call dword ptr [0x105123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123ec))), 0x104e10e6u);
  /* 104e10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e10eb call 0x104e1f10 */
  push32(0x104e10f0u); f_104e1f10();
  /* 104e10f0 mov esi, esp */
  ESI = (ESP);
  /* 104e10f2 push 0x1050a0e0 */
  push32((uint32_t)(0x1050a0e0u));
  /* 104e10f7 push 0x1050f458 */
  push32((uint32_t)(0x1050f458u));
  /* 104e10fc call dword ptr [0x105123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123ec))), 0x104e1102u);
  /* 104e1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1107 call 0x104e1f10 */
  push32(0x104e110cu); f_104e1f10();
  /* 104e110c mov esi, esp */
  ESI = (ESP);
  /* 104e110e push 0x1050a0d8 */
  push32((uint32_t)(0x1050a0d8u));
  /* 104e1113 push 0x1050f440 */
  push32((uint32_t)(0x1050f440u));
  /* 104e1118 call dword ptr [0x105123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123ec))), 0x104e111eu);
  /* 104e111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1123 call 0x104e1f10 */
  push32(0x104e1128u); f_104e1f10();
  /* 104e1128 mov esi, esp */
  ESI = (ESP);
  /* 104e112a push 0x1050a0d0 */
  push32((uint32_t)(0x1050a0d0u));
  /* 104e112f push 0x1050f438 */
  push32((uint32_t)(0x1050f438u));
  /* 104e1134 call dword ptr [0x105123ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123ec))), 0x104e113au);
  /* 104e113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e113f call 0x104e1f10 */
  push32(0x104e1144u); f_104e1f10();
  /* 104e1144 mov esi, esp */
  ESI = (ESP);
  /* 104e1146 push 0x1050a0c8 */
  push32((uint32_t)(0x1050a0c8u));
  /* 104e114b push 0x1050f3e0 */
  push32((uint32_t)(0x1050f3e0u));
  /* 104e1150 call dword ptr [0x105123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f0))), 0x104e1156u);
  /* 104e1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e115b call 0x104e1f10 */
  push32(0x104e1160u); f_104e1f10();
  /* 104e1160 mov esi, esp */
  ESI = (ESP);
  /* 104e1162 push 0x1050a0c0 */
  push32((uint32_t)(0x1050a0c0u));
  /* 104e1167 push 0x1050f3f0 */
  push32((uint32_t)(0x1050f3f0u));
  /* 104e116c call dword ptr [0x105123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f0))), 0x104e1172u);
  /* 104e1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1177 call 0x104e1f10 */
  push32(0x104e117cu); f_104e1f10();
  /* 104e117c mov esi, esp */
  ESI = (ESP);
  /* 104e117e push 0x1050a0b8 */
  push32((uint32_t)(0x1050a0b8u));
  /* 104e1183 push 0x1050f3e8 */
  push32((uint32_t)(0x1050f3e8u));
  /* 104e1188 call dword ptr [0x105123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f0))), 0x104e118eu);
  /* 104e118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1193 call 0x104e1f10 */
  push32(0x104e1198u); f_104e1f10();
  /* 104e1198 mov esi, esp */
  ESI = (ESP);
  /* 104e119a push 0x1050a0b0 */
  push32((uint32_t)(0x1050a0b0u));
  /* 104e119f push 0x1050f400 */
  push32((uint32_t)(0x1050f400u));
  /* 104e11a4 call dword ptr [0x105123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f0))), 0x104e11aau);
  /* 104e11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e11af call 0x104e1f10 */
  push32(0x104e11b4u); f_104e1f10();
  /* 104e11b4 mov esi, esp */
  ESI = (ESP);
  /* 104e11b6 push 0x1050a0a8 */
  push32((uint32_t)(0x1050a0a8u));
  /* 104e11bb push 0x1050f3f8 */
  push32((uint32_t)(0x1050f3f8u));
  /* 104e11c0 call dword ptr [0x105123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f0))), 0x104e11c6u);
  /* 104e11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e11cb call 0x104e1f10 */
  push32(0x104e11d0u); f_104e1f10();
  /* 104e11d0 mov esi, esp */
  ESI = (ESP);
  /* 104e11d2 push 0x1050a0a0 */
  push32((uint32_t)(0x1050a0a0u));
  /* 104e11d7 push 0x1050f410 */
  push32((uint32_t)(0x1050f410u));
  /* 104e11dc call dword ptr [0x105123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f0))), 0x104e11e2u);
  /* 104e11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e11e7 call 0x104e1f10 */
  push32(0x104e11ecu); f_104e1f10();
  /* 104e11ec mov esi, esp */
  ESI = (ESP);
  /* 104e11ee push 0x1050a098 */
  push32((uint32_t)(0x1050a098u));
  /* 104e11f3 push 0x1050f408 */
  push32((uint32_t)(0x1050f408u));
  /* 104e11f8 call dword ptr [0x105123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f0))), 0x104e11feu);
  /* 104e11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1203 call 0x104e1f10 */
  push32(0x104e1208u); f_104e1f10();
  /* 104e1208 mov esi, esp */
  ESI = (ESP);
  /* 104e120a push 0x1050a090 */
  push32((uint32_t)(0x1050a090u));
  /* 104e120f push 0x1050f420 */
  push32((uint32_t)(0x1050f420u));
  /* 104e1214 call dword ptr [0x105123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f0))), 0x104e121au);
  /* 104e121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e121f call 0x104e1f10 */
  push32(0x104e1224u); f_104e1f10();
  /* 104e1224 mov esi, esp */
  ESI = (ESP);
  /* 104e1226 push 0x1050a088 */
  push32((uint32_t)(0x1050a088u));
  /* 104e122b push 0x1050f418 */
  push32((uint32_t)(0x1050f418u));
  /* 104e1230 call dword ptr [0x105123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f0))), 0x104e1236u);
  /* 104e1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e123b call 0x104e1f10 */
  push32(0x104e1240u); f_104e1f10();
  /* 104e1240 mov esi, esp */
  ESI = (ESP);
  /* 104e1242 push 0x1050a07c */
  push32((uint32_t)(0x1050a07cu));
  /* 104e1247 push 0x1050f468 */
  push32((uint32_t)(0x1050f468u));
  /* 104e124c call dword ptr [0x105123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f0))), 0x104e1252u);
  /* 104e1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1257 call 0x104e1f10 */
  push32(0x104e125cu); f_104e1f10();
  /* 104e125c mov esi, esp */
  ESI = (ESP);
  /* 104e125e push 0x1050a070 */
  push32((uint32_t)(0x1050a070u));
  /* 104e1263 push 0x1050f470 */
  push32((uint32_t)(0x1050f470u));
  /* 104e1268 call dword ptr [0x105123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f0))), 0x104e126eu);
  /* 104e126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1273 call 0x104e1f10 */
  push32(0x104e1278u); f_104e1f10();
  /* 104e1278 mov esi, esp */
  ESI = (ESP);
  /* 104e127a push 0x1050a05c */
  push32((uint32_t)(0x1050a05cu));
  /* 104e127f push 0x1050f430 */
  push32((uint32_t)(0x1050f430u));
  /* 104e1284 call dword ptr [0x105123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f4))), 0x104e128au);
  /* 104e128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e128f call 0x104e1f10 */
  push32(0x104e1294u); f_104e1f10();
  /* 104e1294 mov esi, esp */
  ESI = (ESP);
  /* 104e1296 push 0x1050a048 */
  push32((uint32_t)(0x1050a048u));
  /* 104e129b push 0x1050f460 */
  push32((uint32_t)(0x1050f460u));
  /* 104e12a0 call dword ptr [0x105123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f4))), 0x104e12a6u);
  /* 104e12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e12ab call 0x104e1f10 */
  push32(0x104e12b0u); f_104e1f10();
  /* 104e12b0 mov esi, esp */
  ESI = (ESP);
  /* 104e12b2 push 0x1050a034 */
  push32((uint32_t)(0x1050a034u));
  /* 104e12b7 push 0x1050f428 */
  push32((uint32_t)(0x1050f428u));
  /* 104e12bc call dword ptr [0x105123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f4))), 0x104e12c2u);
  /* 104e12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e12c7 call 0x104e1f10 */
  push32(0x104e12ccu); f_104e1f10();
  /* 104e12cc mov esi, esp */
  ESI = (ESP);
  /* 104e12ce push 0x1050a024 */
  push32((uint32_t)(0x1050a024u));
  /* 104e12d3 push 0x1050f478 */
  push32((uint32_t)(0x1050f478u));
  /* 104e12d8 call dword ptr [0x105123f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f4))), 0x104e12deu);
  /* 104e12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e12e3 call 0x104e1f10 */
  push32(0x104e12e8u); f_104e1f10();
  /* 104e12e8 mov esi, esp */
  ESI = (ESP);
  /* 104e12ea push 0x1050a01c */
  push32((uint32_t)(0x1050a01cu));
  /* 104e12ef push 1 */
  push32((uint32_t)(0x1u));
  /* 104e12f1 call dword ptr [0x105123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123f8))), 0x104e12f7u);
  /* 104e12f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e12fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e12fc call 0x104e1f10 */
  push32(0x104e1301u); f_104e1f10();
  /* 104e1301 pop edi */
  EDI = (pop32());
  /* 104e1302 pop esi */
  ESI = (pop32());
  /* 104e1303 pop ebx */
  EBX = (pop32());
  /* 104e1304 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1307 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1309 call 0x104e1f10 */
  push32(0x104e130eu); f_104e1f10();
  /* 104e130e mov esp, ebp */
  ESP = (EBP);
  /* 104e1310 pop ebp */
  EBP = (pop32());
  /* 104e1311 ret  */
  ESPCHK(0x104e10a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100013b0 @ 0x104e13b0 (2103 bytes, 631 insns) */
void f_104e13b0(void) {
  FTRACE(0x104e13b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e13b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e13b1 mov ebp, esp */
  EBP = (ESP);
  /* 104e13b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e13b6 push ebx */
  push32((uint32_t)(EBX));
  /* 104e13b7 push esi */
  push32((uint32_t)(ESI));
  /* 104e13b8 push edi */
  push32((uint32_t)(EDI));
  /* 104e13b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 104e13bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104e13c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104e13c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104e13c8 mov esi, esp */
  ESI = (ESP);
  /* 104e13ca push 1 */
  push32((uint32_t)(0x1u));
  /* 104e13cc call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e13d2u);
  /* 104e13d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e13d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e13d7 call 0x104e1f10 */
  push32(0x104e13dcu); f_104e1f10();
  /* 104e13dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e13e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e13e3 je 0x104e166f */
  if (C.zf) goto L_104e166f;
  /* 104e13e9 mov esi, esp */
  ESI = (ESP);
  /* 104e13eb push 0 */
  push32((uint32_t)(0x0u));
  /* 104e13ed push 1 */
  push32((uint32_t)(0x1u));
  /* 104e13ef call dword ptr [0x105123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c8))), 0x104e13f5u);
  /* 104e13f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e13f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e13fa call 0x104e1f10 */
  push32(0x104e13ffu); f_104e1f10();
  /* 104e13ff mov esi, esp */
  ESI = (ESP);
  /* 104e1401 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 104e1406 push 3 */
  push32((uint32_t)(0x3u));
  /* 104e1408 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e140a call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e1410u);
  /* 104e1410 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1413 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1415 call 0x104e1f10 */
  push32(0x104e141au); f_104e1f10();
  /* 104e141a mov esi, esp */
  ESI = (ESP);
  /* 104e141c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 104e1421 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e1423 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1425 call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e142bu);
  /* 104e142b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e142e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1430 call 0x104e1f10 */
  push32(0x104e1435u); f_104e1f10();
  /* 104e1435 mov esi, esp */
  ESI = (ESP);
  /* 104e1437 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1439 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e143b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e143d call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e1443u);
  /* 104e1443 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1446 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1448 call 0x104e1f10 */
  push32(0x104e144du); f_104e1f10();
  /* 104e144d mov esi, esp */
  ESI = (ESP);
  /* 104e144f push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1451 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e1453 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1455 call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e145bu);
  /* 104e145b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e145e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1460 call 0x104e1f10 */
  push32(0x104e1465u); f_104e1f10();
  /* 104e1465 mov esi, esp */
  ESI = (ESP);
  /* 104e1467 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 104e146c push 5 */
  push32((uint32_t)(0x5u));
  /* 104e146e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1470 call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e1476u);
  /* 104e1476 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1479 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e147b call 0x104e1f10 */
  push32(0x104e1480u); f_104e1f10();
  /* 104e1480 mov esi, esp */
  ESI = (ESP);
  /* 104e1482 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 104e1487 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e1489 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e148b call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e1491u);
  /* 104e1491 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1494 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1496 call 0x104e1f10 */
  push32(0x104e149bu); f_104e1f10();
  /* 104e149b mov esi, esp */
  ESI = (ESP);
  /* 104e149d push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 104e14a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 104e14a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e14a6 call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e14acu);
  /* 104e14ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e14af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e14b1 call 0x104e1f10 */
  push32(0x104e14b6u); f_104e1f10();
  /* 104e14b6 mov esi, esp */
  ESI = (ESP);
  /* 104e14b8 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 104e14bd push 1 */
  push32((uint32_t)(0x1u));
  /* 104e14bf push 1 */
  push32((uint32_t)(0x1u));
  /* 104e14c1 call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e14c7u);
  /* 104e14c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e14ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e14cc call 0x104e1f10 */
  push32(0x104e14d1u); f_104e1f10();
  /* 104e14d1 mov esi, esp */
  ESI = (ESP);
  /* 104e14d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e14d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e14d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e14d9 call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e14dfu);
  /* 104e14df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e14e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e14e4 call 0x104e1f10 */
  push32(0x104e14e9u); f_104e1f10();
  /* 104e14e9 mov esi, esp */
  ESI = (ESP);
  /* 104e14eb push 0 */
  push32((uint32_t)(0x0u));
  /* 104e14ed push 2 */
  push32((uint32_t)(0x2u));
  /* 104e14ef push 1 */
  push32((uint32_t)(0x1u));
  /* 104e14f1 call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e14f7u);
  /* 104e14f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e14fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e14fc call 0x104e1f10 */
  push32(0x104e1501u); f_104e1f10();
  /* 104e1501 mov esi, esp */
  ESI = (ESP);
  /* 104e1503 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 104e1508 push 5 */
  push32((uint32_t)(0x5u));
  /* 104e150a push 1 */
  push32((uint32_t)(0x1u));
  /* 104e150c call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e1512u);
  /* 104e1512 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1515 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1517 call 0x104e1f10 */
  push32(0x104e151cu); f_104e1f10();
  /* 104e151c mov esi, esp */
  ESI = (ESP);
  /* 104e151e push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 104e1523 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e1525 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e1527 call dword ptr [0x105123cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123cc))), 0x104e152du);
  /* 104e152d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1532 call 0x104e1f10 */
  push32(0x104e1537u); f_104e1f10();
  /* 104e1537 mov esi, esp */
  ESI = (ESP);
  /* 104e1539 push 0x1050a15c */
  push32((uint32_t)(0x1050a15cu));
  /* 104e153e call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e1544u);
  /* 104e1544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1547 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1549 call 0x104e1f10 */
  push32(0x104e154eu); f_104e1f10();
  /* 104e154e mov esi, esp */
  ESI = (ESP);
  /* 104e1550 push 0x1050a150 */
  push32((uint32_t)(0x1050a150u));
  /* 104e1555 call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e155bu);
  /* 104e155b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e155e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1560 call 0x104e1f10 */
  push32(0x104e1565u); f_104e1f10();
  /* 104e1565 mov esi, esp */
  ESI = (ESP);
  /* 104e1567 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1569 push 0x1050f408 */
  push32((uint32_t)(0x1050f408u));
  /* 104e156e call dword ptr [0x105123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d4))), 0x104e1574u);
  /* 104e1574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1577 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1579 call 0x104e1f10 */
  push32(0x104e157eu); f_104e1f10();
  /* 104e157e mov esi, esp */
  ESI = (ESP);
  /* 104e1580 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1582 push 0x1050f448 */
  push32((uint32_t)(0x1050f448u));
  /* 104e1587 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e1589 call dword ptr [0x105123d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d8))), 0x104e158fu);
  /* 104e158f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1592 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1594 call 0x104e1f10 */
  push32(0x104e1599u); f_104e1f10();
  /* 104e1599 mov esi, esp */
  ESI = (ESP);
  /* 104e159b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e159d push 0x1050f420 */
  push32((uint32_t)(0x1050f420u));
  /* 104e15a2 call dword ptr [0x105123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d4))), 0x104e15a8u);
  /* 104e15a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e15ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e15ad call 0x104e1f10 */
  push32(0x104e15b2u); f_104e1f10();
  /* 104e15b2 mov esi, esp */
  ESI = (ESP);
  /* 104e15b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e15b6 push 0x1050f450 */
  push32((uint32_t)(0x1050f450u));
  /* 104e15bb push 1 */
  push32((uint32_t)(0x1u));
  /* 104e15bd call dword ptr [0x105123d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d8))), 0x104e15c3u);
  /* 104e15c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e15c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e15c8 call 0x104e1f10 */
  push32(0x104e15cdu); f_104e1f10();
  /* 104e15cd mov esi, esp */
  ESI = (ESP);
  /* 104e15cf push 0 */
  push32((uint32_t)(0x0u));
  /* 104e15d1 push 0x1050f418 */
  push32((uint32_t)(0x1050f418u));
  /* 104e15d6 call dword ptr [0x105123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d4))), 0x104e15dcu);
  /* 104e15dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e15df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e15e1 call 0x104e1f10 */
  push32(0x104e15e6u); f_104e1f10();
  /* 104e15e6 mov esi, esp */
  ESI = (ESP);
  /* 104e15e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e15ea push 0 */
  push32((uint32_t)(0x0u));
  /* 104e15ec push 0x1050f458 */
  push32((uint32_t)(0x1050f458u));
  /* 104e15f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e15f3 call dword ptr [0x105123dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123dc))), 0x104e15f9u);
  /* 104e15f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e15fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e15fe call 0x104e1f10 */
  push32(0x104e1603u); f_104e1f10();
  /* 104e1603 mov esi, esp */
  ESI = (ESP);
  /* 104e1605 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1607 push 0x1050f468 */
  push32((uint32_t)(0x1050f468u));
  /* 104e160c call dword ptr [0x105123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d4))), 0x104e1612u);
  /* 104e1612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1615 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1617 call 0x104e1f10 */
  push32(0x104e161cu); f_104e1f10();
  /* 104e161c mov esi, esp */
  ESI = (ESP);
  /* 104e161e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1620 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1622 push 0x1050f440 */
  push32((uint32_t)(0x1050f440u));
  /* 104e1627 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e1629 call dword ptr [0x105123dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123dc))), 0x104e162fu);
  /* 104e162f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1632 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1634 call 0x104e1f10 */
  push32(0x104e1639u); f_104e1f10();
  /* 104e1639 mov esi, esp */
  ESI = (ESP);
  /* 104e163b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e163d push 0x1050f470 */
  push32((uint32_t)(0x1050f470u));
  /* 104e1642 call dword ptr [0x105123d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d4))), 0x104e1648u);
  /* 104e1648 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e164b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e164d call 0x104e1f10 */
  push32(0x104e1652u); f_104e1f10();
  /* 104e1652 mov esi, esp */
  ESI = (ESP);
  /* 104e1654 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1656 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1658 push 0x1050f438 */
  push32((uint32_t)(0x1050f438u));
  /* 104e165d push 1 */
  push32((uint32_t)(0x1u));
  /* 104e165f call dword ptr [0x105123dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123dc))), 0x104e1665u);
  /* 104e1665 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1668 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e166a call 0x104e1f10 */
  push32(0x104e166fu); f_104e1f10();
L_104e166f:;
  /* 104e166f mov esi, esp */
  ESI = (ESP);
  /* 104e1671 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e1673 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1679u);
  /* 104e1679 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e167c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e167e call 0x104e1f10 */
  push32(0x104e1683u); f_104e1f10();
  /* 104e1683 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e168a je 0x104e16e7 */
  if (C.zf) goto L_104e16e7;
  /* 104e168c push 0 */
  push32((uint32_t)(0x0u));
  /* 104e168e push 0x1050f430 */
  push32((uint32_t)(0x1050f430u));
  /* 104e1693 call 0x104e100f */
  push32(0x104e1698u); f_104e100f();
  /* 104e1698 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e169b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e169d jle 0x104e16e7 */
  if ((C.zf||C.sf!=C.of)) goto L_104e16e7;
  /* 104e169f mov esi, esp */
  ESI = (ESP);
  /* 104e16a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e16a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e16a5 call dword ptr [0x105123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c8))), 0x104e16abu);
  /* 104e16ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e16ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e16b0 call 0x104e1f10 */
  push32(0x104e16b5u); f_104e1f10();
  /* 104e16b5 mov esi, esp */
  ESI = (ESP);
  /* 104e16b7 push 0x1050a148 */
  push32((uint32_t)(0x1050a148u));
  /* 104e16bc call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e16c2u);
  /* 104e16c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e16c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e16c7 call 0x104e1f10 */
  push32(0x104e16ccu); f_104e1f10();
  /* 104e16cc mov esi, esp */
  ESI = (ESP);
  /* 104e16ce push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 104e16d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e16d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e16d7 call dword ptr [0x105123e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123e0))), 0x104e16ddu);
  /* 104e16dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e16e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e16e2 call 0x104e1f10 */
  push32(0x104e16e7u); f_104e1f10();
L_104e16e7:;
  /* 104e16e7 mov esi, esp */
  ESI = (ESP);
  /* 104e16e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e16eb call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e16f1u);
  /* 104e16f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e16f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e16f6 call 0x104e1f10 */
  push32(0x104e16fbu); f_104e1f10();
  /* 104e16fb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1700 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1702 je 0x104e176e */
  if (C.zf) goto L_104e176e;
  /* 104e1704 mov esi, esp */
  ESI = (ESP);
  /* 104e1706 push 6 */
  push32((uint32_t)(0x6u));
  /* 104e1708 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e170eu);
  /* 104e170e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1711 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1713 call 0x104e1f10 */
  push32(0x104e1718u); f_104e1f10();
  /* 104e1718 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e171d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e171f je 0x104e176e */
  if (C.zf) goto L_104e176e;
  /* 104e1721 push 0x1050f3e8 */
  push32((uint32_t)(0x1050f3e8u));
  /* 104e1726 call 0x104e1005 */
  push32(0x104e172bu); f_104e1005();
  /* 104e172b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e172e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1730 jne 0x104e176e */
  if (!C.zf) goto L_104e176e;
  /* 104e1732 mov esi, esp */
  ESI = (ESP);
  /* 104e1734 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1736 push 6 */
  push32((uint32_t)(0x6u));
  /* 104e1738 call dword ptr [0x105123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c8))), 0x104e173eu);
  /* 104e173e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1741 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1743 call 0x104e1f10 */
  push32(0x104e1748u); f_104e1f10();
  /* 104e1748 mov esi, esp */
  ESI = (ESP);
  /* 104e174a push 0x1050a140 */
  push32((uint32_t)(0x1050a140u));
  /* 104e174f call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e1755u);
  /* 104e1755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1758 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e175a call 0x104e1f10 */
  push32(0x104e175fu); f_104e1f10();
  /* 104e175f mov esi, esp */
  ESI = (ESP);
  /* 104e1761 call dword ptr [0x105123e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123e4))), 0x104e1767u);
  /* 104e1767 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1769 call 0x104e1f10 */
  push32(0x104e176eu); f_104e1f10();
L_104e176e:;
  /* 104e176e mov esi, esp */
  ESI = (ESP);
  /* 104e1770 push 3 */
  push32((uint32_t)(0x3u));
  /* 104e1772 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1778u);
  /* 104e1778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e177b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e177d call 0x104e1f10 */
  push32(0x104e1782u); f_104e1f10();
  /* 104e1782 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1789 je 0x104e17e6 */
  if (C.zf) goto L_104e17e6;
  /* 104e178b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e178d push 0x1050f460 */
  push32((uint32_t)(0x1050f460u));
  /* 104e1792 call 0x104e100f */
  push32(0x104e1797u); f_104e100f();
  /* 104e1797 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e179a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e179c jle 0x104e17e6 */
  if ((C.zf||C.sf!=C.of)) goto L_104e17e6;
  /* 104e179e mov esi, esp */
  ESI = (ESP);
  /* 104e17a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e17a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 104e17a4 call dword ptr [0x105123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c8))), 0x104e17aau);
  /* 104e17aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e17ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e17af call 0x104e1f10 */
  push32(0x104e17b4u); f_104e1f10();
  /* 104e17b4 mov esi, esp */
  ESI = (ESP);
  /* 104e17b6 push 0x1050a138 */
  push32((uint32_t)(0x1050a138u));
  /* 104e17bb call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e17c1u);
  /* 104e17c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e17c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e17c6 call 0x104e1f10 */
  push32(0x104e17cbu); f_104e1f10();
  /* 104e17cb mov esi, esp */
  ESI = (ESP);
  /* 104e17cd push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 104e17d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e17d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e17d6 call dword ptr [0x105123e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123e0))), 0x104e17dcu);
  /* 104e17dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e17df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e17e1 call 0x104e1f10 */
  push32(0x104e17e6u); f_104e1f10();
L_104e17e6:;
  /* 104e17e6 mov esi, esp */
  ESI = (ESP);
  /* 104e17e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 104e17ea call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e17f0u);
  /* 104e17f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e17f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e17f5 call 0x104e1f10 */
  push32(0x104e17fau); f_104e1f10();
  /* 104e17fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e17ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1801 je 0x104e186d */
  if (C.zf) goto L_104e186d;
  /* 104e1803 mov esi, esp */
  ESI = (ESP);
  /* 104e1805 push 6 */
  push32((uint32_t)(0x6u));
  /* 104e1807 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e180du);
  /* 104e180d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1810 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1812 call 0x104e1f10 */
  push32(0x104e1817u); f_104e1f10();
  /* 104e1817 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e181c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e181e je 0x104e186d */
  if (C.zf) goto L_104e186d;
  /* 104e1820 push 0x1050f400 */
  push32((uint32_t)(0x1050f400u));
  /* 104e1825 call 0x104e1005 */
  push32(0x104e182au); f_104e1005();
  /* 104e182a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e182d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e182f jne 0x104e186d */
  if (!C.zf) goto L_104e186d;
  /* 104e1831 mov esi, esp */
  ESI = (ESP);
  /* 104e1833 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1835 push 6 */
  push32((uint32_t)(0x6u));
  /* 104e1837 call dword ptr [0x105123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c8))), 0x104e183du);
  /* 104e183d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1840 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1842 call 0x104e1f10 */
  push32(0x104e1847u); f_104e1f10();
  /* 104e1847 mov esi, esp */
  ESI = (ESP);
  /* 104e1849 push 0x1050a130 */
  push32((uint32_t)(0x1050a130u));
  /* 104e184e call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e1854u);
  /* 104e1854 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1857 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1859 call 0x104e1f10 */
  push32(0x104e185eu); f_104e1f10();
  /* 104e185e mov esi, esp */
  ESI = (ESP);
  /* 104e1860 call dword ptr [0x105123e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123e4))), 0x104e1866u);
  /* 104e1866 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1868 call 0x104e1f10 */
  push32(0x104e186du); f_104e1f10();
L_104e186d:;
  /* 104e186d mov esi, esp */
  ESI = (ESP);
  /* 104e186f push 4 */
  push32((uint32_t)(0x4u));
  /* 104e1871 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1877u);
  /* 104e1877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e187a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e187c call 0x104e1f10 */
  push32(0x104e1881u); f_104e1f10();
  /* 104e1881 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1888 je 0x104e18e5 */
  if (C.zf) goto L_104e18e5;
  /* 104e188a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e188c push 0x1050f428 */
  push32((uint32_t)(0x1050f428u));
  /* 104e1891 call 0x104e100f */
  push32(0x104e1896u); f_104e100f();
  /* 104e1896 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e189b jle 0x104e18e5 */
  if ((C.zf||C.sf!=C.of)) goto L_104e18e5;
  /* 104e189d mov esi, esp */
  ESI = (ESP);
  /* 104e189f push 0 */
  push32((uint32_t)(0x0u));
  /* 104e18a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e18a3 call dword ptr [0x105123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c8))), 0x104e18a9u);
  /* 104e18a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e18ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e18ae call 0x104e1f10 */
  push32(0x104e18b3u); f_104e1f10();
  /* 104e18b3 mov esi, esp */
  ESI = (ESP);
  /* 104e18b5 push 0x1050a128 */
  push32((uint32_t)(0x1050a128u));
  /* 104e18ba call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e18c0u);
  /* 104e18c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e18c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e18c5 call 0x104e1f10 */
  push32(0x104e18cau); f_104e1f10();
  /* 104e18ca mov esi, esp */
  ESI = (ESP);
  /* 104e18cc push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 104e18d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e18d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e18d5 call dword ptr [0x105123e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123e0))), 0x104e18dbu);
  /* 104e18db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e18de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e18e0 call 0x104e1f10 */
  push32(0x104e18e5u); f_104e1f10();
L_104e18e5:;
  /* 104e18e5 mov esi, esp */
  ESI = (ESP);
  /* 104e18e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e18e9 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e18efu);
  /* 104e18ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e18f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e18f4 call 0x104e1f10 */
  push32(0x104e18f9u); f_104e1f10();
  /* 104e18f9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e18fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1900 je 0x104e196c */
  if (C.zf) goto L_104e196c;
  /* 104e1902 mov esi, esp */
  ESI = (ESP);
  /* 104e1904 push 6 */
  push32((uint32_t)(0x6u));
  /* 104e1906 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e190cu);
  /* 104e190c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e190f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1911 call 0x104e1f10 */
  push32(0x104e1916u); f_104e1f10();
  /* 104e1916 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e191b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e191d je 0x104e196c */
  if (C.zf) goto L_104e196c;
  /* 104e191f push 0x1050f3f8 */
  push32((uint32_t)(0x1050f3f8u));
  /* 104e1924 call 0x104e1005 */
  push32(0x104e1929u); f_104e1005();
  /* 104e1929 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e192c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e192e jne 0x104e196c */
  if (!C.zf) goto L_104e196c;
  /* 104e1930 mov esi, esp */
  ESI = (ESP);
  /* 104e1932 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1934 push 6 */
  push32((uint32_t)(0x6u));
  /* 104e1936 call dword ptr [0x105123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c8))), 0x104e193cu);
  /* 104e193c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e193f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1941 call 0x104e1f10 */
  push32(0x104e1946u); f_104e1f10();
  /* 104e1946 mov esi, esp */
  ESI = (ESP);
  /* 104e1948 push 0x1050a120 */
  push32((uint32_t)(0x1050a120u));
  /* 104e194d call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e1953u);
  /* 104e1953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1956 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1958 call 0x104e1f10 */
  push32(0x104e195du); f_104e1f10();
  /* 104e195d mov esi, esp */
  ESI = (ESP);
  /* 104e195f call dword ptr [0x105123e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123e4))), 0x104e1965u);
  /* 104e1965 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1967 call 0x104e1f10 */
  push32(0x104e196cu); f_104e1f10();
L_104e196c:;
  /* 104e196c mov esi, esp */
  ESI = (ESP);
  /* 104e196e push 5 */
  push32((uint32_t)(0x5u));
  /* 104e1970 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1976u);
  /* 104e1976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1979 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e197b call 0x104e1f10 */
  push32(0x104e1980u); f_104e1f10();
  /* 104e1980 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1985 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1987 je 0x104e19ff */
  if (C.zf) goto L_104e19ff;
  /* 104e1989 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e198b push 0x1050f478 */
  push32((uint32_t)(0x1050f478u));
  /* 104e1990 call 0x104e100f */
  push32(0x104e1995u); f_104e100f();
  /* 104e1995 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e199a jle 0x104e19ff */
  if ((C.zf||C.sf!=C.of)) goto L_104e19ff;
  /* 104e199c mov esi, esp */
  ESI = (ESP);
  /* 104e199e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e19a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 104e19a2 call dword ptr [0x105123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c8))), 0x104e19a8u);
  /* 104e19a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e19ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e19ad call 0x104e1f10 */
  push32(0x104e19b2u); f_104e1f10();
  /* 104e19b2 mov esi, esp */
  ESI = (ESP);
  /* 104e19b4 push 0x1050a118 */
  push32((uint32_t)(0x1050a118u));
  /* 104e19b9 call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e19bfu);
  /* 104e19bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e19c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e19c4 call 0x104e1f10 */
  push32(0x104e19c9u); f_104e1f10();
  /* 104e19c9 mov esi, esp */
  ESI = (ESP);
  /* 104e19cb push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 104e19d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e19d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e19d4 call dword ptr [0x105123e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123e0))), 0x104e19dau);
  /* 104e19da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e19dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e19df call 0x104e1f10 */
  push32(0x104e19e4u); f_104e1f10();
  /* 104e19e4 mov esi, esp */
  ESI = (ESP);
  /* 104e19e6 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 104e19eb push 5 */
  push32((uint32_t)(0x5u));
  /* 104e19ed push 0 */
  push32((uint32_t)(0x0u));
  /* 104e19ef call dword ptr [0x105123e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123e0))), 0x104e19f5u);
  /* 104e19f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e19f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e19fa call 0x104e1f10 */
  push32(0x104e19ffu); f_104e1f10();
L_104e19ff:;
  /* 104e19ff mov esi, esp */
  ESI = (ESP);
  /* 104e1a01 push 5 */
  push32((uint32_t)(0x5u));
  /* 104e1a03 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1a09u);
  /* 104e1a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1a0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1a0e call 0x104e1f10 */
  push32(0x104e1a13u); f_104e1f10();
  /* 104e1a13 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1a1a je 0x104e1a86 */
  if (C.zf) goto L_104e1a86;
  /* 104e1a1c mov esi, esp */
  ESI = (ESP);
  /* 104e1a1e push 6 */
  push32((uint32_t)(0x6u));
  /* 104e1a20 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1a26u);
  /* 104e1a26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1a29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1a2b call 0x104e1f10 */
  push32(0x104e1a30u); f_104e1f10();
  /* 104e1a30 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1a35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1a37 je 0x104e1a86 */
  if (C.zf) goto L_104e1a86;
  /* 104e1a39 push 0x1050f410 */
  push32((uint32_t)(0x1050f410u));
  /* 104e1a3e call 0x104e1005 */
  push32(0x104e1a43u); f_104e1005();
  /* 104e1a43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1a46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1a48 jne 0x104e1a86 */
  if (!C.zf) goto L_104e1a86;
  /* 104e1a4a mov esi, esp */
  ESI = (ESP);
  /* 104e1a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1a4e push 6 */
  push32((uint32_t)(0x6u));
  /* 104e1a50 call dword ptr [0x105123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c8))), 0x104e1a56u);
  /* 104e1a56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1a59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1a5b call 0x104e1f10 */
  push32(0x104e1a60u); f_104e1f10();
  /* 104e1a60 mov esi, esp */
  ESI = (ESP);
  /* 104e1a62 push 0x1050a110 */
  push32((uint32_t)(0x1050a110u));
  /* 104e1a67 call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e1a6du);
  /* 104e1a6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1a70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1a72 call 0x104e1f10 */
  push32(0x104e1a77u); f_104e1f10();
  /* 104e1a77 mov esi, esp */
  ESI = (ESP);
  /* 104e1a79 call dword ptr [0x105123e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123e4))), 0x104e1a7fu);
  /* 104e1a7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1a81 call 0x104e1f10 */
  push32(0x104e1a86u); f_104e1f10();
L_104e1a86:;
  /* 104e1a86 mov esi, esp */
  ESI = (ESP);
  /* 104e1a88 push 7 */
  push32((uint32_t)(0x7u));
  /* 104e1a8a call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1a90u);
  /* 104e1a90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1a93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1a95 call 0x104e1f10 */
  push32(0x104e1a9au); f_104e1f10();
  /* 104e1a9a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1aa1 je 0x104e1b5b */
  if (C.zf) goto L_104e1b5b;
  /* 104e1aa7 mov esi, esp */
  ESI = (ESP);
  /* 104e1aa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e1aab call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1ab1u);
  /* 104e1ab1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1ab4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1ab6 call 0x104e1f10 */
  push32(0x104e1abbu); f_104e1f10();
  /* 104e1abb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1ac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1ac2 jne 0x104e1b5b */
  if (!C.zf) goto L_104e1b5b;
  /* 104e1ac8 mov esi, esp */
  ESI = (ESP);
  /* 104e1aca push 3 */
  push32((uint32_t)(0x3u));
  /* 104e1acc call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1ad2u);
  /* 104e1ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1ad5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1ad7 call 0x104e1f10 */
  push32(0x104e1adcu); f_104e1f10();
  /* 104e1adc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1ae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1ae3 jne 0x104e1b5b */
  if (!C.zf) goto L_104e1b5b;
  /* 104e1ae5 mov esi, esp */
  ESI = (ESP);
  /* 104e1ae7 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e1ae9 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1aefu);
  /* 104e1aef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1af2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1af4 call 0x104e1f10 */
  push32(0x104e1af9u); f_104e1f10();
  /* 104e1af9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1afe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1b00 jne 0x104e1b5b */
  if (!C.zf) goto L_104e1b5b;
  /* 104e1b02 mov esi, esp */
  ESI = (ESP);
  /* 104e1b04 push 5 */
  push32((uint32_t)(0x5u));
  /* 104e1b06 call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1b0cu);
  /* 104e1b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1b0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1b11 call 0x104e1f10 */
  push32(0x104e1b16u); f_104e1f10();
  /* 104e1b16 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1b1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1b1d jne 0x104e1b5b */
  if (!C.zf) goto L_104e1b5b;
  /* 104e1b1f mov esi, esp */
  ESI = (ESP);
  /* 104e1b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1b23 push 7 */
  push32((uint32_t)(0x7u));
  /* 104e1b25 call dword ptr [0x105123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c8))), 0x104e1b2bu);
  /* 104e1b2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1b2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1b30 call 0x104e1f10 */
  push32(0x104e1b35u); f_104e1f10();
  /* 104e1b35 mov esi, esp */
  ESI = (ESP);
  /* 104e1b37 push 0x1050a104 */
  push32((uint32_t)(0x1050a104u));
  /* 104e1b3c call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e1b42u);
  /* 104e1b42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1b45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1b47 call 0x104e1f10 */
  push32(0x104e1b4cu); f_104e1f10();
  /* 104e1b4c mov esi, esp */
  ESI = (ESP);
  /* 104e1b4e call dword ptr [0x105123e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123e8))), 0x104e1b54u);
  /* 104e1b54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1b56 call 0x104e1f10 */
  push32(0x104e1b5bu); f_104e1f10();
L_104e1b5b:;
  /* 104e1b5b mov esi, esp */
  ESI = (ESP);
  /* 104e1b5d push 8 */
  push32((uint32_t)(0x8u));
  /* 104e1b5f call dword ptr [0x105123c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c4))), 0x104e1b65u);
  /* 104e1b65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1b68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1b6a call 0x104e1f10 */
  push32(0x104e1b6fu); f_104e1f10();
  /* 104e1b6f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1b76 je 0x104e1bd6 */
  if (C.zf) goto L_104e1bd6;
  /* 104e1b78 push 0x1050f3e0 */
  push32((uint32_t)(0x1050f3e0u));
  /* 104e1b7d call 0x104e1005 */
  push32(0x104e1b82u); f_104e1005();
  /* 104e1b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1b85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1b87 jne 0x104e1bd6 */
  if (!C.zf) goto L_104e1bd6;
  /* 104e1b89 push 0x1050f3f0 */
  push32((uint32_t)(0x1050f3f0u));
  /* 104e1b8e call 0x104e1005 */
  push32(0x104e1b93u); f_104e1005();
  /* 104e1b93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1b96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1b98 jne 0x104e1bd6 */
  if (!C.zf) goto L_104e1bd6;
  /* 104e1b9a mov esi, esp */
  ESI = (ESP);
  /* 104e1b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 104e1b9e push 8 */
  push32((uint32_t)(0x8u));
  /* 104e1ba0 call dword ptr [0x105123c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c8))), 0x104e1ba6u);
  /* 104e1ba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1ba9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1bab call 0x104e1f10 */
  push32(0x104e1bb0u); f_104e1f10();
  /* 104e1bb0 mov esi, esp */
  ESI = (ESP);
  /* 104e1bb2 push 0x1050a0f8 */
  push32((uint32_t)(0x1050a0f8u));
  /* 104e1bb7 call dword ptr [0x105123d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123d0))), 0x104e1bbdu);
  /* 104e1bbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1bc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1bc2 call 0x104e1f10 */
  push32(0x104e1bc7u); f_104e1f10();
  /* 104e1bc7 mov esi, esp */
  ESI = (ESP);
  /* 104e1bc9 call dword ptr [0x105123e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123e4))), 0x104e1bcfu);
  /* 104e1bcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1bd1 call 0x104e1f10 */
  push32(0x104e1bd6u); f_104e1f10();
L_104e1bd6:;
  /* 104e1bd6 pop edi */
  EDI = (pop32());
  /* 104e1bd7 pop esi */
  ESI = (pop32());
  /* 104e1bd8 pop ebx */
  EBX = (pop32());
  /* 104e1bd9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1bdc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1bde call 0x104e1f10 */
  push32(0x104e1be3u); f_104e1f10();
  /* 104e1be3 mov esp, ebp */
  ESP = (EBP);
  /* 104e1be5 pop ebp */
  EBP = (pop32());
  /* 104e1be6 ret  */
  ESPCHK(0x104e13b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e00 @ 0x104e1e00 (63 bytes, 26 insns) */
void f_104e1e00(void) {
  FTRACE(0x104e1e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e1e00 push ebp */
  push32((uint32_t)(EBP));
  /* 104e1e01 mov ebp, esp */
  EBP = (ESP);
  /* 104e1e03 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e1e06 push ebx */
  push32((uint32_t)(EBX));
  /* 104e1e07 push esi */
  push32((uint32_t)(ESI));
  /* 104e1e08 push edi */
  push32((uint32_t)(EDI));
  /* 104e1e09 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 104e1e0c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104e1e11 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104e1e16 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104e1e18 mov esi, esp */
  ESI = (ESP);
  /* 104e1e1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e1e1d push eax */
  push32((uint32_t)(EAX));
  /* 104e1e1e call dword ptr [0x105123c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123c0))), 0x104e1e24u);
  /* 104e1e24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1e27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1e29 call 0x104e1f10 */
  push32(0x104e1e2eu); f_104e1f10();
  /* 104e1e2e pop edi */
  EDI = (pop32());
  /* 104e1e2f pop esi */
  ESI = (pop32());
  /* 104e1e30 pop ebx */
  EBX = (pop32());
  /* 104e1e31 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1e34 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1e36 call 0x104e1f10 */
  push32(0x104e1e3bu); f_104e1f10();
  /* 104e1e3b mov esp, ebp */
  ESP = (EBP);
  /* 104e1e3d pop ebp */
  EBP = (pop32());
  /* 104e1e3e ret  */
  ESPCHK(0x104e1e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e50 @ 0x104e1e50 (67 bytes, 28 insns) */
void f_104e1e50(void) {
  FTRACE(0x104e1e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e1e50 push ebp */
  push32((uint32_t)(EBP));
  /* 104e1e51 mov ebp, esp */
  EBP = (ESP);
  /* 104e1e53 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e1e56 push ebx */
  push32((uint32_t)(EBX));
  /* 104e1e57 push esi */
  push32((uint32_t)(ESI));
  /* 104e1e58 push edi */
  push32((uint32_t)(EDI));
  /* 104e1e59 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 104e1e5c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104e1e61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104e1e66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104e1e68 mov esi, esp */
  ESI = (ESP);
  /* 104e1e6a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 104e1e6d push eax */
  push32((uint32_t)(EAX));
  /* 104e1e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e1e71 push ecx */
  push32((uint32_t)(ECX));
  /* 104e1e72 call dword ptr [0x105123bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105123bc))), 0x104e1e78u);
  /* 104e1e78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1e7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1e7d call 0x104e1f10 */
  push32(0x104e1e82u); f_104e1f10();
  /* 104e1e82 pop edi */
  EDI = (pop32());
  /* 104e1e83 pop esi */
  ESI = (pop32());
  /* 104e1e84 pop ebx */
  EBX = (pop32());
  /* 104e1e85 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1e88 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1e8a call 0x104e1f10 */
  push32(0x104e1e8fu); f_104e1f10();
  /* 104e1e8f mov esp, ebp */
  ESP = (EBP);
  /* 104e1e91 pop ebp */
  EBP = (pop32());
  /* 104e1e92 ret  */
  ESPCHK(0x104e1e50u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x104e1f10 (56 bytes, 28 insns) */
void f_104e1f10(void) {
  FTRACE(0x104e1f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e1f10 jne 0x104e1f13 */
  if (!C.zf) goto L_104e1f13;
  /* 104e1f12 ret  */
  ESPCHK(0x104e1f10u, _esp0);
  ESP += 4; return;
L_104e1f13:;
  /* 104e1f13 push ebp */
  push32((uint32_t)(EBP));
  /* 104e1f14 mov ebp, esp */
  EBP = (ESP);
  /* 104e1f16 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e1f19 push eax */
  push32((uint32_t)(EAX));
  /* 104e1f1a push edx */
  push32((uint32_t)(EDX));
  /* 104e1f1b push ebx */
  push32((uint32_t)(EBX));
  /* 104e1f1c push esi */
  push32((uint32_t)(ESI));
  /* 104e1f1d push edi */
  push32((uint32_t)(EDI));
  /* 104e1f1e push 0x1050a178 */
  push32((uint32_t)(0x1050a178u));
  /* 104e1f23 push 0x1050a174 */
  push32((uint32_t)(0x1050a174u));
  /* 104e1f28 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 104e1f2a push 0x1050a164 */
  push32((uint32_t)(0x1050a164u));
  /* 104e1f2f push 1 */
  push32((uint32_t)(0x1u));
  /* 104e1f31 call 0x104e22e0 */
  push32(0x104e1f36u); f_104e22e0();
  /* 104e1f36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1f39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1f3c jne 0x104e1f3f */
  if (!C.zf) goto L_104e1f3f;
  /* 104e1f3e int3  */
  x86_unimpl("int3 @ 0x104e1f3e");
L_104e1f3f:;
  /* 104e1f3f pop edi */
  EDI = (pop32());
  /* 104e1f40 pop esi */
  ESI = (pop32());
  /* 104e1f41 pop ebx */
  EBX = (pop32());
  /* 104e1f42 pop edx */
  EDX = (pop32());
  /* 104e1f43 pop eax */
  EAX = (pop32());
  /* 104e1f44 mov esp, ebp */
  ESP = (EBP);
  /* 104e1f46 pop ebp */
  EBP = (pop32());
  /* 104e1f47 ret  */
  ESPCHK(0x104e1f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f50 @ 0x104e1f50 (313 bytes, 78 insns) */
void f_104e1f50(void) {
  FTRACE(0x104e1f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e1f50 push ebp */
  push32((uint32_t)(EBP));
  /* 104e1f51 mov ebp, esp */
  EBP = (ESP);
  /* 104e1f53 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e1f57 jne 0x104e2017 */
  if (!C.zf) goto L_104e2017;
  /* 104e1f5d call dword ptr [0x1051227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051227c))), 0x104e1f63u);
  /* 104e1f63 mov dword ptr [0x1050f4c0], eax */
  w32((uint32_t)(0x1050f4c0), (EAX));
  /* 104e1f68 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e1f6a call 0x104e5a10 */
  push32(0x104e1f6fu); f_104e5a10();
  /* 104e1f6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1f74 jne 0x104e1f7d */
  if (!C.zf) goto L_104e1f7d;
  /* 104e1f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e1f78 jmp 0x104e2085 */
  goto L_104e2085;
L_104e1f7d:;
  /* 104e1f7d mov eax, dword ptr [0x1050f4c0] */
  EAX = (r32((uint32_t)(0x1050f4c0)));
  /* 104e1f82 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 104e1f85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1f8a mov dword ptr [0x1050f4cc], eax */
  w32((uint32_t)(0x1050f4cc), (EAX));
  /* 104e1f8f mov ecx, dword ptr [0x1050f4c0] */
  ECX = (r32((uint32_t)(0x1050f4c0)));
  /* 104e1f95 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e1f9b mov dword ptr [0x1050f4c8], ecx */
  w32((uint32_t)(0x1050f4c8), (ECX));
  /* 104e1fa1 mov edx, dword ptr [0x1050f4c8] */
  EDX = (r32((uint32_t)(0x1050f4c8)));
  /* 104e1fa7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104e1faa add edx, dword ptr [0x1050f4cc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1050f4cc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e1fb0 mov dword ptr [0x1050f4c4], edx */
  w32((uint32_t)(0x1050f4c4), (EDX));
  /* 104e1fb6 mov eax, dword ptr [0x1050f4c0] */
  EAX = (r32((uint32_t)(0x1050f4c0)));
  /* 104e1fbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104e1fbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e1fc3 mov dword ptr [0x1050f4c0], eax */
  w32((uint32_t)(0x1050f4c0), (EAX));
  /* 104e1fc8 call 0x104e2b80 */
  push32(0x104e1fcdu); f_104e2b80();
  /* 104e1fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e1fcf jne 0x104e1fdd */
  if (!C.zf) goto L_104e1fdd;
  /* 104e1fd1 call 0x104e5a60 */
  push32(0x104e1fd6u); f_104e5a60();
  /* 104e1fd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e1fd8 jmp 0x104e2085 */
  goto L_104e2085;
L_104e1fdd:;
  /* 104e1fdd call dword ptr [0x10512278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512278))), 0x104e1fe3u);
  /* 104e1fe3 mov dword ptr [0x1051100c], eax */
  w32((uint32_t)(0x1051100c), (EAX));
  /* 104e1fe8 call 0x104e57f0 */
  push32(0x104e1fedu); f_104e57f0();
  /* 104e1fed mov dword ptr [0x1050f4a8], eax */
  w32((uint32_t)(0x1050f4a8), (EAX));
  /* 104e1ff2 call 0x104e2e30 */
  push32(0x104e1ff7u); f_104e2e30();
  /* 104e1ff7 call 0x104e52e0 */
  push32(0x104e1ffcu); f_104e52e0();
  /* 104e1ffc call 0x104e5190 */
  push32(0x104e2001u); f_104e5190();
  /* 104e2001 call 0x104e2980 */
  push32(0x104e2006u); f_104e2980();
  /* 104e2006 mov ecx, dword ptr [0x1050f4a4] */
  ECX = (r32((uint32_t)(0x1050f4a4)));
  /* 104e200c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e200f mov dword ptr [0x1050f4a4], ecx */
  w32((uint32_t)(0x1050f4a4), (ECX));
  /* 104e2015 jmp 0x104e2080 */
  goto L_104e2080;
L_104e2017:;
  /* 104e2017 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e201b jne 0x104e2070 */
  if (!C.zf) goto L_104e2070;
  /* 104e201d cmp dword ptr [0x1050f4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2024 jle 0x104e206a */
  if ((C.zf||C.sf!=C.of)) goto L_104e206a;
  /* 104e2026 mov edx, dword ptr [0x1050f4a4] */
  EDX = (r32((uint32_t)(0x1050f4a4)));
  /* 104e202c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e202f mov dword ptr [0x1050f4a4], edx */
  w32((uint32_t)(0x1050f4a4), (EDX));
  /* 104e2035 cmp dword ptr [0x1050f4f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e203c jne 0x104e2043 */
  if (!C.zf) goto L_104e2043;
  /* 104e203e call 0x104e2a00 */
  push32(0x104e2043u); f_104e2a00();
L_104e2043:;
  /* 104e2043 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104e2045 call 0x104e4730 */
  push32(0x104e204au); f_104e4730();
  /* 104e204a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e204d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 104e2050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e2052 je 0x104e2059 */
  if (C.zf) goto L_104e2059;
  /* 104e2054 call 0x104e5040 */
  push32(0x104e2059u); f_104e5040();
L_104e2059:;
  /* 104e2059 call 0x104e3160 */
  push32(0x104e205eu); f_104e3160();
  /* 104e205e call 0x104e2c10 */
  push32(0x104e2063u); f_104e2c10();
  /* 104e2063 call 0x104e5a60 */
  push32(0x104e2068u); f_104e5a60();
  /* 104e2068 jmp 0x104e206e */
  goto L_104e206e;
L_104e206a:;
  /* 104e206a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e206c jmp 0x104e2085 */
  goto L_104e2085;
L_104e206e:;
  /* 104e206e jmp 0x104e2080 */
  goto L_104e2080;
L_104e2070:;
  /* 104e2070 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2074 jne 0x104e2080 */
  if (!C.zf) goto L_104e2080;
  /* 104e2076 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e2078 call 0x104e2d00 */
  push32(0x104e207du); f_104e2d00();
  /* 104e207d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2080:;
  /* 104e2080 mov eax, 1 */
  EAX = (0x1u);
L_104e2085:;
  /* 104e2085 pop ebp */
  EBP = (pop32());
  /* 104e2086 ret 0xc */
  ESPCHK(0x104e1f50u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x104e2090 (243 bytes, 86 insns) */
void f_104e2090(void) {
  FTRACE(0x104e2090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2090 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2091 mov ebp, esp */
  EBP = (ESP);
  /* 104e2093 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2094 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104e209b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e209f jne 0x104e20b1 */
  if (!C.zf) goto L_104e20b1;
  /* 104e20a1 cmp dword ptr [0x1050f4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e20a8 jne 0x104e20b1 */
  if (!C.zf) goto L_104e20b1;
  /* 104e20aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e20ac jmp 0x104e217d */
  goto L_104e217d;
L_104e20b1:;
  /* 104e20b1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e20b5 je 0x104e20bd */
  if (C.zf) goto L_104e20bd;
  /* 104e20b7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e20bb jne 0x104e20ff */
  if (!C.zf) goto L_104e20ff;
L_104e20bd:;
  /* 104e20bd cmp dword ptr [0x1051101c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1051101c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e20c4 je 0x104e20db */
  if (C.zf) goto L_104e20db;
  /* 104e20c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e20c9 push eax */
  push32((uint32_t)(EAX));
  /* 104e20ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e20cd push ecx */
  push32((uint32_t)(ECX));
  /* 104e20ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e20d1 push edx */
  push32((uint32_t)(EDX));
  /* 104e20d2 call dword ptr [0x1051101c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051101c))), 0x104e20d8u);
  /* 104e20d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e20db:;
  /* 104e20db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e20df je 0x104e20f5 */
  if (C.zf) goto L_104e20f5;
  /* 104e20e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e20e4 push eax */
  push32((uint32_t)(EAX));
  /* 104e20e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e20e8 push ecx */
  push32((uint32_t)(ECX));
  /* 104e20e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e20ec push edx */
  push32((uint32_t)(EDX));
  /* 104e20ed call 0x104e1f50 */
  push32(0x104e20f2u); f_104e1f50();
  /* 104e20f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e20f5:;
  /* 104e20f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e20f9 jne 0x104e20ff */
  if (!C.zf) goto L_104e20ff;
  /* 104e20fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e20fd jmp 0x104e217d */
  goto L_104e217d;
L_104e20ff:;
  /* 104e20ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e2102 push eax */
  push32((uint32_t)(EAX));
  /* 104e2103 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e2106 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2107 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e210a push edx */
  push32((uint32_t)(EDX));
  /* 104e210b call 0x104e1014 */
  push32(0x104e2110u); f_104e1014();
  /* 104e2110 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e2113 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2117 jne 0x104e212e */
  if (!C.zf) goto L_104e212e;
  /* 104e2119 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e211d jne 0x104e212e */
  if (!C.zf) goto L_104e212e;
  /* 104e211f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e2122 push eax */
  push32((uint32_t)(EAX));
  /* 104e2123 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e2125 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2128 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2129 call 0x104e1f50 */
  push32(0x104e212eu); f_104e1f50();
L_104e212e:;
  /* 104e212e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2132 je 0x104e213a */
  if (C.zf) goto L_104e213a;
  /* 104e2134 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2138 jne 0x104e217a */
  if (!C.zf) goto L_104e217a;
L_104e213a:;
  /* 104e213a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e213d push edx */
  push32((uint32_t)(EDX));
  /* 104e213e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e2141 push eax */
  push32((uint32_t)(EAX));
  /* 104e2142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2145 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2146 call 0x104e1f50 */
  push32(0x104e214bu); f_104e1f50();
  /* 104e214b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e214d jne 0x104e2156 */
  if (!C.zf) goto L_104e2156;
  /* 104e214f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104e2156:;
  /* 104e2156 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e215a je 0x104e217a */
  if (C.zf) goto L_104e217a;
  /* 104e215c cmp dword ptr [0x1051101c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1051101c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2163 je 0x104e217a */
  if (C.zf) goto L_104e217a;
  /* 104e2165 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e2168 push edx */
  push32((uint32_t)(EDX));
  /* 104e2169 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e216c push eax */
  push32((uint32_t)(EAX));
  /* 104e216d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2170 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2171 call dword ptr [0x1051101c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051101c))), 0x104e2177u);
  /* 104e2177 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e217a:;
  /* 104e217a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104e217d:;
  /* 104e217d mov esp, ebp */
  ESP = (EBP);
  /* 104e217f pop ebp */
  EBP = (pop32());
  /* 104e2180 ret 0xc */
  ESPCHK(0x104e2090u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x104e2190 (58 bytes, 18 insns) */
void f_104e2190(void) {
  FTRACE(0x104e2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2190 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2191 mov ebp, esp */
  EBP = (ESP);
  /* 104e2193 cmp dword ptr [0x1050f4b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e219a je 0x104e21ae */
  if (C.zf) goto L_104e21ae;
  /* 104e219c cmp dword ptr [0x1050f4b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e21a3 jne 0x104e21b3 */
  if (!C.zf) goto L_104e21b3;
  /* 104e21a5 cmp dword ptr [0x1050f4b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e21ac jne 0x104e21b3 */
  if (!C.zf) goto L_104e21b3;
L_104e21ae:;
  /* 104e21ae call 0x104e5b00 */
  push32(0x104e21b3u); f_104e5b00();
L_104e21b3:;
  /* 104e21b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e21b6 push eax */
  push32((uint32_t)(EAX));
  /* 104e21b7 call 0x104e5b50 */
  push32(0x104e21bcu); f_104e5b50();
  /* 104e21bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e21bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 104e21c4 call dword ptr [0x1050da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050da30))), 0x104e21cau);
  /* 104e21ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e21cd pop ebp */
  EBP = (pop32());
  /* 104e21ce ret  */
  ESPCHK(0x104e2190u, _esp0);
  ESP += 4; return;
}

/* FUN_100021d0 @ 0x104e21d0 (11 bytes, 5 insns) */
void f_104e21d0(void) {
  FTRACE(0x104e21d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e21d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e21d1 mov ebp, esp */
  EBP = (ESP);
  /* 104e21d3 call dword ptr [0x10512280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512280))), 0x104e21d9u);
  /* 104e21d9 pop ebp */
  EBP = (pop32());
  /* 104e21da ret  */
  ESPCHK(0x104e21d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100021e0 @ 0x104e21e0 (87 bytes, 30 insns) */
void f_104e21e0(void) {
  FTRACE(0x104e21e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e21e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e21e1 mov ebp, esp */
  EBP = (ESP);
  /* 104e21e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e21e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e21e8 jl 0x104e21f0 */
  if ((C.sf!=C.of)) goto L_104e21f0;
  /* 104e21ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e21ee jl 0x104e21f5 */
  if ((C.sf!=C.of)) goto L_104e21f5;
L_104e21f0:;
  /* 104e21f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e21f3 jmp 0x104e2233 */
  goto L_104e2233;
L_104e21f5:;
  /* 104e21f5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e21f9 jne 0x104e2207 */
  if (!C.zf) goto L_104e2207;
  /* 104e21fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e21fe mov eax, dword ptr [eax*4 + 0x1050da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1050da38)));
  /* 104e2205 jmp 0x104e2233 */
  goto L_104e2233;
L_104e2207:;
  /* 104e2207 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e220a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 104e220d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e220f je 0x104e2216 */
  if (C.zf) goto L_104e2216;
  /* 104e2211 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e2214 jmp 0x104e2233 */
  goto L_104e2233;
L_104e2216:;
  /* 104e2216 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2219 mov eax, dword ptr [edx*4 + 0x1050da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1050da38)));
  /* 104e2220 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e2223 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2226 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e2229 mov dword ptr [ecx*4 + 0x1050da38], edx */
  w32((uint32_t)(ECX*4 + 0x1050da38), (EDX));
  /* 104e2230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104e2233:;
  /* 104e2233 mov esp, ebp */
  ESP = (EBP);
  /* 104e2235 pop ebp */
  EBP = (pop32());
  /* 104e2236 ret  */
  ESPCHK(0x104e21e0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x104e2240 (126 bytes, 38 insns) */
void f_104e2240(void) {
  FTRACE(0x104e2240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2240 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2241 mov ebp, esp */
  EBP = (ESP);
  /* 104e2243 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2244 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2248 jl 0x104e2250 */
  if ((C.sf!=C.of)) goto L_104e2250;
  /* 104e224a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e224e jl 0x104e2257 */
  if ((C.sf!=C.of)) goto L_104e2257;
L_104e2250:;
  /* 104e2250 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 104e2255 jmp 0x104e22ba */
  goto L_104e22ba;
L_104e2257:;
  /* 104e2257 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e225b jne 0x104e2269 */
  if (!C.zf) goto L_104e2269;
  /* 104e225d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2260 mov eax, dword ptr [eax*4 + 0x1050da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1050da44)));
  /* 104e2267 jmp 0x104e22ba */
  goto L_104e22ba;
L_104e2269:;
  /* 104e2269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e226c mov edx, dword ptr [ecx*4 + 0x1050da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1050da44)));
  /* 104e2273 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e2276 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e227a jne 0x104e2290 */
  if (!C.zf) goto L_104e2290;
  /* 104e227c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 104e227e call dword ptr [0x10512284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512284))), 0x104e2284u);
  /* 104e2284 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2287 mov dword ptr [ecx*4 + 0x1050da44], eax */
  w32((uint32_t)(ECX*4 + 0x1050da44), (EAX));
  /* 104e228e jmp 0x104e22b7 */
  goto L_104e22b7;
L_104e2290:;
  /* 104e2290 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2294 jne 0x104e22aa */
  if (!C.zf) goto L_104e22aa;
  /* 104e2296 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 104e2298 call dword ptr [0x10512284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512284))), 0x104e229eu);
  /* 104e229e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e22a1 mov dword ptr [edx*4 + 0x1050da44], eax */
  w32((uint32_t)(EDX*4 + 0x1050da44), (EAX));
  /* 104e22a8 jmp 0x104e22b7 */
  goto L_104e22b7;
L_104e22aa:;
  /* 104e22aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e22ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e22b0 mov dword ptr [eax*4 + 0x1050da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1050da44), (ECX));
L_104e22b7:;
  /* 104e22b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104e22ba:;
  /* 104e22ba mov esp, ebp */
  ESP = (EBP);
  /* 104e22bc pop ebp */
  EBP = (pop32());
  /* 104e22bd ret  */
  ESPCHK(0x104e2240u, _esp0);
  ESP += 4; return;
}

/* FUN_100022c0 @ 0x104e22c0 (28 bytes, 11 insns) */
void f_104e22c0(void) {
  FTRACE(0x104e22c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e22c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e22c1 mov ebp, esp */
  EBP = (ESP);
  /* 104e22c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e22c4 mov eax, dword ptr [0x10511000] */
  EAX = (r32((uint32_t)(0x10511000)));
  /* 104e22c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e22cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e22cf mov dword ptr [0x10511000], ecx */
  w32((uint32_t)(0x10511000), (ECX));
  /* 104e22d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e22d8 mov esp, ebp */
  ESP = (EBP);
  /* 104e22da pop ebp */
  EBP = (pop32());
  /* 104e22db ret  */
  ESPCHK(0x104e22c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022e0 @ 0x104e22e0 (912 bytes, 248 insns) */
void f_104e22e0(void) {
  FTRACE(0x104e22e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e22e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e22e1 mov ebp, esp */
  EBP = (ESP);
  /* 104e22e3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 104e22e8 call 0x104e63c0 */
  push32(0x104e22edu); f_104e63c0();
  /* 104e22ed push edi */
  push32((uint32_t)(EDI));
  /* 104e22ee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 104e22f5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 104e22fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e22fc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 104e2302 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104e2304 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 104e2306 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 104e2307 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 104e230e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 104e2313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e2315 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 104e231b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104e231d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 104e231f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 104e2320 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 104e2327 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 104e232c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e232e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 104e2334 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104e2336 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 104e2338 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 104e2339 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 104e233c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 104e2342 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2346 jl 0x104e234e */
  if ((C.sf!=C.of)) goto L_104e234e;
  /* 104e2348 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e234c jl 0x104e2356 */
  if ((C.sf!=C.of)) goto L_104e2356;
L_104e234e:;
  /* 104e234e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e2351 jmp 0x104e266b */
  goto L_104e266b;
L_104e2356:;
  /* 104e2356 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e235a jne 0x104e2400 */
  if (!C.zf) goto L_104e2400;
  /* 104e2360 push 0x1050da34 */
  push32((uint32_t)(0x1050da34u));
  /* 104e2365 call dword ptr [0x1051229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051229c))), 0x104e236bu);
  /* 104e236b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e236d jle 0x104e2400 */
  if ((C.zf||C.sf!=C.of)) goto L_104e2400;
  /* 104e2373 cmp dword ptr [0x1050f4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e237a jne 0x104e23be */
  if (!C.zf) goto L_104e23be;
  /* 104e237c push 0x1050a320 */
  push32((uint32_t)(0x1050a320u));
  /* 104e2381 call dword ptr [0x10512298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512298))), 0x104e2387u);
  /* 104e2387 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 104e238d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2394 je 0x104e23b6 */
  if (C.zf) goto L_104e23b6;
  /* 104e2396 push 0x1050a314 */
  push32((uint32_t)(0x1050a314u));
  /* 104e239b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 104e23a1 push ecx */
  push32((uint32_t)(ECX));
  /* 104e23a2 call dword ptr [0x10512294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512294))), 0x104e23a8u);
  /* 104e23a8 mov dword ptr [0x1050f4b8], eax */
  w32((uint32_t)(0x1050f4b8), (EAX));
  /* 104e23ad cmp dword ptr [0x1050f4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e23b4 jne 0x104e23be */
  if (!C.zf) goto L_104e23be;
L_104e23b6:;
  /* 104e23b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e23b9 jmp 0x104e266b */
  goto L_104e266b;
L_104e23be:;
  /* 104e23be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e23c1 push edx */
  push32((uint32_t)(EDX));
  /* 104e23c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e23c5 push eax */
  push32((uint32_t)(EAX));
  /* 104e23c6 push 0x1050a2e0 */
  push32((uint32_t)(0x1050a2e0u));
  /* 104e23cb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 104e23d1 push ecx */
  push32((uint32_t)(ECX));
  /* 104e23d2 call dword ptr [0x1050f4b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f4b8))), 0x104e23d8u);
  /* 104e23d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e23db lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 104e23e1 push edx */
  push32((uint32_t)(EDX));
  /* 104e23e2 call dword ptr [0x10512290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512290))), 0x104e23e8u);
  /* 104e23e8 push 0x1050da34 */
  push32((uint32_t)(0x1050da34u));
  /* 104e23ed call dword ptr [0x1051228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051228c))), 0x104e23f3u);
  /* 104e23f3 call 0x104e21d0 */
  push32(0x104e23f8u); f_104e21d0();
  /* 104e23f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e23fb jmp 0x104e266b */
  goto L_104e266b;
L_104e2400:;
  /* 104e2400 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2404 je 0x104e243d */
  if (C.zf) goto L_104e243d;
  /* 104e2406 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 104e240c push eax */
  push32((uint32_t)(EAX));
  /* 104e240d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e2410 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2411 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 104e2416 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 104e241c push edx */
  push32((uint32_t)(EDX));
  /* 104e241d call 0x104e62c0 */
  push32(0x104e2422u); f_104e62c0();
  /* 104e2422 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e2427 jge 0x104e243d */
  if ((C.sf==C.of)) goto L_104e243d;
  /* 104e2429 push 0x1050a2b4 */
  push32((uint32_t)(0x1050a2b4u));
  /* 104e242e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 104e2434 push eax */
  push32((uint32_t)(EAX));
  /* 104e2435 call 0x104e61d0 */
  push32(0x104e243au); f_104e61d0();
  /* 104e243a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e243d:;
  /* 104e243d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2441 jne 0x104e2475 */
  if (!C.zf) goto L_104e2475;
  /* 104e2443 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2447 je 0x104e2455 */
  if (C.zf) goto L_104e2455;
  /* 104e2449 mov dword ptr [ebp - 0x3028], 0x1050a2a0 */
  w32((uint32_t)(EBP + -0x3028), (0x1050a2a0u));
  /* 104e2453 jmp 0x104e245f */
  goto L_104e245f;
L_104e2455:;
  /* 104e2455 mov dword ptr [ebp - 0x3028], 0x1050a28c */
  w32((uint32_t)(EBP + -0x3028), (0x1050a28cu));
L_104e245f:;
  /* 104e245f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 104e2465 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2466 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 104e246c push edx */
  push32((uint32_t)(EDX));
  /* 104e246d call 0x104e61d0 */
  push32(0x104e2472u); f_104e61d0();
  /* 104e2472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2475:;
  /* 104e2475 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 104e247b push eax */
  push32((uint32_t)(EAX));
  /* 104e247c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 104e2482 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2483 call 0x104e61e0 */
  push32(0x104e2488u); f_104e61e0();
  /* 104e2488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e248b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e248f jne 0x104e24ca */
  if (!C.zf) goto L_104e24ca;
  /* 104e2491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2494 mov eax, dword ptr [edx*4 + 0x1050da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1050da38)));
  /* 104e249b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 104e249e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e24a0 je 0x104e24b6 */
  if (C.zf) goto L_104e24b6;
  /* 104e24a2 push 0x1050a288 */
  push32((uint32_t)(0x1050a288u));
  /* 104e24a7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 104e24ad push ecx */
  push32((uint32_t)(ECX));
  /* 104e24ae call 0x104e61e0 */
  push32(0x104e24b3u); f_104e61e0();
  /* 104e24b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e24b6:;
  /* 104e24b6 push 0x1050a284 */
  push32((uint32_t)(0x1050a284u));
  /* 104e24bb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 104e24c1 push edx */
  push32((uint32_t)(EDX));
  /* 104e24c2 call 0x104e61e0 */
  push32(0x104e24c7u); f_104e61e0();
  /* 104e24c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e24ca:;
  /* 104e24ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e24ce je 0x104e2512 */
  if (C.zf) goto L_104e2512;
  /* 104e24d0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 104e24d6 push eax */
  push32((uint32_t)(EAX));
  /* 104e24d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e24da push ecx */
  push32((uint32_t)(ECX));
  /* 104e24db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e24de push edx */
  push32((uint32_t)(EDX));
  /* 104e24df push 0x1050a278 */
  push32((uint32_t)(0x1050a278u));
  /* 104e24e4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104e24e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 104e24ef push eax */
  push32((uint32_t)(EAX));
  /* 104e24f0 call 0x104e60d0 */
  push32(0x104e24f5u); f_104e60d0();
  /* 104e24f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e24f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e24fa jge 0x104e2510 */
  if ((C.sf==C.of)) goto L_104e2510;
  /* 104e24fc push 0x1050a2b4 */
  push32((uint32_t)(0x1050a2b4u));
  /* 104e2501 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 104e2507 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2508 call 0x104e61d0 */
  push32(0x104e250du); f_104e61d0();
  /* 104e250d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2510:;
  /* 104e2510 jmp 0x104e2528 */
  goto L_104e2528;
L_104e2512:;
  /* 104e2512 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 104e2518 push edx */
  push32((uint32_t)(EDX));
  /* 104e2519 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 104e251f push eax */
  push32((uint32_t)(EAX));
  /* 104e2520 call 0x104e61d0 */
  push32(0x104e2525u); f_104e61d0();
  /* 104e2525 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2528:;
  /* 104e2528 cmp dword ptr [0x10511000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10511000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e252f je 0x104e256c */
  if (C.zf) goto L_104e256c;
  /* 104e2531 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 104e2537 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2538 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 104e253e push edx */
  push32((uint32_t)(EDX));
  /* 104e253f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2542 push eax */
  push32((uint32_t)(EAX));
  /* 104e2543 call dword ptr [0x10511000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10511000))), 0x104e2549u);
  /* 104e2549 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e254c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e254e je 0x104e256c */
  if (C.zf) goto L_104e256c;
  /* 104e2550 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2554 jne 0x104e2561 */
  if (!C.zf) goto L_104e2561;
  /* 104e2556 push 0x1050da34 */
  push32((uint32_t)(0x1050da34u));
  /* 104e255b call dword ptr [0x1051228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051228c))), 0x104e2561u);
L_104e2561:;
  /* 104e2561 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 104e2567 jmp 0x104e266b */
  goto L_104e266b;
L_104e256c:;
  /* 104e256c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e256f mov edx, dword ptr [ecx*4 + 0x1050da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1050da38)));
  /* 104e2576 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104e2579 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e257b je 0x104e25bb */
  if (C.zf) goto L_104e25bb;
  /* 104e257d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2580 cmp dword ptr [eax*4 + 0x1050da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1050da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2588 je 0x104e25bb */
  if (C.zf) goto L_104e25bb;
  /* 104e258a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e258c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 104e2592 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2593 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 104e2599 push edx */
  push32((uint32_t)(EDX));
  /* 104e259a call 0x104e6050 */
  push32(0x104e259fu); f_104e6050();
  /* 104e259f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e25a2 push eax */
  push32((uint32_t)(EAX));
  /* 104e25a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 104e25a9 push eax */
  push32((uint32_t)(EAX));
  /* 104e25aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e25ad mov edx, dword ptr [ecx*4 + 0x1050da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1050da44)));
  /* 104e25b4 push edx */
  push32((uint32_t)(EDX));
  /* 104e25b5 call dword ptr [0x10512288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512288))), 0x104e25bbu);
L_104e25bb:;
  /* 104e25bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e25be mov ecx, dword ptr [eax*4 + 0x1050da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1050da38)));
  /* 104e25c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 104e25c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e25ca je 0x104e25d9 */
  if (C.zf) goto L_104e25d9;
  /* 104e25cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 104e25d2 push edx */
  push32((uint32_t)(EDX));
  /* 104e25d3 call dword ptr [0x10512290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512290))), 0x104e25d9u);
L_104e25d9:;
  /* 104e25d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e25dc mov ecx, dword ptr [eax*4 + 0x1050da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1050da38)));
  /* 104e25e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104e25e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e25e8 je 0x104e2658 */
  if (C.zf) goto L_104e2658;
  /* 104e25ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e25ee je 0x104e260d */
  if (C.zf) goto L_104e260d;
  /* 104e25f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 104e25f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 104e25f8 push edx */
  push32((uint32_t)(EDX));
  /* 104e25f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e25fc push eax */
  push32((uint32_t)(EAX));
  /* 104e25fd call 0x104e5d60 */
  push32(0x104e2602u); f_104e5d60();
  /* 104e2602 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2605 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 104e260b jmp 0x104e2617 */
  goto L_104e2617;
L_104e260d:;
  /* 104e260d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_104e2617:;
  /* 104e2617 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 104e261d push ecx */
  push32((uint32_t)(ECX));
  /* 104e261e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e2621 push edx */
  push32((uint32_t)(EDX));
  /* 104e2622 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 104e2628 push eax */
  push32((uint32_t)(EAX));
  /* 104e2629 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e262c push ecx */
  push32((uint32_t)(ECX));
  /* 104e262d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2630 push edx */
  push32((uint32_t)(EDX));
  /* 104e2631 call 0x104e2670 */
  push32(0x104e2636u); f_104e2670();
  /* 104e2636 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2639 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 104e263f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2643 jne 0x104e2650 */
  if (!C.zf) goto L_104e2650;
  /* 104e2645 push 0x1050da34 */
  push32((uint32_t)(0x1050da34u));
  /* 104e264a call dword ptr [0x1051228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051228c))), 0x104e2650u);
L_104e2650:;
  /* 104e2650 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 104e2656 jmp 0x104e266b */
  goto L_104e266b;
L_104e2658:;
  /* 104e2658 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e265c jne 0x104e2669 */
  if (!C.zf) goto L_104e2669;
  /* 104e265e push 0x1050da34 */
  push32((uint32_t)(0x1050da34u));
  /* 104e2663 call dword ptr [0x1051228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051228c))), 0x104e2669u);
L_104e2669:;
  /* 104e2669 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e266b:;
  /* 104e266b pop edi */
  EDI = (pop32());
  /* 104e266c mov esp, ebp */
  ESP = (EBP);
  /* 104e266e pop ebp */
  EBP = (pop32());
  /* 104e266f ret  */
  ESPCHK(0x104e22e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002670 @ 0x104e2670 (780 bytes, 197 insns) */
void f_104e2670(void) {
  FTRACE(0x104e2670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2670 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2671 mov ebp, esp */
  EBP = (ESP);
  /* 104e2673 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 104e2678 call 0x104e63c0 */
  push32(0x104e267du); f_104e63c0();
L_104e267d:;
  /* 104e267d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2681 jne 0x104e26a8 */
  if (!C.zf) goto L_104e26a8;
  /* 104e2683 push 0x1050a470 */
  push32((uint32_t)(0x1050a470u));
  /* 104e2688 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e268a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 104e268f push 0x1050a464 */
  push32((uint32_t)(0x1050a464u));
  /* 104e2694 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2696 call 0x104e22e0 */
  push32(0x104e269bu); f_104e22e0();
  /* 104e269b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e269e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e26a1 jne 0x104e26a8 */
  if (!C.zf) goto L_104e26a8;
  /* 104e26a3 call 0x104e21d0 */
  push32(0x104e26a8u); f_104e21d0();
L_104e26a8:;
  /* 104e26a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e26aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e26ac jne 0x104e267d */
  if (!C.zf) goto L_104e267d;
  /* 104e26ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 104e26b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 104e26b9 push ecx */
  push32((uint32_t)(ECX));
  /* 104e26ba push 0 */
  push32((uint32_t)(0x0u));
  /* 104e26bc call dword ptr [0x105122a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122a0))), 0x104e26c2u);
  /* 104e26c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e26c4 jne 0x104e26da */
  if (!C.zf) goto L_104e26da;
  /* 104e26c6 push 0x1050a44c */
  push32((uint32_t)(0x1050a44cu));
  /* 104e26cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 104e26d1 push edx */
  push32((uint32_t)(EDX));
  /* 104e26d2 call 0x104e61d0 */
  push32(0x104e26d7u); f_104e61d0();
  /* 104e26d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e26da:;
  /* 104e26da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 104e26e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e26e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e26e6 push ecx */
  push32((uint32_t)(ECX));
  /* 104e26e7 call 0x104e6050 */
  push32(0x104e26ecu); f_104e6050();
  /* 104e26ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e26ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e26f2 jbe 0x104e271d */
  if ((C.cf||C.zf)) goto L_104e271d;
  /* 104e26f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e26f7 push edx */
  push32((uint32_t)(EDX));
  /* 104e26f8 call 0x104e6050 */
  push32(0x104e26fdu); f_104e6050();
  /* 104e26fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2700 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2703 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 104e2707 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e270a push 3 */
  push32((uint32_t)(0x3u));
  /* 104e270c push 0x1050a448 */
  push32((uint32_t)(0x1050a448u));
  /* 104e2711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2714 push eax */
  push32((uint32_t)(EAX));
  /* 104e2715 call 0x104e6a40 */
  push32(0x104e271au); f_104e6a40();
  /* 104e271a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e271d:;
  /* 104e271d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e2720 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 104e2726 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e272d je 0x104e2778 */
  if (C.zf) goto L_104e2778;
  /* 104e272f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 104e2735 push edx */
  push32((uint32_t)(EDX));
  /* 104e2736 call 0x104e6050 */
  push32(0x104e273bu); f_104e6050();
  /* 104e273b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e273e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2741 jbe 0x104e2778 */
  if ((C.cf||C.zf)) goto L_104e2778;
  /* 104e2743 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 104e2749 push eax */
  push32((uint32_t)(EAX));
  /* 104e274a call 0x104e6050 */
  push32(0x104e274fu); f_104e6050();
  /* 104e274f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2752 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 104e2758 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 104e275c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 104e2762 push 3 */
  push32((uint32_t)(0x3u));
  /* 104e2764 push 0x1050a448 */
  push32((uint32_t)(0x1050a448u));
  /* 104e2769 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 104e276f push eax */
  push32((uint32_t)(EAX));
  /* 104e2770 call 0x104e6a40 */
  push32(0x104e2775u); f_104e6a40();
  /* 104e2775 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2778:;
  /* 104e2778 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e277c jne 0x104e278a */
  if (!C.zf) goto L_104e278a;
  /* 104e277e mov dword ptr [ebp - 0x1114], 0x1050a3d4 */
  w32((uint32_t)(EBP + -0x1114), (0x1050a3d4u));
  /* 104e2788 jmp 0x104e2794 */
  goto L_104e2794;
L_104e278a:;
  /* 104e278a mov dword ptr [ebp - 0x1114], 0x1050a174 */
  w32((uint32_t)(EBP + -0x1114), (0x1050a174u));
L_104e2794:;
  /* 104e2794 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e2797 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104e279a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e279c je 0x104e27a9 */
  if (C.zf) goto L_104e27a9;
  /* 104e279e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e27a1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 104e27a7 jmp 0x104e27b3 */
  goto L_104e27b3;
L_104e27a9:;
  /* 104e27a9 mov dword ptr [ebp - 0x1118], 0x1050a174 */
  w32((uint32_t)(EBP + -0x1118), (0x1050a174u));
L_104e27b3:;
  /* 104e27b3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e27b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104e27b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e27bb je 0x104e27cf */
  if (C.zf) goto L_104e27cf;
  /* 104e27bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e27c1 jne 0x104e27cf */
  if (!C.zf) goto L_104e27cf;
  /* 104e27c3 mov dword ptr [ebp - 0x111c], 0x1050a3c4 */
  w32((uint32_t)(EBP + -0x111c), (0x1050a3c4u));
  /* 104e27cd jmp 0x104e27d9 */
  goto L_104e27d9;
L_104e27cf:;
  /* 104e27cf mov dword ptr [ebp - 0x111c], 0x1050a174 */
  w32((uint32_t)(EBP + -0x111c), (0x1050a174u));
L_104e27d9:;
  /* 104e27d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e27dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104e27df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e27e1 je 0x104e27ef */
  if (C.zf) goto L_104e27ef;
  /* 104e27e3 mov dword ptr [ebp - 0x1120], 0x1050a3c0 */
  w32((uint32_t)(EBP + -0x1120), (0x1050a3c0u));
  /* 104e27ed jmp 0x104e27f9 */
  goto L_104e27f9;
L_104e27ef:;
  /* 104e27ef mov dword ptr [ebp - 0x1120], 0x1050a174 */
  w32((uint32_t)(EBP + -0x1120), (0x1050a174u));
L_104e27f9:;
  /* 104e27f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e27fd je 0x104e280a */
  if (C.zf) goto L_104e280a;
  /* 104e27ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e2802 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 104e2808 jmp 0x104e2814 */
  goto L_104e2814;
L_104e280a:;
  /* 104e280a mov dword ptr [ebp - 0x1124], 0x1050a174 */
  w32((uint32_t)(EBP + -0x1124), (0x1050a174u));
L_104e2814:;
  /* 104e2814 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2818 je 0x104e2826 */
  if (C.zf) goto L_104e2826;
  /* 104e281a mov dword ptr [ebp - 0x1128], 0x1050a3b8 */
  w32((uint32_t)(EBP + -0x1128), (0x1050a3b8u));
  /* 104e2824 jmp 0x104e2830 */
  goto L_104e2830;
L_104e2826:;
  /* 104e2826 mov dword ptr [ebp - 0x1128], 0x1050a174 */
  w32((uint32_t)(EBP + -0x1128), (0x1050a174u));
L_104e2830:;
  /* 104e2830 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2834 je 0x104e2841 */
  if (C.zf) goto L_104e2841;
  /* 104e2836 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e2839 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 104e283f jmp 0x104e284b */
  goto L_104e284b;
L_104e2841:;
  /* 104e2841 mov dword ptr [ebp - 0x112c], 0x1050a174 */
  w32((uint32_t)(EBP + -0x112c), (0x1050a174u));
L_104e284b:;
  /* 104e284b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e284f je 0x104e285d */
  if (C.zf) goto L_104e285d;
  /* 104e2851 mov dword ptr [ebp - 0x1130], 0x1050a3b0 */
  w32((uint32_t)(EBP + -0x1130), (0x1050a3b0u));
  /* 104e285b jmp 0x104e2867 */
  goto L_104e2867;
L_104e285d:;
  /* 104e285d mov dword ptr [ebp - 0x1130], 0x1050a174 */
  w32((uint32_t)(EBP + -0x1130), (0x1050a174u));
L_104e2867:;
  /* 104e2867 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e286e je 0x104e287e */
  if (C.zf) goto L_104e287e;
  /* 104e2870 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 104e2876 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 104e287c jmp 0x104e2888 */
  goto L_104e2888;
L_104e287e:;
  /* 104e287e mov dword ptr [ebp - 0x1134], 0x1050a174 */
  w32((uint32_t)(EBP + -0x1134), (0x1050a174u));
L_104e2888:;
  /* 104e2888 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e288f je 0x104e289d */
  if (C.zf) goto L_104e289d;
  /* 104e2891 mov dword ptr [ebp - 0x1138], 0x1050a3a4 */
  w32((uint32_t)(EBP + -0x1138), (0x1050a3a4u));
  /* 104e289b jmp 0x104e28a7 */
  goto L_104e28a7;
L_104e289d:;
  /* 104e289d mov dword ptr [ebp - 0x1138], 0x1050a174 */
  w32((uint32_t)(EBP + -0x1138), (0x1050a174u));
L_104e28a7:;
  /* 104e28a7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 104e28ad push edx */
  push32((uint32_t)(EDX));
  /* 104e28ae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 104e28b4 push eax */
  push32((uint32_t)(EAX));
  /* 104e28b5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 104e28bb push ecx */
  push32((uint32_t)(ECX));
  /* 104e28bc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 104e28c2 push edx */
  push32((uint32_t)(EDX));
  /* 104e28c3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 104e28c9 push eax */
  push32((uint32_t)(EAX));
  /* 104e28ca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 104e28d0 push ecx */
  push32((uint32_t)(ECX));
  /* 104e28d1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 104e28d7 push edx */
  push32((uint32_t)(EDX));
  /* 104e28d8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 104e28de push eax */
  push32((uint32_t)(EAX));
  /* 104e28df mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 104e28e5 push ecx */
  push32((uint32_t)(ECX));
  /* 104e28e6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 104e28ec push edx */
  push32((uint32_t)(EDX));
  /* 104e28ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e28f0 push eax */
  push32((uint32_t)(EAX));
  /* 104e28f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e28f4 mov edx, dword ptr [ecx*4 + 0x1050da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1050da50)));
  /* 104e28fb push edx */
  push32((uint32_t)(EDX));
  /* 104e28fc push 0x1050a350 */
  push32((uint32_t)(0x1050a350u));
  /* 104e2901 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104e2906 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 104e290c push eax */
  push32((uint32_t)(EAX));
  /* 104e290d call 0x104e60d0 */
  push32(0x104e2912u); f_104e60d0();
  /* 104e2912 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e2917 jge 0x104e292d */
  if ((C.sf==C.of)) goto L_104e292d;
  /* 104e2919 push 0x1050a2b4 */
  push32((uint32_t)(0x1050a2b4u));
  /* 104e291e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 104e2924 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2925 call 0x104e61d0 */
  push32(0x104e292au); f_104e61d0();
  /* 104e292a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e292d:;
  /* 104e292d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 104e2932 push 0x1050a32c */
  push32((uint32_t)(0x1050a32cu));
  /* 104e2937 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 104e293d push edx */
  push32((uint32_t)(EDX));
  /* 104e293e call 0x104e6980 */
  push32(0x104e2943u); f_104e6980();
  /* 104e2943 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2946 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 104e294c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2953 jne 0x104e2966 */
  if (!C.zf) goto L_104e2966;
  /* 104e2955 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 104e2957 call 0x104e66c0 */
  push32(0x104e295cu); f_104e66c0();
  /* 104e295c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e295f push 3 */
  push32((uint32_t)(0x3u));
  /* 104e2961 call 0x104e29e0 */
  push32(0x104e2966u); f_104e29e0();
L_104e2966:;
  /* 104e2966 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e296d jne 0x104e2976 */
  if (!C.zf) goto L_104e2976;
  /* 104e296f mov eax, 1 */
  EAX = (0x1u);
  /* 104e2974 jmp 0x104e2978 */
  goto L_104e2978;
L_104e2976:;
  /* 104e2976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e2978:;
  /* 104e2978 mov esp, ebp */
  ESP = (EBP);
  /* 104e297a pop ebp */
  EBP = (pop32());
  /* 104e297b ret  */
  ESPCHK(0x104e2670u, _esp0);
  ESP += 4; return;
}

/* FUN_10002980 @ 0x104e2980 (56 bytes, 15 insns) */
void f_104e2980(void) {
  FTRACE(0x104e2980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2980 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2981 mov ebp, esp */
  EBP = (ESP);
  /* 104e2983 cmp dword ptr [0x10510ffc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510ffc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e298a je 0x104e2992 */
  if (C.zf) goto L_104e2992;
  /* 104e298c call dword ptr [0x10510ffc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10510ffc))), 0x104e2992u);
L_104e2992:;
  /* 104e2992 push 0x1050d418 */
  push32((uint32_t)(0x1050d418u));
  /* 104e2997 push 0x1050d208 */
  push32((uint32_t)(0x1050d208u));
  /* 104e299c call 0x104e2b50 */
  push32(0x104e29a1u); f_104e2b50();
  /* 104e29a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e29a4 push 0x1050d104 */
  push32((uint32_t)(0x1050d104u));
  /* 104e29a9 push 0x1050d000 */
  push32((uint32_t)(0x1050d000u));
  /* 104e29ae call 0x104e2b50 */
  push32(0x104e29b3u); f_104e2b50();
  /* 104e29b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e29b6 pop ebp */
  EBP = (pop32());
  /* 104e29b7 ret  */
  ESPCHK(0x104e2980u, _esp0);
  ESP += 4; return;
}

/* FUN_100029c0 @ 0x104e29c0 (21 bytes, 10 insns) */
void f_104e29c0(void) {
  FTRACE(0x104e29c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e29c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e29c1 mov ebp, esp */
  EBP = (ESP);
  /* 104e29c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e29c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e29c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e29ca push eax */
  push32((uint32_t)(EAX));
  /* 104e29cb call 0x104e2a40 */
  push32(0x104e29d0u); f_104e2a40();
  /* 104e29d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e29d3 pop ebp */
  EBP = (pop32());
  /* 104e29d4 ret  */
  ESPCHK(0x104e29c0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x104e29e0 (21 bytes, 10 insns) */
void f_104e29e0(void) {
  FTRACE(0x104e29e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e29e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e29e1 mov ebp, esp */
  EBP = (ESP);
  /* 104e29e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e29e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e29e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e29ea push eax */
  push32((uint32_t)(EAX));
  /* 104e29eb call 0x104e2a40 */
  push32(0x104e29f0u); f_104e2a40();
  /* 104e29f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e29f3 pop ebp */
  EBP = (pop32());
  /* 104e29f4 ret  */
  ESPCHK(0x104e29e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a00 @ 0x104e2a00 (19 bytes, 9 insns) */
void f_104e2a00(void) {
  FTRACE(0x104e2a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2a00 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2a01 mov ebp, esp */
  EBP = (ESP);
  /* 104e2a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e2a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e2a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e2a09 call 0x104e2a40 */
  push32(0x104e2a0eu); f_104e2a40();
  /* 104e2a0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2a11 pop ebp */
  EBP = (pop32());
  /* 104e2a12 ret  */
  ESPCHK(0x104e2a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a20 @ 0x104e2a20 (19 bytes, 9 insns) */
void f_104e2a20(void) {
  FTRACE(0x104e2a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2a20 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2a21 mov ebp, esp */
  EBP = (ESP);
  /* 104e2a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e2a25 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e2a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e2a29 call 0x104e2a40 */
  push32(0x104e2a2eu); f_104e2a40();
  /* 104e2a2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2a31 pop ebp */
  EBP = (pop32());
  /* 104e2a32 ret  */
  ESPCHK(0x104e2a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a40 @ 0x104e2a40 (227 bytes, 61 insns) */
void f_104e2a40(void) {
  FTRACE(0x104e2a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2a40 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2a41 mov ebp, esp */
  EBP = (ESP);
  /* 104e2a43 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2a44 call 0x104e2b30 */
  push32(0x104e2a49u); f_104e2b30();
  /* 104e2a49 cmp dword ptr [0x1050f4fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2a50 jne 0x104e2a63 */
  if (!C.zf) goto L_104e2a63;
  /* 104e2a52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2a55 push eax */
  push32((uint32_t)(EAX));
  /* 104e2a56 call dword ptr [0x105122ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122ac))), 0x104e2a5cu);
  /* 104e2a5c push eax */
  push32((uint32_t)(EAX));
  /* 104e2a5d call dword ptr [0x105122a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122a8))), 0x104e2a63u);
L_104e2a63:;
  /* 104e2a63 mov dword ptr [0x1050f4f8], 1 */
  w32((uint32_t)(0x1050f4f8), (0x1u));
  /* 104e2a6d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 104e2a70 mov byte ptr [0x1050f4f4], cl */
  w8((uint32_t)(0x1050f4f4), (CL));
  /* 104e2a76 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2a7a jne 0x104e2ac3 */
  if (!C.zf) goto L_104e2ac3;
  /* 104e2a7c cmp dword ptr [0x10510ff8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510ff8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2a83 je 0x104e2ab1 */
  if (C.zf) goto L_104e2ab1;
  /* 104e2a85 mov edx, dword ptr [0x10510ff4] */
  EDX = (r32((uint32_t)(0x10510ff4)));
  /* 104e2a8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104e2a8e:;
  /* 104e2a8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2a91 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e2a94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e2a97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2a9a cmp ecx, dword ptr [0x10510ff8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10510ff8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2aa0 jb 0x104e2ab1 */
  if (C.cf) goto L_104e2ab1;
  /* 104e2aa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2aa5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2aa8 je 0x104e2aaf */
  if (C.zf) goto L_104e2aaf;
  /* 104e2aaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2aad call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x104e2aafu);
L_104e2aaf:;
  /* 104e2aaf jmp 0x104e2a8e */
  goto L_104e2a8e;
L_104e2ab1:;
  /* 104e2ab1 push 0x1050d724 */
  push32((uint32_t)(0x1050d724u));
  /* 104e2ab6 push 0x1050d51c */
  push32((uint32_t)(0x1050d51cu));
  /* 104e2abb call 0x104e2b50 */
  push32(0x104e2ac0u); f_104e2b50();
  /* 104e2ac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2ac3:;
  /* 104e2ac3 push 0x1050d92c */
  push32((uint32_t)(0x1050d92cu));
  /* 104e2ac8 push 0x1050d828 */
  push32((uint32_t)(0x1050d828u));
  /* 104e2acd call 0x104e2b50 */
  push32(0x104e2ad2u); f_104e2b50();
  /* 104e2ad2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2ad5 cmp dword ptr [0x1050f500], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f500))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2adc jne 0x104e2afe */
  if (!C.zf) goto L_104e2afe;
  /* 104e2ade push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104e2ae0 call 0x104e4730 */
  push32(0x104e2ae5u); f_104e4730();
  /* 104e2ae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2ae8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 104e2aeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e2aed je 0x104e2afe */
  if (C.zf) goto L_104e2afe;
  /* 104e2aef mov dword ptr [0x1050f500], 1 */
  w32((uint32_t)(0x1050f500), (0x1u));
  /* 104e2af9 call 0x104e5040 */
  push32(0x104e2afeu); f_104e5040();
L_104e2afe:;
  /* 104e2afe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2b02 je 0x104e2b0b */
  if (C.zf) goto L_104e2b0b;
  /* 104e2b04 call 0x104e2b40 */
  push32(0x104e2b09u); f_104e2b40();
  /* 104e2b09 jmp 0x104e2b1f */
  goto L_104e2b1f;
L_104e2b0b:;
  /* 104e2b0b mov dword ptr [0x1050f4fc], 1 */
  w32((uint32_t)(0x1050f4fc), (0x1u));
  /* 104e2b15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2b18 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2b19 call dword ptr [0x105122a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122a4))), 0x104e2b1fu);
L_104e2b1f:;
  /* 104e2b1f mov esp, ebp */
  ESP = (EBP);
  /* 104e2b21 pop ebp */
  EBP = (pop32());
  /* 104e2b22 ret  */
  ESPCHK(0x104e2a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b30 @ 0x104e2b30 (15 bytes, 7 insns) */
void f_104e2b30(void) {
  FTRACE(0x104e2b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2b30 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2b31 mov ebp, esp */
  EBP = (ESP);
  /* 104e2b33 push 0xd */
  push32((uint32_t)(0xdu));
  /* 104e2b35 call 0x104e6c20 */
  push32(0x104e2b3au); f_104e6c20();
  /* 104e2b3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2b3d pop ebp */
  EBP = (pop32());
  /* 104e2b3e ret  */
  ESPCHK(0x104e2b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b40 @ 0x104e2b40 (15 bytes, 7 insns) */
void f_104e2b40(void) {
  FTRACE(0x104e2b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2b40 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2b41 mov ebp, esp */
  EBP = (ESP);
  /* 104e2b43 push 0xd */
  push32((uint32_t)(0xdu));
  /* 104e2b45 call 0x104e6cc0 */
  push32(0x104e2b4au); f_104e6cc0();
  /* 104e2b4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2b4d pop ebp */
  EBP = (pop32());
  /* 104e2b4e ret  */
  ESPCHK(0x104e2b40u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x104e2b50 (37 bytes, 16 insns) */
void f_104e2b50(void) {
  FTRACE(0x104e2b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2b50 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2b51 mov ebp, esp */
  EBP = (ESP);
L_104e2b53:;
  /* 104e2b53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2b56 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2b59 jae 0x104e2b73 */
  if (!C.cf) goto L_104e2b73;
  /* 104e2b5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2b5e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2b61 je 0x104e2b68 */
  if (C.zf) goto L_104e2b68;
  /* 104e2b63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2b66 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x104e2b68u);
L_104e2b68:;
  /* 104e2b68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2b6b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2b6e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104e2b71 jmp 0x104e2b53 */
  goto L_104e2b53;
L_104e2b73:;
  /* 104e2b73 pop ebp */
  EBP = (pop32());
  /* 104e2b74 ret  */
  ESPCHK(0x104e2b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b80 @ 0x104e2b80 (130 bytes, 42 insns) */
void f_104e2b80(void) {
  FTRACE(0x104e2b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2b80 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2b81 mov ebp, esp */
  EBP = (ESP);
  /* 104e2b83 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2b84 call 0x104e6b40 */
  push32(0x104e2b89u); f_104e6b40();
  /* 104e2b89 call dword ptr [0x105122b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122b8))), 0x104e2b8fu);
  /* 104e2b8f mov dword ptr [0x1050da5c], eax */
  w32((uint32_t)(0x1050da5c), (EAX));
  /* 104e2b94 cmp dword ptr [0x1050da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1050da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2b9b jne 0x104e2ba1 */
  if (!C.zf) goto L_104e2ba1;
  /* 104e2b9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e2b9f jmp 0x104e2bfe */
  goto L_104e2bfe;
L_104e2ba1:;
  /* 104e2ba1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 104e2ba3 push 0x1050a488 */
  push32((uint32_t)(0x1050a488u));
  /* 104e2ba8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2baa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 104e2bac push 1 */
  push32((uint32_t)(0x1u));
  /* 104e2bae call 0x104e3630 */
  push32(0x104e2bb3u); f_104e3630();
  /* 104e2bb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2bb6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e2bb9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2bbd je 0x104e2bd4 */
  if (C.zf) goto L_104e2bd4;
  /* 104e2bbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2bc2 push eax */
  push32((uint32_t)(EAX));
  /* 104e2bc3 mov ecx, dword ptr [0x1050da5c] */
  ECX = (r32((uint32_t)(0x1050da5c)));
  /* 104e2bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2bca call dword ptr [0x105122b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122b4))), 0x104e2bd0u);
  /* 104e2bd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e2bd2 jne 0x104e2bd8 */
  if (!C.zf) goto L_104e2bd8;
L_104e2bd4:;
  /* 104e2bd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e2bd6 jmp 0x104e2bfe */
  goto L_104e2bfe;
L_104e2bd8:;
  /* 104e2bd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2bdb push edx */
  push32((uint32_t)(EDX));
  /* 104e2bdc call 0x104e2c40 */
  push32(0x104e2be1u); f_104e2c40();
  /* 104e2be1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2be4 call dword ptr [0x105122b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122b0))), 0x104e2beau);
  /* 104e2bea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2bed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104e2bef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2bf2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 104e2bf9 mov eax, 1 */
  EAX = (0x1u);
L_104e2bfe:;
  /* 104e2bfe mov esp, ebp */
  ESP = (EBP);
  /* 104e2c00 pop ebp */
  EBP = (pop32());
  /* 104e2c01 ret  */
  ESPCHK(0x104e2b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c10 @ 0x104e2c10 (41 bytes, 11 insns) */
void f_104e2c10(void) {
  FTRACE(0x104e2c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2c10 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2c11 mov ebp, esp */
  EBP = (ESP);
  /* 104e2c13 call 0x104e6b80 */
  push32(0x104e2c18u); f_104e6b80();
  /* 104e2c18 cmp dword ptr [0x1050da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1050da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2c1f je 0x104e2c37 */
  if (C.zf) goto L_104e2c37;
  /* 104e2c21 mov eax, dword ptr [0x1050da5c] */
  EAX = (r32((uint32_t)(0x1050da5c)));
  /* 104e2c26 push eax */
  push32((uint32_t)(EAX));
  /* 104e2c27 call dword ptr [0x105122bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122bc))), 0x104e2c2du);
  /* 104e2c2d mov dword ptr [0x1050da5c], 0xffffffff */
  w32((uint32_t)(0x1050da5c), (0xffffffffu));
L_104e2c37:;
  /* 104e2c37 pop ebp */
  EBP = (pop32());
  /* 104e2c38 ret  */
  ESPCHK(0x104e2c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c40 @ 0x104e2c40 (25 bytes, 8 insns) */
void f_104e2c40(void) {
  FTRACE(0x104e2c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2c40 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2c41 mov ebp, esp */
  EBP = (ESP);
  /* 104e2c43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2c46 mov dword ptr [eax + 0x50], 0x1050dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1050dc00u));
  /* 104e2c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2c50 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 104e2c57 pop ebp */
  EBP = (pop32());
  /* 104e2c58 ret  */
  ESPCHK(0x104e2c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c60 @ 0x104e2c60 (152 bytes, 48 insns) */
void f_104e2c60(void) {
  FTRACE(0x104e2c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2c60 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2c61 mov ebp, esp */
  EBP = (ESP);
  /* 104e2c63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e2c66 call dword ptr [0x105122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c8))), 0x104e2c6cu);
  /* 104e2c6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e2c6f mov eax, dword ptr [0x1050da5c] */
  EAX = (r32((uint32_t)(0x1050da5c)));
  /* 104e2c74 push eax */
  push32((uint32_t)(EAX));
  /* 104e2c75 call dword ptr [0x105122c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c4))), 0x104e2c7bu);
  /* 104e2c7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e2c7e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2c82 jne 0x104e2ce7 */
  if (!C.zf) goto L_104e2ce7;
  /* 104e2c84 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 104e2c89 push 0x1050a488 */
  push32((uint32_t)(0x1050a488u));
  /* 104e2c8e push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2c90 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 104e2c92 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e2c94 call 0x104e3630 */
  push32(0x104e2c99u); f_104e3630();
  /* 104e2c99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2c9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e2c9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2ca3 je 0x104e2cdd */
  if (C.zf) goto L_104e2cdd;
  /* 104e2ca5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2ca9 mov edx, dword ptr [0x1050da5c] */
  EDX = (r32((uint32_t)(0x1050da5c)));
  /* 104e2caf push edx */
  push32((uint32_t)(EDX));
  /* 104e2cb0 call dword ptr [0x105122b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122b4))), 0x104e2cb6u);
  /* 104e2cb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e2cb8 je 0x104e2cdd */
  if (C.zf) goto L_104e2cdd;
  /* 104e2cba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2cbd push eax */
  push32((uint32_t)(EAX));
  /* 104e2cbe call 0x104e2c40 */
  push32(0x104e2cc3u); f_104e2c40();
  /* 104e2cc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2cc6 call dword ptr [0x105122b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122b0))), 0x104e2cccu);
  /* 104e2ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2ccf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104e2cd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2cd4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 104e2cdb jmp 0x104e2ce7 */
  goto L_104e2ce7;
L_104e2cdd:;
  /* 104e2cdd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 104e2cdf call 0x104e2190 */
  push32(0x104e2ce4u); f_104e2190();
  /* 104e2ce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2ce7:;
  /* 104e2ce7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e2cea push eax */
  push32((uint32_t)(EAX));
  /* 104e2ceb call dword ptr [0x105122c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c0))), 0x104e2cf1u);
  /* 104e2cf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2cf4 mov esp, ebp */
  ESP = (EBP);
  /* 104e2cf6 pop ebp */
  EBP = (pop32());
  /* 104e2cf7 ret  */
  ESPCHK(0x104e2c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d00 @ 0x104e2d00 (263 bytes, 86 insns) */
void f_104e2d00(void) {
  FTRACE(0x104e2d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2d00 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2d01 mov ebp, esp */
  EBP = (ESP);
  /* 104e2d03 cmp dword ptr [0x1050da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1050da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2d0a je 0x104e2e05 */
  if (C.zf) goto L_104e2e05;
  /* 104e2d10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2d14 jne 0x104e2d25 */
  if (!C.zf) goto L_104e2d25;
  /* 104e2d16 mov eax, dword ptr [0x1050da5c] */
  EAX = (r32((uint32_t)(0x1050da5c)));
  /* 104e2d1b push eax */
  push32((uint32_t)(EAX));
  /* 104e2d1c call dword ptr [0x105122c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c4))), 0x104e2d22u);
  /* 104e2d22 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104e2d25:;
  /* 104e2d25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2d29 je 0x104e2df6 */
  if (C.zf) goto L_104e2df6;
  /* 104e2d2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2d32 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2d36 je 0x104e2d49 */
  if (C.zf) goto L_104e2d49;
  /* 104e2d38 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2d3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2d3d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 104e2d40 push eax */
  push32((uint32_t)(EAX));
  /* 104e2d41 call 0x104e3cb0 */
  push32(0x104e2d46u); f_104e3cb0();
  /* 104e2d46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2d49:;
  /* 104e2d49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2d4c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2d50 je 0x104e2d63 */
  if (C.zf) goto L_104e2d63;
  /* 104e2d52 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2d54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2d57 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 104e2d5a push eax */
  push32((uint32_t)(EAX));
  /* 104e2d5b call 0x104e3cb0 */
  push32(0x104e2d60u); f_104e3cb0();
  /* 104e2d60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2d63:;
  /* 104e2d63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2d66 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2d6a je 0x104e2d7d */
  if (C.zf) goto L_104e2d7d;
  /* 104e2d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2d6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2d71 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 104e2d74 push eax */
  push32((uint32_t)(EAX));
  /* 104e2d75 call 0x104e3cb0 */
  push32(0x104e2d7au); f_104e3cb0();
  /* 104e2d7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2d7d:;
  /* 104e2d7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2d80 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2d84 je 0x104e2d97 */
  if (C.zf) goto L_104e2d97;
  /* 104e2d86 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2d88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2d8b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 104e2d8e push eax */
  push32((uint32_t)(EAX));
  /* 104e2d8f call 0x104e3cb0 */
  push32(0x104e2d94u); f_104e3cb0();
  /* 104e2d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2d97:;
  /* 104e2d97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2d9a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2d9e je 0x104e2db1 */
  if (C.zf) goto L_104e2db1;
  /* 104e2da0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2da2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2da5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 104e2da8 push eax */
  push32((uint32_t)(EAX));
  /* 104e2da9 call 0x104e3cb0 */
  push32(0x104e2daeu); f_104e3cb0();
  /* 104e2dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2db1:;
  /* 104e2db1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2db4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2db8 je 0x104e2dcb */
  if (C.zf) goto L_104e2dcb;
  /* 104e2dba push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2dbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2dbf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 104e2dc2 push eax */
  push32((uint32_t)(EAX));
  /* 104e2dc3 call 0x104e3cb0 */
  push32(0x104e2dc8u); f_104e3cb0();
  /* 104e2dc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2dcb:;
  /* 104e2dcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2dce cmp dword ptr [ecx + 0x50], 0x1050dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1050dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2dd5 je 0x104e2de8 */
  if (C.zf) goto L_104e2de8;
  /* 104e2dd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2dd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2ddc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 104e2ddf push eax */
  push32((uint32_t)(EAX));
  /* 104e2de0 call 0x104e3cb0 */
  push32(0x104e2de5u); f_104e3cb0();
  /* 104e2de5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2de8:;
  /* 104e2de8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2dea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e2ded push ecx */
  push32((uint32_t)(ECX));
  /* 104e2dee call 0x104e3cb0 */
  push32(0x104e2df3u); f_104e3cb0();
  /* 104e2df3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2df6:;
  /* 104e2df6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e2df8 mov edx, dword ptr [0x1050da5c] */
  EDX = (r32((uint32_t)(0x1050da5c)));
  /* 104e2dfe push edx */
  push32((uint32_t)(EDX));
  /* 104e2dff call dword ptr [0x105122b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122b4))), 0x104e2e05u);
L_104e2e05:;
  /* 104e2e05 pop ebp */
  EBP = (pop32());
  /* 104e2e06 ret  */
  ESPCHK(0x104e2d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e10 @ 0x104e2e10 (11 bytes, 5 insns) */
void f_104e2e10(void) {
  FTRACE(0x104e2e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2e10 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2e11 mov ebp, esp */
  EBP = (ESP);
  /* 104e2e13 call dword ptr [0x105122b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122b0))), 0x104e2e19u);
  /* 104e2e19 pop ebp */
  EBP = (pop32());
  /* 104e2e1a ret  */
  ESPCHK(0x104e2e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e20 @ 0x104e2e20 (11 bytes, 5 insns) */
void f_104e2e20(void) {
  FTRACE(0x104e2e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2e20 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2e21 mov ebp, esp */
  EBP = (ESP);
  /* 104e2e23 call dword ptr [0x105122cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122cc))), 0x104e2e29u);
  /* 104e2e29 pop ebp */
  EBP = (pop32());
  /* 104e2e2a ret  */
  ESPCHK(0x104e2e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e30 @ 0x104e2e30 (804 bytes, 236 insns) */
void f_104e2e30(void) {
  FTRACE(0x104e2e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e2e30 push ebp */
  push32((uint32_t)(EBP));
  /* 104e2e31 mov ebp, esp */
  EBP = (ESP);
  /* 104e2e33 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e2e36 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 104e2e3b push 0x1050a494 */
  push32((uint32_t)(0x1050a494u));
  /* 104e2e40 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2e42 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 104e2e47 call 0x104e3220 */
  push32(0x104e2e4cu); f_104e3220();
  /* 104e2e4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2e4f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 104e2e52 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2e56 jne 0x104e2e62 */
  if (!C.zf) goto L_104e2e62;
  /* 104e2e58 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 104e2e5a call 0x104e2190 */
  push32(0x104e2e5fu); f_104e2190();
  /* 104e2e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e2e62:;
  /* 104e2e62 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2e65 mov dword ptr [0x10510ea0], eax */
  w32((uint32_t)(0x10510ea0), (EAX));
  /* 104e2e6a mov dword ptr [0x10510fdc], 0x20 */
  w32((uint32_t)(0x10510fdc), (0x20u));
  /* 104e2e74 jmp 0x104e2e7f */
  goto L_104e2e7f;
L_104e2e76:;
  /* 104e2e76 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2e79 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2e7c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_104e2e7f:;
  /* 104e2e7f mov edx, dword ptr [0x10510ea0] */
  EDX = (r32((uint32_t)(0x10510ea0)));
  /* 104e2e85 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2e8b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2e8e jae 0x104e2eb3 */
  if (!C.cf) goto L_104e2eb3;
  /* 104e2e90 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2e93 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 104e2e97 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2e9a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 104e2ea0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2ea3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 104e2ea7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2eaa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 104e2eb1 jmp 0x104e2e76 */
  goto L_104e2e76;
L_104e2eb3:;
  /* 104e2eb3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 104e2eb6 push ecx */
  push32((uint32_t)(ECX));
  /* 104e2eb7 call dword ptr [0x105122d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122d8))), 0x104e2ebdu);
  /* 104e2ebd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 104e2ec0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e2ec6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e2ec8 je 0x104e3055 */
  if (C.zf) goto L_104e3055;
  /* 104e2ece cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2ed2 je 0x104e3055 */
  if (C.zf) goto L_104e3055;
  /* 104e2ed8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e2edb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e2edd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 104e2ee0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e2ee3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2ee6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e2ee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2eec add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2eef mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 104e2ef2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2ef9 jge 0x104e2f03 */
  if ((C.sf==C.of)) goto L_104e2f03;
  /* 104e2efb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 104e2efe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 104e2f01 jmp 0x104e2f0a */
  goto L_104e2f0a;
L_104e2f03:;
  /* 104e2f03 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_104e2f0a:;
  /* 104e2f0a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 104e2f0d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 104e2f10 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 104e2f17 jmp 0x104e2f22 */
  goto L_104e2f22;
L_104e2f19:;
  /* 104e2f19 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 104e2f1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2f1f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_104e2f22:;
  /* 104e2f22 mov ecx, dword ptr [0x10510fdc] */
  ECX = (r32((uint32_t)(0x10510fdc)));
  /* 104e2f28 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2f2b jge 0x104e2fc2 */
  if ((C.sf==C.of)) goto L_104e2fc2;
  /* 104e2f31 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 104e2f36 push 0x1050a494 */
  push32((uint32_t)(0x1050a494u));
  /* 104e2f3b push 2 */
  push32((uint32_t)(0x2u));
  /* 104e2f3d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 104e2f42 call 0x104e3220 */
  push32(0x104e2f47u); f_104e3220();
  /* 104e2f47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2f4a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 104e2f4d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2f51 jne 0x104e2f5e */
  if (!C.zf) goto L_104e2f5e;
  /* 104e2f53 mov edx, dword ptr [0x10510fdc] */
  EDX = (r32((uint32_t)(0x10510fdc)));
  /* 104e2f59 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 104e2f5c jmp 0x104e2fc2 */
  goto L_104e2fc2;
L_104e2f5e:;
  /* 104e2f5e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 104e2f61 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2f64 mov dword ptr [eax*4 + 0x10510ea0], ecx */
  w32((uint32_t)(EAX*4 + 0x10510ea0), (ECX));
  /* 104e2f6b mov edx, dword ptr [0x10510fdc] */
  EDX = (r32((uint32_t)(0x10510fdc)));
  /* 104e2f71 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2f74 mov dword ptr [0x10510fdc], edx */
  w32((uint32_t)(0x10510fdc), (EDX));
  /* 104e2f7a jmp 0x104e2f85 */
  goto L_104e2f85;
L_104e2f7c:;
  /* 104e2f7c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2f7f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2f82 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_104e2f85:;
  /* 104e2f85 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 104e2f88 mov edx, dword ptr [ecx*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10510ea0)));
  /* 104e2f8f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2f95 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2f98 jae 0x104e2fbd */
  if (!C.cf) goto L_104e2fbd;
  /* 104e2f9a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2f9d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 104e2fa1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2fa4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 104e2faa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2fad mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 104e2fb1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e2fb4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 104e2fbb jmp 0x104e2f7c */
  goto L_104e2f7c;
L_104e2fbd:;
  /* 104e2fbd jmp 0x104e2f19 */
  goto L_104e2f19;
L_104e2fc2:;
  /* 104e2fc2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 104e2fc9 jmp 0x104e2fe6 */
  goto L_104e2fe6;
L_104e2fcb:;
  /* 104e2fcb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 104e2fce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2fd1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 104e2fd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2fd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2fda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e2fdd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 104e2fe0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e2fe3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_104e2fe6:;
  /* 104e2fe6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 104e2fe9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2fec jge 0x104e3055 */
  if ((C.sf==C.of)) goto L_104e3055;
  /* 104e2fee mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 104e2ff1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e2ff4 je 0x104e3050 */
  if (C.zf) goto L_104e3050;
  /* 104e2ff6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e2ff9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104e2ffc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104e2fff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e3001 je 0x104e3050 */
  if (C.zf) goto L_104e3050;
  /* 104e3003 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3006 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104e3009 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 104e300c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e300e jne 0x104e3020 */
  if (!C.zf) goto L_104e3020;
  /* 104e3010 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 104e3013 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e3015 push edx */
  push32((uint32_t)(EDX));
  /* 104e3016 call dword ptr [0x105122d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122d4))), 0x104e301cu);
  /* 104e301c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e301e je 0x104e3050 */
  if (C.zf) goto L_104e3050;
L_104e3020:;
  /* 104e3020 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 104e3023 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104e3026 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 104e3029 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104e302c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e302f mov edx, dword ptr [eax*4 + 0x10510ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104e3036 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3038 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 104e303b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e303e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 104e3041 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e3043 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104e3045 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e3048 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e304b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e304d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_104e3050:;
  /* 104e3050 jmp 0x104e2fcb */
  goto L_104e2fcb;
L_104e3055:;
  /* 104e3055 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 104e305c jmp 0x104e3067 */
  goto L_104e3067;
L_104e305e:;
  /* 104e305e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 104e3061 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3064 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_104e3067:;
  /* 104e3067 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e306b jge 0x104e3144 */
  if ((C.sf==C.of)) goto L_104e3144;
  /* 104e3071 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 104e3074 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e3077 mov edx, dword ptr [0x10510ea0] */
  EDX = (r32((uint32_t)(0x10510ea0)));
  /* 104e307d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e307f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 104e3082 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e3085 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3088 jne 0x104e3130 */
  if (!C.zf) goto L_104e3130;
  /* 104e308e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e3091 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 104e3095 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3099 jne 0x104e30a4 */
  if (!C.zf) goto L_104e30a4;
  /* 104e309b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 104e30a2 jmp 0x104e30b4 */
  goto L_104e30b4;
L_104e30a4:;
  /* 104e30a4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 104e30a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e30aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104e30ac sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e30ae add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e30b1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_104e30b4:;
  /* 104e30b4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 104e30b7 push eax */
  push32((uint32_t)(EAX));
  /* 104e30b8 call dword ptr [0x10512284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512284))), 0x104e30beu);
  /* 104e30be mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 104e30c1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e30c5 je 0x104e311f */
  if (C.zf) goto L_104e311f;
  /* 104e30c7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104e30ca push ecx */
  push32((uint32_t)(ECX));
  /* 104e30cb call dword ptr [0x105122d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122d4))), 0x104e30d1u);
  /* 104e30d1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 104e30d4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e30d8 je 0x104e311f */
  if (C.zf) goto L_104e311f;
  /* 104e30da mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e30dd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104e30e0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104e30e2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 104e30e5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e30eb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e30ee jne 0x104e3100 */
  if (!C.zf) goto L_104e3100;
  /* 104e30f0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e30f3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 104e30f6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 104e30f8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e30fb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 104e30fe jmp 0x104e311d */
  goto L_104e311d;
L_104e3100:;
  /* 104e3100 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 104e3103 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e3109 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e310c jne 0x104e311d */
  if (!C.zf) goto L_104e311d;
  /* 104e310e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e3111 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e3114 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 104e3117 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e311a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_104e311d:;
  /* 104e311d jmp 0x104e312e */
  goto L_104e312e;
L_104e311f:;
  /* 104e311f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e3122 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e3125 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 104e3128 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e312b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_104e312e:;
  /* 104e312e jmp 0x104e313f */
  goto L_104e313f;
L_104e3130:;
  /* 104e3130 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e3133 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104e3136 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 104e3139 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e313c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_104e313f:;
  /* 104e313f jmp 0x104e305e */
  goto L_104e305e;
L_104e3144:;
  /* 104e3144 mov eax, dword ptr [0x10510fdc] */
  EAX = (r32((uint32_t)(0x10510fdc)));
  /* 104e3149 push eax */
  push32((uint32_t)(EAX));
  /* 104e314a call dword ptr [0x105122d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122d0))), 0x104e3150u);
  /* 104e3150 mov esp, ebp */
  ESP = (EBP);
  /* 104e3152 pop ebp */
  EBP = (pop32());
  /* 104e3153 ret  */
  ESPCHK(0x104e2e30u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x104e3160 (155 bytes, 45 insns) */
void f_104e3160(void) {
  FTRACE(0x104e3160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3160 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3161 mov ebp, esp */
  EBP = (ESP);
  /* 104e3163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e3166 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104e316d jmp 0x104e3178 */
  goto L_104e3178;
L_104e316f:;
  /* 104e316f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e3172 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3175 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104e3178:;
  /* 104e3178 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e317c jge 0x104e31f7 */
  if ((C.sf==C.of)) goto L_104e31f7;
  /* 104e317e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e3181 cmp dword ptr [ecx*4 + 0x10510ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10510ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3189 je 0x104e31f2 */
  if (C.zf) goto L_104e31f2;
  /* 104e318b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e318e mov eax, dword ptr [edx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10510ea0)));
  /* 104e3195 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e3198 jmp 0x104e31a3 */
  goto L_104e31a3;
L_104e319a:;
  /* 104e319a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e319d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e31a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104e31a3:;
  /* 104e31a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e31a6 mov eax, dword ptr [edx*4 + 0x10510ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10510ea0)));
  /* 104e31ad add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e31b2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e31b5 jae 0x104e31cf */
  if (!C.cf) goto L_104e31cf;
  /* 104e31b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e31ba cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e31be je 0x104e31cd */
  if (C.zf) goto L_104e31cd;
  /* 104e31c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e31c3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e31c6 push edx */
  push32((uint32_t)(EDX));
  /* 104e31c7 call dword ptr [0x105122dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122dc))), 0x104e31cdu);
L_104e31cd:;
  /* 104e31cd jmp 0x104e319a */
  goto L_104e319a;
L_104e31cf:;
  /* 104e31cf push 2 */
  push32((uint32_t)(0x2u));
  /* 104e31d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e31d4 mov ecx, dword ptr [eax*4 + 0x10510ea0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10510ea0)));
  /* 104e31db push ecx */
  push32((uint32_t)(ECX));
  /* 104e31dc call 0x104e3cb0 */
  push32(0x104e31e1u); f_104e3cb0();
  /* 104e31e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e31e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e31e7 mov dword ptr [edx*4 + 0x10510ea0], 0 */
  w32((uint32_t)(EDX*4 + 0x10510ea0), (0x0u));
L_104e31f2:;
  /* 104e31f2 jmp 0x104e316f */
  goto L_104e316f;
L_104e31f7:;
  /* 104e31f7 mov esp, ebp */
  ESP = (EBP);
  /* 104e31f9 pop ebp */
  EBP = (pop32());
  /* 104e31fa ret  */
  ESPCHK(0x104e3160u, _esp0);
  ESP += 4; return;
}

/* FUN_10003200 @ 0x104e3200 (29 bytes, 13 insns) */
void f_104e3200(void) {
  FTRACE(0x104e3200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3200 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3201 mov ebp, esp */
  EBP = (ESP);
  /* 104e3203 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3205 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3207 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3209 mov eax, dword ptr [0x1050f6a8] */
  EAX = (r32((uint32_t)(0x1050f6a8)));
  /* 104e320e push eax */
  push32((uint32_t)(EAX));
  /* 104e320f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3212 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3213 call 0x104e3270 */
  push32(0x104e3218u); f_104e3270();
  /* 104e3218 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e321b pop ebp */
  EBP = (pop32());
  /* 104e321c ret  */
  ESPCHK(0x104e3200u, _esp0);
  ESP += 4; return;
}

/* FUN_10003220 @ 0x104e3220 (35 bytes, 16 insns) */
void f_104e3220(void) {
  FTRACE(0x104e3220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3220 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3221 mov ebp, esp */
  EBP = (ESP);
  /* 104e3223 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e3226 push eax */
  push32((uint32_t)(EAX));
  /* 104e3227 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e322a push ecx */
  push32((uint32_t)(ECX));
  /* 104e322b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e322e push edx */
  push32((uint32_t)(EDX));
  /* 104e322f mov eax, dword ptr [0x1050f6a8] */
  EAX = (r32((uint32_t)(0x1050f6a8)));
  /* 104e3234 push eax */
  push32((uint32_t)(EAX));
  /* 104e3235 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3238 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3239 call 0x104e3270 */
  push32(0x104e323eu); f_104e3270();
  /* 104e323e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3241 pop ebp */
  EBP = (pop32());
  /* 104e3242 ret  */
  ESPCHK(0x104e3220u, _esp0);
  ESP += 4; return;
}

/* FUN_10003250 @ 0x104e3250 (27 bytes, 13 insns) */
void f_104e3250(void) {
  FTRACE(0x104e3250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3250 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3251 mov ebp, esp */
  EBP = (ESP);
  /* 104e3253 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3255 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3257 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3259 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e325c push eax */
  push32((uint32_t)(EAX));
  /* 104e325d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3260 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3261 call 0x104e3270 */
  push32(0x104e3266u); f_104e3270();
  /* 104e3266 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3269 pop ebp */
  EBP = (pop32());
  /* 104e326a ret  */
  ESPCHK(0x104e3250u, _esp0);
  ESP += 4; return;
}

/* FUN_10003270 @ 0x104e3270 (94 bytes, 38 insns) */
void f_104e3270(void) {
  FTRACE(0x104e3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3270 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3271 mov ebp, esp */
  EBP = (ESP);
  /* 104e3273 push ecx */
  push32((uint32_t)(ECX));
L_104e3274:;
  /* 104e3274 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e3276 call 0x104e6c20 */
  push32(0x104e327bu); f_104e6c20();
  /* 104e327b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e327e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e3281 push eax */
  push32((uint32_t)(EAX));
  /* 104e3282 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e3285 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3286 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e3289 push edx */
  push32((uint32_t)(EDX));
  /* 104e328a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e328d push eax */
  push32((uint32_t)(EAX));
  /* 104e328e call 0x104e32f0 */
  push32(0x104e3293u); f_104e32f0();
  /* 104e3293 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3296 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e3299 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e329b call 0x104e6cc0 */
  push32(0x104e32a0u); f_104e6cc0();
  /* 104e32a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e32a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e32a7 jne 0x104e32af */
  if (!C.zf) goto L_104e32af;
  /* 104e32a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e32ad jne 0x104e32b4 */
  if (!C.zf) goto L_104e32b4;
L_104e32af:;
  /* 104e32af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e32b2 jmp 0x104e32ca */
  goto L_104e32ca;
L_104e32b4:;
  /* 104e32b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e32b7 push ecx */
  push32((uint32_t)(ECX));
  /* 104e32b8 call 0x104e6f60 */
  push32(0x104e32bdu); f_104e6f60();
  /* 104e32bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e32c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e32c2 jne 0x104e32c8 */
  if (!C.zf) goto L_104e32c8;
  /* 104e32c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e32c6 jmp 0x104e32ca */
  goto L_104e32ca;
L_104e32c8:;
  /* 104e32c8 jmp 0x104e3274 */
  goto L_104e3274;
L_104e32ca:;
  /* 104e32ca mov esp, ebp */
  ESP = (EBP);
  /* 104e32cc pop ebp */
  EBP = (pop32());
  /* 104e32cd ret  */
  ESPCHK(0x104e3270u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x104e32d0 (23 bytes, 11 insns) */
void f_104e32d0(void) {
  FTRACE(0x104e32d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e32d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e32d1 mov ebp, esp */
  EBP = (ESP);
  /* 104e32d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e32d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e32d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e32d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e32dc push eax */
  push32((uint32_t)(EAX));
  /* 104e32dd call 0x104e32f0 */
  push32(0x104e32e2u); f_104e32f0();
  /* 104e32e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e32e5 pop ebp */
  EBP = (pop32());
  /* 104e32e6 ret  */
  ESPCHK(0x104e32d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x104e32f0 (787 bytes, 254 insns) */
void f_104e32f0(void) {
  FTRACE(0x104e32f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e32f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e32f1 mov ebp, esp */
  EBP = (ESP);
  /* 104e32f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e32f6 push ebx */
  push32((uint32_t)(EBX));
  /* 104e32f7 push esi */
  push32((uint32_t)(ESI));
  /* 104e32f8 push edi */
  push32((uint32_t)(EDI));
  /* 104e32f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104e3300 mov eax, dword ptr [0x1050da84] */
  EAX = (r32((uint32_t)(0x1050da84)));
  /* 104e3305 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104e3308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e330a je 0x104e333c */
  if (C.zf) goto L_104e333c;
L_104e330c:;
  /* 104e330c call 0x104e43c0 */
  push32(0x104e3311u); f_104e43c0();
  /* 104e3311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3313 jne 0x104e3336 */
  if (!C.zf) goto L_104e3336;
  /* 104e3315 push 0x1050a588 */
  push32((uint32_t)(0x1050a588u));
  /* 104e331a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e331c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 104e3321 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3326 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e3328 call 0x104e22e0 */
  push32(0x104e332du); f_104e22e0();
  /* 104e332d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3330 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3333 jne 0x104e3336 */
  if (!C.zf) goto L_104e3336;
  /* 104e3335 int3  */
  x86_unimpl("int3 @ 0x104e3335");
L_104e3336:;
  /* 104e3336 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e3338 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e333a jne 0x104e330c */
  if (!C.zf) goto L_104e330c;
L_104e333c:;
  /* 104e333c mov edx, dword ptr [0x1050da88] */
  EDX = (r32((uint32_t)(0x1050da88)));
  /* 104e3342 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104e3345 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e3348 cmp eax, dword ptr [0x1050da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e334e jne 0x104e3351 */
  if (!C.zf) goto L_104e3351;
  /* 104e3350 int3  */
  x86_unimpl("int3 @ 0x104e3350");
L_104e3351:;
  /* 104e3351 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e3354 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3355 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e3358 push edx */
  push32((uint32_t)(EDX));
  /* 104e3359 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e335c push eax */
  push32((uint32_t)(EAX));
  /* 104e335d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3360 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3364 push edx */
  push32((uint32_t)(EDX));
  /* 104e3365 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3367 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3369 call dword ptr [0x1050dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050dc90))), 0x104e336fu);
  /* 104e336f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3374 jne 0x104e33d4 */
  if (!C.zf) goto L_104e33d4;
  /* 104e3376 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e337a je 0x104e33a7 */
  if (C.zf) goto L_104e33a7;
L_104e337c:;
  /* 104e337c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e337f push eax */
  push32((uint32_t)(EAX));
  /* 104e3380 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e3383 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3384 push 0x1050a544 */
  push32((uint32_t)(0x1050a544u));
  /* 104e3389 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e338b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e338d push 0 */
  push32((uint32_t)(0x0u));
  /* 104e338f push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3391 call 0x104e22e0 */
  push32(0x104e3396u); f_104e22e0();
  /* 104e3396 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3399 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e339c jne 0x104e339f */
  if (!C.zf) goto L_104e339f;
  /* 104e339e int3  */
  x86_unimpl("int3 @ 0x104e339e");
L_104e339f:;
  /* 104e339f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e33a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e33a3 jne 0x104e337c */
  if (!C.zf) goto L_104e337c;
  /* 104e33a5 jmp 0x104e33cd */
  goto L_104e33cd;
L_104e33a7:;
  /* 104e33a7 push 0x1050a520 */
  push32((uint32_t)(0x1050a520u));
  /* 104e33ac push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e33b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e33b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e33b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e33b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e33b9 call 0x104e22e0 */
  push32(0x104e33beu); f_104e22e0();
  /* 104e33be add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e33c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e33c4 jne 0x104e33c7 */
  if (!C.zf) goto L_104e33c7;
  /* 104e33c6 int3  */
  x86_unimpl("int3 @ 0x104e33c6");
L_104e33c7:;
  /* 104e33c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e33c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e33cb jne 0x104e33a7 */
  if (!C.zf) goto L_104e33a7;
L_104e33cd:;
  /* 104e33cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e33cf jmp 0x104e35fc */
  goto L_104e35fc;
L_104e33d4:;
  /* 104e33d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e33d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e33dd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e33e0 je 0x104e33f6 */
  if (C.zf) goto L_104e33f6;
  /* 104e33e2 mov edx, dword ptr [0x1050da84] */
  EDX = (r32((uint32_t)(0x1050da84)));
  /* 104e33e8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104e33eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e33ed jne 0x104e33f6 */
  if (!C.zf) goto L_104e33f6;
  /* 104e33ef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_104e33f6:;
  /* 104e33f6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e33fa ja 0x104e3407 */
  if ((!C.cf&&!C.zf)) goto L_104e3407;
  /* 104e33fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e33ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3402 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3405 jbe 0x104e3433 */
  if ((C.cf||C.zf)) goto L_104e3433;
L_104e3407:;
  /* 104e3407 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e340a push ecx */
  push32((uint32_t)(ECX));
  /* 104e340b push 0x1050a4f8 */
  push32((uint32_t)(0x1050a4f8u));
  /* 104e3410 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3412 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3414 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3416 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3418 call 0x104e22e0 */
  push32(0x104e341du); f_104e22e0();
  /* 104e341d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3420 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3423 jne 0x104e3426 */
  if (!C.zf) goto L_104e3426;
  /* 104e3425 int3  */
  x86_unimpl("int3 @ 0x104e3425");
L_104e3426:;
  /* 104e3426 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e3428 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e342a jne 0x104e3407 */
  if (!C.zf) goto L_104e3407;
  /* 104e342c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e342e jmp 0x104e35fc */
  goto L_104e35fc;
L_104e3433:;
  /* 104e3433 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3436 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e343b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e343e je 0x104e3480 */
  if (C.zf) goto L_104e3480;
  /* 104e3440 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3444 je 0x104e3480 */
  if (C.zf) goto L_104e3480;
  /* 104e3446 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3449 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e344f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3452 je 0x104e3480 */
  if (C.zf) goto L_104e3480;
  /* 104e3454 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3458 je 0x104e3480 */
  if (C.zf) goto L_104e3480;
L_104e345a:;
  /* 104e345a push 0x1050a4c4 */
  push32((uint32_t)(0x1050a4c4u));
  /* 104e345f push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e3464 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3466 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3468 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e346a push 1 */
  push32((uint32_t)(0x1u));
  /* 104e346c call 0x104e22e0 */
  push32(0x104e3471u); f_104e22e0();
  /* 104e3471 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3474 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3477 jne 0x104e347a */
  if (!C.zf) goto L_104e347a;
  /* 104e3479 int3  */
  x86_unimpl("int3 @ 0x104e3479");
L_104e347a:;
  /* 104e347a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e347c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e347e jne 0x104e345a */
  if (!C.zf) goto L_104e345a;
L_104e3480:;
  /* 104e3480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3483 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3486 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104e3489 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e348c push ecx */
  push32((uint32_t)(ECX));
  /* 104e348d call 0x104e7070 */
  push32(0x104e3492u); f_104e7070();
  /* 104e3492 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3495 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e3498 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e349c jne 0x104e34a5 */
  if (!C.zf) goto L_104e34a5;
  /* 104e349e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e34a0 jmp 0x104e35fc */
  goto L_104e35fc;
L_104e34a5:;
  /* 104e34a5 mov edx, dword ptr [0x1050da88] */
  EDX = (r32((uint32_t)(0x1050da88)));
  /* 104e34ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e34ae mov dword ptr [0x1050da88], edx */
  w32((uint32_t)(0x1050da88), (EDX));
  /* 104e34b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e34b8 je 0x104e3503 */
  if (C.zf) goto L_104e3503;
  /* 104e34ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e34bd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104e34c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e34c6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 104e34cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e34d0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 104e34d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e34da mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 104e34e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e34e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e34e7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 104e34ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e34ed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 104e34f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e34f7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 104e34fe jmp 0x104e35a3 */
  goto L_104e35a3;
L_104e3503:;
  /* 104e3503 mov edx, dword ptr [0x1050f508] */
  EDX = (r32((uint32_t)(0x1050f508)));
  /* 104e3509 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e350c mov dword ptr [0x1050f508], edx */
  w32((uint32_t)(0x1050f508), (EDX));
  /* 104e3512 mov eax, dword ptr [0x1050f510] */
  EAX = (r32((uint32_t)(0x1050f510)));
  /* 104e3517 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e351a mov dword ptr [0x1050f510], eax */
  w32((uint32_t)(0x1050f510), (EAX));
  /* 104e351f mov ecx, dword ptr [0x1050f510] */
  ECX = (r32((uint32_t)(0x1050f510)));
  /* 104e3525 cmp ecx, dword ptr [0x1050f514] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1050f514))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e352b jbe 0x104e3539 */
  if ((C.cf||C.zf)) goto L_104e3539;
  /* 104e352d mov edx, dword ptr [0x1050f510] */
  EDX = (r32((uint32_t)(0x1050f510)));
  /* 104e3533 mov dword ptr [0x1050f514], edx */
  w32((uint32_t)(0x1050f514), (EDX));
L_104e3539:;
  /* 104e3539 cmp dword ptr [0x1050f50c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f50c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3540 je 0x104e354f */
  if (C.zf) goto L_104e354f;
  /* 104e3542 mov eax, dword ptr [0x1050f50c] */
  EAX = (r32((uint32_t)(0x1050f50c)));
  /* 104e3547 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e354a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 104e354d jmp 0x104e3558 */
  goto L_104e3558;
L_104e354f:;
  /* 104e354f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3552 mov dword ptr [0x1050f504], edx */
  w32((uint32_t)(0x1050f504), (EDX));
L_104e3558:;
  /* 104e3558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e355b mov ecx, dword ptr [0x1050f50c] */
  ECX = (r32((uint32_t)(0x1050f50c)));
  /* 104e3561 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104e3563 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3566 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 104e356d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3570 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e3573 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 104e3576 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3579 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e357c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 104e357f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3582 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3585 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 104e3588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e358b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e358e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 104e3591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3594 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e3597 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 104e359a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e359d mov dword ptr [0x1050f50c], ecx */
  w32((uint32_t)(0x1050f50c), (ECX));
L_104e35a3:;
  /* 104e35a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e35a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e35a7 mov dl, byte ptr [0x1050da90] */
  DL = (r8((uint32_t)(0x1050da90)));
  /* 104e35ad push edx */
  push32((uint32_t)(EDX));
  /* 104e35ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e35b1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e35b4 push eax */
  push32((uint32_t)(EAX));
  /* 104e35b5 call 0x104e6f90 */
  push32(0x104e35bau); f_104e6f90();
  /* 104e35ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e35bd push 4 */
  push32((uint32_t)(0x4u));
  /* 104e35bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e35c1 mov cl, byte ptr [0x1050da90] */
  CL = (r8((uint32_t)(0x1050da90)));
  /* 104e35c7 push ecx */
  push32((uint32_t)(ECX));
  /* 104e35c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e35cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e35ce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 104e35d2 push ecx */
  push32((uint32_t)(ECX));
  /* 104e35d3 call 0x104e6f90 */
  push32(0x104e35d8u); f_104e6f90();
  /* 104e35d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e35db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e35de push edx */
  push32((uint32_t)(EDX));
  /* 104e35df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e35e1 mov al, byte ptr [0x1050da92] */
  AL = (r8((uint32_t)(0x1050da92)));
  /* 104e35e6 push eax */
  push32((uint32_t)(EAX));
  /* 104e35e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e35ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e35ed push ecx */
  push32((uint32_t)(ECX));
  /* 104e35ee call 0x104e6f90 */
  push32(0x104e35f3u); f_104e6f90();
  /* 104e35f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e35f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e35f9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_104e35fc:;
  /* 104e35fc pop edi */
  EDI = (pop32());
  /* 104e35fd pop esi */
  ESI = (pop32());
  /* 104e35fe pop ebx */
  EBX = (pop32());
  /* 104e35ff mov esp, ebp */
  ESP = (EBP);
  /* 104e3601 pop ebp */
  EBP = (pop32());
  /* 104e3602 ret  */
  ESPCHK(0x104e32f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003610 @ 0x104e3610 (27 bytes, 13 insns) */
void f_104e3610(void) {
  FTRACE(0x104e3610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3610 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3611 mov ebp, esp */
  EBP = (ESP);
  /* 104e3613 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3615 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3617 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3619 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e361c push eax */
  push32((uint32_t)(EAX));
  /* 104e361d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3620 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3621 call 0x104e3630 */
  push32(0x104e3626u); f_104e3630();
  /* 104e3626 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3629 pop ebp */
  EBP = (pop32());
  /* 104e362a ret  */
  ESPCHK(0x104e3610u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x104e3630 (96 bytes, 37 insns) */
void f_104e3630(void) {
  FTRACE(0x104e3630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3630 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3631 mov ebp, esp */
  EBP = (ESP);
  /* 104e3633 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e3636 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3639 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e363d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 104e3640 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e3643 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3644 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e3647 push edx */
  push32((uint32_t)(EDX));
  /* 104e3648 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e364b push eax */
  push32((uint32_t)(EAX));
  /* 104e364c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e364f push ecx */
  push32((uint32_t)(ECX));
  /* 104e3650 call 0x104e3220 */
  push32(0x104e3655u); f_104e3220();
  /* 104e3655 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3658 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e365b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e365f je 0x104e3689 */
  if (C.zf) goto L_104e3689;
  /* 104e3661 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e3664 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104e3667 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e366a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e366d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e3670:;
  /* 104e3670 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3673 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3676 jae 0x104e3689 */
  if (!C.cf) goto L_104e3689;
  /* 104e3678 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e367b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104e367e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3681 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3684 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e3687 jmp 0x104e3670 */
  goto L_104e3670;
L_104e3689:;
  /* 104e3689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e368c mov esp, ebp */
  ESP = (EBP);
  /* 104e368e pop ebp */
  EBP = (pop32());
  /* 104e368f ret  */
  ESPCHK(0x104e3630u, _esp0);
  ESP += 4; return;
}

/* FUN_10003690 @ 0x104e3690 (27 bytes, 13 insns) */
void f_104e3690(void) {
  FTRACE(0x104e3690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3690 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3691 mov ebp, esp */
  EBP = (ESP);
  /* 104e3693 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3695 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3697 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3699 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e369c push eax */
  push32((uint32_t)(EAX));
  /* 104e369d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e36a0 push ecx */
  push32((uint32_t)(ECX));
  /* 104e36a1 call 0x104e36b0 */
  push32(0x104e36a6u); f_104e36b0();
  /* 104e36a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e36a9 pop ebp */
  EBP = (pop32());
  /* 104e36aa ret  */
  ESPCHK(0x104e3690u, _esp0);
  ESP += 4; return;
}

/* FUN_100036b0 @ 0x104e36b0 (64 bytes, 27 insns) */
void f_104e36b0(void) {
  FTRACE(0x104e36b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e36b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e36b1 mov ebp, esp */
  EBP = (ESP);
  /* 104e36b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e36b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e36b6 call 0x104e6c20 */
  push32(0x104e36bbu); f_104e6c20();
  /* 104e36bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e36be push 1 */
  push32((uint32_t)(0x1u));
  /* 104e36c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e36c3 push eax */
  push32((uint32_t)(EAX));
  /* 104e36c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e36c7 push ecx */
  push32((uint32_t)(ECX));
  /* 104e36c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e36cb push edx */
  push32((uint32_t)(EDX));
  /* 104e36cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e36cf push eax */
  push32((uint32_t)(EAX));
  /* 104e36d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e36d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e36d4 call 0x104e36f0 */
  push32(0x104e36d9u); f_104e36f0();
  /* 104e36d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e36dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e36df push 9 */
  push32((uint32_t)(0x9u));
  /* 104e36e1 call 0x104e6cc0 */
  push32(0x104e36e6u); f_104e6cc0();
  /* 104e36e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e36e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e36ec mov esp, ebp */
  ESP = (EBP);
  /* 104e36ee pop ebp */
  EBP = (pop32());
  /* 104e36ef ret  */
  ESPCHK(0x104e36b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036f0 @ 0x104e36f0 (1297 bytes, 431 insns) */
void f_104e36f0(void) {
  FTRACE(0x104e36f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e36f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e36f1 mov ebp, esp */
  EBP = (ESP);
  /* 104e36f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e36f6 push ebx */
  push32((uint32_t)(EBX));
  /* 104e36f7 push esi */
  push32((uint32_t)(ESI));
  /* 104e36f8 push edi */
  push32((uint32_t)(EDI));
  /* 104e36f9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 104e3700 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3704 jne 0x104e3723 */
  if (!C.zf) goto L_104e3723;
  /* 104e3706 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e3709 push eax */
  push32((uint32_t)(EAX));
  /* 104e370a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e370d push ecx */
  push32((uint32_t)(ECX));
  /* 104e370e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e3711 push edx */
  push32((uint32_t)(EDX));
  /* 104e3712 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3715 push eax */
  push32((uint32_t)(EAX));
  /* 104e3716 call 0x104e3220 */
  push32(0x104e371bu); f_104e3220();
  /* 104e371b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e371e jmp 0x104e3bfa */
  goto L_104e3bfa;
L_104e3723:;
  /* 104e3723 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3727 je 0x104e3746 */
  if (C.zf) goto L_104e3746;
  /* 104e3729 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e372d jne 0x104e3746 */
  if (!C.zf) goto L_104e3746;
  /* 104e372f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e3732 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3733 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3736 push edx */
  push32((uint32_t)(EDX));
  /* 104e3737 call 0x104e3cb0 */
  push32(0x104e373cu); f_104e3cb0();
  /* 104e373c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e373f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e3741 jmp 0x104e3bfa */
  goto L_104e3bfa;
L_104e3746:;
  /* 104e3746 mov eax, dword ptr [0x1050da84] */
  EAX = (r32((uint32_t)(0x1050da84)));
  /* 104e374b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104e374e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3750 je 0x104e3782 */
  if (C.zf) goto L_104e3782;
L_104e3752:;
  /* 104e3752 call 0x104e43c0 */
  push32(0x104e3757u); f_104e43c0();
  /* 104e3757 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3759 jne 0x104e377c */
  if (!C.zf) goto L_104e377c;
  /* 104e375b push 0x1050a588 */
  push32((uint32_t)(0x1050a588u));
  /* 104e3760 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3762 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 104e3767 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e376c push 2 */
  push32((uint32_t)(0x2u));
  /* 104e376e call 0x104e22e0 */
  push32(0x104e3773u); f_104e22e0();
  /* 104e3773 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3776 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3779 jne 0x104e377c */
  if (!C.zf) goto L_104e377c;
  /* 104e377b int3  */
  x86_unimpl("int3 @ 0x104e377b");
L_104e377c:;
  /* 104e377c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e377e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e3780 jne 0x104e3752 */
  if (!C.zf) goto L_104e3752;
L_104e3782:;
  /* 104e3782 mov edx, dword ptr [0x1050da88] */
  EDX = (r32((uint32_t)(0x1050da88)));
  /* 104e3788 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104e378b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e378e cmp eax, dword ptr [0x1050da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3794 jne 0x104e3797 */
  if (!C.zf) goto L_104e3797;
  /* 104e3796 int3  */
  x86_unimpl("int3 @ 0x104e3796");
L_104e3797:;
  /* 104e3797 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e379a push ecx */
  push32((uint32_t)(ECX));
  /* 104e379b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e379e push edx */
  push32((uint32_t)(EDX));
  /* 104e379f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e37a2 push eax */
  push32((uint32_t)(EAX));
  /* 104e37a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e37a6 push ecx */
  push32((uint32_t)(ECX));
  /* 104e37a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e37aa push edx */
  push32((uint32_t)(EDX));
  /* 104e37ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e37ae push eax */
  push32((uint32_t)(EAX));
  /* 104e37af push 2 */
  push32((uint32_t)(0x2u));
  /* 104e37b1 call dword ptr [0x1050dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050dc90))), 0x104e37b7u);
  /* 104e37b7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e37ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e37bc jne 0x104e381c */
  if (!C.zf) goto L_104e381c;
  /* 104e37be cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e37c2 je 0x104e37ef */
  if (C.zf) goto L_104e37ef;
L_104e37c4:;
  /* 104e37c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e37c7 push ecx */
  push32((uint32_t)(ECX));
  /* 104e37c8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e37cb push edx */
  push32((uint32_t)(EDX));
  /* 104e37cc push 0x1050a704 */
  push32((uint32_t)(0x1050a704u));
  /* 104e37d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e37d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e37d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e37d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e37d9 call 0x104e22e0 */
  push32(0x104e37deu); f_104e22e0();
  /* 104e37de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e37e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e37e4 jne 0x104e37e7 */
  if (!C.zf) goto L_104e37e7;
  /* 104e37e6 int3  */
  x86_unimpl("int3 @ 0x104e37e6");
L_104e37e7:;
  /* 104e37e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e37e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e37eb jne 0x104e37c4 */
  if (!C.zf) goto L_104e37c4;
  /* 104e37ed jmp 0x104e3815 */
  goto L_104e3815;
L_104e37ef:;
  /* 104e37ef push 0x1050a6e0 */
  push32((uint32_t)(0x1050a6e0u));
  /* 104e37f4 push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e37f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e37fb push 0 */
  push32((uint32_t)(0x0u));
  /* 104e37fd push 0 */
  push32((uint32_t)(0x0u));
  /* 104e37ff push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3801 call 0x104e22e0 */
  push32(0x104e3806u); f_104e22e0();
  /* 104e3806 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3809 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e380c jne 0x104e380f */
  if (!C.zf) goto L_104e380f;
  /* 104e380e int3  */
  x86_unimpl("int3 @ 0x104e380e");
L_104e380f:;
  /* 104e380f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e3811 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e3813 jne 0x104e37ef */
  if (!C.zf) goto L_104e37ef;
L_104e3815:;
  /* 104e3815 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e3817 jmp 0x104e3bfa */
  goto L_104e3bfa;
L_104e381c:;
  /* 104e381c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3820 jbe 0x104e384e */
  if ((C.cf||C.zf)) goto L_104e384e;
L_104e3822:;
  /* 104e3822 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3825 push edx */
  push32((uint32_t)(EDX));
  /* 104e3826 push 0x1050a6b0 */
  push32((uint32_t)(0x1050a6b0u));
  /* 104e382b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e382d push 0 */
  push32((uint32_t)(0x0u));
  /* 104e382f push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3831 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3833 call 0x104e22e0 */
  push32(0x104e3838u); f_104e22e0();
  /* 104e3838 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e383b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e383e jne 0x104e3841 */
  if (!C.zf) goto L_104e3841;
  /* 104e3840 int3  */
  x86_unimpl("int3 @ 0x104e3840");
L_104e3841:;
  /* 104e3841 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e3843 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3845 jne 0x104e3822 */
  if (!C.zf) goto L_104e3822;
  /* 104e3847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e3849 jmp 0x104e3bfa */
  goto L_104e3bfa;
L_104e384e:;
  /* 104e384e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3852 je 0x104e3896 */
  if (C.zf) goto L_104e3896;
  /* 104e3854 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e3857 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e385d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3860 je 0x104e3896 */
  if (C.zf) goto L_104e3896;
  /* 104e3862 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e3865 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e386b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e386e je 0x104e3896 */
  if (C.zf) goto L_104e3896;
L_104e3870:;
  /* 104e3870 push 0x1050a4c4 */
  push32((uint32_t)(0x1050a4c4u));
  /* 104e3875 push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e387a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e387c push 0 */
  push32((uint32_t)(0x0u));
  /* 104e387e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3880 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3882 call 0x104e22e0 */
  push32(0x104e3887u); f_104e22e0();
  /* 104e3887 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e388a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e388d jne 0x104e3890 */
  if (!C.zf) goto L_104e3890;
  /* 104e388f int3  */
  x86_unimpl("int3 @ 0x104e388f");
L_104e3890:;
  /* 104e3890 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e3892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3894 jne 0x104e3870 */
  if (!C.zf) goto L_104e3870;
L_104e3896:;
  /* 104e3896 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3899 push ecx */
  push32((uint32_t)(ECX));
  /* 104e389a call 0x104e4820 */
  push32(0x104e389fu); f_104e4820();
  /* 104e389f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e38a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e38a4 jne 0x104e38c7 */
  if (!C.zf) goto L_104e38c7;
  /* 104e38a6 push 0x1050a68c */
  push32((uint32_t)(0x1050a68cu));
  /* 104e38ab push 0 */
  push32((uint32_t)(0x0u));
  /* 104e38ad push 0x261 */
  push32((uint32_t)(0x261u));
  /* 104e38b2 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e38b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e38b9 call 0x104e22e0 */
  push32(0x104e38beu); f_104e22e0();
  /* 104e38be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e38c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e38c4 jne 0x104e38c7 */
  if (!C.zf) goto L_104e38c7;
  /* 104e38c6 int3  */
  x86_unimpl("int3 @ 0x104e38c6");
L_104e38c7:;
  /* 104e38c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e38c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e38cb jne 0x104e3896 */
  if (!C.zf) goto L_104e3896;
  /* 104e38cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e38d0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e38d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e38d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e38d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e38dd jne 0x104e38e6 */
  if (!C.zf) goto L_104e38e6;
  /* 104e38df mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_104e38e6:;
  /* 104e38e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e38ea je 0x104e392a */
  if (C.zf) goto L_104e392a;
L_104e38ec:;
  /* 104e38ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e38ef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e38f6 jne 0x104e3901 */
  if (!C.zf) goto L_104e3901;
  /* 104e38f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e38fb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e38ff je 0x104e3922 */
  if (C.zf) goto L_104e3922;
L_104e3901:;
  /* 104e3901 push 0x1050a644 */
  push32((uint32_t)(0x1050a644u));
  /* 104e3906 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3908 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 104e390d push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3912 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e3914 call 0x104e22e0 */
  push32(0x104e3919u); f_104e22e0();
  /* 104e3919 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e391c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e391f jne 0x104e3922 */
  if (!C.zf) goto L_104e3922;
  /* 104e3921 int3  */
  x86_unimpl("int3 @ 0x104e3921");
L_104e3922:;
  /* 104e3922 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e3924 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e3926 jne 0x104e38ec */
  if (!C.zf) goto L_104e38ec;
  /* 104e3928 jmp 0x104e398e */
  goto L_104e398e;
L_104e392a:;
  /* 104e392a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e392d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e3930 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e3935 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3938 jne 0x104e394f */
  if (!C.zf) goto L_104e394f;
  /* 104e393a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e393d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e3943 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3946 jne 0x104e394f */
  if (!C.zf) goto L_104e394f;
  /* 104e3948 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_104e394f:;
  /* 104e394f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e3952 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e3955 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e395a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e395d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e3963 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3965 je 0x104e3988 */
  if (C.zf) goto L_104e3988;
  /* 104e3967 push 0x1050a608 */
  push32((uint32_t)(0x1050a608u));
  /* 104e396c push 0 */
  push32((uint32_t)(0x0u));
  /* 104e396e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 104e3973 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3978 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e397a call 0x104e22e0 */
  push32(0x104e397fu); f_104e22e0();
  /* 104e397f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3982 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3985 jne 0x104e3988 */
  if (!C.zf) goto L_104e3988;
  /* 104e3987 int3  */
  x86_unimpl("int3 @ 0x104e3987");
L_104e3988:;
  /* 104e3988 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e398a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e398c jne 0x104e394f */
  if (!C.zf) goto L_104e394f;
L_104e398e:;
  /* 104e398e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3992 je 0x104e39b9 */
  if (C.zf) goto L_104e39b9;
  /* 104e3994 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3997 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e399a push eax */
  push32((uint32_t)(EAX));
  /* 104e399b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e399e push ecx */
  push32((uint32_t)(ECX));
  /* 104e399f call 0x104e71a0 */
  push32(0x104e39a4u); f_104e71a0();
  /* 104e39a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e39a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e39aa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e39ae jne 0x104e39b7 */
  if (!C.zf) goto L_104e39b7;
  /* 104e39b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e39b2 jmp 0x104e3bfa */
  goto L_104e3bfa;
L_104e39b7:;
  /* 104e39b7 jmp 0x104e39dc */
  goto L_104e39dc;
L_104e39b9:;
  /* 104e39b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e39bc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e39bf push edx */
  push32((uint32_t)(EDX));
  /* 104e39c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e39c3 push eax */
  push32((uint32_t)(EAX));
  /* 104e39c4 call 0x104e70f0 */
  push32(0x104e39c9u); f_104e70f0();
  /* 104e39c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e39cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e39cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e39d3 jne 0x104e39dc */
  if (!C.zf) goto L_104e39dc;
  /* 104e39d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e39d7 jmp 0x104e3bfa */
  goto L_104e3bfa;
L_104e39dc:;
  /* 104e39dc mov ecx, dword ptr [0x1050da88] */
  ECX = (r32((uint32_t)(0x1050da88)));
  /* 104e39e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e39e5 mov dword ptr [0x1050da88], ecx */
  w32((uint32_t)(0x1050da88), (ECX));
  /* 104e39eb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e39ef jne 0x104e3a47 */
  if (!C.zf) goto L_104e3a47;
  /* 104e39f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e39f4 mov eax, dword ptr [0x1050f508] */
  EAX = (r32((uint32_t)(0x1050f508)));
  /* 104e39f9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e39fc mov dword ptr [0x1050f508], eax */
  w32((uint32_t)(0x1050f508), (EAX));
  /* 104e3a01 mov ecx, dword ptr [0x1050f508] */
  ECX = (r32((uint32_t)(0x1050f508)));
  /* 104e3a07 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3a0a mov dword ptr [0x1050f508], ecx */
  w32((uint32_t)(0x1050f508), (ECX));
  /* 104e3a10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3a13 mov eax, dword ptr [0x1050f510] */
  EAX = (r32((uint32_t)(0x1050f510)));
  /* 104e3a18 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e3a1b mov dword ptr [0x1050f510], eax */
  w32((uint32_t)(0x1050f510), (EAX));
  /* 104e3a20 mov ecx, dword ptr [0x1050f510] */
  ECX = (r32((uint32_t)(0x1050f510)));
  /* 104e3a26 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3a29 mov dword ptr [0x1050f510], ecx */
  w32((uint32_t)(0x1050f510), (ECX));
  /* 104e3a2f mov edx, dword ptr [0x1050f510] */
  EDX = (r32((uint32_t)(0x1050f510)));
  /* 104e3a35 cmp edx, dword ptr [0x1050f514] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1050f514))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3a3b jbe 0x104e3a47 */
  if ((C.cf||C.zf)) goto L_104e3a47;
  /* 104e3a3d mov eax, dword ptr [0x1050f510] */
  EAX = (r32((uint32_t)(0x1050f510)));
  /* 104e3a42 mov dword ptr [0x1050f514], eax */
  w32((uint32_t)(0x1050f514), (EAX));
L_104e3a47:;
  /* 104e3a47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3a4a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3a4d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e3a50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3a53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3a56 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3a59 jbe 0x104e3a7f */
  if ((C.cf||C.zf)) goto L_104e3a7f;
  /* 104e3a5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3a5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3a61 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e3a64 push edx */
  push32((uint32_t)(EDX));
  /* 104e3a65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e3a67 mov al, byte ptr [0x1050da92] */
  AL = (r8((uint32_t)(0x1050da92)));
  /* 104e3a6c push eax */
  push32((uint32_t)(EAX));
  /* 104e3a6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3a70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3a73 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3a76 push edx */
  push32((uint32_t)(EDX));
  /* 104e3a77 call 0x104e6f90 */
  push32(0x104e3a7cu); f_104e6f90();
  /* 104e3a7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e3a7f:;
  /* 104e3a7f push 4 */
  push32((uint32_t)(0x4u));
  /* 104e3a81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e3a83 mov al, byte ptr [0x1050da90] */
  AL = (r8((uint32_t)(0x1050da90)));
  /* 104e3a88 push eax */
  push32((uint32_t)(EAX));
  /* 104e3a89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3a8c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3a8f push ecx */
  push32((uint32_t)(ECX));
  /* 104e3a90 call 0x104e6f90 */
  push32(0x104e3a95u); f_104e6f90();
  /* 104e3a95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3a98 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3a9c jne 0x104e3ab9 */
  if (!C.zf) goto L_104e3ab9;
  /* 104e3a9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3aa1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e3aa4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104e3aa7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3aaa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e3aad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 104e3ab0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3ab3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e3ab6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_104e3ab9:;
  /* 104e3ab9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3abc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3abf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_104e3ac2:;
  /* 104e3ac2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3ac6 jne 0x104e3af7 */
  if (!C.zf) goto L_104e3af7;
  /* 104e3ac8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3acc jne 0x104e3ad6 */
  if (!C.zf) goto L_104e3ad6;
  /* 104e3ace mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3ad1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3ad4 je 0x104e3af7 */
  if (C.zf) goto L_104e3af7;
L_104e3ad6:;
  /* 104e3ad6 push 0x1050a5d4 */
  push32((uint32_t)(0x1050a5d4u));
  /* 104e3adb push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3add push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 104e3ae2 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3ae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e3ae9 call 0x104e22e0 */
  push32(0x104e3aeeu); f_104e22e0();
  /* 104e3aee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3af1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3af4 jne 0x104e3af7 */
  if (!C.zf) goto L_104e3af7;
  /* 104e3af6 int3  */
  x86_unimpl("int3 @ 0x104e3af6");
L_104e3af7:;
  /* 104e3af7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e3af9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e3afb jne 0x104e3ac2 */
  if (!C.zf) goto L_104e3ac2;
  /* 104e3afd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3b00 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3b03 je 0x104e3b0b */
  if (C.zf) goto L_104e3b0b;
  /* 104e3b05 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3b09 je 0x104e3b13 */
  if (C.zf) goto L_104e3b13;
L_104e3b0b:;
  /* 104e3b0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3b0e jmp 0x104e3bfa */
  goto L_104e3bfa;
L_104e3b13:;
  /* 104e3b13 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3b16 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3b19 je 0x104e3b2b */
  if (C.zf) goto L_104e3b2b;
  /* 104e3b1b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3b1e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e3b20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3b23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e3b26 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104e3b29 jmp 0x104e3b67 */
  goto L_104e3b67;
L_104e3b2b:;
  /* 104e3b2b mov eax, dword ptr [0x1050f504] */
  EAX = (r32((uint32_t)(0x1050f504)));
  /* 104e3b30 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3b33 je 0x104e3b56 */
  if (C.zf) goto L_104e3b56;
  /* 104e3b35 push 0x1050a5b8 */
  push32((uint32_t)(0x1050a5b8u));
  /* 104e3b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3b3c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 104e3b41 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3b46 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e3b48 call 0x104e22e0 */
  push32(0x104e3b4du); f_104e22e0();
  /* 104e3b4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3b50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3b53 jne 0x104e3b56 */
  if (!C.zf) goto L_104e3b56;
  /* 104e3b55 int3  */
  x86_unimpl("int3 @ 0x104e3b55");
L_104e3b56:;
  /* 104e3b56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e3b58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e3b5a jne 0x104e3b2b */
  if (!C.zf) goto L_104e3b2b;
  /* 104e3b5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3b5f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e3b62 mov dword ptr [0x1050f504], eax */
  w32((uint32_t)(0x1050f504), (EAX));
L_104e3b67:;
  /* 104e3b67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3b6a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3b6e je 0x104e3b7f */
  if (C.zf) goto L_104e3b7f;
  /* 104e3b70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3b73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e3b76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3b79 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e3b7b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104e3b7d jmp 0x104e3bba */
  goto L_104e3bba;
L_104e3b7f:;
  /* 104e3b7f mov eax, dword ptr [0x1050f50c] */
  EAX = (r32((uint32_t)(0x1050f50c)));
  /* 104e3b84 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3b87 je 0x104e3baa */
  if (C.zf) goto L_104e3baa;
  /* 104e3b89 push 0x1050a59c */
  push32((uint32_t)(0x1050a59cu));
  /* 104e3b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3b90 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 104e3b95 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3b9a push 2 */
  push32((uint32_t)(0x2u));
  /* 104e3b9c call 0x104e22e0 */
  push32(0x104e3ba1u); f_104e22e0();
  /* 104e3ba1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3ba4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3ba7 jne 0x104e3baa */
  if (!C.zf) goto L_104e3baa;
  /* 104e3ba9 int3  */
  x86_unimpl("int3 @ 0x104e3ba9");
L_104e3baa:;
  /* 104e3baa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e3bac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e3bae jne 0x104e3b7f */
  if (!C.zf) goto L_104e3b7f;
  /* 104e3bb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3bb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e3bb5 mov dword ptr [0x1050f50c], eax */
  w32((uint32_t)(0x1050f50c), (EAX));
L_104e3bba:;
  /* 104e3bba cmp dword ptr [0x1050f50c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f50c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3bc1 je 0x104e3bd1 */
  if (C.zf) goto L_104e3bd1;
  /* 104e3bc3 mov ecx, dword ptr [0x1050f50c] */
  ECX = (r32((uint32_t)(0x1050f50c)));
  /* 104e3bc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3bcc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 104e3bcf jmp 0x104e3bd9 */
  goto L_104e3bd9;
L_104e3bd1:;
  /* 104e3bd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3bd4 mov dword ptr [0x1050f504], eax */
  w32((uint32_t)(0x1050f504), (EAX));
L_104e3bd9:;
  /* 104e3bd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3bdc mov edx, dword ptr [0x1050f50c] */
  EDX = (r32((uint32_t)(0x1050f50c)));
  /* 104e3be2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104e3be4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3be7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 104e3bee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e3bf1 mov dword ptr [0x1050f50c], ecx */
  w32((uint32_t)(0x1050f50c), (ECX));
  /* 104e3bf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104e3bfa:;
  /* 104e3bfa pop edi */
  EDI = (pop32());
  /* 104e3bfb pop esi */
  ESI = (pop32());
  /* 104e3bfc pop ebx */
  EBX = (pop32());
  /* 104e3bfd mov esp, ebp */
  ESP = (EBP);
  /* 104e3bff pop ebp */
  EBP = (pop32());
  /* 104e3c00 ret  */
  ESPCHK(0x104e36f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c10 @ 0x104e3c10 (27 bytes, 13 insns) */
void f_104e3c10(void) {
  FTRACE(0x104e3c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3c10 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3c11 mov ebp, esp */
  EBP = (ESP);
  /* 104e3c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3c17 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3c19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3c1c push eax */
  push32((uint32_t)(EAX));
  /* 104e3c1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3c20 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3c21 call 0x104e3c30 */
  push32(0x104e3c26u); f_104e3c30();
  /* 104e3c26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3c29 pop ebp */
  EBP = (pop32());
  /* 104e3c2a ret  */
  ESPCHK(0x104e3c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c30 @ 0x104e3c30 (64 bytes, 27 insns) */
void f_104e3c30(void) {
  FTRACE(0x104e3c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3c30 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3c31 mov ebp, esp */
  EBP = (ESP);
  /* 104e3c33 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3c34 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e3c36 call 0x104e6c20 */
  push32(0x104e3c3bu); f_104e6c20();
  /* 104e3c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3c40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e3c43 push eax */
  push32((uint32_t)(EAX));
  /* 104e3c44 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e3c47 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3c48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e3c4b push edx */
  push32((uint32_t)(EDX));
  /* 104e3c4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3c4f push eax */
  push32((uint32_t)(EAX));
  /* 104e3c50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3c53 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3c54 call 0x104e36f0 */
  push32(0x104e3c59u); f_104e36f0();
  /* 104e3c59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3c5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e3c5f push 9 */
  push32((uint32_t)(0x9u));
  /* 104e3c61 call 0x104e6cc0 */
  push32(0x104e3c66u); f_104e6cc0();
  /* 104e3c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3c69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3c6c mov esp, ebp */
  ESP = (EBP);
  /* 104e3c6e pop ebp */
  EBP = (pop32());
  /* 104e3c6f ret  */
  ESPCHK(0x104e3c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c70 @ 0x104e3c70 (19 bytes, 9 insns) */
void f_104e3c70(void) {
  FTRACE(0x104e3c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3c70 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3c71 mov ebp, esp */
  EBP = (ESP);
  /* 104e3c73 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3c75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3c78 push eax */
  push32((uint32_t)(EAX));
  /* 104e3c79 call 0x104e3cb0 */
  push32(0x104e3c7eu); f_104e3cb0();
  /* 104e3c7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3c81 pop ebp */
  EBP = (pop32());
  /* 104e3c82 ret  */
  ESPCHK(0x104e3c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c90 @ 0x104e3c90 (19 bytes, 9 insns) */
void f_104e3c90(void) {
  FTRACE(0x104e3c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3c90 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3c91 mov ebp, esp */
  EBP = (ESP);
  /* 104e3c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3c95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3c98 push eax */
  push32((uint32_t)(EAX));
  /* 104e3c99 call 0x104e3ce0 */
  push32(0x104e3c9eu); f_104e3ce0();
  /* 104e3c9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3ca1 pop ebp */
  EBP = (pop32());
  /* 104e3ca2 ret  */
  ESPCHK(0x104e3c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cb0 @ 0x104e3cb0 (41 bytes, 16 insns) */
void f_104e3cb0(void) {
  FTRACE(0x104e3cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3cb1 mov ebp, esp */
  EBP = (ESP);
  /* 104e3cb3 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e3cb5 call 0x104e6c20 */
  push32(0x104e3cbau); f_104e6c20();
  /* 104e3cba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3cbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3cc0 push eax */
  push32((uint32_t)(EAX));
  /* 104e3cc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3cc4 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3cc5 call 0x104e3ce0 */
  push32(0x104e3ccau); f_104e3ce0();
  /* 104e3cca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3ccd push 9 */
  push32((uint32_t)(0x9u));
  /* 104e3ccf call 0x104e6cc0 */
  push32(0x104e3cd4u); f_104e6cc0();
  /* 104e3cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3cd7 pop ebp */
  EBP = (pop32());
  /* 104e3cd8 ret  */
  ESPCHK(0x104e3cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ce0 @ 0x104e3ce0 (1004 bytes, 342 insns) */
void f_104e3ce0(void) {
  FTRACE(0x104e3ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e3ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e3ce1 mov ebp, esp */
  EBP = (ESP);
  /* 104e3ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3ce4 push ebx */
  push32((uint32_t)(EBX));
  /* 104e3ce5 push esi */
  push32((uint32_t)(ESI));
  /* 104e3ce6 push edi */
  push32((uint32_t)(EDI));
  /* 104e3ce7 mov eax, dword ptr [0x1050da84] */
  EAX = (r32((uint32_t)(0x1050da84)));
  /* 104e3cec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104e3cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3cf1 je 0x104e3d23 */
  if (C.zf) goto L_104e3d23;
L_104e3cf3:;
  /* 104e3cf3 call 0x104e43c0 */
  push32(0x104e3cf8u); f_104e43c0();
  /* 104e3cf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3cfa jne 0x104e3d1d */
  if (!C.zf) goto L_104e3d1d;
  /* 104e3cfc push 0x1050a588 */
  push32((uint32_t)(0x1050a588u));
  /* 104e3d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3d03 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 104e3d08 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3d0d push 2 */
  push32((uint32_t)(0x2u));
  /* 104e3d0f call 0x104e22e0 */
  push32(0x104e3d14u); f_104e22e0();
  /* 104e3d14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3d17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3d1a jne 0x104e3d1d */
  if (!C.zf) goto L_104e3d1d;
  /* 104e3d1c int3  */
  x86_unimpl("int3 @ 0x104e3d1c");
L_104e3d1d:;
  /* 104e3d1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e3d1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e3d21 jne 0x104e3cf3 */
  if (!C.zf) goto L_104e3cf3;
L_104e3d23:;
  /* 104e3d23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3d27 jne 0x104e3d2e */
  if (!C.zf) goto L_104e3d2e;
  /* 104e3d29 jmp 0x104e40c5 */
  goto L_104e40c5;
L_104e3d2e:;
  /* 104e3d2e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3d34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e3d37 push edx */
  push32((uint32_t)(EDX));
  /* 104e3d38 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3d3d push eax */
  push32((uint32_t)(EAX));
  /* 104e3d3e push 3 */
  push32((uint32_t)(0x3u));
  /* 104e3d40 call dword ptr [0x1050dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050dc90))), 0x104e3d46u);
  /* 104e3d46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3d4b jne 0x104e3d78 */
  if (!C.zf) goto L_104e3d78;
L_104e3d4d:;
  /* 104e3d4d push 0x1050a84c */
  push32((uint32_t)(0x1050a84cu));
  /* 104e3d52 push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e3d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3d5f call 0x104e22e0 */
  push32(0x104e3d64u); f_104e22e0();
  /* 104e3d64 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3d67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3d6a jne 0x104e3d6d */
  if (!C.zf) goto L_104e3d6d;
  /* 104e3d6c int3  */
  x86_unimpl("int3 @ 0x104e3d6c");
L_104e3d6d:;
  /* 104e3d6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e3d6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e3d71 jne 0x104e3d4d */
  if (!C.zf) goto L_104e3d4d;
  /* 104e3d73 jmp 0x104e40c5 */
  goto L_104e40c5;
L_104e3d78:;
  /* 104e3d78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3d7b push edx */
  push32((uint32_t)(EDX));
  /* 104e3d7c call 0x104e4820 */
  push32(0x104e3d81u); f_104e4820();
  /* 104e3d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3d84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3d86 jne 0x104e3da9 */
  if (!C.zf) goto L_104e3da9;
  /* 104e3d88 push 0x1050a68c */
  push32((uint32_t)(0x1050a68cu));
  /* 104e3d8d push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3d8f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 104e3d94 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3d99 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e3d9b call 0x104e22e0 */
  push32(0x104e3da0u); f_104e22e0();
  /* 104e3da0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3da3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3da6 jne 0x104e3da9 */
  if (!C.zf) goto L_104e3da9;
  /* 104e3da8 int3  */
  x86_unimpl("int3 @ 0x104e3da8");
L_104e3da9:;
  /* 104e3da9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e3dab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3dad jne 0x104e3d78 */
  if (!C.zf) goto L_104e3d78;
  /* 104e3daf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e3db2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e3db5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104e3db8:;
  /* 104e3db8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3dbb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e3dbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e3dc3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3dc6 je 0x104e3e0b */
  if (C.zf) goto L_104e3e0b;
  /* 104e3dc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3dcb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3dcf je 0x104e3e0b */
  if (C.zf) goto L_104e3e0b;
  /* 104e3dd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3dd4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e3dd7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e3ddc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3ddf je 0x104e3e0b */
  if (C.zf) goto L_104e3e0b;
  /* 104e3de1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3de4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3de8 je 0x104e3e0b */
  if (C.zf) goto L_104e3e0b;
  /* 104e3dea push 0x1050a824 */
  push32((uint32_t)(0x1050a824u));
  /* 104e3def push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3df1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 104e3df6 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3dfb push 2 */
  push32((uint32_t)(0x2u));
  /* 104e3dfd call 0x104e22e0 */
  push32(0x104e3e02u); f_104e22e0();
  /* 104e3e02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3e05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3e08 jne 0x104e3e0b */
  if (!C.zf) goto L_104e3e0b;
  /* 104e3e0a int3  */
  x86_unimpl("int3 @ 0x104e3e0a");
L_104e3e0b:;
  /* 104e3e0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e3e0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e3e0f jne 0x104e3db8 */
  if (!C.zf) goto L_104e3db8;
  /* 104e3e11 mov eax, dword ptr [0x1050da84] */
  EAX = (r32((uint32_t)(0x1050da84)));
  /* 104e3e16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104e3e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3e1b jne 0x104e3ee6 */
  if (!C.zf) goto L_104e3ee6;
  /* 104e3e21 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e3e23 mov cl, byte ptr [0x1050da90] */
  CL = (r8((uint32_t)(0x1050da90)));
  /* 104e3e29 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3e2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3e2d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3e30 push edx */
  push32((uint32_t)(EDX));
  /* 104e3e31 call 0x104e4330 */
  push32(0x104e3e36u); f_104e4330();
  /* 104e3e36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3e3b jne 0x104e3e80 */
  if (!C.zf) goto L_104e3e80;
L_104e3e3d:;
  /* 104e3e3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3e40 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3e43 push eax */
  push32((uint32_t)(EAX));
  /* 104e3e44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3e47 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104e3e4a push edx */
  push32((uint32_t)(EDX));
  /* 104e3e4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3e4e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104e3e51 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e3e57 mov edx, dword ptr [ecx*4 + 0x1050da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1050da94)));
  /* 104e3e5e push edx */
  push32((uint32_t)(EDX));
  /* 104e3e5f push 0x1050a7f8 */
  push32((uint32_t)(0x1050a7f8u));
  /* 104e3e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3e68 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3e6a push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3e6c call 0x104e22e0 */
  push32(0x104e3e71u); f_104e22e0();
  /* 104e3e71 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3e74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3e77 jne 0x104e3e7a */
  if (!C.zf) goto L_104e3e7a;
  /* 104e3e79 int3  */
  x86_unimpl("int3 @ 0x104e3e79");
L_104e3e7a:;
  /* 104e3e7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e3e7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3e7e jne 0x104e3e3d */
  if (!C.zf) goto L_104e3e3d;
L_104e3e80:;
  /* 104e3e80 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e3e82 mov cl, byte ptr [0x1050da90] */
  CL = (r8((uint32_t)(0x1050da90)));
  /* 104e3e88 push ecx */
  push32((uint32_t)(ECX));
  /* 104e3e89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3e8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e3e8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3e92 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 104e3e96 push edx */
  push32((uint32_t)(EDX));
  /* 104e3e97 call 0x104e4330 */
  push32(0x104e3e9cu); f_104e4330();
  /* 104e3e9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3e9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3ea1 jne 0x104e3ee6 */
  if (!C.zf) goto L_104e3ee6;
L_104e3ea3:;
  /* 104e3ea3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3ea6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3ea9 push eax */
  push32((uint32_t)(EAX));
  /* 104e3eaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3ead mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104e3eb0 push edx */
  push32((uint32_t)(EDX));
  /* 104e3eb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3eb4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104e3eb7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e3ebd mov edx, dword ptr [ecx*4 + 0x1050da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1050da94)));
  /* 104e3ec4 push edx */
  push32((uint32_t)(EDX));
  /* 104e3ec5 push 0x1050a7cc */
  push32((uint32_t)(0x1050a7ccu));
  /* 104e3eca push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3ece push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3ed0 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e3ed2 call 0x104e22e0 */
  push32(0x104e3ed7u); f_104e22e0();
  /* 104e3ed7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3eda cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3edd jne 0x104e3ee0 */
  if (!C.zf) goto L_104e3ee0;
  /* 104e3edf int3  */
  x86_unimpl("int3 @ 0x104e3edf");
L_104e3ee0:;
  /* 104e3ee0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e3ee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e3ee4 jne 0x104e3ea3 */
  if (!C.zf) goto L_104e3ea3;
L_104e3ee6:;
  /* 104e3ee6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3ee9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3eed jne 0x104e3f5b */
  if (!C.zf) goto L_104e3f5b;
L_104e3eef:;
  /* 104e3eef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3ef2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3ef9 jne 0x104e3f04 */
  if (!C.zf) goto L_104e3f04;
  /* 104e3efb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3efe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3f02 je 0x104e3f25 */
  if (C.zf) goto L_104e3f25;
L_104e3f04:;
  /* 104e3f04 push 0x1050a78c */
  push32((uint32_t)(0x1050a78cu));
  /* 104e3f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3f0b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 104e3f10 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3f15 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e3f17 call 0x104e22e0 */
  push32(0x104e3f1cu); f_104e22e0();
  /* 104e3f1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3f1f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3f22 jne 0x104e3f25 */
  if (!C.zf) goto L_104e3f25;
  /* 104e3f24 int3  */
  x86_unimpl("int3 @ 0x104e3f24");
L_104e3f25:;
  /* 104e3f25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e3f27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e3f29 jne 0x104e3eef */
  if (!C.zf) goto L_104e3eef;
  /* 104e3f2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3f2e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e3f31 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3f34 push eax */
  push32((uint32_t)(EAX));
  /* 104e3f35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e3f37 mov cl, byte ptr [0x1050da91] */
  CL = (r8((uint32_t)(0x1050da91)));
  /* 104e3f3d push ecx */
  push32((uint32_t)(ECX));
  /* 104e3f3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3f41 push edx */
  push32((uint32_t)(EDX));
  /* 104e3f42 call 0x104e6f90 */
  push32(0x104e3f47u); f_104e6f90();
  /* 104e3f47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3f4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3f4d push eax */
  push32((uint32_t)(EAX));
  /* 104e3f4e call 0x104e7390 */
  push32(0x104e3f53u); f_104e7390();
  /* 104e3f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3f56 jmp 0x104e40c5 */
  goto L_104e40c5;
L_104e3f5b:;
  /* 104e3f5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3f5e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3f62 jne 0x104e3f71 */
  if (!C.zf) goto L_104e3f71;
  /* 104e3f64 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3f68 jne 0x104e3f71 */
  if (!C.zf) goto L_104e3f71;
  /* 104e3f6a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_104e3f71:;
  /* 104e3f71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3f74 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e3f77 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3f7a je 0x104e3f9d */
  if (C.zf) goto L_104e3f9d;
  /* 104e3f7c push 0x1050a76c */
  push32((uint32_t)(0x1050a76cu));
  /* 104e3f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3f83 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 104e3f88 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3f8d push 2 */
  push32((uint32_t)(0x2u));
  /* 104e3f8f call 0x104e22e0 */
  push32(0x104e3f94u); f_104e22e0();
  /* 104e3f94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e3f97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3f9a jne 0x104e3f9d */
  if (!C.zf) goto L_104e3f9d;
  /* 104e3f9c int3  */
  x86_unimpl("int3 @ 0x104e3f9c");
L_104e3f9d:;
  /* 104e3f9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e3f9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e3fa1 jne 0x104e3f71 */
  if (!C.zf) goto L_104e3f71;
  /* 104e3fa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3fa6 mov eax, dword ptr [0x1050f510] */
  EAX = (r32((uint32_t)(0x1050f510)));
  /* 104e3fab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e3fae mov dword ptr [0x1050f510], eax */
  w32((uint32_t)(0x1050f510), (EAX));
  /* 104e3fb3 mov ecx, dword ptr [0x1050da84] */
  ECX = (r32((uint32_t)(0x1050da84)));
  /* 104e3fb9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 104e3fbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e3fbe jne 0x104e409c */
  if (!C.zf) goto L_104e409c;
  /* 104e3fc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3fc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3fca je 0x104e3fdc */
  if (C.zf) goto L_104e3fdc;
  /* 104e3fcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3fcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e3fd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e3fd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e3fd7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 104e3fda jmp 0x104e401a */
  goto L_104e401a;
L_104e3fdc:;
  /* 104e3fdc mov ecx, dword ptr [0x1050f504] */
  ECX = (r32((uint32_t)(0x1050f504)));
  /* 104e3fe2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e3fe5 je 0x104e4008 */
  if (C.zf) goto L_104e4008;
  /* 104e3fe7 push 0x1050a754 */
  push32((uint32_t)(0x1050a754u));
  /* 104e3fec push 0 */
  push32((uint32_t)(0x0u));
  /* 104e3fee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 104e3ff3 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e3ff8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e3ffa call 0x104e22e0 */
  push32(0x104e3fffu); f_104e22e0();
  /* 104e3fff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4002 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4005 jne 0x104e4008 */
  if (!C.zf) goto L_104e4008;
  /* 104e4007 int3  */
  x86_unimpl("int3 @ 0x104e4007");
L_104e4008:;
  /* 104e4008 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e400a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e400c jne 0x104e3fdc */
  if (!C.zf) goto L_104e3fdc;
  /* 104e400e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4011 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e4014 mov dword ptr [0x1050f504], ecx */
  w32((uint32_t)(0x1050f504), (ECX));
L_104e401a:;
  /* 104e401a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e401d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4021 je 0x104e4032 */
  if (C.zf) goto L_104e4032;
  /* 104e4023 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4026 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e4029 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e402c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e402e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104e4030 jmp 0x104e406f */
  goto L_104e406f;
L_104e4032:;
  /* 104e4032 mov ecx, dword ptr [0x1050f50c] */
  ECX = (r32((uint32_t)(0x1050f50c)));
  /* 104e4038 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e403b je 0x104e405e */
  if (C.zf) goto L_104e405e;
  /* 104e403d push 0x1050a73c */
  push32((uint32_t)(0x1050a73cu));
  /* 104e4042 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4044 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 104e4049 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e404e push 2 */
  push32((uint32_t)(0x2u));
  /* 104e4050 call 0x104e22e0 */
  push32(0x104e4055u); f_104e22e0();
  /* 104e4055 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4058 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e405b jne 0x104e405e */
  if (!C.zf) goto L_104e405e;
  /* 104e405d int3  */
  x86_unimpl("int3 @ 0x104e405d");
L_104e405e:;
  /* 104e405e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e4060 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e4062 jne 0x104e4032 */
  if (!C.zf) goto L_104e4032;
  /* 104e4064 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4067 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e4069 mov dword ptr [0x1050f50c], ecx */
  w32((uint32_t)(0x1050f50c), (ECX));
L_104e406f:;
  /* 104e406f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4072 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e4075 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4078 push eax */
  push32((uint32_t)(EAX));
  /* 104e4079 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e407b mov cl, byte ptr [0x1050da91] */
  CL = (r8((uint32_t)(0x1050da91)));
  /* 104e4081 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4082 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4085 push edx */
  push32((uint32_t)(EDX));
  /* 104e4086 call 0x104e6f90 */
  push32(0x104e408bu); f_104e6f90();
  /* 104e408b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e408e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4091 push eax */
  push32((uint32_t)(EAX));
  /* 104e4092 call 0x104e7390 */
  push32(0x104e4097u); f_104e7390();
  /* 104e4097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e409a jmp 0x104e40c5 */
  goto L_104e40c5;
L_104e409c:;
  /* 104e409c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e409f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 104e40a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e40a9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e40ac push eax */
  push32((uint32_t)(EAX));
  /* 104e40ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e40af mov cl, byte ptr [0x1050da91] */
  CL = (r8((uint32_t)(0x1050da91)));
  /* 104e40b5 push ecx */
  push32((uint32_t)(ECX));
  /* 104e40b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e40b9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e40bc push edx */
  push32((uint32_t)(EDX));
  /* 104e40bd call 0x104e6f90 */
  push32(0x104e40c2u); f_104e6f90();
  /* 104e40c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e40c5:;
  /* 104e40c5 pop edi */
  EDI = (pop32());
  /* 104e40c6 pop esi */
  ESI = (pop32());
  /* 104e40c7 pop ebx */
  EBX = (pop32());
  /* 104e40c8 mov esp, ebp */
  ESP = (EBP);
  /* 104e40ca pop ebp */
  EBP = (pop32());
  /* 104e40cb ret  */
  ESPCHK(0x104e3ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040d0 @ 0x104e40d0 (19 bytes, 9 insns) */
void f_104e40d0(void) {
  FTRACE(0x104e40d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e40d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e40d1 mov ebp, esp */
  EBP = (ESP);
  /* 104e40d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e40d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e40d8 push eax */
  push32((uint32_t)(EAX));
  /* 104e40d9 call 0x104e40f0 */
  push32(0x104e40deu); f_104e40f0();
  /* 104e40de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e40e1 pop ebp */
  EBP = (pop32());
  /* 104e40e2 ret  */
  ESPCHK(0x104e40d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040f0 @ 0x104e40f0 (342 bytes, 119 insns) */
void f_104e40f0(void) {
  FTRACE(0x104e40f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e40f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e40f1 mov ebp, esp */
  EBP = (ESP);
  /* 104e40f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e40f6 push ebx */
  push32((uint32_t)(EBX));
  /* 104e40f7 push esi */
  push32((uint32_t)(ESI));
  /* 104e40f8 push edi */
  push32((uint32_t)(EDI));
  /* 104e40f9 mov eax, dword ptr [0x1050da84] */
  EAX = (r32((uint32_t)(0x1050da84)));
  /* 104e40fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104e4101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4103 je 0x104e4135 */
  if (C.zf) goto L_104e4135;
L_104e4105:;
  /* 104e4105 call 0x104e43c0 */
  push32(0x104e410au); f_104e43c0();
  /* 104e410a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e410c jne 0x104e412f */
  if (!C.zf) goto L_104e412f;
  /* 104e410e push 0x1050a588 */
  push32((uint32_t)(0x1050a588u));
  /* 104e4113 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4115 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 104e411a push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e411f push 2 */
  push32((uint32_t)(0x2u));
  /* 104e4121 call 0x104e22e0 */
  push32(0x104e4126u); f_104e22e0();
  /* 104e4126 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4129 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e412c jne 0x104e412f */
  if (!C.zf) goto L_104e412f;
  /* 104e412e int3  */
  x86_unimpl("int3 @ 0x104e412e");
L_104e412f:;
  /* 104e412f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e4131 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e4133 jne 0x104e4105 */
  if (!C.zf) goto L_104e4105;
L_104e4135:;
  /* 104e4135 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e4137 call 0x104e6c20 */
  push32(0x104e413cu); f_104e6c20();
  /* 104e413c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e413f:;
  /* 104e413f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4142 push edx */
  push32((uint32_t)(EDX));
  /* 104e4143 call 0x104e4820 */
  push32(0x104e4148u); f_104e4820();
  /* 104e4148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e414b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e414d jne 0x104e4170 */
  if (!C.zf) goto L_104e4170;
  /* 104e414f push 0x1050a68c */
  push32((uint32_t)(0x1050a68cu));
  /* 104e4154 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4156 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 104e415b push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e4160 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e4162 call 0x104e22e0 */
  push32(0x104e4167u); f_104e22e0();
  /* 104e4167 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e416a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e416d jne 0x104e4170 */
  if (!C.zf) goto L_104e4170;
  /* 104e416f int3  */
  x86_unimpl("int3 @ 0x104e416f");
L_104e4170:;
  /* 104e4170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e4172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4174 jne 0x104e413f */
  if (!C.zf) goto L_104e413f;
  /* 104e4176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4179 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e417c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104e417f:;
  /* 104e417f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4182 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e4185 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e418a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e418d je 0x104e41d2 */
  if (C.zf) goto L_104e41d2;
  /* 104e418f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4192 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4196 je 0x104e41d2 */
  if (C.zf) goto L_104e41d2;
  /* 104e4198 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e419b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e419e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e41a3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e41a6 je 0x104e41d2 */
  if (C.zf) goto L_104e41d2;
  /* 104e41a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e41ab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e41af je 0x104e41d2 */
  if (C.zf) goto L_104e41d2;
  /* 104e41b1 push 0x1050a824 */
  push32((uint32_t)(0x1050a824u));
  /* 104e41b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e41b8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 104e41bd push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e41c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e41c4 call 0x104e22e0 */
  push32(0x104e41c9u); f_104e22e0();
  /* 104e41c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e41cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e41cf jne 0x104e41d2 */
  if (!C.zf) goto L_104e41d2;
  /* 104e41d1 int3  */
  x86_unimpl("int3 @ 0x104e41d1");
L_104e41d2:;
  /* 104e41d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e41d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e41d6 jne 0x104e417f */
  if (!C.zf) goto L_104e417f;
  /* 104e41d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e41db cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e41df jne 0x104e41ee */
  if (!C.zf) goto L_104e41ee;
  /* 104e41e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e41e5 jne 0x104e41ee */
  if (!C.zf) goto L_104e41ee;
  /* 104e41e7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_104e41ee:;
  /* 104e41ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e41f1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e41f5 je 0x104e4229 */
  if (C.zf) goto L_104e4229;
L_104e41f7:;
  /* 104e41f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e41fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e41fd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4200 je 0x104e4223 */
  if (C.zf) goto L_104e4223;
  /* 104e4202 push 0x1050a76c */
  push32((uint32_t)(0x1050a76cu));
  /* 104e4207 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4209 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 104e420e push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e4213 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e4215 call 0x104e22e0 */
  push32(0x104e421au); f_104e22e0();
  /* 104e421a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e421d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4220 jne 0x104e4223 */
  if (!C.zf) goto L_104e4223;
  /* 104e4222 int3  */
  x86_unimpl("int3 @ 0x104e4222");
L_104e4223:;
  /* 104e4223 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e4225 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e4227 jne 0x104e41f7 */
  if (!C.zf) goto L_104e41f7;
L_104e4229:;
  /* 104e4229 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e422c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e422f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e4232 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e4234 call 0x104e6cc0 */
  push32(0x104e4239u); f_104e6cc0();
  /* 104e4239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e423c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e423f pop edi */
  EDI = (pop32());
  /* 104e4240 pop esi */
  ESI = (pop32());
  /* 104e4241 pop ebx */
  EBX = (pop32());
  /* 104e4242 mov esp, ebp */
  ESP = (EBP);
  /* 104e4244 pop ebp */
  EBP = (pop32());
  /* 104e4245 ret  */
  ESPCHK(0x104e40f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004250 @ 0x104e4250 (28 bytes, 11 insns) */
void f_104e4250(void) {
  FTRACE(0x104e4250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e4250 push ebp */
  push32((uint32_t)(EBP));
  /* 104e4251 mov ebp, esp */
  EBP = (ESP);
  /* 104e4253 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4254 mov eax, dword ptr [0x1050da8c] */
  EAX = (r32((uint32_t)(0x1050da8c)));
  /* 104e4259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e425c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e425f mov dword ptr [0x1050da8c], ecx */
  w32((uint32_t)(0x1050da8c), (ECX));
  /* 104e4265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4268 mov esp, ebp */
  ESP = (EBP);
  /* 104e426a pop ebp */
  EBP = (pop32());
  /* 104e426b ret  */
  ESPCHK(0x104e4250u, _esp0);
  ESP += 4; return;
}

/* FUN_10004270 @ 0x104e4270 (157 bytes, 59 insns) */
void f_104e4270(void) {
  FTRACE(0x104e4270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e4270 push ebp */
  push32((uint32_t)(EBP));
  /* 104e4271 mov ebp, esp */
  EBP = (ESP);
  /* 104e4273 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4274 push ebx */
  push32((uint32_t)(EBX));
  /* 104e4275 push esi */
  push32((uint32_t)(ESI));
  /* 104e4276 push edi */
  push32((uint32_t)(EDI));
  /* 104e4277 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e4279 call 0x104e6c20 */
  push32(0x104e427eu); f_104e6c20();
  /* 104e427e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4281 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4284 push eax */
  push32((uint32_t)(EAX));
  /* 104e4285 call 0x104e4820 */
  push32(0x104e428au); f_104e4820();
  /* 104e428a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e428d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e428f je 0x104e42fc */
  if (C.zf) goto L_104e42fc;
  /* 104e4291 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4294 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4297 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104e429a:;
  /* 104e429a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e429d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e42a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e42a5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e42a8 je 0x104e42ed */
  if (C.zf) goto L_104e42ed;
  /* 104e42aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e42ad cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e42b1 je 0x104e42ed */
  if (C.zf) goto L_104e42ed;
  /* 104e42b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e42b6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e42b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e42be cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e42c1 je 0x104e42ed */
  if (C.zf) goto L_104e42ed;
  /* 104e42c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e42c6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e42ca je 0x104e42ed */
  if (C.zf) goto L_104e42ed;
  /* 104e42cc push 0x1050a824 */
  push32((uint32_t)(0x1050a824u));
  /* 104e42d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e42d3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 104e42d8 push 0x1050a57c */
  push32((uint32_t)(0x1050a57cu));
  /* 104e42dd push 2 */
  push32((uint32_t)(0x2u));
  /* 104e42df call 0x104e22e0 */
  push32(0x104e42e4u); f_104e22e0();
  /* 104e42e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e42e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e42ea jne 0x104e42ed */
  if (!C.zf) goto L_104e42ed;
  /* 104e42ec int3  */
  x86_unimpl("int3 @ 0x104e42ec");
L_104e42ed:;
  /* 104e42ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e42ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e42f1 jne 0x104e429a */
  if (!C.zf) goto L_104e429a;
  /* 104e42f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e42f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e42f9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_104e42fc:;
  /* 104e42fc push 9 */
  push32((uint32_t)(0x9u));
  /* 104e42fe call 0x104e6cc0 */
  push32(0x104e4303u); f_104e6cc0();
  /* 104e4303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4306 pop edi */
  EDI = (pop32());
  /* 104e4307 pop esi */
  ESI = (pop32());
  /* 104e4308 pop ebx */
  EBX = (pop32());
  /* 104e4309 mov esp, ebp */
  ESP = (EBP);
  /* 104e430b pop ebp */
  EBP = (pop32());
  /* 104e430c ret  */
  ESPCHK(0x104e4270u, _esp0);
  ESP += 4; return;
}

/* FUN_10004310 @ 0x104e4310 (28 bytes, 11 insns) */
void f_104e4310(void) {
  FTRACE(0x104e4310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e4310 push ebp */
  push32((uint32_t)(EBP));
  /* 104e4311 mov ebp, esp */
  EBP = (ESP);
  /* 104e4313 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4314 mov eax, dword ptr [0x1050dc90] */
  EAX = (r32((uint32_t)(0x1050dc90)));
  /* 104e4319 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e431c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e431f mov dword ptr [0x1050dc90], ecx */
  w32((uint32_t)(0x1050dc90), (ECX));
  /* 104e4325 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4328 mov esp, ebp */
  ESP = (EBP);
  /* 104e432a pop ebp */
  EBP = (pop32());
  /* 104e432b ret  */
  ESPCHK(0x104e4310u, _esp0);
  ESP += 4; return;
}

/* FUN_10004330 @ 0x104e4330 (136 bytes, 55 insns) */
void f_104e4330(void) {
  FTRACE(0x104e4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e4330 push ebp */
  push32((uint32_t)(EBP));
  /* 104e4331 mov ebp, esp */
  EBP = (ESP);
  /* 104e4333 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4334 push ebx */
  push32((uint32_t)(EBX));
  /* 104e4335 push esi */
  push32((uint32_t)(ESI));
  /* 104e4336 push edi */
  push32((uint32_t)(EDI));
  /* 104e4337 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_104e433e:;
  /* 104e433e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e4341 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e4344 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4347 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104e434a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e434c je 0x104e43ae */
  if (C.zf) goto L_104e43ae;
  /* 104e434e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4351 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e4353 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104e4355 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e4358 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e435e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4361 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4364 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104e4367 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4369 je 0x104e43ac */
  if (C.zf) goto L_104e43ac;
L_104e436b:;
  /* 104e436b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e436e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e4373 push eax */
  push32((uint32_t)(EAX));
  /* 104e4374 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4377 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e4379 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 104e437c push edx */
  push32((uint32_t)(EDX));
  /* 104e437d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4380 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4383 push eax */
  push32((uint32_t)(EAX));
  /* 104e4384 push 0x1050a868 */
  push32((uint32_t)(0x1050a868u));
  /* 104e4389 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e438b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e438d push 0 */
  push32((uint32_t)(0x0u));
  /* 104e438f push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4391 call 0x104e22e0 */
  push32(0x104e4396u); f_104e22e0();
  /* 104e4396 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4399 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e439c jne 0x104e439f */
  if (!C.zf) goto L_104e439f;
  /* 104e439e int3  */
  x86_unimpl("int3 @ 0x104e439e");
L_104e439f:;
  /* 104e439f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e43a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e43a3 jne 0x104e436b */
  if (!C.zf) goto L_104e436b;
  /* 104e43a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104e43ac:;
  /* 104e43ac jmp 0x104e433e */
  goto L_104e433e;
L_104e43ae:;
  /* 104e43ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e43b1 pop edi */
  EDI = (pop32());
  /* 104e43b2 pop esi */
  ESI = (pop32());
  /* 104e43b3 pop ebx */
  EBX = (pop32());
  /* 104e43b4 mov esp, ebp */
  ESP = (EBP);
  /* 104e43b6 pop ebp */
  EBP = (pop32());
  /* 104e43b7 ret  */
  ESPCHK(0x104e4330u, _esp0);
  ESP += 4; return;
}

/* FUN_100043c0 @ 0x104e43c0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_104e43c0(void) {
  FTRACE(0x104e43c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e43c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e43c1 mov ebp, esp */
  EBP = (ESP);
  /* 104e43c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e43c6 push ebx */
  push32((uint32_t)(EBX));
  /* 104e43c7 push esi */
  push32((uint32_t)(ESI));
  /* 104e43c8 push edi */
  push32((uint32_t)(EDI));
  /* 104e43c9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104e43d0 mov eax, dword ptr [0x1050da84] */
  EAX = (r32((uint32_t)(0x1050da84)));
  /* 104e43d5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 104e43d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e43da jne 0x104e43e6 */
  if (!C.zf) goto L_104e43e6;
  /* 104e43dc mov eax, 1 */
  EAX = (0x1u);
  /* 104e43e1 jmp 0x104e4718 */
  goto L_104e4718;
L_104e43e6:;
  /* 104e43e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e43e8 call 0x104e6c20 */
  push32(0x104e43edu); f_104e6c20();
  /* 104e43ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e43f0 call 0x104e7400 */
  push32(0x104e43f5u); f_104e7400();
  /* 104e43f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e43f8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e43fc je 0x104e4509 */
  if (C.zf) goto L_104e4509;
  /* 104e4402 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4406 je 0x104e4509 */
  if (C.zf) goto L_104e4509;
  /* 104e440c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e440f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104e4412 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e4415 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4418 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104e441b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e441f ja 0x104e44d2 */
  if ((!C.cf&&!C.zf)) goto L_104e44d2;
  /* 104e4425 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e4428 jmp dword ptr [eax*4 + 0x104e471f] */
  switch (EAX) {
    case 0: goto L_104e44aa;
    case 1: goto L_104e4482;
    case 2: goto L_104e445a;
    case 3: goto L_104e442f;
    default: x86_unimpl("switch@0x104e4428 out of table"); return;
  }
L_104e442f:;
  /* 104e442f push 0x1050a9bc */
  push32((uint32_t)(0x1050a9bcu));
  /* 104e4434 push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e4439 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e443b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e443d push 0 */
  push32((uint32_t)(0x0u));
  /* 104e443f push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4441 call 0x104e22e0 */
  push32(0x104e4446u); f_104e22e0();
  /* 104e4446 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4449 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e444c jne 0x104e444f */
  if (!C.zf) goto L_104e444f;
  /* 104e444e int3  */
  x86_unimpl("int3 @ 0x104e444e");
L_104e444f:;
  /* 104e444f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e4451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e4453 jne 0x104e442f */
  if (!C.zf) goto L_104e442f;
  /* 104e4455 jmp 0x104e44f8 */
  goto L_104e44f8;
L_104e445a:;
  /* 104e445a push 0x1050a998 */
  push32((uint32_t)(0x1050a998u));
  /* 104e445f push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e4464 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4466 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4468 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e446a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e446c call 0x104e22e0 */
  push32(0x104e4471u); f_104e22e0();
  /* 104e4471 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4474 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4477 jne 0x104e447a */
  if (!C.zf) goto L_104e447a;
  /* 104e4479 int3  */
  x86_unimpl("int3 @ 0x104e4479");
L_104e447a:;
  /* 104e447a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e447c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e447e jne 0x104e445a */
  if (!C.zf) goto L_104e445a;
  /* 104e4480 jmp 0x104e44f8 */
  goto L_104e44f8;
L_104e4482:;
  /* 104e4482 push 0x1050a974 */
  push32((uint32_t)(0x1050a974u));
  /* 104e4487 push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e448c push 0 */
  push32((uint32_t)(0x0u));
  /* 104e448e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4490 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4492 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4494 call 0x104e22e0 */
  push32(0x104e4499u); f_104e22e0();
  /* 104e4499 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e449c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e449f jne 0x104e44a2 */
  if (!C.zf) goto L_104e44a2;
  /* 104e44a1 int3  */
  x86_unimpl("int3 @ 0x104e44a1");
L_104e44a2:;
  /* 104e44a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e44a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e44a6 jne 0x104e4482 */
  if (!C.zf) goto L_104e4482;
  /* 104e44a8 jmp 0x104e44f8 */
  goto L_104e44f8;
L_104e44aa:;
  /* 104e44aa push 0x1050a950 */
  push32((uint32_t)(0x1050a950u));
  /* 104e44af push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e44b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e44b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e44b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e44ba push 0 */
  push32((uint32_t)(0x0u));
  /* 104e44bc call 0x104e22e0 */
  push32(0x104e44c1u); f_104e22e0();
  /* 104e44c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e44c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e44c7 jne 0x104e44ca */
  if (!C.zf) goto L_104e44ca;
  /* 104e44c9 int3  */
  x86_unimpl("int3 @ 0x104e44c9");
L_104e44ca:;
  /* 104e44ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e44cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e44ce jne 0x104e44aa */
  if (!C.zf) goto L_104e44aa;
  /* 104e44d0 jmp 0x104e44f8 */
  goto L_104e44f8;
L_104e44d2:;
  /* 104e44d2 push 0x1050a924 */
  push32((uint32_t)(0x1050a924u));
  /* 104e44d7 push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e44dc push 0 */
  push32((uint32_t)(0x0u));
  /* 104e44de push 0 */
  push32((uint32_t)(0x0u));
  /* 104e44e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e44e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e44e4 call 0x104e22e0 */
  push32(0x104e44e9u); f_104e22e0();
  /* 104e44e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e44ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e44ef jne 0x104e44f2 */
  if (!C.zf) goto L_104e44f2;
  /* 104e44f1 int3  */
  x86_unimpl("int3 @ 0x104e44f1");
L_104e44f2:;
  /* 104e44f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e44f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e44f6 jne 0x104e44d2 */
  if (!C.zf) goto L_104e44d2;
L_104e44f8:;
  /* 104e44f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e44fa call 0x104e6cc0 */
  push32(0x104e44ffu); f_104e6cc0();
  /* 104e44ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4502 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e4504 jmp 0x104e4718 */
  goto L_104e4718;
L_104e4509:;
  /* 104e4509 mov eax, dword ptr [0x1050f50c] */
  EAX = (r32((uint32_t)(0x1050f50c)));
  /* 104e450e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e4511 jmp 0x104e451b */
  goto L_104e451b;
L_104e4513:;
  /* 104e4513 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4516 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e4518 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104e451b:;
  /* 104e451b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e451f je 0x104e470b */
  if (C.zf) goto L_104e470b;
  /* 104e4525 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 104e452c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e452f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104e4532 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e4538 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e453b je 0x104e4560 */
  if (C.zf) goto L_104e4560;
  /* 104e453d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4540 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4544 je 0x104e4560 */
  if (C.zf) goto L_104e4560;
  /* 104e4546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4549 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104e454c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e4552 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4555 je 0x104e4560 */
  if (C.zf) goto L_104e4560;
  /* 104e4557 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e455a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e455e jne 0x104e4578 */
  if (!C.zf) goto L_104e4578;
L_104e4560:;
  /* 104e4560 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4563 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104e4566 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e456c mov edx, dword ptr [ecx*4 + 0x1050da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1050da94)));
  /* 104e4573 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104e4576 jmp 0x104e457f */
  goto L_104e457f;
L_104e4578:;
  /* 104e4578 mov dword ptr [ebp - 0x14], 0x1050a91c */
  w32((uint32_t)(EBP + -0x14), (0x1050a91cu));
L_104e457f:;
  /* 104e457f push 4 */
  push32((uint32_t)(0x4u));
  /* 104e4581 mov al, byte ptr [0x1050da90] */
  AL = (r8((uint32_t)(0x1050da90)));
  /* 104e4586 push eax */
  push32((uint32_t)(EAX));
  /* 104e4587 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e458a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e458d push ecx */
  push32((uint32_t)(ECX));
  /* 104e458e call 0x104e4330 */
  push32(0x104e4593u); f_104e4330();
  /* 104e4593 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4598 jne 0x104e45d4 */
  if (!C.zf) goto L_104e45d4;
L_104e459a:;
  /* 104e459a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e459d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e45a0 push edx */
  push32((uint32_t)(EDX));
  /* 104e45a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e45a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 104e45a7 push ecx */
  push32((uint32_t)(ECX));
  /* 104e45a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e45ab push edx */
  push32((uint32_t)(EDX));
  /* 104e45ac push 0x1050a7f8 */
  push32((uint32_t)(0x1050a7f8u));
  /* 104e45b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e45b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e45b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e45b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e45b9 call 0x104e22e0 */
  push32(0x104e45beu); f_104e22e0();
  /* 104e45be add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e45c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e45c4 jne 0x104e45c7 */
  if (!C.zf) goto L_104e45c7;
  /* 104e45c6 int3  */
  x86_unimpl("int3 @ 0x104e45c6");
L_104e45c7:;
  /* 104e45c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e45c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e45cb jne 0x104e459a */
  if (!C.zf) goto L_104e459a;
  /* 104e45cd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104e45d4:;
  /* 104e45d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 104e45d6 mov cl, byte ptr [0x1050da90] */
  CL = (r8((uint32_t)(0x1050da90)));
  /* 104e45dc push ecx */
  push32((uint32_t)(ECX));
  /* 104e45dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e45e0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e45e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e45e6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 104e45ea push edx */
  push32((uint32_t)(EDX));
  /* 104e45eb call 0x104e4330 */
  push32(0x104e45f0u); f_104e4330();
  /* 104e45f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e45f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e45f5 jne 0x104e4631 */
  if (!C.zf) goto L_104e4631;
L_104e45f7:;
  /* 104e45f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e45fa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e45fd push eax */
  push32((uint32_t)(EAX));
  /* 104e45fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4601 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104e4604 push edx */
  push32((uint32_t)(EDX));
  /* 104e4605 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e4608 push eax */
  push32((uint32_t)(EAX));
  /* 104e4609 push 0x1050a7cc */
  push32((uint32_t)(0x1050a7ccu));
  /* 104e460e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4610 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4612 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4614 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4616 call 0x104e22e0 */
  push32(0x104e461bu); f_104e22e0();
  /* 104e461b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e461e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4621 jne 0x104e4624 */
  if (!C.zf) goto L_104e4624;
  /* 104e4623 int3  */
  x86_unimpl("int3 @ 0x104e4623");
L_104e4624:;
  /* 104e4624 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e4626 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e4628 jne 0x104e45f7 */
  if (!C.zf) goto L_104e45f7;
  /* 104e462a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104e4631:;
  /* 104e4631 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4634 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4638 jne 0x104e468a */
  if (!C.zf) goto L_104e468a;
  /* 104e463a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e463d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e4640 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4641 mov dl, byte ptr [0x1050da91] */
  DL = (r8((uint32_t)(0x1050da91)));
  /* 104e4647 push edx */
  push32((uint32_t)(EDX));
  /* 104e4648 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e464b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e464e push eax */
  push32((uint32_t)(EAX));
  /* 104e464f call 0x104e4330 */
  push32(0x104e4654u); f_104e4330();
  /* 104e4654 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4659 jne 0x104e468a */
  if (!C.zf) goto L_104e468a;
L_104e465b:;
  /* 104e465b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e465e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4661 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4662 push 0x1050a8f0 */
  push32((uint32_t)(0x1050a8f0u));
  /* 104e4667 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4669 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e466b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e466d push 0 */
  push32((uint32_t)(0x0u));
  /* 104e466f call 0x104e22e0 */
  push32(0x104e4674u); f_104e22e0();
  /* 104e4674 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4677 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e467a jne 0x104e467d */
  if (!C.zf) goto L_104e467d;
  /* 104e467c int3  */
  x86_unimpl("int3 @ 0x104e467c");
L_104e467d:;
  /* 104e467d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e467f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e4681 jne 0x104e465b */
  if (!C.zf) goto L_104e465b;
  /* 104e4683 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104e468a:;
  /* 104e468a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e468e jne 0x104e4706 */
  if (!C.zf) goto L_104e4706;
  /* 104e4690 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4693 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4697 je 0x104e46cc */
  if (C.zf) goto L_104e46cc;
L_104e4699:;
  /* 104e4699 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e469c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104e469f push edx */
  push32((uint32_t)(EDX));
  /* 104e46a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e46a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104e46a6 push ecx */
  push32((uint32_t)(ECX));
  /* 104e46a7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e46aa push edx */
  push32((uint32_t)(EDX));
  /* 104e46ab push 0x1050a8d0 */
  push32((uint32_t)(0x1050a8d0u));
  /* 104e46b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e46b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e46b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e46b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e46b8 call 0x104e22e0 */
  push32(0x104e46bdu); f_104e22e0();
  /* 104e46bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e46c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e46c3 jne 0x104e46c6 */
  if (!C.zf) goto L_104e46c6;
  /* 104e46c5 int3  */
  x86_unimpl("int3 @ 0x104e46c5");
L_104e46c6:;
  /* 104e46c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e46c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e46ca jne 0x104e4699 */
  if (!C.zf) goto L_104e4699;
L_104e46cc:;
  /* 104e46cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e46cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104e46d2 push edx */
  push32((uint32_t)(EDX));
  /* 104e46d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e46d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e46d9 push eax */
  push32((uint32_t)(EAX));
  /* 104e46da mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e46dd push ecx */
  push32((uint32_t)(ECX));
  /* 104e46de push 0x1050a8a4 */
  push32((uint32_t)(0x1050a8a4u));
  /* 104e46e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e46e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e46e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e46e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e46eb call 0x104e22e0 */
  push32(0x104e46f0u); f_104e22e0();
  /* 104e46f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e46f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e46f6 jne 0x104e46f9 */
  if (!C.zf) goto L_104e46f9;
  /* 104e46f8 int3  */
  x86_unimpl("int3 @ 0x104e46f8");
L_104e46f9:;
  /* 104e46f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e46fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e46fd jne 0x104e46cc */
  if (!C.zf) goto L_104e46cc;
  /* 104e46ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104e4706:;
  /* 104e4706 jmp 0x104e4513 */
  goto L_104e4513;
L_104e470b:;
  /* 104e470b push 9 */
  push32((uint32_t)(0x9u));
  /* 104e470d call 0x104e6cc0 */
  push32(0x104e4712u); f_104e6cc0();
  /* 104e4712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4715 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104e4718:;
  /* 104e4718 pop edi */
  EDI = (pop32());
  /* 104e4719 pop esi */
  ESI = (pop32());
  /* 104e471a pop ebx */
  EBX = (pop32());
  /* 104e471b mov esp, ebp */
  ESP = (EBP);
  /* 104e471d pop ebp */
  EBP = (pop32());
  /* 104e471e ret  */
  ESPCHK(0x104e43c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004730 @ 0x104e4730 (34 bytes, 13 insns) */
void f_104e4730(void) {
  FTRACE(0x104e4730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e4730 push ebp */
  push32((uint32_t)(EBP));
  /* 104e4731 mov ebp, esp */
  EBP = (ESP);
  /* 104e4733 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4734 mov eax, dword ptr [0x1050da84] */
  EAX = (r32((uint32_t)(0x1050da84)));
  /* 104e4739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e473c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4740 je 0x104e474b */
  if (C.zf) goto L_104e474b;
  /* 104e4742 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4745 mov dword ptr [0x1050da84], ecx */
  w32((uint32_t)(0x1050da84), (ECX));
L_104e474b:;
  /* 104e474b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e474e mov esp, ebp */
  ESP = (EBP);
  /* 104e4750 pop ebp */
  EBP = (pop32());
  /* 104e4751 ret  */
  ESPCHK(0x104e4730u, _esp0);
  ESP += 4; return;
}

/* FUN_10004760 @ 0x104e4760 (103 bytes, 38 insns) */
void f_104e4760(void) {
  FTRACE(0x104e4760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e4760 push ebp */
  push32((uint32_t)(EBP));
  /* 104e4761 mov ebp, esp */
  EBP = (ESP);
  /* 104e4763 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4764 mov eax, dword ptr [0x1050da84] */
  EAX = (r32((uint32_t)(0x1050da84)));
  /* 104e4769 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 104e476c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e476e jne 0x104e4772 */
  if (!C.zf) goto L_104e4772;
  /* 104e4770 jmp 0x104e47c3 */
  goto L_104e47c3;
L_104e4772:;
  /* 104e4772 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e4774 call 0x104e6c20 */
  push32(0x104e4779u); f_104e6c20();
  /* 104e4779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e477c mov ecx, dword ptr [0x1050f50c] */
  ECX = (r32((uint32_t)(0x1050f50c)));
  /* 104e4782 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e4785 jmp 0x104e478f */
  goto L_104e478f;
L_104e4787:;
  /* 104e4787 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e478a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e478c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e478f:;
  /* 104e478f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4793 je 0x104e47b9 */
  if (C.zf) goto L_104e47b9;
  /* 104e4795 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4798 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104e479b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e47a1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e47a4 jne 0x104e47b7 */
  if (!C.zf) goto L_104e47b7;
  /* 104e47a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e47a9 push eax */
  push32((uint32_t)(EAX));
  /* 104e47aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e47ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e47b0 push ecx */
  push32((uint32_t)(ECX));
  /* 104e47b1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x104e47b4u);
  /* 104e47b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e47b7:;
  /* 104e47b7 jmp 0x104e4787 */
  goto L_104e4787;
L_104e47b9:;
  /* 104e47b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e47bb call 0x104e6cc0 */
  push32(0x104e47c0u); f_104e6cc0();
  /* 104e47c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e47c3:;
  /* 104e47c3 mov esp, ebp */
  ESP = (EBP);
  /* 104e47c5 pop ebp */
  EBP = (pop32());
  /* 104e47c6 ret  */
  ESPCHK(0x104e4760u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x104e47d0 (75 bytes, 28 insns) */
void f_104e47d0(void) {
  FTRACE(0x104e47d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e47d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e47d1 mov ebp, esp */
  EBP = (ESP);
  /* 104e47d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e47d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e47d8 je 0x104e480d */
  if (C.zf) goto L_104e480d;
  /* 104e47da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e47dd push eax */
  push32((uint32_t)(EAX));
  /* 104e47de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e47e1 push ecx */
  push32((uint32_t)(ECX));
  /* 104e47e2 call dword ptr [0x1051223c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051223c))), 0x104e47e8u);
  /* 104e47e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e47ea jne 0x104e480d */
  if (!C.zf) goto L_104e480d;
  /* 104e47ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e47f0 je 0x104e4804 */
  if (C.zf) goto L_104e4804;
  /* 104e47f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e47f5 push edx */
  push32((uint32_t)(EDX));
  /* 104e47f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e47f9 push eax */
  push32((uint32_t)(EAX));
  /* 104e47fa call dword ptr [0x105122e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122e0))), 0x104e4800u);
  /* 104e4800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4802 jne 0x104e480d */
  if (!C.zf) goto L_104e480d;
L_104e4804:;
  /* 104e4804 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104e480b jmp 0x104e4814 */
  goto L_104e4814;
L_104e480d:;
  /* 104e480d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104e4814:;
  /* 104e4814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4817 mov esp, ebp */
  ESP = (EBP);
  /* 104e4819 pop ebp */
  EBP = (pop32());
  /* 104e481a ret  */
  ESPCHK(0x104e47d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004820 @ 0x104e4820 (134 bytes, 50 insns) */
void f_104e4820(void) {
  FTRACE(0x104e4820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e4820 push ebp */
  push32((uint32_t)(EBP));
  /* 104e4821 mov ebp, esp */
  EBP = (ESP);
  /* 104e4823 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4824 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4828 jne 0x104e482e */
  if (!C.zf) goto L_104e482e;
  /* 104e482a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e482c jmp 0x104e48a2 */
  goto L_104e48a2;
L_104e482e:;
  /* 104e482e push 1 */
  push32((uint32_t)(0x1u));
  /* 104e4830 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 104e4832 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4835 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4838 push eax */
  push32((uint32_t)(EAX));
  /* 104e4839 call 0x104e47d0 */
  push32(0x104e483eu); f_104e47d0();
  /* 104e483e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4841 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4843 jne 0x104e4849 */
  if (!C.zf) goto L_104e4849;
  /* 104e4845 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e4847 jmp 0x104e48a2 */
  goto L_104e48a2;
L_104e4849:;
  /* 104e4849 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e484c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e484f push ecx */
  push32((uint32_t)(ECX));
  /* 104e4850 call 0x104e7520 */
  push32(0x104e4855u); f_104e7520();
  /* 104e4855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4858 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e485b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e485f je 0x104e4876 */
  if (C.zf) goto L_104e4876;
  /* 104e4861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4864 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4867 push edx */
  push32((uint32_t)(EDX));
  /* 104e4868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e486b push eax */
  push32((uint32_t)(EAX));
  /* 104e486c call 0x104e7580 */
  push32(0x104e4871u); f_104e7580();
  /* 104e4871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4874 jmp 0x104e48a2 */
  goto L_104e48a2;
L_104e4876:;
  /* 104e4876 mov ecx, dword ptr [0x1050f4c0] */
  ECX = (r32((uint32_t)(0x1050f4c0)));
  /* 104e487c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 104e4882 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e4884 je 0x104e488d */
  if (C.zf) goto L_104e488d;
  /* 104e4886 mov eax, 1 */
  EAX = (0x1u);
  /* 104e488b jmp 0x104e48a2 */
  goto L_104e48a2;
L_104e488d:;
  /* 104e488d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4890 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4893 push edx */
  push32((uint32_t)(EDX));
  /* 104e4894 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4896 mov eax, dword ptr [0x10510e6c] */
  EAX = (r32((uint32_t)(0x10510e6c)));
  /* 104e489b push eax */
  push32((uint32_t)(EAX));
  /* 104e489c call dword ptr [0x10512238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512238))), 0x104e48a2u);
L_104e48a2:;
  /* 104e48a2 mov esp, ebp */
  ESP = (EBP);
  /* 104e48a4 pop ebp */
  EBP = (pop32());
  /* 104e48a5 ret  */
  ESPCHK(0x104e4820u, _esp0);
  ESP += 4; return;
}

/* FUN_100048b0 @ 0x104e48b0 (227 bytes, 80 insns) */
void f_104e48b0(void) {
  FTRACE(0x104e48b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e48b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e48b1 mov ebp, esp */
  EBP = (ESP);
  /* 104e48b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e48b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e48b7 push eax */
  push32((uint32_t)(EAX));
  /* 104e48b8 call 0x104e4820 */
  push32(0x104e48bdu); f_104e4820();
  /* 104e48bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e48c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e48c2 jne 0x104e48cb */
  if (!C.zf) goto L_104e48cb;
  /* 104e48c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e48c6 jmp 0x104e498f */
  goto L_104e498f;
L_104e48cb:;
  /* 104e48cb push 9 */
  push32((uint32_t)(0x9u));
  /* 104e48cd call 0x104e6c20 */
  push32(0x104e48d2u); f_104e6c20();
  /* 104e48d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e48d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e48d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e48db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e48de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e48e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e48e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e48e9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e48ec je 0x104e4910 */
  if (C.zf) goto L_104e4910;
  /* 104e48ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e48f1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e48f5 je 0x104e4910 */
  if (C.zf) goto L_104e4910;
  /* 104e48f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e48fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e48fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e4902 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4905 je 0x104e4910 */
  if (C.zf) goto L_104e4910;
  /* 104e4907 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e490a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e490e jne 0x104e4983 */
  if (!C.zf) goto L_104e4983;
L_104e4910:;
  /* 104e4910 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e4912 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e4915 push edx */
  push32((uint32_t)(EDX));
  /* 104e4916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4919 push eax */
  push32((uint32_t)(EAX));
  /* 104e491a call 0x104e47d0 */
  push32(0x104e491fu); f_104e47d0();
  /* 104e491f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4924 je 0x104e4983 */
  if (C.zf) goto L_104e4983;
  /* 104e4926 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4929 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104e492c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e492f jne 0x104e4983 */
  if (!C.zf) goto L_104e4983;
  /* 104e4931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4934 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 104e4937 cmp ecx, dword ptr [0x1050da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1050da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e493d jg 0x104e4983 */
  if ((!C.zf&&C.sf==C.of)) goto L_104e4983;
  /* 104e493f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4943 je 0x104e4950 */
  if (C.zf) goto L_104e4950;
  /* 104e4945 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e4948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e494b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 104e494e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104e4950:;
  /* 104e4950 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4954 je 0x104e4961 */
  if (C.zf) goto L_104e4961;
  /* 104e4956 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e4959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e495c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104e495f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104e4961:;
  /* 104e4961 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4965 je 0x104e4972 */
  if (C.zf) goto L_104e4972;
  /* 104e4967 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e496a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e496d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104e4970 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104e4972:;
  /* 104e4972 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e4974 call 0x104e6cc0 */
  push32(0x104e4979u); f_104e6cc0();
  /* 104e4979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e497c mov eax, 1 */
  EAX = (0x1u);
  /* 104e4981 jmp 0x104e498f */
  goto L_104e498f;
L_104e4983:;
  /* 104e4983 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e4985 call 0x104e6cc0 */
  push32(0x104e498au); f_104e6cc0();
  /* 104e498a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e498d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e498f:;
  /* 104e498f mov esp, ebp */
  ESP = (EBP);
  /* 104e4991 pop ebp */
  EBP = (pop32());
  /* 104e4992 ret  */
  ESPCHK(0x104e48b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049a0 @ 0x104e49a0 (28 bytes, 11 insns) */
void f_104e49a0(void) {
  FTRACE(0x104e49a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e49a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e49a1 mov ebp, esp */
  EBP = (ESP);
  /* 104e49a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e49a4 mov eax, dword ptr [0x10510e78] */
  EAX = (r32((uint32_t)(0x10510e78)));
  /* 104e49a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e49ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e49af mov dword ptr [0x10510e78], ecx */
  w32((uint32_t)(0x10510e78), (ECX));
  /* 104e49b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e49b8 mov esp, ebp */
  ESP = (EBP);
  /* 104e49ba pop ebp */
  EBP = (pop32());
  /* 104e49bb ret  */
  ESPCHK(0x104e49a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049c0 @ 0x104e49c0 (362 bytes, 116 insns) */
void f_104e49c0(void) {
  FTRACE(0x104e49c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e49c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e49c1 mov ebp, esp */
  EBP = (ESP);
  /* 104e49c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e49c6 push ebx */
  push32((uint32_t)(EBX));
  /* 104e49c7 push esi */
  push32((uint32_t)(ESI));
  /* 104e49c8 push edi */
  push32((uint32_t)(EDI));
  /* 104e49c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e49cd jne 0x104e49fa */
  if (!C.zf) goto L_104e49fa;
L_104e49cf:;
  /* 104e49cf push 0x1050aa04 */
  push32((uint32_t)(0x1050aa04u));
  /* 104e49d4 push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e49d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e49db push 0 */
  push32((uint32_t)(0x0u));
  /* 104e49dd push 0 */
  push32((uint32_t)(0x0u));
  /* 104e49df push 0 */
  push32((uint32_t)(0x0u));
  /* 104e49e1 call 0x104e22e0 */
  push32(0x104e49e6u); f_104e22e0();
  /* 104e49e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e49e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e49ec jne 0x104e49ef */
  if (!C.zf) goto L_104e49ef;
  /* 104e49ee int3  */
  x86_unimpl("int3 @ 0x104e49ee");
L_104e49ef:;
  /* 104e49ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e49f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e49f3 jne 0x104e49cf */
  if (!C.zf) goto L_104e49cf;
  /* 104e49f5 jmp 0x104e4b23 */
  goto L_104e4b23;
L_104e49fa:;
  /* 104e49fa push 9 */
  push32((uint32_t)(0x9u));
  /* 104e49fc call 0x104e6c20 */
  push32(0x104e4a01u); f_104e6c20();
  /* 104e4a01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4a04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4a07 mov edx, dword ptr [0x1050f50c] */
  EDX = (r32((uint32_t)(0x1050f50c)));
  /* 104e4a0d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104e4a0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104e4a16 jmp 0x104e4a21 */
  goto L_104e4a21;
L_104e4a18:;
  /* 104e4a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4a1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4a1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e4a21:;
  /* 104e4a21 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4a25 jge 0x104e4a45 */
  if ((C.sf==C.of)) goto L_104e4a45;
  /* 104e4a27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4a2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4a2d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 104e4a35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4a38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4a3b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 104e4a43 jmp 0x104e4a18 */
  goto L_104e4a18;
L_104e4a45:;
  /* 104e4a45 mov edx, dword ptr [0x1050f50c] */
  EDX = (r32((uint32_t)(0x1050f50c)));
  /* 104e4a4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104e4a4e jmp 0x104e4a58 */
  goto L_104e4a58;
L_104e4a50:;
  /* 104e4a50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4a53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e4a55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104e4a58:;
  /* 104e4a58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4a5c je 0x104e4b01 */
  if (C.zf) goto L_104e4b01;
  /* 104e4a62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4a65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e4a68 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e4a6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4a6f jl 0x104e4ad7 */
  if ((C.sf!=C.of)) goto L_104e4ad7;
  /* 104e4a71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4a74 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104e4a77 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e4a7d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4a80 jge 0x104e4ad7 */
  if ((C.sf==C.of)) goto L_104e4ad7;
  /* 104e4a82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4a85 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104e4a88 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e4a8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4a91 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 104e4a95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4a98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4a9b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104e4a9e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e4aa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4aa7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 104e4aab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4aae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e4ab1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e4ab6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4ab9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 104e4abd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4ac0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4ac3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4ac6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 104e4ac9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e4ace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4ad1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 104e4ad5 jmp 0x104e4afc */
  goto L_104e4afc;
L_104e4ad7:;
  /* 104e4ad7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4ada push edx */
  push32((uint32_t)(EDX));
  /* 104e4adb push 0x1050a9e0 */
  push32((uint32_t)(0x1050a9e0u));
  /* 104e4ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4ae8 call 0x104e22e0 */
  push32(0x104e4aedu); f_104e22e0();
  /* 104e4aed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4af0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4af3 jne 0x104e4af6 */
  if (!C.zf) goto L_104e4af6;
  /* 104e4af5 int3  */
  x86_unimpl("int3 @ 0x104e4af5");
L_104e4af6:;
  /* 104e4af6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e4af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4afa jne 0x104e4ad7 */
  if (!C.zf) goto L_104e4ad7;
L_104e4afc:;
  /* 104e4afc jmp 0x104e4a50 */
  goto L_104e4a50;
L_104e4b01:;
  /* 104e4b01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4b04 mov edx, dword ptr [0x1050f514] */
  EDX = (r32((uint32_t)(0x1050f514)));
  /* 104e4b0a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 104e4b0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4b10 mov ecx, dword ptr [0x1050f508] */
  ECX = (r32((uint32_t)(0x1050f508)));
  /* 104e4b16 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 104e4b19 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e4b1b call 0x104e6cc0 */
  push32(0x104e4b20u); f_104e6cc0();
  /* 104e4b20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e4b23:;
  /* 104e4b23 pop edi */
  EDI = (pop32());
  /* 104e4b24 pop esi */
  ESI = (pop32());
  /* 104e4b25 pop ebx */
  EBX = (pop32());
  /* 104e4b26 mov esp, ebp */
  ESP = (EBP);
  /* 104e4b28 pop ebp */
  EBP = (pop32());
  /* 104e4b29 ret  */
  ESPCHK(0x104e49c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b30 @ 0x104e4b30 (291 bytes, 95 insns) */
void f_104e4b30(void) {
  FTRACE(0x104e4b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e4b30 push ebp */
  push32((uint32_t)(EBP));
  /* 104e4b31 mov ebp, esp */
  EBP = (ESP);
  /* 104e4b33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4b36 push ebx */
  push32((uint32_t)(EBX));
  /* 104e4b37 push esi */
  push32((uint32_t)(ESI));
  /* 104e4b38 push edi */
  push32((uint32_t)(EDI));
  /* 104e4b39 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104e4b40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4b44 je 0x104e4b52 */
  if (C.zf) goto L_104e4b52;
  /* 104e4b46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4b4a je 0x104e4b52 */
  if (C.zf) goto L_104e4b52;
  /* 104e4b4c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4b50 jne 0x104e4b80 */
  if (!C.zf) goto L_104e4b80;
L_104e4b52:;
  /* 104e4b52 push 0x1050aa2c */
  push32((uint32_t)(0x1050aa2cu));
  /* 104e4b57 push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e4b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4b5e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4b64 call 0x104e22e0 */
  push32(0x104e4b69u); f_104e22e0();
  /* 104e4b69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4b6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4b6f jne 0x104e4b72 */
  if (!C.zf) goto L_104e4b72;
  /* 104e4b71 int3  */
  x86_unimpl("int3 @ 0x104e4b71");
L_104e4b72:;
  /* 104e4b72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e4b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4b76 jne 0x104e4b52 */
  if (!C.zf) goto L_104e4b52;
  /* 104e4b78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e4b7b jmp 0x104e4c4c */
  goto L_104e4c4c;
L_104e4b80:;
  /* 104e4b80 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104e4b87 jmp 0x104e4b92 */
  goto L_104e4b92;
L_104e4b89:;
  /* 104e4b89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4b8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4b8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104e4b92:;
  /* 104e4b92 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4b96 jge 0x104e4c1c */
  if ((C.sf==C.of)) goto L_104e4c1c;
  /* 104e4b9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4b9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e4ba2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4ba5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104e4ba8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 104e4bac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4bb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4bb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4bb6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 104e4bba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4bbd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e4bc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4bc3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104e4bc6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 104e4bca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4bce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4bd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4bd4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 104e4bd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4bdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4bde cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4be3 jne 0x104e4bf2 */
  if (!C.zf) goto L_104e4bf2;
  /* 104e4be5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4be8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4beb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4bf0 je 0x104e4c17 */
  if (C.zf) goto L_104e4c17;
L_104e4bf2:;
  /* 104e4bf2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4bf6 je 0x104e4c17 */
  if (C.zf) goto L_104e4c17;
  /* 104e4bf8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4bfc jne 0x104e4c10 */
  if (!C.zf) goto L_104e4c10;
  /* 104e4bfe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4c02 jne 0x104e4c17 */
  if (!C.zf) goto L_104e4c17;
  /* 104e4c04 mov eax, dword ptr [0x1050da84] */
  EAX = (r32((uint32_t)(0x1050da84)));
  /* 104e4c09 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 104e4c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4c0e je 0x104e4c17 */
  if (C.zf) goto L_104e4c17;
L_104e4c10:;
  /* 104e4c10 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_104e4c17:;
  /* 104e4c17 jmp 0x104e4b89 */
  goto L_104e4b89;
L_104e4c1c:;
  /* 104e4c1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e4c1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e4c22 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 104e4c25 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4c28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4c2b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 104e4c2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e4c31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e4c34 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 104e4c37 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4c3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4c3d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 104e4c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4c43 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104e4c49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104e4c4c:;
  /* 104e4c4c pop edi */
  EDI = (pop32());
  /* 104e4c4d pop esi */
  ESI = (pop32());
  /* 104e4c4e pop ebx */
  EBX = (pop32());
  /* 104e4c4f mov esp, ebp */
  ESP = (EBP);
  /* 104e4c51 pop ebp */
  EBP = (pop32());
  /* 104e4c52 ret  */
  ESPCHK(0x104e4b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c60 @ 0x104e4c60 (697 bytes, 253 insns) */
void f_104e4c60(void) {
  FTRACE(0x104e4c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e4c60 push ebp */
  push32((uint32_t)(EBP));
  /* 104e4c61 mov ebp, esp */
  EBP = (ESP);
  /* 104e4c63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4c66 push ebx */
  push32((uint32_t)(EBX));
  /* 104e4c67 push esi */
  push32((uint32_t)(ESI));
  /* 104e4c68 push edi */
  push32((uint32_t)(EDI));
  /* 104e4c69 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104e4c70 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e4c72 call 0x104e6c20 */
  push32(0x104e4c77u); f_104e6c20();
  /* 104e4c77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e4c7a:;
  /* 104e4c7a push 0x1050ab24 */
  push32((uint32_t)(0x1050ab24u));
  /* 104e4c7f push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e4c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4c8c call 0x104e22e0 */
  push32(0x104e4c91u); f_104e22e0();
  /* 104e4c91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4c94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4c97 jne 0x104e4c9a */
  if (!C.zf) goto L_104e4c9a;
  /* 104e4c99 int3  */
  x86_unimpl("int3 @ 0x104e4c99");
L_104e4c9a:;
  /* 104e4c9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e4c9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4c9e jne 0x104e4c7a */
  if (!C.zf) goto L_104e4c7a;
  /* 104e4ca0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4ca4 je 0x104e4cae */
  if (C.zf) goto L_104e4cae;
  /* 104e4ca6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4ca9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e4cab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104e4cae:;
  /* 104e4cae mov eax, dword ptr [0x1050f50c] */
  EAX = (r32((uint32_t)(0x1050f50c)));
  /* 104e4cb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e4cb6 jmp 0x104e4cc0 */
  goto L_104e4cc0;
L_104e4cb8:;
  /* 104e4cb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4cbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e4cbd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104e4cc0:;
  /* 104e4cc0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4cc4 je 0x104e4ee2 */
  if (C.zf) goto L_104e4ee2;
  /* 104e4cca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4ccd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4cd0 je 0x104e4ee2 */
  if (C.zf) goto L_104e4ee2;
  /* 104e4cd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4cd9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104e4cdc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e4ce2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4ce5 je 0x104e4d14 */
  if (C.zf) goto L_104e4d14;
  /* 104e4ce7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4cea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104e4ced and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e4cf3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e4cf5 je 0x104e4d14 */
  if (C.zf) goto L_104e4d14;
  /* 104e4cf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4cfa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e4cfd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e4d02 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4d05 jne 0x104e4d19 */
  if (!C.zf) goto L_104e4d19;
  /* 104e4d07 mov ecx, dword ptr [0x1050da84] */
  ECX = (r32((uint32_t)(0x1050da84)));
  /* 104e4d0d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 104e4d10 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e4d12 jne 0x104e4d19 */
  if (!C.zf) goto L_104e4d19;
L_104e4d14:;
  /* 104e4d14 jmp 0x104e4edd */
  goto L_104e4edd;
L_104e4d19:;
  /* 104e4d19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4d1c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4d20 je 0x104e4d92 */
  if (C.zf) goto L_104e4d92;
  /* 104e4d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4d24 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e4d26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4d29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104e4d2c push ecx */
  push32((uint32_t)(ECX));
  /* 104e4d2d call 0x104e47d0 */
  push32(0x104e4d32u); f_104e47d0();
  /* 104e4d32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4d37 jne 0x104e4d63 */
  if (!C.zf) goto L_104e4d63;
L_104e4d39:;
  /* 104e4d39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4d3c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104e4d3f push eax */
  push32((uint32_t)(EAX));
  /* 104e4d40 push 0x1050ab10 */
  push32((uint32_t)(0x1050ab10u));
  /* 104e4d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4d49 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4d4b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4d4d call 0x104e22e0 */
  push32(0x104e4d52u); f_104e22e0();
  /* 104e4d52 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4d55 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4d58 jne 0x104e4d5b */
  if (!C.zf) goto L_104e4d5b;
  /* 104e4d5a int3  */
  x86_unimpl("int3 @ 0x104e4d5a");
L_104e4d5b:;
  /* 104e4d5b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e4d5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e4d5f jne 0x104e4d39 */
  if (!C.zf) goto L_104e4d39;
  /* 104e4d61 jmp 0x104e4d92 */
  goto L_104e4d92;
L_104e4d63:;
  /* 104e4d63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4d66 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104e4d69 push eax */
  push32((uint32_t)(EAX));
  /* 104e4d6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4d6d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104e4d70 push edx */
  push32((uint32_t)(EDX));
  /* 104e4d71 push 0x1050ab04 */
  push32((uint32_t)(0x1050ab04u));
  /* 104e4d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4d78 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4d7e call 0x104e22e0 */
  push32(0x104e4d83u); f_104e22e0();
  /* 104e4d83 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4d86 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4d89 jne 0x104e4d8c */
  if (!C.zf) goto L_104e4d8c;
  /* 104e4d8b int3  */
  x86_unimpl("int3 @ 0x104e4d8b");
L_104e4d8c:;
  /* 104e4d8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e4d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4d90 jne 0x104e4d63 */
  if (!C.zf) goto L_104e4d63;
L_104e4d92:;
  /* 104e4d92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4d95 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 104e4d98 push edx */
  push32((uint32_t)(EDX));
  /* 104e4d99 push 0x1050aafc */
  push32((uint32_t)(0x1050aafcu));
  /* 104e4d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4da0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4da2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4da6 call 0x104e22e0 */
  push32(0x104e4dabu); f_104e22e0();
  /* 104e4dab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4dae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4db1 jne 0x104e4db4 */
  if (!C.zf) goto L_104e4db4;
  /* 104e4db3 int3  */
  x86_unimpl("int3 @ 0x104e4db3");
L_104e4db4:;
  /* 104e4db4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e4db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e4db8 jne 0x104e4d92 */
  if (!C.zf) goto L_104e4d92;
  /* 104e4dba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4dbd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104e4dc0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e4dc6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4dc9 jne 0x104e4e3c */
  if (!C.zf) goto L_104e4e3c;
L_104e4dcb:;
  /* 104e4dcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4dce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e4dd1 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4dd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4dd5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e4dd8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104e4ddb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e4de0 push eax */
  push32((uint32_t)(EAX));
  /* 104e4de1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4de4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4de7 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4de8 push 0x1050aac8 */
  push32((uint32_t)(0x1050aac8u));
  /* 104e4ded push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4def push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4df1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4df5 call 0x104e22e0 */
  push32(0x104e4dfau); f_104e22e0();
  /* 104e4dfa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4dfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4e00 jne 0x104e4e03 */
  if (!C.zf) goto L_104e4e03;
  /* 104e4e02 int3  */
  x86_unimpl("int3 @ 0x104e4e02");
L_104e4e03:;
  /* 104e4e03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e4e05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e4e07 jne 0x104e4dcb */
  if (!C.zf) goto L_104e4dcb;
  /* 104e4e09 cmp dword ptr [0x10510e78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510e78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4e10 je 0x104e4e2b */
  if (C.zf) goto L_104e4e2b;
  /* 104e4e12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4e15 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e4e18 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4e19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4e1c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4e1f push edx */
  push32((uint32_t)(EDX));
  /* 104e4e20 call dword ptr [0x10510e78] */
  call_ind((uint32_t)(r32((uint32_t)(0x10510e78))), 0x104e4e26u);
  /* 104e4e26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4e29 jmp 0x104e4e37 */
  goto L_104e4e37;
L_104e4e2b:;
  /* 104e4e2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4e2e push eax */
  push32((uint32_t)(EAX));
  /* 104e4e2f call 0x104e4f20 */
  push32(0x104e4e34u); f_104e4f20();
  /* 104e4e34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e4e37:;
  /* 104e4e37 jmp 0x104e4edd */
  goto L_104e4edd;
L_104e4e3c:;
  /* 104e4e3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4e3f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4e43 jne 0x104e4e82 */
  if (!C.zf) goto L_104e4e82;
L_104e4e45:;
  /* 104e4e45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4e48 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e4e4b push eax */
  push32((uint32_t)(EAX));
  /* 104e4e4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4e4f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4e52 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4e53 push 0x1050aaa0 */
  push32((uint32_t)(0x1050aaa0u));
  /* 104e4e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4e5e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4e60 call 0x104e22e0 */
  push32(0x104e4e65u); f_104e22e0();
  /* 104e4e65 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4e68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4e6b jne 0x104e4e6e */
  if (!C.zf) goto L_104e4e6e;
  /* 104e4e6d int3  */
  x86_unimpl("int3 @ 0x104e4e6d");
L_104e4e6e:;
  /* 104e4e6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e4e70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e4e72 jne 0x104e4e45 */
  if (!C.zf) goto L_104e4e45;
  /* 104e4e74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4e77 push eax */
  push32((uint32_t)(EAX));
  /* 104e4e78 call 0x104e4f20 */
  push32(0x104e4e7du); f_104e4f20();
  /* 104e4e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4e80 jmp 0x104e4edd */
  goto L_104e4edd;
L_104e4e82:;
  /* 104e4e82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4e85 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 104e4e88 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e4e8e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4e91 jne 0x104e4edd */
  if (!C.zf) goto L_104e4edd;
L_104e4e93:;
  /* 104e4e93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4e96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104e4e99 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4e9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4e9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104e4ea0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104e4ea3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e4ea8 push eax */
  push32((uint32_t)(EAX));
  /* 104e4ea9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4eac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4eaf push ecx */
  push32((uint32_t)(ECX));
  /* 104e4eb0 push 0x1050aa6c */
  push32((uint32_t)(0x1050aa6cu));
  /* 104e4eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4ebd call 0x104e22e0 */
  push32(0x104e4ec2u); f_104e22e0();
  /* 104e4ec2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4ec5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4ec8 jne 0x104e4ecb */
  if (!C.zf) goto L_104e4ecb;
  /* 104e4eca int3  */
  x86_unimpl("int3 @ 0x104e4eca");
L_104e4ecb:;
  /* 104e4ecb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e4ecd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e4ecf jne 0x104e4e93 */
  if (!C.zf) goto L_104e4e93;
  /* 104e4ed1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e4ed4 push eax */
  push32((uint32_t)(EAX));
  /* 104e4ed5 call 0x104e4f20 */
  push32(0x104e4edau); f_104e4f20();
  /* 104e4eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e4edd:;
  /* 104e4edd jmp 0x104e4cb8 */
  goto L_104e4cb8;
L_104e4ee2:;
  /* 104e4ee2 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e4ee4 call 0x104e6cc0 */
  push32(0x104e4ee9u); f_104e6cc0();
  /* 104e4ee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e4eec:;
  /* 104e4eec push 0x1050aa54 */
  push32((uint32_t)(0x1050aa54u));
  /* 104e4ef1 push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e4ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4efa push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4efc push 0 */
  push32((uint32_t)(0x0u));
  /* 104e4efe call 0x104e22e0 */
  push32(0x104e4f03u); f_104e22e0();
  /* 104e4f03 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4f06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4f09 jne 0x104e4f0c */
  if (!C.zf) goto L_104e4f0c;
  /* 104e4f0b int3  */
  x86_unimpl("int3 @ 0x104e4f0b");
L_104e4f0c:;
  /* 104e4f0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e4f0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e4f10 jne 0x104e4eec */
  if (!C.zf) goto L_104e4eec;
  /* 104e4f12 pop edi */
  EDI = (pop32());
  /* 104e4f13 pop esi */
  ESI = (pop32());
  /* 104e4f14 pop ebx */
  EBX = (pop32());
  /* 104e4f15 mov esp, ebp */
  ESP = (EBP);
  /* 104e4f17 pop ebp */
  EBP = (pop32());
  /* 104e4f18 ret  */
  ESPCHK(0x104e4c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f20 @ 0x104e4f20 (276 bytes, 89 insns) */
void f_104e4f20(void) {
  FTRACE(0x104e4f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e4f20 push ebp */
  push32((uint32_t)(EBP));
  /* 104e4f21 mov ebp, esp */
  EBP = (ESP);
  /* 104e4f23 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e4f26 push ebx */
  push32((uint32_t)(EBX));
  /* 104e4f27 push esi */
  push32((uint32_t)(ESI));
  /* 104e4f28 push edi */
  push32((uint32_t)(EDI));
  /* 104e4f29 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 104e4f30 jmp 0x104e4f3b */
  goto L_104e4f3b;
L_104e4f32:;
  /* 104e4f32 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104e4f35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4f38 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_104e4f3b:;
  /* 104e4f3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4f3e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4f42 jge 0x104e4f4f */
  if ((C.sf==C.of)) goto L_104e4f4f;
  /* 104e4f44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4f47 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104e4f4a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 104e4f4d jmp 0x104e4f56 */
  goto L_104e4f56;
L_104e4f4f:;
  /* 104e4f4f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_104e4f56:;
  /* 104e4f56 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104e4f59 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4f5c jge 0x104e4ffc */
  if ((C.sf==C.of)) goto L_104e4ffc;
  /* 104e4f62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e4f65 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4f68 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 104e4f6b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 104e4f6e cmp dword ptr [0x1050dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4f75 jle 0x104e4f93 */
  if ((C.zf||C.sf!=C.of)) goto L_104e4f93;
  /* 104e4f77 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 104e4f7c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e4f7f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e4f85 push ecx */
  push32((uint32_t)(ECX));
  /* 104e4f86 call 0x104e9230 */
  push32(0x104e4f8bu); f_104e9230();
  /* 104e4f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4f8e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 104e4f91 jmp 0x104e4fb0 */
  goto L_104e4fb0;
L_104e4f93:;
  /* 104e4f93 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e4f96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e4f9c mov eax, dword ptr [0x1050dc98] */
  EAX = (r32((uint32_t)(0x1050dc98)));
  /* 104e4fa1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e4fa3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 104e4fa7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 104e4fad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_104e4fb0:;
  /* 104e4fb0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e4fb4 je 0x104e4fc4 */
  if (C.zf) goto L_104e4fc4;
  /* 104e4fb6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e4fb9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e4fbf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 104e4fc2 jmp 0x104e4fcb */
  goto L_104e4fcb;
L_104e4fc4:;
  /* 104e4fc4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_104e4fcb:;
  /* 104e4fcb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104e4fce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 104e4fd1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 104e4fd5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104e4fd8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e4fde push edx */
  push32((uint32_t)(EDX));
  /* 104e4fdf push 0x1050ab48 */
  push32((uint32_t)(0x1050ab48u));
  /* 104e4fe4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104e4fe7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e4fea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 104e4fee push ecx */
  push32((uint32_t)(ECX));
  /* 104e4fef call 0x104e9130 */
  push32(0x104e4ff4u); f_104e9130();
  /* 104e4ff4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e4ff7 jmp 0x104e4f32 */
  goto L_104e4f32;
L_104e4ffc:;
  /* 104e4ffc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104e4fff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_104e5004:;
  /* 104e5004 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 104e5007 push eax */
  push32((uint32_t)(EAX));
  /* 104e5008 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 104e500b push ecx */
  push32((uint32_t)(ECX));
  /* 104e500c push 0x1050ab38 */
  push32((uint32_t)(0x1050ab38u));
  /* 104e5011 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5013 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5015 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5017 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5019 call 0x104e22e0 */
  push32(0x104e501eu); f_104e22e0();
  /* 104e501e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5021 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5024 jne 0x104e5027 */
  if (!C.zf) goto L_104e5027;
  /* 104e5026 int3  */
  x86_unimpl("int3 @ 0x104e5026");
L_104e5027:;
  /* 104e5027 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e5029 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e502b jne 0x104e5004 */
  if (!C.zf) goto L_104e5004;
  /* 104e502d pop edi */
  EDI = (pop32());
  /* 104e502e pop esi */
  ESI = (pop32());
  /* 104e502f pop ebx */
  EBX = (pop32());
  /* 104e5030 mov esp, ebp */
  ESP = (EBP);
  /* 104e5032 pop ebp */
  EBP = (pop32());
  /* 104e5033 ret  */
  ESPCHK(0x104e4f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005040 @ 0x104e5040 (116 bytes, 46 insns) */
void f_104e5040(void) {
  FTRACE(0x104e5040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5040 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5041 mov ebp, esp */
  EBP = (ESP);
  /* 104e5043 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e5046 push ebx */
  push32((uint32_t)(EBX));
  /* 104e5047 push esi */
  push32((uint32_t)(ESI));
  /* 104e5048 push edi */
  push32((uint32_t)(EDI));
  /* 104e5049 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 104e504c push eax */
  push32((uint32_t)(EAX));
  /* 104e504d call 0x104e49c0 */
  push32(0x104e5052u); f_104e49c0();
  /* 104e5052 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5055 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5059 jne 0x104e5074 */
  if (!C.zf) goto L_104e5074;
  /* 104e505b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e505f jne 0x104e5074 */
  if (!C.zf) goto L_104e5074;
  /* 104e5061 mov ecx, dword ptr [0x1050da84] */
  ECX = (r32((uint32_t)(0x1050da84)));
  /* 104e5067 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 104e506a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e506c je 0x104e50ab */
  if (C.zf) goto L_104e50ab;
  /* 104e506e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5072 je 0x104e50ab */
  if (C.zf) goto L_104e50ab;
L_104e5074:;
  /* 104e5074 push 0x1050ab50 */
  push32((uint32_t)(0x1050ab50u));
  /* 104e5079 push 0x1050a51c */
  push32((uint32_t)(0x1050a51cu));
  /* 104e507e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5080 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5082 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5084 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5086 call 0x104e22e0 */
  push32(0x104e508bu); f_104e22e0();
  /* 104e508b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e508e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5091 jne 0x104e5094 */
  if (!C.zf) goto L_104e5094;
  /* 104e5093 int3  */
  x86_unimpl("int3 @ 0x104e5093");
L_104e5094:;
  /* 104e5094 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e5096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e5098 jne 0x104e5074 */
  if (!C.zf) goto L_104e5074;
  /* 104e509a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e509c call 0x104e4c60 */
  push32(0x104e50a1u); f_104e4c60();
  /* 104e50a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e50a4 mov eax, 1 */
  EAX = (0x1u);
  /* 104e50a9 jmp 0x104e50ad */
  goto L_104e50ad;
L_104e50ab:;
  /* 104e50ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e50ad:;
  /* 104e50ad pop edi */
  EDI = (pop32());
  /* 104e50ae pop esi */
  ESI = (pop32());
  /* 104e50af pop ebx */
  EBX = (pop32());
  /* 104e50b0 mov esp, ebp */
  ESP = (EBP);
  /* 104e50b2 pop ebp */
  EBP = (pop32());
  /* 104e50b3 ret  */
  ESPCHK(0x104e5040u, _esp0);
  ESP += 4; return;
}

/* FUN_100050c0 @ 0x104e50c0 (197 bytes, 79 insns) */
void f_104e50c0(void) {
  FTRACE(0x104e50c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e50c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e50c1 mov ebp, esp */
  EBP = (ESP);
  /* 104e50c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e50c4 push ebx */
  push32((uint32_t)(EBX));
  /* 104e50c5 push esi */
  push32((uint32_t)(ESI));
  /* 104e50c6 push edi */
  push32((uint32_t)(EDI));
  /* 104e50c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e50cb jne 0x104e50d2 */
  if (!C.zf) goto L_104e50d2;
  /* 104e50cd jmp 0x104e517e */
  goto L_104e517e;
L_104e50d2:;
  /* 104e50d2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104e50d9 jmp 0x104e50e4 */
  goto L_104e50e4;
L_104e50db:;
  /* 104e50db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e50de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e50e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e50e4:;
  /* 104e50e4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e50e8 jge 0x104e512e */
  if ((C.sf==C.of)) goto L_104e512e;
L_104e50ea:;
  /* 104e50ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e50ed mov edx, dword ptr [ecx*4 + 0x1050da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1050da94)));
  /* 104e50f4 push edx */
  push32((uint32_t)(EDX));
  /* 104e50f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e50f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e50fb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 104e50ff push edx */
  push32((uint32_t)(EDX));
  /* 104e5100 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5103 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5106 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 104e510a push edx */
  push32((uint32_t)(EDX));
  /* 104e510b push 0x1050abac */
  push32((uint32_t)(0x1050abacu));
  /* 104e5110 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5112 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5114 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5116 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5118 call 0x104e22e0 */
  push32(0x104e511du); f_104e22e0();
  /* 104e511d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5120 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5123 jne 0x104e5126 */
  if (!C.zf) goto L_104e5126;
  /* 104e5125 int3  */
  x86_unimpl("int3 @ 0x104e5125");
L_104e5126:;
  /* 104e5126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e5128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e512a jne 0x104e50ea */
  if (!C.zf) goto L_104e50ea;
  /* 104e512c jmp 0x104e50db */
  goto L_104e50db;
L_104e512e:;
  /* 104e512e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5131 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 104e5134 push edx */
  push32((uint32_t)(EDX));
  /* 104e5135 push 0x1050ab88 */
  push32((uint32_t)(0x1050ab88u));
  /* 104e513a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e513c push 0 */
  push32((uint32_t)(0x0u));
  /* 104e513e push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5140 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5142 call 0x104e22e0 */
  push32(0x104e5147u); f_104e22e0();
  /* 104e5147 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e514a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e514d jne 0x104e5150 */
  if (!C.zf) goto L_104e5150;
  /* 104e514f int3  */
  x86_unimpl("int3 @ 0x104e514f");
L_104e5150:;
  /* 104e5150 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e5152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e5154 jne 0x104e512e */
  if (!C.zf) goto L_104e512e;
L_104e5156:;
  /* 104e5156 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5159 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 104e515c push edx */
  push32((uint32_t)(EDX));
  /* 104e515d push 0x1050ab68 */
  push32((uint32_t)(0x1050ab68u));
  /* 104e5162 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5164 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5166 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5168 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e516a call 0x104e22e0 */
  push32(0x104e516fu); f_104e22e0();
  /* 104e516f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5172 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5175 jne 0x104e5178 */
  if (!C.zf) goto L_104e5178;
  /* 104e5177 int3  */
  x86_unimpl("int3 @ 0x104e5177");
L_104e5178:;
  /* 104e5178 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e517a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e517c jne 0x104e5156 */
  if (!C.zf) goto L_104e5156;
L_104e517e:;
  /* 104e517e pop edi */
  EDI = (pop32());
  /* 104e517f pop esi */
  ESI = (pop32());
  /* 104e5180 pop ebx */
  EBX = (pop32());
  /* 104e5181 mov esp, ebp */
  ESP = (EBP);
  /* 104e5183 pop ebp */
  EBP = (pop32());
  /* 104e5184 ret  */
  ESPCHK(0x104e50c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005190 @ 0x104e5190 (329 bytes, 102 insns) */
void f_104e5190(void) {
  FTRACE(0x104e5190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5190 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5191 mov ebp, esp */
  EBP = (ESP);
  /* 104e5193 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e5196 cmp dword ptr [0x10510ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e519d jne 0x104e51a4 */
  if (!C.zf) goto L_104e51a4;
  /* 104e519f call 0x104e9ad0 */
  push32(0x104e51a4u); f_104e9ad0();
L_104e51a4:;
  /* 104e51a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104e51ab mov eax, dword ptr [0x1050f4a8] */
  EAX = (r32((uint32_t)(0x1050f4a8)));
  /* 104e51b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e51b3:;
  /* 104e51b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e51b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104e51b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e51bb je 0x104e51e9 */
  if (C.zf) goto L_104e51e9;
  /* 104e51bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e51c0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104e51c3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e51c6 je 0x104e51d1 */
  if (C.zf) goto L_104e51d1;
  /* 104e51c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e51cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e51ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104e51d1:;
  /* 104e51d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e51d4 push eax */
  push32((uint32_t)(EAX));
  /* 104e51d5 call 0x104e6050 */
  push32(0x104e51dau); f_104e6050();
  /* 104e51da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e51dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e51e0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104e51e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e51e7 jmp 0x104e51b3 */
  goto L_104e51b3;
L_104e51e9:;
  /* 104e51e9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 104e51eb push 0x1050abcc */
  push32((uint32_t)(0x1050abccu));
  /* 104e51f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e51f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e51f5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 104e51fc push ecx */
  push32((uint32_t)(ECX));
  /* 104e51fd call 0x104e3220 */
  push32(0x104e5202u); f_104e3220();
  /* 104e5202 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5205 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e5208 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e520b mov dword ptr [0x1050f4dc], edx */
  w32((uint32_t)(0x1050f4dc), (EDX));
  /* 104e5211 cmp dword ptr [0x1050f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5218 jne 0x104e5224 */
  if (!C.zf) goto L_104e5224;
  /* 104e521a push 9 */
  push32((uint32_t)(0x9u));
  /* 104e521c call 0x104e2190 */
  push32(0x104e5221u); f_104e2190();
  /* 104e5221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e5224:;
  /* 104e5224 mov eax, dword ptr [0x1050f4a8] */
  EAX = (r32((uint32_t)(0x1050f4a8)));
  /* 104e5229 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e522c jmp 0x104e5237 */
  goto L_104e5237;
L_104e522e:;
  /* 104e522e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5231 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5234 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104e5237:;
  /* 104e5237 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e523a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104e523d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e523f je 0x104e52a7 */
  if (C.zf) goto L_104e52a7;
  /* 104e5241 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5244 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5245 call 0x104e6050 */
  push32(0x104e524au); f_104e6050();
  /* 104e524a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e524d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5250 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104e5253 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5256 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104e5259 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e525c je 0x104e52a5 */
  if (C.zf) goto L_104e52a5;
  /* 104e525e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 104e5260 push 0x1050abcc */
  push32((uint32_t)(0x1050abccu));
  /* 104e5265 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e5267 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e526a push ecx */
  push32((uint32_t)(ECX));
  /* 104e526b call 0x104e3220 */
  push32(0x104e5270u); f_104e3220();
  /* 104e5270 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5273 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5276 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104e5278 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e527b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e527e jne 0x104e528a */
  if (!C.zf) goto L_104e528a;
  /* 104e5280 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e5282 call 0x104e2190 */
  push32(0x104e5287u); f_104e2190();
  /* 104e5287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e528a:;
  /* 104e528a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e528d push ecx */
  push32((uint32_t)(ECX));
  /* 104e528e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5291 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e5293 push eax */
  push32((uint32_t)(EAX));
  /* 104e5294 call 0x104e61d0 */
  push32(0x104e5299u); f_104e61d0();
  /* 104e5299 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e529c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e529f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e52a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104e52a5:;
  /* 104e52a5 jmp 0x104e522e */
  goto L_104e522e;
L_104e52a7:;
  /* 104e52a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e52a9 mov edx, dword ptr [0x1050f4a8] */
  EDX = (r32((uint32_t)(0x1050f4a8)));
  /* 104e52af push edx */
  push32((uint32_t)(EDX));
  /* 104e52b0 call 0x104e3cb0 */
  push32(0x104e52b5u); f_104e3cb0();
  /* 104e52b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e52b8 mov dword ptr [0x1050f4a8], 0 */
  w32((uint32_t)(0x1050f4a8), (0x0u));
  /* 104e52c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e52c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104e52cb mov dword ptr [0x10510fe0], 1 */
  w32((uint32_t)(0x10510fe0), (0x1u));
  /* 104e52d5 mov esp, ebp */
  ESP = (EBP);
  /* 104e52d7 pop ebp */
  EBP = (pop32());
  /* 104e52d8 ret  */
  ESPCHK(0x104e5190u, _esp0);
  ESP += 4; return;
}

/* FUN_100052e0 @ 0x104e52e0 (216 bytes, 69 insns) */
void f_104e52e0(void) {
  FTRACE(0x104e52e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e52e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e52e1 mov ebp, esp */
  EBP = (ESP);
  /* 104e52e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e52e6 cmp dword ptr [0x10510ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e52ed jne 0x104e52f4 */
  if (!C.zf) goto L_104e52f4;
  /* 104e52ef call 0x104e9ad0 */
  push32(0x104e52f4u); f_104e9ad0();
L_104e52f4:;
  /* 104e52f4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 104e52f9 push 0x1050f518 */
  push32((uint32_t)(0x1050f518u));
  /* 104e52fe push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5300 call dword ptr [0x105122a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122a0))), 0x104e5306u);
  /* 104e5306 mov dword ptr [0x1050f4ec], 0x1050f518 */
  w32((uint32_t)(0x1050f4ec), (0x1050f518u));
  /* 104e5310 mov eax, dword ptr [0x1051100c] */
  EAX = (r32((uint32_t)(0x1051100c)));
  /* 104e5315 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104e5318 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e531a jne 0x104e5327 */
  if (!C.zf) goto L_104e5327;
  /* 104e531c mov edx, dword ptr [0x1050f4ec] */
  EDX = (r32((uint32_t)(0x1050f4ec)));
  /* 104e5322 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104e5325 jmp 0x104e532f */
  goto L_104e532f;
L_104e5327:;
  /* 104e5327 mov eax, dword ptr [0x1051100c] */
  EAX = (r32((uint32_t)(0x1051100c)));
  /* 104e532c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_104e532f:;
  /* 104e532f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e5332 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104e5335 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 104e5338 push edx */
  push32((uint32_t)(EDX));
  /* 104e5339 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 104e533c push eax */
  push32((uint32_t)(EAX));
  /* 104e533d push 0 */
  push32((uint32_t)(0x0u));
  /* 104e533f push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5341 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e5344 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5345 call 0x104e53c0 */
  push32(0x104e534au); f_104e53c0();
  /* 104e534a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e534d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 104e5352 push 0x1050abd8 */
  push32((uint32_t)(0x1050abd8u));
  /* 104e5357 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e5359 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e535c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e535f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 104e5362 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5363 call 0x104e3220 */
  push32(0x104e5368u); f_104e3220();
  /* 104e5368 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e536b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e536e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5372 jne 0x104e537e */
  if (!C.zf) goto L_104e537e;
  /* 104e5374 push 8 */
  push32((uint32_t)(0x8u));
  /* 104e5376 call 0x104e2190 */
  push32(0x104e537bu); f_104e2190();
  /* 104e537b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e537e:;
  /* 104e537e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 104e5381 push edx */
  push32((uint32_t)(EDX));
  /* 104e5382 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 104e5385 push eax */
  push32((uint32_t)(EAX));
  /* 104e5386 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5389 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e538c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 104e538f push eax */
  push32((uint32_t)(EAX));
  /* 104e5390 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5393 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5394 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e5397 push edx */
  push32((uint32_t)(EDX));
  /* 104e5398 call 0x104e53c0 */
  push32(0x104e539du); f_104e53c0();
  /* 104e539d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e53a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e53a3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e53a6 mov dword ptr [0x1050f4d0], eax */
  w32((uint32_t)(0x1050f4d0), (EAX));
  /* 104e53ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e53ae mov dword ptr [0x1050f4d4], ecx */
  w32((uint32_t)(0x1050f4d4), (ECX));
  /* 104e53b4 mov esp, ebp */
  ESP = (EBP);
  /* 104e53b6 pop ebp */
  EBP = (pop32());
  /* 104e53b7 ret  */
  ESPCHK(0x104e52e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053c0 @ 0x104e53c0 (1060 bytes, 360 insns) */
void f_104e53c0(void) {
  FTRACE(0x104e53c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e53c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e53c1 mov ebp, esp */
  EBP = (ESP);
  /* 104e53c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e53c6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e53c9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104e53cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e53d2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 104e53d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e53db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e53de cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e53e2 je 0x104e53f5 */
  if (C.zf) goto L_104e53f5;
  /* 104e53e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e53e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e53ea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104e53ec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e53ef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e53f2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_104e53f5:;
  /* 104e53f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e53f8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104e53fb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e53fe jne 0x104e54cd */
  if (!C.zf) goto L_104e54cd;
L_104e5404:;
  /* 104e5404 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5407 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e540a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e540d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5410 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104e5413 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5416 je 0x104e5492 */
  if (C.zf) goto L_104e5492;
  /* 104e5418 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e541b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104e541e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e5420 je 0x104e5492 */
  if (C.zf) goto L_104e5492;
  /* 104e5422 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5425 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e5427 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e5429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e542b mov al, byte ptr [edx + 0x10510d41] */
  AL = (r8((uint32_t)(EDX + 0x10510d41)));
  /* 104e5431 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104e5434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e5436 je 0x104e5467 */
  if (C.zf) goto L_104e5467;
  /* 104e5438 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e543b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e543d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5440 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e5443 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104e5445 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5449 je 0x104e5467 */
  if (C.zf) goto L_104e5467;
  /* 104e544b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e544e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5451 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104e5453 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104e5455 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5458 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e545b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104e545e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5461 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5464 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104e5467:;
  /* 104e5467 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e546a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e546c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e546f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e5472 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104e5474 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5478 je 0x104e548d */
  if (C.zf) goto L_104e548d;
  /* 104e547a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e547d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5480 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e5482 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104e5484 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5487 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e548a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_104e548d:;
  /* 104e548d jmp 0x104e5404 */
  goto L_104e5404;
L_104e5492:;
  /* 104e5492 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e5495 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e5497 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e549a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e549d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104e549f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e54a3 je 0x104e54b4 */
  if (C.zf) goto L_104e54b4;
  /* 104e54a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e54a8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 104e54ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e54ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e54b1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_104e54b4:;
  /* 104e54b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e54b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104e54ba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e54bd jne 0x104e54c8 */
  if (!C.zf) goto L_104e54c8;
  /* 104e54bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e54c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e54c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104e54c8:;
  /* 104e54c8 jmp 0x104e559c */
  goto L_104e559c;
L_104e54cd:;
  /* 104e54cd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e54d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e54d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e54d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e54d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104e54da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e54de je 0x104e54f3 */
  if (C.zf) goto L_104e54f3;
  /* 104e54e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e54e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e54e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e54e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104e54ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e54ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e54f0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_104e54f3:;
  /* 104e54f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e54f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e54f8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 104e54fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e54fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5501 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e5504 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5507 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e550d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e550f mov dl, byte ptr [ecx + 0x10510d41] */
  DL = (r8((uint32_t)(ECX + 0x10510d41)));
  /* 104e5515 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104e5518 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e551a je 0x104e554b */
  if (C.zf) goto L_104e554b;
  /* 104e551c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e551f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e5521 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5524 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e5527 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104e5529 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e552d je 0x104e5542 */
  if (C.zf) goto L_104e5542;
  /* 104e552f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5532 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5535 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e5537 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104e5539 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e553c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e553f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_104e5542:;
  /* 104e5542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5545 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5548 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104e554b:;
  /* 104e554b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e554e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e5554 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5557 je 0x104e5577 */
  if (C.zf) goto L_104e5577;
  /* 104e5559 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e555c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e5561 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e5563 je 0x104e5577 */
  if (C.zf) goto L_104e5577;
  /* 104e5565 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5568 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e556e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5571 jne 0x104e54cd */
  if (!C.zf) goto L_104e54cd;
L_104e5577:;
  /* 104e5577 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e557a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e5580 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e5582 jne 0x104e558f */
  if (!C.zf) goto L_104e558f;
  /* 104e5584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5587 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e558a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e558d jmp 0x104e559c */
  goto L_104e559c;
L_104e558f:;
  /* 104e558f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5593 je 0x104e559c */
  if (C.zf) goto L_104e559c;
  /* 104e5595 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5598 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_104e559c:;
  /* 104e559c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_104e55a3:;
  /* 104e55a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e55a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104e55a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e55ab je 0x104e55ce */
  if (C.zf) goto L_104e55ce;
L_104e55ad:;
  /* 104e55ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e55b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104e55b3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e55b6 je 0x104e55c3 */
  if (C.zf) goto L_104e55c3;
  /* 104e55b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e55bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104e55be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e55c1 jne 0x104e55ce */
  if (!C.zf) goto L_104e55ce;
L_104e55c3:;
  /* 104e55c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e55c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e55c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e55cc jmp 0x104e55ad */
  goto L_104e55ad;
L_104e55ce:;
  /* 104e55ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e55d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104e55d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e55d6 jne 0x104e55dd */
  if (!C.zf) goto L_104e55dd;
  /* 104e55d8 jmp 0x104e57bb */
  goto L_104e57bb;
L_104e55dd:;
  /* 104e55dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e55e1 je 0x104e55f4 */
  if (C.zf) goto L_104e55f4;
  /* 104e55e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e55e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e55e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104e55eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e55ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e55f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_104e55f4:;
  /* 104e55f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e55f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e55f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e55fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e55ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_104e5601:;
  /* 104e5601 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104e5608 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_104e560f:;
  /* 104e560f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5612 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104e5615 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5618 jne 0x104e562e */
  if (!C.zf) goto L_104e562e;
  /* 104e561a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e561d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5620 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e5623 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e5626 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5629 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104e562c jmp 0x104e560f */
  goto L_104e560f;
L_104e562e:;
  /* 104e562e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5631 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104e5634 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5637 jne 0x104e568a */
  if (!C.zf) goto L_104e568a;
  /* 104e5639 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e563c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e563e mov ecx, 2 */
  ECX = (0x2u);
  /* 104e5643 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104e5645 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e5647 jne 0x104e5682 */
  if (!C.zf) goto L_104e5682;
  /* 104e5649 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e564d je 0x104e566f */
  if (C.zf) goto L_104e566f;
  /* 104e564f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5652 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 104e5656 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5659 jne 0x104e5666 */
  if (!C.zf) goto L_104e5666;
  /* 104e565b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e565e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5661 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e5664 jmp 0x104e566d */
  goto L_104e566d;
L_104e5666:;
  /* 104e5666 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104e566d:;
  /* 104e566d jmp 0x104e5676 */
  goto L_104e5676;
L_104e566f:;
  /* 104e566f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104e5676:;
  /* 104e5676 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e5678 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e567c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 104e567f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_104e5682:;
  /* 104e5682 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e5685 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104e5687 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104e568a:;
  /* 104e568a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e568d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e5690 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e5693 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 104e5696 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e5698 je 0x104e56be */
  if (C.zf) goto L_104e56be;
  /* 104e569a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e569e je 0x104e56af */
  if (C.zf) goto L_104e56af;
  /* 104e56a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e56a3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 104e56a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e56a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e56ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_104e56af:;
  /* 104e56af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e56b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e56b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e56b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e56ba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104e56bc jmp 0x104e568a */
  goto L_104e568a;
L_104e56be:;
  /* 104e56be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e56c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104e56c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e56c6 je 0x104e56e4 */
  if (C.zf) goto L_104e56e4;
  /* 104e56c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e56cc jne 0x104e56e9 */
  if (!C.zf) goto L_104e56e9;
  /* 104e56ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e56d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104e56d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e56d7 je 0x104e56e4 */
  if (C.zf) goto L_104e56e4;
  /* 104e56d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e56dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104e56df cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e56e2 jne 0x104e56e9 */
  if (!C.zf) goto L_104e56e9;
L_104e56e4:;
  /* 104e56e4 jmp 0x104e5794 */
  goto L_104e5794;
L_104e56e9:;
  /* 104e56e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e56ed je 0x104e5786 */
  if (C.zf) goto L_104e5786;
  /* 104e56f3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e56f7 je 0x104e574d */
  if (C.zf) goto L_104e574d;
  /* 104e56f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e56fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e56fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104e5700 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e5702 mov cl, byte ptr [eax + 0x10510d41] */
  CL = (r8((uint32_t)(EAX + 0x10510d41)));
  /* 104e5708 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104e570b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e570d je 0x104e5738 */
  if (C.zf) goto L_104e5738;
  /* 104e570f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5712 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5715 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104e5717 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 104e5719 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e571c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e571f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 104e5722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5725 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5728 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e572b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e572e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e5730 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5733 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e5736 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104e5738:;
  /* 104e5738 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e573b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e573e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104e5740 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 104e5742 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5745 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5748 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 104e574b jmp 0x104e5779 */
  goto L_104e5779;
L_104e574d:;
  /* 104e574d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e5752 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104e5754 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e5756 mov cl, byte ptr [eax + 0x10510d41] */
  CL = (r8((uint32_t)(EAX + 0x10510d41)));
  /* 104e575c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104e575f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e5761 je 0x104e5779 */
  if (C.zf) goto L_104e5779;
  /* 104e5763 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5766 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5769 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e576c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e576f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e5771 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5774 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e5777 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104e5779:;
  /* 104e5779 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e577c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e577e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5781 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e5784 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104e5786:;
  /* 104e5786 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5789 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e578c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e578f jmp 0x104e5601 */
  goto L_104e5601;
L_104e5794:;
  /* 104e5794 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5798 je 0x104e57a9 */
  if (C.zf) goto L_104e57a9;
  /* 104e579a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e579d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 104e57a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e57a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e57a6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_104e57a9:;
  /* 104e57a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e57ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e57ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e57b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104e57b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104e57b6 jmp 0x104e55a3 */
  goto L_104e55a3;
L_104e57bb:;
  /* 104e57bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e57bf je 0x104e57d3 */
  if (C.zf) goto L_104e57d3;
  /* 104e57c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e57c4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 104e57ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e57cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e57d0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_104e57d3:;
  /* 104e57d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e57d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e57d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e57db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e57de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104e57e0 mov esp, ebp */
  ESP = (EBP);
  /* 104e57e2 pop ebp */
  EBP = (pop32());
  /* 104e57e3 ret  */
  ESPCHK(0x104e53c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057f0 @ 0x104e57f0 (537 bytes, 173 insns) */
void f_104e57f0(void) {
  FTRACE(0x104e57f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e57f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e57f1 mov ebp, esp */
  EBP = (ESP);
  /* 104e57f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e57f6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 104e57fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 104e5804 cmp dword ptr [0x1050f61c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f61c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e580b jne 0x104e584a */
  if (!C.zf) goto L_104e584a;
  /* 104e580d call dword ptr [0x105122fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122fc))), 0x104e5813u);
  /* 104e5813 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104e5816 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e581a je 0x104e5828 */
  if (C.zf) goto L_104e5828;
  /* 104e581c mov dword ptr [0x1050f61c], 1 */
  w32((uint32_t)(0x1050f61c), (0x1u));
  /* 104e5826 jmp 0x104e584a */
  goto L_104e584a;
L_104e5828:;
  /* 104e5828 call dword ptr [0x105122f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f8))), 0x104e582eu);
  /* 104e582e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e5831 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5835 je 0x104e5843 */
  if (C.zf) goto L_104e5843;
  /* 104e5837 mov dword ptr [0x1050f61c], 2 */
  w32((uint32_t)(0x1050f61c), (0x2u));
  /* 104e5841 jmp 0x104e584a */
  goto L_104e584a;
L_104e5843:;
  /* 104e5843 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e5845 jmp 0x104e5a05 */
  goto L_104e5a05;
L_104e584a:;
  /* 104e584a cmp dword ptr [0x1050f61c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f61c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5851 jne 0x104e594e */
  if (!C.zf) goto L_104e594e;
  /* 104e5857 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e585b jne 0x104e5873 */
  if (!C.zf) goto L_104e5873;
  /* 104e585d call dword ptr [0x105122fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122fc))), 0x104e5863u);
  /* 104e5863 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104e5866 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e586a jne 0x104e5873 */
  if (!C.zf) goto L_104e5873;
  /* 104e586c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e586e jmp 0x104e5a05 */
  goto L_104e5a05;
L_104e5873:;
  /* 104e5873 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e5876 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104e5879:;
  /* 104e5879 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e587c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e587e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 104e5881 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e5883 je 0x104e58a5 */
  if (C.zf) goto L_104e58a5;
  /* 104e5885 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5888 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e588b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e588e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5891 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e5893 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 104e5896 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e5898 jne 0x104e58a3 */
  if (!C.zf) goto L_104e58a3;
  /* 104e589a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e589d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e58a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104e58a3:;
  /* 104e58a3 jmp 0x104e5879 */
  goto L_104e5879;
L_104e58a5:;
  /* 104e58a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e58a8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e58ab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 104e58ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e58b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e58b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e58b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e58b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e58b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e58bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e58be push edx */
  push32((uint32_t)(EDX));
  /* 104e58bf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e58c2 push eax */
  push32((uint32_t)(EAX));
  /* 104e58c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e58c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e58c7 call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104e58cdu);
  /* 104e58cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104e58d0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e58d4 je 0x104e58f4 */
  if (C.zf) goto L_104e58f4;
  /* 104e58d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 104e58d8 push 0x1050abe4 */
  push32((uint32_t)(0x1050abe4u));
  /* 104e58dd push 2 */
  push32((uint32_t)(0x2u));
  /* 104e58df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e58e2 push ecx */
  push32((uint32_t)(ECX));
  /* 104e58e3 call 0x104e3220 */
  push32(0x104e58e8u); f_104e3220();
  /* 104e58e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e58eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e58ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e58f2 jne 0x104e5905 */
  if (!C.zf) goto L_104e5905;
L_104e58f4:;
  /* 104e58f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e58f7 push edx */
  push32((uint32_t)(EDX));
  /* 104e58f8 call dword ptr [0x105122f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f0))), 0x104e58feu);
  /* 104e58fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e5900 jmp 0x104e5a05 */
  goto L_104e5a05;
L_104e5905:;
  /* 104e5905 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5907 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5909 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e590c push eax */
  push32((uint32_t)(EAX));
  /* 104e590d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e5910 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5911 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5914 push edx */
  push32((uint32_t)(EDX));
  /* 104e5915 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e5918 push eax */
  push32((uint32_t)(EAX));
  /* 104e5919 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e591b push 0 */
  push32((uint32_t)(0x0u));
  /* 104e591d call dword ptr [0x105122f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f4))), 0x104e5923u);
  /* 104e5923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e5925 jne 0x104e593c */
  if (!C.zf) goto L_104e593c;
  /* 104e5927 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e5929 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e592c push ecx */
  push32((uint32_t)(ECX));
  /* 104e592d call 0x104e3cb0 */
  push32(0x104e5932u); f_104e3cb0();
  /* 104e5932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5935 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_104e593c:;
  /* 104e593c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e593f push edx */
  push32((uint32_t)(EDX));
  /* 104e5940 call dword ptr [0x105122f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f0))), 0x104e5946u);
  /* 104e5946 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e5949 jmp 0x104e5a05 */
  goto L_104e5a05;
L_104e594e:;
  /* 104e594e cmp dword ptr [0x1050f61c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1050f61c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5955 jne 0x104e5a03 */
  if (!C.zf) goto L_104e5a03;
  /* 104e595b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e595f jne 0x104e5977 */
  if (!C.zf) goto L_104e5977;
  /* 104e5961 call dword ptr [0x105122f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122f8))), 0x104e5967u);
  /* 104e5967 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e596a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e596e jne 0x104e5977 */
  if (!C.zf) goto L_104e5977;
  /* 104e5970 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e5972 jmp 0x104e5a05 */
  goto L_104e5a05;
L_104e5977:;
  /* 104e5977 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e597a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104e597d:;
  /* 104e597d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5980 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104e5983 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e5985 je 0x104e59a5 */
  if (C.zf) goto L_104e59a5;
  /* 104e5987 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e598a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e598d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e5990 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5993 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104e5996 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e5998 jne 0x104e59a3 */
  if (!C.zf) goto L_104e59a3;
  /* 104e599a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e599d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e59a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_104e59a3:;
  /* 104e59a3 jmp 0x104e597d */
  goto L_104e597d;
L_104e59a5:;
  /* 104e59a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e59a8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e59ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e59ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104e59b1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 104e59b6 push 0x1050abe4 */
  push32((uint32_t)(0x1050abe4u));
  /* 104e59bb push 2 */
  push32((uint32_t)(0x2u));
  /* 104e59bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e59c0 push edx */
  push32((uint32_t)(EDX));
  /* 104e59c1 call 0x104e3220 */
  push32(0x104e59c6u); f_104e3220();
  /* 104e59c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e59c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e59cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e59d0 jne 0x104e59e0 */
  if (!C.zf) goto L_104e59e0;
  /* 104e59d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e59d5 push eax */
  push32((uint32_t)(EAX));
  /* 104e59d6 call dword ptr [0x105122ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122ec))), 0x104e59dcu);
  /* 104e59dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e59de jmp 0x104e5a05 */
  goto L_104e5a05;
L_104e59e0:;
  /* 104e59e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e59e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e59e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e59e7 push edx */
  push32((uint32_t)(EDX));
  /* 104e59e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e59eb push eax */
  push32((uint32_t)(EAX));
  /* 104e59ec call 0x104e9b00 */
  push32(0x104e59f1u); f_104e9b00();
  /* 104e59f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e59f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e59f7 push ecx */
  push32((uint32_t)(ECX));
  /* 104e59f8 call dword ptr [0x105122ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122ec))), 0x104e59feu);
  /* 104e59fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5a01 jmp 0x104e5a05 */
  goto L_104e5a05;
L_104e5a03:;
  /* 104e5a03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e5a05:;
  /* 104e5a05 mov esp, ebp */
  ESP = (EBP);
  /* 104e5a07 pop ebp */
  EBP = (pop32());
  /* 104e5a08 ret  */
  ESPCHK(0x104e57f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a10 @ 0x104e5a10 (77 bytes, 25 insns) */
void f_104e5a10(void) {
  FTRACE(0x104e5a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5a10 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5a11 mov ebp, esp */
  EBP = (ESP);
  /* 104e5a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5a15 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104e5a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e5a1c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5a20 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 104e5a23 push eax */
  push32((uint32_t)(EAX));
  /* 104e5a24 call dword ptr [0x10512304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512304))), 0x104e5a2au);
  /* 104e5a2a mov dword ptr [0x10510e6c], eax */
  w32((uint32_t)(0x10510e6c), (EAX));
  /* 104e5a2f cmp dword ptr [0x10510e6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10510e6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5a36 jne 0x104e5a3c */
  if (!C.zf) goto L_104e5a3c;
  /* 104e5a38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e5a3a jmp 0x104e5a5b */
  goto L_104e5a5b;
L_104e5a3c:;
  /* 104e5a3c call 0x104e74c0 */
  push32(0x104e5a41u); f_104e74c0();
  /* 104e5a41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e5a43 jne 0x104e5a56 */
  if (!C.zf) goto L_104e5a56;
  /* 104e5a45 mov ecx, dword ptr [0x10510e6c] */
  ECX = (r32((uint32_t)(0x10510e6c)));
  /* 104e5a4b push ecx */
  push32((uint32_t)(ECX));
  /* 104e5a4c call dword ptr [0x10512300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512300))), 0x104e5a52u);
  /* 104e5a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e5a54 jmp 0x104e5a5b */
  goto L_104e5a5b;
L_104e5a56:;
  /* 104e5a56 mov eax, 1 */
  EAX = (0x1u);
L_104e5a5b:;
  /* 104e5a5b pop ebp */
  EBP = (pop32());
  /* 104e5a5c ret  */
  ESPCHK(0x104e5a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a60 @ 0x104e5a60 (156 bytes, 48 insns) */
void f_104e5a60(void) {
  FTRACE(0x104e5a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5a60 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5a61 mov ebp, esp */
  EBP = (ESP);
  /* 104e5a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e5a66 mov eax, dword ptr [0x10510e68] */
  EAX = (r32((uint32_t)(0x10510e68)));
  /* 104e5a6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e5a6e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104e5a75 jmp 0x104e5a80 */
  goto L_104e5a80;
L_104e5a77:;
  /* 104e5a77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5a7a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5a7d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104e5a80:;
  /* 104e5a80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5a83 cmp edx, dword ptr [0x10510e64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10510e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5a89 jge 0x104e5ad6 */
  if ((C.sf==C.of)) goto L_104e5ad6;
  /* 104e5a8b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 104e5a90 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 104e5a95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5a98 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 104e5a9b push ecx */
  push32((uint32_t)(ECX));
  /* 104e5a9c call dword ptr [0x1051230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051230c))), 0x104e5aa2u);
  /* 104e5aa2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104e5aa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5aa9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5aac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104e5aaf push eax */
  push32((uint32_t)(EAX));
  /* 104e5ab0 call dword ptr [0x1051230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051230c))), 0x104e5ab6u);
  /* 104e5ab6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5ab9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104e5abc push edx */
  push32((uint32_t)(EDX));
  /* 104e5abd push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5abf mov eax, dword ptr [0x10510e6c] */
  EAX = (r32((uint32_t)(0x10510e6c)));
  /* 104e5ac4 push eax */
  push32((uint32_t)(EAX));
  /* 104e5ac5 call dword ptr [0x10512308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512308))), 0x104e5acbu);
  /* 104e5acb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5ace add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5ad1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104e5ad4 jmp 0x104e5a77 */
  goto L_104e5a77;
L_104e5ad6:;
  /* 104e5ad6 mov edx, dword ptr [0x10510e68] */
  EDX = (r32((uint32_t)(0x10510e68)));
  /* 104e5adc push edx */
  push32((uint32_t)(EDX));
  /* 104e5add push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5adf mov eax, dword ptr [0x10510e6c] */
  EAX = (r32((uint32_t)(0x10510e6c)));
  /* 104e5ae4 push eax */
  push32((uint32_t)(EAX));
  /* 104e5ae5 call dword ptr [0x10512308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512308))), 0x104e5aebu);
  /* 104e5aeb mov ecx, dword ptr [0x10510e6c] */
  ECX = (r32((uint32_t)(0x10510e6c)));
  /* 104e5af1 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5af2 call dword ptr [0x10512300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512300))), 0x104e5af8u);
  /* 104e5af8 mov esp, ebp */
  ESP = (EBP);
  /* 104e5afa pop ebp */
  EBP = (pop32());
  /* 104e5afb ret  */
  ESPCHK(0x104e5a60u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x104e5b00 (73 bytes, 19 insns) */
void f_104e5b00(void) {
  FTRACE(0x104e5b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5b00 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5b01 mov ebp, esp */
  EBP = (ESP);
  /* 104e5b03 cmp dword ptr [0x1050f4b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5b0a je 0x104e5b1e */
  if (C.zf) goto L_104e5b1e;
  /* 104e5b0c cmp dword ptr [0x1050f4b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5b13 jne 0x104e5b47 */
  if (!C.zf) goto L_104e5b47;
  /* 104e5b15 cmp dword ptr [0x1050f4b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5b1c jne 0x104e5b47 */
  if (!C.zf) goto L_104e5b47;
L_104e5b1e:;
  /* 104e5b1e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 104e5b23 call 0x104e5b50 */
  push32(0x104e5b28u); f_104e5b50();
  /* 104e5b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5b2b cmp dword ptr [0x1050f620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5b32 je 0x104e5b3a */
  if (C.zf) goto L_104e5b3a;
  /* 104e5b34 call dword ptr [0x1050f620] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f620))), 0x104e5b3au);
L_104e5b3a:;
  /* 104e5b3a push 0xff */
  push32((uint32_t)(0xffu));
  /* 104e5b3f call 0x104e5b50 */
  push32(0x104e5b44u); f_104e5b50();
  /* 104e5b44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e5b47:;
  /* 104e5b47 pop ebp */
  EBP = (pop32());
  /* 104e5b48 ret  */
  ESPCHK(0x104e5b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b50 @ 0x104e5b50 (447 bytes, 131 insns) */
void f_104e5b50(void) {
  FTRACE(0x104e5b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5b50 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5b51 mov ebp, esp */
  EBP = (ESP);
  /* 104e5b53 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e5b59 push ebx */
  push32((uint32_t)(EBX));
  /* 104e5b5a push esi */
  push32((uint32_t)(ESI));
  /* 104e5b5b push edi */
  push32((uint32_t)(EDI));
  /* 104e5b5c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 104e5b63 jmp 0x104e5b6e */
  goto L_104e5b6e;
L_104e5b65:;
  /* 104e5b65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5b68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5b6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104e5b6e:;
  /* 104e5b6e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5b72 jae 0x104e5b87 */
  if (!C.cf) goto L_104e5b87;
  /* 104e5b74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5b77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5b7a cmp edx, dword ptr [ecx*8 + 0x1050dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1050dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5b81 jne 0x104e5b85 */
  if (!C.zf) goto L_104e5b85;
  /* 104e5b83 jmp 0x104e5b87 */
  goto L_104e5b87;
L_104e5b85:;
  /* 104e5b85 jmp 0x104e5b65 */
  goto L_104e5b65;
L_104e5b87:;
  /* 104e5b87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5b8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5b8d cmp ecx, dword ptr [eax*8 + 0x1050dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1050dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5b94 jne 0x104e5d08 */
  if (!C.zf) goto L_104e5d08;
  /* 104e5b9a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5ba1 je 0x104e5bc4 */
  if (C.zf) goto L_104e5bc4;
  /* 104e5ba3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5ba6 mov eax, dword ptr [edx*8 + 0x1050dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1050dab4)));
  /* 104e5bad push eax */
  push32((uint32_t)(EAX));
  /* 104e5bae push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5bb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e5bb6 call 0x104e22e0 */
  push32(0x104e5bbbu); f_104e22e0();
  /* 104e5bbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5bbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5bc1 jne 0x104e5bc4 */
  if (!C.zf) goto L_104e5bc4;
  /* 104e5bc3 int3  */
  x86_unimpl("int3 @ 0x104e5bc3");
L_104e5bc4:;
  /* 104e5bc4 cmp dword ptr [0x1050f4b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5bcb je 0x104e5bdf */
  if (C.zf) goto L_104e5bdf;
  /* 104e5bcd cmp dword ptr [0x1050f4b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5bd4 jne 0x104e5c18 */
  if (!C.zf) goto L_104e5c18;
  /* 104e5bd6 cmp dword ptr [0x1050f4b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1050f4b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5bdd jne 0x104e5c18 */
  if (!C.zf) goto L_104e5c18;
L_104e5bdf:;
  /* 104e5bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5be1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 104e5be4 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5be5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5be8 mov eax, dword ptr [edx*8 + 0x1050dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1050dab4)));
  /* 104e5bef push eax */
  push32((uint32_t)(EAX));
  /* 104e5bf0 call 0x104e6050 */
  push32(0x104e5bf5u); f_104e6050();
  /* 104e5bf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5bf8 push eax */
  push32((uint32_t)(EAX));
  /* 104e5bf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5bfc mov edx, dword ptr [ecx*8 + 0x1050dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1050dab4)));
  /* 104e5c03 push edx */
  push32((uint32_t)(EDX));
  /* 104e5c04 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 104e5c06 call dword ptr [0x10512284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512284))), 0x104e5c0cu);
  /* 104e5c0c push eax */
  push32((uint32_t)(EAX));
  /* 104e5c0d call dword ptr [0x10512288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512288))), 0x104e5c13u);
  /* 104e5c13 jmp 0x104e5d08 */
  goto L_104e5d08;
L_104e5c18:;
  /* 104e5c18 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5c1f je 0x104e5d08 */
  if (C.zf) goto L_104e5d08;
  /* 104e5c25 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 104e5c2a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 104e5c30 push eax */
  push32((uint32_t)(EAX));
  /* 104e5c31 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5c33 call dword ptr [0x105122a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122a0))), 0x104e5c39u);
  /* 104e5c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e5c3b jne 0x104e5c51 */
  if (!C.zf) goto L_104e5c51;
  /* 104e5c3d push 0x1050a44c */
  push32((uint32_t)(0x1050a44cu));
  /* 104e5c42 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 104e5c48 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5c49 call 0x104e61d0 */
  push32(0x104e5c4eu); f_104e61d0();
  /* 104e5c4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e5c51:;
  /* 104e5c51 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 104e5c57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104e5c5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5c5d push eax */
  push32((uint32_t)(EAX));
  /* 104e5c5e call 0x104e6050 */
  push32(0x104e5c63u); f_104e6050();
  /* 104e5c63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5c66 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5c69 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5c6c jbe 0x104e5c9a */
  if ((C.cf||C.zf)) goto L_104e5c9a;
  /* 104e5c6e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 104e5c74 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5c75 call 0x104e6050 */
  push32(0x104e5c7au); f_104e6050();
  /* 104e5c7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5c7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5c80 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 104e5c84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e5c87 push 3 */
  push32((uint32_t)(0x3u));
  /* 104e5c89 push 0x1050a448 */
  push32((uint32_t)(0x1050a448u));
  /* 104e5c8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5c91 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5c92 call 0x104e6a40 */
  push32(0x104e5c97u); f_104e6a40();
  /* 104e5c97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e5c9a:;
  /* 104e5c9a push 0x1050aea0 */
  push32((uint32_t)(0x1050aea0u));
  /* 104e5c9f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 104e5ca5 push edx */
  push32((uint32_t)(EDX));
  /* 104e5ca6 call 0x104e61d0 */
  push32(0x104e5cabu); f_104e61d0();
  /* 104e5cab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5cae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5cb1 push eax */
  push32((uint32_t)(EAX));
  /* 104e5cb2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 104e5cb8 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5cb9 call 0x104e61e0 */
  push32(0x104e5cbeu); f_104e61e0();
  /* 104e5cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5cc1 push 0x1050a3c0 */
  push32((uint32_t)(0x1050a3c0u));
  /* 104e5cc6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 104e5ccc push edx */
  push32((uint32_t)(EDX));
  /* 104e5ccd call 0x104e61e0 */
  push32(0x104e5cd2u); f_104e61e0();
  /* 104e5cd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5cd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5cd8 mov ecx, dword ptr [eax*8 + 0x1050dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1050dab4)));
  /* 104e5cdf push ecx */
  push32((uint32_t)(ECX));
  /* 104e5ce0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 104e5ce6 push edx */
  push32((uint32_t)(EDX));
  /* 104e5ce7 call 0x104e61e0 */
  push32(0x104e5cecu); f_104e61e0();
  /* 104e5cec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5cef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 104e5cf4 push 0x1050ae78 */
  push32((uint32_t)(0x1050ae78u));
  /* 104e5cf9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 104e5cff push eax */
  push32((uint32_t)(EAX));
  /* 104e5d00 call 0x104e6980 */
  push32(0x104e5d05u); f_104e6980();
  /* 104e5d05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e5d08:;
  /* 104e5d08 pop edi */
  EDI = (pop32());
  /* 104e5d09 pop esi */
  ESI = (pop32());
  /* 104e5d0a pop ebx */
  EBX = (pop32());
  /* 104e5d0b mov esp, ebp */
  ESP = (EBP);
  /* 104e5d0d pop ebp */
  EBP = (pop32());
  /* 104e5d0e ret  */
  ESPCHK(0x104e5b50u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x104e5d10 (80 bytes, 27 insns) */
void f_104e5d10(void) {
  FTRACE(0x104e5d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5d10 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5d11 mov ebp, esp */
  EBP = (ESP);
  /* 104e5d13 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5d14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104e5d1b jmp 0x104e5d26 */
  goto L_104e5d26;
L_104e5d1d:;
  /* 104e5d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5d20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e5d26:;
  /* 104e5d26 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5d2a jae 0x104e5d3f */
  if (!C.cf) goto L_104e5d3f;
  /* 104e5d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5d2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5d32 cmp edx, dword ptr [ecx*8 + 0x1050dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1050dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5d39 jne 0x104e5d3d */
  if (!C.zf) goto L_104e5d3d;
  /* 104e5d3b jmp 0x104e5d3f */
  goto L_104e5d3f;
L_104e5d3d:;
  /* 104e5d3d jmp 0x104e5d1d */
  goto L_104e5d1d;
L_104e5d3f:;
  /* 104e5d3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5d42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5d45 cmp ecx, dword ptr [eax*8 + 0x1050dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1050dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5d4c jne 0x104e5d5a */
  if (!C.zf) goto L_104e5d5a;
  /* 104e5d4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5d51 mov eax, dword ptr [edx*8 + 0x1050dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1050dab4)));
  /* 104e5d58 jmp 0x104e5d5c */
  goto L_104e5d5c;
L_104e5d5a:;
  /* 104e5d5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e5d5c:;
  /* 104e5d5c mov esp, ebp */
  ESP = (EBP);
  /* 104e5d5e pop ebp */
  EBP = (pop32());
  /* 104e5d5f ret  */
  ESPCHK(0x104e5d10u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x104e5d60 (66 bytes, 28 insns) */
void f_104e5d60(void) {
  FTRACE(0x104e5d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5d60 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5d61 mov ebp, esp */
  EBP = (ESP);
  /* 104e5d63 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5d67 jne 0x104e5d87 */
  if (!C.zf) goto L_104e5d87;
  /* 104e5d69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5d6d jge 0x104e5d87 */
  if ((C.sf==C.of)) goto L_104e5d87;
  /* 104e5d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 104e5d71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5d74 push eax */
  push32((uint32_t)(EAX));
  /* 104e5d75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5d78 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5d79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5d7c push edx */
  push32((uint32_t)(EDX));
  /* 104e5d7d call 0x104e5db0 */
  push32(0x104e5d82u); f_104e5db0();
  /* 104e5d82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5d85 jmp 0x104e5d9d */
  goto L_104e5d9d;
L_104e5d87:;
  /* 104e5d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5d89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5d8c push eax */
  push32((uint32_t)(EAX));
  /* 104e5d8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5d90 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5d91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5d94 push edx */
  push32((uint32_t)(EDX));
  /* 104e5d95 call 0x104e5db0 */
  push32(0x104e5d9au); f_104e5db0();
  /* 104e5d9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e5d9d:;
  /* 104e5d9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5da0 pop ebp */
  EBP = (pop32());
  /* 104e5da1 ret  */
  ESPCHK(0x104e5d60u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x104e5db0 (194 bytes, 71 insns) */
void f_104e5db0(void) {
  FTRACE(0x104e5db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5db0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5db1 mov ebp, esp */
  EBP = (ESP);
  /* 104e5db3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e5db6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5db9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e5dbc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5dc0 je 0x104e5dd9 */
  if (C.zf) goto L_104e5dd9;
  /* 104e5dc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5dc5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 104e5dc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5dcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5dce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e5dd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5dd4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104e5dd6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104e5dd9:;
  /* 104e5dd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5ddc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_104e5ddf:;
  /* 104e5ddf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5de2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e5de4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104e5de7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104e5dea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5ded xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e5def div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104e5df2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104e5df5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5df9 jbe 0x104e5e11 */
  if ((C.cf||C.zf)) goto L_104e5e11;
  /* 104e5dfb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5dfe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5e01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5e04 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104e5e06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5e09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5e0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e5e0f jmp 0x104e5e25 */
  goto L_104e5e25;
L_104e5e11:;
  /* 104e5e11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5e14 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5e17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5e1a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104e5e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5e1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5e22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104e5e25:;
  /* 104e5e25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5e29 ja 0x104e5ddf */
  if ((!C.cf&&!C.zf)) goto L_104e5ddf;
  /* 104e5e2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5e2e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104e5e31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5e34 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e5e37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e5e3a:;
  /* 104e5e3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5e3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e5e3f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 104e5e42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5e45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5e48 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e5e4a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104e5e4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5e4f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 104e5e52 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 104e5e54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5e57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e5e5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e5e5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5e60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5e63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e5e66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5e69 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5e6c jb 0x104e5e3a */
  if (C.cf) goto L_104e5e3a;
  /* 104e5e6e mov esp, ebp */
  ESP = (EBP);
  /* 104e5e70 pop ebp */
  EBP = (pop32());
  /* 104e5e71 ret  */
  ESPCHK(0x104e5db0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x104e5e80 (63 bytes, 24 insns) */
void f_104e5e80(void) {
  FTRACE(0x104e5e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5e80 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5e81 mov ebp, esp */
  EBP = (ESP);
  /* 104e5e83 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5e84 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5e88 jne 0x104e5e99 */
  if (!C.zf) goto L_104e5e99;
  /* 104e5e8a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5e8e jge 0x104e5e99 */
  if ((C.sf==C.of)) goto L_104e5e99;
  /* 104e5e90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104e5e97 jmp 0x104e5ea0 */
  goto L_104e5ea0;
L_104e5e99:;
  /* 104e5e99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104e5ea0:;
  /* 104e5ea0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5ea3 push eax */
  push32((uint32_t)(EAX));
  /* 104e5ea4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5ea7 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5ea8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5eab push edx */
  push32((uint32_t)(EDX));
  /* 104e5eac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5eaf push eax */
  push32((uint32_t)(EAX));
  /* 104e5eb0 call 0x104e5db0 */
  push32(0x104e5eb5u); f_104e5db0();
  /* 104e5eb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5eb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5ebb mov esp, ebp */
  ESP = (EBP);
  /* 104e5ebd pop ebp */
  EBP = (pop32());
  /* 104e5ebe ret  */
  ESPCHK(0x104e5e80u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x104e5ec0 (30 bytes, 14 insns) */
void f_104e5ec0(void) {
  FTRACE(0x104e5ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5ec1 mov ebp, esp */
  EBP = (ESP);
  /* 104e5ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e5ec5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5ec8 push eax */
  push32((uint32_t)(EAX));
  /* 104e5ec9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5ecc push ecx */
  push32((uint32_t)(ECX));
  /* 104e5ecd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5ed0 push edx */
  push32((uint32_t)(EDX));
  /* 104e5ed1 call 0x104e5db0 */
  push32(0x104e5ed6u); f_104e5db0();
  /* 104e5ed6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5ed9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5edc pop ebp */
  EBP = (pop32());
  /* 104e5edd ret  */
  ESPCHK(0x104e5ec0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x104e5ee0 (72 bytes, 28 insns) */
void f_104e5ee0(void) {
  FTRACE(0x104e5ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5ee1 mov ebp, esp */
  EBP = (ESP);
  /* 104e5ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5ee4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5ee8 jne 0x104e5f01 */
  if (!C.zf) goto L_104e5f01;
  /* 104e5eea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5eee jg 0x104e5f01 */
  if ((!C.zf&&C.sf==C.of)) goto L_104e5f01;
  /* 104e5ef0 jl 0x104e5ef8 */
  if ((C.sf!=C.of)) goto L_104e5ef8;
  /* 104e5ef2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5ef6 jae 0x104e5f01 */
  if (!C.cf) goto L_104e5f01;
L_104e5ef8:;
  /* 104e5ef8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104e5eff jmp 0x104e5f08 */
  goto L_104e5f08;
L_104e5f01:;
  /* 104e5f01 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104e5f08:;
  /* 104e5f08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5f0b push eax */
  push32((uint32_t)(EAX));
  /* 104e5f0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e5f0f push ecx */
  push32((uint32_t)(ECX));
  /* 104e5f10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5f13 push edx */
  push32((uint32_t)(EDX));
  /* 104e5f14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5f17 push eax */
  push32((uint32_t)(EAX));
  /* 104e5f18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5f1b push ecx */
  push32((uint32_t)(ECX));
  /* 104e5f1c call 0x104e5f30 */
  push32(0x104e5f21u); f_104e5f30();
  /* 104e5f21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5f24 mov esp, ebp */
  ESP = (EBP);
  /* 104e5f26 pop ebp */
  EBP = (pop32());
  /* 104e5f27 ret  */
  ESPCHK(0x104e5ee0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x104e5f30 (242 bytes, 91 insns) */
void f_104e5f30(void) {
  FTRACE(0x104e5f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e5f30 push ebp */
  push32((uint32_t)(EBP));
  /* 104e5f31 mov ebp, esp */
  EBP = (ESP);
  /* 104e5f33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e5f36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e5f39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e5f3c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5f40 je 0x104e5f64 */
  if (C.zf) goto L_104e5f64;
  /* 104e5f42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5f45 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 104e5f48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5f4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5f4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e5f51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5f54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104e5f56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5f59 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5f5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104e5f5e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104e5f61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_104e5f64:;
  /* 104e5f64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5f67 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104e5f6a:;
  /* 104e5f6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e5f6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e5f6f push ecx */
  push32((uint32_t)(ECX));
  /* 104e5f70 push eax */
  push32((uint32_t)(EAX));
  /* 104e5f71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5f74 push edx */
  push32((uint32_t)(EDX));
  /* 104e5f75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5f78 push eax */
  push32((uint32_t)(EAX));
  /* 104e5f79 call 0x104e9eb0 */
  push32(0x104e5f7eu); f_104e9eb0();
  /* 104e5f7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e5f81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e5f84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e5f86 push edx */
  push32((uint32_t)(EDX));
  /* 104e5f87 push ecx */
  push32((uint32_t)(ECX));
  /* 104e5f88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e5f8b push eax */
  push32((uint32_t)(EAX));
  /* 104e5f8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e5f8f push ecx */
  push32((uint32_t)(ECX));
  /* 104e5f90 call 0x104e9e40 */
  push32(0x104e5f95u); f_104e9e40();
  /* 104e5f95 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104e5f98 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 104e5f9b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5f9f jbe 0x104e5fb7 */
  if ((C.cf||C.zf)) goto L_104e5fb7;
  /* 104e5fa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5fa4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5fa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5faa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104e5fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5faf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5fb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104e5fb5 jmp 0x104e5fcb */
  goto L_104e5fcb;
L_104e5fb7:;
  /* 104e5fb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e5fba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5fbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5fc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104e5fc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5fc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e5fc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104e5fcb:;
  /* 104e5fcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5fcf ja 0x104e5f6a */
  if ((!C.cf&&!C.zf)) goto L_104e5f6a;
  /* 104e5fd1 jb 0x104e5fd9 */
  if (C.cf) goto L_104e5fd9;
  /* 104e5fd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e5fd7 ja 0x104e5f6a */
  if ((!C.cf&&!C.zf)) goto L_104e5f6a;
L_104e5fd9:;
  /* 104e5fd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5fdc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104e5fdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5fe2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e5fe5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e5fe8:;
  /* 104e5fe8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5feb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e5fed mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 104e5ff0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e5ff3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5ff6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e5ff8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104e5ffa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e5ffd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 104e6000 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 104e6002 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6005 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e6008 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104e600b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e600e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6011 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e6014 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6017 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e601a jb 0x104e5fe8 */
  if (C.cf) goto L_104e5fe8;
  /* 104e601c mov esp, ebp */
  ESP = (EBP);
  /* 104e601e pop ebp */
  EBP = (pop32());
  /* 104e601f ret 0x14 */
  ESPCHK(0x104e5f30u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x104e6030 (31 bytes, 15 insns) */
void f_104e6030(void) {
  FTRACE(0x104e6030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6030 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6031 mov ebp, esp */
  EBP = (ESP);
  /* 104e6033 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e6035 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e6038 push eax */
  push32((uint32_t)(EAX));
  /* 104e6039 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e603c push ecx */
  push32((uint32_t)(ECX));
  /* 104e603d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e6040 push edx */
  push32((uint32_t)(EDX));
  /* 104e6041 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6044 push eax */
  push32((uint32_t)(EAX));
  /* 104e6045 call 0x104e5f30 */
  push32(0x104e604au); f_104e5f30();
  /* 104e604a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e604d pop ebp */
  EBP = (pop32());
  /* 104e604e ret  */
  ESPCHK(0x104e6030u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x104e6050 (123 bytes, 44 insns) */
void f_104e6050(void) {
  FTRACE(0x104e6050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6050 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104e6054 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104e605a je 0x104e6070 */
  if (C.zf) goto L_104e6070;
L_104e605c:;
  /* 104e605c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 104e605e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104e605f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104e6061 je 0x104e60a3 */
  if (C.zf) goto L_104e60a3;
  /* 104e6063 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104e6069 jne 0x104e605c */
  if (!C.zf) goto L_104e605c;
  /* 104e606b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_104e6070:;
  /* 104e6070 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 104e6072 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 104e6077 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6079 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e607c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e607e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6081 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 104e6086 je 0x104e6070 */
  if (C.zf) goto L_104e6070;
  /* 104e6088 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 104e608b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104e608d je 0x104e60c1 */
  if (C.zf) goto L_104e60c1;
  /* 104e608f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 104e6091 je 0x104e60b7 */
  if (C.zf) goto L_104e60b7;
  /* 104e6093 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 104e6098 je 0x104e60ad */
  if (C.zf) goto L_104e60ad;
  /* 104e609a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 104e609f je 0x104e60a3 */
  if (C.zf) goto L_104e60a3;
  /* 104e60a1 jmp 0x104e6070 */
  goto L_104e6070;
L_104e60a3:;
  /* 104e60a3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 104e60a6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104e60aa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e60ac ret  */
  ESPCHK(0x104e6050u, _esp0);
  ESP += 4; return;
L_104e60ad:;
  /* 104e60ad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 104e60b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104e60b4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e60b6 ret  */
  ESPCHK(0x104e6050u, _esp0);
  ESP += 4; return;
L_104e60b7:;
  /* 104e60b7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 104e60ba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104e60be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e60c0 ret  */
  ESPCHK(0x104e6050u, _esp0);
  ESP += 4; return;
L_104e60c1:;
  /* 104e60c1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 104e60c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104e60c8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e60ca ret  */
  ESPCHK(0x104e6050u, _esp0);
  ESP += 4; return;
}

/* FUN_100060d0 @ 0x104e60d0 (249 bytes, 93 insns) */
void f_104e60d0(void) {
  FTRACE(0x104e60d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e60d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e60d1 mov ebp, esp */
  EBP = (ESP);
  /* 104e60d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e60d6 push ebx */
  push32((uint32_t)(EBX));
  /* 104e60d7 push esi */
  push32((uint32_t)(ESI));
  /* 104e60d8 push edi */
  push32((uint32_t)(EDI));
  /* 104e60d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 104e60dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104e60df lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 104e60e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_104e60e5:;
  /* 104e60e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e60e9 jne 0x104e6109 */
  if (!C.zf) goto L_104e6109;
  /* 104e60eb push 0x1050aed8 */
  push32((uint32_t)(0x1050aed8u));
  /* 104e60f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e60f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 104e60f4 push 0x1050aecc */
  push32((uint32_t)(0x1050aeccu));
  /* 104e60f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e60fb call 0x104e22e0 */
  push32(0x104e6100u); f_104e22e0();
  /* 104e6100 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6103 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6106 jne 0x104e6109 */
  if (!C.zf) goto L_104e6109;
  /* 104e6108 int3  */
  x86_unimpl("int3 @ 0x104e6108");
L_104e6109:;
  /* 104e6109 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e610b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e610d jne 0x104e60e5 */
  if (!C.zf) goto L_104e60e5;
L_104e610f:;
  /* 104e610f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6113 jne 0x104e6133 */
  if (!C.zf) goto L_104e6133;
  /* 104e6115 push 0x1050aebc */
  push32((uint32_t)(0x1050aebcu));
  /* 104e611a push 0 */
  push32((uint32_t)(0x0u));
  /* 104e611c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 104e611e push 0x1050aecc */
  push32((uint32_t)(0x1050aeccu));
  /* 104e6123 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e6125 call 0x104e22e0 */
  push32(0x104e612au); f_104e22e0();
  /* 104e612a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e612d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6130 jne 0x104e6133 */
  if (!C.zf) goto L_104e6133;
  /* 104e6132 int3  */
  x86_unimpl("int3 @ 0x104e6132");
L_104e6133:;
  /* 104e6133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e6135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e6137 jne 0x104e610f */
  if (!C.zf) goto L_104e610f;
  /* 104e6139 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e613c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 104e6143 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6149 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104e614c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e614f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6152 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104e6154 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6157 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e615a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 104e615d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104e6160 push edx */
  push32((uint32_t)(EDX));
  /* 104e6161 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e6164 push eax */
  push32((uint32_t)(EAX));
  /* 104e6165 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6168 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6169 call 0x104ea1b0 */
  push32(0x104e616eu); f_104ea1b0();
  /* 104e616e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6171 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104e6174 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6177 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e617a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e617d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6180 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 104e6183 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6186 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e618a jl 0x104e61ae */
  if ((C.sf!=C.of)) goto L_104e61ae;
  /* 104e618c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e618f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e6191 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 104e6194 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e6196 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e619c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 104e619f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e61a2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e61a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e61a7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e61aa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 104e61ac jmp 0x104e61bf */
  goto L_104e61bf;
L_104e61ae:;
  /* 104e61ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e61b1 push eax */
  push32((uint32_t)(EAX));
  /* 104e61b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e61b4 call 0x104e9f30 */
  push32(0x104e61b9u); f_104e9f30();
  /* 104e61b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e61bc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_104e61bf:;
  /* 104e61bf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e61c2 pop edi */
  EDI = (pop32());
  /* 104e61c3 pop esi */
  ESI = (pop32());
  /* 104e61c4 pop ebx */
  EBX = (pop32());
  /* 104e61c5 mov esp, ebp */
  ESP = (EBP);
  /* 104e61c7 pop ebp */
  EBP = (pop32());
  /* 104e61c8 ret  */
  ESPCHK(0x104e60d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x104e61d0 (7 bytes, 3 insns) */
void f_104e61d0(void) {
  FTRACE(0x104e61d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e61d0 push edi */
  push32((uint32_t)(EDI));
  /* 104e61d1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 104e61d5 jmp 0x104e6241 */
  jmp_ind(0x104e6241u); return;
}

/* FUN_100061e0 @ 0x104e61e0 (224 bytes, 84 insns) */
void f_104e61e0(void) {
  FTRACE(0x104e61e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e61e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104e61e4 push edi */
  push32((uint32_t)(EDI));
  /* 104e61e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104e61eb je 0x104e61fc */
  if (C.zf) goto L_104e61fc;
L_104e61ed:;
  /* 104e61ed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 104e61ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104e61f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104e61f2 je 0x104e622f */
  if (C.zf) goto L_104e622f;
  /* 104e61f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104e61fa jne 0x104e61ed */
  if (!C.zf) goto L_104e61ed;
L_104e61fc:;
  /* 104e61fc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 104e61fe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 104e6203 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6205 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e6208 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e620a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e620d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 104e6212 je 0x104e61fc */
  if (C.zf) goto L_104e61fc;
  /* 104e6214 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 104e6217 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104e6219 je 0x104e623e */
  if (C.zf) goto L_104e623e;
  /* 104e621b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 104e621d je 0x104e6239 */
  if (C.zf) goto L_104e6239;
  /* 104e621f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 104e6224 je 0x104e6234 */
  if (C.zf) goto L_104e6234;
  /* 104e6226 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 104e622b je 0x104e622f */
  if (C.zf) goto L_104e622f;
  /* 104e622d jmp 0x104e61fc */
  goto L_104e61fc;
L_104e622f:;
  /* 104e622f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 104e6232 jmp 0x104e6241 */
  goto L_104e6241;
L_104e6234:;
  /* 104e6234 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 104e6237 jmp 0x104e6241 */
  goto L_104e6241;
L_104e6239:;
  /* 104e6239 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 104e623c jmp 0x104e6241 */
  goto L_104e6241;
L_104e623e:;
  /* 104e623e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_104e6241:;
  /* 104e6241 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 104e6245 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104e624b je 0x104e6266 */
  if (C.zf) goto L_104e6266;
L_104e624d:;
  /* 104e624d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104e624f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104e6250 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 104e6252 je 0x104e62b8 */
  if (C.zf) goto L_104e62b8;
  /* 104e6254 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 104e6256 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104e6257 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104e625d jne 0x104e624d */
  if (!C.zf) goto L_104e624d;
  /* 104e625f jmp 0x104e6266 */
  goto L_104e6266;
L_104e6261:;
  /* 104e6261 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104e6263 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_104e6266:;
  /* 104e6266 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 104e626b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 104e626d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e626f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e6272 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e6274 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e6276 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6279 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 104e627e je 0x104e6261 */
  if (C.zf) goto L_104e6261;
  /* 104e6280 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 104e6282 je 0x104e62b8 */
  if (C.zf) goto L_104e62b8;
  /* 104e6284 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 104e6286 je 0x104e62af */
  if (C.zf) goto L_104e62af;
  /* 104e6288 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 104e628e je 0x104e62a2 */
  if (C.zf) goto L_104e62a2;
  /* 104e6290 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 104e6296 je 0x104e629a */
  if (C.zf) goto L_104e629a;
  /* 104e6298 jmp 0x104e6261 */
  goto L_104e6261;
L_104e629a:;
  /* 104e629a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104e629c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104e62a0 pop edi */
  EDI = (pop32());
  /* 104e62a1 ret  */
  ESPCHK(0x104e61e0u, _esp0);
  ESP += 4; return;
L_104e62a2:;
  /* 104e62a2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 104e62a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104e62a9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 104e62ad pop edi */
  EDI = (pop32());
  /* 104e62ae ret  */
  ESPCHK(0x104e61e0u, _esp0);
  ESP += 4; return;
L_104e62af:;
  /* 104e62af mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 104e62b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104e62b6 pop edi */
  EDI = (pop32());
  /* 104e62b7 ret  */
  ESPCHK(0x104e61e0u, _esp0);
  ESP += 4; return;
L_104e62b8:;
  /* 104e62b8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 104e62ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104e62be pop edi */
  EDI = (pop32());
  /* 104e62bf ret  */
  ESPCHK(0x104e61e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062c0 @ 0x104e62c0 (243 bytes, 91 insns) */
void f_104e62c0(void) {
  FTRACE(0x104e62c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e62c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e62c1 mov ebp, esp */
  EBP = (ESP);
  /* 104e62c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e62c6 push ebx */
  push32((uint32_t)(EBX));
  /* 104e62c7 push esi */
  push32((uint32_t)(ESI));
  /* 104e62c8 push edi */
  push32((uint32_t)(EDI));
  /* 104e62c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 104e62cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104e62cf:;
  /* 104e62cf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e62d3 jne 0x104e62f3 */
  if (!C.zf) goto L_104e62f3;
  /* 104e62d5 push 0x1050aed8 */
  push32((uint32_t)(0x1050aed8u));
  /* 104e62da push 0 */
  push32((uint32_t)(0x0u));
  /* 104e62dc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 104e62de push 0x1050aee8 */
  push32((uint32_t)(0x1050aee8u));
  /* 104e62e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e62e5 call 0x104e22e0 */
  push32(0x104e62eau); f_104e22e0();
  /* 104e62ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e62ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e62f0 jne 0x104e62f3 */
  if (!C.zf) goto L_104e62f3;
  /* 104e62f2 int3  */
  x86_unimpl("int3 @ 0x104e62f2");
L_104e62f3:;
  /* 104e62f3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e62f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e62f7 jne 0x104e62cf */
  if (!C.zf) goto L_104e62cf;
L_104e62f9:;
  /* 104e62f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e62fd jne 0x104e631d */
  if (!C.zf) goto L_104e631d;
  /* 104e62ff push 0x1050aebc */
  push32((uint32_t)(0x1050aebcu));
  /* 104e6304 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e6306 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 104e6308 push 0x1050aee8 */
  push32((uint32_t)(0x1050aee8u));
  /* 104e630d push 2 */
  push32((uint32_t)(0x2u));
  /* 104e630f call 0x104e22e0 */
  push32(0x104e6314u); f_104e22e0();
  /* 104e6314 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6317 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e631a jne 0x104e631d */
  if (!C.zf) goto L_104e631d;
  /* 104e631c int3  */
  x86_unimpl("int3 @ 0x104e631c");
L_104e631d:;
  /* 104e631d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e631f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e6321 jne 0x104e62f9 */
  if (!C.zf) goto L_104e62f9;
  /* 104e6323 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6326 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 104e632d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6330 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6333 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104e6336 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6339 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e633c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104e633e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6341 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e6344 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 104e6347 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104e634a push ecx */
  push32((uint32_t)(ECX));
  /* 104e634b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e634e push edx */
  push32((uint32_t)(EDX));
  /* 104e634f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6352 push eax */
  push32((uint32_t)(EAX));
  /* 104e6353 call 0x104ea1b0 */
  push32(0x104e6358u); f_104ea1b0();
  /* 104e6358 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e635b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 104e635e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6361 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e6364 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e6367 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e636a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104e636d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6370 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6374 jl 0x104e6398 */
  if ((C.sf!=C.of)) goto L_104e6398;
  /* 104e6376 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6379 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e637b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104e637e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104e6380 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104e6386 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104e6389 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e638c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e638e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6391 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e6394 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104e6396 jmp 0x104e63a9 */
  goto L_104e63a9;
L_104e6398:;
  /* 104e6398 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104e639b push edx */
  push32((uint32_t)(EDX));
  /* 104e639c push 0 */
  push32((uint32_t)(0x0u));
  /* 104e639e call 0x104e9f30 */
  push32(0x104e63a3u); f_104e9f30();
  /* 104e63a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e63a6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_104e63a9:;
  /* 104e63a9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104e63ac pop edi */
  EDI = (pop32());
  /* 104e63ad pop esi */
  ESI = (pop32());
  /* 104e63ae pop ebx */
  EBX = (pop32());
  /* 104e63af mov esp, ebp */
  ESP = (EBP);
  /* 104e63b1 pop ebp */
  EBP = (pop32());
  /* 104e63b2 ret  */
  ESPCHK(0x104e62c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063c0 @ 0x104e63c0 (47 bytes, 17 insns) */
void f_104e63c0(void) {
  FTRACE(0x104e63c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e63c0 push ecx */
  push32((uint32_t)(ECX));
  /* 104e63c1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e63c6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 104e63ca jb 0x104e63e0 */
  if (C.cf) goto L_104e63e0;
L_104e63cc:;
  /* 104e63cc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e63d2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e63d7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 104e63d9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e63de jae 0x104e63cc */
  if (!C.cf) goto L_104e63cc;
L_104e63e0:;
  /* 104e63e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e63e2 mov eax, esp */
  EAX = (ESP);
  /* 104e63e4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 104e63e6 mov esp, ecx */
  ESP = (ECX);
  /* 104e63e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e63ea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e63ed push eax */
  push32((uint32_t)(EAX));
  /* 104e63ee ret  */
  ESPCHK(0x104e63c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063f0 @ 0x104e63f0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_104e63f0(void) {
  FTRACE(0x104e63f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e63f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e63f1 mov ebp, esp */
  EBP = (ESP);
  /* 104e63f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e63f6 push esi */
  push32((uint32_t)(ESI));
  /* 104e63f7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e63fb je 0x104e6403 */
  if (C.zf) goto L_104e6403;
  /* 104e63fd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6401 jne 0x104e6408 */
  if (!C.zf) goto L_104e6408;
L_104e6403:;
  /* 104e6403 jmp 0x104e65d8 */
  goto L_104e65d8;
L_104e6408:;
  /* 104e6408 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e640c je 0x104e6424 */
  if (C.zf) goto L_104e6424;
  /* 104e640e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6412 je 0x104e6424 */
  if (C.zf) goto L_104e6424;
  /* 104e6414 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6418 je 0x104e6424 */
  if (C.zf) goto L_104e6424;
  /* 104e641a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e641e jne 0x104e6501 */
  if (!C.zf) goto L_104e6501;
L_104e6424:;
  /* 104e6424 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e6426 call 0x104e6c20 */
  push32(0x104e642bu); f_104e6c20();
  /* 104e642b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e642e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6432 je 0x104e643a */
  if (C.zf) goto L_104e643a;
  /* 104e6434 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6438 jne 0x104e647f */
  if (!C.zf) goto L_104e647f;
L_104e643a:;
  /* 104e643a cmp dword ptr [0x1050f634], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f634))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6441 jne 0x104e647f */
  if (!C.zf) goto L_104e647f;
  /* 104e6443 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e6445 push 0x104e6620 */
  push32((uint32_t)(0x104e6620u));
  /* 104e644a call dword ptr [0x10512310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512310))), 0x104e6450u);
  /* 104e6450 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6453 jne 0x104e6461 */
  if (!C.zf) goto L_104e6461;
  /* 104e6455 mov dword ptr [0x1050f634], 1 */
  w32((uint32_t)(0x1050f634), (0x1u));
  /* 104e645f jmp 0x104e647f */
  goto L_104e647f;
L_104e6461:;
  /* 104e6461 call dword ptr [0x105122c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122c8))), 0x104e6467u);
  /* 104e6467 mov esi, eax */
  ESI = (EAX);
  /* 104e6469 call 0x104eb100 */
  push32(0x104e646eu); f_104eb100();
  /* 104e646e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 104e6470 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e6472 call 0x104e6cc0 */
  push32(0x104e6477u); f_104e6cc0();
  /* 104e6477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e647a jmp 0x104e65d8 */
  goto L_104e65d8;
L_104e647f:;
  /* 104e647f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6482 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104e6485 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6488 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e648b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104e648e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6492 ja 0x104e64f2 */
  if ((!C.cf&&!C.zf)) goto L_104e64f2;
  /* 104e6494 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6497 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e6499 mov dl, byte ptr [eax + 0x104e65ff] */
  DL = (r8((uint32_t)(EAX + 0x104e65ff)));
  /* 104e649f jmp dword ptr [edx*4 + 0x104e65eb] */
  switch (EDX) {
    case 0: goto L_104e64a6;
    case 1: goto L_104e64e0;
    case 2: goto L_104e64ba;
    case 3: goto L_104e64cd;
    case 4: goto L_104e64f2;
    default: x86_unimpl("switch@0x104e649f out of table"); return;
  }
L_104e64a6:;
  /* 104e64a6 mov ecx, dword ptr [0x1050f624] */
  ECX = (r32((uint32_t)(0x1050f624)));
  /* 104e64ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104e64af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e64b2 mov dword ptr [0x1050f624], edx */
  w32((uint32_t)(0x1050f624), (EDX));
  /* 104e64b8 jmp 0x104e64f2 */
  goto L_104e64f2;
L_104e64ba:;
  /* 104e64ba mov eax, dword ptr [0x1050f628] */
  EAX = (r32((uint32_t)(0x1050f628)));
  /* 104e64bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e64c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e64c5 mov dword ptr [0x1050f628], ecx */
  w32((uint32_t)(0x1050f628), (ECX));
  /* 104e64cb jmp 0x104e64f2 */
  goto L_104e64f2;
L_104e64cd:;
  /* 104e64cd mov edx, dword ptr [0x1050f62c] */
  EDX = (r32((uint32_t)(0x1050f62c)));
  /* 104e64d3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104e64d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e64d9 mov dword ptr [0x1050f62c], eax */
  w32((uint32_t)(0x1050f62c), (EAX));
  /* 104e64de jmp 0x104e64f2 */
  goto L_104e64f2;
L_104e64e0:;
  /* 104e64e0 mov ecx, dword ptr [0x1050f630] */
  ECX = (r32((uint32_t)(0x1050f630)));
  /* 104e64e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104e64e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e64ec mov dword ptr [0x1050f630], edx */
  w32((uint32_t)(0x1050f630), (EDX));
L_104e64f2:;
  /* 104e64f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e64f4 call 0x104e6cc0 */
  push32(0x104e64f9u); f_104e6cc0();
  /* 104e64f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e64fc jmp 0x104e65d3 */
  goto L_104e65d3;
L_104e6501:;
  /* 104e6501 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6505 je 0x104e6518 */
  if (C.zf) goto L_104e6518;
  /* 104e6507 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e650b je 0x104e6518 */
  if (C.zf) goto L_104e6518;
  /* 104e650d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6511 je 0x104e6518 */
  if (C.zf) goto L_104e6518;
  /* 104e6513 jmp 0x104e65d8 */
  goto L_104e65d8;
L_104e6518:;
  /* 104e6518 call 0x104e2c60 */
  push32(0x104e651du); f_104e2c60();
  /* 104e651d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e6520 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6523 cmp dword ptr [eax + 0x50], 0x1050dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1050dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e652a jne 0x104e6575 */
  if (!C.zf) goto L_104e6575;
  /* 104e652c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 104e6531 push 0x1050aef4 */
  push32((uint32_t)(0x1050aef4u));
  /* 104e6536 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e6538 mov ecx, dword ptr [0x1050dc80] */
  ECX = (r32((uint32_t)(0x1050dc80)));
  /* 104e653e push ecx */
  push32((uint32_t)(ECX));
  /* 104e653f call 0x104e3220 */
  push32(0x104e6544u); f_104e3220();
  /* 104e6544 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6547 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e654a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 104e654d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6550 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6554 je 0x104e6573 */
  if (C.zf) goto L_104e6573;
  /* 104e6556 mov ecx, dword ptr [0x1050dc80] */
  ECX = (r32((uint32_t)(0x1050dc80)));
  /* 104e655c push ecx */
  push32((uint32_t)(ECX));
  /* 104e655d push 0x1050dc00 */
  push32((uint32_t)(0x1050dc00u));
  /* 104e6562 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6565 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 104e6568 push eax */
  push32((uint32_t)(EAX));
  /* 104e6569 call 0x104e9b00 */
  push32(0x104e656eu); f_104e9b00();
  /* 104e656e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6571 jmp 0x104e6575 */
  goto L_104e6575;
L_104e6573:;
  /* 104e6573 jmp 0x104e65d8 */
  goto L_104e65d8;
L_104e6575:;
  /* 104e6575 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6578 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 104e657b push edx */
  push32((uint32_t)(EDX));
  /* 104e657c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e657f push eax */
  push32((uint32_t)(EAX));
  /* 104e6580 call 0x104e6900 */
  push32(0x104e6585u); f_104e6900();
  /* 104e6585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6588 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e658b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e658f jne 0x104e6593 */
  if (!C.zf) goto L_104e6593;
  /* 104e6591 jmp 0x104e65d8 */
  goto L_104e65d8;
L_104e6593:;
  /* 104e6593 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6596 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104e6599 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104e659c:;
  /* 104e659c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e659f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e65a2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e65a5 jne 0x104e65d3 */
  if (!C.zf) goto L_104e65d3;
  /* 104e65a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e65aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e65ad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104e65b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e65b3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e65b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104e65b9 mov edx, dword ptr [0x1050dc84] */
  EDX = (r32((uint32_t)(0x1050dc84)));
  /* 104e65bf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e65c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e65c5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 104e65c8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e65ca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e65cd jb 0x104e65d1 */
  if (C.cf) goto L_104e65d1;
  /* 104e65cf jmp 0x104e65d3 */
  goto L_104e65d3;
L_104e65d1:;
  /* 104e65d1 jmp 0x104e659c */
  goto L_104e659c;
L_104e65d3:;
  /* 104e65d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e65d6 jmp 0x104e65e6 */
  goto L_104e65e6;
L_104e65d8:;
  /* 104e65d8 call 0x104eb0f0 */
  push32(0x104e65ddu); f_104eb0f0();
  /* 104e65dd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 104e65e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104e65e6:;
  /* 104e65e6 pop esi */
  ESI = (pop32());
  /* 104e65e7 mov esp, ebp */
  ESP = (EBP);
  /* 104e65e9 pop ebp */
  EBP = (pop32());
  /* 104e65ea ret  */
  ESPCHK(0x104e63f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006620 @ 0x104e6620 (146 bytes, 45 insns) */
void f_104e6620(void) {
  FTRACE(0x104e6620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6620 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6621 mov ebp, esp */
  EBP = (ESP);
  /* 104e6623 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e6626 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e6628 call 0x104e6c20 */
  push32(0x104e662du); f_104e6c20();
  /* 104e662d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6630 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6634 jne 0x104e664e */
  if (!C.zf) goto L_104e664e;
  /* 104e6636 mov dword ptr [ebp - 8], 0x1050f624 */
  w32((uint32_t)(EBP + -0x8), (0x1050f624u));
  /* 104e663d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6640 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104e6642 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104e6645 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 104e664c jmp 0x104e6664 */
  goto L_104e6664;
L_104e664e:;
  /* 104e664e mov dword ptr [ebp - 8], 0x1050f628 */
  w32((uint32_t)(EBP + -0x8), (0x1050f628u));
  /* 104e6655 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6658 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e665a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e665d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_104e6664:;
  /* 104e6664 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6668 jne 0x104e6678 */
  if (!C.zf) goto L_104e6678;
  /* 104e666a push 1 */
  push32((uint32_t)(0x1u));
  /* 104e666c call 0x104e6cc0 */
  push32(0x104e6671u); f_104e6cc0();
  /* 104e6671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6674 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e6676 jmp 0x104e66ac */
  goto L_104e66ac;
L_104e6678:;
  /* 104e6678 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e667c je 0x104e669d */
  if (C.zf) goto L_104e669d;
  /* 104e667e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6681 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 104e6687 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e6689 call 0x104e6cc0 */
  push32(0x104e668eu); f_104e6cc0();
  /* 104e668e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6691 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6694 push edx */
  push32((uint32_t)(EDX));
  /* 104e6695 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x104e6698u);
  /* 104e6698 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e669b jmp 0x104e66a7 */
  goto L_104e66a7;
L_104e669d:;
  /* 104e669d push 1 */
  push32((uint32_t)(0x1u));
  /* 104e669f call 0x104e6cc0 */
  push32(0x104e66a4u); f_104e6cc0();
  /* 104e66a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e66a7:;
  /* 104e66a7 mov eax, 1 */
  EAX = (0x1u);
L_104e66ac:;
  /* 104e66ac mov esp, ebp */
  ESP = (EBP);
  /* 104e66ae pop ebp */
  EBP = (pop32());
  /* 104e66af ret 4 */
  ESPCHK(0x104e6620u, _esp0);
  ESP += 8; return;
}

/* FUN_100066c0 @ 0x104e66c0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_104e66c0(void) {
  FTRACE(0x104e66c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e66c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e66c1 mov ebp, esp */
  EBP = (ESP);
  /* 104e66c3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e66c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104e66cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e66d0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104e66d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e66d6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e66d9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104e66dc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e66e0 ja 0x104e678e */
  if ((!C.cf&&!C.zf)) goto L_104e678e;
  /* 104e66e6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104e66e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e66eb mov dl, byte ptr [eax + 0x104e68e2] */
  DL = (r8((uint32_t)(EAX + 0x104e68e2)));
  /* 104e66f1 jmp dword ptr [edx*4 + 0x104e68ca] */
  switch (EDX) {
    case 0: goto L_104e66f8;
    case 1: goto L_104e6763;
    case 2: goto L_104e6749;
    case 3: goto L_104e6715;
    case 4: goto L_104e672f;
    case 5: goto L_104e678e;
    default: x86_unimpl("switch@0x104e66f1 out of table"); return;
  }
L_104e66f8:;
  /* 104e66f8 mov dword ptr [ebp - 0x18], 0x1050f624 */
  w32((uint32_t)(EBP + -0x18), (0x1050f624u));
  /* 104e66ff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e6702 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e6704 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104e6707 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e670a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e670d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e6710 jmp 0x104e6796 */
  goto L_104e6796;
L_104e6715:;
  /* 104e6715 mov dword ptr [ebp - 0x18], 0x1050f628 */
  w32((uint32_t)(EBP + -0x18), (0x1050f628u));
  /* 104e671c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e671f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e6721 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104e6724 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e6727 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e672a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e672d jmp 0x104e6796 */
  goto L_104e6796;
L_104e672f:;
  /* 104e672f mov dword ptr [ebp - 0x18], 0x1050f62c */
  w32((uint32_t)(EBP + -0x18), (0x1050f62cu));
  /* 104e6736 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e6739 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e673b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104e673e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e6741 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6744 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e6747 jmp 0x104e6796 */
  goto L_104e6796;
L_104e6749:;
  /* 104e6749 mov dword ptr [ebp - 0x18], 0x1050f630 */
  w32((uint32_t)(EBP + -0x18), (0x1050f630u));
  /* 104e6750 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e6753 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e6755 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104e6758 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e675b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e675e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104e6761 jmp 0x104e6796 */
  goto L_104e6796;
L_104e6763:;
  /* 104e6763 call 0x104e2c60 */
  push32(0x104e6768u); f_104e2c60();
  /* 104e6768 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e676b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e676e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 104e6771 push edx */
  push32((uint32_t)(EDX));
  /* 104e6772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6775 push eax */
  push32((uint32_t)(EAX));
  /* 104e6776 call 0x104e6900 */
  push32(0x104e677bu); f_104e6900();
  /* 104e677b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e677e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6781 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104e6784 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e6787 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e6789 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 104e678c jmp 0x104e6796 */
  goto L_104e6796;
L_104e678e:;
  /* 104e678e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e6791 jmp 0x104e68c6 */
  goto L_104e68c6;
L_104e6796:;
  /* 104e6796 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e679a je 0x104e67a6 */
  if (C.zf) goto L_104e67a6;
  /* 104e679c push 1 */
  push32((uint32_t)(0x1u));
  /* 104e679e call 0x104e6c20 */
  push32(0x104e67a3u); f_104e6c20();
  /* 104e67a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e67a6:;
  /* 104e67a6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e67aa jne 0x104e67c3 */
  if (!C.zf) goto L_104e67c3;
  /* 104e67ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e67b0 je 0x104e67bc */
  if (C.zf) goto L_104e67bc;
  /* 104e67b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104e67b4 call 0x104e6cc0 */
  push32(0x104e67b9u); f_104e6cc0();
  /* 104e67b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e67bc:;
  /* 104e67bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e67be jmp 0x104e68c6 */
  goto L_104e68c6;
L_104e67c3:;
  /* 104e67c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e67c7 jne 0x104e67e0 */
  if (!C.zf) goto L_104e67e0;
  /* 104e67c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e67cd je 0x104e67d9 */
  if (C.zf) goto L_104e67d9;
  /* 104e67cf push 1 */
  push32((uint32_t)(0x1u));
  /* 104e67d1 call 0x104e6cc0 */
  push32(0x104e67d6u); f_104e6cc0();
  /* 104e67d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e67d9:;
  /* 104e67d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 104e67db call 0x104e29e0 */
  push32(0x104e67e0u); f_104e29e0();
L_104e67e0:;
  /* 104e67e0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e67e4 je 0x104e67f2 */
  if (C.zf) goto L_104e67f2;
  /* 104e67e6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e67ea je 0x104e67f2 */
  if (C.zf) goto L_104e67f2;
  /* 104e67ec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e67f0 jne 0x104e681e */
  if (!C.zf) goto L_104e681e;
L_104e67f2:;
  /* 104e67f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e67f5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 104e67f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 104e67fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e67fe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 104e6805 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6809 jne 0x104e681e */
  if (!C.zf) goto L_104e681e;
  /* 104e680b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e680e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 104e6811 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104e6814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6817 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_104e681e:;
  /* 104e681e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6822 jne 0x104e6860 */
  if (!C.zf) goto L_104e6860;
  /* 104e6824 mov eax, dword ptr [0x1050dc78] */
  EAX = (r32((uint32_t)(0x1050dc78)));
  /* 104e6829 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104e682c jmp 0x104e6837 */
  goto L_104e6837;
L_104e682e:;
  /* 104e682e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6831 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6834 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104e6837:;
  /* 104e6837 mov edx, dword ptr [0x1050dc78] */
  EDX = (r32((uint32_t)(0x1050dc78)));
  /* 104e683d add edx, dword ptr [0x1050dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1050dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6843 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6846 jge 0x104e685e */
  if ((C.sf==C.of)) goto L_104e685e;
  /* 104e6848 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e684b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e684e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6851 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 104e6854 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 104e685c jmp 0x104e682e */
  goto L_104e682e;
L_104e685e:;
  /* 104e685e jmp 0x104e6869 */
  goto L_104e6869;
L_104e6860:;
  /* 104e6860 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e6863 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_104e6869:;
  /* 104e6869 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e686d je 0x104e6879 */
  if (C.zf) goto L_104e6879;
  /* 104e686f push 1 */
  push32((uint32_t)(0x1u));
  /* 104e6871 call 0x104e6cc0 */
  push32(0x104e6876u); f_104e6cc0();
  /* 104e6876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e6879:;
  /* 104e6879 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e687d jne 0x104e6890 */
  if (!C.zf) goto L_104e6890;
  /* 104e687f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6882 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 104e6885 push edx */
  push32((uint32_t)(EDX));
  /* 104e6886 push 8 */
  push32((uint32_t)(0x8u));
  /* 104e6888 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x104e688bu);
  /* 104e688b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e688e jmp 0x104e689a */
  goto L_104e689a;
L_104e6890:;
  /* 104e6890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6893 push eax */
  push32((uint32_t)(EAX));
  /* 104e6894 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x104e6897u);
  /* 104e6897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e689a:;
  /* 104e689a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e689e je 0x104e68ac */
  if (C.zf) goto L_104e68ac;
  /* 104e68a0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e68a4 je 0x104e68ac */
  if (C.zf) goto L_104e68ac;
  /* 104e68a6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e68aa jne 0x104e68c4 */
  if (!C.zf) goto L_104e68c4;
L_104e68ac:;
  /* 104e68ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e68af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e68b2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 104e68b5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e68b9 jne 0x104e68c4 */
  if (!C.zf) goto L_104e68c4;
  /* 104e68bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e68be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e68c1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_104e68c4:;
  /* 104e68c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e68c6:;
  /* 104e68c6 mov esp, ebp */
  ESP = (EBP);
  /* 104e68c8 pop ebp */
  EBP = (pop32());
  /* 104e68c9 ret  */
  ESPCHK(0x104e66c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006900 @ 0x104e6900 (91 bytes, 35 insns) */
void f_104e6900(void) {
  FTRACE(0x104e6900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6900 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6901 mov ebp, esp */
  EBP = (ESP);
  /* 104e6903 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6904 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e6907 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e690a:;
  /* 104e690a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e690d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104e6910 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6913 je 0x104e6933 */
  if (C.zf) goto L_104e6933;
  /* 104e6915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6918 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e691b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e691e mov ecx, dword ptr [0x1050dc84] */
  ECX = (r32((uint32_t)(0x1050dc84)));
  /* 104e6924 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e6927 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e692a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e692c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e692f jae 0x104e6933 */
  if (!C.cf) goto L_104e6933;
  /* 104e6931 jmp 0x104e690a */
  goto L_104e690a;
L_104e6933:;
  /* 104e6933 mov eax, dword ptr [0x1050dc84] */
  EAX = (r32((uint32_t)(0x1050dc84)));
  /* 104e6938 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e693b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e693e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6940 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6943 jae 0x104e6955 */
  if (!C.cf) goto L_104e6955;
  /* 104e6945 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6948 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104e694b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e694e jne 0x104e6955 */
  if (!C.zf) goto L_104e6955;
  /* 104e6950 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6953 jmp 0x104e6957 */
  goto L_104e6957;
L_104e6955:;
  /* 104e6955 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e6957:;
  /* 104e6957 mov esp, ebp */
  ESP = (EBP);
  /* 104e6959 pop ebp */
  EBP = (pop32());
  /* 104e695a ret  */
  ESPCHK(0x104e6900u, _esp0);
  ESP += 4; return;
}

/* FUN_10006960 @ 0x104e6960 (13 bytes, 6 insns) */
void f_104e6960(void) {
  FTRACE(0x104e6960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6960 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6961 mov ebp, esp */
  EBP = (ESP);
  /* 104e6963 call 0x104e2c60 */
  push32(0x104e6968u); f_104e2c60();
  /* 104e6968 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e696b pop ebp */
  EBP = (pop32());
  /* 104e696c ret  */
  ESPCHK(0x104e6960u, _esp0);
  ESP += 4; return;
}

/* FUN_10006970 @ 0x104e6970 (13 bytes, 6 insns) */
void f_104e6970(void) {
  FTRACE(0x104e6970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6970 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6971 mov ebp, esp */
  EBP = (ESP);
  /* 104e6973 call 0x104e2c60 */
  push32(0x104e6978u); f_104e2c60();
  /* 104e6978 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e697b pop ebp */
  EBP = (pop32());
  /* 104e697c ret  */
  ESPCHK(0x104e6970u, _esp0);
  ESP += 4; return;
}

/* FUN_10006980 @ 0x104e6980 (187 bytes, 54 insns) */
void f_104e6980(void) {
  FTRACE(0x104e6980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6980 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6981 mov ebp, esp */
  EBP = (ESP);
  /* 104e6983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e6986 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104e698d cmp dword ptr [0x1050f638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6994 jne 0x104e69f3 */
  if (!C.zf) goto L_104e69f3;
  /* 104e6996 push 0x1050a320 */
  push32((uint32_t)(0x1050a320u));
  /* 104e699b call dword ptr [0x10512298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512298))), 0x104e69a1u);
  /* 104e69a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e69a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e69a8 je 0x104e69c7 */
  if (C.zf) goto L_104e69c7;
  /* 104e69aa push 0x1050af24 */
  push32((uint32_t)(0x1050af24u));
  /* 104e69af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e69b2 push eax */
  push32((uint32_t)(EAX));
  /* 104e69b3 call dword ptr [0x10512294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512294))), 0x104e69b9u);
  /* 104e69b9 mov dword ptr [0x1050f638], eax */
  w32((uint32_t)(0x1050f638), (EAX));
  /* 104e69be cmp dword ptr [0x1050f638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e69c5 jne 0x104e69cb */
  if (!C.zf) goto L_104e69cb;
L_104e69c7:;
  /* 104e69c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e69c9 jmp 0x104e6a37 */
  goto L_104e6a37;
L_104e69cb:;
  /* 104e69cb push 0x1050af14 */
  push32((uint32_t)(0x1050af14u));
  /* 104e69d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e69d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e69d4 call dword ptr [0x10512294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512294))), 0x104e69dau);
  /* 104e69da mov dword ptr [0x1050f63c], eax */
  w32((uint32_t)(0x1050f63c), (EAX));
  /* 104e69df push 0x1050af00 */
  push32((uint32_t)(0x1050af00u));
  /* 104e69e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e69e7 push edx */
  push32((uint32_t)(EDX));
  /* 104e69e8 call dword ptr [0x10512294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512294))), 0x104e69eeu);
  /* 104e69ee mov dword ptr [0x1050f640], eax */
  w32((uint32_t)(0x1050f640), (EAX));
L_104e69f3:;
  /* 104e69f3 cmp dword ptr [0x1050f63c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f63c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e69fa je 0x104e6a05 */
  if (C.zf) goto L_104e6a05;
  /* 104e69fc call dword ptr [0x1050f63c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f63c))), 0x104e6a02u);
  /* 104e6a02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e6a05:;
  /* 104e6a05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6a09 je 0x104e6a21 */
  if (C.zf) goto L_104e6a21;
  /* 104e6a0b cmp dword ptr [0x1050f640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1050f640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6a12 je 0x104e6a21 */
  if (C.zf) goto L_104e6a21;
  /* 104e6a14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6a17 push eax */
  push32((uint32_t)(EAX));
  /* 104e6a18 call dword ptr [0x1050f640] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f640))), 0x104e6a1eu);
  /* 104e6a1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e6a21:;
  /* 104e6a21 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104e6a24 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6a25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e6a28 push edx */
  push32((uint32_t)(EDX));
  /* 104e6a29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6a2c push eax */
  push32((uint32_t)(EAX));
  /* 104e6a2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6a30 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6a31 call dword ptr [0x1050f638] */
  call_ind((uint32_t)(r32((uint32_t)(0x1050f638))), 0x104e6a37u);
L_104e6a37:;
  /* 104e6a37 mov esp, ebp */
  ESP = (EBP);
  /* 104e6a39 pop ebp */
  EBP = (pop32());
  /* 104e6a3a ret  */
  ESPCHK(0x104e6980u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x104e6a40 (254 bytes, 109 insns) */
void f_104e6a40(void) {
  FTRACE(0x104e6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6a40 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 104e6a44 push edi */
  push32((uint32_t)(EDI));
  /* 104e6a45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104e6a47 je 0x104e6ac3 */
  if (C.zf) goto L_104e6ac3;
  /* 104e6a49 push esi */
  push32((uint32_t)(ESI));
  /* 104e6a4a push ebx */
  push32((uint32_t)(EBX));
  /* 104e6a4b mov ebx, ecx */
  EBX = (ECX);
  /* 104e6a4d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 104e6a51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 104e6a57 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 104e6a5b jne 0x104e6a64 */
  if (!C.zf) goto L_104e6a64;
  /* 104e6a5d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e6a60 jne 0x104e6ad1 */
  if (!C.zf) goto L_104e6ad1;
  /* 104e6a62 jmp 0x104e6a85 */
  goto L_104e6a85;
L_104e6a64:;
  /* 104e6a64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104e6a66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104e6a67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e6a69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104e6a6a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104e6a6b je 0x104e6a92 */
  if (C.zf) goto L_104e6a92;
  /* 104e6a6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104e6a6f je 0x104e6a9a */
  if (C.zf) goto L_104e6a9a;
  /* 104e6a71 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 104e6a77 jne 0x104e6a64 */
  if (!C.zf) goto L_104e6a64;
  /* 104e6a79 mov ebx, ecx */
  EBX = (ECX);
  /* 104e6a7b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e6a7e jne 0x104e6ad1 */
  if (!C.zf) goto L_104e6ad1;
L_104e6a80:;
  /* 104e6a80 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 104e6a83 je 0x104e6a92 */
  if (C.zf) goto L_104e6a92;
L_104e6a85:;
  /* 104e6a85 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104e6a87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104e6a88 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e6a8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104e6a8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104e6a8d je 0x104e6abe */
  if (C.zf) goto L_104e6abe;
  /* 104e6a8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 104e6a90 jne 0x104e6a85 */
  if (!C.zf) goto L_104e6a85;
L_104e6a92:;
  /* 104e6a92 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 104e6a96 pop ebx */
  EBX = (pop32());
  /* 104e6a97 pop esi */
  ESI = (pop32());
  /* 104e6a98 pop edi */
  EDI = (pop32());
  /* 104e6a99 ret  */
  ESPCHK(0x104e6a40u, _esp0);
  ESP += 4; return;
L_104e6a9a:;
  /* 104e6a9a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104e6aa0 je 0x104e6ab4 */
  if (C.zf) goto L_104e6ab4;
L_104e6aa2:;
  /* 104e6aa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e6aa4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104e6aa5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104e6aa6 je 0x104e6b36 */
  if (C.zf) goto L_104e6b36;
  /* 104e6aac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 104e6ab2 jne 0x104e6aa2 */
  if (!C.zf) goto L_104e6aa2;
L_104e6ab4:;
  /* 104e6ab4 mov ebx, ecx */
  EBX = (ECX);
  /* 104e6ab6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e6ab9 jne 0x104e6b27 */
  if (!C.zf) goto L_104e6b27;
L_104e6abb:;
  /* 104e6abb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e6abd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_104e6abe:;
  /* 104e6abe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 104e6abf jne 0x104e6abb */
  if (!C.zf) goto L_104e6abb;
  /* 104e6ac1 pop ebx */
  EBX = (pop32());
  /* 104e6ac2 pop esi */
  ESI = (pop32());
L_104e6ac3:;
  /* 104e6ac3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104e6ac7 pop edi */
  EDI = (pop32());
  /* 104e6ac8 ret  */
  ESPCHK(0x104e6a40u, _esp0);
  ESP += 4; return;
L_104e6ac9:;
  /* 104e6ac9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104e6acb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6ace dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104e6acf je 0x104e6a80 */
  if (C.zf) goto L_104e6a80;
L_104e6ad1:;
  /* 104e6ad1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 104e6ad6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 104e6ad8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6ada xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e6add xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104e6adf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 104e6ae1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6ae4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 104e6ae9 je 0x104e6ac9 */
  if (C.zf) goto L_104e6ac9;
  /* 104e6aeb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 104e6aed je 0x104e6b1b */
  if (C.zf) goto L_104e6b1b;
  /* 104e6aef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 104e6af1 je 0x104e6b11 */
  if (C.zf) goto L_104e6b11;
  /* 104e6af3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 104e6af9 je 0x104e6b07 */
  if (C.zf) goto L_104e6b07;
  /* 104e6afb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 104e6b01 jne 0x104e6ac9 */
  if (!C.zf) goto L_104e6ac9;
  /* 104e6b03 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104e6b05 jmp 0x104e6b1f */
  goto L_104e6b1f;
L_104e6b07:;
  /* 104e6b07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e6b0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104e6b0f jmp 0x104e6b1f */
  goto L_104e6b1f;
L_104e6b11:;
  /* 104e6b11 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104e6b17 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104e6b19 jmp 0x104e6b1f */
  goto L_104e6b1f;
L_104e6b1b:;
  /* 104e6b1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104e6b1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_104e6b1f:;
  /* 104e6b1f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6b22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e6b24 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104e6b25 je 0x104e6b31 */
  if (C.zf) goto L_104e6b31;
L_104e6b27:;
  /* 104e6b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104e6b29:;
  /* 104e6b29 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 104e6b2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6b2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104e6b2f jne 0x104e6b29 */
  if (!C.zf) goto L_104e6b29;
L_104e6b31:;
  /* 104e6b31 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 104e6b34 jne 0x104e6abb */
  if (!C.zf) goto L_104e6abb;
L_104e6b36:;
  /* 104e6b36 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 104e6b3a pop ebx */
  EBX = (pop32());
  /* 104e6b3b pop esi */
  ESI = (pop32());
  /* 104e6b3c pop edi */
  EDI = (pop32());
  /* 104e6b3d ret  */
  ESPCHK(0x104e6a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b40 @ 0x104e6b40 (55 bytes, 16 insns) */
void f_104e6b40(void) {
  FTRACE(0x104e6b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6b40 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6b41 mov ebp, esp */
  EBP = (ESP);
  /* 104e6b43 mov eax, dword ptr [0x1050db84] */
  EAX = (r32((uint32_t)(0x1050db84)));
  /* 104e6b48 push eax */
  push32((uint32_t)(EAX));
  /* 104e6b49 call dword ptr [0x10512314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512314))), 0x104e6b4fu);
  /* 104e6b4f mov ecx, dword ptr [0x1050db74] */
  ECX = (r32((uint32_t)(0x1050db74)));
  /* 104e6b55 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6b56 call dword ptr [0x10512314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512314))), 0x104e6b5cu);
  /* 104e6b5c mov edx, dword ptr [0x1050db64] */
  EDX = (r32((uint32_t)(0x1050db64)));
  /* 104e6b62 push edx */
  push32((uint32_t)(EDX));
  /* 104e6b63 call dword ptr [0x10512314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512314))), 0x104e6b69u);
  /* 104e6b69 mov eax, dword ptr [0x1050db44] */
  EAX = (r32((uint32_t)(0x1050db44)));
  /* 104e6b6e push eax */
  push32((uint32_t)(EAX));
  /* 104e6b6f call dword ptr [0x10512314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512314))), 0x104e6b75u);
  /* 104e6b75 pop ebp */
  EBP = (pop32());
  /* 104e6b76 ret  */
  ESPCHK(0x104e6b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b80 @ 0x104e6b80 (159 bytes, 47 insns) */
void f_104e6b80(void) {
  FTRACE(0x104e6b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6b80 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6b81 mov ebp, esp */
  EBP = (ESP);
  /* 104e6b83 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6b84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104e6b8b jmp 0x104e6b96 */
  goto L_104e6b96;
L_104e6b8d:;
  /* 104e6b8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6b90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6b93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e6b96:;
  /* 104e6b96 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6b9a jge 0x104e6be9 */
  if ((C.sf==C.of)) goto L_104e6be9;
  /* 104e6b9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6b9f cmp dword ptr [ecx*4 + 0x1050db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1050db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6ba7 je 0x104e6be7 */
  if (C.zf) goto L_104e6be7;
  /* 104e6ba9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6bad je 0x104e6be7 */
  if (C.zf) goto L_104e6be7;
  /* 104e6baf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6bb3 je 0x104e6be7 */
  if (C.zf) goto L_104e6be7;
  /* 104e6bb5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6bb9 je 0x104e6be7 */
  if (C.zf) goto L_104e6be7;
  /* 104e6bbb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6bbf je 0x104e6be7 */
  if (C.zf) goto L_104e6be7;
  /* 104e6bc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6bc4 mov eax, dword ptr [edx*4 + 0x1050db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1050db40)));
  /* 104e6bcb push eax */
  push32((uint32_t)(EAX));
  /* 104e6bcc call dword ptr [0x105122dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122dc))), 0x104e6bd2u);
  /* 104e6bd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104e6bd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6bd7 mov edx, dword ptr [ecx*4 + 0x1050db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1050db40)));
  /* 104e6bde push edx */
  push32((uint32_t)(EDX));
  /* 104e6bdf call 0x104e3cb0 */
  push32(0x104e6be4u); f_104e3cb0();
  /* 104e6be4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e6be7:;
  /* 104e6be7 jmp 0x104e6b8d */
  goto L_104e6b8d;
L_104e6be9:;
  /* 104e6be9 mov eax, dword ptr [0x1050db64] */
  EAX = (r32((uint32_t)(0x1050db64)));
  /* 104e6bee push eax */
  push32((uint32_t)(EAX));
  /* 104e6bef call dword ptr [0x105122dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122dc))), 0x104e6bf5u);
  /* 104e6bf5 mov ecx, dword ptr [0x1050db74] */
  ECX = (r32((uint32_t)(0x1050db74)));
  /* 104e6bfb push ecx */
  push32((uint32_t)(ECX));
  /* 104e6bfc call dword ptr [0x105122dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122dc))), 0x104e6c02u);
  /* 104e6c02 mov edx, dword ptr [0x1050db84] */
  EDX = (r32((uint32_t)(0x1050db84)));
  /* 104e6c08 push edx */
  push32((uint32_t)(EDX));
  /* 104e6c09 call dword ptr [0x105122dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122dc))), 0x104e6c0fu);
  /* 104e6c0f mov eax, dword ptr [0x1050db44] */
  EAX = (r32((uint32_t)(0x1050db44)));
  /* 104e6c14 push eax */
  push32((uint32_t)(EAX));
  /* 104e6c15 call dword ptr [0x105122dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122dc))), 0x104e6c1bu);
  /* 104e6c1b mov esp, ebp */
  ESP = (EBP);
  /* 104e6c1d pop ebp */
  EBP = (pop32());
  /* 104e6c1e ret  */
  ESPCHK(0x104e6b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c20 @ 0x104e6c20 (151 bytes, 46 insns) */
void f_104e6c20(void) {
  FTRACE(0x104e6c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6c20 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6c21 mov ebp, esp */
  EBP = (ESP);
  /* 104e6c23 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6c27 cmp dword ptr [eax*4 + 0x1050db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1050db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6c2f jne 0x104e6ca2 */
  if (!C.zf) goto L_104e6ca2;
  /* 104e6c31 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 104e6c36 push 0x1050af30 */
  push32((uint32_t)(0x1050af30u));
  /* 104e6c3b push 2 */
  push32((uint32_t)(0x2u));
  /* 104e6c3d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 104e6c3f call 0x104e3220 */
  push32(0x104e6c44u); f_104e3220();
  /* 104e6c44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6c47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e6c4a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6c4e jne 0x104e6c5a */
  if (!C.zf) goto L_104e6c5a;
  /* 104e6c50 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104e6c52 call 0x104e2190 */
  push32(0x104e6c57u); f_104e2190();
  /* 104e6c57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e6c5a:;
  /* 104e6c5a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104e6c5c call 0x104e6c20 */
  push32(0x104e6c61u); f_104e6c20();
  /* 104e6c61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6c64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6c67 cmp dword ptr [ecx*4 + 0x1050db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1050db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6c6f jne 0x104e6c8a */
  if (!C.zf) goto L_104e6c8a;
  /* 104e6c71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6c74 push edx */
  push32((uint32_t)(EDX));
  /* 104e6c75 call dword ptr [0x10512314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512314))), 0x104e6c7bu);
  /* 104e6c7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6c7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6c81 mov dword ptr [eax*4 + 0x1050db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1050db40), (ECX));
  /* 104e6c88 jmp 0x104e6c98 */
  goto L_104e6c98;
L_104e6c8a:;
  /* 104e6c8a push 2 */
  push32((uint32_t)(0x2u));
  /* 104e6c8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6c8f push edx */
  push32((uint32_t)(EDX));
  /* 104e6c90 call 0x104e3cb0 */
  push32(0x104e6c95u); f_104e3cb0();
  /* 104e6c95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e6c98:;
  /* 104e6c98 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104e6c9a call 0x104e6cc0 */
  push32(0x104e6c9fu); f_104e6cc0();
  /* 104e6c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e6ca2:;
  /* 104e6ca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6ca5 mov ecx, dword ptr [eax*4 + 0x1050db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1050db40)));
  /* 104e6cac push ecx */
  push32((uint32_t)(ECX));
  /* 104e6cad call dword ptr [0x10512318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512318))), 0x104e6cb3u);
  /* 104e6cb3 mov esp, ebp */
  ESP = (EBP);
  /* 104e6cb5 pop ebp */
  EBP = (pop32());
  /* 104e6cb6 ret  */
  ESPCHK(0x104e6c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc0 @ 0x104e6cc0 (22 bytes, 8 insns) */
void f_104e6cc0(void) {
  FTRACE(0x104e6cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6cc1 mov ebp, esp */
  EBP = (ESP);
  /* 104e6cc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6cc6 mov ecx, dword ptr [eax*4 + 0x1050db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1050db40)));
  /* 104e6ccd push ecx */
  push32((uint32_t)(ECX));
  /* 104e6cce call dword ptr [0x1051231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051231c))), 0x104e6cd4u);
  /* 104e6cd4 pop ebp */
  EBP = (pop32());
  /* 104e6cd5 ret  */
  ESPCHK(0x104e6cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x104e6ce0 (26 bytes, 10 insns) */
void f_104e6ce0(void) {
  FTRACE(0x104e6ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6ce1 mov ebp, esp */
  EBP = (ESP);
  /* 104e6ce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6ce6 push eax */
  push32((uint32_t)(EAX));
  /* 104e6ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104e6ce9 call dword ptr [0x105122e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122e8))), 0x104e6cefu);
  /* 104e6cef push 0xff */
  push32((uint32_t)(0xffu));
  /* 104e6cf4 call dword ptr [0x105122a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105122a4))), 0x104e6cfau);
  /* 104e6cfa pop ebp */
  EBP = (pop32());
  /* 104e6cfb ret  */
  ESPCHK(0x104e6ce0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x104e6d00 (446 bytes, 130 insns) */
void f_104e6d00(void) {
  FTRACE(0x104e6d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6d00 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6d01 mov ebp, esp */
  EBP = (ESP);
  /* 104e6d03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e6d06 call 0x104e2c60 */
  push32(0x104e6d0bu); f_104e2c60();
  /* 104e6d0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e6d0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6d11 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 104e6d14 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6d15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6d18 push edx */
  push32((uint32_t)(EDX));
  /* 104e6d19 call 0x104e6ec0 */
  push32(0x104e6d1eu); f_104e6ec0();
  /* 104e6d1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6d21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104e6d24 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6d28 je 0x104e6d33 */
  if (C.zf) goto L_104e6d33;
  /* 104e6d2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6d2d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6d31 jne 0x104e6d42 */
  if (!C.zf) goto L_104e6d42;
L_104e6d33:;
  /* 104e6d33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e6d36 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6d37 call dword ptr [0x10512324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512324))), 0x104e6d3du);
  /* 104e6d3d jmp 0x104e6eba */
  goto L_104e6eba;
L_104e6d42:;
  /* 104e6d42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6d45 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6d49 jne 0x104e6d5f */
  if (!C.zf) goto L_104e6d5f;
  /* 104e6d4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6d4e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 104e6d55 mov eax, 1 */
  EAX = (0x1u);
  /* 104e6d5a jmp 0x104e6eba */
  goto L_104e6eba;
L_104e6d5f:;
  /* 104e6d5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6d62 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6d66 jne 0x104e6d70 */
  if (!C.zf) goto L_104e6d70;
  /* 104e6d68 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104e6d6b jmp 0x104e6eba */
  goto L_104e6eba;
L_104e6d70:;
  /* 104e6d70 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6d73 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104e6d76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e6d79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6d7c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 104e6d7f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104e6d82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6d85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e6d88 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 104e6d8b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6d8e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6d92 jne 0x104e6e97 */
  if (!C.zf) goto L_104e6e97;
  /* 104e6d98 mov eax, dword ptr [0x1050dc78] */
  EAX = (r32((uint32_t)(0x1050dc78)));
  /* 104e6d9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104e6da0 jmp 0x104e6dab */
  goto L_104e6dab;
L_104e6da2:;
  /* 104e6da2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e6da5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6da8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_104e6dab:;
  /* 104e6dab mov edx, dword ptr [0x1050dc78] */
  EDX = (r32((uint32_t)(0x1050dc78)));
  /* 104e6db1 add edx, dword ptr [0x1050dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1050dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6db7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6dba jge 0x104e6dd2 */
  if ((C.sf==C.of)) goto L_104e6dd2;
  /* 104e6dbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104e6dbf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e6dc2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6dc5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 104e6dc8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 104e6dd0 jmp 0x104e6da2 */
  goto L_104e6da2;
L_104e6dd2:;
  /* 104e6dd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6dd5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 104e6dd8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104e6ddb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6dde cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6de4 jne 0x104e6df5 */
  if (!C.zf) goto L_104e6df5;
  /* 104e6de6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6de9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 104e6df0 jmp 0x104e6e7d */
  goto L_104e6e7d;
L_104e6df5:;
  /* 104e6df5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6df8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6dfe jne 0x104e6e0c */
  if (!C.zf) goto L_104e6e0c;
  /* 104e6e00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6e03 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 104e6e0a jmp 0x104e6e7d */
  goto L_104e6e7d;
L_104e6e0c:;
  /* 104e6e0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6e0f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6e15 jne 0x104e6e23 */
  if (!C.zf) goto L_104e6e23;
  /* 104e6e17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6e1a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 104e6e21 jmp 0x104e6e7d */
  goto L_104e6e7d;
L_104e6e23:;
  /* 104e6e23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6e26 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6e2c jne 0x104e6e3a */
  if (!C.zf) goto L_104e6e3a;
  /* 104e6e2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6e31 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 104e6e38 jmp 0x104e6e7d */
  goto L_104e6e7d;
L_104e6e3a:;
  /* 104e6e3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6e3d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6e43 jne 0x104e6e51 */
  if (!C.zf) goto L_104e6e51;
  /* 104e6e45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6e48 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 104e6e4f jmp 0x104e6e7d */
  goto L_104e6e7d;
L_104e6e51:;
  /* 104e6e51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6e54 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6e5a jne 0x104e6e68 */
  if (!C.zf) goto L_104e6e68;
  /* 104e6e5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6e5f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 104e6e66 jmp 0x104e6e7d */
  goto L_104e6e7d;
L_104e6e68:;
  /* 104e6e68 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6e6b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6e71 jne 0x104e6e7d */
  if (!C.zf) goto L_104e6e7d;
  /* 104e6e73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6e76 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_104e6e7d:;
  /* 104e6e7d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6e80 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 104e6e83 push edx */
  push32((uint32_t)(EDX));
  /* 104e6e84 push 8 */
  push32((uint32_t)(0x8u));
  /* 104e6e86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x104e6e89u);
  /* 104e6e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6e8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6e8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104e6e92 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 104e6e95 jmp 0x104e6eae */
  goto L_104e6eae;
L_104e6e97:;
  /* 104e6e97 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6e9a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 104e6ea1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104e6ea4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104e6ea7 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6ea8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x104e6eabu);
  /* 104e6eab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104e6eae:;
  /* 104e6eae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e6eb1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104e6eb4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 104e6eb7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_104e6eba:;
  /* 104e6eba mov esp, ebp */
  ESP = (EBP);
  /* 104e6ebc pop ebp */
  EBP = (pop32());
  /* 104e6ebd ret  */
  ESPCHK(0x104e6d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec0 @ 0x104e6ec0 (89 bytes, 35 insns) */
void f_104e6ec0(void) {
  FTRACE(0x104e6ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6ec1 mov ebp, esp */
  EBP = (ESP);
  /* 104e6ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6ec4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e6ec7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104e6eca:;
  /* 104e6eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6ecd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104e6ecf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6ed2 je 0x104e6ef2 */
  if (C.zf) goto L_104e6ef2;
  /* 104e6ed4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6ed7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6eda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e6edd mov ecx, dword ptr [0x1050dc84] */
  ECX = (r32((uint32_t)(0x1050dc84)));
  /* 104e6ee3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e6ee6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e6ee9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6eeb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6eee jae 0x104e6ef2 */
  if (!C.cf) goto L_104e6ef2;
  /* 104e6ef0 jmp 0x104e6eca */
  goto L_104e6eca;
L_104e6ef2:;
  /* 104e6ef2 mov eax, dword ptr [0x1050dc84] */
  EAX = (r32((uint32_t)(0x1050dc84)));
  /* 104e6ef7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104e6efa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e6efd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6eff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6f02 jae 0x104e6f0e */
  if (!C.cf) goto L_104e6f0e;
  /* 104e6f04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6f07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104e6f09 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6f0c je 0x104e6f12 */
  if (C.zf) goto L_104e6f12;
L_104e6f0e:;
  /* 104e6f0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e6f10 jmp 0x104e6f15 */
  goto L_104e6f15;
L_104e6f12:;
  /* 104e6f12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104e6f15:;
  /* 104e6f15 mov esp, ebp */
  ESP = (EBP);
  /* 104e6f17 pop ebp */
  EBP = (pop32());
  /* 104e6f18 ret  */
  ESPCHK(0x104e6ec0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x104e6f20 (48 bytes, 17 insns) */
void f_104e6f20(void) {
  FTRACE(0x104e6f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6f20 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6f21 mov ebp, esp */
  EBP = (ESP);
  /* 104e6f23 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6f24 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e6f26 call 0x104e6c20 */
  push32(0x104e6f2bu); f_104e6c20();
  /* 104e6f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6f2e mov eax, dword ptr [0x1050f6ac] */
  EAX = (r32((uint32_t)(0x1050f6ac)));
  /* 104e6f33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e6f36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6f39 mov dword ptr [0x1050f6ac], ecx */
  w32((uint32_t)(0x1050f6ac), (ECX));
  /* 104e6f3f push 9 */
  push32((uint32_t)(0x9u));
  /* 104e6f41 call 0x104e6cc0 */
  push32(0x104e6f46u); f_104e6cc0();
  /* 104e6f46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6f49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e6f4c mov esp, ebp */
  ESP = (EBP);
  /* 104e6f4e pop ebp */
  EBP = (pop32());
  /* 104e6f4f ret  */
  ESPCHK(0x104e6f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f50 @ 0x104e6f50 (10 bytes, 5 insns) */
void f_104e6f50(void) {
  FTRACE(0x104e6f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6f50 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6f51 mov ebp, esp */
  EBP = (ESP);
  /* 104e6f53 mov eax, dword ptr [0x1050f6ac] */
  EAX = (r32((uint32_t)(0x1050f6ac)));
  /* 104e6f58 pop ebp */
  EBP = (pop32());
  /* 104e6f59 ret  */
  ESPCHK(0x104e6f50u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x104e6f60 (45 bytes, 19 insns) */
void f_104e6f60(void) {
  FTRACE(0x104e6f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6f60 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6f61 mov ebp, esp */
  EBP = (ESP);
  /* 104e6f63 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6f64 mov eax, dword ptr [0x1050f6ac] */
  EAX = (r32((uint32_t)(0x1050f6ac)));
  /* 104e6f69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e6f6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6f70 je 0x104e6f80 */
  if (C.zf) goto L_104e6f80;
  /* 104e6f72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6f75 push ecx */
  push32((uint32_t)(ECX));
  /* 104e6f76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x104e6f79u);
  /* 104e6f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6f7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e6f7e jne 0x104e6f84 */
  if (!C.zf) goto L_104e6f84;
L_104e6f80:;
  /* 104e6f80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e6f82 jmp 0x104e6f89 */
  goto L_104e6f89;
L_104e6f84:;
  /* 104e6f84 mov eax, 1 */
  EAX = (0x1u);
L_104e6f89:;
  /* 104e6f89 mov esp, ebp */
  ESP = (EBP);
  /* 104e6f8b pop ebp */
  EBP = (pop32());
  /* 104e6f8c ret  */
  ESPCHK(0x104e6f60u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x104e6f90 (88 bytes, 40 insns) */
void f_104e6f90(void) {
  FTRACE(0x104e6f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6f90 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 104e6f94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104e6f98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e6f9a je 0x104e6fe3 */
  if (C.zf) goto L_104e6fe3;
  /* 104e6f9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e6f9e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 104e6fa2 push edi */
  push32((uint32_t)(EDI));
  /* 104e6fa3 mov edi, ecx */
  EDI = (ECX);
  /* 104e6fa5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e6fa8 jb 0x104e6fd7 */
  if (C.cf) goto L_104e6fd7;
  /* 104e6faa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 104e6fac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 104e6faf je 0x104e6fb9 */
  if (C.zf) goto L_104e6fb9;
  /* 104e6fb1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_104e6fb3:;
  /* 104e6fb3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e6fb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104e6fb6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104e6fb7 jne 0x104e6fb3 */
  if (!C.zf) goto L_104e6fb3;
L_104e6fb9:;
  /* 104e6fb9 mov ecx, eax */
  ECX = (EAX);
  /* 104e6fbb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 104e6fbe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6fc0 mov ecx, eax */
  ECX = (EAX);
  /* 104e6fc2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104e6fc5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e6fc7 mov ecx, edx */
  ECX = (EDX);
  /* 104e6fc9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 104e6fcc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104e6fcf je 0x104e6fd7 */
  if (C.zf) goto L_104e6fd7;
  /* 104e6fd1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104e6fd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104e6fd5 je 0x104e6fdd */
  if (C.zf) goto L_104e6fdd;
L_104e6fd7:;
  /* 104e6fd7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104e6fd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104e6fda dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 104e6fdb jne 0x104e6fd7 */
  if (!C.zf) goto L_104e6fd7;
L_104e6fdd:;
  /* 104e6fdd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104e6fe1 pop edi */
  EDI = (pop32());
  /* 104e6fe2 ret  */
  ESPCHK(0x104e6f90u, _esp0);
  ESP += 4; return;
L_104e6fe3:;
  /* 104e6fe3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 104e6fe7 ret  */
  ESPCHK(0x104e6f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ff0 @ 0x104e6ff0 (23 bytes, 10 insns) */
void f_104e6ff0(void) {
  FTRACE(0x104e6ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e6ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e6ff1 mov ebp, esp */
  EBP = (ESP);
  /* 104e6ff3 mov eax, dword ptr [0x1050f6a8] */
  EAX = (r32((uint32_t)(0x1050f6a8)));
  /* 104e6ff8 push eax */
  push32((uint32_t)(EAX));
  /* 104e6ff9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e6ffc push ecx */
  push32((uint32_t)(ECX));
  /* 104e6ffd call 0x104e7010 */
  push32(0x104e7002u); f_104e7010();
  /* 104e7002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7005 pop ebp */
  EBP = (pop32());
  /* 104e7006 ret  */
  ESPCHK(0x104e6ff0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x104e7010 (87 bytes, 34 insns) */
void f_104e7010(void) {
  FTRACE(0x104e7010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e7010 push ebp */
  push32((uint32_t)(EBP));
  /* 104e7011 mov ebp, esp */
  EBP = (ESP);
  /* 104e7013 push ecx */
  push32((uint32_t)(ECX));
  /* 104e7014 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7018 jbe 0x104e701e */
  if ((C.cf||C.zf)) goto L_104e701e;
  /* 104e701a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e701c jmp 0x104e7063 */
  goto L_104e7063;
L_104e701e:;
  /* 104e701e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7022 ja 0x104e7035 */
  if ((!C.cf&&!C.zf)) goto L_104e7035;
  /* 104e7024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7027 push eax */
  push32((uint32_t)(EAX));
  /* 104e7028 call 0x104e7070 */
  push32(0x104e702du); f_104e7070();
  /* 104e702d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7030 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e7033 jmp 0x104e703c */
  goto L_104e703c;
L_104e7035:;
  /* 104e7035 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104e703c:;
  /* 104e703c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7040 jne 0x104e7048 */
  if (!C.zf) goto L_104e7048;
  /* 104e7042 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7046 jne 0x104e704d */
  if (!C.zf) goto L_104e704d;
L_104e7048:;
  /* 104e7048 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e704b jmp 0x104e7063 */
  goto L_104e7063;
L_104e704d:;
  /* 104e704d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7050 push ecx */
  push32((uint32_t)(ECX));
  /* 104e7051 call 0x104e6f60 */
  push32(0x104e7056u); f_104e6f60();
  /* 104e7056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e705b jne 0x104e7061 */
  if (!C.zf) goto L_104e7061;
  /* 104e705d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e705f jmp 0x104e7063 */
  goto L_104e7063;
L_104e7061:;
  /* 104e7061 jmp 0x104e701e */
  goto L_104e701e;
L_104e7063:;
  /* 104e7063 mov esp, ebp */
  ESP = (EBP);
  /* 104e7065 pop ebp */
  EBP = (pop32());
  /* 104e7066 ret  */
  ESPCHK(0x104e7010u, _esp0);
  ESP += 4; return;
}

/* FUN_10007070 @ 0x104e7070 (109 bytes, 37 insns) */
void f_104e7070(void) {
  FTRACE(0x104e7070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e7070 push ebp */
  push32((uint32_t)(EBP));
  /* 104e7071 mov ebp, esp */
  EBP = (ESP);
  /* 104e7073 push ecx */
  push32((uint32_t)(ECX));
  /* 104e7074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7077 cmp eax, dword ptr [0x1050dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1050dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e707d ja 0x104e70ad */
  if ((!C.cf&&!C.zf)) goto L_104e70ad;
  /* 104e707f push 9 */
  push32((uint32_t)(0x9u));
  /* 104e7081 call 0x104e6c20 */
  push32(0x104e7086u); f_104e6c20();
  /* 104e7086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7089 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e708c push ecx */
  push32((uint32_t)(ECX));
  /* 104e708d call 0x104e7bb0 */
  push32(0x104e7092u); f_104e7bb0();
  /* 104e7092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7095 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104e7098 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e709a call 0x104e6cc0 */
  push32(0x104e709fu); f_104e6cc0();
  /* 104e709f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e70a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e70a6 je 0x104e70ad */
  if (C.zf) goto L_104e70ad;
  /* 104e70a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e70ab jmp 0x104e70d9 */
  goto L_104e70d9;
L_104e70ad:;
  /* 104e70ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e70b1 jne 0x104e70ba */
  if (!C.zf) goto L_104e70ba;
  /* 104e70b3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_104e70ba:;
  /* 104e70ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e70bd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e70c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 104e70c3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104e70c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e70c9 push eax */
  push32((uint32_t)(EAX));
  /* 104e70ca push 0 */
  push32((uint32_t)(0x0u));
  /* 104e70cc mov ecx, dword ptr [0x10510e6c] */
  ECX = (r32((uint32_t)(0x10510e6c)));
  /* 104e70d2 push ecx */
  push32((uint32_t)(ECX));
  /* 104e70d3 call dword ptr [0x10512328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10512328))), 0x104e70d9u);
L_104e70d9:;
  /* 104e70d9 mov esp, ebp */
  ESP = (EBP);
  /* 104e70db pop ebp */
  EBP = (pop32());
  /* 104e70dc ret  */
  ESPCHK(0x104e7070u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e0 @ 0x104e70e0 (10 bytes, 5 insns) */
void f_104e70e0(void) {
  FTRACE(0x104e70e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e70e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e70e1 mov ebp, esp */
  EBP = (ESP);
  /* 104e70e3 mov eax, 1 */
  EAX = (0x1u);
  /* 104e70e8 pop ebp */
  EBP = (pop32());
  /* 104e70e9 ret  */
  ESPCHK(0x104e70e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070f0 @ 0x104e70f0 (173 bytes, 59 insns) */
void f_104e70f0(void) {
  FTRACE(0x104e70f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104e70f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104e70f1 mov ebp, esp */
  EBP = (ESP);
  /* 104e70f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104e70f6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e70fa jbe 0x104e7103 */
  if ((C.cf||C.zf)) goto L_104e7103;
  /* 104e70fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104e70fe jmp 0x104e7199 */
  goto L_104e7199;
L_104e7103:;
  /* 104e7103 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e7105 call 0x104e6c20 */
  push32(0x104e710au); f_104e6c20();
  /* 104e710a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e710d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e7110 push eax */
  push32((uint32_t)(EAX));
  /* 104e7111 call 0x104e7520 */
  push32(0x104e7116u); f_104e7520();
  /* 104e7116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7119 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104e711c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7120 je 0x104e7161 */
  if (C.zf) goto L_104e7161;
  /* 104e7122 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104e7129 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e712c cmp ecx, dword ptr [0x1050dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1050dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e7132 ja 0x104e7152 */
  if ((!C.cf&&!C.zf)) goto L_104e7152;
  /* 104e7134 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e7137 push edx */
  push32((uint32_t)(EDX));
  /* 104e7138 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e713b push eax */
  push32((uint32_t)(EAX));
  /* 104e713c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104e713f push ecx */
  push32((uint32_t)(ECX));
  /* 104e7140 call 0x104e83f0 */
  push32(0x104e7145u); f_104e83f0();
  /* 104e7145 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e7148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104e714a je 0x104e7152 */
  if (C.zf) goto L_104e7152;
  /* 104e714c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e714f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104e7152:;
  /* 104e7152 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e7154 call 0x104e6cc0 */
  push32(0x104e7159u); f_104e6cc0();
  /* 104e7159 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e715c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104e715f jmp 0x104e7199 */
  goto L_104e7199;
L_104e7161:;
  /* 104e7161 push 9 */
  push32((uint32_t)(0x9u));
  /* 104e7163 call 0x104e6cc0 */
  push32(0x104e7168u); f_104e6cc0();
  /* 104e7168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104e716b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104e716f jne 0x104e7178 */
  if (!C.zf) goto L_104e7178;
  /* 104e7171 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_104e7178:;
  /* 104e7178 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e717b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104e717e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 104e7180 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 104e7183 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104e7186 push ecx */
  push32((uint32_t)(ECX));
  /* 104e7187 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104e718a push edx */
  push32((uint32_t)(EDX));
  /* 104e718b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 104e718d mov eax, dword ptr [0x10510e6c] */
  EAX = (r32((uint32_t)(0x10510e6c)));
  /* 104e7192 push eax */
  push32((uint32_t)(EAX));
  /* 104e7193 call dword ptr [0x1051232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1051232c))), 0x104e7199u);
L_104e7199:;
  /* 104e7199 mov esp, ebp */
  ESP = (EBP);
  /* 104e719b pop ebp */
  EBP = (pop32());
  /* 104e719c ret  */
  ESPCHK(0x104e70f0u, _esp0);
  ESP += 4; return;
}

