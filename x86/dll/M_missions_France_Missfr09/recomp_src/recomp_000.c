#include "recomp.h"

/* thunk_FUN_10003b70 @ 0x107e1005 (5 bytes, 1 insns) */
void f_107e1005(void) {
  FTRACE(0x107e1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e1005 jmp 0x107e3b70 */
  f_107e3b70(); return;
}

/* OnInit @ 0x107e100a (5 bytes, 1 insns) */
void f_107e100a(void) {
  FTRACE(0x107e100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e100a jmp 0x107e10a0 */
  f_107e10a0(); return;
}

/* thunk_FUN_10003bc0 @ 0x107e100f (5 bytes, 1 insns) */
void f_107e100f(void) {
  FTRACE(0x107e100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e100f jmp 0x107e3bc0 */
  f_107e3bc0(); return;
}

/* thunk_FUN_10001040 @ 0x107e1014 (5 bytes, 1 insns) */
void f_107e1014(void) {
  FTRACE(0x107e1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e1014 jmp 0x107e1040 */
  f_107e1040(); return;
}

/* ProcessScenary @ 0x107e1019 (5 bytes, 1 insns) */
void f_107e1019(void) {
  FTRACE(0x107e1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e1019 jmp 0x107e18f0 */
  f_107e18f0(); return;
}

/* FUN_10001040 @ 0x107e1040 (67 bytes, 26 insns) */
void f_107e1040(void) {
  FTRACE(0x107e1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e1040 push ebp */
  push32((uint32_t)(EBP));
  /* 107e1041 mov ebp, esp */
  EBP = (ESP);
  /* 107e1043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e1046 push ebx */
  push32((uint32_t)(EBX));
  /* 107e1047 push esi */
  push32((uint32_t)(ESI));
  /* 107e1048 push edi */
  push32((uint32_t)(EDI));
  /* 107e1049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 107e104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 107e1051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107e1056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107e1058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1062 je 0x107e1066 */
  if (C.zf) goto L_107e1066;
  /* 107e1064 jmp 0x107e106b */
  goto L_107e106b;
L_107e1066:;
  /* 107e1066 call 0x107e100a */
  push32(0x107e106bu); f_107e100a();
L_107e106b:;
  /* 107e106b mov eax, 1 */
  EAX = (0x1u);
  /* 107e1070 pop edi */
  EDI = (pop32());
  /* 107e1071 pop esi */
  ESI = (pop32());
  /* 107e1072 pop ebx */
  EBX = (pop32());
  /* 107e1073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1078 call 0x107e3d00 */
  push32(0x107e107du); f_107e3d00();
  /* 107e107d mov esp, ebp */
  ESP = (EBP);
  /* 107e107f pop ebp */
  EBP = (pop32());
  /* 107e1080 ret 0xc */
  ESPCHK(0x107e1040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x107e10a0 (1694 bytes, 439 insns) */
void f_107e10a0(void) {
  FTRACE(0x107e10a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e10a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e10a1 mov ebp, esp */
  EBP = (ESP);
  /* 107e10a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e10a6 push ebx */
  push32((uint32_t)(EBX));
  /* 107e10a7 push esi */
  push32((uint32_t)(ESI));
  /* 107e10a8 push edi */
  push32((uint32_t)(EDI));
  /* 107e10a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107e10ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107e10b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107e10b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107e10b8 mov esi, esp */
  ESI = (ESP);
  /* 107e10ba push 0x1080b258 */
  push32((uint32_t)(0x1080b258u));
  /* 107e10bf push 0x10810498 */
  push32((uint32_t)(0x10810498u));
  /* 107e10c4 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e10cau);
  /* 107e10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e10cf call 0x107e3d00 */
  push32(0x107e10d4u); f_107e3d00();
  /* 107e10d4 mov esi, esp */
  ESI = (ESP);
  /* 107e10d6 push 0x1080b250 */
  push32((uint32_t)(0x1080b250u));
  /* 107e10db push 0x108104a0 */
  push32((uint32_t)(0x108104a0u));
  /* 107e10e0 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e10e6u);
  /* 107e10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e10eb call 0x107e3d00 */
  push32(0x107e10f0u); f_107e3d00();
  /* 107e10f0 mov esi, esp */
  ESI = (ESP);
  /* 107e10f2 push 0x1080b248 */
  push32((uint32_t)(0x1080b248u));
  /* 107e10f7 push 0x108104a8 */
  push32((uint32_t)(0x108104a8u));
  /* 107e10fc call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e1102u);
  /* 107e1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1107 call 0x107e3d00 */
  push32(0x107e110cu); f_107e3d00();
  /* 107e110c mov esi, esp */
  ESI = (ESP);
  /* 107e110e push 0x1080b240 */
  push32((uint32_t)(0x1080b240u));
  /* 107e1113 push 0x108104b0 */
  push32((uint32_t)(0x108104b0u));
  /* 107e1118 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e111eu);
  /* 107e111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1123 call 0x107e3d00 */
  push32(0x107e1128u); f_107e3d00();
  /* 107e1128 mov esi, esp */
  ESI = (ESP);
  /* 107e112a push 0x1080b238 */
  push32((uint32_t)(0x1080b238u));
  /* 107e112f push 0x108104b8 */
  push32((uint32_t)(0x108104b8u));
  /* 107e1134 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e113au);
  /* 107e113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e113f call 0x107e3d00 */
  push32(0x107e1144u); f_107e3d00();
  /* 107e1144 mov esi, esp */
  ESI = (ESP);
  /* 107e1146 push 0x1080b230 */
  push32((uint32_t)(0x1080b230u));
  /* 107e114b push 0x108104c0 */
  push32((uint32_t)(0x108104c0u));
  /* 107e1150 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e1156u);
  /* 107e1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e115b call 0x107e3d00 */
  push32(0x107e1160u); f_107e3d00();
  /* 107e1160 mov esi, esp */
  ESI = (ESP);
  /* 107e1162 push 0x1080b228 */
  push32((uint32_t)(0x1080b228u));
  /* 107e1167 push 0x10810480 */
  push32((uint32_t)(0x10810480u));
  /* 107e116c call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e1172u);
  /* 107e1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1177 call 0x107e3d00 */
  push32(0x107e117cu); f_107e3d00();
  /* 107e117c mov esi, esp */
  ESI = (ESP);
  /* 107e117e push 0x1080b220 */
  push32((uint32_t)(0x1080b220u));
  /* 107e1183 push 0x108104c8 */
  push32((uint32_t)(0x108104c8u));
  /* 107e1188 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e118eu);
  /* 107e118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1193 call 0x107e3d00 */
  push32(0x107e1198u); f_107e3d00();
  /* 107e1198 mov esi, esp */
  ESI = (ESP);
  /* 107e119a push 0x1080b218 */
  push32((uint32_t)(0x1080b218u));
  /* 107e119f push 0x108104d0 */
  push32((uint32_t)(0x108104d0u));
  /* 107e11a4 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e11aau);
  /* 107e11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e11af call 0x107e3d00 */
  push32(0x107e11b4u); f_107e3d00();
  /* 107e11b4 mov esi, esp */
  ESI = (ESP);
  /* 107e11b6 push 0x1080b210 */
  push32((uint32_t)(0x1080b210u));
  /* 107e11bb push 0x108104d8 */
  push32((uint32_t)(0x108104d8u));
  /* 107e11c0 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e11c6u);
  /* 107e11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e11cb call 0x107e3d00 */
  push32(0x107e11d0u); f_107e3d00();
  /* 107e11d0 mov esi, esp */
  ESI = (ESP);
  /* 107e11d2 push 0x1080b208 */
  push32((uint32_t)(0x1080b208u));
  /* 107e11d7 push 0x10810438 */
  push32((uint32_t)(0x10810438u));
  /* 107e11dc call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e11e2u);
  /* 107e11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e11e7 call 0x107e3d00 */
  push32(0x107e11ecu); f_107e3d00();
  /* 107e11ec mov esi, esp */
  ESI = (ESP);
  /* 107e11ee push 0x1080b200 */
  push32((uint32_t)(0x1080b200u));
  /* 107e11f3 push 0x10810430 */
  push32((uint32_t)(0x10810430u));
  /* 107e11f8 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e11feu);
  /* 107e11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1203 call 0x107e3d00 */
  push32(0x107e1208u); f_107e3d00();
  /* 107e1208 mov esi, esp */
  ESI = (ESP);
  /* 107e120a push 0x1080b1f8 */
  push32((uint32_t)(0x1080b1f8u));
  /* 107e120f push 0x10810448 */
  push32((uint32_t)(0x10810448u));
  /* 107e1214 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e121au);
  /* 107e121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e121f call 0x107e3d00 */
  push32(0x107e1224u); f_107e3d00();
  /* 107e1224 mov esi, esp */
  ESI = (ESP);
  /* 107e1226 push 0x1080b1f0 */
  push32((uint32_t)(0x1080b1f0u));
  /* 107e122b push 0x10810440 */
  push32((uint32_t)(0x10810440u));
  /* 107e1230 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e1236u);
  /* 107e1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e123b call 0x107e3d00 */
  push32(0x107e1240u); f_107e3d00();
  /* 107e1240 mov esi, esp */
  ESI = (ESP);
  /* 107e1242 push 0x1080b1e8 */
  push32((uint32_t)(0x1080b1e8u));
  /* 107e1247 push 0x10810458 */
  push32((uint32_t)(0x10810458u));
  /* 107e124c call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e1252u);
  /* 107e1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1257 call 0x107e3d00 */
  push32(0x107e125cu); f_107e3d00();
  /* 107e125c mov esi, esp */
  ESI = (ESP);
  /* 107e125e push 0x1080b1e0 */
  push32((uint32_t)(0x1080b1e0u));
  /* 107e1263 push 0x10810450 */
  push32((uint32_t)(0x10810450u));
  /* 107e1268 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e126eu);
  /* 107e126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1273 call 0x107e3d00 */
  push32(0x107e1278u); f_107e3d00();
  /* 107e1278 mov esi, esp */
  ESI = (ESP);
  /* 107e127a push 0x1080b1d8 */
  push32((uint32_t)(0x1080b1d8u));
  /* 107e127f push 0x10810468 */
  push32((uint32_t)(0x10810468u));
  /* 107e1284 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e128au);
  /* 107e128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e128f call 0x107e3d00 */
  push32(0x107e1294u); f_107e3d00();
  /* 107e1294 mov esi, esp */
  ESI = (ESP);
  /* 107e1296 push 0x1080b1d0 */
  push32((uint32_t)(0x1080b1d0u));
  /* 107e129b push 0x10810460 */
  push32((uint32_t)(0x10810460u));
  /* 107e12a0 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e12a6u);
  /* 107e12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e12ab call 0x107e3d00 */
  push32(0x107e12b0u); f_107e3d00();
  /* 107e12b0 mov esi, esp */
  ESI = (ESP);
  /* 107e12b2 push 0x1080b1c8 */
  push32((uint32_t)(0x1080b1c8u));
  /* 107e12b7 push 0x10810478 */
  push32((uint32_t)(0x10810478u));
  /* 107e12bc call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e12c2u);
  /* 107e12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e12c7 call 0x107e3d00 */
  push32(0x107e12ccu); f_107e3d00();
  /* 107e12cc mov esi, esp */
  ESI = (ESP);
  /* 107e12ce push 0x1080b1c0 */
  push32((uint32_t)(0x1080b1c0u));
  /* 107e12d3 push 0x10810470 */
  push32((uint32_t)(0x10810470u));
  /* 107e12d8 call dword ptr [0x108134a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a0))), 0x107e12deu);
  /* 107e12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e12e3 call 0x107e3d00 */
  push32(0x107e12e8u); f_107e3d00();
  /* 107e12e8 mov esi, esp */
  ESI = (ESP);
  /* 107e12ea push 0x1080b1b8 */
  push32((uint32_t)(0x1080b1b8u));
  /* 107e12ef push 0x108103e8 */
  push32((uint32_t)(0x108103e8u));
  /* 107e12f4 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e12fau);
  /* 107e12fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e12fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e12ff call 0x107e3d00 */
  push32(0x107e1304u); f_107e3d00();
  /* 107e1304 mov esi, esp */
  ESI = (ESP);
  /* 107e1306 push 0x1080b1b0 */
  push32((uint32_t)(0x1080b1b0u));
  /* 107e130b push 0x108103f8 */
  push32((uint32_t)(0x108103f8u));
  /* 107e1310 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e1316u);
  /* 107e1316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e131b call 0x107e3d00 */
  push32(0x107e1320u); f_107e3d00();
  /* 107e1320 mov esi, esp */
  ESI = (ESP);
  /* 107e1322 push 0x1080b1a8 */
  push32((uint32_t)(0x1080b1a8u));
  /* 107e1327 push 0x108103f0 */
  push32((uint32_t)(0x108103f0u));
  /* 107e132c call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e1332u);
  /* 107e1332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1337 call 0x107e3d00 */
  push32(0x107e133cu); f_107e3d00();
  /* 107e133c mov esi, esp */
  ESI = (ESP);
  /* 107e133e push 0x1080b1a0 */
  push32((uint32_t)(0x1080b1a0u));
  /* 107e1343 push 0x10810408 */
  push32((uint32_t)(0x10810408u));
  /* 107e1348 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e134eu);
  /* 107e134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1353 call 0x107e3d00 */
  push32(0x107e1358u); f_107e3d00();
  /* 107e1358 mov esi, esp */
  ESI = (ESP);
  /* 107e135a push 0x1080b198 */
  push32((uint32_t)(0x1080b198u));
  /* 107e135f push 0x10810400 */
  push32((uint32_t)(0x10810400u));
  /* 107e1364 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e136au);
  /* 107e136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e136f call 0x107e3d00 */
  push32(0x107e1374u); f_107e3d00();
  /* 107e1374 mov esi, esp */
  ESI = (ESP);
  /* 107e1376 push 0x1080b190 */
  push32((uint32_t)(0x1080b190u));
  /* 107e137b push 0x10810418 */
  push32((uint32_t)(0x10810418u));
  /* 107e1380 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e1386u);
  /* 107e1386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e138b call 0x107e3d00 */
  push32(0x107e1390u); f_107e3d00();
  /* 107e1390 mov esi, esp */
  ESI = (ESP);
  /* 107e1392 push 0x1080b188 */
  push32((uint32_t)(0x1080b188u));
  /* 107e1397 push 0x10810410 */
  push32((uint32_t)(0x10810410u));
  /* 107e139c call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e13a2u);
  /* 107e13a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e13a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e13a7 call 0x107e3d00 */
  push32(0x107e13acu); f_107e3d00();
  /* 107e13ac mov esi, esp */
  ESI = (ESP);
  /* 107e13ae push 0x1080b180 */
  push32((uint32_t)(0x1080b180u));
  /* 107e13b3 push 0x10810428 */
  push32((uint32_t)(0x10810428u));
  /* 107e13b8 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e13beu);
  /* 107e13be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e13c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e13c3 call 0x107e3d00 */
  push32(0x107e13c8u); f_107e3d00();
  /* 107e13c8 mov esi, esp */
  ESI = (ESP);
  /* 107e13ca push 0x1080b178 */
  push32((uint32_t)(0x1080b178u));
  /* 107e13cf push 0x10810420 */
  push32((uint32_t)(0x10810420u));
  /* 107e13d4 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e13dau);
  /* 107e13da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e13dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e13df call 0x107e3d00 */
  push32(0x107e13e4u); f_107e3d00();
  /* 107e13e4 mov esi, esp */
  ESI = (ESP);
  /* 107e13e6 push 0x1080b16c */
  push32((uint32_t)(0x1080b16cu));
  /* 107e13eb push 0x108104e0 */
  push32((uint32_t)(0x108104e0u));
  /* 107e13f0 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e13f6u);
  /* 107e13f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e13fb call 0x107e3d00 */
  push32(0x107e1400u); f_107e3d00();
  /* 107e1400 mov esi, esp */
  ESI = (ESP);
  /* 107e1402 push 0x1080b160 */
  push32((uint32_t)(0x1080b160u));
  /* 107e1407 push 0x10810548 */
  push32((uint32_t)(0x10810548u));
  /* 107e140c call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e1412u);
  /* 107e1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1417 call 0x107e3d00 */
  push32(0x107e141cu); f_107e3d00();
  /* 107e141c mov esi, esp */
  ESI = (ESP);
  /* 107e141e push 0x1080b154 */
  push32((uint32_t)(0x1080b154u));
  /* 107e1423 push 0x10810550 */
  push32((uint32_t)(0x10810550u));
  /* 107e1428 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e142eu);
  /* 107e142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1433 call 0x107e3d00 */
  push32(0x107e1438u); f_107e3d00();
  /* 107e1438 mov esi, esp */
  ESI = (ESP);
  /* 107e143a push 0x1080b148 */
  push32((uint32_t)(0x1080b148u));
  /* 107e143f push 0x10810530 */
  push32((uint32_t)(0x10810530u));
  /* 107e1444 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e144au);
  /* 107e144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e144f call 0x107e3d00 */
  push32(0x107e1454u); f_107e3d00();
  /* 107e1454 mov esi, esp */
  ESI = (ESP);
  /* 107e1456 push 0x1080b13c */
  push32((uint32_t)(0x1080b13cu));
  /* 107e145b push 0x108103e0 */
  push32((uint32_t)(0x108103e0u));
  /* 107e1460 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e1466u);
  /* 107e1466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e146b call 0x107e3d00 */
  push32(0x107e1470u); f_107e3d00();
  /* 107e1470 mov esi, esp */
  ESI = (ESP);
  /* 107e1472 push 0x1080b130 */
  push32((uint32_t)(0x1080b130u));
  /* 107e1477 push 0x10810540 */
  push32((uint32_t)(0x10810540u));
  /* 107e147c call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e1482u);
  /* 107e1482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1487 call 0x107e3d00 */
  push32(0x107e148cu); f_107e3d00();
  /* 107e148c mov esi, esp */
  ESI = (ESP);
  /* 107e148e push 0x1080b124 */
  push32((uint32_t)(0x1080b124u));
  /* 107e1493 push 0x10810518 */
  push32((uint32_t)(0x10810518u));
  /* 107e1498 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e149eu);
  /* 107e149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e14a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e14a3 call 0x107e3d00 */
  push32(0x107e14a8u); f_107e3d00();
  /* 107e14a8 mov esi, esp */
  ESI = (ESP);
  /* 107e14aa push 0x1080b118 */
  push32((uint32_t)(0x1080b118u));
  /* 107e14af push 0x10810528 */
  push32((uint32_t)(0x10810528u));
  /* 107e14b4 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e14bau);
  /* 107e14ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e14bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e14bf call 0x107e3d00 */
  push32(0x107e14c4u); f_107e3d00();
  /* 107e14c4 mov esi, esp */
  ESI = (ESP);
  /* 107e14c6 push 0x1080b10c */
  push32((uint32_t)(0x1080b10cu));
  /* 107e14cb push 0x108104f0 */
  push32((uint32_t)(0x108104f0u));
  /* 107e14d0 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e14d6u);
  /* 107e14d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e14d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e14db call 0x107e3d00 */
  push32(0x107e14e0u); f_107e3d00();
  /* 107e14e0 mov esi, esp */
  ESI = (ESP);
  /* 107e14e2 push 0x1080b100 */
  push32((uint32_t)(0x1080b100u));
  /* 107e14e7 push 0x10810508 */
  push32((uint32_t)(0x10810508u));
  /* 107e14ec call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e14f2u);
  /* 107e14f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e14f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e14f7 call 0x107e3d00 */
  push32(0x107e14fcu); f_107e3d00();
  /* 107e14fc mov esi, esp */
  ESI = (ESP);
  /* 107e14fe push 0x1080b0f4 */
  push32((uint32_t)(0x1080b0f4u));
  /* 107e1503 push 0x10810578 */
  push32((uint32_t)(0x10810578u));
  /* 107e1508 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e150eu);
  /* 107e150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1513 call 0x107e3d00 */
  push32(0x107e1518u); f_107e3d00();
  /* 107e1518 mov esi, esp */
  ESI = (ESP);
  /* 107e151a push 0x1080b0e8 */
  push32((uint32_t)(0x1080b0e8u));
  /* 107e151f push 0x10810538 */
  push32((uint32_t)(0x10810538u));
  /* 107e1524 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e152au);
  /* 107e152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e152f call 0x107e3d00 */
  push32(0x107e1534u); f_107e3d00();
  /* 107e1534 mov esi, esp */
  ESI = (ESP);
  /* 107e1536 push 0x1080b0dc */
  push32((uint32_t)(0x1080b0dcu));
  /* 107e153b push 0x10810510 */
  push32((uint32_t)(0x10810510u));
  /* 107e1540 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e1546u);
  /* 107e1546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e154b call 0x107e3d00 */
  push32(0x107e1550u); f_107e3d00();
  /* 107e1550 mov esi, esp */
  ESI = (ESP);
  /* 107e1552 push 0x1080b0d0 */
  push32((uint32_t)(0x1080b0d0u));
  /* 107e1557 push 0x10810520 */
  push32((uint32_t)(0x10810520u));
  /* 107e155c call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e1562u);
  /* 107e1562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1567 call 0x107e3d00 */
  push32(0x107e156cu); f_107e3d00();
  /* 107e156c mov esi, esp */
  ESI = (ESP);
  /* 107e156e push 0x1080b0c4 */
  push32((uint32_t)(0x1080b0c4u));
  /* 107e1573 push 0x108104e8 */
  push32((uint32_t)(0x108104e8u));
  /* 107e1578 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e157eu);
  /* 107e157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1583 call 0x107e3d00 */
  push32(0x107e1588u); f_107e3d00();
  /* 107e1588 mov esi, esp */
  ESI = (ESP);
  /* 107e158a push 0x1080b0b8 */
  push32((uint32_t)(0x1080b0b8u));
  /* 107e158f push 0x10810500 */
  push32((uint32_t)(0x10810500u));
  /* 107e1594 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e159au);
  /* 107e159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e159f call 0x107e3d00 */
  push32(0x107e15a4u); f_107e3d00();
  /* 107e15a4 mov esi, esp */
  ESI = (ESP);
  /* 107e15a6 push 0x1080b0ac */
  push32((uint32_t)(0x1080b0acu));
  /* 107e15ab push 0x10810570 */
  push32((uint32_t)(0x10810570u));
  /* 107e15b0 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e15b6u);
  /* 107e15b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e15b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e15bb call 0x107e3d00 */
  push32(0x107e15c0u); f_107e3d00();
  /* 107e15c0 mov esi, esp */
  ESI = (ESP);
  /* 107e15c2 push 0x1080b0a0 */
  push32((uint32_t)(0x1080b0a0u));
  /* 107e15c7 push 0x10810580 */
  push32((uint32_t)(0x10810580u));
  /* 107e15cc call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e15d2u);
  /* 107e15d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e15d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e15d7 call 0x107e3d00 */
  push32(0x107e15dcu); f_107e3d00();
  /* 107e15dc mov esi, esp */
  ESI = (ESP);
  /* 107e15de push 0x1080b094 */
  push32((uint32_t)(0x1080b094u));
  /* 107e15e3 push 0x10810560 */
  push32((uint32_t)(0x10810560u));
  /* 107e15e8 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e15eeu);
  /* 107e15ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e15f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e15f3 call 0x107e3d00 */
  push32(0x107e15f8u); f_107e3d00();
  /* 107e15f8 mov esi, esp */
  ESI = (ESP);
  /* 107e15fa push 0x1080b088 */
  push32((uint32_t)(0x1080b088u));
  /* 107e15ff push 0x10810568 */
  push32((uint32_t)(0x10810568u));
  /* 107e1604 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e160au);
  /* 107e160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e160f call 0x107e3d00 */
  push32(0x107e1614u); f_107e3d00();
  /* 107e1614 mov esi, esp */
  ESI = (ESP);
  /* 107e1616 push 0x1080b07c */
  push32((uint32_t)(0x1080b07cu));
  /* 107e161b push 0x10810558 */
  push32((uint32_t)(0x10810558u));
  /* 107e1620 call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e1626u);
  /* 107e1626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e162b call 0x107e3d00 */
  push32(0x107e1630u); f_107e3d00();
  /* 107e1630 mov esi, esp */
  ESI = (ESP);
  /* 107e1632 push 0x1080b070 */
  push32((uint32_t)(0x1080b070u));
  /* 107e1637 push 0x108104f8 */
  push32((uint32_t)(0x108104f8u));
  /* 107e163c call dword ptr [0x108134a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a4))), 0x107e1642u);
  /* 107e1642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1647 call 0x107e3d00 */
  push32(0x107e164cu); f_107e3d00();
  /* 107e164c mov esi, esp */
  ESI = (ESP);
  /* 107e164e push 4 */
  push32((uint32_t)(0x4u));
  /* 107e1650 push 0x10810490 */
  push32((uint32_t)(0x10810490u));
  /* 107e1655 call dword ptr [0x1081349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081349c))), 0x107e165bu);
  /* 107e165b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e165e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1660 call 0x107e3d00 */
  push32(0x107e1665u); f_107e3d00();
  /* 107e1665 mov esi, esp */
  ESI = (ESP);
  /* 107e1667 push 0x1080b060 */
  push32((uint32_t)(0x1080b060u));
  /* 107e166c push 0x10810588 */
  push32((uint32_t)(0x10810588u));
  /* 107e1671 call dword ptr [0x108134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134ac))), 0x107e1677u);
  /* 107e1677 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e167a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e167c call 0x107e3d00 */
  push32(0x107e1681u); f_107e3d00();
  /* 107e1681 mov esi, esp */
  ESI = (ESP);
  /* 107e1683 push 0x1080b044 */
  push32((uint32_t)(0x1080b044u));
  /* 107e1688 push 0x10810488 */
  push32((uint32_t)(0x10810488u));
  /* 107e168d call dword ptr [0x108134ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134ac))), 0x107e1693u);
  /* 107e1693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1696 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1698 call 0x107e3d00 */
  push32(0x107e169du); f_107e3d00();
  /* 107e169d mov esi, esp */
  ESI = (ESP);
  /* 107e169f push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107e16a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e16a3 call dword ptr [0x108134b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134b0))), 0x107e16a9u);
  /* 107e16a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e16ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e16ae call 0x107e3d00 */
  push32(0x107e16b3u); f_107e3d00();
  /* 107e16b3 mov esi, esp */
  ESI = (ESP);
  /* 107e16b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e16b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e16b9 call dword ptr [0x108134b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134b0))), 0x107e16bfu);
  /* 107e16bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e16c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e16c4 call 0x107e3d00 */
  push32(0x107e16c9u); f_107e3d00();
  /* 107e16c9 mov esi, esp */
  ESI = (ESP);
  /* 107e16cb push 0x1080b03c */
  push32((uint32_t)(0x1080b03cu));
  /* 107e16d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e16d2 call dword ptr [0x108134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a8))), 0x107e16d8u);
  /* 107e16d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e16db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e16dd call 0x107e3d00 */
  push32(0x107e16e2u); f_107e3d00();
  /* 107e16e2 mov esi, esp */
  ESI = (ESP);
  /* 107e16e4 push 0x1080b030 */
  push32((uint32_t)(0x1080b030u));
  /* 107e16e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e16eb call dword ptr [0x108134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a8))), 0x107e16f1u);
  /* 107e16f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e16f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e16f6 call 0x107e3d00 */
  push32(0x107e16fbu); f_107e3d00();
  /* 107e16fb mov esi, esp */
  ESI = (ESP);
  /* 107e16fd push 0x1080b028 */
  push32((uint32_t)(0x1080b028u));
  /* 107e1702 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e1704 call dword ptr [0x108134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a8))), 0x107e170au);
  /* 107e170a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e170d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e170f call 0x107e3d00 */
  push32(0x107e1714u); f_107e3d00();
  /* 107e1714 mov esi, esp */
  ESI = (ESP);
  /* 107e1716 push 0x1080b01c */
  push32((uint32_t)(0x1080b01cu));
  /* 107e171b push 5 */
  push32((uint32_t)(0x5u));
  /* 107e171d call dword ptr [0x108134a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108134a8))), 0x107e1723u);
  /* 107e1723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1728 call 0x107e3d00 */
  push32(0x107e172du); f_107e3d00();
  /* 107e172d pop edi */
  EDI = (pop32());
  /* 107e172e pop esi */
  ESI = (pop32());
  /* 107e172f pop ebx */
  EBX = (pop32());
  /* 107e1730 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1733 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1735 call 0x107e3d00 */
  push32(0x107e173au); f_107e3d00();
  /* 107e173a mov esp, ebp */
  ESP = (EBP);
  /* 107e173c pop ebp */
  EBP = (pop32());
  /* 107e173d ret  */
  ESPCHK(0x107e10a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100018f0 @ 0x107e18f0 (7066 bytes, 2060 insns) */
void f_107e18f0(void) {
  FTRACE(0x107e18f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e18f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e18f1 mov ebp, esp */
  EBP = (ESP);
  /* 107e18f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e18f6 push ebx */
  push32((uint32_t)(EBX));
  /* 107e18f7 push esi */
  push32((uint32_t)(ESI));
  /* 107e18f8 push edi */
  push32((uint32_t)(EDI));
  /* 107e18f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107e18fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107e1901 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107e1906 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107e1908 mov esi, esp */
  ESI = (ESP);
  /* 107e190a push 1 */
  push32((uint32_t)(0x1u));
  /* 107e190c call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1912u);
  /* 107e1912 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1915 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1917 call 0x107e3d00 */
  push32(0x107e191cu); f_107e3d00();
  /* 107e191c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1923 je 0x107e1a99 */
  if (C.zf) goto L_107e1a99;
  /* 107e1929 mov esi, esp */
  ESI = (ESP);
  /* 107e192b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e192d push 1 */
  push32((uint32_t)(0x1u));
  /* 107e192f call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e1935u);
  /* 107e1935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1938 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e193a call 0x107e3d00 */
  push32(0x107e193fu); f_107e3d00();
  /* 107e193f mov esi, esp */
  ESI = (ESP);
  /* 107e1941 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 107e1946 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e1948 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e194a call dword ptr [0x10813434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813434))), 0x107e1950u);
  /* 107e1950 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1953 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1955 call 0x107e3d00 */
  push32(0x107e195au); f_107e3d00();
  /* 107e195a mov esi, esp */
  ESI = (ESP);
  /* 107e195c push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 107e1961 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e1963 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1965 call dword ptr [0x10813434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813434))), 0x107e196bu);
  /* 107e196b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e196e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1970 call 0x107e3d00 */
  push32(0x107e1975u); f_107e3d00();
  /* 107e1975 mov esi, esp */
  ESI = (ESP);
  /* 107e1977 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1979 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e197b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e197d call dword ptr [0x10813434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813434))), 0x107e1983u);
  /* 107e1983 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1986 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1988 call 0x107e3d00 */
  push32(0x107e198du); f_107e3d00();
  /* 107e198d mov esi, esp */
  ESI = (ESP);
  /* 107e198f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1991 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e1993 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1995 call dword ptr [0x10813434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813434))), 0x107e199bu);
  /* 107e199b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e199e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e19a0 call 0x107e3d00 */
  push32(0x107e19a5u); f_107e3d00();
  /* 107e19a5 mov esi, esp */
  ESI = (ESP);
  /* 107e19a7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 107e19ac push 5 */
  push32((uint32_t)(0x5u));
  /* 107e19ae push 0 */
  push32((uint32_t)(0x0u));
  /* 107e19b0 call dword ptr [0x10813434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813434))), 0x107e19b6u);
  /* 107e19b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e19b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e19bb call 0x107e3d00 */
  push32(0x107e19c0u); f_107e3d00();
  /* 107e19c0 mov esi, esp */
  ESI = (ESP);
  /* 107e19c2 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 107e19c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e19c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e19cb call dword ptr [0x10813434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813434))), 0x107e19d1u);
  /* 107e19d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e19d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e19d6 call 0x107e3d00 */
  push32(0x107e19dbu); f_107e3d00();
  /* 107e19db mov esi, esp */
  ESI = (ESP);
  /* 107e19dd push 0x1080b3b4 */
  push32((uint32_t)(0x1080b3b4u));
  /* 107e19e2 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e19e8u);
  /* 107e19e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e19eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e19ed call 0x107e3d00 */
  push32(0x107e19f2u); f_107e3d00();
  /* 107e19f2 mov esi, esp */
  ESI = (ESP);
  /* 107e19f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e19f6 push 0x10810538 */
  push32((uint32_t)(0x10810538u));
  /* 107e19fb call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e1a01u);
  /* 107e1a01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1a04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1a06 call 0x107e3d00 */
  push32(0x107e1a0bu); f_107e3d00();
  /* 107e1a0b mov esi, esp */
  ESI = (ESP);
  /* 107e1a0d push 1 */
  push32((uint32_t)(0x1u));
  /* 107e1a0f push 0x10810510 */
  push32((uint32_t)(0x10810510u));
  /* 107e1a14 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e1a1au);
  /* 107e1a1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1a1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1a1f call 0x107e3d00 */
  push32(0x107e1a24u); f_107e3d00();
  /* 107e1a24 mov esi, esp */
  ESI = (ESP);
  /* 107e1a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1a28 push 0x10810458 */
  push32((uint32_t)(0x10810458u));
  /* 107e1a2d push 1 */
  push32((uint32_t)(0x1u));
  /* 107e1a2f call dword ptr [0x10813440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813440))), 0x107e1a35u);
  /* 107e1a35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1a38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1a3a call 0x107e3d00 */
  push32(0x107e1a3fu); f_107e3d00();
  /* 107e1a3f mov dword ptr [0x10810490], 0 */
  w32((uint32_t)(0x10810490), (0x0u));
  /* 107e1a49 mov esi, esp */
  ESI = (ESP);
  /* 107e1a4b push 0x42 */
  push32((uint32_t)(0x42u));
  /* 107e1a4d call dword ptr [0x10813444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813444))), 0x107e1a53u);
  /* 107e1a53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1a56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1a58 call 0x107e3d00 */
  push32(0x107e1a5du); f_107e3d00();
  /* 107e1a5d mov esi, esp */
  ESI = (ESP);
  /* 107e1a5f push 0x43 */
  push32((uint32_t)(0x43u));
  /* 107e1a61 call dword ptr [0x10813444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813444))), 0x107e1a67u);
  /* 107e1a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1a6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1a6c call 0x107e3d00 */
  push32(0x107e1a71u); f_107e3d00();
  /* 107e1a71 mov esi, esp */
  ESI = (ESP);
  /* 107e1a73 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 107e1a75 call dword ptr [0x10813444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813444))), 0x107e1a7bu);
  /* 107e1a7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1a7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1a80 call 0x107e3d00 */
  push32(0x107e1a85u); f_107e3d00();
  /* 107e1a85 mov esi, esp */
  ESI = (ESP);
  /* 107e1a87 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 107e1a89 call dword ptr [0x10813444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813444))), 0x107e1a8fu);
  /* 107e1a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1a92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1a94 call 0x107e3d00 */
  push32(0x107e1a99u); f_107e3d00();
L_107e1a99:;
  /* 107e1a99 mov esi, esp */
  ESI = (ESP);
  /* 107e1a9b push 0x46 */
  push32((uint32_t)(0x46u));
  /* 107e1a9d call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1aa3u);
  /* 107e1aa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1aa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1aa8 call 0x107e3d00 */
  push32(0x107e1aadu); f_107e3d00();
  /* 107e1aad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1ab2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1ab4 je 0x107e1b1f */
  if (C.zf) goto L_107e1b1f;
  /* 107e1ab6 mov esi, esp */
  ESI = (ESP);
  /* 107e1ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1aba push 0x10810498 */
  push32((uint32_t)(0x10810498u));
  /* 107e1abf call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e1ac5u);
  /* 107e1ac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1ac8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1aca call 0x107e3d00 */
  push32(0x107e1acfu); f_107e3d00();
  /* 107e1acf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1ad1 jle 0x107e1b1f */
  if ((C.zf||C.sf!=C.of)) goto L_107e1b1f;
  /* 107e1ad3 mov esi, esp */
  ESI = (ESP);
  /* 107e1ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1ad7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 107e1ad9 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e1adfu);
  /* 107e1adf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1ae2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1ae4 call 0x107e3d00 */
  push32(0x107e1ae9u); f_107e3d00();
  /* 107e1ae9 mov esi, esp */
  ESI = (ESP);
  /* 107e1aeb push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1aed push 0x108103f8 */
  push32((uint32_t)(0x108103f8u));
  /* 107e1af2 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e1af8u);
  /* 107e1af8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1afb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1afd call 0x107e3d00 */
  push32(0x107e1b02u); f_107e3d00();
  /* 107e1b02 mov esi, esp */
  ESI = (ESP);
  /* 107e1b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1b08 push 0x10810498 */
  push32((uint32_t)(0x10810498u));
  /* 107e1b0d push 1 */
  push32((uint32_t)(0x1u));
  /* 107e1b0f call dword ptr [0x1081344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081344c))), 0x107e1b15u);
  /* 107e1b15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1b18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1b1a call 0x107e3d00 */
  push32(0x107e1b1fu); f_107e3d00();
L_107e1b1f:;
  /* 107e1b1f mov esi, esp */
  ESI = (ESP);
  /* 107e1b21 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e1b23 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1b29u);
  /* 107e1b29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1b2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1b2e call 0x107e3d00 */
  push32(0x107e1b33u); f_107e3d00();
  /* 107e1b33 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1b38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1b3a je 0x107e1b9b */
  if (C.zf) goto L_107e1b9b;
  /* 107e1b3c push 0x108103f8 */
  push32((uint32_t)(0x108103f8u));
  /* 107e1b41 call 0x107e1005 */
  push32(0x107e1b46u); f_107e1005();
  /* 107e1b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1b49 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1b4c jne 0x107e1b9b */
  if (!C.zf) goto L_107e1b9b;
  /* 107e1b4e mov esi, esp */
  ESI = (ESP);
  /* 107e1b50 push 0x108103f8 */
  push32((uint32_t)(0x108103f8u));
  /* 107e1b55 push 0x10810498 */
  push32((uint32_t)(0x10810498u));
  /* 107e1b5a call dword ptr [0x10813450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813450))), 0x107e1b60u);
  /* 107e1b60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1b63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1b65 call 0x107e3d00 */
  push32(0x107e1b6au); f_107e3d00();
  /* 107e1b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1b6c jle 0x107e1b9b */
  if ((C.zf||C.sf!=C.of)) goto L_107e1b9b;
  /* 107e1b6e mov esi, esp */
  ESI = (ESP);
  /* 107e1b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1b72 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e1b74 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e1b7au);
  /* 107e1b7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1b7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1b7f call 0x107e3d00 */
  push32(0x107e1b84u); f_107e3d00();
  /* 107e1b84 mov esi, esp */
  ESI = (ESP);
  /* 107e1b86 push 0x1080b3ac */
  push32((uint32_t)(0x1080b3acu));
  /* 107e1b8b call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e1b91u);
  /* 107e1b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1b94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1b96 call 0x107e3d00 */
  push32(0x107e1b9bu); f_107e3d00();
L_107e1b9b:;
  /* 107e1b9b mov esi, esp */
  ESI = (ESP);
  /* 107e1b9d push 2 */
  push32((uint32_t)(0x2u));
  /* 107e1b9f call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1ba5u);
  /* 107e1ba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1ba8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1baa call 0x107e3d00 */
  push32(0x107e1bafu); f_107e3d00();
  /* 107e1baf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1bb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1bb6 jne 0x107e1c04 */
  if (!C.zf) goto L_107e1c04;
  /* 107e1bb8 push 0x108103f8 */
  push32((uint32_t)(0x108103f8u));
  /* 107e1bbd call 0x107e1005 */
  push32(0x107e1bc2u); f_107e1005();
  /* 107e1bc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1bc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1bc7 jle 0x107e1c04 */
  if ((C.zf||C.sf!=C.of)) goto L_107e1c04;
  /* 107e1bc9 mov esi, esp */
  ESI = (ESP);
  /* 107e1bcb push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1bcd push 0x10810498 */
  push32((uint32_t)(0x10810498u));
  /* 107e1bd2 call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e1bd8u);
  /* 107e1bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1bdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1bdd call 0x107e3d00 */
  push32(0x107e1be2u); f_107e3d00();
  /* 107e1be2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1be4 jle 0x107e1c04 */
  if ((C.zf||C.sf!=C.of)) goto L_107e1c04;
  /* 107e1be6 mov esi, esp */
  ESI = (ESP);
  /* 107e1be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1bea push 0x10810498 */
  push32((uint32_t)(0x10810498u));
  /* 107e1bef push 0x108103f8 */
  push32((uint32_t)(0x108103f8u));
  /* 107e1bf4 call dword ptr [0x10813448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813448))), 0x107e1bfau);
  /* 107e1bfa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1bfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1bff call 0x107e3d00 */
  push32(0x107e1c04u); f_107e3d00();
L_107e1c04:;
  /* 107e1c04 mov esi, esp */
  ESI = (ESP);
  /* 107e1c06 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 107e1c08 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1c0eu);
  /* 107e1c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1c11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1c13 call 0x107e3d00 */
  push32(0x107e1c18u); f_107e3d00();
  /* 107e1c18 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1c1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1c1f je 0x107e1c83 */
  if (C.zf) goto L_107e1c83;
  /* 107e1c21 mov esi, esp */
  ESI = (ESP);
  /* 107e1c23 call dword ptr [0x10813458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813458))), 0x107e1c29u);
  /* 107e1c29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1c2b call 0x107e3d00 */
  push32(0x107e1c30u); f_107e3d00();
  /* 107e1c30 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1c35 jle 0x107e1c83 */
  if ((C.zf||C.sf!=C.of)) goto L_107e1c83;
  /* 107e1c37 mov esi, esp */
  ESI = (ESP);
  /* 107e1c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1c3b push 0x47 */
  push32((uint32_t)(0x47u));
  /* 107e1c3d call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e1c43u);
  /* 107e1c43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1c46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1c48 call 0x107e3d00 */
  push32(0x107e1c4du); f_107e3d00();
  /* 107e1c4d mov esi, esp */
  ESI = (ESP);
  /* 107e1c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1c51 push 0x10810410 */
  push32((uint32_t)(0x10810410u));
  /* 107e1c56 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e1c5cu);
  /* 107e1c5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1c5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1c61 call 0x107e3d00 */
  push32(0x107e1c66u); f_107e3d00();
  /* 107e1c66 mov esi, esp */
  ESI = (ESP);
  /* 107e1c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1c6c push 0x10810480 */
  push32((uint32_t)(0x10810480u));
  /* 107e1c71 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e1c73 call dword ptr [0x1081344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081344c))), 0x107e1c79u);
  /* 107e1c79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1c7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1c7e call 0x107e3d00 */
  push32(0x107e1c83u); f_107e3d00();
L_107e1c83:;
  /* 107e1c83 push 0x10810400 */
  push32((uint32_t)(0x10810400u));
  /* 107e1c88 call 0x107e1005 */
  push32(0x107e1c8du); f_107e1005();
  /* 107e1c8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1c90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1c92 jle 0x107e1ce6 */
  if ((C.zf||C.sf!=C.of)) goto L_107e1ce6;
  /* 107e1c94 mov esi, esp */
  ESI = (ESP);
  /* 107e1c96 push 0x10810410 */
  push32((uint32_t)(0x10810410u));
  /* 107e1c9b push 0x10810480 */
  push32((uint32_t)(0x10810480u));
  /* 107e1ca0 call dword ptr [0x10813450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813450))), 0x107e1ca6u);
  /* 107e1ca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1ca9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1cab call 0x107e3d00 */
  push32(0x107e1cb0u); f_107e3d00();
  /* 107e1cb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1cb2 jle 0x107e1ce6 */
  if ((C.zf||C.sf!=C.of)) goto L_107e1ce6;
  /* 107e1cb4 mov esi, esp */
  ESI = (ESP);
  /* 107e1cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1cb8 push 0x10810410 */
  push32((uint32_t)(0x10810410u));
  /* 107e1cbd call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e1cc3u);
  /* 107e1cc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1cc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1cc8 call 0x107e3d00 */
  push32(0x107e1ccdu); f_107e3d00();
  /* 107e1ccd mov esi, esp */
  ESI = (ESP);
  /* 107e1ccf push 0x10810400 */
  push32((uint32_t)(0x10810400u));
  /* 107e1cd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e1cd6 call dword ptr [0x1081345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081345c))), 0x107e1cdcu);
  /* 107e1cdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1cdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1ce1 call 0x107e3d00 */
  push32(0x107e1ce6u); f_107e3d00();
L_107e1ce6:;
  /* 107e1ce6 mov esi, esp */
  ESI = (ESP);
  /* 107e1ce8 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 107e1cea call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1cf0u);
  /* 107e1cf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1cf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1cf5 call 0x107e3d00 */
  push32(0x107e1cfau); f_107e3d00();
  /* 107e1cfa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1cff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1d01 je 0x107e1d71 */
  if (C.zf) goto L_107e1d71;
  /* 107e1d03 push 0x10810400 */
  push32((uint32_t)(0x10810400u));
  /* 107e1d08 call 0x107e1005 */
  push32(0x107e1d0du); f_107e1005();
  /* 107e1d0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1d10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1d12 jne 0x107e1d71 */
  if (!C.zf) goto L_107e1d71;
  /* 107e1d14 push 0x10810410 */
  push32((uint32_t)(0x10810410u));
  /* 107e1d19 call 0x107e1005 */
  push32(0x107e1d1eu); f_107e1005();
  /* 107e1d1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1d21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1d23 jle 0x107e1d71 */
  if ((C.zf||C.sf!=C.of)) goto L_107e1d71;
  /* 107e1d25 mov esi, esp */
  ESI = (ESP);
  /* 107e1d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1d29 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 107e1d2b call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e1d31u);
  /* 107e1d31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1d34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1d36 call 0x107e3d00 */
  push32(0x107e1d3bu); f_107e3d00();
  /* 107e1d3b mov esi, esp */
  ESI = (ESP);
  /* 107e1d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1d3f push 0x10810410 */
  push32((uint32_t)(0x10810410u));
  /* 107e1d44 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e1d4au);
  /* 107e1d4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1d4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1d4f call 0x107e3d00 */
  push32(0x107e1d54u); f_107e3d00();
  /* 107e1d54 mov esi, esp */
  ESI = (ESP);
  /* 107e1d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1d5a push 0x10810440 */
  push32((uint32_t)(0x10810440u));
  /* 107e1d5f push 1 */
  push32((uint32_t)(0x1u));
  /* 107e1d61 call dword ptr [0x1081344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081344c))), 0x107e1d67u);
  /* 107e1d67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1d6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1d6c call 0x107e3d00 */
  push32(0x107e1d71u); f_107e3d00();
L_107e1d71:;
  /* 107e1d71 mov esi, esp */
  ESI = (ESP);
  /* 107e1d73 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e1d75 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1d7bu);
  /* 107e1d7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1d7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1d80 call 0x107e3d00 */
  push32(0x107e1d85u); f_107e3d00();
  /* 107e1d85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1d8c je 0x107e1e18 */
  if (C.zf) goto L_107e1e18;
  /* 107e1d92 mov esi, esp */
  ESI = (ESP);
  /* 107e1d94 push 0x108103e8 */
  push32((uint32_t)(0x108103e8u));
  /* 107e1d99 push 0x108104a8 */
  push32((uint32_t)(0x108104a8u));
  /* 107e1d9e call dword ptr [0x10813450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813450))), 0x107e1da4u);
  /* 107e1da4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1da7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1da9 call 0x107e3d00 */
  push32(0x107e1daeu); f_107e3d00();
  /* 107e1dae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1db0 jle 0x107e1e18 */
  if ((C.zf||C.sf!=C.of)) goto L_107e1e18;
  /* 107e1db2 mov esi, esp */
  ESI = (ESP);
  /* 107e1db4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1db6 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e1db8 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e1dbeu);
  /* 107e1dbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1dc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1dc3 call 0x107e3d00 */
  push32(0x107e1dc8u); f_107e3d00();
  /* 107e1dc8 mov esi, esp */
  ESI = (ESP);
  /* 107e1dca push 0x1080b3a4 */
  push32((uint32_t)(0x1080b3a4u));
  /* 107e1dcf call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e1dd5u);
  /* 107e1dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1dd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1dda call 0x107e3d00 */
  push32(0x107e1ddfu); f_107e3d00();
  /* 107e1ddf mov esi, esp */
  ESI = (ESP);
  /* 107e1de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1de3 push 0x10810418 */
  push32((uint32_t)(0x10810418u));
  /* 107e1de8 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e1deeu);
  /* 107e1dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1df1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1df3 call 0x107e3d00 */
  push32(0x107e1df8u); f_107e3d00();
  /* 107e1df8 mov esi, esp */
  ESI = (ESP);
  /* 107e1dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1dfc push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107e1e01 push 0x108104d8 */
  push32((uint32_t)(0x108104d8u));
  /* 107e1e06 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e1e08 call dword ptr [0x10813454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813454))), 0x107e1e0eu);
  /* 107e1e0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1e11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1e13 call 0x107e3d00 */
  push32(0x107e1e18u); f_107e3d00();
L_107e1e18:;
  /* 107e1e18 mov esi, esp */
  ESI = (ESP);
  /* 107e1e1a push 3 */
  push32((uint32_t)(0x3u));
  /* 107e1e1c call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1e22u);
  /* 107e1e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1e25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1e27 call 0x107e3d00 */
  push32(0x107e1e2cu); f_107e3d00();
  /* 107e1e2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1e31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1e33 jne 0x107e2127 */
  if (!C.zf) goto L_107e2127;
  /* 107e1e39 mov esi, esp */
  ESI = (ESP);
  /* 107e1e3b push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 107e1e3d call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1e43u);
  /* 107e1e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1e46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1e48 call 0x107e3d00 */
  push32(0x107e1e4du); f_107e3d00();
  /* 107e1e4d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1e52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1e54 je 0x107e1eb6 */
  if (C.zf) goto L_107e1eb6;
  /* 107e1e56 mov esi, esp */
  ESI = (ESP);
  /* 107e1e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1e5a push 0x108104a8 */
  push32((uint32_t)(0x108104a8u));
  /* 107e1e5f call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e1e65u);
  /* 107e1e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1e68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1e6a call 0x107e3d00 */
  push32(0x107e1e6fu); f_107e3d00();
  /* 107e1e6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1e71 jle 0x107e1eb6 */
  if ((C.zf||C.sf!=C.of)) goto L_107e1eb6;
  /* 107e1e73 mov esi, esp */
  ESI = (ESP);
  /* 107e1e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1e77 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 107e1e79 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e1e7fu);
  /* 107e1e7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1e82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1e84 call 0x107e3d00 */
  push32(0x107e1e89u); f_107e3d00();
  /* 107e1e89 mov esi, esp */
  ESI = (ESP);
  /* 107e1e8b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1e8d push 0x108103f0 */
  push32((uint32_t)(0x108103f0u));
  /* 107e1e92 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e1e98u);
  /* 107e1e98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1e9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1e9d call 0x107e3d00 */
  push32(0x107e1ea2u); f_107e3d00();
  /* 107e1ea2 mov esi, esp */
  ESI = (ESP);
  /* 107e1ea4 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e1ea6 call dword ptr [0x10813464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813464))), 0x107e1eacu);
  /* 107e1eac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1eaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1eb1 call 0x107e3d00 */
  push32(0x107e1eb6u); f_107e3d00();
L_107e1eb6:;
  /* 107e1eb6 mov esi, esp */
  ESI = (ESP);
  /* 107e1eb8 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 107e1eba call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1ec0u);
  /* 107e1ec0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1ec3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1ec5 call 0x107e3d00 */
  push32(0x107e1ecau); f_107e3d00();
  /* 107e1eca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1ecf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1ed1 jne 0x107e1f33 */
  if (!C.zf) goto L_107e1f33;
  /* 107e1ed3 mov esi, esp */
  ESI = (ESP);
  /* 107e1ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1ed7 push 0x108104a8 */
  push32((uint32_t)(0x108104a8u));
  /* 107e1edc call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e1ee2u);
  /* 107e1ee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1ee5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1ee7 call 0x107e3d00 */
  push32(0x107e1eecu); f_107e3d00();
  /* 107e1eec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1eee jne 0x107e1f33 */
  if (!C.zf) goto L_107e1f33;
  /* 107e1ef0 mov esi, esp */
  ESI = (ESP);
  /* 107e1ef2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e1ef4 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 107e1ef6 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e1efcu);
  /* 107e1efc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1eff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1f01 call 0x107e3d00 */
  push32(0x107e1f06u); f_107e3d00();
  /* 107e1f06 mov esi, esp */
  ESI = (ESP);
  /* 107e1f08 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1f0a push 0x108103f0 */
  push32((uint32_t)(0x108103f0u));
  /* 107e1f0f call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e1f15u);
  /* 107e1f15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1f18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1f1a call 0x107e3d00 */
  push32(0x107e1f1fu); f_107e3d00();
  /* 107e1f1f mov esi, esp */
  ESI = (ESP);
  /* 107e1f21 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e1f23 call dword ptr [0x10813468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813468))), 0x107e1f29u);
  /* 107e1f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1f2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1f2e call 0x107e3d00 */
  push32(0x107e1f33u); f_107e3d00();
L_107e1f33:;
  /* 107e1f33 mov esi, esp */
  ESI = (ESP);
  /* 107e1f35 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 107e1f37 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1f3du);
  /* 107e1f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1f40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1f42 call 0x107e3d00 */
  push32(0x107e1f47u); f_107e3d00();
  /* 107e1f47 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1f4e je 0x107e1fb0 */
  if (C.zf) goto L_107e1fb0;
  /* 107e1f50 mov esi, esp */
  ESI = (ESP);
  /* 107e1f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1f54 push 0x108104b0 */
  push32((uint32_t)(0x108104b0u));
  /* 107e1f59 call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e1f5fu);
  /* 107e1f5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1f62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1f64 call 0x107e3d00 */
  push32(0x107e1f69u); f_107e3d00();
  /* 107e1f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1f6b jle 0x107e1fb0 */
  if ((C.zf||C.sf!=C.of)) goto L_107e1fb0;
  /* 107e1f6d mov esi, esp */
  ESI = (ESP);
  /* 107e1f6f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1f71 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 107e1f73 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e1f79u);
  /* 107e1f79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1f7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1f7e call 0x107e3d00 */
  push32(0x107e1f83u); f_107e3d00();
  /* 107e1f83 mov esi, esp */
  ESI = (ESP);
  /* 107e1f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1f87 push 0x10810408 */
  push32((uint32_t)(0x10810408u));
  /* 107e1f8c call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e1f92u);
  /* 107e1f92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1f95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1f97 call 0x107e3d00 */
  push32(0x107e1f9cu); f_107e3d00();
  /* 107e1f9c mov esi, esp */
  ESI = (ESP);
  /* 107e1f9e push 4 */
  push32((uint32_t)(0x4u));
  /* 107e1fa0 call dword ptr [0x10813464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813464))), 0x107e1fa6u);
  /* 107e1fa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1fa9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1fab call 0x107e3d00 */
  push32(0x107e1fb0u); f_107e3d00();
L_107e1fb0:;
  /* 107e1fb0 mov esi, esp */
  ESI = (ESP);
  /* 107e1fb2 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 107e1fb4 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e1fbau);
  /* 107e1fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1fbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1fbf call 0x107e3d00 */
  push32(0x107e1fc4u); f_107e3d00();
  /* 107e1fc4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e1fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1fcb jne 0x107e202d */
  if (!C.zf) goto L_107e202d;
  /* 107e1fcd mov esi, esp */
  ESI = (ESP);
  /* 107e1fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 107e1fd1 push 0x108104b0 */
  push32((uint32_t)(0x108104b0u));
  /* 107e1fd6 call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e1fdcu);
  /* 107e1fdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1fdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1fe1 call 0x107e3d00 */
  push32(0x107e1fe6u); f_107e3d00();
  /* 107e1fe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e1fe8 jne 0x107e202d */
  if (!C.zf) goto L_107e202d;
  /* 107e1fea mov esi, esp */
  ESI = (ESP);
  /* 107e1fec push 1 */
  push32((uint32_t)(0x1u));
  /* 107e1fee push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 107e1ff0 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e1ff6u);
  /* 107e1ff6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e1ff9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e1ffb call 0x107e3d00 */
  push32(0x107e2000u); f_107e3d00();
  /* 107e2000 mov esi, esp */
  ESI = (ESP);
  /* 107e2002 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2004 push 0x10810408 */
  push32((uint32_t)(0x10810408u));
  /* 107e2009 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e200fu);
  /* 107e200f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2012 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2014 call 0x107e3d00 */
  push32(0x107e2019u); f_107e3d00();
  /* 107e2019 mov esi, esp */
  ESI = (ESP);
  /* 107e201b push 4 */
  push32((uint32_t)(0x4u));
  /* 107e201d call dword ptr [0x10813468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813468))), 0x107e2023u);
  /* 107e2023 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2026 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2028 call 0x107e3d00 */
  push32(0x107e202du); f_107e3d00();
L_107e202d:;
  /* 107e202d mov esi, esp */
  ESI = (ESP);
  /* 107e202f push 0x2d */
  push32((uint32_t)(0x2du));
  /* 107e2031 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2037u);
  /* 107e2037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e203a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e203c call 0x107e3d00 */
  push32(0x107e2041u); f_107e3d00();
  /* 107e2041 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2046 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2048 je 0x107e20aa */
  if (C.zf) goto L_107e20aa;
  /* 107e204a mov esi, esp */
  ESI = (ESP);
  /* 107e204c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e204e push 0x108104b8 */
  push32((uint32_t)(0x108104b8u));
  /* 107e2053 call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e2059u);
  /* 107e2059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e205c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e205e call 0x107e3d00 */
  push32(0x107e2063u); f_107e3d00();
  /* 107e2063 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2065 jle 0x107e20aa */
  if ((C.zf||C.sf!=C.of)) goto L_107e20aa;
  /* 107e2067 mov esi, esp */
  ESI = (ESP);
  /* 107e2069 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e206b push 0x2d */
  push32((uint32_t)(0x2du));
  /* 107e206d call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2073u);
  /* 107e2073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2076 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2078 call 0x107e3d00 */
  push32(0x107e207du); f_107e3d00();
  /* 107e207d mov esi, esp */
  ESI = (ESP);
  /* 107e207f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2081 push 0x10810400 */
  push32((uint32_t)(0x10810400u));
  /* 107e2086 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e208cu);
  /* 107e208c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e208f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2091 call 0x107e3d00 */
  push32(0x107e2096u); f_107e3d00();
  /* 107e2096 mov esi, esp */
  ESI = (ESP);
  /* 107e2098 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e209a call dword ptr [0x10813464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813464))), 0x107e20a0u);
  /* 107e20a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e20a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e20a5 call 0x107e3d00 */
  push32(0x107e20aau); f_107e3d00();
L_107e20aa:;
  /* 107e20aa mov esi, esp */
  ESI = (ESP);
  /* 107e20ac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 107e20ae call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e20b4u);
  /* 107e20b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e20b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e20b9 call 0x107e3d00 */
  push32(0x107e20beu); f_107e3d00();
  /* 107e20be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e20c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e20c5 jne 0x107e2127 */
  if (!C.zf) goto L_107e2127;
  /* 107e20c7 mov esi, esp */
  ESI = (ESP);
  /* 107e20c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e20cb push 0x108104b8 */
  push32((uint32_t)(0x108104b8u));
  /* 107e20d0 call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e20d6u);
  /* 107e20d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e20d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e20db call 0x107e3d00 */
  push32(0x107e20e0u); f_107e3d00();
  /* 107e20e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e20e2 jne 0x107e2127 */
  if (!C.zf) goto L_107e2127;
  /* 107e20e4 mov esi, esp */
  ESI = (ESP);
  /* 107e20e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e20e8 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 107e20ea call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e20f0u);
  /* 107e20f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e20f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e20f5 call 0x107e3d00 */
  push32(0x107e20fau); f_107e3d00();
  /* 107e20fa mov esi, esp */
  ESI = (ESP);
  /* 107e20fc push 0 */
  push32((uint32_t)(0x0u));
  /* 107e20fe push 0x10810400 */
  push32((uint32_t)(0x10810400u));
  /* 107e2103 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e2109u);
  /* 107e2109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e210c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e210e call 0x107e3d00 */
  push32(0x107e2113u); f_107e3d00();
  /* 107e2113 mov esi, esp */
  ESI = (ESP);
  /* 107e2115 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e2117 call dword ptr [0x10813468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813468))), 0x107e211du);
  /* 107e211d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2120 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2122 call 0x107e3d00 */
  push32(0x107e2127u); f_107e3d00();
L_107e2127:;
  /* 107e2127 mov esi, esp */
  ESI = (ESP);
  /* 107e2129 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e212b call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2131u);
  /* 107e2131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2134 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2136 call 0x107e3d00 */
  push32(0x107e213bu); f_107e3d00();
  /* 107e213b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2142 je 0x107e21fb */
  if (C.zf) goto L_107e21fb;
  /* 107e2148 mov esi, esp */
  ESI = (ESP);
  /* 107e214a push 0x108103e8 */
  push32((uint32_t)(0x108103e8u));
  /* 107e214f push 0x108104d8 */
  push32((uint32_t)(0x108104d8u));
  /* 107e2154 call dword ptr [0x10813450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813450))), 0x107e215au);
  /* 107e215a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e215d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e215f call 0x107e3d00 */
  push32(0x107e2164u); f_107e3d00();
  /* 107e2164 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2166 jle 0x107e21fb */
  if ((C.zf||C.sf!=C.of)) goto L_107e21fb;
  /* 107e216c mov esi, esp */
  ESI = (ESP);
  /* 107e216e push 0x10810418 */
  push32((uint32_t)(0x10810418u));
  /* 107e2173 push 0x108104d8 */
  push32((uint32_t)(0x108104d8u));
  /* 107e2178 call dword ptr [0x10813450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813450))), 0x107e217eu);
  /* 107e217e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2183 call 0x107e3d00 */
  push32(0x107e2188u); f_107e3d00();
  /* 107e2188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e218a jle 0x107e21fb */
  if ((C.zf||C.sf!=C.of)) goto L_107e21fb;
  /* 107e218c mov esi, esp */
  ESI = (ESP);
  /* 107e218e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2190 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e2192 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2198u);
  /* 107e2198 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e219b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e219d call 0x107e3d00 */
  push32(0x107e21a2u); f_107e3d00();
  /* 107e21a2 mov esi, esp */
  ESI = (ESP);
  /* 107e21a4 push 0x1080b39c */
  push32((uint32_t)(0x1080b39cu));
  /* 107e21a9 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e21afu);
  /* 107e21af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e21b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e21b4 call 0x107e3d00 */
  push32(0x107e21b9u); f_107e3d00();
  /* 107e21b9 mov esi, esp */
  ESI = (ESP);
  /* 107e21bb push 0x1080b390 */
  push32((uint32_t)(0x1080b390u));
  /* 107e21c0 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e21c6u);
  /* 107e21c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e21c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e21cb call 0x107e3d00 */
  push32(0x107e21d0u); f_107e3d00();
  /* 107e21d0 mov esi, esp */
  ESI = (ESP);
  /* 107e21d2 push 0x1080b384 */
  push32((uint32_t)(0x1080b384u));
  /* 107e21d7 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e21ddu);
  /* 107e21dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e21e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e21e2 call 0x107e3d00 */
  push32(0x107e21e7u); f_107e3d00();
  /* 107e21e7 mov esi, esp */
  ESI = (ESP);
  /* 107e21e9 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 107e21eb call dword ptr [0x10813460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813460))), 0x107e21f1u);
  /* 107e21f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e21f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e21f6 call 0x107e3d00 */
  push32(0x107e21fbu); f_107e3d00();
L_107e21fb:;
  /* 107e21fb mov esi, esp */
  ESI = (ESP);
  /* 107e21fd push 0 */
  push32((uint32_t)(0x0u));
  /* 107e21ff push 0x108104d0 */
  push32((uint32_t)(0x108104d0u));
  /* 107e2204 call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e220au);
  /* 107e220a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e220d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e220f call 0x107e3d00 */
  push32(0x107e2214u); f_107e3d00();
  /* 107e2214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2216 jle 0x107e2248 */
  if ((C.zf||C.sf!=C.of)) goto L_107e2248;
  /* 107e2218 push 0x108104e0 */
  push32((uint32_t)(0x108104e0u));
  /* 107e221d call 0x107e1005 */
  push32(0x107e2222u); f_107e1005();
  /* 107e2222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2225 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2228 jle 0x107e2248 */
  if ((C.zf||C.sf!=C.of)) goto L_107e2248;
  /* 107e222a mov esi, esp */
  ESI = (ESP);
  /* 107e222c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e222e push 0x108104d0 */
  push32((uint32_t)(0x108104d0u));
  /* 107e2233 push 0x108104e0 */
  push32((uint32_t)(0x108104e0u));
  /* 107e2238 call dword ptr [0x10813448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813448))), 0x107e223eu);
  /* 107e223e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2241 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2243 call 0x107e3d00 */
  push32(0x107e2248u); f_107e3d00();
L_107e2248:;
  /* 107e2248 mov esi, esp */
  ESI = (ESP);
  /* 107e224a push 5 */
  push32((uint32_t)(0x5u));
  /* 107e224c call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2252u);
  /* 107e2252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2257 call 0x107e3d00 */
  push32(0x107e225cu); f_107e3d00();
  /* 107e225c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2263 je 0x107e2311 */
  if (C.zf) goto L_107e2311;
  /* 107e2269 push 0x10810420 */
  push32((uint32_t)(0x10810420u));
  /* 107e226e call 0x107e1005 */
  push32(0x107e2273u); f_107e1005();
  /* 107e2273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2278 jne 0x107e2311 */
  if (!C.zf) goto L_107e2311;
  /* 107e227e mov esi, esp */
  ESI = (ESP);
  /* 107e2280 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2282 push 5 */
  push32((uint32_t)(0x5u));
  /* 107e2284 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e228au);
  /* 107e228a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e228d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e228f call 0x107e3d00 */
  push32(0x107e2294u); f_107e3d00();
  /* 107e2294 mov esi, esp */
  ESI = (ESP);
  /* 107e2296 push 0x1080b37c */
  push32((uint32_t)(0x1080b37cu));
  /* 107e229b call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e22a1u);
  /* 107e22a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e22a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e22a6 call 0x107e3d00 */
  push32(0x107e22abu); f_107e3d00();
  /* 107e22ab mov esi, esp */
  ESI = (ESP);
  /* 107e22ad push 0x42 */
  push32((uint32_t)(0x42u));
  /* 107e22af call dword ptr [0x10813444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813444))), 0x107e22b5u);
  /* 107e22b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e22b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e22ba call 0x107e3d00 */
  push32(0x107e22bfu); f_107e3d00();
  /* 107e22bf mov esi, esp */
  ESI = (ESP);
  /* 107e22c1 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 107e22c3 call dword ptr [0x10813460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813460))), 0x107e22c9u);
  /* 107e22c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e22cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e22ce call 0x107e3d00 */
  push32(0x107e22d3u); f_107e3d00();
  /* 107e22d3 push 0x10810428 */
  push32((uint32_t)(0x10810428u));
  /* 107e22d8 call 0x107e1005 */
  push32(0x107e22ddu); f_107e1005();
  /* 107e22dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e22e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e22e2 jle 0x107e2311 */
  if ((C.zf||C.sf!=C.of)) goto L_107e2311;
  /* 107e22e4 mov esi, esp */
  ESI = (ESP);
  /* 107e22e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e22e8 push 0x10810428 */
  push32((uint32_t)(0x10810428u));
  /* 107e22ed call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e22f3u);
  /* 107e22f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e22f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e22f8 call 0x107e3d00 */
  push32(0x107e22fdu); f_107e3d00();
  /* 107e22fd mov esi, esp */
  ESI = (ESP);
  /* 107e22ff push 1 */
  push32((uint32_t)(0x1u));
  /* 107e2301 call dword ptr [0x10813470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813470))), 0x107e2307u);
  /* 107e2307 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e230a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e230c call 0x107e3d00 */
  push32(0x107e2311u); f_107e3d00();
L_107e2311:;
  /* 107e2311 mov esi, esp */
  ESI = (ESP);
  /* 107e2313 push 6 */
  push32((uint32_t)(0x6u));
  /* 107e2315 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e231bu);
  /* 107e231b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e231e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2320 call 0x107e3d00 */
  push32(0x107e2325u); f_107e3d00();
  /* 107e2325 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e232a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e232c je 0x107e236c */
  if (C.zf) goto L_107e236c;
  /* 107e232e push 0x10810578 */
  push32((uint32_t)(0x10810578u));
  /* 107e2333 call 0x107e1005 */
  push32(0x107e2338u); f_107e1005();
  /* 107e2338 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e233b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e233d jne 0x107e236c */
  if (!C.zf) goto L_107e236c;
  /* 107e233f mov esi, esp */
  ESI = (ESP);
  /* 107e2341 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2343 push 6 */
  push32((uint32_t)(0x6u));
  /* 107e2345 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e234bu);
  /* 107e234b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e234e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2350 call 0x107e3d00 */
  push32(0x107e2355u); f_107e3d00();
  /* 107e2355 mov esi, esp */
  ESI = (ESP);
  /* 107e2357 push 0x1080b374 */
  push32((uint32_t)(0x1080b374u));
  /* 107e235c call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2362u);
  /* 107e2362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2365 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2367 call 0x107e3d00 */
  push32(0x107e236cu); f_107e3d00();
L_107e236c:;
  /* 107e236c mov esi, esp */
  ESI = (ESP);
  /* 107e236e push 7 */
  push32((uint32_t)(0x7u));
  /* 107e2370 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2376u);
  /* 107e2376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e237b call 0x107e3d00 */
  push32(0x107e2380u); f_107e3d00();
  /* 107e2380 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2385 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2387 je 0x107e24bc */
  if (C.zf) goto L_107e24bc;
  /* 107e238d push 0x10810418 */
  push32((uint32_t)(0x10810418u));
  /* 107e2392 call 0x107e1005 */
  push32(0x107e2397u); f_107e1005();
  /* 107e2397 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e239a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e239c jne 0x107e24bc */
  if (!C.zf) goto L_107e24bc;
  /* 107e23a2 mov esi, esp */
  ESI = (ESP);
  /* 107e23a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e23a6 push 7 */
  push32((uint32_t)(0x7u));
  /* 107e23a8 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e23aeu);
  /* 107e23ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e23b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e23b3 call 0x107e3d00 */
  push32(0x107e23b8u); f_107e3d00();
  /* 107e23b8 mov esi, esp */
  ESI = (ESP);
  /* 107e23ba push 0x1080b36c */
  push32((uint32_t)(0x1080b36cu));
  /* 107e23bf call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e23c5u);
  /* 107e23c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e23c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e23ca call 0x107e3d00 */
  push32(0x107e23cfu); f_107e3d00();
  /* 107e23cf mov esi, esp */
  ESI = (ESP);
  /* 107e23d1 push 8 */
  push32((uint32_t)(0x8u));
  /* 107e23d3 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e23d9u);
  /* 107e23d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e23dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e23de call 0x107e3d00 */
  push32(0x107e23e3u); f_107e3d00();
  /* 107e23e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e23e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e23ea je 0x107e2434 */
  if (C.zf) goto L_107e2434;
  /* 107e23ec mov esi, esp */
  ESI = (ESP);
  /* 107e23ee push 4 */
  push32((uint32_t)(0x4u));
  /* 107e23f0 call dword ptr [0x10813474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813474))), 0x107e23f6u);
  /* 107e23f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e23f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e23fb call 0x107e3d00 */
  push32(0x107e2400u); f_107e3d00();
  /* 107e2400 mov esi, esp */
  ESI = (ESP);
  /* 107e2402 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2404 push 0x108103e0 */
  push32((uint32_t)(0x108103e0u));
  /* 107e2409 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e240fu);
  /* 107e240f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2412 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2414 call 0x107e3d00 */
  push32(0x107e2419u); f_107e3d00();
  /* 107e2419 mov esi, esp */
  ESI = (ESP);
  /* 107e241b push 5 */
  push32((uint32_t)(0x5u));
  /* 107e241d push 4 */
  push32((uint32_t)(0x4u));
  /* 107e241f call dword ptr [0x1081346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081346c))), 0x107e2425u);
  /* 107e2425 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2428 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e242a call 0x107e3d00 */
  push32(0x107e242fu); f_107e3d00();
  /* 107e242f jmp 0x107e24bc */
  goto L_107e24bc;
L_107e2434:;
  /* 107e2434 mov esi, esp */
  ESI = (ESP);
  /* 107e2436 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2438 call dword ptr [0x10813474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813474))), 0x107e243eu);
  /* 107e243e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2441 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2443 call 0x107e3d00 */
  push32(0x107e2448u); f_107e3d00();
  /* 107e2448 mov esi, esp */
  ESI = (ESP);
  /* 107e244a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e244c push 0x10810530 */
  push32((uint32_t)(0x10810530u));
  /* 107e2451 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e2457u);
  /* 107e2457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e245a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e245c call 0x107e3d00 */
  push32(0x107e2461u); f_107e3d00();
  /* 107e2461 mov esi, esp */
  ESI = (ESP);
  /* 107e2463 push 5 */
  push32((uint32_t)(0x5u));
  /* 107e2465 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2467 call dword ptr [0x1081346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081346c))), 0x107e246du);
  /* 107e246d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2470 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2472 call 0x107e3d00 */
  push32(0x107e2477u); f_107e3d00();
  /* 107e2477 mov esi, esp */
  ESI = (ESP);
  /* 107e2479 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e247b call dword ptr [0x10813474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813474))), 0x107e2481u);
  /* 107e2481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2484 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2486 call 0x107e3d00 */
  push32(0x107e248bu); f_107e3d00();
  /* 107e248b mov esi, esp */
  ESI = (ESP);
  /* 107e248d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e248f push 0x108103e0 */
  push32((uint32_t)(0x108103e0u));
  /* 107e2494 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e2496 call dword ptr [0x1081347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081347c))), 0x107e249cu);
  /* 107e249c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e249f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e24a1 call 0x107e3d00 */
  push32(0x107e24a6u); f_107e3d00();
  /* 107e24a6 mov esi, esp */
  ESI = (ESP);
  /* 107e24a8 push 5 */
  push32((uint32_t)(0x5u));
  /* 107e24aa push 4 */
  push32((uint32_t)(0x4u));
  /* 107e24ac call dword ptr [0x1081346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081346c))), 0x107e24b2u);
  /* 107e24b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e24b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e24b7 call 0x107e3d00 */
  push32(0x107e24bcu); f_107e3d00();
L_107e24bc:;
  /* 107e24bc mov esi, esp */
  ESI = (ESP);
  /* 107e24be push 8 */
  push32((uint32_t)(0x8u));
  /* 107e24c0 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e24c6u);
  /* 107e24c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e24c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e24cb call 0x107e3d00 */
  push32(0x107e24d0u); f_107e3d00();
  /* 107e24d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e24d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e24d7 je 0x107e257e */
  if (C.zf) goto L_107e257e;
  /* 107e24dd mov esi, esp */
  ESI = (ESP);
  /* 107e24df push 7 */
  push32((uint32_t)(0x7u));
  /* 107e24e1 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e24e7u);
  /* 107e24e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e24ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e24ec call 0x107e3d00 */
  push32(0x107e24f1u); f_107e3d00();
  /* 107e24f1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e24f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e24f8 je 0x107e257e */
  if (C.zf) goto L_107e257e;
  /* 107e24fe mov esi, esp */
  ESI = (ESP);
  /* 107e2500 push 5 */
  push32((uint32_t)(0x5u));
  /* 107e2502 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2508u);
  /* 107e2508 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e250b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e250d call 0x107e3d00 */
  push32(0x107e2512u); f_107e3d00();
  /* 107e2512 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2517 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2519 jne 0x107e257e */
  if (!C.zf) goto L_107e257e;
  /* 107e251b mov esi, esp */
  ESI = (ESP);
  /* 107e251d push 0x108103e8 */
  push32((uint32_t)(0x108103e8u));
  /* 107e2522 push 0x108104d8 */
  push32((uint32_t)(0x108104d8u));
  /* 107e2527 call dword ptr [0x10813450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813450))), 0x107e252du);
  /* 107e252d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2532 call 0x107e3d00 */
  push32(0x107e2537u); f_107e3d00();
  /* 107e2537 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2539 jle 0x107e257e */
  if ((C.zf||C.sf!=C.of)) goto L_107e257e;
  /* 107e253b mov esi, esp */
  ESI = (ESP);
  /* 107e253d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e253f push 8 */
  push32((uint32_t)(0x8u));
  /* 107e2541 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2547u);
  /* 107e2547 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e254a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e254c call 0x107e3d00 */
  push32(0x107e2551u); f_107e3d00();
  /* 107e2551 mov esi, esp */
  ESI = (ESP);
  /* 107e2553 push 0x1080b364 */
  push32((uint32_t)(0x1080b364u));
  /* 107e2558 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e255eu);
  /* 107e255e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2561 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2563 call 0x107e3d00 */
  push32(0x107e2568u); f_107e3d00();
  /* 107e2568 mov esi, esp */
  ESI = (ESP);
  /* 107e256a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 107e256c push 2 */
  push32((uint32_t)(0x2u));
  /* 107e256e call dword ptr [0x10813480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813480))), 0x107e2574u);
  /* 107e2574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2577 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2579 call 0x107e3d00 */
  push32(0x107e257eu); f_107e3d00();
L_107e257e:;
  /* 107e257e mov esi, esp */
  ESI = (ESP);
  /* 107e2580 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e2582 call dword ptr [0x10813478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813478))), 0x107e2588u);
  /* 107e2588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e258b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e258d call 0x107e3d00 */
  push32(0x107e2592u); f_107e3d00();
  /* 107e2592 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2597 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2599 je 0x107e2663 */
  if (C.zf) goto L_107e2663;
  /* 107e259f mov esi, esp */
  ESI = (ESP);
  /* 107e25a1 push 0x108103e8 */
  push32((uint32_t)(0x108103e8u));
  /* 107e25a6 push 0x108104d8 */
  push32((uint32_t)(0x108104d8u));
  /* 107e25ab call dword ptr [0x10813450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813450))), 0x107e25b1u);
  /* 107e25b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e25b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e25b6 call 0x107e3d00 */
  push32(0x107e25bbu); f_107e3d00();
  /* 107e25bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e25bd jle 0x107e2663 */
  if ((C.zf||C.sf!=C.of)) goto L_107e2663;
  /* 107e25c3 mov esi, esp */
  ESI = (ESP);
  /* 107e25c5 push 0x1080b358 */
  push32((uint32_t)(0x1080b358u));
  /* 107e25ca call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e25d0u);
  /* 107e25d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e25d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e25d5 call 0x107e3d00 */
  push32(0x107e25dau); f_107e3d00();
  /* 107e25da mov esi, esp */
  ESI = (ESP);
  /* 107e25dc push 2 */
  push32((uint32_t)(0x2u));
  /* 107e25de call dword ptr [0x10813488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813488))), 0x107e25e4u);
  /* 107e25e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e25e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e25e9 call 0x107e3d00 */
  push32(0x107e25eeu); f_107e3d00();
  /* 107e25ee mov esi, esp */
  ESI = (ESP);
  /* 107e25f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e25f2 call dword ptr [0x10813474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813474))), 0x107e25f8u);
  /* 107e25f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e25fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e25fd call 0x107e3d00 */
  push32(0x107e2602u); f_107e3d00();
  /* 107e2602 mov esi, esp */
  ESI = (ESP);
  /* 107e2604 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2606 push 0x10810530 */
  push32((uint32_t)(0x10810530u));
  /* 107e260b call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e2611u);
  /* 107e2611 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2614 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2616 call 0x107e3d00 */
  push32(0x107e261bu); f_107e3d00();
  /* 107e261b mov esi, esp */
  ESI = (ESP);
  /* 107e261d push 1 */
  push32((uint32_t)(0x1u));
  /* 107e261f push 0x10810550 */
  push32((uint32_t)(0x10810550u));
  /* 107e2624 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e262au);
  /* 107e262a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e262d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e262f call 0x107e3d00 */
  push32(0x107e2634u); f_107e3d00();
  /* 107e2634 mov esi, esp */
  ESI = (ESP);
  /* 107e2636 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2638 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e263a call dword ptr [0x1081346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081346c))), 0x107e2640u);
  /* 107e2640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2645 call 0x107e3d00 */
  push32(0x107e264au); f_107e3d00();
  /* 107e264a mov esi, esp */
  ESI = (ESP);
  /* 107e264c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 107e2651 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e2653 call dword ptr [0x10813480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813480))), 0x107e2659u);
  /* 107e2659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e265c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e265e call 0x107e3d00 */
  push32(0x107e2663u); f_107e3d00();
L_107e2663:;
  /* 107e2663 mov esi, esp */
  ESI = (ESP);
  /* 107e2665 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e2667 call dword ptr [0x1081348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081348c))), 0x107e266du);
  /* 107e266d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2670 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2672 call 0x107e3d00 */
  push32(0x107e2677u); f_107e3d00();
  /* 107e2677 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e267c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e267e je 0x107e26be */
  if (C.zf) goto L_107e26be;
  /* 107e2680 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2682 push 0x10810488 */
  push32((uint32_t)(0x10810488u));
  /* 107e2687 call 0x107e100f */
  push32(0x107e268cu); f_107e100f();
  /* 107e268c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e268f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2691 jne 0x107e26be */
  if (!C.zf) goto L_107e26be;
  /* 107e2693 mov esi, esp */
  ESI = (ESP);
  /* 107e2695 push 0x1080b34c */
  push32((uint32_t)(0x1080b34cu));
  /* 107e269a call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e26a0u);
  /* 107e26a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e26a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e26a5 call 0x107e3d00 */
  push32(0x107e26aau); f_107e3d00();
  /* 107e26aa mov esi, esp */
  ESI = (ESP);
  /* 107e26ac push 0x44 */
  push32((uint32_t)(0x44u));
  /* 107e26ae call dword ptr [0x10813460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813460))), 0x107e26b4u);
  /* 107e26b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e26b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e26b9 call 0x107e3d00 */
  push32(0x107e26beu); f_107e3d00();
L_107e26be:;
  /* 107e26be mov esi, esp */
  ESI = (ESP);
  /* 107e26c0 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 107e26c2 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e26c8u);
  /* 107e26c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e26cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e26cd call 0x107e3d00 */
  push32(0x107e26d2u); f_107e3d00();
  /* 107e26d2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e26d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e26d9 je 0x107e272c */
  if (C.zf) goto L_107e272c;
  /* 107e26db push 0 */
  push32((uint32_t)(0x0u));
  /* 107e26dd push 0x10810488 */
  push32((uint32_t)(0x10810488u));
  /* 107e26e2 call 0x107e100f */
  push32(0x107e26e7u); f_107e100f();
  /* 107e26e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e26ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e26ec jle 0x107e272c */
  if ((C.zf||C.sf!=C.of)) goto L_107e272c;
  /* 107e26ee mov esi, esp */
  ESI = (ESP);
  /* 107e26f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e26f2 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 107e26f4 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e26fau);
  /* 107e26fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e26fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e26ff call 0x107e3d00 */
  push32(0x107e2704u); f_107e3d00();
  /* 107e2704 mov esi, esp */
  ESI = (ESP);
  /* 107e2706 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 107e2708 call dword ptr [0x10813444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813444))), 0x107e270eu);
  /* 107e270e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2711 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2713 call 0x107e3d00 */
  push32(0x107e2718u); f_107e3d00();
  /* 107e2718 mov esi, esp */
  ESI = (ESP);
  /* 107e271a push 0x45 */
  push32((uint32_t)(0x45u));
  /* 107e271c call dword ptr [0x10813460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813460))), 0x107e2722u);
  /* 107e2722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2727 call 0x107e3d00 */
  push32(0x107e272cu); f_107e3d00();
L_107e272c:;
  /* 107e272c mov esi, esp */
  ESI = (ESP);
  /* 107e272e push 9 */
  push32((uint32_t)(0x9u));
  /* 107e2730 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2736u);
  /* 107e2736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e273b call 0x107e3d00 */
  push32(0x107e2740u); f_107e3d00();
  /* 107e2740 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2747 je 0x107e27cd */
  if (C.zf) goto L_107e27cd;
  /* 107e274d push 0x108103e8 */
  push32((uint32_t)(0x108103e8u));
  /* 107e2752 call 0x107e1005 */
  push32(0x107e2757u); f_107e1005();
  /* 107e2757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e275a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e275c jne 0x107e27cd */
  if (!C.zf) goto L_107e27cd;
  /* 107e275e mov esi, esp */
  ESI = (ESP);
  /* 107e2760 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2762 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e2764 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e276au);
  /* 107e276a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e276d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e276f call 0x107e3d00 */
  push32(0x107e2774u); f_107e3d00();
  /* 107e2774 mov esi, esp */
  ESI = (ESP);
  /* 107e2776 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e2778 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e277a call dword ptr [0x10813484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813484))), 0x107e2780u);
  /* 107e2780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2783 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2785 call 0x107e3d00 */
  push32(0x107e278au); f_107e3d00();
  /* 107e278a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e278c jle 0x107e27a7 */
  if ((C.zf||C.sf!=C.of)) goto L_107e27a7;
  /* 107e278e mov esi, esp */
  ESI = (ESP);
  /* 107e2790 push 0x1080b344 */
  push32((uint32_t)(0x1080b344u));
  /* 107e2795 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e279bu);
  /* 107e279b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e279e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e27a0 call 0x107e3d00 */
  push32(0x107e27a5u); f_107e3d00();
  /* 107e27a5 jmp 0x107e27be */
  goto L_107e27be;
L_107e27a7:;
  /* 107e27a7 mov esi, esp */
  ESI = (ESP);
  /* 107e27a9 push 0x1080b338 */
  push32((uint32_t)(0x1080b338u));
  /* 107e27ae call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e27b4u);
  /* 107e27b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e27b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e27b9 call 0x107e3d00 */
  push32(0x107e27beu); f_107e3d00();
L_107e27be:;
  /* 107e27be mov esi, esp */
  ESI = (ESP);
  /* 107e27c0 call dword ptr [0x10813494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813494))), 0x107e27c6u);
  /* 107e27c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e27c8 call 0x107e3d00 */
  push32(0x107e27cdu); f_107e3d00();
L_107e27cd:;
  /* 107e27cd mov esi, esp */
  ESI = (ESP);
  /* 107e27cf push 0xa */
  push32((uint32_t)(0xau));
  /* 107e27d1 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e27d7u);
  /* 107e27d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e27da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e27dc call 0x107e3d00 */
  push32(0x107e27e1u); f_107e3d00();
  /* 107e27e1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e27e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e27e8 je 0x107e2846 */
  if (C.zf) goto L_107e2846;
  /* 107e27ea mov esi, esp */
  ESI = (ESP);
  /* 107e27ec push 0 */
  push32((uint32_t)(0x0u));
  /* 107e27ee push 0x10810430 */
  push32((uint32_t)(0x10810430u));
  /* 107e27f3 call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e27f9u);
  /* 107e27f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e27fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e27fe call 0x107e3d00 */
  push32(0x107e2803u); f_107e3d00();
  /* 107e2803 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2806 jle 0x107e2846 */
  if ((C.zf||C.sf!=C.of)) goto L_107e2846;
  /* 107e2808 push 0x108104f0 */
  push32((uint32_t)(0x108104f0u));
  /* 107e280d call 0x107e1005 */
  push32(0x107e2812u); f_107e1005();
  /* 107e2812 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2815 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2817 jle 0x107e2846 */
  if ((C.zf||C.sf!=C.of)) goto L_107e2846;
  /* 107e2819 mov esi, esp */
  ESI = (ESP);
  /* 107e281b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e281d push 0xa */
  push32((uint32_t)(0xau));
  /* 107e281f call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2825u);
  /* 107e2825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2828 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e282a call 0x107e3d00 */
  push32(0x107e282fu); f_107e3d00();
  /* 107e282f mov esi, esp */
  ESI = (ESP);
  /* 107e2831 push 0x1080b32c */
  push32((uint32_t)(0x1080b32cu));
  /* 107e2836 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e283cu);
  /* 107e283c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e283f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2841 call 0x107e3d00 */
  push32(0x107e2846u); f_107e3d00();
L_107e2846:;
  /* 107e2846 mov esi, esp */
  ESI = (ESP);
  /* 107e2848 push 0xa */
  push32((uint32_t)(0xau));
  /* 107e284a call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2850u);
  /* 107e2850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2853 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2855 call 0x107e3d00 */
  push32(0x107e285au); f_107e3d00();
  /* 107e285a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e285f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2861 jne 0x107e28af */
  if (!C.zf) goto L_107e28af;
  /* 107e2863 mov esi, esp */
  ESI = (ESP);
  /* 107e2865 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2867 push 0x10810430 */
  push32((uint32_t)(0x10810430u));
  /* 107e286c call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e2872u);
  /* 107e2872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2877 call 0x107e3d00 */
  push32(0x107e287cu); f_107e3d00();
  /* 107e287c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e287e jle 0x107e28af */
  if ((C.zf||C.sf!=C.of)) goto L_107e28af;
  /* 107e2880 push 0x108104f0 */
  push32((uint32_t)(0x108104f0u));
  /* 107e2885 call 0x107e1005 */
  push32(0x107e288au); f_107e1005();
  /* 107e288a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e288d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e288f jle 0x107e28af */
  if ((C.zf||C.sf!=C.of)) goto L_107e28af;
  /* 107e2891 mov esi, esp */
  ESI = (ESP);
  /* 107e2893 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2895 push 0x10810430 */
  push32((uint32_t)(0x10810430u));
  /* 107e289a push 0x108104f0 */
  push32((uint32_t)(0x108104f0u));
  /* 107e289f call dword ptr [0x10813448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813448))), 0x107e28a5u);
  /* 107e28a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e28a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e28aa call 0x107e3d00 */
  push32(0x107e28afu); f_107e3d00();
L_107e28af:;
  /* 107e28af mov esi, esp */
  ESI = (ESP);
  /* 107e28b1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 107e28b3 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e28b9u);
  /* 107e28b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e28bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e28be call 0x107e3d00 */
  push32(0x107e28c3u); f_107e3d00();
  /* 107e28c3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e28c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e28ca je 0x107e299f */
  if (C.zf) goto L_107e299f;
  /* 107e28d0 mov esi, esp */
  ESI = (ESP);
  /* 107e28d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e28d4 push 0x10810448 */
  push32((uint32_t)(0x10810448u));
  /* 107e28d9 call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e28dfu);
  /* 107e28df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e28e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e28e4 call 0x107e3d00 */
  push32(0x107e28e9u); f_107e3d00();
  /* 107e28e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e28eb jle 0x107e299f */
  if ((C.zf||C.sf!=C.of)) goto L_107e299f;
  /* 107e28f1 push 0x108104f0 */
  push32((uint32_t)(0x108104f0u));
  /* 107e28f6 call 0x107e1005 */
  push32(0x107e28fbu); f_107e1005();
  /* 107e28fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e28fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2900 jne 0x107e299f */
  if (!C.zf) goto L_107e299f;
  /* 107e2906 mov esi, esp */
  ESI = (ESP);
  /* 107e2908 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e290a push 0xb */
  push32((uint32_t)(0xbu));
  /* 107e290c call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2912u);
  /* 107e2912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2915 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2917 call 0x107e3d00 */
  push32(0x107e291cu); f_107e3d00();
  /* 107e291c mov esi, esp */
  ESI = (ESP);
  /* 107e291e push 0x1080b320 */
  push32((uint32_t)(0x1080b320u));
  /* 107e2923 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2929u);
  /* 107e2929 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e292c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e292e call 0x107e3d00 */
  push32(0x107e2933u); f_107e3d00();
  /* 107e2933 mov esi, esp */
  ESI = (ESP);
  /* 107e2935 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 107e293a push 1 */
  push32((uint32_t)(0x1u));
  /* 107e293c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e293e call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2944u);
  /* 107e2944 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2947 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2949 call 0x107e3d00 */
  push32(0x107e294eu); f_107e3d00();
  /* 107e294e mov esi, esp */
  ESI = (ESP);
  /* 107e2950 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 107e2955 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e2957 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2959 call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e295fu);
  /* 107e295f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2962 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2964 call 0x107e3d00 */
  push32(0x107e2969u); f_107e3d00();
  /* 107e2969 mov esi, esp */
  ESI = (ESP);
  /* 107e296b push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 107e2970 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e2972 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2974 call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e297au);
  /* 107e297a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e297d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e297f call 0x107e3d00 */
  push32(0x107e2984u); f_107e3d00();
  /* 107e2984 mov esi, esp */
  ESI = (ESP);
  /* 107e2986 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 107e298b push 5 */
  push32((uint32_t)(0x5u));
  /* 107e298d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e298f call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2995u);
  /* 107e2995 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2998 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e299a call 0x107e3d00 */
  push32(0x107e299fu); f_107e3d00();
L_107e299f:;
  /* 107e299f mov esi, esp */
  ESI = (ESP);
  /* 107e29a1 push 0xc */
  push32((uint32_t)(0xcu));
  /* 107e29a3 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e29a9u);
  /* 107e29a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e29ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e29ae call 0x107e3d00 */
  push32(0x107e29b3u); f_107e3d00();
  /* 107e29b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e29b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e29ba je 0x107e29fa */
  if (C.zf) goto L_107e29fa;
  /* 107e29bc push 0x10810548 */
  push32((uint32_t)(0x10810548u));
  /* 107e29c1 call 0x107e1005 */
  push32(0x107e29c6u); f_107e1005();
  /* 107e29c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e29c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e29cb jne 0x107e29fa */
  if (!C.zf) goto L_107e29fa;
  /* 107e29cd mov esi, esp */
  ESI = (ESP);
  /* 107e29cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107e29d1 push 0xc */
  push32((uint32_t)(0xcu));
  /* 107e29d3 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e29d9u);
  /* 107e29d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e29dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e29de call 0x107e3d00 */
  push32(0x107e29e3u); f_107e3d00();
  /* 107e29e3 mov esi, esp */
  ESI = (ESP);
  /* 107e29e5 push 0x1080b314 */
  push32((uint32_t)(0x1080b314u));
  /* 107e29ea call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e29f0u);
  /* 107e29f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e29f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e29f5 call 0x107e3d00 */
  push32(0x107e29fau); f_107e3d00();
L_107e29fa:;
  /* 107e29fa mov esi, esp */
  ESI = (ESP);
  /* 107e29fc push 0xd */
  push32((uint32_t)(0xdu));
  /* 107e29fe call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2a04u);
  /* 107e2a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2a09 call 0x107e3d00 */
  push32(0x107e2a0eu); f_107e3d00();
  /* 107e2a0e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2a13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2a15 je 0x107e2aeb */
  if (C.zf) goto L_107e2aeb;
  /* 107e2a1b mov esi, esp */
  ESI = (ESP);
  /* 107e2a1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 107e2a1f call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2a25u);
  /* 107e2a25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2a28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2a2a call 0x107e3d00 */
  push32(0x107e2a2fu); f_107e3d00();
  /* 107e2a2f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2a36 jne 0x107e2aeb */
  if (!C.zf) goto L_107e2aeb;
  /* 107e2a3c mov esi, esp */
  ESI = (ESP);
  /* 107e2a3e push 0x108103e8 */
  push32((uint32_t)(0x108103e8u));
  /* 107e2a43 push 0x10810438 */
  push32((uint32_t)(0x10810438u));
  /* 107e2a48 call dword ptr [0x10813450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813450))), 0x107e2a4eu);
  /* 107e2a4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2a51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2a53 call 0x107e3d00 */
  push32(0x107e2a58u); f_107e3d00();
  /* 107e2a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2a5a jle 0x107e2aeb */
  if ((C.zf||C.sf!=C.of)) goto L_107e2aeb;
  /* 107e2a60 mov esi, esp */
  ESI = (ESP);
  /* 107e2a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2a64 push 0xd */
  push32((uint32_t)(0xdu));
  /* 107e2a66 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2a6cu);
  /* 107e2a6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2a6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2a71 call 0x107e3d00 */
  push32(0x107e2a76u); f_107e3d00();
  /* 107e2a76 mov esi, esp */
  ESI = (ESP);
  /* 107e2a78 push 0x1080b308 */
  push32((uint32_t)(0x1080b308u));
  /* 107e2a7d call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2a83u);
  /* 107e2a83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2a86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2a88 call 0x107e3d00 */
  push32(0x107e2a8du); f_107e3d00();
  /* 107e2a8d mov esi, esp */
  ESI = (ESP);
  /* 107e2a8f push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 107e2a94 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e2a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2a98 call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2a9eu);
  /* 107e2a9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2aa1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2aa3 call 0x107e3d00 */
  push32(0x107e2aa8u); f_107e3d00();
  /* 107e2aa8 mov esi, esp */
  ESI = (ESP);
  /* 107e2aaa push 3 */
  push32((uint32_t)(0x3u));
  /* 107e2aac call dword ptr [0x10813474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813474))), 0x107e2ab2u);
  /* 107e2ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2ab5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2ab7 call 0x107e3d00 */
  push32(0x107e2abcu); f_107e3d00();
  /* 107e2abc mov esi, esp */
  ESI = (ESP);
  /* 107e2abe push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2ac0 push 0x10810528 */
  push32((uint32_t)(0x10810528u));
  /* 107e2ac5 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e2acbu);
  /* 107e2acb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2ace cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2ad0 call 0x107e3d00 */
  push32(0x107e2ad5u); f_107e3d00();
  /* 107e2ad5 mov esi, esp */
  ESI = (ESP);
  /* 107e2ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2ad9 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e2adb call dword ptr [0x1081346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081346c))), 0x107e2ae1u);
  /* 107e2ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2ae4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2ae6 call 0x107e3d00 */
  push32(0x107e2aebu); f_107e3d00();
L_107e2aeb:;
  /* 107e2aeb mov esi, esp */
  ESI = (ESP);
  /* 107e2aed push 0xe */
  push32((uint32_t)(0xeu));
  /* 107e2aef call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2af5u);
  /* 107e2af5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2af8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2afa call 0x107e3d00 */
  push32(0x107e2affu); f_107e3d00();
  /* 107e2aff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2b04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2b06 je 0x107e2bac */
  if (C.zf) goto L_107e2bac;
  /* 107e2b0c push 0x10810540 */
  push32((uint32_t)(0x10810540u));
  /* 107e2b11 call 0x107e1005 */
  push32(0x107e2b16u); f_107e1005();
  /* 107e2b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2b19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2b1b jne 0x107e2bac */
  if (!C.zf) goto L_107e2bac;
  /* 107e2b21 mov esi, esp */
  ESI = (ESP);
  /* 107e2b23 push 0xc */
  push32((uint32_t)(0xcu));
  /* 107e2b25 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2b2bu);
  /* 107e2b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2b2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2b30 call 0x107e3d00 */
  push32(0x107e2b35u); f_107e3d00();
  /* 107e2b35 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2b3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2b3c jne 0x107e2bac */
  if (!C.zf) goto L_107e2bac;
  /* 107e2b3e mov esi, esp */
  ESI = (ESP);
  /* 107e2b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2b42 push 0xe */
  push32((uint32_t)(0xeu));
  /* 107e2b44 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2b4au);
  /* 107e2b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2b4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2b4f call 0x107e3d00 */
  push32(0x107e2b54u); f_107e3d00();
  /* 107e2b54 mov esi, esp */
  ESI = (ESP);
  /* 107e2b56 push 0x1080b2fc */
  push32((uint32_t)(0x1080b2fcu));
  /* 107e2b5b call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2b61u);
  /* 107e2b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2b64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2b66 call 0x107e3d00 */
  push32(0x107e2b6bu); f_107e3d00();
  /* 107e2b6b mov esi, esp */
  ESI = (ESP);
  /* 107e2b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 107e2b6f call dword ptr [0x10813474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813474))), 0x107e2b75u);
  /* 107e2b75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2b78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2b7a call 0x107e3d00 */
  push32(0x107e2b7fu); f_107e3d00();
  /* 107e2b7f mov esi, esp */
  ESI = (ESP);
  /* 107e2b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2b83 push 0x10810518 */
  push32((uint32_t)(0x10810518u));
  /* 107e2b88 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e2b8eu);
  /* 107e2b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2b91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2b93 call 0x107e3d00 */
  push32(0x107e2b98u); f_107e3d00();
  /* 107e2b98 mov esi, esp */
  ESI = (ESP);
  /* 107e2b9a push 1 */
  push32((uint32_t)(0x1u));
  /* 107e2b9c call dword ptr [0x10813470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813470))), 0x107e2ba2u);
  /* 107e2ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2ba5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2ba7 call 0x107e3d00 */
  push32(0x107e2bacu); f_107e3d00();
L_107e2bac:;
  /* 107e2bac push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2bae push 0x10810588 */
  push32((uint32_t)(0x10810588u));
  /* 107e2bb3 call 0x107e100f */
  push32(0x107e2bb8u); f_107e100f();
  /* 107e2bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2bbb cmp dword ptr [0x10810490], eax */
  { uint32_t _a=(r32((uint32_t)(0x10810490))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2bc1 jle 0x107e2bd7 */
  if ((C.zf||C.sf!=C.of)) goto L_107e2bd7;
  /* 107e2bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2bc5 push 0x10810588 */
  push32((uint32_t)(0x10810588u));
  /* 107e2bca call 0x107e100f */
  push32(0x107e2bcfu); f_107e100f();
  /* 107e2bcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2bd2 mov dword ptr [0x10810490], eax */
  w32((uint32_t)(0x10810490), (EAX));
L_107e2bd7:;
  /* 107e2bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2bd9 push 0x10810588 */
  push32((uint32_t)(0x10810588u));
  /* 107e2bde call 0x107e100f */
  push32(0x107e2be3u); f_107e100f();
  /* 107e2be3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2be6 cmp dword ptr [0x10810490], eax */
  { uint32_t _a=(r32((uint32_t)(0x10810490))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2bec jge 0x107e2de9 */
  if ((C.sf==C.of)) goto L_107e2de9;
  /* 107e2bf2 mov esi, esp */
  ESI = (ESP);
  /* 107e2bf4 push 0xf */
  push32((uint32_t)(0xfu));
  /* 107e2bf6 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2bfcu);
  /* 107e2bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2bff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2c01 call 0x107e3d00 */
  push32(0x107e2c06u); f_107e3d00();
  /* 107e2c06 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2c0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2c0d je 0x107e2c96 */
  if (C.zf) goto L_107e2c96;
  /* 107e2c13 mov esi, esp */
  ESI = (ESP);
  /* 107e2c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2c17 push 0xf */
  push32((uint32_t)(0xfu));
  /* 107e2c19 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2c1fu);
  /* 107e2c1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2c22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2c24 call 0x107e3d00 */
  push32(0x107e2c29u); f_107e3d00();
  /* 107e2c29 mov esi, esp */
  ESI = (ESP);
  /* 107e2c2b push 0x1080b2f0 */
  push32((uint32_t)(0x1080b2f0u));
  /* 107e2c30 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2c36u);
  /* 107e2c36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2c39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2c3b call 0x107e3d00 */
  push32(0x107e2c40u); f_107e3d00();
  /* 107e2c40 mov esi, esp */
  ESI = (ESP);
  /* 107e2c42 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 107e2c47 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e2c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2c4b call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2c51u);
  /* 107e2c51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2c54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2c56 call 0x107e3d00 */
  push32(0x107e2c5bu); f_107e3d00();
  /* 107e2c5b mov esi, esp */
  ESI = (ESP);
  /* 107e2c5d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 107e2c62 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e2c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2c66 call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2c6cu);
  /* 107e2c6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2c6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2c71 call 0x107e3d00 */
  push32(0x107e2c76u); f_107e3d00();
  /* 107e2c76 mov esi, esp */
  ESI = (ESP);
  /* 107e2c78 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 107e2c7d push 5 */
  push32((uint32_t)(0x5u));
  /* 107e2c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2c81 call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2c87u);
  /* 107e2c87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2c8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2c8c call 0x107e3d00 */
  push32(0x107e2c91u); f_107e3d00();
  /* 107e2c91 jmp 0x107e2dd5 */
  goto L_107e2dd5;
L_107e2c96:;
  /* 107e2c96 mov esi, esp */
  ESI = (ESP);
  /* 107e2c98 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 107e2c9a call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2ca0u);
  /* 107e2ca0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2ca3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2ca5 call 0x107e3d00 */
  push32(0x107e2caau); f_107e3d00();
  /* 107e2caa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2caf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2cb1 je 0x107e2d1b */
  if (C.zf) goto L_107e2d1b;
  /* 107e2cb3 mov esi, esp */
  ESI = (ESP);
  /* 107e2cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2cb7 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 107e2cb9 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2cbfu);
  /* 107e2cbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2cc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2cc4 call 0x107e3d00 */
  push32(0x107e2cc9u); f_107e3d00();
  /* 107e2cc9 mov esi, esp */
  ESI = (ESP);
  /* 107e2ccb push 0x1080b2e4 */
  push32((uint32_t)(0x1080b2e4u));
  /* 107e2cd0 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2cd6u);
  /* 107e2cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2cd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2cdb call 0x107e3d00 */
  push32(0x107e2ce0u); f_107e3d00();
  /* 107e2ce0 mov esi, esp */
  ESI = (ESP);
  /* 107e2ce2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 107e2ce7 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e2ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2ceb call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2cf1u);
  /* 107e2cf1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2cf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2cf6 call 0x107e3d00 */
  push32(0x107e2cfbu); f_107e3d00();
  /* 107e2cfb mov esi, esp */
  ESI = (ESP);
  /* 107e2cfd push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 107e2d02 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e2d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2d06 call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2d0cu);
  /* 107e2d0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2d0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2d11 call 0x107e3d00 */
  push32(0x107e2d16u); f_107e3d00();
  /* 107e2d16 jmp 0x107e2dd5 */
  goto L_107e2dd5;
L_107e2d1b:;
  /* 107e2d1b mov esi, esp */
  ESI = (ESP);
  /* 107e2d1d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107e2d1f call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2d25u);
  /* 107e2d25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2d28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2d2a call 0x107e3d00 */
  push32(0x107e2d2fu); f_107e3d00();
  /* 107e2d2f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2d34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2d36 je 0x107e2dd5 */
  if (C.zf) goto L_107e2dd5;
  /* 107e2d3c mov esi, esp */
  ESI = (ESP);
  /* 107e2d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2d40 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107e2d42 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2d48u);
  /* 107e2d48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2d4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2d4d call 0x107e3d00 */
  push32(0x107e2d52u); f_107e3d00();
  /* 107e2d52 mov esi, esp */
  ESI = (ESP);
  /* 107e2d54 push 0x1080b2d8 */
  push32((uint32_t)(0x1080b2d8u));
  /* 107e2d59 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2d5fu);
  /* 107e2d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2d62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2d64 call 0x107e3d00 */
  push32(0x107e2d69u); f_107e3d00();
  /* 107e2d69 mov esi, esp */
  ESI = (ESP);
  /* 107e2d6b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 107e2d70 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e2d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2d74 call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2d7au);
  /* 107e2d7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2d7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2d7f call 0x107e3d00 */
  push32(0x107e2d84u); f_107e3d00();
  /* 107e2d84 mov esi, esp */
  ESI = (ESP);
  /* 107e2d86 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 107e2d8b push 4 */
  push32((uint32_t)(0x4u));
  /* 107e2d8d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2d8f call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2d95u);
  /* 107e2d95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2d98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2d9a call 0x107e3d00 */
  push32(0x107e2d9fu); f_107e3d00();
  /* 107e2d9f mov esi, esp */
  ESI = (ESP);
  /* 107e2da1 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 107e2da6 push 5 */
  push32((uint32_t)(0x5u));
  /* 107e2da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2daa call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2db0u);
  /* 107e2db0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2db3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2db5 call 0x107e3d00 */
  push32(0x107e2dbau); f_107e3d00();
  /* 107e2dba mov esi, esp */
  ESI = (ESP);
  /* 107e2dbc push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 107e2dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2dc5 call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2dcbu);
  /* 107e2dcb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2dce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2dd0 call 0x107e3d00 */
  push32(0x107e2dd5u); f_107e3d00();
L_107e2dd5:;
  /* 107e2dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2dd7 push 0x10810588 */
  push32((uint32_t)(0x10810588u));
  /* 107e2ddc call 0x107e100f */
  push32(0x107e2de1u); f_107e100f();
  /* 107e2de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2de4 mov dword ptr [0x10810490], eax */
  w32((uint32_t)(0x10810490), (EAX));
L_107e2de9:;
  /* 107e2de9 mov esi, esp */
  ESI = (ESP);
  /* 107e2deb push 0x12 */
  push32((uint32_t)(0x12u));
  /* 107e2ded call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2df3u);
  /* 107e2df3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2df6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2df8 call 0x107e3d00 */
  push32(0x107e2dfdu); f_107e3d00();
  /* 107e2dfd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2e02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2e04 je 0x107e2e44 */
  if (C.zf) goto L_107e2e44;
  /* 107e2e06 push 0x10810570 */
  push32((uint32_t)(0x10810570u));
  /* 107e2e0b call 0x107e1005 */
  push32(0x107e2e10u); f_107e1005();
  /* 107e2e10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2e15 jne 0x107e2e44 */
  if (!C.zf) goto L_107e2e44;
  /* 107e2e17 mov esi, esp */
  ESI = (ESP);
  /* 107e2e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2e1b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 107e2e1d call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2e23u);
  /* 107e2e23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2e26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2e28 call 0x107e3d00 */
  push32(0x107e2e2du); f_107e3d00();
  /* 107e2e2d mov esi, esp */
  ESI = (ESP);
  /* 107e2e2f push 0x1080b2cc */
  push32((uint32_t)(0x1080b2ccu));
  /* 107e2e34 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2e3au);
  /* 107e2e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2e3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2e3f call 0x107e3d00 */
  push32(0x107e2e44u); f_107e3d00();
L_107e2e44:;
  /* 107e2e44 mov esi, esp */
  ESI = (ESP);
  /* 107e2e46 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107e2e48 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2e4eu);
  /* 107e2e4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2e51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2e53 call 0x107e3d00 */
  push32(0x107e2e58u); f_107e3d00();
  /* 107e2e58 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2e5f je 0x107e2e9f */
  if (C.zf) goto L_107e2e9f;
  /* 107e2e61 push 0x10810580 */
  push32((uint32_t)(0x10810580u));
  /* 107e2e66 call 0x107e1005 */
  push32(0x107e2e6bu); f_107e1005();
  /* 107e2e6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2e6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2e70 jne 0x107e2e9f */
  if (!C.zf) goto L_107e2e9f;
  /* 107e2e72 mov esi, esp */
  ESI = (ESP);
  /* 107e2e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2e76 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107e2e78 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2e7eu);
  /* 107e2e7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2e81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2e83 call 0x107e3d00 */
  push32(0x107e2e88u); f_107e3d00();
  /* 107e2e88 mov esi, esp */
  ESI = (ESP);
  /* 107e2e8a push 0x1080b2c0 */
  push32((uint32_t)(0x1080b2c0u));
  /* 107e2e8f call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2e95u);
  /* 107e2e95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2e98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2e9a call 0x107e3d00 */
  push32(0x107e2e9fu); f_107e3d00();
L_107e2e9f:;
  /* 107e2e9f mov esi, esp */
  ESI = (ESP);
  /* 107e2ea1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 107e2ea3 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2ea9u);
  /* 107e2ea9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2eac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2eae call 0x107e3d00 */
  push32(0x107e2eb3u); f_107e3d00();
  /* 107e2eb3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2eba je 0x107e2efa */
  if (C.zf) goto L_107e2efa;
  /* 107e2ebc push 0x10810560 */
  push32((uint32_t)(0x10810560u));
  /* 107e2ec1 call 0x107e1005 */
  push32(0x107e2ec6u); f_107e1005();
  /* 107e2ec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2ecb jne 0x107e2efa */
  if (!C.zf) goto L_107e2efa;
  /* 107e2ecd mov esi, esp */
  ESI = (ESP);
  /* 107e2ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2ed1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 107e2ed3 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2ed9u);
  /* 107e2ed9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2edc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2ede call 0x107e3d00 */
  push32(0x107e2ee3u); f_107e3d00();
  /* 107e2ee3 mov esi, esp */
  ESI = (ESP);
  /* 107e2ee5 push 0x1080b2b4 */
  push32((uint32_t)(0x1080b2b4u));
  /* 107e2eea call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2ef0u);
  /* 107e2ef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2ef3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2ef5 call 0x107e3d00 */
  push32(0x107e2efau); f_107e3d00();
L_107e2efa:;
  /* 107e2efa mov esi, esp */
  ESI = (ESP);
  /* 107e2efc push 0x15 */
  push32((uint32_t)(0x15u));
  /* 107e2efe call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2f04u);
  /* 107e2f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2f07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2f09 call 0x107e3d00 */
  push32(0x107e2f0eu); f_107e3d00();
  /* 107e2f0e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2f13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2f15 je 0x107e2f55 */
  if (C.zf) goto L_107e2f55;
  /* 107e2f17 push 0x10810568 */
  push32((uint32_t)(0x10810568u));
  /* 107e2f1c call 0x107e1005 */
  push32(0x107e2f21u); f_107e1005();
  /* 107e2f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2f24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2f26 jne 0x107e2f55 */
  if (!C.zf) goto L_107e2f55;
  /* 107e2f28 mov esi, esp */
  ESI = (ESP);
  /* 107e2f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2f2c push 0x15 */
  push32((uint32_t)(0x15u));
  /* 107e2f2e call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2f34u);
  /* 107e2f34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2f37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2f39 call 0x107e3d00 */
  push32(0x107e2f3eu); f_107e3d00();
  /* 107e2f3e mov esi, esp */
  ESI = (ESP);
  /* 107e2f40 push 0x1080b2a8 */
  push32((uint32_t)(0x1080b2a8u));
  /* 107e2f45 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2f4bu);
  /* 107e2f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2f4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2f50 call 0x107e3d00 */
  push32(0x107e2f55u); f_107e3d00();
L_107e2f55:;
  /* 107e2f55 mov esi, esp */
  ESI = (ESP);
  /* 107e2f57 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 107e2f59 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2f5fu);
  /* 107e2f5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2f62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2f64 call 0x107e3d00 */
  push32(0x107e2f69u); f_107e3d00();
  /* 107e2f69 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2f70 je 0x107e3046 */
  if (C.zf) goto L_107e3046;
  /* 107e2f76 mov esi, esp */
  ESI = (ESP);
  /* 107e2f78 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107e2f7a call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e2f80u);
  /* 107e2f80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2f83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2f85 call 0x107e3d00 */
  push32(0x107e2f8au); f_107e3d00();
  /* 107e2f8a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e2f8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2f91 jne 0x107e3046 */
  if (!C.zf) goto L_107e3046;
  /* 107e2f97 mov esi, esp */
  ESI = (ESP);
  /* 107e2f99 push 0x108103e8 */
  push32((uint32_t)(0x108103e8u));
  /* 107e2f9e push 0x10810450 */
  push32((uint32_t)(0x10810450u));
  /* 107e2fa3 call dword ptr [0x10813450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813450))), 0x107e2fa9u);
  /* 107e2fa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2fac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2fae call 0x107e3d00 */
  push32(0x107e2fb3u); f_107e3d00();
  /* 107e2fb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e2fb5 jle 0x107e3046 */
  if ((C.zf||C.sf!=C.of)) goto L_107e3046;
  /* 107e2fbb mov esi, esp */
  ESI = (ESP);
  /* 107e2fbd push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2fbf push 0x16 */
  push32((uint32_t)(0x16u));
  /* 107e2fc1 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e2fc7u);
  /* 107e2fc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2fca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2fcc call 0x107e3d00 */
  push32(0x107e2fd1u); f_107e3d00();
  /* 107e2fd1 mov esi, esp */
  ESI = (ESP);
  /* 107e2fd3 push 0x1080b29c */
  push32((uint32_t)(0x1080b29cu));
  /* 107e2fd8 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e2fdeu);
  /* 107e2fde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2fe1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2fe3 call 0x107e3d00 */
  push32(0x107e2fe8u); f_107e3d00();
  /* 107e2fe8 mov esi, esp */
  ESI = (ESP);
  /* 107e2fea push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 107e2fef push 3 */
  push32((uint32_t)(0x3u));
  /* 107e2ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e2ff3 call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e2ff9u);
  /* 107e2ff9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e2ffc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e2ffe call 0x107e3d00 */
  push32(0x107e3003u); f_107e3d00();
  /* 107e3003 mov esi, esp */
  ESI = (ESP);
  /* 107e3005 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e3007 call dword ptr [0x10813474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813474))), 0x107e300du);
  /* 107e300d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3010 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3012 call 0x107e3d00 */
  push32(0x107e3017u); f_107e3d00();
  /* 107e3017 mov esi, esp */
  ESI = (ESP);
  /* 107e3019 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e301b push 0x10810520 */
  push32((uint32_t)(0x10810520u));
  /* 107e3020 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e3026u);
  /* 107e3026 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3029 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e302b call 0x107e3d00 */
  push32(0x107e3030u); f_107e3d00();
  /* 107e3030 mov esi, esp */
  ESI = (ESP);
  /* 107e3032 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e3034 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e3036 call dword ptr [0x1081346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081346c))), 0x107e303cu);
  /* 107e303c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e303f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3041 call 0x107e3d00 */
  push32(0x107e3046u); f_107e3d00();
L_107e3046:;
  /* 107e3046 mov esi, esp */
  ESI = (ESP);
  /* 107e3048 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 107e304a call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e3050u);
  /* 107e3050 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3053 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3055 call 0x107e3d00 */
  push32(0x107e305au); f_107e3d00();
  /* 107e305a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e305f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e3061 je 0x107e312d */
  if (C.zf) goto L_107e312d;
  /* 107e3067 mov esi, esp */
  ESI = (ESP);
  /* 107e3069 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107e306b call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e3071u);
  /* 107e3071 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3074 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3076 call 0x107e3d00 */
  push32(0x107e307bu); f_107e3d00();
  /* 107e307b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e3080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e3082 jne 0x107e312d */
  if (!C.zf) goto L_107e312d;
  /* 107e3088 mov esi, esp */
  ESI = (ESP);
  /* 107e308a push 0x108103e8 */
  push32((uint32_t)(0x108103e8u));
  /* 107e308f push 0x10810468 */
  push32((uint32_t)(0x10810468u));
  /* 107e3094 call dword ptr [0x10813450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813450))), 0x107e309au);
  /* 107e309a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e309d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e309f call 0x107e3d00 */
  push32(0x107e30a4u); f_107e3d00();
  /* 107e30a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e30a6 jle 0x107e312d */
  if ((C.zf||C.sf!=C.of)) goto L_107e312d;
  /* 107e30ac push 0x108104e8 */
  push32((uint32_t)(0x108104e8u));
  /* 107e30b1 call 0x107e1005 */
  push32(0x107e30b6u); f_107e1005();
  /* 107e30b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e30b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e30bb jle 0x107e312d */
  if ((C.zf||C.sf!=C.of)) goto L_107e312d;
  /* 107e30bd mov esi, esp */
  ESI = (ESP);
  /* 107e30bf push 0 */
  push32((uint32_t)(0x0u));
  /* 107e30c1 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 107e30c3 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e30c9u);
  /* 107e30c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e30cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e30ce call 0x107e3d00 */
  push32(0x107e30d3u); f_107e3d00();
  /* 107e30d3 mov esi, esp */
  ESI = (ESP);
  /* 107e30d5 push 0x1080b290 */
  push32((uint32_t)(0x1080b290u));
  /* 107e30da call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e30e0u);
  /* 107e30e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e30e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e30e5 call 0x107e3d00 */
  push32(0x107e30eau); f_107e3d00();
  /* 107e30ea mov esi, esp */
  ESI = (ESP);
  /* 107e30ec push 3 */
  push32((uint32_t)(0x3u));
  /* 107e30ee call dword ptr [0x10813474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813474))), 0x107e30f4u);
  /* 107e30f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e30f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e30f9 call 0x107e3d00 */
  push32(0x107e30feu); f_107e3d00();
  /* 107e30fe mov esi, esp */
  ESI = (ESP);
  /* 107e3100 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e3102 push 0x108104e8 */
  push32((uint32_t)(0x108104e8u));
  /* 107e3107 call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e310du);
  /* 107e310d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3110 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3112 call 0x107e3d00 */
  push32(0x107e3117u); f_107e3d00();
  /* 107e3117 mov esi, esp */
  ESI = (ESP);
  /* 107e3119 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e311b push 3 */
  push32((uint32_t)(0x3u));
  /* 107e311d call dword ptr [0x1081346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081346c))), 0x107e3123u);
  /* 107e3123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3126 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3128 call 0x107e3d00 */
  push32(0x107e312du); f_107e3d00();
L_107e312d:;
  /* 107e312d mov esi, esp */
  ESI = (ESP);
  /* 107e312f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 107e3131 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e3137u);
  /* 107e3137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e313a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e313c call 0x107e3d00 */
  push32(0x107e3141u); f_107e3d00();
  /* 107e3141 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e3146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e3148 je 0x107e31a6 */
  if (C.zf) goto L_107e31a6;
  /* 107e314a mov esi, esp */
  ESI = (ESP);
  /* 107e314c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e314e push 0x10810460 */
  push32((uint32_t)(0x10810460u));
  /* 107e3153 call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e3159u);
  /* 107e3159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e315c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e315e call 0x107e3d00 */
  push32(0x107e3163u); f_107e3d00();
  /* 107e3163 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3166 jle 0x107e31a6 */
  if ((C.zf||C.sf!=C.of)) goto L_107e31a6;
  /* 107e3168 push 0x10810500 */
  push32((uint32_t)(0x10810500u));
  /* 107e316d call 0x107e1005 */
  push32(0x107e3172u); f_107e1005();
  /* 107e3172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3175 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e3177 jle 0x107e31a6 */
  if ((C.zf||C.sf!=C.of)) goto L_107e31a6;
  /* 107e3179 mov esi, esp */
  ESI = (ESP);
  /* 107e317b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e317d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 107e317f call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e3185u);
  /* 107e3185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e318a call 0x107e3d00 */
  push32(0x107e318fu); f_107e3d00();
  /* 107e318f mov esi, esp */
  ESI = (ESP);
  /* 107e3191 push 0x1080b284 */
  push32((uint32_t)(0x1080b284u));
  /* 107e3196 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e319cu);
  /* 107e319c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e319f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e31a1 call 0x107e3d00 */
  push32(0x107e31a6u); f_107e3d00();
L_107e31a6:;
  /* 107e31a6 mov esi, esp */
  ESI = (ESP);
  /* 107e31a8 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 107e31aa call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e31b0u);
  /* 107e31b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e31b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e31b5 call 0x107e3d00 */
  push32(0x107e31bau); f_107e3d00();
  /* 107e31ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e31bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e31c1 jne 0x107e320f */
  if (!C.zf) goto L_107e320f;
  /* 107e31c3 mov esi, esp */
  ESI = (ESP);
  /* 107e31c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e31c7 push 0x10810460 */
  push32((uint32_t)(0x10810460u));
  /* 107e31cc call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e31d2u);
  /* 107e31d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e31d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e31d7 call 0x107e3d00 */
  push32(0x107e31dcu); f_107e3d00();
  /* 107e31dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e31de jle 0x107e320f */
  if ((C.zf||C.sf!=C.of)) goto L_107e320f;
  /* 107e31e0 push 0x10810500 */
  push32((uint32_t)(0x10810500u));
  /* 107e31e5 call 0x107e1005 */
  push32(0x107e31eau); f_107e1005();
  /* 107e31ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e31ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e31ef jle 0x107e320f */
  if ((C.zf||C.sf!=C.of)) goto L_107e320f;
  /* 107e31f1 mov esi, esp */
  ESI = (ESP);
  /* 107e31f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e31f5 push 0x10810460 */
  push32((uint32_t)(0x10810460u));
  /* 107e31fa push 0x10810500 */
  push32((uint32_t)(0x10810500u));
  /* 107e31ff call dword ptr [0x10813448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813448))), 0x107e3205u);
  /* 107e3205 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3208 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e320a call 0x107e3d00 */
  push32(0x107e320fu); f_107e3d00();
L_107e320f:;
  /* 107e320f mov esi, esp */
  ESI = (ESP);
  /* 107e3211 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107e3213 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e3219u);
  /* 107e3219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e321c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e321e call 0x107e3d00 */
  push32(0x107e3223u); f_107e3d00();
  /* 107e3223 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e3228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e322a je 0x107e32a2 */
  if (C.zf) goto L_107e32a2;
  /* 107e322c push 0x10810500 */
  push32((uint32_t)(0x10810500u));
  /* 107e3231 call 0x107e1005 */
  push32(0x107e3236u); f_107e1005();
  /* 107e3236 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e323b jne 0x107e32a2 */
  if (!C.zf) goto L_107e32a2;
  /* 107e323d mov esi, esp */
  ESI = (ESP);
  /* 107e323f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e3241 push 0x10810478 */
  push32((uint32_t)(0x10810478u));
  /* 107e3246 call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e324cu);
  /* 107e324c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e324f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3251 call 0x107e3d00 */
  push32(0x107e3256u); f_107e3d00();
  /* 107e3256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e3258 jle 0x107e32a2 */
  if ((C.zf||C.sf!=C.of)) goto L_107e32a2;
  /* 107e325a mov esi, esp */
  ESI = (ESP);
  /* 107e325c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e325e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107e3260 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e3266u);
  /* 107e3266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e326b call 0x107e3d00 */
  push32(0x107e3270u); f_107e3d00();
  /* 107e3270 mov esi, esp */
  ESI = (ESP);
  /* 107e3272 push 0x1080b278 */
  push32((uint32_t)(0x1080b278u));
  /* 107e3277 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e327du);
  /* 107e327d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3280 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3282 call 0x107e3d00 */
  push32(0x107e3287u); f_107e3d00();
  /* 107e3287 mov esi, esp */
  ESI = (ESP);
  /* 107e3289 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 107e328e push 1 */
  push32((uint32_t)(0x1u));
  /* 107e3290 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e3292 call dword ptr [0x10813498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813498))), 0x107e3298u);
  /* 107e3298 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e329b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e329d call 0x107e3d00 */
  push32(0x107e32a2u); f_107e3d00();
L_107e32a2:;
  /* 107e32a2 mov esi, esp */
  ESI = (ESP);
  /* 107e32a4 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 107e32a6 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e32acu);
  /* 107e32ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e32af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e32b1 call 0x107e3d00 */
  push32(0x107e32b6u); f_107e3d00();
  /* 107e32b6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e32bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e32bd je 0x107e3362 */
  if (C.zf) goto L_107e3362;
  /* 107e32c3 push 0x108104f8 */
  push32((uint32_t)(0x108104f8u));
  /* 107e32c8 call 0x107e1005 */
  push32(0x107e32cdu); f_107e1005();
  /* 107e32cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e32d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e32d2 jne 0x107e3362 */
  if (!C.zf) goto L_107e3362;
  /* 107e32d8 mov esi, esp */
  ESI = (ESP);
  /* 107e32da push 0 */
  push32((uint32_t)(0x0u));
  /* 107e32dc push 0x10810470 */
  push32((uint32_t)(0x10810470u));
  /* 107e32e1 call dword ptr [0x1081343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081343c))), 0x107e32e7u);
  /* 107e32e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e32ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e32ec call 0x107e3d00 */
  push32(0x107e32f1u); f_107e3d00();
  /* 107e32f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e32f3 jle 0x107e3362 */
  if ((C.zf||C.sf!=C.of)) goto L_107e3362;
  /* 107e32f5 push 0x10810558 */
  push32((uint32_t)(0x10810558u));
  /* 107e32fa call 0x107e1005 */
  push32(0x107e32ffu); f_107e1005();
  /* 107e32ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e3304 jle 0x107e3362 */
  if ((C.zf||C.sf!=C.of)) goto L_107e3362;
  /* 107e3306 mov esi, esp */
  ESI = (ESP);
  /* 107e3308 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e330a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 107e330c call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e3312u);
  /* 107e3312 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3315 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3317 call 0x107e3d00 */
  push32(0x107e331cu); f_107e3d00();
  /* 107e331c mov esi, esp */
  ESI = (ESP);
  /* 107e331e push 0x1080b26c */
  push32((uint32_t)(0x1080b26cu));
  /* 107e3323 call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e3329u);
  /* 107e3329 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e332c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e332e call 0x107e3d00 */
  push32(0x107e3333u); f_107e3d00();
  /* 107e3333 mov esi, esp */
  ESI = (ESP);
  /* 107e3335 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e3337 push 0x10810558 */
  push32((uint32_t)(0x10810558u));
  /* 107e333c call dword ptr [0x10813430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813430))), 0x107e3342u);
  /* 107e3342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3345 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3347 call 0x107e3d00 */
  push32(0x107e334cu); f_107e3d00();
  /* 107e334c mov esi, esp */
  ESI = (ESP);
  /* 107e334e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e3350 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e3352 call dword ptr [0x1081346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081346c))), 0x107e3358u);
  /* 107e3358 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e335b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e335d call 0x107e3d00 */
  push32(0x107e3362u); f_107e3d00();
L_107e3362:;
  /* 107e3362 mov esi, esp */
  ESI = (ESP);
  /* 107e3364 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 107e3366 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e336cu);
  /* 107e336c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e336f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3371 call 0x107e3d00 */
  push32(0x107e3376u); f_107e3d00();
  /* 107e3376 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e337b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e337d je 0x107e3479 */
  if (C.zf) goto L_107e3479;
  /* 107e3383 mov esi, esp */
  ESI = (ESP);
  /* 107e3385 push 6 */
  push32((uint32_t)(0x6u));
  /* 107e3387 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e338du);
  /* 107e338d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3392 call 0x107e3d00 */
  push32(0x107e3397u); f_107e3d00();
  /* 107e3397 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e339c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e339e jne 0x107e3479 */
  if (!C.zf) goto L_107e3479;
  /* 107e33a4 mov esi, esp */
  ESI = (ESP);
  /* 107e33a6 push 0xc */
  push32((uint32_t)(0xcu));
  /* 107e33a8 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e33aeu);
  /* 107e33ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e33b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e33b3 call 0x107e3d00 */
  push32(0x107e33b8u); f_107e3d00();
  /* 107e33b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e33bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e33bf jne 0x107e3479 */
  if (!C.zf) goto L_107e3479;
  /* 107e33c5 mov esi, esp */
  ESI = (ESP);
  /* 107e33c7 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 107e33c9 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e33cfu);
  /* 107e33cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e33d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e33d4 call 0x107e3d00 */
  push32(0x107e33d9u); f_107e3d00();
  /* 107e33d9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e33de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e33e0 jne 0x107e3479 */
  if (!C.zf) goto L_107e3479;
  /* 107e33e6 mov esi, esp */
  ESI = (ESP);
  /* 107e33e8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107e33ea call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e33f0u);
  /* 107e33f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e33f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e33f5 call 0x107e3d00 */
  push32(0x107e33fau); f_107e3d00();
  /* 107e33fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e33ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e3401 jne 0x107e3479 */
  if (!C.zf) goto L_107e3479;
  /* 107e3403 mov esi, esp */
  ESI = (ESP);
  /* 107e3405 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 107e3407 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e340du);
  /* 107e340d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3410 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3412 call 0x107e3d00 */
  push32(0x107e3417u); f_107e3d00();
  /* 107e3417 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e341c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e341e jne 0x107e3479 */
  if (!C.zf) goto L_107e3479;
  /* 107e3420 mov esi, esp */
  ESI = (ESP);
  /* 107e3422 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 107e3424 call dword ptr [0x1081342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081342c))), 0x107e342au);
  /* 107e342a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e342d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e342f call 0x107e3d00 */
  push32(0x107e3434u); f_107e3d00();
  /* 107e3434 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e3439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e343b jne 0x107e3479 */
  if (!C.zf) goto L_107e3479;
  /* 107e343d mov esi, esp */
  ESI = (ESP);
  /* 107e343f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e3441 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 107e3443 call dword ptr [0x10813424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813424))), 0x107e3449u);
  /* 107e3449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e344c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e344e call 0x107e3d00 */
  push32(0x107e3453u); f_107e3d00();
  /* 107e3453 mov esi, esp */
  ESI = (ESP);
  /* 107e3455 push 0x1080b260 */
  push32((uint32_t)(0x1080b260u));
  /* 107e345a call dword ptr [0x10813438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813438))), 0x107e3460u);
  /* 107e3460 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3463 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3465 call 0x107e3d00 */
  push32(0x107e346au); f_107e3d00();
  /* 107e346a mov esi, esp */
  ESI = (ESP);
  /* 107e346c call dword ptr [0x10813490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813490))), 0x107e3472u);
  /* 107e3472 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3474 call 0x107e3d00 */
  push32(0x107e3479u); f_107e3d00();
L_107e3479:;
  /* 107e3479 pop edi */
  EDI = (pop32());
  /* 107e347a pop esi */
  ESI = (pop32());
  /* 107e347b pop ebx */
  EBX = (pop32());
  /* 107e347c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e347f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3481 call 0x107e3d00 */
  push32(0x107e3486u); f_107e3d00();
  /* 107e3486 mov esp, ebp */
  ESP = (EBP);
  /* 107e3488 pop ebp */
  EBP = (pop32());
  /* 107e3489 ret  */
  ESPCHK(0x107e18f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b70 @ 0x107e3b70 (63 bytes, 26 insns) */
void f_107e3b70(void) {
  FTRACE(0x107e3b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e3b70 push ebp */
  push32((uint32_t)(EBP));
  /* 107e3b71 mov ebp, esp */
  EBP = (ESP);
  /* 107e3b73 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e3b76 push ebx */
  push32((uint32_t)(EBX));
  /* 107e3b77 push esi */
  push32((uint32_t)(ESI));
  /* 107e3b78 push edi */
  push32((uint32_t)(EDI));
  /* 107e3b79 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107e3b7c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107e3b81 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107e3b86 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107e3b88 mov esi, esp */
  ESI = (ESP);
  /* 107e3b8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e3b8d push eax */
  push32((uint32_t)(EAX));
  /* 107e3b8e call dword ptr [0x10813428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813428))), 0x107e3b94u);
  /* 107e3b94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3b97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3b99 call 0x107e3d00 */
  push32(0x107e3b9eu); f_107e3d00();
  /* 107e3b9e pop edi */
  EDI = (pop32());
  /* 107e3b9f pop esi */
  ESI = (pop32());
  /* 107e3ba0 pop ebx */
  EBX = (pop32());
  /* 107e3ba1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3ba4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3ba6 call 0x107e3d00 */
  push32(0x107e3babu); f_107e3d00();
  /* 107e3bab mov esp, ebp */
  ESP = (EBP);
  /* 107e3bad pop ebp */
  EBP = (pop32());
  /* 107e3bae ret  */
  ESPCHK(0x107e3b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bc0 @ 0x107e3bc0 (67 bytes, 28 insns) */
void f_107e3bc0(void) {
  FTRACE(0x107e3bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e3bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e3bc1 mov ebp, esp */
  EBP = (ESP);
  /* 107e3bc3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e3bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 107e3bc7 push esi */
  push32((uint32_t)(ESI));
  /* 107e3bc8 push edi */
  push32((uint32_t)(EDI));
  /* 107e3bc9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107e3bcc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107e3bd1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107e3bd6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107e3bd8 mov esi, esp */
  ESI = (ESP);
  /* 107e3bda mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 107e3bdd push eax */
  push32((uint32_t)(EAX));
  /* 107e3bde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e3be1 push ecx */
  push32((uint32_t)(ECX));
  /* 107e3be2 call dword ptr [0x10813420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813420))), 0x107e3be8u);
  /* 107e3be8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3beb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3bed call 0x107e3d00 */
  push32(0x107e3bf2u); f_107e3d00();
  /* 107e3bf2 pop edi */
  EDI = (pop32());
  /* 107e3bf3 pop esi */
  ESI = (pop32());
  /* 107e3bf4 pop ebx */
  EBX = (pop32());
  /* 107e3bf5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3bf8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3bfa call 0x107e3d00 */
  push32(0x107e3bffu); f_107e3d00();
  /* 107e3bff mov esp, ebp */
  ESP = (EBP);
  /* 107e3c01 pop ebp */
  EBP = (pop32());
  /* 107e3c02 ret  */
  ESPCHK(0x107e3bc0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x107e3d00 (56 bytes, 28 insns) */
void f_107e3d00(void) {
  FTRACE(0x107e3d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e3d00 jne 0x107e3d03 */
  if (!C.zf) goto L_107e3d03;
  /* 107e3d02 ret  */
  ESPCHK(0x107e3d00u, _esp0);
  ESP += 4; return;
L_107e3d03:;
  /* 107e3d03 push ebp */
  push32((uint32_t)(EBP));
  /* 107e3d04 mov ebp, esp */
  EBP = (ESP);
  /* 107e3d06 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e3d09 push eax */
  push32((uint32_t)(EAX));
  /* 107e3d0a push edx */
  push32((uint32_t)(EDX));
  /* 107e3d0b push ebx */
  push32((uint32_t)(EBX));
  /* 107e3d0c push esi */
  push32((uint32_t)(ESI));
  /* 107e3d0d push edi */
  push32((uint32_t)(EDI));
  /* 107e3d0e push 0x1080b3d0 */
  push32((uint32_t)(0x1080b3d0u));
  /* 107e3d13 push 0x1080b3cc */
  push32((uint32_t)(0x1080b3ccu));
  /* 107e3d18 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 107e3d1a push 0x1080b3bc */
  push32((uint32_t)(0x1080b3bcu));
  /* 107e3d1f push 1 */
  push32((uint32_t)(0x1u));
  /* 107e3d21 call 0x107e40d0 */
  push32(0x107e3d26u); f_107e40d0();
  /* 107e3d26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3d29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3d2c jne 0x107e3d2f */
  if (!C.zf) goto L_107e3d2f;
  /* 107e3d2e int3  */
  x86_unimpl("int3 @ 0x107e3d2e");
L_107e3d2f:;
  /* 107e3d2f pop edi */
  EDI = (pop32());
  /* 107e3d30 pop esi */
  ESI = (pop32());
  /* 107e3d31 pop ebx */
  EBX = (pop32());
  /* 107e3d32 pop edx */
  EDX = (pop32());
  /* 107e3d33 pop eax */
  EAX = (pop32());
  /* 107e3d34 mov esp, ebp */
  ESP = (EBP);
  /* 107e3d36 pop ebp */
  EBP = (pop32());
  /* 107e3d37 ret  */
  ESPCHK(0x107e3d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d40 @ 0x107e3d40 (313 bytes, 78 insns) */
void f_107e3d40(void) {
  FTRACE(0x107e3d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e3d40 push ebp */
  push32((uint32_t)(EBP));
  /* 107e3d41 mov ebp, esp */
  EBP = (ESP);
  /* 107e3d43 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3d47 jne 0x107e3e07 */
  if (!C.zf) goto L_107e3e07;
  /* 107e3d4d call dword ptr [0x10813334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813334))), 0x107e3d53u);
  /* 107e3d53 mov dword ptr [0x10810608], eax */
  w32((uint32_t)(0x10810608), (EAX));
  /* 107e3d58 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e3d5a call 0x107e7800 */
  push32(0x107e3d5fu); f_107e7800();
  /* 107e3d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e3d64 jne 0x107e3d6d */
  if (!C.zf) goto L_107e3d6d;
  /* 107e3d66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e3d68 jmp 0x107e3e75 */
  goto L_107e3e75;
L_107e3d6d:;
  /* 107e3d6d mov eax, dword ptr [0x10810608] */
  EAX = (r32((uint32_t)(0x10810608)));
  /* 107e3d72 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 107e3d75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e3d7a mov dword ptr [0x10810614], eax */
  w32((uint32_t)(0x10810614), (EAX));
  /* 107e3d7f mov ecx, dword ptr [0x10810608] */
  ECX = (r32((uint32_t)(0x10810608)));
  /* 107e3d85 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e3d8b mov dword ptr [0x10810610], ecx */
  w32((uint32_t)(0x10810610), (ECX));
  /* 107e3d91 mov edx, dword ptr [0x10810610] */
  EDX = (r32((uint32_t)(0x10810610)));
  /* 107e3d97 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107e3d9a add edx, dword ptr [0x10810614] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10810614))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3da0 mov dword ptr [0x1081060c], edx */
  w32((uint32_t)(0x1081060c), (EDX));
  /* 107e3da6 mov eax, dword ptr [0x10810608] */
  EAX = (r32((uint32_t)(0x10810608)));
  /* 107e3dab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107e3dae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e3db3 mov dword ptr [0x10810608], eax */
  w32((uint32_t)(0x10810608), (EAX));
  /* 107e3db8 call 0x107e4970 */
  push32(0x107e3dbdu); f_107e4970();
  /* 107e3dbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e3dbf jne 0x107e3dcd */
  if (!C.zf) goto L_107e3dcd;
  /* 107e3dc1 call 0x107e7850 */
  push32(0x107e3dc6u); f_107e7850();
  /* 107e3dc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e3dc8 jmp 0x107e3e75 */
  goto L_107e3e75;
L_107e3dcd:;
  /* 107e3dcd call dword ptr [0x10813330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813330))), 0x107e3dd3u);
  /* 107e3dd3 mov dword ptr [0x1081214c], eax */
  w32((uint32_t)(0x1081214c), (EAX));
  /* 107e3dd8 call 0x107e75e0 */
  push32(0x107e3dddu); f_107e75e0();
  /* 107e3ddd mov dword ptr [0x108105f0], eax */
  w32((uint32_t)(0x108105f0), (EAX));
  /* 107e3de2 call 0x107e4c20 */
  push32(0x107e3de7u); f_107e4c20();
  /* 107e3de7 call 0x107e70d0 */
  push32(0x107e3decu); f_107e70d0();
  /* 107e3dec call 0x107e6f80 */
  push32(0x107e3df1u); f_107e6f80();
  /* 107e3df1 call 0x107e4770 */
  push32(0x107e3df6u); f_107e4770();
  /* 107e3df6 mov ecx, dword ptr [0x108105ec] */
  ECX = (r32((uint32_t)(0x108105ec)));
  /* 107e3dfc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3dff mov dword ptr [0x108105ec], ecx */
  w32((uint32_t)(0x108105ec), (ECX));
  /* 107e3e05 jmp 0x107e3e70 */
  goto L_107e3e70;
L_107e3e07:;
  /* 107e3e07 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3e0b jne 0x107e3e60 */
  if (!C.zf) goto L_107e3e60;
  /* 107e3e0d cmp dword ptr [0x108105ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108105ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3e14 jle 0x107e3e5a */
  if ((C.zf||C.sf!=C.of)) goto L_107e3e5a;
  /* 107e3e16 mov edx, dword ptr [0x108105ec] */
  EDX = (r32((uint32_t)(0x108105ec)));
  /* 107e3e1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e3e1f mov dword ptr [0x108105ec], edx */
  w32((uint32_t)(0x108105ec), (EDX));
  /* 107e3e25 cmp dword ptr [0x10810640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3e2c jne 0x107e3e33 */
  if (!C.zf) goto L_107e3e33;
  /* 107e3e2e call 0x107e47f0 */
  push32(0x107e3e33u); f_107e47f0();
L_107e3e33:;
  /* 107e3e33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107e3e35 call 0x107e6520 */
  push32(0x107e3e3au); f_107e6520();
  /* 107e3e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3e3d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 107e3e40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e3e42 je 0x107e3e49 */
  if (C.zf) goto L_107e3e49;
  /* 107e3e44 call 0x107e6e30 */
  push32(0x107e3e49u); f_107e6e30();
L_107e3e49:;
  /* 107e3e49 call 0x107e4f50 */
  push32(0x107e3e4eu); f_107e4f50();
  /* 107e3e4e call 0x107e4a00 */
  push32(0x107e3e53u); f_107e4a00();
  /* 107e3e53 call 0x107e7850 */
  push32(0x107e3e58u); f_107e7850();
  /* 107e3e58 jmp 0x107e3e5e */
  goto L_107e3e5e;
L_107e3e5a:;
  /* 107e3e5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e3e5c jmp 0x107e3e75 */
  goto L_107e3e75;
L_107e3e5e:;
  /* 107e3e5e jmp 0x107e3e70 */
  goto L_107e3e70;
L_107e3e60:;
  /* 107e3e60 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3e64 jne 0x107e3e70 */
  if (!C.zf) goto L_107e3e70;
  /* 107e3e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e3e68 call 0x107e4af0 */
  push32(0x107e3e6du); f_107e4af0();
  /* 107e3e6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e3e70:;
  /* 107e3e70 mov eax, 1 */
  EAX = (0x1u);
L_107e3e75:;
  /* 107e3e75 pop ebp */
  EBP = (pop32());
  /* 107e3e76 ret 0xc */
  ESPCHK(0x107e3d40u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x107e3e80 (243 bytes, 86 insns) */
void f_107e3e80(void) {
  FTRACE(0x107e3e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e3e80 push ebp */
  push32((uint32_t)(EBP));
  /* 107e3e81 mov ebp, esp */
  EBP = (ESP);
  /* 107e3e83 push ecx */
  push32((uint32_t)(ECX));
  /* 107e3e84 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107e3e8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3e8f jne 0x107e3ea1 */
  if (!C.zf) goto L_107e3ea1;
  /* 107e3e91 cmp dword ptr [0x108105ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108105ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3e98 jne 0x107e3ea1 */
  if (!C.zf) goto L_107e3ea1;
  /* 107e3e9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e3e9c jmp 0x107e3f6d */
  goto L_107e3f6d;
L_107e3ea1:;
  /* 107e3ea1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3ea5 je 0x107e3ead */
  if (C.zf) goto L_107e3ead;
  /* 107e3ea7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3eab jne 0x107e3eef */
  if (!C.zf) goto L_107e3eef;
L_107e3ead:;
  /* 107e3ead cmp dword ptr [0x1081215c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081215c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3eb4 je 0x107e3ecb */
  if (C.zf) goto L_107e3ecb;
  /* 107e3eb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e3eb9 push eax */
  push32((uint32_t)(EAX));
  /* 107e3eba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e3ebd push ecx */
  push32((uint32_t)(ECX));
  /* 107e3ebe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e3ec1 push edx */
  push32((uint32_t)(EDX));
  /* 107e3ec2 call dword ptr [0x1081215c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081215c))), 0x107e3ec8u);
  /* 107e3ec8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e3ecb:;
  /* 107e3ecb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3ecf je 0x107e3ee5 */
  if (C.zf) goto L_107e3ee5;
  /* 107e3ed1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e3ed4 push eax */
  push32((uint32_t)(EAX));
  /* 107e3ed5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e3ed8 push ecx */
  push32((uint32_t)(ECX));
  /* 107e3ed9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e3edc push edx */
  push32((uint32_t)(EDX));
  /* 107e3edd call 0x107e3d40 */
  push32(0x107e3ee2u); f_107e3d40();
  /* 107e3ee2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e3ee5:;
  /* 107e3ee5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3ee9 jne 0x107e3eef */
  if (!C.zf) goto L_107e3eef;
  /* 107e3eeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e3eed jmp 0x107e3f6d */
  goto L_107e3f6d;
L_107e3eef:;
  /* 107e3eef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e3ef2 push eax */
  push32((uint32_t)(EAX));
  /* 107e3ef3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e3ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 107e3ef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e3efa push edx */
  push32((uint32_t)(EDX));
  /* 107e3efb call 0x107e1014 */
  push32(0x107e3f00u); f_107e1014();
  /* 107e3f00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e3f03 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3f07 jne 0x107e3f1e */
  if (!C.zf) goto L_107e3f1e;
  /* 107e3f09 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3f0d jne 0x107e3f1e */
  if (!C.zf) goto L_107e3f1e;
  /* 107e3f0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e3f12 push eax */
  push32((uint32_t)(EAX));
  /* 107e3f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e3f15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e3f18 push ecx */
  push32((uint32_t)(ECX));
  /* 107e3f19 call 0x107e3d40 */
  push32(0x107e3f1eu); f_107e3d40();
L_107e3f1e:;
  /* 107e3f1e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3f22 je 0x107e3f2a */
  if (C.zf) goto L_107e3f2a;
  /* 107e3f24 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3f28 jne 0x107e3f6a */
  if (!C.zf) goto L_107e3f6a;
L_107e3f2a:;
  /* 107e3f2a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e3f2d push edx */
  push32((uint32_t)(EDX));
  /* 107e3f2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e3f31 push eax */
  push32((uint32_t)(EAX));
  /* 107e3f32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e3f35 push ecx */
  push32((uint32_t)(ECX));
  /* 107e3f36 call 0x107e3d40 */
  push32(0x107e3f3bu); f_107e3d40();
  /* 107e3f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e3f3d jne 0x107e3f46 */
  if (!C.zf) goto L_107e3f46;
  /* 107e3f3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107e3f46:;
  /* 107e3f46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3f4a je 0x107e3f6a */
  if (C.zf) goto L_107e3f6a;
  /* 107e3f4c cmp dword ptr [0x1081215c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081215c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3f53 je 0x107e3f6a */
  if (C.zf) goto L_107e3f6a;
  /* 107e3f55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e3f58 push edx */
  push32((uint32_t)(EDX));
  /* 107e3f59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e3f5c push eax */
  push32((uint32_t)(EAX));
  /* 107e3f5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e3f60 push ecx */
  push32((uint32_t)(ECX));
  /* 107e3f61 call dword ptr [0x1081215c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081215c))), 0x107e3f67u);
  /* 107e3f67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e3f6a:;
  /* 107e3f6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107e3f6d:;
  /* 107e3f6d mov esp, ebp */
  ESP = (EBP);
  /* 107e3f6f pop ebp */
  EBP = (pop32());
  /* 107e3f70 ret 0xc */
  ESPCHK(0x107e3e80u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x107e3f80 (58 bytes, 18 insns) */
void f_107e3f80(void) {
  FTRACE(0x107e3f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e3f80 push ebp */
  push32((uint32_t)(EBP));
  /* 107e3f81 mov ebp, esp */
  EBP = (ESP);
  /* 107e3f83 cmp dword ptr [0x108105f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108105f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3f8a je 0x107e3f9e */
  if (C.zf) goto L_107e3f9e;
  /* 107e3f8c cmp dword ptr [0x108105f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108105f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3f93 jne 0x107e3fa3 */
  if (!C.zf) goto L_107e3fa3;
  /* 107e3f95 cmp dword ptr [0x108105fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108105fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3f9c jne 0x107e3fa3 */
  if (!C.zf) goto L_107e3fa3;
L_107e3f9e:;
  /* 107e3f9e call 0x107e78f0 */
  push32(0x107e3fa3u); f_107e78f0();
L_107e3fa3:;
  /* 107e3fa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e3fa6 push eax */
  push32((uint32_t)(EAX));
  /* 107e3fa7 call 0x107e7940 */
  push32(0x107e3facu); f_107e7940();
  /* 107e3fac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3faf push 0xff */
  push32((uint32_t)(0xffu));
  /* 107e3fb4 call dword ptr [0x1080ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1080ea30))), 0x107e3fbau);
  /* 107e3fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e3fbd pop ebp */
  EBP = (pop32());
  /* 107e3fbe ret  */
  ESPCHK(0x107e3f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x107e3fc0 (11 bytes, 5 insns) */
void f_107e3fc0(void) {
  FTRACE(0x107e3fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e3fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e3fc1 mov ebp, esp */
  EBP = (ESP);
  /* 107e3fc3 call dword ptr [0x10813338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813338))), 0x107e3fc9u);
  /* 107e3fc9 pop ebp */
  EBP = (pop32());
  /* 107e3fca ret  */
  ESPCHK(0x107e3fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fd0 @ 0x107e3fd0 (87 bytes, 30 insns) */
void f_107e3fd0(void) {
  FTRACE(0x107e3fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e3fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e3fd1 mov ebp, esp */
  EBP = (ESP);
  /* 107e3fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e3fd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3fd8 jl 0x107e3fe0 */
  if ((C.sf!=C.of)) goto L_107e3fe0;
  /* 107e3fda cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3fde jl 0x107e3fe5 */
  if ((C.sf!=C.of)) goto L_107e3fe5;
L_107e3fe0:;
  /* 107e3fe0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e3fe3 jmp 0x107e4023 */
  goto L_107e4023;
L_107e3fe5:;
  /* 107e3fe5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e3fe9 jne 0x107e3ff7 */
  if (!C.zf) goto L_107e3ff7;
  /* 107e3feb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e3fee mov eax, dword ptr [eax*4 + 0x1080ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1080ea38)));
  /* 107e3ff5 jmp 0x107e4023 */
  goto L_107e4023;
L_107e3ff7:;
  /* 107e3ff7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e3ffa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 107e3ffd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e3fff je 0x107e4006 */
  if (C.zf) goto L_107e4006;
  /* 107e4001 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e4004 jmp 0x107e4023 */
  goto L_107e4023;
L_107e4006:;
  /* 107e4006 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4009 mov eax, dword ptr [edx*4 + 0x1080ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1080ea38)));
  /* 107e4010 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e4013 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4016 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e4019 mov dword ptr [ecx*4 + 0x1080ea38], edx */
  w32((uint32_t)(ECX*4 + 0x1080ea38), (EDX));
  /* 107e4020 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107e4023:;
  /* 107e4023 mov esp, ebp */
  ESP = (EBP);
  /* 107e4025 pop ebp */
  EBP = (pop32());
  /* 107e4026 ret  */
  ESPCHK(0x107e3fd0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x107e4030 (126 bytes, 38 insns) */
void f_107e4030(void) {
  FTRACE(0x107e4030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4030 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4031 mov ebp, esp */
  EBP = (ESP);
  /* 107e4033 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4034 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4038 jl 0x107e4040 */
  if ((C.sf!=C.of)) goto L_107e4040;
  /* 107e403a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e403e jl 0x107e4047 */
  if ((C.sf!=C.of)) goto L_107e4047;
L_107e4040:;
  /* 107e4040 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 107e4045 jmp 0x107e40aa */
  goto L_107e40aa;
L_107e4047:;
  /* 107e4047 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e404b jne 0x107e4059 */
  if (!C.zf) goto L_107e4059;
  /* 107e404d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4050 mov eax, dword ptr [eax*4 + 0x1080ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1080ea44)));
  /* 107e4057 jmp 0x107e40aa */
  goto L_107e40aa;
L_107e4059:;
  /* 107e4059 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e405c mov edx, dword ptr [ecx*4 + 0x1080ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1080ea44)));
  /* 107e4063 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e4066 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e406a jne 0x107e4080 */
  if (!C.zf) goto L_107e4080;
  /* 107e406c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 107e406e call dword ptr [0x1081333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081333c))), 0x107e4074u);
  /* 107e4074 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4077 mov dword ptr [ecx*4 + 0x1080ea44], eax */
  w32((uint32_t)(ECX*4 + 0x1080ea44), (EAX));
  /* 107e407e jmp 0x107e40a7 */
  goto L_107e40a7;
L_107e4080:;
  /* 107e4080 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4084 jne 0x107e409a */
  if (!C.zf) goto L_107e409a;
  /* 107e4086 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 107e4088 call dword ptr [0x1081333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081333c))), 0x107e408eu);
  /* 107e408e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4091 mov dword ptr [edx*4 + 0x1080ea44], eax */
  w32((uint32_t)(EDX*4 + 0x1080ea44), (EAX));
  /* 107e4098 jmp 0x107e40a7 */
  goto L_107e40a7;
L_107e409a:;
  /* 107e409a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e409d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e40a0 mov dword ptr [eax*4 + 0x1080ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x1080ea44), (ECX));
L_107e40a7:;
  /* 107e40a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107e40aa:;
  /* 107e40aa mov esp, ebp */
  ESP = (EBP);
  /* 107e40ac pop ebp */
  EBP = (pop32());
  /* 107e40ad ret  */
  ESPCHK(0x107e4030u, _esp0);
  ESP += 4; return;
}

/* FUN_100040b0 @ 0x107e40b0 (28 bytes, 11 insns) */
void f_107e40b0(void) {
  FTRACE(0x107e40b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e40b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e40b1 mov ebp, esp */
  EBP = (ESP);
  /* 107e40b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e40b4 mov eax, dword ptr [0x10812140] */
  EAX = (r32((uint32_t)(0x10812140)));
  /* 107e40b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e40bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e40bf mov dword ptr [0x10812140], ecx */
  w32((uint32_t)(0x10812140), (ECX));
  /* 107e40c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e40c8 mov esp, ebp */
  ESP = (EBP);
  /* 107e40ca pop ebp */
  EBP = (pop32());
  /* 107e40cb ret  */
  ESPCHK(0x107e40b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040d0 @ 0x107e40d0 (912 bytes, 248 insns) */
void f_107e40d0(void) {
  FTRACE(0x107e40d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e40d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e40d1 mov ebp, esp */
  EBP = (ESP);
  /* 107e40d3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 107e40d8 call 0x107e81b0 */
  push32(0x107e40ddu); f_107e81b0();
  /* 107e40dd push edi */
  push32((uint32_t)(EDI));
  /* 107e40de mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 107e40e5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 107e40ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e40ec lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 107e40f2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107e40f4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 107e40f6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 107e40f7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 107e40fe mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 107e4103 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e4105 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 107e410b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107e410d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 107e410f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 107e4110 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 107e4117 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 107e411c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e411e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 107e4124 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107e4126 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 107e4128 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 107e4129 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 107e412c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 107e4132 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4136 jl 0x107e413e */
  if ((C.sf!=C.of)) goto L_107e413e;
  /* 107e4138 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e413c jl 0x107e4146 */
  if ((C.sf!=C.of)) goto L_107e4146;
L_107e413e:;
  /* 107e413e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e4141 jmp 0x107e445b */
  goto L_107e445b;
L_107e4146:;
  /* 107e4146 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e414a jne 0x107e41f0 */
  if (!C.zf) goto L_107e41f0;
  /* 107e4150 push 0x1080ea34 */
  push32((uint32_t)(0x1080ea34u));
  /* 107e4155 call dword ptr [0x10813354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813354))), 0x107e415bu);
  /* 107e415b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e415d jle 0x107e41f0 */
  if ((C.zf||C.sf!=C.of)) goto L_107e41f0;
  /* 107e4163 cmp dword ptr [0x10810600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e416a jne 0x107e41ae */
  if (!C.zf) goto L_107e41ae;
  /* 107e416c push 0x1080b578 */
  push32((uint32_t)(0x1080b578u));
  /* 107e4171 call dword ptr [0x10813350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813350))), 0x107e4177u);
  /* 107e4177 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 107e417d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4184 je 0x107e41a6 */
  if (C.zf) goto L_107e41a6;
  /* 107e4186 push 0x1080b56c */
  push32((uint32_t)(0x1080b56cu));
  /* 107e418b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 107e4191 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4192 call dword ptr [0x1081334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081334c))), 0x107e4198u);
  /* 107e4198 mov dword ptr [0x10810600], eax */
  w32((uint32_t)(0x10810600), (EAX));
  /* 107e419d cmp dword ptr [0x10810600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e41a4 jne 0x107e41ae */
  if (!C.zf) goto L_107e41ae;
L_107e41a6:;
  /* 107e41a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e41a9 jmp 0x107e445b */
  goto L_107e445b;
L_107e41ae:;
  /* 107e41ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e41b1 push edx */
  push32((uint32_t)(EDX));
  /* 107e41b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e41b5 push eax */
  push32((uint32_t)(EAX));
  /* 107e41b6 push 0x1080b538 */
  push32((uint32_t)(0x1080b538u));
  /* 107e41bb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 107e41c1 push ecx */
  push32((uint32_t)(ECX));
  /* 107e41c2 call dword ptr [0x10810600] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810600))), 0x107e41c8u);
  /* 107e41c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e41cb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 107e41d1 push edx */
  push32((uint32_t)(EDX));
  /* 107e41d2 call dword ptr [0x10813348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813348))), 0x107e41d8u);
  /* 107e41d8 push 0x1080ea34 */
  push32((uint32_t)(0x1080ea34u));
  /* 107e41dd call dword ptr [0x10813344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813344))), 0x107e41e3u);
  /* 107e41e3 call 0x107e3fc0 */
  push32(0x107e41e8u); f_107e3fc0();
  /* 107e41e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e41eb jmp 0x107e445b */
  goto L_107e445b;
L_107e41f0:;
  /* 107e41f0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e41f4 je 0x107e422d */
  if (C.zf) goto L_107e422d;
  /* 107e41f6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 107e41fc push eax */
  push32((uint32_t)(EAX));
  /* 107e41fd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e4200 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4201 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 107e4206 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 107e420c push edx */
  push32((uint32_t)(EDX));
  /* 107e420d call 0x107e80b0 */
  push32(0x107e4212u); f_107e80b0();
  /* 107e4212 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4215 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e4217 jge 0x107e422d */
  if ((C.sf==C.of)) goto L_107e422d;
  /* 107e4219 push 0x1080b50c */
  push32((uint32_t)(0x1080b50cu));
  /* 107e421e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 107e4224 push eax */
  push32((uint32_t)(EAX));
  /* 107e4225 call 0x107e7fc0 */
  push32(0x107e422au); f_107e7fc0();
  /* 107e422a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e422d:;
  /* 107e422d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4231 jne 0x107e4265 */
  if (!C.zf) goto L_107e4265;
  /* 107e4233 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4237 je 0x107e4245 */
  if (C.zf) goto L_107e4245;
  /* 107e4239 mov dword ptr [ebp - 0x3028], 0x1080b4f8 */
  w32((uint32_t)(EBP + -0x3028), (0x1080b4f8u));
  /* 107e4243 jmp 0x107e424f */
  goto L_107e424f;
L_107e4245:;
  /* 107e4245 mov dword ptr [ebp - 0x3028], 0x1080b4e4 */
  w32((uint32_t)(EBP + -0x3028), (0x1080b4e4u));
L_107e424f:;
  /* 107e424f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 107e4255 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4256 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 107e425c push edx */
  push32((uint32_t)(EDX));
  /* 107e425d call 0x107e7fc0 */
  push32(0x107e4262u); f_107e7fc0();
  /* 107e4262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4265:;
  /* 107e4265 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 107e426b push eax */
  push32((uint32_t)(EAX));
  /* 107e426c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 107e4272 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4273 call 0x107e7fd0 */
  push32(0x107e4278u); f_107e7fd0();
  /* 107e4278 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e427b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e427f jne 0x107e42ba */
  if (!C.zf) goto L_107e42ba;
  /* 107e4281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4284 mov eax, dword ptr [edx*4 + 0x1080ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1080ea38)));
  /* 107e428b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 107e428e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e4290 je 0x107e42a6 */
  if (C.zf) goto L_107e42a6;
  /* 107e4292 push 0x1080b4e0 */
  push32((uint32_t)(0x1080b4e0u));
  /* 107e4297 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 107e429d push ecx */
  push32((uint32_t)(ECX));
  /* 107e429e call 0x107e7fd0 */
  push32(0x107e42a3u); f_107e7fd0();
  /* 107e42a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e42a6:;
  /* 107e42a6 push 0x1080b4dc */
  push32((uint32_t)(0x1080b4dcu));
  /* 107e42ab lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 107e42b1 push edx */
  push32((uint32_t)(EDX));
  /* 107e42b2 call 0x107e7fd0 */
  push32(0x107e42b7u); f_107e7fd0();
  /* 107e42b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e42ba:;
  /* 107e42ba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e42be je 0x107e4302 */
  if (C.zf) goto L_107e4302;
  /* 107e42c0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 107e42c6 push eax */
  push32((uint32_t)(EAX));
  /* 107e42c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e42ca push ecx */
  push32((uint32_t)(ECX));
  /* 107e42cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e42ce push edx */
  push32((uint32_t)(EDX));
  /* 107e42cf push 0x1080b4d0 */
  push32((uint32_t)(0x1080b4d0u));
  /* 107e42d4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107e42d9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 107e42df push eax */
  push32((uint32_t)(EAX));
  /* 107e42e0 call 0x107e7ec0 */
  push32(0x107e42e5u); f_107e7ec0();
  /* 107e42e5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e42e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e42ea jge 0x107e4300 */
  if ((C.sf==C.of)) goto L_107e4300;
  /* 107e42ec push 0x1080b50c */
  push32((uint32_t)(0x1080b50cu));
  /* 107e42f1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 107e42f7 push ecx */
  push32((uint32_t)(ECX));
  /* 107e42f8 call 0x107e7fc0 */
  push32(0x107e42fdu); f_107e7fc0();
  /* 107e42fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4300:;
  /* 107e4300 jmp 0x107e4318 */
  goto L_107e4318;
L_107e4302:;
  /* 107e4302 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 107e4308 push edx */
  push32((uint32_t)(EDX));
  /* 107e4309 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 107e430f push eax */
  push32((uint32_t)(EAX));
  /* 107e4310 call 0x107e7fc0 */
  push32(0x107e4315u); f_107e7fc0();
  /* 107e4315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4318:;
  /* 107e4318 cmp dword ptr [0x10812140], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10812140))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e431f je 0x107e435c */
  if (C.zf) goto L_107e435c;
  /* 107e4321 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 107e4327 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4328 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 107e432e push edx */
  push32((uint32_t)(EDX));
  /* 107e432f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4332 push eax */
  push32((uint32_t)(EAX));
  /* 107e4333 call dword ptr [0x10812140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10812140))), 0x107e4339u);
  /* 107e4339 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e433c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e433e je 0x107e435c */
  if (C.zf) goto L_107e435c;
  /* 107e4340 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4344 jne 0x107e4351 */
  if (!C.zf) goto L_107e4351;
  /* 107e4346 push 0x1080ea34 */
  push32((uint32_t)(0x1080ea34u));
  /* 107e434b call dword ptr [0x10813344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813344))), 0x107e4351u);
L_107e4351:;
  /* 107e4351 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 107e4357 jmp 0x107e445b */
  goto L_107e445b;
L_107e435c:;
  /* 107e435c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e435f mov edx, dword ptr [ecx*4 + 0x1080ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1080ea38)));
  /* 107e4366 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107e4369 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e436b je 0x107e43ab */
  if (C.zf) goto L_107e43ab;
  /* 107e436d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4370 cmp dword ptr [eax*4 + 0x1080ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1080ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4378 je 0x107e43ab */
  if (C.zf) goto L_107e43ab;
  /* 107e437a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e437c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 107e4382 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4383 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 107e4389 push edx */
  push32((uint32_t)(EDX));
  /* 107e438a call 0x107e7e40 */
  push32(0x107e438fu); f_107e7e40();
  /* 107e438f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4392 push eax */
  push32((uint32_t)(EAX));
  /* 107e4393 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 107e4399 push eax */
  push32((uint32_t)(EAX));
  /* 107e439a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e439d mov edx, dword ptr [ecx*4 + 0x1080ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1080ea44)));
  /* 107e43a4 push edx */
  push32((uint32_t)(EDX));
  /* 107e43a5 call dword ptr [0x10813340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813340))), 0x107e43abu);
L_107e43ab:;
  /* 107e43ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e43ae mov ecx, dword ptr [eax*4 + 0x1080ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1080ea38)));
  /* 107e43b5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 107e43b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e43ba je 0x107e43c9 */
  if (C.zf) goto L_107e43c9;
  /* 107e43bc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 107e43c2 push edx */
  push32((uint32_t)(EDX));
  /* 107e43c3 call dword ptr [0x10813348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813348))), 0x107e43c9u);
L_107e43c9:;
  /* 107e43c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e43cc mov ecx, dword ptr [eax*4 + 0x1080ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1080ea38)));
  /* 107e43d3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107e43d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e43d8 je 0x107e4448 */
  if (C.zf) goto L_107e4448;
  /* 107e43da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e43de je 0x107e43fd */
  if (C.zf) goto L_107e43fd;
  /* 107e43e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 107e43e2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 107e43e8 push edx */
  push32((uint32_t)(EDX));
  /* 107e43e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e43ec push eax */
  push32((uint32_t)(EAX));
  /* 107e43ed call 0x107e7b50 */
  push32(0x107e43f2u); f_107e7b50();
  /* 107e43f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e43f5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 107e43fb jmp 0x107e4407 */
  goto L_107e4407;
L_107e43fd:;
  /* 107e43fd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_107e4407:;
  /* 107e4407 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 107e440d push ecx */
  push32((uint32_t)(ECX));
  /* 107e440e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e4411 push edx */
  push32((uint32_t)(EDX));
  /* 107e4412 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 107e4418 push eax */
  push32((uint32_t)(EAX));
  /* 107e4419 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e441c push ecx */
  push32((uint32_t)(ECX));
  /* 107e441d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4420 push edx */
  push32((uint32_t)(EDX));
  /* 107e4421 call 0x107e4460 */
  push32(0x107e4426u); f_107e4460();
  /* 107e4426 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4429 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 107e442f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4433 jne 0x107e4440 */
  if (!C.zf) goto L_107e4440;
  /* 107e4435 push 0x1080ea34 */
  push32((uint32_t)(0x1080ea34u));
  /* 107e443a call dword ptr [0x10813344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813344))), 0x107e4440u);
L_107e4440:;
  /* 107e4440 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 107e4446 jmp 0x107e445b */
  goto L_107e445b;
L_107e4448:;
  /* 107e4448 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e444c jne 0x107e4459 */
  if (!C.zf) goto L_107e4459;
  /* 107e444e push 0x1080ea34 */
  push32((uint32_t)(0x1080ea34u));
  /* 107e4453 call dword ptr [0x10813344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813344))), 0x107e4459u);
L_107e4459:;
  /* 107e4459 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107e445b:;
  /* 107e445b pop edi */
  EDI = (pop32());
  /* 107e445c mov esp, ebp */
  ESP = (EBP);
  /* 107e445e pop ebp */
  EBP = (pop32());
  /* 107e445f ret  */
  ESPCHK(0x107e40d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x107e4460 (780 bytes, 197 insns) */
void f_107e4460(void) {
  FTRACE(0x107e4460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4460 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4461 mov ebp, esp */
  EBP = (ESP);
  /* 107e4463 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 107e4468 call 0x107e81b0 */
  push32(0x107e446du); f_107e81b0();
L_107e446d:;
  /* 107e446d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4471 jne 0x107e4498 */
  if (!C.zf) goto L_107e4498;
  /* 107e4473 push 0x1080b6c8 */
  push32((uint32_t)(0x1080b6c8u));
  /* 107e4478 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e447a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 107e447f push 0x1080b6bc */
  push32((uint32_t)(0x1080b6bcu));
  /* 107e4484 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4486 call 0x107e40d0 */
  push32(0x107e448bu); f_107e40d0();
  /* 107e448b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e448e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4491 jne 0x107e4498 */
  if (!C.zf) goto L_107e4498;
  /* 107e4493 call 0x107e3fc0 */
  push32(0x107e4498u); f_107e3fc0();
L_107e4498:;
  /* 107e4498 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e449a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e449c jne 0x107e446d */
  if (!C.zf) goto L_107e446d;
  /* 107e449e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 107e44a3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 107e44a9 push ecx */
  push32((uint32_t)(ECX));
  /* 107e44aa push 0 */
  push32((uint32_t)(0x0u));
  /* 107e44ac call dword ptr [0x10813358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813358))), 0x107e44b2u);
  /* 107e44b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e44b4 jne 0x107e44ca */
  if (!C.zf) goto L_107e44ca;
  /* 107e44b6 push 0x1080b6a4 */
  push32((uint32_t)(0x1080b6a4u));
  /* 107e44bb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 107e44c1 push edx */
  push32((uint32_t)(EDX));
  /* 107e44c2 call 0x107e7fc0 */
  push32(0x107e44c7u); f_107e7fc0();
  /* 107e44c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e44ca:;
  /* 107e44ca lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 107e44d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e44d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e44d6 push ecx */
  push32((uint32_t)(ECX));
  /* 107e44d7 call 0x107e7e40 */
  push32(0x107e44dcu); f_107e7e40();
  /* 107e44dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e44df cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e44e2 jbe 0x107e450d */
  if ((C.cf||C.zf)) goto L_107e450d;
  /* 107e44e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e44e7 push edx */
  push32((uint32_t)(EDX));
  /* 107e44e8 call 0x107e7e40 */
  push32(0x107e44edu); f_107e7e40();
  /* 107e44ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e44f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e44f3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 107e44f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e44fa push 3 */
  push32((uint32_t)(0x3u));
  /* 107e44fc push 0x1080b6a0 */
  push32((uint32_t)(0x1080b6a0u));
  /* 107e4501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4504 push eax */
  push32((uint32_t)(EAX));
  /* 107e4505 call 0x107e8830 */
  push32(0x107e450au); f_107e8830();
  /* 107e450a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e450d:;
  /* 107e450d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e4510 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 107e4516 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e451d je 0x107e4568 */
  if (C.zf) goto L_107e4568;
  /* 107e451f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 107e4525 push edx */
  push32((uint32_t)(EDX));
  /* 107e4526 call 0x107e7e40 */
  push32(0x107e452bu); f_107e7e40();
  /* 107e452b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e452e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4531 jbe 0x107e4568 */
  if ((C.cf||C.zf)) goto L_107e4568;
  /* 107e4533 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 107e4539 push eax */
  push32((uint32_t)(EAX));
  /* 107e453a call 0x107e7e40 */
  push32(0x107e453fu); f_107e7e40();
  /* 107e453f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4542 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 107e4548 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 107e454c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 107e4552 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e4554 push 0x1080b6a0 */
  push32((uint32_t)(0x1080b6a0u));
  /* 107e4559 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 107e455f push eax */
  push32((uint32_t)(EAX));
  /* 107e4560 call 0x107e8830 */
  push32(0x107e4565u); f_107e8830();
  /* 107e4565 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4568:;
  /* 107e4568 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e456c jne 0x107e457a */
  if (!C.zf) goto L_107e457a;
  /* 107e456e mov dword ptr [ebp - 0x1114], 0x1080b62c */
  w32((uint32_t)(EBP + -0x1114), (0x1080b62cu));
  /* 107e4578 jmp 0x107e4584 */
  goto L_107e4584;
L_107e457a:;
  /* 107e457a mov dword ptr [ebp - 0x1114], 0x1080b3cc */
  w32((uint32_t)(EBP + -0x1114), (0x1080b3ccu));
L_107e4584:;
  /* 107e4584 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e4587 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107e458a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e458c je 0x107e4599 */
  if (C.zf) goto L_107e4599;
  /* 107e458e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e4591 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 107e4597 jmp 0x107e45a3 */
  goto L_107e45a3;
L_107e4599:;
  /* 107e4599 mov dword ptr [ebp - 0x1118], 0x1080b3cc */
  w32((uint32_t)(EBP + -0x1118), (0x1080b3ccu));
L_107e45a3:;
  /* 107e45a3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e45a6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107e45a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e45ab je 0x107e45bf */
  if (C.zf) goto L_107e45bf;
  /* 107e45ad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e45b1 jne 0x107e45bf */
  if (!C.zf) goto L_107e45bf;
  /* 107e45b3 mov dword ptr [ebp - 0x111c], 0x1080b61c */
  w32((uint32_t)(EBP + -0x111c), (0x1080b61cu));
  /* 107e45bd jmp 0x107e45c9 */
  goto L_107e45c9;
L_107e45bf:;
  /* 107e45bf mov dword ptr [ebp - 0x111c], 0x1080b3cc */
  w32((uint32_t)(EBP + -0x111c), (0x1080b3ccu));
L_107e45c9:;
  /* 107e45c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e45cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107e45cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e45d1 je 0x107e45df */
  if (C.zf) goto L_107e45df;
  /* 107e45d3 mov dword ptr [ebp - 0x1120], 0x1080b618 */
  w32((uint32_t)(EBP + -0x1120), (0x1080b618u));
  /* 107e45dd jmp 0x107e45e9 */
  goto L_107e45e9;
L_107e45df:;
  /* 107e45df mov dword ptr [ebp - 0x1120], 0x1080b3cc */
  w32((uint32_t)(EBP + -0x1120), (0x1080b3ccu));
L_107e45e9:;
  /* 107e45e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e45ed je 0x107e45fa */
  if (C.zf) goto L_107e45fa;
  /* 107e45ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e45f2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 107e45f8 jmp 0x107e4604 */
  goto L_107e4604;
L_107e45fa:;
  /* 107e45fa mov dword ptr [ebp - 0x1124], 0x1080b3cc */
  w32((uint32_t)(EBP + -0x1124), (0x1080b3ccu));
L_107e4604:;
  /* 107e4604 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4608 je 0x107e4616 */
  if (C.zf) goto L_107e4616;
  /* 107e460a mov dword ptr [ebp - 0x1128], 0x1080b610 */
  w32((uint32_t)(EBP + -0x1128), (0x1080b610u));
  /* 107e4614 jmp 0x107e4620 */
  goto L_107e4620;
L_107e4616:;
  /* 107e4616 mov dword ptr [ebp - 0x1128], 0x1080b3cc */
  w32((uint32_t)(EBP + -0x1128), (0x1080b3ccu));
L_107e4620:;
  /* 107e4620 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4624 je 0x107e4631 */
  if (C.zf) goto L_107e4631;
  /* 107e4626 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e4629 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 107e462f jmp 0x107e463b */
  goto L_107e463b;
L_107e4631:;
  /* 107e4631 mov dword ptr [ebp - 0x112c], 0x1080b3cc */
  w32((uint32_t)(EBP + -0x112c), (0x1080b3ccu));
L_107e463b:;
  /* 107e463b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e463f je 0x107e464d */
  if (C.zf) goto L_107e464d;
  /* 107e4641 mov dword ptr [ebp - 0x1130], 0x1080b608 */
  w32((uint32_t)(EBP + -0x1130), (0x1080b608u));
  /* 107e464b jmp 0x107e4657 */
  goto L_107e4657;
L_107e464d:;
  /* 107e464d mov dword ptr [ebp - 0x1130], 0x1080b3cc */
  w32((uint32_t)(EBP + -0x1130), (0x1080b3ccu));
L_107e4657:;
  /* 107e4657 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e465e je 0x107e466e */
  if (C.zf) goto L_107e466e;
  /* 107e4660 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 107e4666 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 107e466c jmp 0x107e4678 */
  goto L_107e4678;
L_107e466e:;
  /* 107e466e mov dword ptr [ebp - 0x1134], 0x1080b3cc */
  w32((uint32_t)(EBP + -0x1134), (0x1080b3ccu));
L_107e4678:;
  /* 107e4678 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e467f je 0x107e468d */
  if (C.zf) goto L_107e468d;
  /* 107e4681 mov dword ptr [ebp - 0x1138], 0x1080b5fc */
  w32((uint32_t)(EBP + -0x1138), (0x1080b5fcu));
  /* 107e468b jmp 0x107e4697 */
  goto L_107e4697;
L_107e468d:;
  /* 107e468d mov dword ptr [ebp - 0x1138], 0x1080b3cc */
  w32((uint32_t)(EBP + -0x1138), (0x1080b3ccu));
L_107e4697:;
  /* 107e4697 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 107e469d push edx */
  push32((uint32_t)(EDX));
  /* 107e469e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 107e46a4 push eax */
  push32((uint32_t)(EAX));
  /* 107e46a5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 107e46ab push ecx */
  push32((uint32_t)(ECX));
  /* 107e46ac mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 107e46b2 push edx */
  push32((uint32_t)(EDX));
  /* 107e46b3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 107e46b9 push eax */
  push32((uint32_t)(EAX));
  /* 107e46ba mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 107e46c0 push ecx */
  push32((uint32_t)(ECX));
  /* 107e46c1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 107e46c7 push edx */
  push32((uint32_t)(EDX));
  /* 107e46c8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 107e46ce push eax */
  push32((uint32_t)(EAX));
  /* 107e46cf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 107e46d5 push ecx */
  push32((uint32_t)(ECX));
  /* 107e46d6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 107e46dc push edx */
  push32((uint32_t)(EDX));
  /* 107e46dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e46e0 push eax */
  push32((uint32_t)(EAX));
  /* 107e46e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e46e4 mov edx, dword ptr [ecx*4 + 0x1080ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1080ea50)));
  /* 107e46eb push edx */
  push32((uint32_t)(EDX));
  /* 107e46ec push 0x1080b5a8 */
  push32((uint32_t)(0x1080b5a8u));
  /* 107e46f1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107e46f6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 107e46fc push eax */
  push32((uint32_t)(EAX));
  /* 107e46fd call 0x107e7ec0 */
  push32(0x107e4702u); f_107e7ec0();
  /* 107e4702 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e4707 jge 0x107e471d */
  if ((C.sf==C.of)) goto L_107e471d;
  /* 107e4709 push 0x1080b50c */
  push32((uint32_t)(0x1080b50cu));
  /* 107e470e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 107e4714 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4715 call 0x107e7fc0 */
  push32(0x107e471au); f_107e7fc0();
  /* 107e471a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e471d:;
  /* 107e471d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 107e4722 push 0x1080b584 */
  push32((uint32_t)(0x1080b584u));
  /* 107e4727 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 107e472d push edx */
  push32((uint32_t)(EDX));
  /* 107e472e call 0x107e8770 */
  push32(0x107e4733u); f_107e8770();
  /* 107e4733 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4736 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 107e473c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4743 jne 0x107e4756 */
  if (!C.zf) goto L_107e4756;
  /* 107e4745 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 107e4747 call 0x107e84b0 */
  push32(0x107e474cu); f_107e84b0();
  /* 107e474c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e474f push 3 */
  push32((uint32_t)(0x3u));
  /* 107e4751 call 0x107e47d0 */
  push32(0x107e4756u); f_107e47d0();
L_107e4756:;
  /* 107e4756 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e475d jne 0x107e4766 */
  if (!C.zf) goto L_107e4766;
  /* 107e475f mov eax, 1 */
  EAX = (0x1u);
  /* 107e4764 jmp 0x107e4768 */
  goto L_107e4768;
L_107e4766:;
  /* 107e4766 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107e4768:;
  /* 107e4768 mov esp, ebp */
  ESP = (EBP);
  /* 107e476a pop ebp */
  EBP = (pop32());
  /* 107e476b ret  */
  ESPCHK(0x107e4460u, _esp0);
  ESP += 4; return;
}

/* FUN_10004770 @ 0x107e4770 (56 bytes, 15 insns) */
void f_107e4770(void) {
  FTRACE(0x107e4770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4770 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4771 mov ebp, esp */
  EBP = (ESP);
  /* 107e4773 cmp dword ptr [0x1081213c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081213c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e477a je 0x107e4782 */
  if (C.zf) goto L_107e4782;
  /* 107e477c call dword ptr [0x1081213c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081213c))), 0x107e4782u);
L_107e4782:;
  /* 107e4782 push 0x1080e418 */
  push32((uint32_t)(0x1080e418u));
  /* 107e4787 push 0x1080e208 */
  push32((uint32_t)(0x1080e208u));
  /* 107e478c call 0x107e4940 */
  push32(0x107e4791u); f_107e4940();
  /* 107e4791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4794 push 0x1080e104 */
  push32((uint32_t)(0x1080e104u));
  /* 107e4799 push 0x1080e000 */
  push32((uint32_t)(0x1080e000u));
  /* 107e479e call 0x107e4940 */
  push32(0x107e47a3u); f_107e4940();
  /* 107e47a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e47a6 pop ebp */
  EBP = (pop32());
  /* 107e47a7 ret  */
  ESPCHK(0x107e4770u, _esp0);
  ESP += 4; return;
}

/* FUN_100047b0 @ 0x107e47b0 (21 bytes, 10 insns) */
void f_107e47b0(void) {
  FTRACE(0x107e47b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e47b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e47b1 mov ebp, esp */
  EBP = (ESP);
  /* 107e47b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e47b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e47b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e47ba push eax */
  push32((uint32_t)(EAX));
  /* 107e47bb call 0x107e4830 */
  push32(0x107e47c0u); f_107e4830();
  /* 107e47c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e47c3 pop ebp */
  EBP = (pop32());
  /* 107e47c4 ret  */
  ESPCHK(0x107e47b0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x107e47d0 (21 bytes, 10 insns) */
void f_107e47d0(void) {
  FTRACE(0x107e47d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e47d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e47d1 mov ebp, esp */
  EBP = (ESP);
  /* 107e47d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e47d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e47d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e47da push eax */
  push32((uint32_t)(EAX));
  /* 107e47db call 0x107e4830 */
  push32(0x107e47e0u); f_107e4830();
  /* 107e47e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e47e3 pop ebp */
  EBP = (pop32());
  /* 107e47e4 ret  */
  ESPCHK(0x107e47d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047f0 @ 0x107e47f0 (19 bytes, 9 insns) */
void f_107e47f0(void) {
  FTRACE(0x107e47f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e47f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e47f1 mov ebp, esp */
  EBP = (ESP);
  /* 107e47f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e47f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e47f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e47f9 call 0x107e4830 */
  push32(0x107e47feu); f_107e4830();
  /* 107e47fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4801 pop ebp */
  EBP = (pop32());
  /* 107e4802 ret  */
  ESPCHK(0x107e47f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004810 @ 0x107e4810 (19 bytes, 9 insns) */
void f_107e4810(void) {
  FTRACE(0x107e4810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4810 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4811 mov ebp, esp */
  EBP = (ESP);
  /* 107e4813 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e4815 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e4817 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e4819 call 0x107e4830 */
  push32(0x107e481eu); f_107e4830();
  /* 107e481e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4821 pop ebp */
  EBP = (pop32());
  /* 107e4822 ret  */
  ESPCHK(0x107e4810u, _esp0);
  ESP += 4; return;
}

/* FUN_10004830 @ 0x107e4830 (227 bytes, 61 insns) */
void f_107e4830(void) {
  FTRACE(0x107e4830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4830 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4831 mov ebp, esp */
  EBP = (ESP);
  /* 107e4833 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4834 call 0x107e4920 */
  push32(0x107e4839u); f_107e4920();
  /* 107e4839 cmp dword ptr [0x10810644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10810644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4840 jne 0x107e4853 */
  if (!C.zf) goto L_107e4853;
  /* 107e4842 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4845 push eax */
  push32((uint32_t)(EAX));
  /* 107e4846 call dword ptr [0x10813364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813364))), 0x107e484cu);
  /* 107e484c push eax */
  push32((uint32_t)(EAX));
  /* 107e484d call dword ptr [0x10813360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813360))), 0x107e4853u);
L_107e4853:;
  /* 107e4853 mov dword ptr [0x10810640], 1 */
  w32((uint32_t)(0x10810640), (0x1u));
  /* 107e485d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 107e4860 mov byte ptr [0x1081063c], cl */
  w8((uint32_t)(0x1081063c), (CL));
  /* 107e4866 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e486a jne 0x107e48b3 */
  if (!C.zf) goto L_107e48b3;
  /* 107e486c cmp dword ptr [0x10812138], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10812138))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4873 je 0x107e48a1 */
  if (C.zf) goto L_107e48a1;
  /* 107e4875 mov edx, dword ptr [0x10812134] */
  EDX = (r32((uint32_t)(0x10812134)));
  /* 107e487b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107e487e:;
  /* 107e487e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4881 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e4884 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e4887 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e488a cmp ecx, dword ptr [0x10812138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10812138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4890 jb 0x107e48a1 */
  if (C.cf) goto L_107e48a1;
  /* 107e4892 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4895 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4898 je 0x107e489f */
  if (C.zf) goto L_107e489f;
  /* 107e489a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e489d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x107e489fu);
L_107e489f:;
  /* 107e489f jmp 0x107e487e */
  goto L_107e487e;
L_107e48a1:;
  /* 107e48a1 push 0x1080e724 */
  push32((uint32_t)(0x1080e724u));
  /* 107e48a6 push 0x1080e51c */
  push32((uint32_t)(0x1080e51cu));
  /* 107e48ab call 0x107e4940 */
  push32(0x107e48b0u); f_107e4940();
  /* 107e48b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e48b3:;
  /* 107e48b3 push 0x1080e92c */
  push32((uint32_t)(0x1080e92cu));
  /* 107e48b8 push 0x1080e828 */
  push32((uint32_t)(0x1080e828u));
  /* 107e48bd call 0x107e4940 */
  push32(0x107e48c2u); f_107e4940();
  /* 107e48c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e48c5 cmp dword ptr [0x10810648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e48cc jne 0x107e48ee */
  if (!C.zf) goto L_107e48ee;
  /* 107e48ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107e48d0 call 0x107e6520 */
  push32(0x107e48d5u); f_107e6520();
  /* 107e48d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e48d8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 107e48db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e48dd je 0x107e48ee */
  if (C.zf) goto L_107e48ee;
  /* 107e48df mov dword ptr [0x10810648], 1 */
  w32((uint32_t)(0x10810648), (0x1u));
  /* 107e48e9 call 0x107e6e30 */
  push32(0x107e48eeu); f_107e6e30();
L_107e48ee:;
  /* 107e48ee cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e48f2 je 0x107e48fb */
  if (C.zf) goto L_107e48fb;
  /* 107e48f4 call 0x107e4930 */
  push32(0x107e48f9u); f_107e4930();
  /* 107e48f9 jmp 0x107e490f */
  goto L_107e490f;
L_107e48fb:;
  /* 107e48fb mov dword ptr [0x10810644], 1 */
  w32((uint32_t)(0x10810644), (0x1u));
  /* 107e4905 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4908 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4909 call dword ptr [0x1081335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081335c))), 0x107e490fu);
L_107e490f:;
  /* 107e490f mov esp, ebp */
  ESP = (EBP);
  /* 107e4911 pop ebp */
  EBP = (pop32());
  /* 107e4912 ret  */
  ESPCHK(0x107e4830u, _esp0);
  ESP += 4; return;
}

/* FUN_10004920 @ 0x107e4920 (15 bytes, 7 insns) */
void f_107e4920(void) {
  FTRACE(0x107e4920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4920 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4921 mov ebp, esp */
  EBP = (ESP);
  /* 107e4923 push 0xd */
  push32((uint32_t)(0xdu));
  /* 107e4925 call 0x107e8a10 */
  push32(0x107e492au); f_107e8a10();
  /* 107e492a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e492d pop ebp */
  EBP = (pop32());
  /* 107e492e ret  */
  ESPCHK(0x107e4920u, _esp0);
  ESP += 4; return;
}

/* FUN_10004930 @ 0x107e4930 (15 bytes, 7 insns) */
void f_107e4930(void) {
  FTRACE(0x107e4930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4930 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4931 mov ebp, esp */
  EBP = (ESP);
  /* 107e4933 push 0xd */
  push32((uint32_t)(0xdu));
  /* 107e4935 call 0x107e8ab0 */
  push32(0x107e493au); f_107e8ab0();
  /* 107e493a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e493d pop ebp */
  EBP = (pop32());
  /* 107e493e ret  */
  ESPCHK(0x107e4930u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x107e4940 (37 bytes, 16 insns) */
void f_107e4940(void) {
  FTRACE(0x107e4940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4940 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4941 mov ebp, esp */
  EBP = (ESP);
L_107e4943:;
  /* 107e4943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4946 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4949 jae 0x107e4963 */
  if (!C.cf) goto L_107e4963;
  /* 107e494b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e494e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4951 je 0x107e4958 */
  if (C.zf) goto L_107e4958;
  /* 107e4953 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4956 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x107e4958u);
L_107e4958:;
  /* 107e4958 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e495b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e495e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107e4961 jmp 0x107e4943 */
  goto L_107e4943;
L_107e4963:;
  /* 107e4963 pop ebp */
  EBP = (pop32());
  /* 107e4964 ret  */
  ESPCHK(0x107e4940u, _esp0);
  ESP += 4; return;
}

/* FUN_10004970 @ 0x107e4970 (130 bytes, 42 insns) */
void f_107e4970(void) {
  FTRACE(0x107e4970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4970 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4971 mov ebp, esp */
  EBP = (ESP);
  /* 107e4973 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4974 call 0x107e8930 */
  push32(0x107e4979u); f_107e8930();
  /* 107e4979 call dword ptr [0x10813370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813370))), 0x107e497fu);
  /* 107e497f mov dword ptr [0x1080ea5c], eax */
  w32((uint32_t)(0x1080ea5c), (EAX));
  /* 107e4984 cmp dword ptr [0x1080ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1080ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e498b jne 0x107e4991 */
  if (!C.zf) goto L_107e4991;
  /* 107e498d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e498f jmp 0x107e49ee */
  goto L_107e49ee;
L_107e4991:;
  /* 107e4991 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 107e4993 push 0x1080b6e0 */
  push32((uint32_t)(0x1080b6e0u));
  /* 107e4998 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e499a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 107e499c push 1 */
  push32((uint32_t)(0x1u));
  /* 107e499e call 0x107e5420 */
  push32(0x107e49a3u); f_107e5420();
  /* 107e49a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e49a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e49a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e49ad je 0x107e49c4 */
  if (C.zf) goto L_107e49c4;
  /* 107e49af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e49b2 push eax */
  push32((uint32_t)(EAX));
  /* 107e49b3 mov ecx, dword ptr [0x1080ea5c] */
  ECX = (r32((uint32_t)(0x1080ea5c)));
  /* 107e49b9 push ecx */
  push32((uint32_t)(ECX));
  /* 107e49ba call dword ptr [0x1081336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081336c))), 0x107e49c0u);
  /* 107e49c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e49c2 jne 0x107e49c8 */
  if (!C.zf) goto L_107e49c8;
L_107e49c4:;
  /* 107e49c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e49c6 jmp 0x107e49ee */
  goto L_107e49ee;
L_107e49c8:;
  /* 107e49c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e49cb push edx */
  push32((uint32_t)(EDX));
  /* 107e49cc call 0x107e4a30 */
  push32(0x107e49d1u); f_107e4a30();
  /* 107e49d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e49d4 call dword ptr [0x10813368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813368))), 0x107e49dau);
  /* 107e49da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e49dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107e49df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e49e2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 107e49e9 mov eax, 1 */
  EAX = (0x1u);
L_107e49ee:;
  /* 107e49ee mov esp, ebp */
  ESP = (EBP);
  /* 107e49f0 pop ebp */
  EBP = (pop32());
  /* 107e49f1 ret  */
  ESPCHK(0x107e4970u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a00 @ 0x107e4a00 (41 bytes, 11 insns) */
void f_107e4a00(void) {
  FTRACE(0x107e4a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4a00 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4a01 mov ebp, esp */
  EBP = (ESP);
  /* 107e4a03 call 0x107e8970 */
  push32(0x107e4a08u); f_107e8970();
  /* 107e4a08 cmp dword ptr [0x1080ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1080ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4a0f je 0x107e4a27 */
  if (C.zf) goto L_107e4a27;
  /* 107e4a11 mov eax, dword ptr [0x1080ea5c] */
  EAX = (r32((uint32_t)(0x1080ea5c)));
  /* 107e4a16 push eax */
  push32((uint32_t)(EAX));
  /* 107e4a17 call dword ptr [0x1081329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081329c))), 0x107e4a1du);
  /* 107e4a1d mov dword ptr [0x1080ea5c], 0xffffffff */
  w32((uint32_t)(0x1080ea5c), (0xffffffffu));
L_107e4a27:;
  /* 107e4a27 pop ebp */
  EBP = (pop32());
  /* 107e4a28 ret  */
  ESPCHK(0x107e4a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a30 @ 0x107e4a30 (25 bytes, 8 insns) */
void f_107e4a30(void) {
  FTRACE(0x107e4a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4a30 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4a31 mov ebp, esp */
  EBP = (ESP);
  /* 107e4a33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4a36 mov dword ptr [eax + 0x50], 0x1080ec00 */
  w32((uint32_t)(EAX + 0x50), (0x1080ec00u));
  /* 107e4a3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4a40 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 107e4a47 pop ebp */
  EBP = (pop32());
  /* 107e4a48 ret  */
  ESPCHK(0x107e4a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a50 @ 0x107e4a50 (152 bytes, 48 insns) */
void f_107e4a50(void) {
  FTRACE(0x107e4a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4a50 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4a51 mov ebp, esp */
  EBP = (ESP);
  /* 107e4a53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e4a56 call dword ptr [0x10813380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813380))), 0x107e4a5cu);
  /* 107e4a5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e4a5f mov eax, dword ptr [0x1080ea5c] */
  EAX = (r32((uint32_t)(0x1080ea5c)));
  /* 107e4a64 push eax */
  push32((uint32_t)(EAX));
  /* 107e4a65 call dword ptr [0x1081337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081337c))), 0x107e4a6bu);
  /* 107e4a6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e4a6e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4a72 jne 0x107e4ad7 */
  if (!C.zf) goto L_107e4ad7;
  /* 107e4a74 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 107e4a79 push 0x1080b6e0 */
  push32((uint32_t)(0x1080b6e0u));
  /* 107e4a7e push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4a80 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 107e4a82 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e4a84 call 0x107e5420 */
  push32(0x107e4a89u); f_107e5420();
  /* 107e4a89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4a8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e4a8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4a93 je 0x107e4acd */
  if (C.zf) goto L_107e4acd;
  /* 107e4a95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4a98 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4a99 mov edx, dword ptr [0x1080ea5c] */
  EDX = (r32((uint32_t)(0x1080ea5c)));
  /* 107e4a9f push edx */
  push32((uint32_t)(EDX));
  /* 107e4aa0 call dword ptr [0x1081336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081336c))), 0x107e4aa6u);
  /* 107e4aa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e4aa8 je 0x107e4acd */
  if (C.zf) goto L_107e4acd;
  /* 107e4aaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4aad push eax */
  push32((uint32_t)(EAX));
  /* 107e4aae call 0x107e4a30 */
  push32(0x107e4ab3u); f_107e4a30();
  /* 107e4ab3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4ab6 call dword ptr [0x10813368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813368))), 0x107e4abcu);
  /* 107e4abc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4abf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107e4ac1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4ac4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 107e4acb jmp 0x107e4ad7 */
  goto L_107e4ad7;
L_107e4acd:;
  /* 107e4acd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 107e4acf call 0x107e3f80 */
  push32(0x107e4ad4u); f_107e3f80();
  /* 107e4ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4ad7:;
  /* 107e4ad7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e4ada push eax */
  push32((uint32_t)(EAX));
  /* 107e4adb call dword ptr [0x108132a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132a0))), 0x107e4ae1u);
  /* 107e4ae1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4ae4 mov esp, ebp */
  ESP = (EBP);
  /* 107e4ae6 pop ebp */
  EBP = (pop32());
  /* 107e4ae7 ret  */
  ESPCHK(0x107e4a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004af0 @ 0x107e4af0 (263 bytes, 86 insns) */
void f_107e4af0(void) {
  FTRACE(0x107e4af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4af0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4af1 mov ebp, esp */
  EBP = (ESP);
  /* 107e4af3 cmp dword ptr [0x1080ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1080ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4afa je 0x107e4bf5 */
  if (C.zf) goto L_107e4bf5;
  /* 107e4b00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4b04 jne 0x107e4b15 */
  if (!C.zf) goto L_107e4b15;
  /* 107e4b06 mov eax, dword ptr [0x1080ea5c] */
  EAX = (r32((uint32_t)(0x1080ea5c)));
  /* 107e4b0b push eax */
  push32((uint32_t)(EAX));
  /* 107e4b0c call dword ptr [0x1081337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081337c))), 0x107e4b12u);
  /* 107e4b12 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107e4b15:;
  /* 107e4b15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4b19 je 0x107e4be6 */
  if (C.zf) goto L_107e4be6;
  /* 107e4b1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4b22 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4b26 je 0x107e4b39 */
  if (C.zf) goto L_107e4b39;
  /* 107e4b28 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4b2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4b2d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 107e4b30 push eax */
  push32((uint32_t)(EAX));
  /* 107e4b31 call 0x107e5aa0 */
  push32(0x107e4b36u); f_107e5aa0();
  /* 107e4b36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4b39:;
  /* 107e4b39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4b3c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4b40 je 0x107e4b53 */
  if (C.zf) goto L_107e4b53;
  /* 107e4b42 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4b44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4b47 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 107e4b4a push eax */
  push32((uint32_t)(EAX));
  /* 107e4b4b call 0x107e5aa0 */
  push32(0x107e4b50u); f_107e5aa0();
  /* 107e4b50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4b53:;
  /* 107e4b53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4b56 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4b5a je 0x107e4b6d */
  if (C.zf) goto L_107e4b6d;
  /* 107e4b5c push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4b5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4b61 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 107e4b64 push eax */
  push32((uint32_t)(EAX));
  /* 107e4b65 call 0x107e5aa0 */
  push32(0x107e4b6au); f_107e5aa0();
  /* 107e4b6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4b6d:;
  /* 107e4b6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4b70 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4b74 je 0x107e4b87 */
  if (C.zf) goto L_107e4b87;
  /* 107e4b76 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4b78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4b7b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 107e4b7e push eax */
  push32((uint32_t)(EAX));
  /* 107e4b7f call 0x107e5aa0 */
  push32(0x107e4b84u); f_107e5aa0();
  /* 107e4b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4b87:;
  /* 107e4b87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4b8a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4b8e je 0x107e4ba1 */
  if (C.zf) goto L_107e4ba1;
  /* 107e4b90 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4b92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4b95 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 107e4b98 push eax */
  push32((uint32_t)(EAX));
  /* 107e4b99 call 0x107e5aa0 */
  push32(0x107e4b9eu); f_107e5aa0();
  /* 107e4b9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4ba1:;
  /* 107e4ba1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4ba4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4ba8 je 0x107e4bbb */
  if (C.zf) goto L_107e4bbb;
  /* 107e4baa push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4bac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4baf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 107e4bb2 push eax */
  push32((uint32_t)(EAX));
  /* 107e4bb3 call 0x107e5aa0 */
  push32(0x107e4bb8u); f_107e5aa0();
  /* 107e4bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4bbb:;
  /* 107e4bbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4bbe cmp dword ptr [ecx + 0x50], 0x1080ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1080ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4bc5 je 0x107e4bd8 */
  if (C.zf) goto L_107e4bd8;
  /* 107e4bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4bc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4bcc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 107e4bcf push eax */
  push32((uint32_t)(EAX));
  /* 107e4bd0 call 0x107e5aa0 */
  push32(0x107e4bd5u); f_107e5aa0();
  /* 107e4bd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4bd8:;
  /* 107e4bd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4bda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e4bdd push ecx */
  push32((uint32_t)(ECX));
  /* 107e4bde call 0x107e5aa0 */
  push32(0x107e4be3u); f_107e5aa0();
  /* 107e4be3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4be6:;
  /* 107e4be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e4be8 mov edx, dword ptr [0x1080ea5c] */
  EDX = (r32((uint32_t)(0x1080ea5c)));
  /* 107e4bee push edx */
  push32((uint32_t)(EDX));
  /* 107e4bef call dword ptr [0x1081336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081336c))), 0x107e4bf5u);
L_107e4bf5:;
  /* 107e4bf5 pop ebp */
  EBP = (pop32());
  /* 107e4bf6 ret  */
  ESPCHK(0x107e4af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c00 @ 0x107e4c00 (11 bytes, 5 insns) */
void f_107e4c00(void) {
  FTRACE(0x107e4c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4c00 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4c01 mov ebp, esp */
  EBP = (ESP);
  /* 107e4c03 call dword ptr [0x10813368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813368))), 0x107e4c09u);
  /* 107e4c09 pop ebp */
  EBP = (pop32());
  /* 107e4c0a ret  */
  ESPCHK(0x107e4c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c10 @ 0x107e4c10 (11 bytes, 5 insns) */
void f_107e4c10(void) {
  FTRACE(0x107e4c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4c10 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4c11 mov ebp, esp */
  EBP = (ESP);
  /* 107e4c13 call dword ptr [0x10813384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813384))), 0x107e4c19u);
  /* 107e4c19 pop ebp */
  EBP = (pop32());
  /* 107e4c1a ret  */
  ESPCHK(0x107e4c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c20 @ 0x107e4c20 (804 bytes, 236 insns) */
void f_107e4c20(void) {
  FTRACE(0x107e4c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4c21 mov ebp, esp */
  EBP = (ESP);
  /* 107e4c23 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e4c26 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 107e4c2b push 0x1080b6ec */
  push32((uint32_t)(0x1080b6ecu));
  /* 107e4c30 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4c32 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 107e4c37 call 0x107e5010 */
  push32(0x107e4c3cu); f_107e5010();
  /* 107e4c3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4c3f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 107e4c42 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4c46 jne 0x107e4c52 */
  if (!C.zf) goto L_107e4c52;
  /* 107e4c48 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 107e4c4a call 0x107e3f80 */
  push32(0x107e4c4fu); f_107e3f80();
  /* 107e4c4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e4c52:;
  /* 107e4c52 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4c55 mov dword ptr [0x10811fe0], eax */
  w32((uint32_t)(0x10811fe0), (EAX));
  /* 107e4c5a mov dword ptr [0x1081211c], 0x20 */
  w32((uint32_t)(0x1081211c), (0x20u));
  /* 107e4c64 jmp 0x107e4c6f */
  goto L_107e4c6f;
L_107e4c66:;
  /* 107e4c66 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4c69 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4c6c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_107e4c6f:;
  /* 107e4c6f mov edx, dword ptr [0x10811fe0] */
  EDX = (r32((uint32_t)(0x10811fe0)));
  /* 107e4c75 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4c7b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4c7e jae 0x107e4ca3 */
  if (!C.cf) goto L_107e4ca3;
  /* 107e4c80 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4c83 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 107e4c87 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4c8a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107e4c90 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4c93 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 107e4c97 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4c9a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 107e4ca1 jmp 0x107e4c66 */
  goto L_107e4c66;
L_107e4ca3:;
  /* 107e4ca3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 107e4ca6 push ecx */
  push32((uint32_t)(ECX));
  /* 107e4ca7 call dword ptr [0x10813390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813390))), 0x107e4cadu);
  /* 107e4cad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 107e4cb0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e4cb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e4cb8 je 0x107e4e45 */
  if (C.zf) goto L_107e4e45;
  /* 107e4cbe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4cc2 je 0x107e4e45 */
  if (C.zf) goto L_107e4e45;
  /* 107e4cc8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e4ccb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e4ccd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 107e4cd0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e4cd3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4cd6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e4cd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4cdc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4cdf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 107e4ce2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4ce9 jge 0x107e4cf3 */
  if ((C.sf==C.of)) goto L_107e4cf3;
  /* 107e4ceb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 107e4cee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 107e4cf1 jmp 0x107e4cfa */
  goto L_107e4cfa;
L_107e4cf3:;
  /* 107e4cf3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_107e4cfa:;
  /* 107e4cfa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 107e4cfd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 107e4d00 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 107e4d07 jmp 0x107e4d12 */
  goto L_107e4d12;
L_107e4d09:;
  /* 107e4d09 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 107e4d0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4d0f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_107e4d12:;
  /* 107e4d12 mov ecx, dword ptr [0x1081211c] */
  ECX = (r32((uint32_t)(0x1081211c)));
  /* 107e4d18 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4d1b jge 0x107e4db2 */
  if ((C.sf==C.of)) goto L_107e4db2;
  /* 107e4d21 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 107e4d26 push 0x1080b6ec */
  push32((uint32_t)(0x1080b6ecu));
  /* 107e4d2b push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4d2d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 107e4d32 call 0x107e5010 */
  push32(0x107e4d37u); f_107e5010();
  /* 107e4d37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4d3a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 107e4d3d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4d41 jne 0x107e4d4e */
  if (!C.zf) goto L_107e4d4e;
  /* 107e4d43 mov edx, dword ptr [0x1081211c] */
  EDX = (r32((uint32_t)(0x1081211c)));
  /* 107e4d49 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 107e4d4c jmp 0x107e4db2 */
  goto L_107e4db2;
L_107e4d4e:;
  /* 107e4d4e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 107e4d51 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4d54 mov dword ptr [eax*4 + 0x10811fe0], ecx */
  w32((uint32_t)(EAX*4 + 0x10811fe0), (ECX));
  /* 107e4d5b mov edx, dword ptr [0x1081211c] */
  EDX = (r32((uint32_t)(0x1081211c)));
  /* 107e4d61 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4d64 mov dword ptr [0x1081211c], edx */
  w32((uint32_t)(0x1081211c), (EDX));
  /* 107e4d6a jmp 0x107e4d75 */
  goto L_107e4d75;
L_107e4d6c:;
  /* 107e4d6c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4d6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4d72 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_107e4d75:;
  /* 107e4d75 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 107e4d78 mov edx, dword ptr [ecx*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107e4d7f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4d85 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4d88 jae 0x107e4dad */
  if (!C.cf) goto L_107e4dad;
  /* 107e4d8a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4d8d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 107e4d91 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4d94 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107e4d9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4d9d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 107e4da1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4da4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 107e4dab jmp 0x107e4d6c */
  goto L_107e4d6c;
L_107e4dad:;
  /* 107e4dad jmp 0x107e4d09 */
  goto L_107e4d09;
L_107e4db2:;
  /* 107e4db2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 107e4db9 jmp 0x107e4dd6 */
  goto L_107e4dd6;
L_107e4dbb:;
  /* 107e4dbb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 107e4dbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4dc1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 107e4dc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4dc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4dca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e4dcd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 107e4dd0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4dd3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_107e4dd6:;
  /* 107e4dd6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 107e4dd9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4ddc jge 0x107e4e45 */
  if ((C.sf==C.of)) goto L_107e4e45;
  /* 107e4dde mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 107e4de1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4de4 je 0x107e4e40 */
  if (C.zf) goto L_107e4e40;
  /* 107e4de6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4de9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107e4dec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107e4def test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e4df1 je 0x107e4e40 */
  if (C.zf) goto L_107e4e40;
  /* 107e4df3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4df6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107e4df9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 107e4dfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e4dfe jne 0x107e4e10 */
  if (!C.zf) goto L_107e4e10;
  /* 107e4e00 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 107e4e03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e4e05 push edx */
  push32((uint32_t)(EDX));
  /* 107e4e06 call dword ptr [0x1081338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081338c))), 0x107e4e0cu);
  /* 107e4e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e4e0e je 0x107e4e40 */
  if (C.zf) goto L_107e4e40;
L_107e4e10:;
  /* 107e4e10 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 107e4e13 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107e4e16 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 107e4e19 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107e4e1c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e4e1f mov edx, dword ptr [eax*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107e4e26 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4e28 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 107e4e2b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4e2e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 107e4e31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e4e33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107e4e35 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4e38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4e3b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107e4e3d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_107e4e40:;
  /* 107e4e40 jmp 0x107e4dbb */
  goto L_107e4dbb;
L_107e4e45:;
  /* 107e4e45 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 107e4e4c jmp 0x107e4e57 */
  goto L_107e4e57;
L_107e4e4e:;
  /* 107e4e4e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 107e4e51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4e54 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_107e4e57:;
  /* 107e4e57 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4e5b jge 0x107e4f34 */
  if ((C.sf==C.of)) goto L_107e4f34;
  /* 107e4e61 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 107e4e64 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e4e67 mov edx, dword ptr [0x10811fe0] */
  EDX = (r32((uint32_t)(0x10811fe0)));
  /* 107e4e6d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4e6f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 107e4e72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4e75 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4e78 jne 0x107e4f20 */
  if (!C.zf) goto L_107e4f20;
  /* 107e4e7e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4e81 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 107e4e85 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4e89 jne 0x107e4e94 */
  if (!C.zf) goto L_107e4e94;
  /* 107e4e8b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 107e4e92 jmp 0x107e4ea4 */
  goto L_107e4ea4;
L_107e4e94:;
  /* 107e4e94 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 107e4e97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e4e9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107e4e9c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e4e9e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4ea1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_107e4ea4:;
  /* 107e4ea4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 107e4ea7 push eax */
  push32((uint32_t)(EAX));
  /* 107e4ea8 call dword ptr [0x1081333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081333c))), 0x107e4eaeu);
  /* 107e4eae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 107e4eb1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4eb5 je 0x107e4f0f */
  if (C.zf) goto L_107e4f0f;
  /* 107e4eb7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107e4eba push ecx */
  push32((uint32_t)(ECX));
  /* 107e4ebb call dword ptr [0x1081338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081338c))), 0x107e4ec1u);
  /* 107e4ec1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 107e4ec4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4ec8 je 0x107e4f0f */
  if (C.zf) goto L_107e4f0f;
  /* 107e4eca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4ecd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107e4ed0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107e4ed2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 107e4ed5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e4edb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4ede jne 0x107e4ef0 */
  if (!C.zf) goto L_107e4ef0;
  /* 107e4ee0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4ee3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107e4ee6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 107e4ee8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4eeb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 107e4eee jmp 0x107e4f0d */
  goto L_107e4f0d;
L_107e4ef0:;
  /* 107e4ef0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 107e4ef3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e4ef9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4efc jne 0x107e4f0d */
  if (!C.zf) goto L_107e4f0d;
  /* 107e4efe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4f01 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107e4f04 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 107e4f07 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4f0a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_107e4f0d:;
  /* 107e4f0d jmp 0x107e4f1e */
  goto L_107e4f1e;
L_107e4f0f:;
  /* 107e4f0f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4f12 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107e4f15 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 107e4f18 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4f1b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_107e4f1e:;
  /* 107e4f1e jmp 0x107e4f2f */
  goto L_107e4f2f;
L_107e4f20:;
  /* 107e4f20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4f23 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107e4f26 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 107e4f29 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e4f2c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_107e4f2f:;
  /* 107e4f2f jmp 0x107e4e4e */
  goto L_107e4e4e;
L_107e4f34:;
  /* 107e4f34 mov eax, dword ptr [0x1081211c] */
  EAX = (r32((uint32_t)(0x1081211c)));
  /* 107e4f39 push eax */
  push32((uint32_t)(EAX));
  /* 107e4f3a call dword ptr [0x10813388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813388))), 0x107e4f40u);
  /* 107e4f40 mov esp, ebp */
  ESP = (EBP);
  /* 107e4f42 pop ebp */
  EBP = (pop32());
  /* 107e4f43 ret  */
  ESPCHK(0x107e4c20u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x107e4f50 (155 bytes, 45 insns) */
void f_107e4f50(void) {
  FTRACE(0x107e4f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4f50 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4f51 mov ebp, esp */
  EBP = (ESP);
  /* 107e4f53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e4f56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107e4f5d jmp 0x107e4f68 */
  goto L_107e4f68;
L_107e4f5f:;
  /* 107e4f5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e4f62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4f65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107e4f68:;
  /* 107e4f68 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4f6c jge 0x107e4fe7 */
  if ((C.sf==C.of)) goto L_107e4fe7;
  /* 107e4f6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e4f71 cmp dword ptr [ecx*4 + 0x10811fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10811fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4f79 je 0x107e4fe2 */
  if (C.zf) goto L_107e4fe2;
  /* 107e4f7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e4f7e mov eax, dword ptr [edx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10811fe0)));
  /* 107e4f85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e4f88 jmp 0x107e4f93 */
  goto L_107e4f93;
L_107e4f8a:;
  /* 107e4f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4f8d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4f90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107e4f93:;
  /* 107e4f93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e4f96 mov eax, dword ptr [edx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10811fe0)));
  /* 107e4f9d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4fa2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4fa5 jae 0x107e4fbf */
  if (!C.cf) goto L_107e4fbf;
  /* 107e4fa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4faa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e4fae je 0x107e4fbd */
  if (C.zf) goto L_107e4fbd;
  /* 107e4fb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e4fb3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4fb6 push edx */
  push32((uint32_t)(EDX));
  /* 107e4fb7 call dword ptr [0x10813394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813394))), 0x107e4fbdu);
L_107e4fbd:;
  /* 107e4fbd jmp 0x107e4f8a */
  goto L_107e4f8a;
L_107e4fbf:;
  /* 107e4fbf push 2 */
  push32((uint32_t)(0x2u));
  /* 107e4fc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e4fc4 mov ecx, dword ptr [eax*4 + 0x10811fe0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107e4fcb push ecx */
  push32((uint32_t)(ECX));
  /* 107e4fcc call 0x107e5aa0 */
  push32(0x107e4fd1u); f_107e5aa0();
  /* 107e4fd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e4fd4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e4fd7 mov dword ptr [edx*4 + 0x10811fe0], 0 */
  w32((uint32_t)(EDX*4 + 0x10811fe0), (0x0u));
L_107e4fe2:;
  /* 107e4fe2 jmp 0x107e4f5f */
  goto L_107e4f5f;
L_107e4fe7:;
  /* 107e4fe7 mov esp, ebp */
  ESP = (EBP);
  /* 107e4fe9 pop ebp */
  EBP = (pop32());
  /* 107e4fea ret  */
  ESPCHK(0x107e4f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ff0 @ 0x107e4ff0 (29 bytes, 13 insns) */
void f_107e4ff0(void) {
  FTRACE(0x107e4ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e4ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e4ff1 mov ebp, esp */
  EBP = (ESP);
  /* 107e4ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e4ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e4ff7 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e4ff9 mov eax, dword ptr [0x108107f0] */
  EAX = (r32((uint32_t)(0x108107f0)));
  /* 107e4ffe push eax */
  push32((uint32_t)(EAX));
  /* 107e4fff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5002 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5003 call 0x107e5060 */
  push32(0x107e5008u); f_107e5060();
  /* 107e5008 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e500b pop ebp */
  EBP = (pop32());
  /* 107e500c ret  */
  ESPCHK(0x107e4ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005010 @ 0x107e5010 (35 bytes, 16 insns) */
void f_107e5010(void) {
  FTRACE(0x107e5010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5010 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5011 mov ebp, esp */
  EBP = (ESP);
  /* 107e5013 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e5016 push eax */
  push32((uint32_t)(EAX));
  /* 107e5017 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e501a push ecx */
  push32((uint32_t)(ECX));
  /* 107e501b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e501e push edx */
  push32((uint32_t)(EDX));
  /* 107e501f mov eax, dword ptr [0x108107f0] */
  EAX = (r32((uint32_t)(0x108107f0)));
  /* 107e5024 push eax */
  push32((uint32_t)(EAX));
  /* 107e5025 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5028 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5029 call 0x107e5060 */
  push32(0x107e502eu); f_107e5060();
  /* 107e502e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5031 pop ebp */
  EBP = (pop32());
  /* 107e5032 ret  */
  ESPCHK(0x107e5010u, _esp0);
  ESP += 4; return;
}

/* FUN_10005040 @ 0x107e5040 (27 bytes, 13 insns) */
void f_107e5040(void) {
  FTRACE(0x107e5040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5040 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5041 mov ebp, esp */
  EBP = (ESP);
  /* 107e5043 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5045 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5047 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5049 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e504c push eax */
  push32((uint32_t)(EAX));
  /* 107e504d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5050 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5051 call 0x107e5060 */
  push32(0x107e5056u); f_107e5060();
  /* 107e5056 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5059 pop ebp */
  EBP = (pop32());
  /* 107e505a ret  */
  ESPCHK(0x107e5040u, _esp0);
  ESP += 4; return;
}

/* FUN_10005060 @ 0x107e5060 (94 bytes, 38 insns) */
void f_107e5060(void) {
  FTRACE(0x107e5060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5060 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5061 mov ebp, esp */
  EBP = (ESP);
  /* 107e5063 push ecx */
  push32((uint32_t)(ECX));
L_107e5064:;
  /* 107e5064 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e5066 call 0x107e8a10 */
  push32(0x107e506bu); f_107e8a10();
  /* 107e506b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e506e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e5071 push eax */
  push32((uint32_t)(EAX));
  /* 107e5072 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e5075 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5076 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e5079 push edx */
  push32((uint32_t)(EDX));
  /* 107e507a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e507d push eax */
  push32((uint32_t)(EAX));
  /* 107e507e call 0x107e50e0 */
  push32(0x107e5083u); f_107e50e0();
  /* 107e5083 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5086 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e5089 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e508b call 0x107e8ab0 */
  push32(0x107e5090u); f_107e8ab0();
  /* 107e5090 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5093 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5097 jne 0x107e509f */
  if (!C.zf) goto L_107e509f;
  /* 107e5099 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e509d jne 0x107e50a4 */
  if (!C.zf) goto L_107e50a4;
L_107e509f:;
  /* 107e509f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e50a2 jmp 0x107e50ba */
  goto L_107e50ba;
L_107e50a4:;
  /* 107e50a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e50a7 push ecx */
  push32((uint32_t)(ECX));
  /* 107e50a8 call 0x107e8d50 */
  push32(0x107e50adu); f_107e8d50();
  /* 107e50ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e50b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e50b2 jne 0x107e50b8 */
  if (!C.zf) goto L_107e50b8;
  /* 107e50b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e50b6 jmp 0x107e50ba */
  goto L_107e50ba;
L_107e50b8:;
  /* 107e50b8 jmp 0x107e5064 */
  goto L_107e5064;
L_107e50ba:;
  /* 107e50ba mov esp, ebp */
  ESP = (EBP);
  /* 107e50bc pop ebp */
  EBP = (pop32());
  /* 107e50bd ret  */
  ESPCHK(0x107e5060u, _esp0);
  ESP += 4; return;
}

/* FUN_100050c0 @ 0x107e50c0 (23 bytes, 11 insns) */
void f_107e50c0(void) {
  FTRACE(0x107e50c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e50c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e50c1 mov ebp, esp */
  EBP = (ESP);
  /* 107e50c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e50c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e50c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e50c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e50cc push eax */
  push32((uint32_t)(EAX));
  /* 107e50cd call 0x107e50e0 */
  push32(0x107e50d2u); f_107e50e0();
  /* 107e50d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e50d5 pop ebp */
  EBP = (pop32());
  /* 107e50d6 ret  */
  ESPCHK(0x107e50c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050e0 @ 0x107e50e0 (787 bytes, 254 insns) */
void f_107e50e0(void) {
  FTRACE(0x107e50e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e50e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e50e1 mov ebp, esp */
  EBP = (ESP);
  /* 107e50e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e50e6 push ebx */
  push32((uint32_t)(EBX));
  /* 107e50e7 push esi */
  push32((uint32_t)(ESI));
  /* 107e50e8 push edi */
  push32((uint32_t)(EDI));
  /* 107e50e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107e50f0 mov eax, dword ptr [0x1080ea84] */
  EAX = (r32((uint32_t)(0x1080ea84)));
  /* 107e50f5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107e50f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e50fa je 0x107e512c */
  if (C.zf) goto L_107e512c;
L_107e50fc:;
  /* 107e50fc call 0x107e61b0 */
  push32(0x107e5101u); f_107e61b0();
  /* 107e5101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5103 jne 0x107e5126 */
  if (!C.zf) goto L_107e5126;
  /* 107e5105 push 0x1080b7e0 */
  push32((uint32_t)(0x1080b7e0u));
  /* 107e510a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e510c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 107e5111 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5116 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5118 call 0x107e40d0 */
  push32(0x107e511du); f_107e40d0();
  /* 107e511d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5120 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5123 jne 0x107e5126 */
  if (!C.zf) goto L_107e5126;
  /* 107e5125 int3  */
  x86_unimpl("int3 @ 0x107e5125");
L_107e5126:;
  /* 107e5126 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5128 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e512a jne 0x107e50fc */
  if (!C.zf) goto L_107e50fc;
L_107e512c:;
  /* 107e512c mov edx, dword ptr [0x1080ea88] */
  EDX = (r32((uint32_t)(0x1080ea88)));
  /* 107e5132 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107e5135 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e5138 cmp eax, dword ptr [0x1080ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1080ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e513e jne 0x107e5141 */
  if (!C.zf) goto L_107e5141;
  /* 107e5140 int3  */
  x86_unimpl("int3 @ 0x107e5140");
L_107e5141:;
  /* 107e5141 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e5144 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5145 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e5148 push edx */
  push32((uint32_t)(EDX));
  /* 107e5149 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e514c push eax */
  push32((uint32_t)(EAX));
  /* 107e514d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5150 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5154 push edx */
  push32((uint32_t)(EDX));
  /* 107e5155 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5157 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5159 call dword ptr [0x1080ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1080ec90))), 0x107e515fu);
  /* 107e515f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5164 jne 0x107e51c4 */
  if (!C.zf) goto L_107e51c4;
  /* 107e5166 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e516a je 0x107e5197 */
  if (C.zf) goto L_107e5197;
L_107e516c:;
  /* 107e516c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e516f push eax */
  push32((uint32_t)(EAX));
  /* 107e5170 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e5173 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5174 push 0x1080b79c */
  push32((uint32_t)(0x1080b79cu));
  /* 107e5179 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e517b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e517d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e517f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5181 call 0x107e40d0 */
  push32(0x107e5186u); f_107e40d0();
  /* 107e5186 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5189 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e518c jne 0x107e518f */
  if (!C.zf) goto L_107e518f;
  /* 107e518e int3  */
  x86_unimpl("int3 @ 0x107e518e");
L_107e518f:;
  /* 107e518f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e5191 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e5193 jne 0x107e516c */
  if (!C.zf) goto L_107e516c;
  /* 107e5195 jmp 0x107e51bd */
  goto L_107e51bd;
L_107e5197:;
  /* 107e5197 push 0x1080b778 */
  push32((uint32_t)(0x1080b778u));
  /* 107e519c push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e51a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e51a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e51a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e51a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e51a9 call 0x107e40d0 */
  push32(0x107e51aeu); f_107e40d0();
  /* 107e51ae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e51b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e51b4 jne 0x107e51b7 */
  if (!C.zf) goto L_107e51b7;
  /* 107e51b6 int3  */
  x86_unimpl("int3 @ 0x107e51b6");
L_107e51b7:;
  /* 107e51b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e51b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e51bb jne 0x107e5197 */
  if (!C.zf) goto L_107e5197;
L_107e51bd:;
  /* 107e51bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e51bf jmp 0x107e53ec */
  goto L_107e53ec;
L_107e51c4:;
  /* 107e51c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e51c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e51cd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e51d0 je 0x107e51e6 */
  if (C.zf) goto L_107e51e6;
  /* 107e51d2 mov edx, dword ptr [0x1080ea84] */
  EDX = (r32((uint32_t)(0x1080ea84)));
  /* 107e51d8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107e51db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e51dd jne 0x107e51e6 */
  if (!C.zf) goto L_107e51e6;
  /* 107e51df mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_107e51e6:;
  /* 107e51e6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e51ea ja 0x107e51f7 */
  if ((!C.cf&&!C.zf)) goto L_107e51f7;
  /* 107e51ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e51ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e51f2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e51f5 jbe 0x107e5223 */
  if ((C.cf||C.zf)) goto L_107e5223;
L_107e51f7:;
  /* 107e51f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e51fa push ecx */
  push32((uint32_t)(ECX));
  /* 107e51fb push 0x1080b750 */
  push32((uint32_t)(0x1080b750u));
  /* 107e5200 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5202 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5204 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5206 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5208 call 0x107e40d0 */
  push32(0x107e520du); f_107e40d0();
  /* 107e520d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5210 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5213 jne 0x107e5216 */
  if (!C.zf) goto L_107e5216;
  /* 107e5215 int3  */
  x86_unimpl("int3 @ 0x107e5215");
L_107e5216:;
  /* 107e5216 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e5218 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e521a jne 0x107e51f7 */
  if (!C.zf) goto L_107e51f7;
  /* 107e521c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e521e jmp 0x107e53ec */
  goto L_107e53ec;
L_107e5223:;
  /* 107e5223 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5226 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e522b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e522e je 0x107e5270 */
  if (C.zf) goto L_107e5270;
  /* 107e5230 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5234 je 0x107e5270 */
  if (C.zf) goto L_107e5270;
  /* 107e5236 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5239 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e523f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5242 je 0x107e5270 */
  if (C.zf) goto L_107e5270;
  /* 107e5244 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5248 je 0x107e5270 */
  if (C.zf) goto L_107e5270;
L_107e524a:;
  /* 107e524a push 0x1080b71c */
  push32((uint32_t)(0x1080b71cu));
  /* 107e524f push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e5254 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5256 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5258 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e525a push 1 */
  push32((uint32_t)(0x1u));
  /* 107e525c call 0x107e40d0 */
  push32(0x107e5261u); f_107e40d0();
  /* 107e5261 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5264 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5267 jne 0x107e526a */
  if (!C.zf) goto L_107e526a;
  /* 107e5269 int3  */
  x86_unimpl("int3 @ 0x107e5269");
L_107e526a:;
  /* 107e526a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e526c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e526e jne 0x107e524a */
  if (!C.zf) goto L_107e524a;
L_107e5270:;
  /* 107e5270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5273 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5276 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107e5279 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e527c push ecx */
  push32((uint32_t)(ECX));
  /* 107e527d call 0x107e8e60 */
  push32(0x107e5282u); f_107e8e60();
  /* 107e5282 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5285 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e5288 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e528c jne 0x107e5295 */
  if (!C.zf) goto L_107e5295;
  /* 107e528e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5290 jmp 0x107e53ec */
  goto L_107e53ec;
L_107e5295:;
  /* 107e5295 mov edx, dword ptr [0x1080ea88] */
  EDX = (r32((uint32_t)(0x1080ea88)));
  /* 107e529b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e529e mov dword ptr [0x1080ea88], edx */
  w32((uint32_t)(0x1080ea88), (EDX));
  /* 107e52a4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e52a8 je 0x107e52f3 */
  if (C.zf) goto L_107e52f3;
  /* 107e52aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e52ad mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107e52b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e52b6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 107e52bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e52c0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 107e52c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e52ca mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 107e52d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e52d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e52d7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 107e52da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e52dd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 107e52e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e52e7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 107e52ee jmp 0x107e5393 */
  goto L_107e5393;
L_107e52f3:;
  /* 107e52f3 mov edx, dword ptr [0x10810650] */
  EDX = (r32((uint32_t)(0x10810650)));
  /* 107e52f9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e52fc mov dword ptr [0x10810650], edx */
  w32((uint32_t)(0x10810650), (EDX));
  /* 107e5302 mov eax, dword ptr [0x10810658] */
  EAX = (r32((uint32_t)(0x10810658)));
  /* 107e5307 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e530a mov dword ptr [0x10810658], eax */
  w32((uint32_t)(0x10810658), (EAX));
  /* 107e530f mov ecx, dword ptr [0x10810658] */
  ECX = (r32((uint32_t)(0x10810658)));
  /* 107e5315 cmp ecx, dword ptr [0x1081065c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1081065c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e531b jbe 0x107e5329 */
  if ((C.cf||C.zf)) goto L_107e5329;
  /* 107e531d mov edx, dword ptr [0x10810658] */
  EDX = (r32((uint32_t)(0x10810658)));
  /* 107e5323 mov dword ptr [0x1081065c], edx */
  w32((uint32_t)(0x1081065c), (EDX));
L_107e5329:;
  /* 107e5329 cmp dword ptr [0x10810654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5330 je 0x107e533f */
  if (C.zf) goto L_107e533f;
  /* 107e5332 mov eax, dword ptr [0x10810654] */
  EAX = (r32((uint32_t)(0x10810654)));
  /* 107e5337 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e533a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 107e533d jmp 0x107e5348 */
  goto L_107e5348;
L_107e533f:;
  /* 107e533f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5342 mov dword ptr [0x1081064c], edx */
  w32((uint32_t)(0x1081064c), (EDX));
L_107e5348:;
  /* 107e5348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e534b mov ecx, dword ptr [0x10810654] */
  ECX = (r32((uint32_t)(0x10810654)));
  /* 107e5351 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107e5353 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5356 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 107e535d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5360 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e5363 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 107e5366 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5369 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e536c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 107e536f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5372 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5375 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 107e5378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e537b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e537e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 107e5381 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5384 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e5387 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 107e538a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e538d mov dword ptr [0x10810654], ecx */
  w32((uint32_t)(0x10810654), (ECX));
L_107e5393:;
  /* 107e5393 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e5395 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e5397 mov dl, byte ptr [0x1080ea90] */
  DL = (r8((uint32_t)(0x1080ea90)));
  /* 107e539d push edx */
  push32((uint32_t)(EDX));
  /* 107e539e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e53a1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e53a4 push eax */
  push32((uint32_t)(EAX));
  /* 107e53a5 call 0x107e8d80 */
  push32(0x107e53aau); f_107e8d80();
  /* 107e53aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e53ad push 4 */
  push32((uint32_t)(0x4u));
  /* 107e53af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e53b1 mov cl, byte ptr [0x1080ea90] */
  CL = (r8((uint32_t)(0x1080ea90)));
  /* 107e53b7 push ecx */
  push32((uint32_t)(ECX));
  /* 107e53b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e53bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e53be lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 107e53c2 push ecx */
  push32((uint32_t)(ECX));
  /* 107e53c3 call 0x107e8d80 */
  push32(0x107e53c8u); f_107e8d80();
  /* 107e53c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e53cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e53ce push edx */
  push32((uint32_t)(EDX));
  /* 107e53cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e53d1 mov al, byte ptr [0x1080ea92] */
  AL = (r8((uint32_t)(0x1080ea92)));
  /* 107e53d6 push eax */
  push32((uint32_t)(EAX));
  /* 107e53d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e53da add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e53dd push ecx */
  push32((uint32_t)(ECX));
  /* 107e53de call 0x107e8d80 */
  push32(0x107e53e3u); f_107e8d80();
  /* 107e53e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e53e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e53e9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_107e53ec:;
  /* 107e53ec pop edi */
  EDI = (pop32());
  /* 107e53ed pop esi */
  ESI = (pop32());
  /* 107e53ee pop ebx */
  EBX = (pop32());
  /* 107e53ef mov esp, ebp */
  ESP = (EBP);
  /* 107e53f1 pop ebp */
  EBP = (pop32());
  /* 107e53f2 ret  */
  ESPCHK(0x107e50e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005400 @ 0x107e5400 (27 bytes, 13 insns) */
void f_107e5400(void) {
  FTRACE(0x107e5400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5400 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5401 mov ebp, esp */
  EBP = (ESP);
  /* 107e5403 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5405 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5407 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5409 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e540c push eax */
  push32((uint32_t)(EAX));
  /* 107e540d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5410 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5411 call 0x107e5420 */
  push32(0x107e5416u); f_107e5420();
  /* 107e5416 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5419 pop ebp */
  EBP = (pop32());
  /* 107e541a ret  */
  ESPCHK(0x107e5400u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x107e5420 (96 bytes, 37 insns) */
void f_107e5420(void) {
  FTRACE(0x107e5420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5420 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5421 mov ebp, esp */
  EBP = (ESP);
  /* 107e5423 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e5426 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5429 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e542d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 107e5430 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e5433 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5434 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e5437 push edx */
  push32((uint32_t)(EDX));
  /* 107e5438 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e543b push eax */
  push32((uint32_t)(EAX));
  /* 107e543c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e543f push ecx */
  push32((uint32_t)(ECX));
  /* 107e5440 call 0x107e5010 */
  push32(0x107e5445u); f_107e5010();
  /* 107e5445 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5448 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e544b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e544f je 0x107e5479 */
  if (C.zf) goto L_107e5479;
  /* 107e5451 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e5454 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107e5457 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e545a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e545d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e5460:;
  /* 107e5460 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e5463 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5466 jae 0x107e5479 */
  if (!C.cf) goto L_107e5479;
  /* 107e5468 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e546b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107e546e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e5471 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5474 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e5477 jmp 0x107e5460 */
  goto L_107e5460;
L_107e5479:;
  /* 107e5479 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e547c mov esp, ebp */
  ESP = (EBP);
  /* 107e547e pop ebp */
  EBP = (pop32());
  /* 107e547f ret  */
  ESPCHK(0x107e5420u, _esp0);
  ESP += 4; return;
}

/* FUN_10005480 @ 0x107e5480 (27 bytes, 13 insns) */
void f_107e5480(void) {
  FTRACE(0x107e5480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5480 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5481 mov ebp, esp */
  EBP = (ESP);
  /* 107e5483 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5485 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5487 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5489 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e548c push eax */
  push32((uint32_t)(EAX));
  /* 107e548d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5490 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5491 call 0x107e54a0 */
  push32(0x107e5496u); f_107e54a0();
  /* 107e5496 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5499 pop ebp */
  EBP = (pop32());
  /* 107e549a ret  */
  ESPCHK(0x107e5480u, _esp0);
  ESP += 4; return;
}

/* FUN_100054a0 @ 0x107e54a0 (64 bytes, 27 insns) */
void f_107e54a0(void) {
  FTRACE(0x107e54a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e54a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e54a1 mov ebp, esp */
  EBP = (ESP);
  /* 107e54a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e54a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e54a6 call 0x107e8a10 */
  push32(0x107e54abu); f_107e8a10();
  /* 107e54ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e54ae push 1 */
  push32((uint32_t)(0x1u));
  /* 107e54b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e54b3 push eax */
  push32((uint32_t)(EAX));
  /* 107e54b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e54b7 push ecx */
  push32((uint32_t)(ECX));
  /* 107e54b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e54bb push edx */
  push32((uint32_t)(EDX));
  /* 107e54bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e54bf push eax */
  push32((uint32_t)(EAX));
  /* 107e54c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e54c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e54c4 call 0x107e54e0 */
  push32(0x107e54c9u); f_107e54e0();
  /* 107e54c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e54cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e54cf push 9 */
  push32((uint32_t)(0x9u));
  /* 107e54d1 call 0x107e8ab0 */
  push32(0x107e54d6u); f_107e8ab0();
  /* 107e54d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e54d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e54dc mov esp, ebp */
  ESP = (EBP);
  /* 107e54de pop ebp */
  EBP = (pop32());
  /* 107e54df ret  */
  ESPCHK(0x107e54a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054e0 @ 0x107e54e0 (1297 bytes, 431 insns) */
void f_107e54e0(void) {
  FTRACE(0x107e54e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e54e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e54e1 mov ebp, esp */
  EBP = (ESP);
  /* 107e54e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e54e6 push ebx */
  push32((uint32_t)(EBX));
  /* 107e54e7 push esi */
  push32((uint32_t)(ESI));
  /* 107e54e8 push edi */
  push32((uint32_t)(EDI));
  /* 107e54e9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 107e54f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e54f4 jne 0x107e5513 */
  if (!C.zf) goto L_107e5513;
  /* 107e54f6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e54f9 push eax */
  push32((uint32_t)(EAX));
  /* 107e54fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e54fd push ecx */
  push32((uint32_t)(ECX));
  /* 107e54fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e5501 push edx */
  push32((uint32_t)(EDX));
  /* 107e5502 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5505 push eax */
  push32((uint32_t)(EAX));
  /* 107e5506 call 0x107e5010 */
  push32(0x107e550bu); f_107e5010();
  /* 107e550b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e550e jmp 0x107e59ea */
  goto L_107e59ea;
L_107e5513:;
  /* 107e5513 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5517 je 0x107e5536 */
  if (C.zf) goto L_107e5536;
  /* 107e5519 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e551d jne 0x107e5536 */
  if (!C.zf) goto L_107e5536;
  /* 107e551f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e5522 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5523 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5526 push edx */
  push32((uint32_t)(EDX));
  /* 107e5527 call 0x107e5aa0 */
  push32(0x107e552cu); f_107e5aa0();
  /* 107e552c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e552f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5531 jmp 0x107e59ea */
  goto L_107e59ea;
L_107e5536:;
  /* 107e5536 mov eax, dword ptr [0x1080ea84] */
  EAX = (r32((uint32_t)(0x1080ea84)));
  /* 107e553b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107e553e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5540 je 0x107e5572 */
  if (C.zf) goto L_107e5572;
L_107e5542:;
  /* 107e5542 call 0x107e61b0 */
  push32(0x107e5547u); f_107e61b0();
  /* 107e5547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5549 jne 0x107e556c */
  if (!C.zf) goto L_107e556c;
  /* 107e554b push 0x1080b7e0 */
  push32((uint32_t)(0x1080b7e0u));
  /* 107e5550 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5552 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 107e5557 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e555c push 2 */
  push32((uint32_t)(0x2u));
  /* 107e555e call 0x107e40d0 */
  push32(0x107e5563u); f_107e40d0();
  /* 107e5563 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5566 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5569 jne 0x107e556c */
  if (!C.zf) goto L_107e556c;
  /* 107e556b int3  */
  x86_unimpl("int3 @ 0x107e556b");
L_107e556c:;
  /* 107e556c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e556e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e5570 jne 0x107e5542 */
  if (!C.zf) goto L_107e5542;
L_107e5572:;
  /* 107e5572 mov edx, dword ptr [0x1080ea88] */
  EDX = (r32((uint32_t)(0x1080ea88)));
  /* 107e5578 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107e557b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e557e cmp eax, dword ptr [0x1080ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1080ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5584 jne 0x107e5587 */
  if (!C.zf) goto L_107e5587;
  /* 107e5586 int3  */
  x86_unimpl("int3 @ 0x107e5586");
L_107e5587:;
  /* 107e5587 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e558a push ecx */
  push32((uint32_t)(ECX));
  /* 107e558b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e558e push edx */
  push32((uint32_t)(EDX));
  /* 107e558f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e5592 push eax */
  push32((uint32_t)(EAX));
  /* 107e5593 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e5596 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5597 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e559a push edx */
  push32((uint32_t)(EDX));
  /* 107e559b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e559e push eax */
  push32((uint32_t)(EAX));
  /* 107e559f push 2 */
  push32((uint32_t)(0x2u));
  /* 107e55a1 call dword ptr [0x1080ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1080ec90))), 0x107e55a7u);
  /* 107e55a7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e55aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e55ac jne 0x107e560c */
  if (!C.zf) goto L_107e560c;
  /* 107e55ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e55b2 je 0x107e55df */
  if (C.zf) goto L_107e55df;
L_107e55b4:;
  /* 107e55b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e55b7 push ecx */
  push32((uint32_t)(ECX));
  /* 107e55b8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e55bb push edx */
  push32((uint32_t)(EDX));
  /* 107e55bc push 0x1080b95c */
  push32((uint32_t)(0x1080b95cu));
  /* 107e55c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e55c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e55c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e55c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e55c9 call 0x107e40d0 */
  push32(0x107e55ceu); f_107e40d0();
  /* 107e55ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e55d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e55d4 jne 0x107e55d7 */
  if (!C.zf) goto L_107e55d7;
  /* 107e55d6 int3  */
  x86_unimpl("int3 @ 0x107e55d6");
L_107e55d7:;
  /* 107e55d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e55d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e55db jne 0x107e55b4 */
  if (!C.zf) goto L_107e55b4;
  /* 107e55dd jmp 0x107e5605 */
  goto L_107e5605;
L_107e55df:;
  /* 107e55df push 0x1080b938 */
  push32((uint32_t)(0x1080b938u));
  /* 107e55e4 push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e55e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e55eb push 0 */
  push32((uint32_t)(0x0u));
  /* 107e55ed push 0 */
  push32((uint32_t)(0x0u));
  /* 107e55ef push 0 */
  push32((uint32_t)(0x0u));
  /* 107e55f1 call 0x107e40d0 */
  push32(0x107e55f6u); f_107e40d0();
  /* 107e55f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e55f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e55fc jne 0x107e55ff */
  if (!C.zf) goto L_107e55ff;
  /* 107e55fe int3  */
  x86_unimpl("int3 @ 0x107e55fe");
L_107e55ff:;
  /* 107e55ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5601 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e5603 jne 0x107e55df */
  if (!C.zf) goto L_107e55df;
L_107e5605:;
  /* 107e5605 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5607 jmp 0x107e59ea */
  goto L_107e59ea;
L_107e560c:;
  /* 107e560c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5610 jbe 0x107e563e */
  if ((C.cf||C.zf)) goto L_107e563e;
L_107e5612:;
  /* 107e5612 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5615 push edx */
  push32((uint32_t)(EDX));
  /* 107e5616 push 0x1080b908 */
  push32((uint32_t)(0x1080b908u));
  /* 107e561b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e561d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e561f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5621 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5623 call 0x107e40d0 */
  push32(0x107e5628u); f_107e40d0();
  /* 107e5628 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e562b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e562e jne 0x107e5631 */
  if (!C.zf) goto L_107e5631;
  /* 107e5630 int3  */
  x86_unimpl("int3 @ 0x107e5630");
L_107e5631:;
  /* 107e5631 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5633 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5635 jne 0x107e5612 */
  if (!C.zf) goto L_107e5612;
  /* 107e5637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5639 jmp 0x107e59ea */
  goto L_107e59ea;
L_107e563e:;
  /* 107e563e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5642 je 0x107e5686 */
  if (C.zf) goto L_107e5686;
  /* 107e5644 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e5647 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e564d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5650 je 0x107e5686 */
  if (C.zf) goto L_107e5686;
  /* 107e5652 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e5655 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e565b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e565e je 0x107e5686 */
  if (C.zf) goto L_107e5686;
L_107e5660:;
  /* 107e5660 push 0x1080b71c */
  push32((uint32_t)(0x1080b71cu));
  /* 107e5665 push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e566a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e566c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e566e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5670 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5672 call 0x107e40d0 */
  push32(0x107e5677u); f_107e40d0();
  /* 107e5677 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e567a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e567d jne 0x107e5680 */
  if (!C.zf) goto L_107e5680;
  /* 107e567f int3  */
  x86_unimpl("int3 @ 0x107e567f");
L_107e5680:;
  /* 107e5680 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5684 jne 0x107e5660 */
  if (!C.zf) goto L_107e5660;
L_107e5686:;
  /* 107e5686 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5689 push ecx */
  push32((uint32_t)(ECX));
  /* 107e568a call 0x107e6610 */
  push32(0x107e568fu); f_107e6610();
  /* 107e568f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5694 jne 0x107e56b7 */
  if (!C.zf) goto L_107e56b7;
  /* 107e5696 push 0x1080b8e4 */
  push32((uint32_t)(0x1080b8e4u));
  /* 107e569b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e569d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 107e56a2 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e56a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e56a9 call 0x107e40d0 */
  push32(0x107e56aeu); f_107e40d0();
  /* 107e56ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e56b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e56b4 jne 0x107e56b7 */
  if (!C.zf) goto L_107e56b7;
  /* 107e56b6 int3  */
  x86_unimpl("int3 @ 0x107e56b6");
L_107e56b7:;
  /* 107e56b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e56b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e56bb jne 0x107e5686 */
  if (!C.zf) goto L_107e5686;
  /* 107e56bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e56c0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e56c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e56c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e56c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e56cd jne 0x107e56d6 */
  if (!C.zf) goto L_107e56d6;
  /* 107e56cf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_107e56d6:;
  /* 107e56d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e56da je 0x107e571a */
  if (C.zf) goto L_107e571a;
L_107e56dc:;
  /* 107e56dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e56df cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e56e6 jne 0x107e56f1 */
  if (!C.zf) goto L_107e56f1;
  /* 107e56e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e56eb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e56ef je 0x107e5712 */
  if (C.zf) goto L_107e5712;
L_107e56f1:;
  /* 107e56f1 push 0x1080b89c */
  push32((uint32_t)(0x1080b89cu));
  /* 107e56f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e56f8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 107e56fd push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5702 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5704 call 0x107e40d0 */
  push32(0x107e5709u); f_107e40d0();
  /* 107e5709 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e570c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e570f jne 0x107e5712 */
  if (!C.zf) goto L_107e5712;
  /* 107e5711 int3  */
  x86_unimpl("int3 @ 0x107e5711");
L_107e5712:;
  /* 107e5712 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5714 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e5716 jne 0x107e56dc */
  if (!C.zf) goto L_107e56dc;
  /* 107e5718 jmp 0x107e577e */
  goto L_107e577e;
L_107e571a:;
  /* 107e571a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e571d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e5720 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e5725 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5728 jne 0x107e573f */
  if (!C.zf) goto L_107e573f;
  /* 107e572a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e572d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e5733 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5736 jne 0x107e573f */
  if (!C.zf) goto L_107e573f;
  /* 107e5738 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_107e573f:;
  /* 107e573f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e5742 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e5745 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e574a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e574d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e5753 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5755 je 0x107e5778 */
  if (C.zf) goto L_107e5778;
  /* 107e5757 push 0x1080b860 */
  push32((uint32_t)(0x1080b860u));
  /* 107e575c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e575e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 107e5763 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5768 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e576a call 0x107e40d0 */
  push32(0x107e576fu); f_107e40d0();
  /* 107e576f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5772 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5775 jne 0x107e5778 */
  if (!C.zf) goto L_107e5778;
  /* 107e5777 int3  */
  x86_unimpl("int3 @ 0x107e5777");
L_107e5778:;
  /* 107e5778 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e577a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e577c jne 0x107e573f */
  if (!C.zf) goto L_107e573f;
L_107e577e:;
  /* 107e577e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5782 je 0x107e57a9 */
  if (C.zf) goto L_107e57a9;
  /* 107e5784 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5787 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e578a push eax */
  push32((uint32_t)(EAX));
  /* 107e578b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e578e push ecx */
  push32((uint32_t)(ECX));
  /* 107e578f call 0x107e8f90 */
  push32(0x107e5794u); f_107e8f90();
  /* 107e5794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5797 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e579a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e579e jne 0x107e57a7 */
  if (!C.zf) goto L_107e57a7;
  /* 107e57a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e57a2 jmp 0x107e59ea */
  goto L_107e59ea;
L_107e57a7:;
  /* 107e57a7 jmp 0x107e57cc */
  goto L_107e57cc;
L_107e57a9:;
  /* 107e57a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e57ac add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e57af push edx */
  push32((uint32_t)(EDX));
  /* 107e57b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e57b3 push eax */
  push32((uint32_t)(EAX));
  /* 107e57b4 call 0x107e8ee0 */
  push32(0x107e57b9u); f_107e8ee0();
  /* 107e57b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e57bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e57bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e57c3 jne 0x107e57cc */
  if (!C.zf) goto L_107e57cc;
  /* 107e57c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e57c7 jmp 0x107e59ea */
  goto L_107e59ea;
L_107e57cc:;
  /* 107e57cc mov ecx, dword ptr [0x1080ea88] */
  ECX = (r32((uint32_t)(0x1080ea88)));
  /* 107e57d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e57d5 mov dword ptr [0x1080ea88], ecx */
  w32((uint32_t)(0x1080ea88), (ECX));
  /* 107e57db cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e57df jne 0x107e5837 */
  if (!C.zf) goto L_107e5837;
  /* 107e57e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e57e4 mov eax, dword ptr [0x10810650] */
  EAX = (r32((uint32_t)(0x10810650)));
  /* 107e57e9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e57ec mov dword ptr [0x10810650], eax */
  w32((uint32_t)(0x10810650), (EAX));
  /* 107e57f1 mov ecx, dword ptr [0x10810650] */
  ECX = (r32((uint32_t)(0x10810650)));
  /* 107e57f7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e57fa mov dword ptr [0x10810650], ecx */
  w32((uint32_t)(0x10810650), (ECX));
  /* 107e5800 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e5803 mov eax, dword ptr [0x10810658] */
  EAX = (r32((uint32_t)(0x10810658)));
  /* 107e5808 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e580b mov dword ptr [0x10810658], eax */
  w32((uint32_t)(0x10810658), (EAX));
  /* 107e5810 mov ecx, dword ptr [0x10810658] */
  ECX = (r32((uint32_t)(0x10810658)));
  /* 107e5816 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5819 mov dword ptr [0x10810658], ecx */
  w32((uint32_t)(0x10810658), (ECX));
  /* 107e581f mov edx, dword ptr [0x10810658] */
  EDX = (r32((uint32_t)(0x10810658)));
  /* 107e5825 cmp edx, dword ptr [0x1081065c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1081065c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e582b jbe 0x107e5837 */
  if ((C.cf||C.zf)) goto L_107e5837;
  /* 107e582d mov eax, dword ptr [0x10810658] */
  EAX = (r32((uint32_t)(0x10810658)));
  /* 107e5832 mov dword ptr [0x1081065c], eax */
  w32((uint32_t)(0x1081065c), (EAX));
L_107e5837:;
  /* 107e5837 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e583a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e583d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107e5840 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e5843 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5846 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5849 jbe 0x107e586f */
  if ((C.cf||C.zf)) goto L_107e586f;
  /* 107e584b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e584e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5851 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e5854 push edx */
  push32((uint32_t)(EDX));
  /* 107e5855 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5857 mov al, byte ptr [0x1080ea92] */
  AL = (r8((uint32_t)(0x1080ea92)));
  /* 107e585c push eax */
  push32((uint32_t)(EAX));
  /* 107e585d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e5860 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5863 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5866 push edx */
  push32((uint32_t)(EDX));
  /* 107e5867 call 0x107e8d80 */
  push32(0x107e586cu); f_107e8d80();
  /* 107e586c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e586f:;
  /* 107e586f push 4 */
  push32((uint32_t)(0x4u));
  /* 107e5871 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5873 mov al, byte ptr [0x1080ea90] */
  AL = (r8((uint32_t)(0x1080ea90)));
  /* 107e5878 push eax */
  push32((uint32_t)(EAX));
  /* 107e5879 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e587c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e587f push ecx */
  push32((uint32_t)(ECX));
  /* 107e5880 call 0x107e8d80 */
  push32(0x107e5885u); f_107e8d80();
  /* 107e5885 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5888 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e588c jne 0x107e58a9 */
  if (!C.zf) goto L_107e58a9;
  /* 107e588e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e5891 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e5894 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107e5897 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e589a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e589d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 107e58a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e58a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e58a6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_107e58a9:;
  /* 107e58a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e58ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e58af mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_107e58b2:;
  /* 107e58b2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e58b6 jne 0x107e58e7 */
  if (!C.zf) goto L_107e58e7;
  /* 107e58b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e58bc jne 0x107e58c6 */
  if (!C.zf) goto L_107e58c6;
  /* 107e58be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e58c1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e58c4 je 0x107e58e7 */
  if (C.zf) goto L_107e58e7;
L_107e58c6:;
  /* 107e58c6 push 0x1080b82c */
  push32((uint32_t)(0x1080b82cu));
  /* 107e58cb push 0 */
  push32((uint32_t)(0x0u));
  /* 107e58cd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 107e58d2 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e58d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e58d9 call 0x107e40d0 */
  push32(0x107e58deu); f_107e40d0();
  /* 107e58de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e58e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e58e4 jne 0x107e58e7 */
  if (!C.zf) goto L_107e58e7;
  /* 107e58e6 int3  */
  x86_unimpl("int3 @ 0x107e58e6");
L_107e58e7:;
  /* 107e58e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e58e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e58eb jne 0x107e58b2 */
  if (!C.zf) goto L_107e58b2;
  /* 107e58ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e58f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e58f3 je 0x107e58fb */
  if (C.zf) goto L_107e58fb;
  /* 107e58f5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e58f9 je 0x107e5903 */
  if (C.zf) goto L_107e5903;
L_107e58fb:;
  /* 107e58fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e58fe jmp 0x107e59ea */
  goto L_107e59ea;
L_107e5903:;
  /* 107e5903 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e5906 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5909 je 0x107e591b */
  if (C.zf) goto L_107e591b;
  /* 107e590b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e590e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e5910 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e5913 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107e5916 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107e5919 jmp 0x107e5957 */
  goto L_107e5957;
L_107e591b:;
  /* 107e591b mov eax, dword ptr [0x1081064c] */
  EAX = (r32((uint32_t)(0x1081064c)));
  /* 107e5920 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5923 je 0x107e5946 */
  if (C.zf) goto L_107e5946;
  /* 107e5925 push 0x1080b810 */
  push32((uint32_t)(0x1080b810u));
  /* 107e592a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e592c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 107e5931 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5936 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5938 call 0x107e40d0 */
  push32(0x107e593du); f_107e40d0();
  /* 107e593d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5940 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5943 jne 0x107e5946 */
  if (!C.zf) goto L_107e5946;
  /* 107e5945 int3  */
  x86_unimpl("int3 @ 0x107e5945");
L_107e5946:;
  /* 107e5946 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5948 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e594a jne 0x107e591b */
  if (!C.zf) goto L_107e591b;
  /* 107e594c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e594f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107e5952 mov dword ptr [0x1081064c], eax */
  w32((uint32_t)(0x1081064c), (EAX));
L_107e5957:;
  /* 107e5957 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e595a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e595e je 0x107e596f */
  if (C.zf) goto L_107e596f;
  /* 107e5960 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e5963 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107e5966 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e5969 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e596b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107e596d jmp 0x107e59aa */
  goto L_107e59aa;
L_107e596f:;
  /* 107e596f mov eax, dword ptr [0x10810654] */
  EAX = (r32((uint32_t)(0x10810654)));
  /* 107e5974 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5977 je 0x107e599a */
  if (C.zf) goto L_107e599a;
  /* 107e5979 push 0x1080b7f4 */
  push32((uint32_t)(0x1080b7f4u));
  /* 107e597e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5980 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 107e5985 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e598a push 2 */
  push32((uint32_t)(0x2u));
  /* 107e598c call 0x107e40d0 */
  push32(0x107e5991u); f_107e40d0();
  /* 107e5991 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5994 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5997 jne 0x107e599a */
  if (!C.zf) goto L_107e599a;
  /* 107e5999 int3  */
  x86_unimpl("int3 @ 0x107e5999");
L_107e599a:;
  /* 107e599a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e599c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e599e jne 0x107e596f */
  if (!C.zf) goto L_107e596f;
  /* 107e59a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e59a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e59a5 mov dword ptr [0x10810654], eax */
  w32((uint32_t)(0x10810654), (EAX));
L_107e59aa:;
  /* 107e59aa cmp dword ptr [0x10810654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e59b1 je 0x107e59c1 */
  if (C.zf) goto L_107e59c1;
  /* 107e59b3 mov ecx, dword ptr [0x10810654] */
  ECX = (r32((uint32_t)(0x10810654)));
  /* 107e59b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e59bc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 107e59bf jmp 0x107e59c9 */
  goto L_107e59c9;
L_107e59c1:;
  /* 107e59c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e59c4 mov dword ptr [0x1081064c], eax */
  w32((uint32_t)(0x1081064c), (EAX));
L_107e59c9:;
  /* 107e59c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e59cc mov edx, dword ptr [0x10810654] */
  EDX = (r32((uint32_t)(0x10810654)));
  /* 107e59d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107e59d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e59d7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 107e59de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e59e1 mov dword ptr [0x10810654], ecx */
  w32((uint32_t)(0x10810654), (ECX));
  /* 107e59e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107e59ea:;
  /* 107e59ea pop edi */
  EDI = (pop32());
  /* 107e59eb pop esi */
  ESI = (pop32());
  /* 107e59ec pop ebx */
  EBX = (pop32());
  /* 107e59ed mov esp, ebp */
  ESP = (EBP);
  /* 107e59ef pop ebp */
  EBP = (pop32());
  /* 107e59f0 ret  */
  ESPCHK(0x107e54e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a00 @ 0x107e5a00 (27 bytes, 13 insns) */
void f_107e5a00(void) {
  FTRACE(0x107e5a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5a00 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5a01 mov ebp, esp */
  EBP = (ESP);
  /* 107e5a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5a07 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5a09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5a0c push eax */
  push32((uint32_t)(EAX));
  /* 107e5a0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5a10 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5a11 call 0x107e5a20 */
  push32(0x107e5a16u); f_107e5a20();
  /* 107e5a16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5a19 pop ebp */
  EBP = (pop32());
  /* 107e5a1a ret  */
  ESPCHK(0x107e5a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a20 @ 0x107e5a20 (64 bytes, 27 insns) */
void f_107e5a20(void) {
  FTRACE(0x107e5a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5a20 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5a21 mov ebp, esp */
  EBP = (ESP);
  /* 107e5a23 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5a24 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e5a26 call 0x107e8a10 */
  push32(0x107e5a2bu); f_107e8a10();
  /* 107e5a2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5a30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e5a33 push eax */
  push32((uint32_t)(EAX));
  /* 107e5a34 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e5a37 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5a38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e5a3b push edx */
  push32((uint32_t)(EDX));
  /* 107e5a3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5a3f push eax */
  push32((uint32_t)(EAX));
  /* 107e5a40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5a43 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5a44 call 0x107e54e0 */
  push32(0x107e5a49u); f_107e54e0();
  /* 107e5a49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5a4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e5a4f push 9 */
  push32((uint32_t)(0x9u));
  /* 107e5a51 call 0x107e8ab0 */
  push32(0x107e5a56u); f_107e8ab0();
  /* 107e5a56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5a59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5a5c mov esp, ebp */
  ESP = (EBP);
  /* 107e5a5e pop ebp */
  EBP = (pop32());
  /* 107e5a5f ret  */
  ESPCHK(0x107e5a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a60 @ 0x107e5a60 (19 bytes, 9 insns) */
void f_107e5a60(void) {
  FTRACE(0x107e5a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5a60 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5a61 mov ebp, esp */
  EBP = (ESP);
  /* 107e5a63 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5a65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5a68 push eax */
  push32((uint32_t)(EAX));
  /* 107e5a69 call 0x107e5aa0 */
  push32(0x107e5a6eu); f_107e5aa0();
  /* 107e5a6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5a71 pop ebp */
  EBP = (pop32());
  /* 107e5a72 ret  */
  ESPCHK(0x107e5a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a80 @ 0x107e5a80 (19 bytes, 9 insns) */
void f_107e5a80(void) {
  FTRACE(0x107e5a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5a80 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5a81 mov ebp, esp */
  EBP = (ESP);
  /* 107e5a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5a85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5a88 push eax */
  push32((uint32_t)(EAX));
  /* 107e5a89 call 0x107e5ad0 */
  push32(0x107e5a8eu); f_107e5ad0();
  /* 107e5a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5a91 pop ebp */
  EBP = (pop32());
  /* 107e5a92 ret  */
  ESPCHK(0x107e5a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005aa0 @ 0x107e5aa0 (41 bytes, 16 insns) */
void f_107e5aa0(void) {
  FTRACE(0x107e5aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5aa1 mov ebp, esp */
  EBP = (ESP);
  /* 107e5aa3 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e5aa5 call 0x107e8a10 */
  push32(0x107e5aaau); f_107e8a10();
  /* 107e5aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5aad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5ab0 push eax */
  push32((uint32_t)(EAX));
  /* 107e5ab1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5ab5 call 0x107e5ad0 */
  push32(0x107e5abau); f_107e5ad0();
  /* 107e5aba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5abd push 9 */
  push32((uint32_t)(0x9u));
  /* 107e5abf call 0x107e8ab0 */
  push32(0x107e5ac4u); f_107e8ab0();
  /* 107e5ac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5ac7 pop ebp */
  EBP = (pop32());
  /* 107e5ac8 ret  */
  ESPCHK(0x107e5aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ad0 @ 0x107e5ad0 (1004 bytes, 342 insns) */
void f_107e5ad0(void) {
  FTRACE(0x107e5ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5ad1 mov ebp, esp */
  EBP = (ESP);
  /* 107e5ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5ad4 push ebx */
  push32((uint32_t)(EBX));
  /* 107e5ad5 push esi */
  push32((uint32_t)(ESI));
  /* 107e5ad6 push edi */
  push32((uint32_t)(EDI));
  /* 107e5ad7 mov eax, dword ptr [0x1080ea84] */
  EAX = (r32((uint32_t)(0x1080ea84)));
  /* 107e5adc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107e5adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5ae1 je 0x107e5b13 */
  if (C.zf) goto L_107e5b13;
L_107e5ae3:;
  /* 107e5ae3 call 0x107e61b0 */
  push32(0x107e5ae8u); f_107e61b0();
  /* 107e5ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5aea jne 0x107e5b0d */
  if (!C.zf) goto L_107e5b0d;
  /* 107e5aec push 0x1080b7e0 */
  push32((uint32_t)(0x1080b7e0u));
  /* 107e5af1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5af3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 107e5af8 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5afd push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5aff call 0x107e40d0 */
  push32(0x107e5b04u); f_107e40d0();
  /* 107e5b04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5b07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5b0a jne 0x107e5b0d */
  if (!C.zf) goto L_107e5b0d;
  /* 107e5b0c int3  */
  x86_unimpl("int3 @ 0x107e5b0c");
L_107e5b0d:;
  /* 107e5b0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5b0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e5b11 jne 0x107e5ae3 */
  if (!C.zf) goto L_107e5ae3;
L_107e5b13:;
  /* 107e5b13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5b17 jne 0x107e5b1e */
  if (!C.zf) goto L_107e5b1e;
  /* 107e5b19 jmp 0x107e5eb5 */
  goto L_107e5eb5;
L_107e5b1e:;
  /* 107e5b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5b24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e5b27 push edx */
  push32((uint32_t)(EDX));
  /* 107e5b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5b2d push eax */
  push32((uint32_t)(EAX));
  /* 107e5b2e push 3 */
  push32((uint32_t)(0x3u));
  /* 107e5b30 call dword ptr [0x1080ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1080ec90))), 0x107e5b36u);
  /* 107e5b36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5b39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5b3b jne 0x107e5b68 */
  if (!C.zf) goto L_107e5b68;
L_107e5b3d:;
  /* 107e5b3d push 0x1080baa4 */
  push32((uint32_t)(0x1080baa4u));
  /* 107e5b42 push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e5b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5b4f call 0x107e40d0 */
  push32(0x107e5b54u); f_107e40d0();
  /* 107e5b54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5b57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5b5a jne 0x107e5b5d */
  if (!C.zf) goto L_107e5b5d;
  /* 107e5b5c int3  */
  x86_unimpl("int3 @ 0x107e5b5c");
L_107e5b5d:;
  /* 107e5b5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5b5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e5b61 jne 0x107e5b3d */
  if (!C.zf) goto L_107e5b3d;
  /* 107e5b63 jmp 0x107e5eb5 */
  goto L_107e5eb5;
L_107e5b68:;
  /* 107e5b68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5b6b push edx */
  push32((uint32_t)(EDX));
  /* 107e5b6c call 0x107e6610 */
  push32(0x107e5b71u); f_107e6610();
  /* 107e5b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5b76 jne 0x107e5b99 */
  if (!C.zf) goto L_107e5b99;
  /* 107e5b78 push 0x1080b8e4 */
  push32((uint32_t)(0x1080b8e4u));
  /* 107e5b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5b7f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 107e5b84 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5b89 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5b8b call 0x107e40d0 */
  push32(0x107e5b90u); f_107e40d0();
  /* 107e5b90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5b93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5b96 jne 0x107e5b99 */
  if (!C.zf) goto L_107e5b99;
  /* 107e5b98 int3  */
  x86_unimpl("int3 @ 0x107e5b98");
L_107e5b99:;
  /* 107e5b99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5b9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5b9d jne 0x107e5b68 */
  if (!C.zf) goto L_107e5b68;
  /* 107e5b9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5ba2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e5ba5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107e5ba8:;
  /* 107e5ba8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5bab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e5bae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e5bb3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5bb6 je 0x107e5bfb */
  if (C.zf) goto L_107e5bfb;
  /* 107e5bb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5bbb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5bbf je 0x107e5bfb */
  if (C.zf) goto L_107e5bfb;
  /* 107e5bc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5bc4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e5bc7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e5bcc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5bcf je 0x107e5bfb */
  if (C.zf) goto L_107e5bfb;
  /* 107e5bd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5bd4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5bd8 je 0x107e5bfb */
  if (C.zf) goto L_107e5bfb;
  /* 107e5bda push 0x1080ba7c */
  push32((uint32_t)(0x1080ba7cu));
  /* 107e5bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5be1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 107e5be6 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5beb push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5bed call 0x107e40d0 */
  push32(0x107e5bf2u); f_107e40d0();
  /* 107e5bf2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5bf5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5bf8 jne 0x107e5bfb */
  if (!C.zf) goto L_107e5bfb;
  /* 107e5bfa int3  */
  x86_unimpl("int3 @ 0x107e5bfa");
L_107e5bfb:;
  /* 107e5bfb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e5bfd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e5bff jne 0x107e5ba8 */
  if (!C.zf) goto L_107e5ba8;
  /* 107e5c01 mov eax, dword ptr [0x1080ea84] */
  EAX = (r32((uint32_t)(0x1080ea84)));
  /* 107e5c06 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107e5c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5c0b jne 0x107e5cd6 */
  if (!C.zf) goto L_107e5cd6;
  /* 107e5c11 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e5c13 mov cl, byte ptr [0x1080ea90] */
  CL = (r8((uint32_t)(0x1080ea90)));
  /* 107e5c19 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5c1d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5c20 push edx */
  push32((uint32_t)(EDX));
  /* 107e5c21 call 0x107e6120 */
  push32(0x107e5c26u); f_107e6120();
  /* 107e5c26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5c2b jne 0x107e5c70 */
  if (!C.zf) goto L_107e5c70;
L_107e5c2d:;
  /* 107e5c2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5c30 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5c33 push eax */
  push32((uint32_t)(EAX));
  /* 107e5c34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5c37 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107e5c3a push edx */
  push32((uint32_t)(EDX));
  /* 107e5c3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5c3e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107e5c41 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e5c47 mov edx, dword ptr [ecx*4 + 0x1080ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1080ea94)));
  /* 107e5c4e push edx */
  push32((uint32_t)(EDX));
  /* 107e5c4f push 0x1080ba50 */
  push32((uint32_t)(0x1080ba50u));
  /* 107e5c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5c5a push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5c5c call 0x107e40d0 */
  push32(0x107e5c61u); f_107e40d0();
  /* 107e5c61 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5c64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5c67 jne 0x107e5c6a */
  if (!C.zf) goto L_107e5c6a;
  /* 107e5c69 int3  */
  x86_unimpl("int3 @ 0x107e5c69");
L_107e5c6a:;
  /* 107e5c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5c6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5c6e jne 0x107e5c2d */
  if (!C.zf) goto L_107e5c2d;
L_107e5c70:;
  /* 107e5c70 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e5c72 mov cl, byte ptr [0x1080ea90] */
  CL = (r8((uint32_t)(0x1080ea90)));
  /* 107e5c78 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5c79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5c7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107e5c7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5c82 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 107e5c86 push edx */
  push32((uint32_t)(EDX));
  /* 107e5c87 call 0x107e6120 */
  push32(0x107e5c8cu); f_107e6120();
  /* 107e5c8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5c8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5c91 jne 0x107e5cd6 */
  if (!C.zf) goto L_107e5cd6;
L_107e5c93:;
  /* 107e5c93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5c96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5c99 push eax */
  push32((uint32_t)(EAX));
  /* 107e5c9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5c9d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107e5ca0 push edx */
  push32((uint32_t)(EDX));
  /* 107e5ca1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5ca4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107e5ca7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e5cad mov edx, dword ptr [ecx*4 + 0x1080ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1080ea94)));
  /* 107e5cb4 push edx */
  push32((uint32_t)(EDX));
  /* 107e5cb5 push 0x1080ba24 */
  push32((uint32_t)(0x1080ba24u));
  /* 107e5cba push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5cc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5cc2 call 0x107e40d0 */
  push32(0x107e5cc7u); f_107e40d0();
  /* 107e5cc7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5cca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5ccd jne 0x107e5cd0 */
  if (!C.zf) goto L_107e5cd0;
  /* 107e5ccf int3  */
  x86_unimpl("int3 @ 0x107e5ccf");
L_107e5cd0:;
  /* 107e5cd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5cd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5cd4 jne 0x107e5c93 */
  if (!C.zf) goto L_107e5c93;
L_107e5cd6:;
  /* 107e5cd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5cd9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5cdd jne 0x107e5d4b */
  if (!C.zf) goto L_107e5d4b;
L_107e5cdf:;
  /* 107e5cdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5ce2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5ce9 jne 0x107e5cf4 */
  if (!C.zf) goto L_107e5cf4;
  /* 107e5ceb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5cee cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5cf2 je 0x107e5d15 */
  if (C.zf) goto L_107e5d15;
L_107e5cf4:;
  /* 107e5cf4 push 0x1080b9e4 */
  push32((uint32_t)(0x1080b9e4u));
  /* 107e5cf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5cfb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 107e5d00 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5d05 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5d07 call 0x107e40d0 */
  push32(0x107e5d0cu); f_107e40d0();
  /* 107e5d0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5d0f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5d12 jne 0x107e5d15 */
  if (!C.zf) goto L_107e5d15;
  /* 107e5d14 int3  */
  x86_unimpl("int3 @ 0x107e5d14");
L_107e5d15:;
  /* 107e5d15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5d17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e5d19 jne 0x107e5cdf */
  if (!C.zf) goto L_107e5cdf;
  /* 107e5d1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5d1e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107e5d21 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5d24 push eax */
  push32((uint32_t)(EAX));
  /* 107e5d25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5d27 mov cl, byte ptr [0x1080ea91] */
  CL = (r8((uint32_t)(0x1080ea91)));
  /* 107e5d2d push ecx */
  push32((uint32_t)(ECX));
  /* 107e5d2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5d31 push edx */
  push32((uint32_t)(EDX));
  /* 107e5d32 call 0x107e8d80 */
  push32(0x107e5d37u); f_107e8d80();
  /* 107e5d37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5d3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5d3d push eax */
  push32((uint32_t)(EAX));
  /* 107e5d3e call 0x107e9180 */
  push32(0x107e5d43u); f_107e9180();
  /* 107e5d43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5d46 jmp 0x107e5eb5 */
  goto L_107e5eb5;
L_107e5d4b:;
  /* 107e5d4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5d4e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5d52 jne 0x107e5d61 */
  if (!C.zf) goto L_107e5d61;
  /* 107e5d54 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5d58 jne 0x107e5d61 */
  if (!C.zf) goto L_107e5d61;
  /* 107e5d5a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_107e5d61:;
  /* 107e5d61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5d64 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e5d67 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5d6a je 0x107e5d8d */
  if (C.zf) goto L_107e5d8d;
  /* 107e5d6c push 0x1080b9c4 */
  push32((uint32_t)(0x1080b9c4u));
  /* 107e5d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5d73 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 107e5d78 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5d7d push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5d7f call 0x107e40d0 */
  push32(0x107e5d84u); f_107e40d0();
  /* 107e5d84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5d87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5d8a jne 0x107e5d8d */
  if (!C.zf) goto L_107e5d8d;
  /* 107e5d8c int3  */
  x86_unimpl("int3 @ 0x107e5d8c");
L_107e5d8d:;
  /* 107e5d8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5d8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e5d91 jne 0x107e5d61 */
  if (!C.zf) goto L_107e5d61;
  /* 107e5d93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5d96 mov eax, dword ptr [0x10810658] */
  EAX = (r32((uint32_t)(0x10810658)));
  /* 107e5d9b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e5d9e mov dword ptr [0x10810658], eax */
  w32((uint32_t)(0x10810658), (EAX));
  /* 107e5da3 mov ecx, dword ptr [0x1080ea84] */
  ECX = (r32((uint32_t)(0x1080ea84)));
  /* 107e5da9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 107e5dac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e5dae jne 0x107e5e8c */
  if (!C.zf) goto L_107e5e8c;
  /* 107e5db4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5db7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5dba je 0x107e5dcc */
  if (C.zf) goto L_107e5dcc;
  /* 107e5dbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5dbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e5dc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5dc4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107e5dc7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107e5dca jmp 0x107e5e0a */
  goto L_107e5e0a;
L_107e5dcc:;
  /* 107e5dcc mov ecx, dword ptr [0x1081064c] */
  ECX = (r32((uint32_t)(0x1081064c)));
  /* 107e5dd2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5dd5 je 0x107e5df8 */
  if (C.zf) goto L_107e5df8;
  /* 107e5dd7 push 0x1080b9ac */
  push32((uint32_t)(0x1080b9acu));
  /* 107e5ddc push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5dde push 0x42a */
  push32((uint32_t)(0x42au));
  /* 107e5de3 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5de8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5dea call 0x107e40d0 */
  push32(0x107e5defu); f_107e40d0();
  /* 107e5def add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5df2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5df5 jne 0x107e5df8 */
  if (!C.zf) goto L_107e5df8;
  /* 107e5df7 int3  */
  x86_unimpl("int3 @ 0x107e5df7");
L_107e5df8:;
  /* 107e5df8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e5dfa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e5dfc jne 0x107e5dcc */
  if (!C.zf) goto L_107e5dcc;
  /* 107e5dfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5e01 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e5e04 mov dword ptr [0x1081064c], ecx */
  w32((uint32_t)(0x1081064c), (ECX));
L_107e5e0a:;
  /* 107e5e0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5e0d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5e11 je 0x107e5e22 */
  if (C.zf) goto L_107e5e22;
  /* 107e5e13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5e16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e5e19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5e1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e5e1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107e5e20 jmp 0x107e5e5f */
  goto L_107e5e5f;
L_107e5e22:;
  /* 107e5e22 mov ecx, dword ptr [0x10810654] */
  ECX = (r32((uint32_t)(0x10810654)));
  /* 107e5e28 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5e2b je 0x107e5e4e */
  if (C.zf) goto L_107e5e4e;
  /* 107e5e2d push 0x1080b994 */
  push32((uint32_t)(0x1080b994u));
  /* 107e5e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5e34 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 107e5e39 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5e3e push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5e40 call 0x107e40d0 */
  push32(0x107e5e45u); f_107e40d0();
  /* 107e5e45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5e48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5e4b jne 0x107e5e4e */
  if (!C.zf) goto L_107e5e4e;
  /* 107e5e4d int3  */
  x86_unimpl("int3 @ 0x107e5e4d");
L_107e5e4e:;
  /* 107e5e4e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e5e50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e5e52 jne 0x107e5e22 */
  if (!C.zf) goto L_107e5e22;
  /* 107e5e54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5e57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e5e59 mov dword ptr [0x10810654], ecx */
  w32((uint32_t)(0x10810654), (ECX));
L_107e5e5f:;
  /* 107e5e5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5e62 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107e5e65 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5e68 push eax */
  push32((uint32_t)(EAX));
  /* 107e5e69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5e6b mov cl, byte ptr [0x1080ea91] */
  CL = (r8((uint32_t)(0x1080ea91)));
  /* 107e5e71 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5e72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5e75 push edx */
  push32((uint32_t)(EDX));
  /* 107e5e76 call 0x107e8d80 */
  push32(0x107e5e7bu); f_107e8d80();
  /* 107e5e7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5e7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5e81 push eax */
  push32((uint32_t)(EAX));
  /* 107e5e82 call 0x107e9180 */
  push32(0x107e5e87u); f_107e9180();
  /* 107e5e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5e8a jmp 0x107e5eb5 */
  goto L_107e5eb5;
L_107e5e8c:;
  /* 107e5e8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5e8f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 107e5e96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5e99 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107e5e9c push eax */
  push32((uint32_t)(EAX));
  /* 107e5e9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5e9f mov cl, byte ptr [0x1080ea91] */
  CL = (r8((uint32_t)(0x1080ea91)));
  /* 107e5ea5 push ecx */
  push32((uint32_t)(ECX));
  /* 107e5ea6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e5ea9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5eac push edx */
  push32((uint32_t)(EDX));
  /* 107e5ead call 0x107e8d80 */
  push32(0x107e5eb2u); f_107e8d80();
  /* 107e5eb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e5eb5:;
  /* 107e5eb5 pop edi */
  EDI = (pop32());
  /* 107e5eb6 pop esi */
  ESI = (pop32());
  /* 107e5eb7 pop ebx */
  EBX = (pop32());
  /* 107e5eb8 mov esp, ebp */
  ESP = (EBP);
  /* 107e5eba pop ebp */
  EBP = (pop32());
  /* 107e5ebb ret  */
  ESPCHK(0x107e5ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x107e5ec0 (19 bytes, 9 insns) */
void f_107e5ec0(void) {
  FTRACE(0x107e5ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5ec1 mov ebp, esp */
  EBP = (ESP);
  /* 107e5ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e5ec5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5ec8 push eax */
  push32((uint32_t)(EAX));
  /* 107e5ec9 call 0x107e5ee0 */
  push32(0x107e5eceu); f_107e5ee0();
  /* 107e5ece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5ed1 pop ebp */
  EBP = (pop32());
  /* 107e5ed2 ret  */
  ESPCHK(0x107e5ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ee0 @ 0x107e5ee0 (342 bytes, 119 insns) */
void f_107e5ee0(void) {
  FTRACE(0x107e5ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e5ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e5ee1 mov ebp, esp */
  EBP = (ESP);
  /* 107e5ee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e5ee6 push ebx */
  push32((uint32_t)(EBX));
  /* 107e5ee7 push esi */
  push32((uint32_t)(ESI));
  /* 107e5ee8 push edi */
  push32((uint32_t)(EDI));
  /* 107e5ee9 mov eax, dword ptr [0x1080ea84] */
  EAX = (r32((uint32_t)(0x1080ea84)));
  /* 107e5eee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107e5ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5ef3 je 0x107e5f25 */
  if (C.zf) goto L_107e5f25;
L_107e5ef5:;
  /* 107e5ef5 call 0x107e61b0 */
  push32(0x107e5efau); f_107e61b0();
  /* 107e5efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5efc jne 0x107e5f1f */
  if (!C.zf) goto L_107e5f1f;
  /* 107e5efe push 0x1080b7e0 */
  push32((uint32_t)(0x1080b7e0u));
  /* 107e5f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5f05 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 107e5f0a push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5f0f push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5f11 call 0x107e40d0 */
  push32(0x107e5f16u); f_107e40d0();
  /* 107e5f16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5f19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5f1c jne 0x107e5f1f */
  if (!C.zf) goto L_107e5f1f;
  /* 107e5f1e int3  */
  x86_unimpl("int3 @ 0x107e5f1e");
L_107e5f1f:;
  /* 107e5f1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e5f21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e5f23 jne 0x107e5ef5 */
  if (!C.zf) goto L_107e5ef5;
L_107e5f25:;
  /* 107e5f25 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e5f27 call 0x107e8a10 */
  push32(0x107e5f2cu); f_107e8a10();
  /* 107e5f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e5f2f:;
  /* 107e5f2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5f32 push edx */
  push32((uint32_t)(EDX));
  /* 107e5f33 call 0x107e6610 */
  push32(0x107e5f38u); f_107e6610();
  /* 107e5f38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5f3d jne 0x107e5f60 */
  if (!C.zf) goto L_107e5f60;
  /* 107e5f3f push 0x1080b8e4 */
  push32((uint32_t)(0x1080b8e4u));
  /* 107e5f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5f46 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 107e5f4b push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5f50 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5f52 call 0x107e40d0 */
  push32(0x107e5f57u); f_107e40d0();
  /* 107e5f57 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5f5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5f5d jne 0x107e5f60 */
  if (!C.zf) goto L_107e5f60;
  /* 107e5f5f int3  */
  x86_unimpl("int3 @ 0x107e5f5f");
L_107e5f60:;
  /* 107e5f60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e5f62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e5f64 jne 0x107e5f2f */
  if (!C.zf) goto L_107e5f2f;
  /* 107e5f66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e5f69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e5f6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107e5f6f:;
  /* 107e5f6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e5f72 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e5f75 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e5f7a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5f7d je 0x107e5fc2 */
  if (C.zf) goto L_107e5fc2;
  /* 107e5f7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e5f82 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5f86 je 0x107e5fc2 */
  if (C.zf) goto L_107e5fc2;
  /* 107e5f88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e5f8b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e5f8e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e5f93 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5f96 je 0x107e5fc2 */
  if (C.zf) goto L_107e5fc2;
  /* 107e5f98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e5f9b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5f9f je 0x107e5fc2 */
  if (C.zf) goto L_107e5fc2;
  /* 107e5fa1 push 0x1080ba7c */
  push32((uint32_t)(0x1080ba7cu));
  /* 107e5fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5fa8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 107e5fad push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e5fb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e5fb4 call 0x107e40d0 */
  push32(0x107e5fb9u); f_107e40d0();
  /* 107e5fb9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e5fbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5fbf jne 0x107e5fc2 */
  if (!C.zf) goto L_107e5fc2;
  /* 107e5fc1 int3  */
  x86_unimpl("int3 @ 0x107e5fc1");
L_107e5fc2:;
  /* 107e5fc2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e5fc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e5fc6 jne 0x107e5f6f */
  if (!C.zf) goto L_107e5f6f;
  /* 107e5fc8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e5fcb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5fcf jne 0x107e5fde */
  if (!C.zf) goto L_107e5fde;
  /* 107e5fd1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5fd5 jne 0x107e5fde */
  if (!C.zf) goto L_107e5fde;
  /* 107e5fd7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_107e5fde:;
  /* 107e5fde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e5fe1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5fe5 je 0x107e6019 */
  if (C.zf) goto L_107e6019;
L_107e5fe7:;
  /* 107e5fe7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e5fea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e5fed cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e5ff0 je 0x107e6013 */
  if (C.zf) goto L_107e6013;
  /* 107e5ff2 push 0x1080b9c4 */
  push32((uint32_t)(0x1080b9c4u));
  /* 107e5ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e5ff9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 107e5ffe push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e6003 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e6005 call 0x107e40d0 */
  push32(0x107e600au); f_107e40d0();
  /* 107e600a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e600d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6010 jne 0x107e6013 */
  if (!C.zf) goto L_107e6013;
  /* 107e6012 int3  */
  x86_unimpl("int3 @ 0x107e6012");
L_107e6013:;
  /* 107e6013 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e6015 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e6017 jne 0x107e5fe7 */
  if (!C.zf) goto L_107e5fe7;
L_107e6019:;
  /* 107e6019 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e601c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107e601f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e6022 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e6024 call 0x107e8ab0 */
  push32(0x107e6029u); f_107e8ab0();
  /* 107e6029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e602c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e602f pop edi */
  EDI = (pop32());
  /* 107e6030 pop esi */
  ESI = (pop32());
  /* 107e6031 pop ebx */
  EBX = (pop32());
  /* 107e6032 mov esp, ebp */
  ESP = (EBP);
  /* 107e6034 pop ebp */
  EBP = (pop32());
  /* 107e6035 ret  */
  ESPCHK(0x107e5ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006040 @ 0x107e6040 (28 bytes, 11 insns) */
void f_107e6040(void) {
  FTRACE(0x107e6040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6040 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6041 mov ebp, esp */
  EBP = (ESP);
  /* 107e6043 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6044 mov eax, dword ptr [0x1080ea8c] */
  EAX = (r32((uint32_t)(0x1080ea8c)));
  /* 107e6049 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e604c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e604f mov dword ptr [0x1080ea8c], ecx */
  w32((uint32_t)(0x1080ea8c), (ECX));
  /* 107e6055 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6058 mov esp, ebp */
  ESP = (EBP);
  /* 107e605a pop ebp */
  EBP = (pop32());
  /* 107e605b ret  */
  ESPCHK(0x107e6040u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x107e6060 (157 bytes, 59 insns) */
void f_107e6060(void) {
  FTRACE(0x107e6060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6060 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6061 mov ebp, esp */
  EBP = (ESP);
  /* 107e6063 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6064 push ebx */
  push32((uint32_t)(EBX));
  /* 107e6065 push esi */
  push32((uint32_t)(ESI));
  /* 107e6066 push edi */
  push32((uint32_t)(EDI));
  /* 107e6067 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e6069 call 0x107e8a10 */
  push32(0x107e606eu); f_107e8a10();
  /* 107e606e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6071 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6074 push eax */
  push32((uint32_t)(EAX));
  /* 107e6075 call 0x107e6610 */
  push32(0x107e607au); f_107e6610();
  /* 107e607a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e607d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e607f je 0x107e60ec */
  if (C.zf) goto L_107e60ec;
  /* 107e6081 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6084 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6087 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107e608a:;
  /* 107e608a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e608d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e6090 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e6095 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6098 je 0x107e60dd */
  if (C.zf) goto L_107e60dd;
  /* 107e609a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e609d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e60a1 je 0x107e60dd */
  if (C.zf) goto L_107e60dd;
  /* 107e60a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e60a6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e60a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e60ae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e60b1 je 0x107e60dd */
  if (C.zf) goto L_107e60dd;
  /* 107e60b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e60b6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e60ba je 0x107e60dd */
  if (C.zf) goto L_107e60dd;
  /* 107e60bc push 0x1080ba7c */
  push32((uint32_t)(0x1080ba7cu));
  /* 107e60c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e60c3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 107e60c8 push 0x1080b7d4 */
  push32((uint32_t)(0x1080b7d4u));
  /* 107e60cd push 2 */
  push32((uint32_t)(0x2u));
  /* 107e60cf call 0x107e40d0 */
  push32(0x107e60d4u); f_107e40d0();
  /* 107e60d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e60d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e60da jne 0x107e60dd */
  if (!C.zf) goto L_107e60dd;
  /* 107e60dc int3  */
  x86_unimpl("int3 @ 0x107e60dc");
L_107e60dd:;
  /* 107e60dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e60df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e60e1 jne 0x107e608a */
  if (!C.zf) goto L_107e608a;
  /* 107e60e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e60e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e60e9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_107e60ec:;
  /* 107e60ec push 9 */
  push32((uint32_t)(0x9u));
  /* 107e60ee call 0x107e8ab0 */
  push32(0x107e60f3u); f_107e8ab0();
  /* 107e60f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e60f6 pop edi */
  EDI = (pop32());
  /* 107e60f7 pop esi */
  ESI = (pop32());
  /* 107e60f8 pop ebx */
  EBX = (pop32());
  /* 107e60f9 mov esp, ebp */
  ESP = (EBP);
  /* 107e60fb pop ebp */
  EBP = (pop32());
  /* 107e60fc ret  */
  ESPCHK(0x107e6060u, _esp0);
  ESP += 4; return;
}

/* FUN_10006100 @ 0x107e6100 (28 bytes, 11 insns) */
void f_107e6100(void) {
  FTRACE(0x107e6100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6100 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6101 mov ebp, esp */
  EBP = (ESP);
  /* 107e6103 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6104 mov eax, dword ptr [0x1080ec90] */
  EAX = (r32((uint32_t)(0x1080ec90)));
  /* 107e6109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e610c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e610f mov dword ptr [0x1080ec90], ecx */
  w32((uint32_t)(0x1080ec90), (ECX));
  /* 107e6115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6118 mov esp, ebp */
  ESP = (EBP);
  /* 107e611a pop ebp */
  EBP = (pop32());
  /* 107e611b ret  */
  ESPCHK(0x107e6100u, _esp0);
  ESP += 4; return;
}

/* FUN_10006120 @ 0x107e6120 (136 bytes, 55 insns) */
void f_107e6120(void) {
  FTRACE(0x107e6120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6120 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6121 mov ebp, esp */
  EBP = (ESP);
  /* 107e6123 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6124 push ebx */
  push32((uint32_t)(EBX));
  /* 107e6125 push esi */
  push32((uint32_t)(ESI));
  /* 107e6126 push edi */
  push32((uint32_t)(EDI));
  /* 107e6127 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_107e612e:;
  /* 107e612e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e6131 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e6134 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6137 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107e613a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e613c je 0x107e619e */
  if (C.zf) goto L_107e619e;
  /* 107e613e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6141 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e6143 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107e6145 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e6148 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e614e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6151 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6154 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107e6157 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6159 je 0x107e619c */
  if (C.zf) goto L_107e619c;
L_107e615b:;
  /* 107e615b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e615e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e6163 push eax */
  push32((uint32_t)(EAX));
  /* 107e6164 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6167 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e6169 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 107e616c push edx */
  push32((uint32_t)(EDX));
  /* 107e616d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6170 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6173 push eax */
  push32((uint32_t)(EAX));
  /* 107e6174 push 0x1080bac0 */
  push32((uint32_t)(0x1080bac0u));
  /* 107e6179 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e617b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e617d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e617f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6181 call 0x107e40d0 */
  push32(0x107e6186u); f_107e40d0();
  /* 107e6186 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6189 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e618c jne 0x107e618f */
  if (!C.zf) goto L_107e618f;
  /* 107e618e int3  */
  x86_unimpl("int3 @ 0x107e618e");
L_107e618f:;
  /* 107e618f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e6191 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e6193 jne 0x107e615b */
  if (!C.zf) goto L_107e615b;
  /* 107e6195 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107e619c:;
  /* 107e619c jmp 0x107e612e */
  goto L_107e612e;
L_107e619e:;
  /* 107e619e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e61a1 pop edi */
  EDI = (pop32());
  /* 107e61a2 pop esi */
  ESI = (pop32());
  /* 107e61a3 pop ebx */
  EBX = (pop32());
  /* 107e61a4 mov esp, ebp */
  ESP = (EBP);
  /* 107e61a6 pop ebp */
  EBP = (pop32());
  /* 107e61a7 ret  */
  ESPCHK(0x107e6120u, _esp0);
  ESP += 4; return;
}

/* FUN_100061b0 @ 0x107e61b0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_107e61b0(void) {
  FTRACE(0x107e61b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e61b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e61b1 mov ebp, esp */
  EBP = (ESP);
  /* 107e61b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e61b6 push ebx */
  push32((uint32_t)(EBX));
  /* 107e61b7 push esi */
  push32((uint32_t)(ESI));
  /* 107e61b8 push edi */
  push32((uint32_t)(EDI));
  /* 107e61b9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107e61c0 mov eax, dword ptr [0x1080ea84] */
  EAX = (r32((uint32_t)(0x1080ea84)));
  /* 107e61c5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 107e61c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e61ca jne 0x107e61d6 */
  if (!C.zf) goto L_107e61d6;
  /* 107e61cc mov eax, 1 */
  EAX = (0x1u);
  /* 107e61d1 jmp 0x107e6508 */
  goto L_107e6508;
L_107e61d6:;
  /* 107e61d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e61d8 call 0x107e8a10 */
  push32(0x107e61ddu); f_107e8a10();
  /* 107e61dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e61e0 call 0x107e91f0 */
  push32(0x107e61e5u); f_107e91f0();
  /* 107e61e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e61e8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e61ec je 0x107e62f9 */
  if (C.zf) goto L_107e62f9;
  /* 107e61f2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e61f6 je 0x107e62f9 */
  if (C.zf) goto L_107e62f9;
  /* 107e61fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e61ff mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107e6202 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e6205 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6208 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107e620b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e620f ja 0x107e62c2 */
  if ((!C.cf&&!C.zf)) goto L_107e62c2;
  /* 107e6215 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e6218 jmp dword ptr [eax*4 + 0x107e650f] */
  switch (EAX) {
    case 0: goto L_107e629a;
    case 1: goto L_107e6272;
    case 2: goto L_107e624a;
    case 3: goto L_107e621f;
    default: x86_unimpl("switch@0x107e6218 out of table"); return;
  }
L_107e621f:;
  /* 107e621f push 0x1080bc14 */
  push32((uint32_t)(0x1080bc14u));
  /* 107e6224 push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e6229 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e622b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e622d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e622f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6231 call 0x107e40d0 */
  push32(0x107e6236u); f_107e40d0();
  /* 107e6236 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6239 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e623c jne 0x107e623f */
  if (!C.zf) goto L_107e623f;
  /* 107e623e int3  */
  x86_unimpl("int3 @ 0x107e623e");
L_107e623f:;
  /* 107e623f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e6241 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e6243 jne 0x107e621f */
  if (!C.zf) goto L_107e621f;
  /* 107e6245 jmp 0x107e62e8 */
  goto L_107e62e8;
L_107e624a:;
  /* 107e624a push 0x1080bbf0 */
  push32((uint32_t)(0x1080bbf0u));
  /* 107e624f push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e6254 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6256 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6258 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e625a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e625c call 0x107e40d0 */
  push32(0x107e6261u); f_107e40d0();
  /* 107e6261 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6264 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6267 jne 0x107e626a */
  if (!C.zf) goto L_107e626a;
  /* 107e6269 int3  */
  x86_unimpl("int3 @ 0x107e6269");
L_107e626a:;
  /* 107e626a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e626c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e626e jne 0x107e624a */
  if (!C.zf) goto L_107e624a;
  /* 107e6270 jmp 0x107e62e8 */
  goto L_107e62e8;
L_107e6272:;
  /* 107e6272 push 0x1080bbcc */
  push32((uint32_t)(0x1080bbccu));
  /* 107e6277 push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e627c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e627e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6280 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6282 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6284 call 0x107e40d0 */
  push32(0x107e6289u); f_107e40d0();
  /* 107e6289 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e628c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e628f jne 0x107e6292 */
  if (!C.zf) goto L_107e6292;
  /* 107e6291 int3  */
  x86_unimpl("int3 @ 0x107e6291");
L_107e6292:;
  /* 107e6292 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e6294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6296 jne 0x107e6272 */
  if (!C.zf) goto L_107e6272;
  /* 107e6298 jmp 0x107e62e8 */
  goto L_107e62e8;
L_107e629a:;
  /* 107e629a push 0x1080bba8 */
  push32((uint32_t)(0x1080bba8u));
  /* 107e629f push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e62a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e62a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e62a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e62aa push 0 */
  push32((uint32_t)(0x0u));
  /* 107e62ac call 0x107e40d0 */
  push32(0x107e62b1u); f_107e40d0();
  /* 107e62b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e62b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e62b7 jne 0x107e62ba */
  if (!C.zf) goto L_107e62ba;
  /* 107e62b9 int3  */
  x86_unimpl("int3 @ 0x107e62b9");
L_107e62ba:;
  /* 107e62ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e62bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e62be jne 0x107e629a */
  if (!C.zf) goto L_107e629a;
  /* 107e62c0 jmp 0x107e62e8 */
  goto L_107e62e8;
L_107e62c2:;
  /* 107e62c2 push 0x1080bb7c */
  push32((uint32_t)(0x1080bb7cu));
  /* 107e62c7 push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e62cc push 0 */
  push32((uint32_t)(0x0u));
  /* 107e62ce push 0 */
  push32((uint32_t)(0x0u));
  /* 107e62d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e62d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e62d4 call 0x107e40d0 */
  push32(0x107e62d9u); f_107e40d0();
  /* 107e62d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e62dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e62df jne 0x107e62e2 */
  if (!C.zf) goto L_107e62e2;
  /* 107e62e1 int3  */
  x86_unimpl("int3 @ 0x107e62e1");
L_107e62e2:;
  /* 107e62e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e62e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e62e6 jne 0x107e62c2 */
  if (!C.zf) goto L_107e62c2;
L_107e62e8:;
  /* 107e62e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e62ea call 0x107e8ab0 */
  push32(0x107e62efu); f_107e8ab0();
  /* 107e62ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e62f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e62f4 jmp 0x107e6508 */
  goto L_107e6508;
L_107e62f9:;
  /* 107e62f9 mov eax, dword ptr [0x10810654] */
  EAX = (r32((uint32_t)(0x10810654)));
  /* 107e62fe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e6301 jmp 0x107e630b */
  goto L_107e630b;
L_107e6303:;
  /* 107e6303 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6306 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e6308 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107e630b:;
  /* 107e630b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e630f je 0x107e64fb */
  if (C.zf) goto L_107e64fb;
  /* 107e6315 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 107e631c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e631f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107e6322 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e6328 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e632b je 0x107e6350 */
  if (C.zf) goto L_107e6350;
  /* 107e632d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6330 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6334 je 0x107e6350 */
  if (C.zf) goto L_107e6350;
  /* 107e6336 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6339 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107e633c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e6342 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6345 je 0x107e6350 */
  if (C.zf) goto L_107e6350;
  /* 107e6347 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e634a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e634e jne 0x107e6368 */
  if (!C.zf) goto L_107e6368;
L_107e6350:;
  /* 107e6350 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6353 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107e6356 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e635c mov edx, dword ptr [ecx*4 + 0x1080ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1080ea94)));
  /* 107e6363 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107e6366 jmp 0x107e636f */
  goto L_107e636f;
L_107e6368:;
  /* 107e6368 mov dword ptr [ebp - 0x14], 0x1080bb74 */
  w32((uint32_t)(EBP + -0x14), (0x1080bb74u));
L_107e636f:;
  /* 107e636f push 4 */
  push32((uint32_t)(0x4u));
  /* 107e6371 mov al, byte ptr [0x1080ea90] */
  AL = (r8((uint32_t)(0x1080ea90)));
  /* 107e6376 push eax */
  push32((uint32_t)(EAX));
  /* 107e6377 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e637a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e637d push ecx */
  push32((uint32_t)(ECX));
  /* 107e637e call 0x107e6120 */
  push32(0x107e6383u); f_107e6120();
  /* 107e6383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6388 jne 0x107e63c4 */
  if (!C.zf) goto L_107e63c4;
L_107e638a:;
  /* 107e638a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e638d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6390 push edx */
  push32((uint32_t)(EDX));
  /* 107e6391 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6394 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 107e6397 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6398 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e639b push edx */
  push32((uint32_t)(EDX));
  /* 107e639c push 0x1080ba50 */
  push32((uint32_t)(0x1080ba50u));
  /* 107e63a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e63a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e63a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e63a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e63a9 call 0x107e40d0 */
  push32(0x107e63aeu); f_107e40d0();
  /* 107e63ae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e63b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e63b4 jne 0x107e63b7 */
  if (!C.zf) goto L_107e63b7;
  /* 107e63b6 int3  */
  x86_unimpl("int3 @ 0x107e63b6");
L_107e63b7:;
  /* 107e63b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e63b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e63bb jne 0x107e638a */
  if (!C.zf) goto L_107e638a;
  /* 107e63bd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_107e63c4:;
  /* 107e63c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e63c6 mov cl, byte ptr [0x1080ea90] */
  CL = (r8((uint32_t)(0x1080ea90)));
  /* 107e63cc push ecx */
  push32((uint32_t)(ECX));
  /* 107e63cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e63d0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107e63d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e63d6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 107e63da push edx */
  push32((uint32_t)(EDX));
  /* 107e63db call 0x107e6120 */
  push32(0x107e63e0u); f_107e6120();
  /* 107e63e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e63e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e63e5 jne 0x107e6421 */
  if (!C.zf) goto L_107e6421;
L_107e63e7:;
  /* 107e63e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e63ea add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e63ed push eax */
  push32((uint32_t)(EAX));
  /* 107e63ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e63f1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107e63f4 push edx */
  push32((uint32_t)(EDX));
  /* 107e63f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e63f8 push eax */
  push32((uint32_t)(EAX));
  /* 107e63f9 push 0x1080ba24 */
  push32((uint32_t)(0x1080ba24u));
  /* 107e63fe push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6400 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6402 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6404 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6406 call 0x107e40d0 */
  push32(0x107e640bu); f_107e40d0();
  /* 107e640b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e640e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6411 jne 0x107e6414 */
  if (!C.zf) goto L_107e6414;
  /* 107e6413 int3  */
  x86_unimpl("int3 @ 0x107e6413");
L_107e6414:;
  /* 107e6414 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e6416 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e6418 jne 0x107e63e7 */
  if (!C.zf) goto L_107e63e7;
  /* 107e641a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_107e6421:;
  /* 107e6421 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6424 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6428 jne 0x107e647a */
  if (!C.zf) goto L_107e647a;
  /* 107e642a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e642d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e6430 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6431 mov dl, byte ptr [0x1080ea91] */
  DL = (r8((uint32_t)(0x1080ea91)));
  /* 107e6437 push edx */
  push32((uint32_t)(EDX));
  /* 107e6438 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e643b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e643e push eax */
  push32((uint32_t)(EAX));
  /* 107e643f call 0x107e6120 */
  push32(0x107e6444u); f_107e6120();
  /* 107e6444 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6449 jne 0x107e647a */
  if (!C.zf) goto L_107e647a;
L_107e644b:;
  /* 107e644b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e644e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6451 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6452 push 0x1080bb48 */
  push32((uint32_t)(0x1080bb48u));
  /* 107e6457 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6459 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e645b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e645d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e645f call 0x107e40d0 */
  push32(0x107e6464u); f_107e40d0();
  /* 107e6464 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6467 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e646a jne 0x107e646d */
  if (!C.zf) goto L_107e646d;
  /* 107e646c int3  */
  x86_unimpl("int3 @ 0x107e646c");
L_107e646d:;
  /* 107e646d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e646f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e6471 jne 0x107e644b */
  if (!C.zf) goto L_107e644b;
  /* 107e6473 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_107e647a:;
  /* 107e647a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e647e jne 0x107e64f6 */
  if (!C.zf) goto L_107e64f6;
  /* 107e6480 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6483 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6487 je 0x107e64bc */
  if (C.zf) goto L_107e64bc;
L_107e6489:;
  /* 107e6489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e648c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107e648f push edx */
  push32((uint32_t)(EDX));
  /* 107e6490 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6493 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107e6496 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6497 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e649a push edx */
  push32((uint32_t)(EDX));
  /* 107e649b push 0x1080bb28 */
  push32((uint32_t)(0x1080bb28u));
  /* 107e64a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e64a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e64a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e64a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e64a8 call 0x107e40d0 */
  push32(0x107e64adu); f_107e40d0();
  /* 107e64ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e64b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e64b3 jne 0x107e64b6 */
  if (!C.zf) goto L_107e64b6;
  /* 107e64b5 int3  */
  x86_unimpl("int3 @ 0x107e64b5");
L_107e64b6:;
  /* 107e64b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e64b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e64ba jne 0x107e6489 */
  if (!C.zf) goto L_107e6489;
L_107e64bc:;
  /* 107e64bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e64bf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107e64c2 push edx */
  push32((uint32_t)(EDX));
  /* 107e64c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e64c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e64c9 push eax */
  push32((uint32_t)(EAX));
  /* 107e64ca mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e64cd push ecx */
  push32((uint32_t)(ECX));
  /* 107e64ce push 0x1080bafc */
  push32((uint32_t)(0x1080bafcu));
  /* 107e64d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e64d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e64d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e64d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e64db call 0x107e40d0 */
  push32(0x107e64e0u); f_107e40d0();
  /* 107e64e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e64e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e64e6 jne 0x107e64e9 */
  if (!C.zf) goto L_107e64e9;
  /* 107e64e8 int3  */
  x86_unimpl("int3 @ 0x107e64e8");
L_107e64e9:;
  /* 107e64e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e64eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e64ed jne 0x107e64bc */
  if (!C.zf) goto L_107e64bc;
  /* 107e64ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107e64f6:;
  /* 107e64f6 jmp 0x107e6303 */
  goto L_107e6303;
L_107e64fb:;
  /* 107e64fb push 9 */
  push32((uint32_t)(0x9u));
  /* 107e64fd call 0x107e8ab0 */
  push32(0x107e6502u); f_107e8ab0();
  /* 107e6502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107e6508:;
  /* 107e6508 pop edi */
  EDI = (pop32());
  /* 107e6509 pop esi */
  ESI = (pop32());
  /* 107e650a pop ebx */
  EBX = (pop32());
  /* 107e650b mov esp, ebp */
  ESP = (EBP);
  /* 107e650d pop ebp */
  EBP = (pop32());
  /* 107e650e ret  */
  ESPCHK(0x107e61b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006520 @ 0x107e6520 (34 bytes, 13 insns) */
void f_107e6520(void) {
  FTRACE(0x107e6520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6520 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6521 mov ebp, esp */
  EBP = (ESP);
  /* 107e6523 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6524 mov eax, dword ptr [0x1080ea84] */
  EAX = (r32((uint32_t)(0x1080ea84)));
  /* 107e6529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e652c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6530 je 0x107e653b */
  if (C.zf) goto L_107e653b;
  /* 107e6532 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6535 mov dword ptr [0x1080ea84], ecx */
  w32((uint32_t)(0x1080ea84), (ECX));
L_107e653b:;
  /* 107e653b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e653e mov esp, ebp */
  ESP = (EBP);
  /* 107e6540 pop ebp */
  EBP = (pop32());
  /* 107e6541 ret  */
  ESPCHK(0x107e6520u, _esp0);
  ESP += 4; return;
}

/* FUN_10006550 @ 0x107e6550 (103 bytes, 38 insns) */
void f_107e6550(void) {
  FTRACE(0x107e6550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6550 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6551 mov ebp, esp */
  EBP = (ESP);
  /* 107e6553 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6554 mov eax, dword ptr [0x1080ea84] */
  EAX = (r32((uint32_t)(0x1080ea84)));
  /* 107e6559 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 107e655c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e655e jne 0x107e6562 */
  if (!C.zf) goto L_107e6562;
  /* 107e6560 jmp 0x107e65b3 */
  goto L_107e65b3;
L_107e6562:;
  /* 107e6562 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e6564 call 0x107e8a10 */
  push32(0x107e6569u); f_107e8a10();
  /* 107e6569 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e656c mov ecx, dword ptr [0x10810654] */
  ECX = (r32((uint32_t)(0x10810654)));
  /* 107e6572 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107e6575 jmp 0x107e657f */
  goto L_107e657f;
L_107e6577:;
  /* 107e6577 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e657a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e657c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e657f:;
  /* 107e657f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6583 je 0x107e65a9 */
  if (C.zf) goto L_107e65a9;
  /* 107e6585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6588 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107e658b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e6591 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6594 jne 0x107e65a7 */
  if (!C.zf) goto L_107e65a7;
  /* 107e6596 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e6599 push eax */
  push32((uint32_t)(EAX));
  /* 107e659a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e659d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e65a0 push ecx */
  push32((uint32_t)(ECX));
  /* 107e65a1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x107e65a4u);
  /* 107e65a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e65a7:;
  /* 107e65a7 jmp 0x107e6577 */
  goto L_107e6577;
L_107e65a9:;
  /* 107e65a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e65ab call 0x107e8ab0 */
  push32(0x107e65b0u); f_107e8ab0();
  /* 107e65b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e65b3:;
  /* 107e65b3 mov esp, ebp */
  ESP = (EBP);
  /* 107e65b5 pop ebp */
  EBP = (pop32());
  /* 107e65b6 ret  */
  ESPCHK(0x107e6550u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x107e65c0 (75 bytes, 28 insns) */
void f_107e65c0(void) {
  FTRACE(0x107e65c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e65c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e65c1 mov ebp, esp */
  EBP = (ESP);
  /* 107e65c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e65c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e65c8 je 0x107e65fd */
  if (C.zf) goto L_107e65fd;
  /* 107e65ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e65cd push eax */
  push32((uint32_t)(EAX));
  /* 107e65ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e65d1 push ecx */
  push32((uint32_t)(ECX));
  /* 107e65d2 call dword ptr [0x10813374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813374))), 0x107e65d8u);
  /* 107e65d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e65da jne 0x107e65fd */
  if (!C.zf) goto L_107e65fd;
  /* 107e65dc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e65e0 je 0x107e65f4 */
  if (C.zf) goto L_107e65f4;
  /* 107e65e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e65e5 push edx */
  push32((uint32_t)(EDX));
  /* 107e65e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e65e9 push eax */
  push32((uint32_t)(EAX));
  /* 107e65ea call dword ptr [0x10813378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813378))), 0x107e65f0u);
  /* 107e65f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e65f2 jne 0x107e65fd */
  if (!C.zf) goto L_107e65fd;
L_107e65f4:;
  /* 107e65f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107e65fb jmp 0x107e6604 */
  goto L_107e6604;
L_107e65fd:;
  /* 107e65fd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107e6604:;
  /* 107e6604 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6607 mov esp, ebp */
  ESP = (EBP);
  /* 107e6609 pop ebp */
  EBP = (pop32());
  /* 107e660a ret  */
  ESPCHK(0x107e65c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x107e6610 (134 bytes, 50 insns) */
void f_107e6610(void) {
  FTRACE(0x107e6610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6610 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6611 mov ebp, esp */
  EBP = (ESP);
  /* 107e6613 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6614 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6618 jne 0x107e661e */
  if (!C.zf) goto L_107e661e;
  /* 107e661a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e661c jmp 0x107e6692 */
  goto L_107e6692;
L_107e661e:;
  /* 107e661e push 1 */
  push32((uint32_t)(0x1u));
  /* 107e6620 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 107e6622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6625 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6628 push eax */
  push32((uint32_t)(EAX));
  /* 107e6629 call 0x107e65c0 */
  push32(0x107e662eu); f_107e65c0();
  /* 107e662e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6631 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6633 jne 0x107e6639 */
  if (!C.zf) goto L_107e6639;
  /* 107e6635 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e6637 jmp 0x107e6692 */
  goto L_107e6692;
L_107e6639:;
  /* 107e6639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e663c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e663f push ecx */
  push32((uint32_t)(ECX));
  /* 107e6640 call 0x107e9310 */
  push32(0x107e6645u); f_107e9310();
  /* 107e6645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6648 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e664b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e664f je 0x107e6666 */
  if (C.zf) goto L_107e6666;
  /* 107e6651 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6654 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6657 push edx */
  push32((uint32_t)(EDX));
  /* 107e6658 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e665b push eax */
  push32((uint32_t)(EAX));
  /* 107e665c call 0x107e9370 */
  push32(0x107e6661u); f_107e9370();
  /* 107e6661 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6664 jmp 0x107e6692 */
  goto L_107e6692;
L_107e6666:;
  /* 107e6666 mov ecx, dword ptr [0x10810608] */
  ECX = (r32((uint32_t)(0x10810608)));
  /* 107e666c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 107e6672 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e6674 je 0x107e667d */
  if (C.zf) goto L_107e667d;
  /* 107e6676 mov eax, 1 */
  EAX = (0x1u);
  /* 107e667b jmp 0x107e6692 */
  goto L_107e6692;
L_107e667d:;
  /* 107e667d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6680 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6683 push edx */
  push32((uint32_t)(EDX));
  /* 107e6684 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6686 mov eax, dword ptr [0x10811fac] */
  EAX = (r32((uint32_t)(0x10811fac)));
  /* 107e668b push eax */
  push32((uint32_t)(EAX));
  /* 107e668c call dword ptr [0x108133a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133a0))), 0x107e6692u);
L_107e6692:;
  /* 107e6692 mov esp, ebp */
  ESP = (EBP);
  /* 107e6694 pop ebp */
  EBP = (pop32());
  /* 107e6695 ret  */
  ESPCHK(0x107e6610u, _esp0);
  ESP += 4; return;
}

/* FUN_100066a0 @ 0x107e66a0 (227 bytes, 80 insns) */
void f_107e66a0(void) {
  FTRACE(0x107e66a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e66a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e66a1 mov ebp, esp */
  EBP = (ESP);
  /* 107e66a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e66a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e66a7 push eax */
  push32((uint32_t)(EAX));
  /* 107e66a8 call 0x107e6610 */
  push32(0x107e66adu); f_107e6610();
  /* 107e66ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e66b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e66b2 jne 0x107e66bb */
  if (!C.zf) goto L_107e66bb;
  /* 107e66b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e66b6 jmp 0x107e677f */
  goto L_107e677f;
L_107e66bb:;
  /* 107e66bb push 9 */
  push32((uint32_t)(0x9u));
  /* 107e66bd call 0x107e8a10 */
  push32(0x107e66c2u); f_107e8a10();
  /* 107e66c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e66c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e66c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e66cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107e66ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e66d1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e66d4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e66d9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e66dc je 0x107e6700 */
  if (C.zf) goto L_107e6700;
  /* 107e66de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e66e1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e66e5 je 0x107e6700 */
  if (C.zf) goto L_107e6700;
  /* 107e66e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e66ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e66ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e66f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e66f5 je 0x107e6700 */
  if (C.zf) goto L_107e6700;
  /* 107e66f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e66fa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e66fe jne 0x107e6773 */
  if (!C.zf) goto L_107e6773;
L_107e6700:;
  /* 107e6700 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e6702 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e6705 push edx */
  push32((uint32_t)(EDX));
  /* 107e6706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6709 push eax */
  push32((uint32_t)(EAX));
  /* 107e670a call 0x107e65c0 */
  push32(0x107e670fu); f_107e65c0();
  /* 107e670f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6714 je 0x107e6773 */
  if (C.zf) goto L_107e6773;
  /* 107e6716 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6719 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107e671c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e671f jne 0x107e6773 */
  if (!C.zf) goto L_107e6773;
  /* 107e6721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6724 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 107e6727 cmp ecx, dword ptr [0x1080ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1080ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e672d jg 0x107e6773 */
  if ((!C.zf&&C.sf==C.of)) goto L_107e6773;
  /* 107e672f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6733 je 0x107e6740 */
  if (C.zf) goto L_107e6740;
  /* 107e6735 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e6738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e673b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 107e673e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107e6740:;
  /* 107e6740 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6744 je 0x107e6751 */
  if (C.zf) goto L_107e6751;
  /* 107e6746 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e6749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e674c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107e674f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107e6751:;
  /* 107e6751 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6755 je 0x107e6762 */
  if (C.zf) goto L_107e6762;
  /* 107e6757 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e675a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e675d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107e6760 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107e6762:;
  /* 107e6762 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e6764 call 0x107e8ab0 */
  push32(0x107e6769u); f_107e8ab0();
  /* 107e6769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e676c mov eax, 1 */
  EAX = (0x1u);
  /* 107e6771 jmp 0x107e677f */
  goto L_107e677f;
L_107e6773:;
  /* 107e6773 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e6775 call 0x107e8ab0 */
  push32(0x107e677au); f_107e8ab0();
  /* 107e677a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e677d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107e677f:;
  /* 107e677f mov esp, ebp */
  ESP = (EBP);
  /* 107e6781 pop ebp */
  EBP = (pop32());
  /* 107e6782 ret  */
  ESPCHK(0x107e66a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006790 @ 0x107e6790 (28 bytes, 11 insns) */
void f_107e6790(void) {
  FTRACE(0x107e6790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6790 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6791 mov ebp, esp */
  EBP = (ESP);
  /* 107e6793 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6794 mov eax, dword ptr [0x10811fb8] */
  EAX = (r32((uint32_t)(0x10811fb8)));
  /* 107e6799 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e679c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e679f mov dword ptr [0x10811fb8], ecx */
  w32((uint32_t)(0x10811fb8), (ECX));
  /* 107e67a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e67a8 mov esp, ebp */
  ESP = (EBP);
  /* 107e67aa pop ebp */
  EBP = (pop32());
  /* 107e67ab ret  */
  ESPCHK(0x107e6790u, _esp0);
  ESP += 4; return;
}

/* FUN_100067b0 @ 0x107e67b0 (362 bytes, 116 insns) */
void f_107e67b0(void) {
  FTRACE(0x107e67b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e67b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e67b1 mov ebp, esp */
  EBP = (ESP);
  /* 107e67b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e67b6 push ebx */
  push32((uint32_t)(EBX));
  /* 107e67b7 push esi */
  push32((uint32_t)(ESI));
  /* 107e67b8 push edi */
  push32((uint32_t)(EDI));
  /* 107e67b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e67bd jne 0x107e67ea */
  if (!C.zf) goto L_107e67ea;
L_107e67bf:;
  /* 107e67bf push 0x1080bc5c */
  push32((uint32_t)(0x1080bc5cu));
  /* 107e67c4 push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e67c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e67cb push 0 */
  push32((uint32_t)(0x0u));
  /* 107e67cd push 0 */
  push32((uint32_t)(0x0u));
  /* 107e67cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107e67d1 call 0x107e40d0 */
  push32(0x107e67d6u); f_107e40d0();
  /* 107e67d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e67d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e67dc jne 0x107e67df */
  if (!C.zf) goto L_107e67df;
  /* 107e67de int3  */
  x86_unimpl("int3 @ 0x107e67de");
L_107e67df:;
  /* 107e67df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e67e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e67e3 jne 0x107e67bf */
  if (!C.zf) goto L_107e67bf;
  /* 107e67e5 jmp 0x107e6913 */
  goto L_107e6913;
L_107e67ea:;
  /* 107e67ea push 9 */
  push32((uint32_t)(0x9u));
  /* 107e67ec call 0x107e8a10 */
  push32(0x107e67f1u); f_107e8a10();
  /* 107e67f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e67f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e67f7 mov edx, dword ptr [0x10810654] */
  EDX = (r32((uint32_t)(0x10810654)));
  /* 107e67fd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107e67ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107e6806 jmp 0x107e6811 */
  goto L_107e6811;
L_107e6808:;
  /* 107e6808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e680b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e680e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e6811:;
  /* 107e6811 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6815 jge 0x107e6835 */
  if ((C.sf==C.of)) goto L_107e6835;
  /* 107e6817 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e681a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e681d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 107e6825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6828 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e682b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 107e6833 jmp 0x107e6808 */
  goto L_107e6808;
L_107e6835:;
  /* 107e6835 mov edx, dword ptr [0x10810654] */
  EDX = (r32((uint32_t)(0x10810654)));
  /* 107e683b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107e683e jmp 0x107e6848 */
  goto L_107e6848;
L_107e6840:;
  /* 107e6840 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6843 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e6845 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107e6848:;
  /* 107e6848 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e684c je 0x107e68f1 */
  if (C.zf) goto L_107e68f1;
  /* 107e6852 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6855 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e6858 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e685d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e685f jl 0x107e68c7 */
  if ((C.sf!=C.of)) goto L_107e68c7;
  /* 107e6861 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6864 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107e6867 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e686d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6870 jge 0x107e68c7 */
  if ((C.sf==C.of)) goto L_107e68c7;
  /* 107e6872 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6875 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107e6878 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e687e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6881 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 107e6885 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6888 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e688b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107e688e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e6894 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6897 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 107e689b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e689e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e68a1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e68a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e68a9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 107e68ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e68b0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e68b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e68b6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 107e68b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e68be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e68c1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 107e68c5 jmp 0x107e68ec */
  goto L_107e68ec;
L_107e68c7:;
  /* 107e68c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e68ca push edx */
  push32((uint32_t)(EDX));
  /* 107e68cb push 0x1080bc38 */
  push32((uint32_t)(0x1080bc38u));
  /* 107e68d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e68d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e68d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e68d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e68d8 call 0x107e40d0 */
  push32(0x107e68ddu); f_107e40d0();
  /* 107e68dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e68e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e68e3 jne 0x107e68e6 */
  if (!C.zf) goto L_107e68e6;
  /* 107e68e5 int3  */
  x86_unimpl("int3 @ 0x107e68e5");
L_107e68e6:;
  /* 107e68e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e68e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e68ea jne 0x107e68c7 */
  if (!C.zf) goto L_107e68c7;
L_107e68ec:;
  /* 107e68ec jmp 0x107e6840 */
  goto L_107e6840;
L_107e68f1:;
  /* 107e68f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e68f4 mov edx, dword ptr [0x1081065c] */
  EDX = (r32((uint32_t)(0x1081065c)));
  /* 107e68fa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 107e68fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6900 mov ecx, dword ptr [0x10810650] */
  ECX = (r32((uint32_t)(0x10810650)));
  /* 107e6906 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 107e6909 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e690b call 0x107e8ab0 */
  push32(0x107e6910u); f_107e8ab0();
  /* 107e6910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e6913:;
  /* 107e6913 pop edi */
  EDI = (pop32());
  /* 107e6914 pop esi */
  ESI = (pop32());
  /* 107e6915 pop ebx */
  EBX = (pop32());
  /* 107e6916 mov esp, ebp */
  ESP = (EBP);
  /* 107e6918 pop ebp */
  EBP = (pop32());
  /* 107e6919 ret  */
  ESPCHK(0x107e67b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006920 @ 0x107e6920 (291 bytes, 95 insns) */
void f_107e6920(void) {
  FTRACE(0x107e6920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6920 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6921 mov ebp, esp */
  EBP = (ESP);
  /* 107e6923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6926 push ebx */
  push32((uint32_t)(EBX));
  /* 107e6927 push esi */
  push32((uint32_t)(ESI));
  /* 107e6928 push edi */
  push32((uint32_t)(EDI));
  /* 107e6929 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107e6930 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6934 je 0x107e6942 */
  if (C.zf) goto L_107e6942;
  /* 107e6936 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e693a je 0x107e6942 */
  if (C.zf) goto L_107e6942;
  /* 107e693c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6940 jne 0x107e6970 */
  if (!C.zf) goto L_107e6970;
L_107e6942:;
  /* 107e6942 push 0x1080bc84 */
  push32((uint32_t)(0x1080bc84u));
  /* 107e6947 push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e694c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e694e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6950 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6952 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6954 call 0x107e40d0 */
  push32(0x107e6959u); f_107e40d0();
  /* 107e6959 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e695c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e695f jne 0x107e6962 */
  if (!C.zf) goto L_107e6962;
  /* 107e6961 int3  */
  x86_unimpl("int3 @ 0x107e6961");
L_107e6962:;
  /* 107e6962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e6964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6966 jne 0x107e6942 */
  if (!C.zf) goto L_107e6942;
  /* 107e6968 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e696b jmp 0x107e6a3c */
  goto L_107e6a3c;
L_107e6970:;
  /* 107e6970 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107e6977 jmp 0x107e6982 */
  goto L_107e6982;
L_107e6979:;
  /* 107e6979 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e697c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e697f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107e6982:;
  /* 107e6982 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6986 jge 0x107e6a0c */
  if ((C.sf==C.of)) goto L_107e6a0c;
  /* 107e698c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e698f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e6992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6995 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107e6998 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 107e699c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e69a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e69a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e69a6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 107e69aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e69ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e69b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e69b3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107e69b6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 107e69ba sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e69be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e69c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e69c4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 107e69c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e69cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e69ce cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e69d3 jne 0x107e69e2 */
  if (!C.zf) goto L_107e69e2;
  /* 107e69d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e69d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e69db cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e69e0 je 0x107e6a07 */
  if (C.zf) goto L_107e6a07;
L_107e69e2:;
  /* 107e69e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e69e6 je 0x107e6a07 */
  if (C.zf) goto L_107e6a07;
  /* 107e69e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e69ec jne 0x107e6a00 */
  if (!C.zf) goto L_107e6a00;
  /* 107e69ee cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e69f2 jne 0x107e6a07 */
  if (!C.zf) goto L_107e6a07;
  /* 107e69f4 mov eax, dword ptr [0x1080ea84] */
  EAX = (r32((uint32_t)(0x1080ea84)));
  /* 107e69f9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 107e69fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e69fe je 0x107e6a07 */
  if (C.zf) goto L_107e6a07;
L_107e6a00:;
  /* 107e6a00 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_107e6a07:;
  /* 107e6a07 jmp 0x107e6979 */
  goto L_107e6979;
L_107e6a0c:;
  /* 107e6a0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e6a0f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e6a12 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 107e6a15 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6a18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6a1b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 107e6a1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e6a21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e6a24 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 107e6a27 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6a2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6a2d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 107e6a30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6a33 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107e6a39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107e6a3c:;
  /* 107e6a3c pop edi */
  EDI = (pop32());
  /* 107e6a3d pop esi */
  ESI = (pop32());
  /* 107e6a3e pop ebx */
  EBX = (pop32());
  /* 107e6a3f mov esp, ebp */
  ESP = (EBP);
  /* 107e6a41 pop ebp */
  EBP = (pop32());
  /* 107e6a42 ret  */
  ESPCHK(0x107e6920u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a50 @ 0x107e6a50 (697 bytes, 253 insns) */
void f_107e6a50(void) {
  FTRACE(0x107e6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6a50 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6a51 mov ebp, esp */
  EBP = (ESP);
  /* 107e6a53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6a56 push ebx */
  push32((uint32_t)(EBX));
  /* 107e6a57 push esi */
  push32((uint32_t)(ESI));
  /* 107e6a58 push edi */
  push32((uint32_t)(EDI));
  /* 107e6a59 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107e6a60 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e6a62 call 0x107e8a10 */
  push32(0x107e6a67u); f_107e8a10();
  /* 107e6a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e6a6a:;
  /* 107e6a6a push 0x1080bd7c */
  push32((uint32_t)(0x1080bd7cu));
  /* 107e6a6f push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e6a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6a78 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6a7c call 0x107e40d0 */
  push32(0x107e6a81u); f_107e40d0();
  /* 107e6a81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6a84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6a87 jne 0x107e6a8a */
  if (!C.zf) goto L_107e6a8a;
  /* 107e6a89 int3  */
  x86_unimpl("int3 @ 0x107e6a89");
L_107e6a8a:;
  /* 107e6a8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e6a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6a8e jne 0x107e6a6a */
  if (!C.zf) goto L_107e6a6a;
  /* 107e6a90 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6a94 je 0x107e6a9e */
  if (C.zf) goto L_107e6a9e;
  /* 107e6a96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6a99 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e6a9b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107e6a9e:;
  /* 107e6a9e mov eax, dword ptr [0x10810654] */
  EAX = (r32((uint32_t)(0x10810654)));
  /* 107e6aa3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e6aa6 jmp 0x107e6ab0 */
  goto L_107e6ab0;
L_107e6aa8:;
  /* 107e6aa8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6aab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e6aad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107e6ab0:;
  /* 107e6ab0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6ab4 je 0x107e6cd2 */
  if (C.zf) goto L_107e6cd2;
  /* 107e6aba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6abd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6ac0 je 0x107e6cd2 */
  if (C.zf) goto L_107e6cd2;
  /* 107e6ac6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6ac9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107e6acc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e6ad2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6ad5 je 0x107e6b04 */
  if (C.zf) goto L_107e6b04;
  /* 107e6ad7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6ada mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107e6add and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e6ae3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e6ae5 je 0x107e6b04 */
  if (C.zf) goto L_107e6b04;
  /* 107e6ae7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6aea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e6aed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e6af2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6af5 jne 0x107e6b09 */
  if (!C.zf) goto L_107e6b09;
  /* 107e6af7 mov ecx, dword ptr [0x1080ea84] */
  ECX = (r32((uint32_t)(0x1080ea84)));
  /* 107e6afd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 107e6b00 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e6b02 jne 0x107e6b09 */
  if (!C.zf) goto L_107e6b09;
L_107e6b04:;
  /* 107e6b04 jmp 0x107e6ccd */
  goto L_107e6ccd;
L_107e6b09:;
  /* 107e6b09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6b0c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6b10 je 0x107e6b82 */
  if (C.zf) goto L_107e6b82;
  /* 107e6b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b14 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e6b16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6b19 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107e6b1c push ecx */
  push32((uint32_t)(ECX));
  /* 107e6b1d call 0x107e65c0 */
  push32(0x107e6b22u); f_107e65c0();
  /* 107e6b22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6b27 jne 0x107e6b53 */
  if (!C.zf) goto L_107e6b53;
L_107e6b29:;
  /* 107e6b29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6b2c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107e6b2f push eax */
  push32((uint32_t)(EAX));
  /* 107e6b30 push 0x1080bd68 */
  push32((uint32_t)(0x1080bd68u));
  /* 107e6b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b3d call 0x107e40d0 */
  push32(0x107e6b42u); f_107e40d0();
  /* 107e6b42 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6b45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6b48 jne 0x107e6b4b */
  if (!C.zf) goto L_107e6b4b;
  /* 107e6b4a int3  */
  x86_unimpl("int3 @ 0x107e6b4a");
L_107e6b4b:;
  /* 107e6b4b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e6b4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e6b4f jne 0x107e6b29 */
  if (!C.zf) goto L_107e6b29;
  /* 107e6b51 jmp 0x107e6b82 */
  goto L_107e6b82;
L_107e6b53:;
  /* 107e6b53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6b56 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107e6b59 push eax */
  push32((uint32_t)(EAX));
  /* 107e6b5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6b5d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107e6b60 push edx */
  push32((uint32_t)(EDX));
  /* 107e6b61 push 0x1080bd5c */
  push32((uint32_t)(0x1080bd5cu));
  /* 107e6b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b68 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b6e call 0x107e40d0 */
  push32(0x107e6b73u); f_107e40d0();
  /* 107e6b73 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6b76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6b79 jne 0x107e6b7c */
  if (!C.zf) goto L_107e6b7c;
  /* 107e6b7b int3  */
  x86_unimpl("int3 @ 0x107e6b7b");
L_107e6b7c:;
  /* 107e6b7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e6b7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6b80 jne 0x107e6b53 */
  if (!C.zf) goto L_107e6b53;
L_107e6b82:;
  /* 107e6b82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6b85 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107e6b88 push edx */
  push32((uint32_t)(EDX));
  /* 107e6b89 push 0x1080bd54 */
  push32((uint32_t)(0x1080bd54u));
  /* 107e6b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6b96 call 0x107e40d0 */
  push32(0x107e6b9bu); f_107e40d0();
  /* 107e6b9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6b9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6ba1 jne 0x107e6ba4 */
  if (!C.zf) goto L_107e6ba4;
  /* 107e6ba3 int3  */
  x86_unimpl("int3 @ 0x107e6ba3");
L_107e6ba4:;
  /* 107e6ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e6ba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6ba8 jne 0x107e6b82 */
  if (!C.zf) goto L_107e6b82;
  /* 107e6baa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6bad mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107e6bb0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e6bb6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6bb9 jne 0x107e6c2c */
  if (!C.zf) goto L_107e6c2c;
L_107e6bbb:;
  /* 107e6bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6bbe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e6bc1 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6bc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6bc5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e6bc8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107e6bcb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e6bd0 push eax */
  push32((uint32_t)(EAX));
  /* 107e6bd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6bd4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6bd8 push 0x1080bd20 */
  push32((uint32_t)(0x1080bd20u));
  /* 107e6bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6be1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6be5 call 0x107e40d0 */
  push32(0x107e6beau); f_107e40d0();
  /* 107e6bea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6bed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6bf0 jne 0x107e6bf3 */
  if (!C.zf) goto L_107e6bf3;
  /* 107e6bf2 int3  */
  x86_unimpl("int3 @ 0x107e6bf2");
L_107e6bf3:;
  /* 107e6bf3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e6bf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e6bf7 jne 0x107e6bbb */
  if (!C.zf) goto L_107e6bbb;
  /* 107e6bf9 cmp dword ptr [0x10811fb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10811fb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6c00 je 0x107e6c1b */
  if (C.zf) goto L_107e6c1b;
  /* 107e6c02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6c05 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e6c08 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6c09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6c0c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6c0f push edx */
  push32((uint32_t)(EDX));
  /* 107e6c10 call dword ptr [0x10811fb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10811fb8))), 0x107e6c16u);
  /* 107e6c16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6c19 jmp 0x107e6c27 */
  goto L_107e6c27;
L_107e6c1b:;
  /* 107e6c1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6c1e push eax */
  push32((uint32_t)(EAX));
  /* 107e6c1f call 0x107e6d10 */
  push32(0x107e6c24u); f_107e6d10();
  /* 107e6c24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e6c27:;
  /* 107e6c27 jmp 0x107e6ccd */
  goto L_107e6ccd;
L_107e6c2c:;
  /* 107e6c2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6c2f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6c33 jne 0x107e6c72 */
  if (!C.zf) goto L_107e6c72;
L_107e6c35:;
  /* 107e6c35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6c38 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107e6c3b push eax */
  push32((uint32_t)(EAX));
  /* 107e6c3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6c3f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6c42 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6c43 push 0x1080bcf8 */
  push32((uint32_t)(0x1080bcf8u));
  /* 107e6c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6c4c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6c4e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6c50 call 0x107e40d0 */
  push32(0x107e6c55u); f_107e40d0();
  /* 107e6c55 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6c58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6c5b jne 0x107e6c5e */
  if (!C.zf) goto L_107e6c5e;
  /* 107e6c5d int3  */
  x86_unimpl("int3 @ 0x107e6c5d");
L_107e6c5e:;
  /* 107e6c5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e6c60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e6c62 jne 0x107e6c35 */
  if (!C.zf) goto L_107e6c35;
  /* 107e6c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6c67 push eax */
  push32((uint32_t)(EAX));
  /* 107e6c68 call 0x107e6d10 */
  push32(0x107e6c6du); f_107e6d10();
  /* 107e6c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6c70 jmp 0x107e6ccd */
  goto L_107e6ccd;
L_107e6c72:;
  /* 107e6c72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6c75 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107e6c78 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e6c7e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6c81 jne 0x107e6ccd */
  if (!C.zf) goto L_107e6ccd;
L_107e6c83:;
  /* 107e6c83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6c86 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e6c89 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6c8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6c8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107e6c90 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107e6c93 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e6c98 push eax */
  push32((uint32_t)(EAX));
  /* 107e6c99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6c9c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6c9f push ecx */
  push32((uint32_t)(ECX));
  /* 107e6ca0 push 0x1080bcc4 */
  push32((uint32_t)(0x1080bcc4u));
  /* 107e6ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6cab push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6cad call 0x107e40d0 */
  push32(0x107e6cb2u); f_107e40d0();
  /* 107e6cb2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6cb5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6cb8 jne 0x107e6cbb */
  if (!C.zf) goto L_107e6cbb;
  /* 107e6cba int3  */
  x86_unimpl("int3 @ 0x107e6cba");
L_107e6cbb:;
  /* 107e6cbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e6cbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e6cbf jne 0x107e6c83 */
  if (!C.zf) goto L_107e6c83;
  /* 107e6cc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6cc4 push eax */
  push32((uint32_t)(EAX));
  /* 107e6cc5 call 0x107e6d10 */
  push32(0x107e6ccau); f_107e6d10();
  /* 107e6cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e6ccd:;
  /* 107e6ccd jmp 0x107e6aa8 */
  goto L_107e6aa8;
L_107e6cd2:;
  /* 107e6cd2 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e6cd4 call 0x107e8ab0 */
  push32(0x107e6cd9u); f_107e8ab0();
  /* 107e6cd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e6cdc:;
  /* 107e6cdc push 0x1080bcac */
  push32((uint32_t)(0x1080bcacu));
  /* 107e6ce1 push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e6ce6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6ce8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6cea push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6cec push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6cee call 0x107e40d0 */
  push32(0x107e6cf3u); f_107e40d0();
  /* 107e6cf3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6cf6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6cf9 jne 0x107e6cfc */
  if (!C.zf) goto L_107e6cfc;
  /* 107e6cfb int3  */
  x86_unimpl("int3 @ 0x107e6cfb");
L_107e6cfc:;
  /* 107e6cfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e6cfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e6d00 jne 0x107e6cdc */
  if (!C.zf) goto L_107e6cdc;
  /* 107e6d02 pop edi */
  EDI = (pop32());
  /* 107e6d03 pop esi */
  ESI = (pop32());
  /* 107e6d04 pop ebx */
  EBX = (pop32());
  /* 107e6d05 mov esp, ebp */
  ESP = (EBP);
  /* 107e6d07 pop ebp */
  EBP = (pop32());
  /* 107e6d08 ret  */
  ESPCHK(0x107e6a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d10 @ 0x107e6d10 (276 bytes, 89 insns) */
void f_107e6d10(void) {
  FTRACE(0x107e6d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6d10 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6d11 mov ebp, esp */
  EBP = (ESP);
  /* 107e6d13 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6d16 push ebx */
  push32((uint32_t)(EBX));
  /* 107e6d17 push esi */
  push32((uint32_t)(ESI));
  /* 107e6d18 push edi */
  push32((uint32_t)(EDI));
  /* 107e6d19 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 107e6d20 jmp 0x107e6d2b */
  goto L_107e6d2b;
L_107e6d22:;
  /* 107e6d22 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107e6d25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6d28 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_107e6d2b:;
  /* 107e6d2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6d2e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6d32 jge 0x107e6d3f */
  if ((C.sf==C.of)) goto L_107e6d3f;
  /* 107e6d34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6d37 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107e6d3a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 107e6d3d jmp 0x107e6d46 */
  goto L_107e6d46;
L_107e6d3f:;
  /* 107e6d3f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_107e6d46:;
  /* 107e6d46 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107e6d49 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6d4c jge 0x107e6dec */
  if ((C.sf==C.of)) goto L_107e6dec;
  /* 107e6d52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6d55 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6d58 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 107e6d5b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 107e6d5e cmp dword ptr [0x1080eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1080eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6d65 jle 0x107e6d83 */
  if ((C.zf||C.sf!=C.of)) goto L_107e6d83;
  /* 107e6d67 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 107e6d6c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e6d6f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e6d75 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6d76 call 0x107eb020 */
  push32(0x107e6d7bu); f_107eb020();
  /* 107e6d7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6d7e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 107e6d81 jmp 0x107e6da0 */
  goto L_107e6da0;
L_107e6d83:;
  /* 107e6d83 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e6d86 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e6d8c mov eax, dword ptr [0x1080ec98] */
  EAX = (r32((uint32_t)(0x1080ec98)));
  /* 107e6d91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e6d93 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 107e6d97 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 107e6d9d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_107e6da0:;
  /* 107e6da0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6da4 je 0x107e6db4 */
  if (C.zf) goto L_107e6db4;
  /* 107e6da6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e6da9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e6daf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 107e6db2 jmp 0x107e6dbb */
  goto L_107e6dbb;
L_107e6db4:;
  /* 107e6db4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_107e6dbb:;
  /* 107e6dbb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107e6dbe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 107e6dc1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 107e6dc5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107e6dc8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e6dce push edx */
  push32((uint32_t)(EDX));
  /* 107e6dcf push 0x1080bda0 */
  push32((uint32_t)(0x1080bda0u));
  /* 107e6dd4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107e6dd7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e6dda lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 107e6dde push ecx */
  push32((uint32_t)(ECX));
  /* 107e6ddf call 0x107eaf20 */
  push32(0x107e6de4u); f_107eaf20();
  /* 107e6de4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6de7 jmp 0x107e6d22 */
  goto L_107e6d22;
L_107e6dec:;
  /* 107e6dec mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107e6def mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_107e6df4:;
  /* 107e6df4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 107e6df7 push eax */
  push32((uint32_t)(EAX));
  /* 107e6df8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 107e6dfb push ecx */
  push32((uint32_t)(ECX));
  /* 107e6dfc push 0x1080bd90 */
  push32((uint32_t)(0x1080bd90u));
  /* 107e6e01 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6e09 call 0x107e40d0 */
  push32(0x107e6e0eu); f_107e40d0();
  /* 107e6e0e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6e11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6e14 jne 0x107e6e17 */
  if (!C.zf) goto L_107e6e17;
  /* 107e6e16 int3  */
  x86_unimpl("int3 @ 0x107e6e16");
L_107e6e17:;
  /* 107e6e17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e6e19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e6e1b jne 0x107e6df4 */
  if (!C.zf) goto L_107e6df4;
  /* 107e6e1d pop edi */
  EDI = (pop32());
  /* 107e6e1e pop esi */
  ESI = (pop32());
  /* 107e6e1f pop ebx */
  EBX = (pop32());
  /* 107e6e20 mov esp, ebp */
  ESP = (EBP);
  /* 107e6e22 pop ebp */
  EBP = (pop32());
  /* 107e6e23 ret  */
  ESPCHK(0x107e6d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e30 @ 0x107e6e30 (116 bytes, 46 insns) */
void f_107e6e30(void) {
  FTRACE(0x107e6e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6e30 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6e31 mov ebp, esp */
  EBP = (ESP);
  /* 107e6e33 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6e36 push ebx */
  push32((uint32_t)(EBX));
  /* 107e6e37 push esi */
  push32((uint32_t)(ESI));
  /* 107e6e38 push edi */
  push32((uint32_t)(EDI));
  /* 107e6e39 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 107e6e3c push eax */
  push32((uint32_t)(EAX));
  /* 107e6e3d call 0x107e67b0 */
  push32(0x107e6e42u); f_107e67b0();
  /* 107e6e42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6e45 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6e49 jne 0x107e6e64 */
  if (!C.zf) goto L_107e6e64;
  /* 107e6e4b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6e4f jne 0x107e6e64 */
  if (!C.zf) goto L_107e6e64;
  /* 107e6e51 mov ecx, dword ptr [0x1080ea84] */
  ECX = (r32((uint32_t)(0x1080ea84)));
  /* 107e6e57 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 107e6e5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e6e5c je 0x107e6e9b */
  if (C.zf) goto L_107e6e9b;
  /* 107e6e5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6e62 je 0x107e6e9b */
  if (C.zf) goto L_107e6e9b;
L_107e6e64:;
  /* 107e6e64 push 0x1080bda8 */
  push32((uint32_t)(0x1080bda8u));
  /* 107e6e69 push 0x1080b774 */
  push32((uint32_t)(0x1080b774u));
  /* 107e6e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6e72 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6e76 call 0x107e40d0 */
  push32(0x107e6e7bu); f_107e40d0();
  /* 107e6e7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6e7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6e81 jne 0x107e6e84 */
  if (!C.zf) goto L_107e6e84;
  /* 107e6e83 int3  */
  x86_unimpl("int3 @ 0x107e6e83");
L_107e6e84:;
  /* 107e6e84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e6e86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e6e88 jne 0x107e6e64 */
  if (!C.zf) goto L_107e6e64;
  /* 107e6e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6e8c call 0x107e6a50 */
  push32(0x107e6e91u); f_107e6a50();
  /* 107e6e91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6e94 mov eax, 1 */
  EAX = (0x1u);
  /* 107e6e99 jmp 0x107e6e9d */
  goto L_107e6e9d;
L_107e6e9b:;
  /* 107e6e9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107e6e9d:;
  /* 107e6e9d pop edi */
  EDI = (pop32());
  /* 107e6e9e pop esi */
  ESI = (pop32());
  /* 107e6e9f pop ebx */
  EBX = (pop32());
  /* 107e6ea0 mov esp, ebp */
  ESP = (EBP);
  /* 107e6ea2 pop ebp */
  EBP = (pop32());
  /* 107e6ea3 ret  */
  ESPCHK(0x107e6e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eb0 @ 0x107e6eb0 (197 bytes, 79 insns) */
void f_107e6eb0(void) {
  FTRACE(0x107e6eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6eb1 mov ebp, esp */
  EBP = (ESP);
  /* 107e6eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e6eb4 push ebx */
  push32((uint32_t)(EBX));
  /* 107e6eb5 push esi */
  push32((uint32_t)(ESI));
  /* 107e6eb6 push edi */
  push32((uint32_t)(EDI));
  /* 107e6eb7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6ebb jne 0x107e6ec2 */
  if (!C.zf) goto L_107e6ec2;
  /* 107e6ebd jmp 0x107e6f6e */
  goto L_107e6f6e;
L_107e6ec2:;
  /* 107e6ec2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107e6ec9 jmp 0x107e6ed4 */
  goto L_107e6ed4;
L_107e6ecb:;
  /* 107e6ecb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6ece add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6ed1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e6ed4:;
  /* 107e6ed4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6ed8 jge 0x107e6f1e */
  if ((C.sf==C.of)) goto L_107e6f1e;
L_107e6eda:;
  /* 107e6eda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6edd mov edx, dword ptr [ecx*4 + 0x1080ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1080ea94)));
  /* 107e6ee4 push edx */
  push32((uint32_t)(EDX));
  /* 107e6ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6ee8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6eeb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 107e6eef push edx */
  push32((uint32_t)(EDX));
  /* 107e6ef0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6ef3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6ef6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 107e6efa push edx */
  push32((uint32_t)(EDX));
  /* 107e6efb push 0x1080be04 */
  push32((uint32_t)(0x1080be04u));
  /* 107e6f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f06 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f08 call 0x107e40d0 */
  push32(0x107e6f0du); f_107e40d0();
  /* 107e6f0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6f10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6f13 jne 0x107e6f16 */
  if (!C.zf) goto L_107e6f16;
  /* 107e6f15 int3  */
  x86_unimpl("int3 @ 0x107e6f15");
L_107e6f16:;
  /* 107e6f16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e6f18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6f1a jne 0x107e6eda */
  if (!C.zf) goto L_107e6eda;
  /* 107e6f1c jmp 0x107e6ecb */
  goto L_107e6ecb;
L_107e6f1e:;
  /* 107e6f1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6f21 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 107e6f24 push edx */
  push32((uint32_t)(EDX));
  /* 107e6f25 push 0x1080bde0 */
  push32((uint32_t)(0x1080bde0u));
  /* 107e6f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f32 call 0x107e40d0 */
  push32(0x107e6f37u); f_107e40d0();
  /* 107e6f37 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6f3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6f3d jne 0x107e6f40 */
  if (!C.zf) goto L_107e6f40;
  /* 107e6f3f int3  */
  x86_unimpl("int3 @ 0x107e6f3f");
L_107e6f40:;
  /* 107e6f40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e6f42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6f44 jne 0x107e6f1e */
  if (!C.zf) goto L_107e6f1e;
L_107e6f46:;
  /* 107e6f46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e6f49 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 107e6f4c push edx */
  push32((uint32_t)(EDX));
  /* 107e6f4d push 0x1080bdc0 */
  push32((uint32_t)(0x1080bdc0u));
  /* 107e6f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f58 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e6f5a call 0x107e40d0 */
  push32(0x107e6f5fu); f_107e40d0();
  /* 107e6f5f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6f62 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6f65 jne 0x107e6f68 */
  if (!C.zf) goto L_107e6f68;
  /* 107e6f67 int3  */
  x86_unimpl("int3 @ 0x107e6f67");
L_107e6f68:;
  /* 107e6f68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e6f6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e6f6c jne 0x107e6f46 */
  if (!C.zf) goto L_107e6f46;
L_107e6f6e:;
  /* 107e6f6e pop edi */
  EDI = (pop32());
  /* 107e6f6f pop esi */
  ESI = (pop32());
  /* 107e6f70 pop ebx */
  EBX = (pop32());
  /* 107e6f71 mov esp, ebp */
  ESP = (EBP);
  /* 107e6f73 pop ebp */
  EBP = (pop32());
  /* 107e6f74 ret  */
  ESPCHK(0x107e6eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f80 @ 0x107e6f80 (329 bytes, 102 insns) */
void f_107e6f80(void) {
  FTRACE(0x107e6f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e6f80 push ebp */
  push32((uint32_t)(EBP));
  /* 107e6f81 mov ebp, esp */
  EBP = (ESP);
  /* 107e6f83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e6f86 cmp dword ptr [0x10812130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10812130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6f8d jne 0x107e6f94 */
  if (!C.zf) goto L_107e6f94;
  /* 107e6f8f call 0x107eb8c0 */
  push32(0x107e6f94u); f_107eb8c0();
L_107e6f94:;
  /* 107e6f94 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107e6f9b mov eax, dword ptr [0x108105f0] */
  EAX = (r32((uint32_t)(0x108105f0)));
  /* 107e6fa0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e6fa3:;
  /* 107e6fa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6fa6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107e6fa9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e6fab je 0x107e6fd9 */
  if (C.zf) goto L_107e6fd9;
  /* 107e6fad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6fb0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107e6fb3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e6fb6 je 0x107e6fc1 */
  if (C.zf) goto L_107e6fc1;
  /* 107e6fb8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6fbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6fbe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107e6fc1:;
  /* 107e6fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6fc4 push eax */
  push32((uint32_t)(EAX));
  /* 107e6fc5 call 0x107e7e40 */
  push32(0x107e6fcau); f_107e7e40();
  /* 107e6fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6fcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e6fd0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107e6fd4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e6fd7 jmp 0x107e6fa3 */
  goto L_107e6fa3;
L_107e6fd9:;
  /* 107e6fd9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 107e6fdb push 0x1080be24 */
  push32((uint32_t)(0x1080be24u));
  /* 107e6fe0 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e6fe2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e6fe5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 107e6fec push ecx */
  push32((uint32_t)(ECX));
  /* 107e6fed call 0x107e5010 */
  push32(0x107e6ff2u); f_107e5010();
  /* 107e6ff2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e6ff5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e6ff8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e6ffb mov dword ptr [0x10810624], edx */
  w32((uint32_t)(0x10810624), (EDX));
  /* 107e7001 cmp dword ptr [0x10810624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7008 jne 0x107e7014 */
  if (!C.zf) goto L_107e7014;
  /* 107e700a push 9 */
  push32((uint32_t)(0x9u));
  /* 107e700c call 0x107e3f80 */
  push32(0x107e7011u); f_107e3f80();
  /* 107e7011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e7014:;
  /* 107e7014 mov eax, dword ptr [0x108105f0] */
  EAX = (r32((uint32_t)(0x108105f0)));
  /* 107e7019 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e701c jmp 0x107e7027 */
  goto L_107e7027;
L_107e701e:;
  /* 107e701e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7021 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7024 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107e7027:;
  /* 107e7027 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e702a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107e702d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e702f je 0x107e7097 */
  if (C.zf) goto L_107e7097;
  /* 107e7031 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7034 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7035 call 0x107e7e40 */
  push32(0x107e703au); f_107e7e40();
  /* 107e703a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e703d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7040 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107e7043 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7046 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107e7049 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e704c je 0x107e7095 */
  if (C.zf) goto L_107e7095;
  /* 107e704e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 107e7050 push 0x1080be24 */
  push32((uint32_t)(0x1080be24u));
  /* 107e7055 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e7057 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e705a push ecx */
  push32((uint32_t)(ECX));
  /* 107e705b call 0x107e5010 */
  push32(0x107e7060u); f_107e5010();
  /* 107e7060 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7063 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7066 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107e7068 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e706b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e706e jne 0x107e707a */
  if (!C.zf) goto L_107e707a;
  /* 107e7070 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e7072 call 0x107e3f80 */
  push32(0x107e7077u); f_107e3f80();
  /* 107e7077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e707a:;
  /* 107e707a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e707d push ecx */
  push32((uint32_t)(ECX));
  /* 107e707e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7081 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e7083 push eax */
  push32((uint32_t)(EAX));
  /* 107e7084 call 0x107e7fc0 */
  push32(0x107e7089u); f_107e7fc0();
  /* 107e7089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e708c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e708f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7092 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107e7095:;
  /* 107e7095 jmp 0x107e701e */
  goto L_107e701e;
L_107e7097:;
  /* 107e7097 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e7099 mov edx, dword ptr [0x108105f0] */
  EDX = (r32((uint32_t)(0x108105f0)));
  /* 107e709f push edx */
  push32((uint32_t)(EDX));
  /* 107e70a0 call 0x107e5aa0 */
  push32(0x107e70a5u); f_107e5aa0();
  /* 107e70a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e70a8 mov dword ptr [0x108105f0], 0 */
  w32((uint32_t)(0x108105f0), (0x0u));
  /* 107e70b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e70b5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107e70bb mov dword ptr [0x10812120], 1 */
  w32((uint32_t)(0x10812120), (0x1u));
  /* 107e70c5 mov esp, ebp */
  ESP = (EBP);
  /* 107e70c7 pop ebp */
  EBP = (pop32());
  /* 107e70c8 ret  */
  ESPCHK(0x107e6f80u, _esp0);
  ESP += 4; return;
}

/* FUN_100070d0 @ 0x107e70d0 (216 bytes, 69 insns) */
void f_107e70d0(void) {
  FTRACE(0x107e70d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e70d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e70d1 mov ebp, esp */
  EBP = (ESP);
  /* 107e70d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e70d6 cmp dword ptr [0x10812130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10812130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e70dd jne 0x107e70e4 */
  if (!C.zf) goto L_107e70e4;
  /* 107e70df call 0x107eb8c0 */
  push32(0x107e70e4u); f_107eb8c0();
L_107e70e4:;
  /* 107e70e4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 107e70e9 push 0x10810660 */
  push32((uint32_t)(0x10810660u));
  /* 107e70ee push 0 */
  push32((uint32_t)(0x0u));
  /* 107e70f0 call dword ptr [0x10813358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813358))), 0x107e70f6u);
  /* 107e70f6 mov dword ptr [0x10810634], 0x10810660 */
  w32((uint32_t)(0x10810634), (0x10810660u));
  /* 107e7100 mov eax, dword ptr [0x1081214c] */
  EAX = (r32((uint32_t)(0x1081214c)));
  /* 107e7105 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107e7108 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e710a jne 0x107e7117 */
  if (!C.zf) goto L_107e7117;
  /* 107e710c mov edx, dword ptr [0x10810634] */
  EDX = (r32((uint32_t)(0x10810634)));
  /* 107e7112 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107e7115 jmp 0x107e711f */
  goto L_107e711f;
L_107e7117:;
  /* 107e7117 mov eax, dword ptr [0x1081214c] */
  EAX = (r32((uint32_t)(0x1081214c)));
  /* 107e711c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_107e711f:;
  /* 107e711f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e7122 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107e7125 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 107e7128 push edx */
  push32((uint32_t)(EDX));
  /* 107e7129 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 107e712c push eax */
  push32((uint32_t)(EAX));
  /* 107e712d push 0 */
  push32((uint32_t)(0x0u));
  /* 107e712f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e7131 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e7134 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7135 call 0x107e71b0 */
  push32(0x107e713au); f_107e71b0();
  /* 107e713a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e713d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 107e7142 push 0x1080be30 */
  push32((uint32_t)(0x1080be30u));
  /* 107e7147 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e7149 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e714c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e714f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 107e7152 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7153 call 0x107e5010 */
  push32(0x107e7158u); f_107e5010();
  /* 107e7158 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e715b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e715e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7162 jne 0x107e716e */
  if (!C.zf) goto L_107e716e;
  /* 107e7164 push 8 */
  push32((uint32_t)(0x8u));
  /* 107e7166 call 0x107e3f80 */
  push32(0x107e716bu); f_107e3f80();
  /* 107e716b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e716e:;
  /* 107e716e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 107e7171 push edx */
  push32((uint32_t)(EDX));
  /* 107e7172 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 107e7175 push eax */
  push32((uint32_t)(EAX));
  /* 107e7176 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7179 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e717c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 107e717f push eax */
  push32((uint32_t)(EAX));
  /* 107e7180 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7183 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7184 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e7187 push edx */
  push32((uint32_t)(EDX));
  /* 107e7188 call 0x107e71b0 */
  push32(0x107e718du); f_107e71b0();
  /* 107e718d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7190 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7193 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7196 mov dword ptr [0x10810618], eax */
  w32((uint32_t)(0x10810618), (EAX));
  /* 107e719b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e719e mov dword ptr [0x1081061c], ecx */
  w32((uint32_t)(0x1081061c), (ECX));
  /* 107e71a4 mov esp, ebp */
  ESP = (EBP);
  /* 107e71a6 pop ebp */
  EBP = (pop32());
  /* 107e71a7 ret  */
  ESPCHK(0x107e70d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071b0 @ 0x107e71b0 (1060 bytes, 360 insns) */
void f_107e71b0(void) {
  FTRACE(0x107e71b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e71b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e71b1 mov ebp, esp */
  EBP = (ESP);
  /* 107e71b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e71b6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e71b9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107e71bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e71c2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 107e71c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e71cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e71ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e71d2 je 0x107e71e5 */
  if (C.zf) goto L_107e71e5;
  /* 107e71d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e71d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e71da mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107e71dc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e71df add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e71e2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_107e71e5:;
  /* 107e71e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e71e8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107e71eb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e71ee jne 0x107e72bd */
  if (!C.zf) goto L_107e72bd;
L_107e71f4:;
  /* 107e71f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e71f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e71fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e71fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7200 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107e7203 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7206 je 0x107e7282 */
  if (C.zf) goto L_107e7282;
  /* 107e7208 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e720b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107e720e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e7210 je 0x107e7282 */
  if (C.zf) goto L_107e7282;
  /* 107e7212 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7215 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e7217 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107e7219 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e721b mov al, byte ptr [edx + 0x10811e81] */
  AL = (r8((uint32_t)(EDX + 0x10811e81)));
  /* 107e7221 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107e7224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e7226 je 0x107e7257 */
  if (C.zf) goto L_107e7257;
  /* 107e7228 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e722b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e722d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7230 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e7233 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107e7235 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7239 je 0x107e7257 */
  if (C.zf) goto L_107e7257;
  /* 107e723b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e723e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7241 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107e7243 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107e7245 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7248 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e724b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107e724e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7251 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7254 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107e7257:;
  /* 107e7257 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e725a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e725c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e725f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e7262 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107e7264 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7268 je 0x107e727d */
  if (C.zf) goto L_107e727d;
  /* 107e726a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e726d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7270 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107e7272 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107e7274 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7277 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e727a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_107e727d:;
  /* 107e727d jmp 0x107e71f4 */
  goto L_107e71f4;
L_107e7282:;
  /* 107e7282 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e7285 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e7287 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e728a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e728d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107e728f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7293 je 0x107e72a4 */
  if (C.zf) goto L_107e72a4;
  /* 107e7295 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7298 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 107e729b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e729e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e72a1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_107e72a4:;
  /* 107e72a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e72a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107e72aa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e72ad jne 0x107e72b8 */
  if (!C.zf) goto L_107e72b8;
  /* 107e72af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e72b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e72b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107e72b8:;
  /* 107e72b8 jmp 0x107e738c */
  goto L_107e738c;
L_107e72bd:;
  /* 107e72bd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e72c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e72c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e72c5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e72c8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107e72ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e72ce je 0x107e72e3 */
  if (C.zf) goto L_107e72e3;
  /* 107e72d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e72d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e72d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107e72d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107e72da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e72dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e72e0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_107e72e3:;
  /* 107e72e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e72e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107e72e8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 107e72eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e72ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e72f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e72f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e72f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e72fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e72ff mov dl, byte ptr [ecx + 0x10811e81] */
  DL = (r8((uint32_t)(ECX + 0x10811e81)));
  /* 107e7305 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107e7308 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e730a je 0x107e733b */
  if (C.zf) goto L_107e733b;
  /* 107e730c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e730f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e7311 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7314 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e7317 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107e7319 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e731d je 0x107e7332 */
  if (C.zf) goto L_107e7332;
  /* 107e731f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7322 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7325 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107e7327 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107e7329 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e732c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e732f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_107e7332:;
  /* 107e7332 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7335 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7338 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107e733b:;
  /* 107e733b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e733e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e7344 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7347 je 0x107e7367 */
  if (C.zf) goto L_107e7367;
  /* 107e7349 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e734c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e7351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e7353 je 0x107e7367 */
  if (C.zf) goto L_107e7367;
  /* 107e7355 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7358 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e735e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7361 jne 0x107e72bd */
  if (!C.zf) goto L_107e72bd;
L_107e7367:;
  /* 107e7367 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e736a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e7370 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e7372 jne 0x107e737f */
  if (!C.zf) goto L_107e737f;
  /* 107e7374 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7377 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e737a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e737d jmp 0x107e738c */
  goto L_107e738c;
L_107e737f:;
  /* 107e737f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7383 je 0x107e738c */
  if (C.zf) goto L_107e738c;
  /* 107e7385 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7388 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_107e738c:;
  /* 107e738c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_107e7393:;
  /* 107e7393 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7396 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107e7399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e739b je 0x107e73be */
  if (C.zf) goto L_107e73be;
L_107e739d:;
  /* 107e739d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e73a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107e73a3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e73a6 je 0x107e73b3 */
  if (C.zf) goto L_107e73b3;
  /* 107e73a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e73ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107e73ae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e73b1 jne 0x107e73be */
  if (!C.zf) goto L_107e73be;
L_107e73b3:;
  /* 107e73b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e73b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e73b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e73bc jmp 0x107e739d */
  goto L_107e739d;
L_107e73be:;
  /* 107e73be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e73c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107e73c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e73c6 jne 0x107e73cd */
  if (!C.zf) goto L_107e73cd;
  /* 107e73c8 jmp 0x107e75ab */
  goto L_107e75ab;
L_107e73cd:;
  /* 107e73cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e73d1 je 0x107e73e4 */
  if (C.zf) goto L_107e73e4;
  /* 107e73d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e73d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e73d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107e73db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e73de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e73e1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_107e73e4:;
  /* 107e73e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e73e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e73e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e73ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e73ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_107e73f1:;
  /* 107e73f1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 107e73f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_107e73ff:;
  /* 107e73ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7402 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107e7405 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7408 jne 0x107e741e */
  if (!C.zf) goto L_107e741e;
  /* 107e740a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e740d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7410 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107e7413 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e7416 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7419 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107e741c jmp 0x107e73ff */
  goto L_107e73ff;
L_107e741e:;
  /* 107e741e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7421 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107e7424 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7427 jne 0x107e747a */
  if (!C.zf) goto L_107e747a;
  /* 107e7429 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e742c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e742e mov ecx, 2 */
  ECX = (0x2u);
  /* 107e7433 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107e7435 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e7437 jne 0x107e7472 */
  if (!C.zf) goto L_107e7472;
  /* 107e7439 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e743d je 0x107e745f */
  if (C.zf) goto L_107e745f;
  /* 107e743f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7442 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107e7446 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7449 jne 0x107e7456 */
  if (!C.zf) goto L_107e7456;
  /* 107e744b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e744e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7451 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107e7454 jmp 0x107e745d */
  goto L_107e745d;
L_107e7456:;
  /* 107e7456 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107e745d:;
  /* 107e745d jmp 0x107e7466 */
  goto L_107e7466;
L_107e745f:;
  /* 107e745f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107e7466:;
  /* 107e7466 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e7468 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e746c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 107e746f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_107e7472:;
  /* 107e7472 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e7475 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107e7477 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_107e747a:;
  /* 107e747a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e747d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e7480 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7483 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107e7486 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e7488 je 0x107e74ae */
  if (C.zf) goto L_107e74ae;
  /* 107e748a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e748e je 0x107e749f */
  if (C.zf) goto L_107e749f;
  /* 107e7490 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7493 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 107e7496 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7499 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e749c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_107e749f:;
  /* 107e749f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e74a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e74a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e74a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e74aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107e74ac jmp 0x107e747a */
  goto L_107e747a;
L_107e74ae:;
  /* 107e74ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e74b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107e74b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e74b6 je 0x107e74d4 */
  if (C.zf) goto L_107e74d4;
  /* 107e74b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e74bc jne 0x107e74d9 */
  if (!C.zf) goto L_107e74d9;
  /* 107e74be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e74c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107e74c4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e74c7 je 0x107e74d4 */
  if (C.zf) goto L_107e74d4;
  /* 107e74c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e74cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107e74cf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e74d2 jne 0x107e74d9 */
  if (!C.zf) goto L_107e74d9;
L_107e74d4:;
  /* 107e74d4 jmp 0x107e7584 */
  goto L_107e7584;
L_107e74d9:;
  /* 107e74d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e74dd je 0x107e7576 */
  if (C.zf) goto L_107e7576;
  /* 107e74e3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e74e7 je 0x107e753d */
  if (C.zf) goto L_107e753d;
  /* 107e74e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e74ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e74ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107e74f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e74f2 mov cl, byte ptr [eax + 0x10811e81] */
  CL = (r8((uint32_t)(EAX + 0x10811e81)));
  /* 107e74f8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107e74fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e74fd je 0x107e7528 */
  if (C.zf) goto L_107e7528;
  /* 107e74ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7502 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7505 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107e7507 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 107e7509 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e750c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e750f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 107e7512 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7515 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7518 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e751b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e751e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e7520 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7523 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e7526 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107e7528:;
  /* 107e7528 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e752b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e752e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107e7530 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107e7532 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7535 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7538 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107e753b jmp 0x107e7569 */
  goto L_107e7569;
L_107e753d:;
  /* 107e753d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7540 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e7542 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107e7544 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e7546 mov cl, byte ptr [eax + 0x10811e81] */
  CL = (r8((uint32_t)(EAX + 0x10811e81)));
  /* 107e754c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107e754f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e7551 je 0x107e7569 */
  if (C.zf) goto L_107e7569;
  /* 107e7553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7556 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7559 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e755c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e755f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e7561 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7564 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e7567 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107e7569:;
  /* 107e7569 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e756c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e756e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7571 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e7574 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107e7576:;
  /* 107e7576 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7579 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e757c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e757f jmp 0x107e73f1 */
  goto L_107e73f1;
L_107e7584:;
  /* 107e7584 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7588 je 0x107e7599 */
  if (C.zf) goto L_107e7599;
  /* 107e758a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e758d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 107e7590 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7593 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7596 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_107e7599:;
  /* 107e7599 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e759c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e759e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e75a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107e75a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107e75a6 jmp 0x107e7393 */
  goto L_107e7393;
L_107e75ab:;
  /* 107e75ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e75af je 0x107e75c3 */
  if (C.zf) goto L_107e75c3;
  /* 107e75b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e75b4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107e75ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e75bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e75c0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_107e75c3:;
  /* 107e75c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e75c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e75c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e75cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e75ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107e75d0 mov esp, ebp */
  ESP = (EBP);
  /* 107e75d2 pop ebp */
  EBP = (pop32());
  /* 107e75d3 ret  */
  ESPCHK(0x107e71b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100075e0 @ 0x107e75e0 (537 bytes, 173 insns) */
void f_107e75e0(void) {
  FTRACE(0x107e75e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e75e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e75e1 mov ebp, esp */
  EBP = (ESP);
  /* 107e75e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e75e6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 107e75ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 107e75f4 cmp dword ptr [0x10810764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e75fb jne 0x107e763a */
  if (!C.zf) goto L_107e763a;
  /* 107e75fd call dword ptr [0x108133b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133b4))), 0x107e7603u);
  /* 107e7603 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107e7606 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e760a je 0x107e7618 */
  if (C.zf) goto L_107e7618;
  /* 107e760c mov dword ptr [0x10810764], 1 */
  w32((uint32_t)(0x10810764), (0x1u));
  /* 107e7616 jmp 0x107e763a */
  goto L_107e763a;
L_107e7618:;
  /* 107e7618 call dword ptr [0x108133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133b0))), 0x107e761eu);
  /* 107e761e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107e7621 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7625 je 0x107e7633 */
  if (C.zf) goto L_107e7633;
  /* 107e7627 mov dword ptr [0x10810764], 2 */
  w32((uint32_t)(0x10810764), (0x2u));
  /* 107e7631 jmp 0x107e763a */
  goto L_107e763a;
L_107e7633:;
  /* 107e7633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e7635 jmp 0x107e77f5 */
  goto L_107e77f5;
L_107e763a:;
  /* 107e763a cmp dword ptr [0x10810764], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10810764))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7641 jne 0x107e773e */
  if (!C.zf) goto L_107e773e;
  /* 107e7647 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e764b jne 0x107e7663 */
  if (!C.zf) goto L_107e7663;
  /* 107e764d call dword ptr [0x108133b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133b4))), 0x107e7653u);
  /* 107e7653 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107e7656 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e765a jne 0x107e7663 */
  if (!C.zf) goto L_107e7663;
  /* 107e765c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e765e jmp 0x107e77f5 */
  goto L_107e77f5;
L_107e7663:;
  /* 107e7663 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e7666 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107e7669:;
  /* 107e7669 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e766c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e766e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 107e7671 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e7673 je 0x107e7695 */
  if (C.zf) goto L_107e7695;
  /* 107e7675 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7678 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e767b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e767e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7681 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e7683 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 107e7686 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e7688 jne 0x107e7693 */
  if (!C.zf) goto L_107e7693;
  /* 107e768a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e768d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7690 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107e7693:;
  /* 107e7693 jmp 0x107e7669 */
  goto L_107e7669;
L_107e7695:;
  /* 107e7695 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7698 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e769b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 107e769d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e76a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107e76a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e76a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e76a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e76a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e76ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e76ae push edx */
  push32((uint32_t)(EDX));
  /* 107e76af mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e76b2 push eax */
  push32((uint32_t)(EAX));
  /* 107e76b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e76b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e76b7 call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107e76bdu);
  /* 107e76bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107e76c0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e76c4 je 0x107e76e4 */
  if (C.zf) goto L_107e76e4;
  /* 107e76c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 107e76c8 push 0x1080be3c */
  push32((uint32_t)(0x1080be3cu));
  /* 107e76cd push 2 */
  push32((uint32_t)(0x2u));
  /* 107e76cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e76d2 push ecx */
  push32((uint32_t)(ECX));
  /* 107e76d3 call 0x107e5010 */
  push32(0x107e76d8u); f_107e5010();
  /* 107e76d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e76db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107e76de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e76e2 jne 0x107e76f5 */
  if (!C.zf) goto L_107e76f5;
L_107e76e4:;
  /* 107e76e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e76e7 push edx */
  push32((uint32_t)(EDX));
  /* 107e76e8 call dword ptr [0x108133a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133a8))), 0x107e76eeu);
  /* 107e76ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e76f0 jmp 0x107e77f5 */
  goto L_107e77f5;
L_107e76f5:;
  /* 107e76f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e76f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e76f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e76fc push eax */
  push32((uint32_t)(EAX));
  /* 107e76fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e7700 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7701 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7704 push edx */
  push32((uint32_t)(EDX));
  /* 107e7705 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e7708 push eax */
  push32((uint32_t)(EAX));
  /* 107e7709 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e770b push 0 */
  push32((uint32_t)(0x0u));
  /* 107e770d call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107e7713u);
  /* 107e7713 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e7715 jne 0x107e772c */
  if (!C.zf) goto L_107e772c;
  /* 107e7717 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e7719 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e771c push ecx */
  push32((uint32_t)(ECX));
  /* 107e771d call 0x107e5aa0 */
  push32(0x107e7722u); f_107e5aa0();
  /* 107e7722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7725 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_107e772c:;
  /* 107e772c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e772f push edx */
  push32((uint32_t)(EDX));
  /* 107e7730 call dword ptr [0x108133a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133a8))), 0x107e7736u);
  /* 107e7736 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e7739 jmp 0x107e77f5 */
  goto L_107e77f5;
L_107e773e:;
  /* 107e773e cmp dword ptr [0x10810764], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10810764))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7745 jne 0x107e77f3 */
  if (!C.zf) goto L_107e77f3;
  /* 107e774b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e774f jne 0x107e7767 */
  if (!C.zf) goto L_107e7767;
  /* 107e7751 call dword ptr [0x108133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133b0))), 0x107e7757u);
  /* 107e7757 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107e775a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e775e jne 0x107e7767 */
  if (!C.zf) goto L_107e7767;
  /* 107e7760 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e7762 jmp 0x107e77f5 */
  goto L_107e77f5;
L_107e7767:;
  /* 107e7767 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e776a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107e776d:;
  /* 107e776d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7770 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107e7773 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e7775 je 0x107e7795 */
  if (C.zf) goto L_107e7795;
  /* 107e7777 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e777a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e777d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e7780 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7783 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107e7786 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e7788 jne 0x107e7793 */
  if (!C.zf) goto L_107e7793;
  /* 107e778a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e778d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7790 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107e7793:;
  /* 107e7793 jmp 0x107e776d */
  goto L_107e776d;
L_107e7795:;
  /* 107e7795 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7798 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e779b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e779e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107e77a1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 107e77a6 push 0x1080be3c */
  push32((uint32_t)(0x1080be3cu));
  /* 107e77ab push 2 */
  push32((uint32_t)(0x2u));
  /* 107e77ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e77b0 push edx */
  push32((uint32_t)(EDX));
  /* 107e77b1 call 0x107e5010 */
  push32(0x107e77b6u); f_107e5010();
  /* 107e77b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e77b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e77bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e77c0 jne 0x107e77d0 */
  if (!C.zf) goto L_107e77d0;
  /* 107e77c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e77c5 push eax */
  push32((uint32_t)(EAX));
  /* 107e77c6 call dword ptr [0x108133a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133a4))), 0x107e77ccu);
  /* 107e77cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e77ce jmp 0x107e77f5 */
  goto L_107e77f5;
L_107e77d0:;
  /* 107e77d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e77d3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e77d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e77d7 push edx */
  push32((uint32_t)(EDX));
  /* 107e77d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e77db push eax */
  push32((uint32_t)(EAX));
  /* 107e77dc call 0x107eb8f0 */
  push32(0x107e77e1u); f_107eb8f0();
  /* 107e77e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e77e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e77e7 push ecx */
  push32((uint32_t)(ECX));
  /* 107e77e8 call dword ptr [0x108133a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133a4))), 0x107e77eeu);
  /* 107e77ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e77f1 jmp 0x107e77f5 */
  goto L_107e77f5;
L_107e77f3:;
  /* 107e77f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107e77f5:;
  /* 107e77f5 mov esp, ebp */
  ESP = (EBP);
  /* 107e77f7 pop ebp */
  EBP = (pop32());
  /* 107e77f8 ret  */
  ESPCHK(0x107e75e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007800 @ 0x107e7800 (77 bytes, 25 insns) */
void f_107e7800(void) {
  FTRACE(0x107e7800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7800 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7801 mov ebp, esp */
  EBP = (ESP);
  /* 107e7803 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e7805 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107e780a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e780c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7810 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 107e7813 push eax */
  push32((uint32_t)(EAX));
  /* 107e7814 call dword ptr [0x10813398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813398))), 0x107e781au);
  /* 107e781a mov dword ptr [0x10811fac], eax */
  w32((uint32_t)(0x10811fac), (EAX));
  /* 107e781f cmp dword ptr [0x10811fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10811fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7826 jne 0x107e782c */
  if (!C.zf) goto L_107e782c;
  /* 107e7828 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e782a jmp 0x107e784b */
  goto L_107e784b;
L_107e782c:;
  /* 107e782c call 0x107e92b0 */
  push32(0x107e7831u); f_107e92b0();
  /* 107e7831 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e7833 jne 0x107e7846 */
  if (!C.zf) goto L_107e7846;
  /* 107e7835 mov ecx, dword ptr [0x10811fac] */
  ECX = (r32((uint32_t)(0x10811fac)));
  /* 107e783b push ecx */
  push32((uint32_t)(ECX));
  /* 107e783c call dword ptr [0x108133b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133b8))), 0x107e7842u);
  /* 107e7842 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e7844 jmp 0x107e784b */
  goto L_107e784b;
L_107e7846:;
  /* 107e7846 mov eax, 1 */
  EAX = (0x1u);
L_107e784b:;
  /* 107e784b pop ebp */
  EBP = (pop32());
  /* 107e784c ret  */
  ESPCHK(0x107e7800u, _esp0);
  ESP += 4; return;
}

/* FUN_10007850 @ 0x107e7850 (156 bytes, 48 insns) */
void f_107e7850(void) {
  FTRACE(0x107e7850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7850 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7851 mov ebp, esp */
  EBP = (ESP);
  /* 107e7853 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7856 mov eax, dword ptr [0x10811fa8] */
  EAX = (r32((uint32_t)(0x10811fa8)));
  /* 107e785b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e785e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107e7865 jmp 0x107e7870 */
  goto L_107e7870;
L_107e7867:;
  /* 107e7867 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e786a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e786d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107e7870:;
  /* 107e7870 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7873 cmp edx, dword ptr [0x10811fa4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10811fa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7879 jge 0x107e78c6 */
  if ((C.sf==C.of)) goto L_107e78c6;
  /* 107e787b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 107e7880 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 107e7885 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7888 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107e788b push ecx */
  push32((uint32_t)(ECX));
  /* 107e788c call dword ptr [0x10813328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813328))), 0x107e7892u);
  /* 107e7892 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107e7897 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e7899 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e789c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107e789f push eax */
  push32((uint32_t)(EAX));
  /* 107e78a0 call dword ptr [0x10813328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813328))), 0x107e78a6u);
  /* 107e78a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e78a9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107e78ac push edx */
  push32((uint32_t)(EDX));
  /* 107e78ad push 0 */
  push32((uint32_t)(0x0u));
  /* 107e78af mov eax, dword ptr [0x10811fac] */
  EAX = (r32((uint32_t)(0x10811fac)));
  /* 107e78b4 push eax */
  push32((uint32_t)(EAX));
  /* 107e78b5 call dword ptr [0x1081339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081339c))), 0x107e78bbu);
  /* 107e78bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e78be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e78c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107e78c4 jmp 0x107e7867 */
  goto L_107e7867;
L_107e78c6:;
  /* 107e78c6 mov edx, dword ptr [0x10811fa8] */
  EDX = (r32((uint32_t)(0x10811fa8)));
  /* 107e78cc push edx */
  push32((uint32_t)(EDX));
  /* 107e78cd push 0 */
  push32((uint32_t)(0x0u));
  /* 107e78cf mov eax, dword ptr [0x10811fac] */
  EAX = (r32((uint32_t)(0x10811fac)));
  /* 107e78d4 push eax */
  push32((uint32_t)(EAX));
  /* 107e78d5 call dword ptr [0x1081339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081339c))), 0x107e78dbu);
  /* 107e78db mov ecx, dword ptr [0x10811fac] */
  ECX = (r32((uint32_t)(0x10811fac)));
  /* 107e78e1 push ecx */
  push32((uint32_t)(ECX));
  /* 107e78e2 call dword ptr [0x108133b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133b8))), 0x107e78e8u);
  /* 107e78e8 mov esp, ebp */
  ESP = (EBP);
  /* 107e78ea pop ebp */
  EBP = (pop32());
  /* 107e78eb ret  */
  ESPCHK(0x107e7850u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x107e78f0 (73 bytes, 19 insns) */
void f_107e78f0(void) {
  FTRACE(0x107e78f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e78f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e78f1 mov ebp, esp */
  EBP = (ESP);
  /* 107e78f3 cmp dword ptr [0x108105f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108105f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e78fa je 0x107e790e */
  if (C.zf) goto L_107e790e;
  /* 107e78fc cmp dword ptr [0x108105f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108105f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7903 jne 0x107e7937 */
  if (!C.zf) goto L_107e7937;
  /* 107e7905 cmp dword ptr [0x108105fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108105fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e790c jne 0x107e7937 */
  if (!C.zf) goto L_107e7937;
L_107e790e:;
  /* 107e790e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 107e7913 call 0x107e7940 */
  push32(0x107e7918u); f_107e7940();
  /* 107e7918 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e791b cmp dword ptr [0x10810768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7922 je 0x107e792a */
  if (C.zf) goto L_107e792a;
  /* 107e7924 call dword ptr [0x10810768] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810768))), 0x107e792au);
L_107e792a:;
  /* 107e792a push 0xff */
  push32((uint32_t)(0xffu));
  /* 107e792f call 0x107e7940 */
  push32(0x107e7934u); f_107e7940();
  /* 107e7934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e7937:;
  /* 107e7937 pop ebp */
  EBP = (pop32());
  /* 107e7938 ret  */
  ESPCHK(0x107e78f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007940 @ 0x107e7940 (447 bytes, 131 insns) */
void f_107e7940(void) {
  FTRACE(0x107e7940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7940 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7941 mov ebp, esp */
  EBP = (ESP);
  /* 107e7943 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7949 push ebx */
  push32((uint32_t)(EBX));
  /* 107e794a push esi */
  push32((uint32_t)(ESI));
  /* 107e794b push edi */
  push32((uint32_t)(EDI));
  /* 107e794c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107e7953 jmp 0x107e795e */
  goto L_107e795e;
L_107e7955:;
  /* 107e7955 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7958 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e795b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107e795e:;
  /* 107e795e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7962 jae 0x107e7977 */
  if (!C.cf) goto L_107e7977;
  /* 107e7964 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e796a cmp edx, dword ptr [ecx*8 + 0x1080eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1080eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7971 jne 0x107e7975 */
  if (!C.zf) goto L_107e7975;
  /* 107e7973 jmp 0x107e7977 */
  goto L_107e7977;
L_107e7975:;
  /* 107e7975 jmp 0x107e7955 */
  goto L_107e7955;
L_107e7977:;
  /* 107e7977 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e797a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e797d cmp ecx, dword ptr [eax*8 + 0x1080eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1080eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7984 jne 0x107e7af8 */
  if (!C.zf) goto L_107e7af8;
  /* 107e798a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7991 je 0x107e79b4 */
  if (C.zf) goto L_107e79b4;
  /* 107e7993 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7996 mov eax, dword ptr [edx*8 + 0x1080eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1080eab4)));
  /* 107e799d push eax */
  push32((uint32_t)(EAX));
  /* 107e799e push 0 */
  push32((uint32_t)(0x0u));
  /* 107e79a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e79a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e79a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e79a6 call 0x107e40d0 */
  push32(0x107e79abu); f_107e40d0();
  /* 107e79ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e79ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e79b1 jne 0x107e79b4 */
  if (!C.zf) goto L_107e79b4;
  /* 107e79b3 int3  */
  x86_unimpl("int3 @ 0x107e79b3");
L_107e79b4:;
  /* 107e79b4 cmp dword ptr [0x108105f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108105f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e79bb je 0x107e79cf */
  if (C.zf) goto L_107e79cf;
  /* 107e79bd cmp dword ptr [0x108105f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108105f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e79c4 jne 0x107e7a08 */
  if (!C.zf) goto L_107e7a08;
  /* 107e79c6 cmp dword ptr [0x108105fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108105fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e79cd jne 0x107e7a08 */
  if (!C.zf) goto L_107e7a08;
L_107e79cf:;
  /* 107e79cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107e79d1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 107e79d4 push ecx */
  push32((uint32_t)(ECX));
  /* 107e79d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e79d8 mov eax, dword ptr [edx*8 + 0x1080eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1080eab4)));
  /* 107e79df push eax */
  push32((uint32_t)(EAX));
  /* 107e79e0 call 0x107e7e40 */
  push32(0x107e79e5u); f_107e7e40();
  /* 107e79e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e79e8 push eax */
  push32((uint32_t)(EAX));
  /* 107e79e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e79ec mov edx, dword ptr [ecx*8 + 0x1080eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1080eab4)));
  /* 107e79f3 push edx */
  push32((uint32_t)(EDX));
  /* 107e79f4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 107e79f6 call dword ptr [0x1081333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081333c))), 0x107e79fcu);
  /* 107e79fc push eax */
  push32((uint32_t)(EAX));
  /* 107e79fd call dword ptr [0x10813340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813340))), 0x107e7a03u);
  /* 107e7a03 jmp 0x107e7af8 */
  goto L_107e7af8;
L_107e7a08:;
  /* 107e7a08 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7a0f je 0x107e7af8 */
  if (C.zf) goto L_107e7af8;
  /* 107e7a15 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 107e7a1a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 107e7a20 push eax */
  push32((uint32_t)(EAX));
  /* 107e7a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e7a23 call dword ptr [0x10813358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813358))), 0x107e7a29u);
  /* 107e7a29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e7a2b jne 0x107e7a41 */
  if (!C.zf) goto L_107e7a41;
  /* 107e7a2d push 0x1080b6a4 */
  push32((uint32_t)(0x1080b6a4u));
  /* 107e7a32 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 107e7a38 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7a39 call 0x107e7fc0 */
  push32(0x107e7a3eu); f_107e7fc0();
  /* 107e7a3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e7a41:;
  /* 107e7a41 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 107e7a47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107e7a4a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7a4d push eax */
  push32((uint32_t)(EAX));
  /* 107e7a4e call 0x107e7e40 */
  push32(0x107e7a53u); f_107e7e40();
  /* 107e7a53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7a56 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7a59 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7a5c jbe 0x107e7a8a */
  if ((C.cf||C.zf)) goto L_107e7a8a;
  /* 107e7a5e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 107e7a64 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7a65 call 0x107e7e40 */
  push32(0x107e7a6au); f_107e7e40();
  /* 107e7a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7a6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7a70 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 107e7a74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e7a77 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e7a79 push 0x1080b6a0 */
  push32((uint32_t)(0x1080b6a0u));
  /* 107e7a7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7a81 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7a82 call 0x107e8830 */
  push32(0x107e7a87u); f_107e8830();
  /* 107e7a87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e7a8a:;
  /* 107e7a8a push 0x1080c0f8 */
  push32((uint32_t)(0x1080c0f8u));
  /* 107e7a8f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 107e7a95 push edx */
  push32((uint32_t)(EDX));
  /* 107e7a96 call 0x107e7fc0 */
  push32(0x107e7a9bu); f_107e7fc0();
  /* 107e7a9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7a9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7aa1 push eax */
  push32((uint32_t)(EAX));
  /* 107e7aa2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 107e7aa8 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7aa9 call 0x107e7fd0 */
  push32(0x107e7aaeu); f_107e7fd0();
  /* 107e7aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7ab1 push 0x1080b618 */
  push32((uint32_t)(0x1080b618u));
  /* 107e7ab6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 107e7abc push edx */
  push32((uint32_t)(EDX));
  /* 107e7abd call 0x107e7fd0 */
  push32(0x107e7ac2u); f_107e7fd0();
  /* 107e7ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7ac5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7ac8 mov ecx, dword ptr [eax*8 + 0x1080eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1080eab4)));
  /* 107e7acf push ecx */
  push32((uint32_t)(ECX));
  /* 107e7ad0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 107e7ad6 push edx */
  push32((uint32_t)(EDX));
  /* 107e7ad7 call 0x107e7fd0 */
  push32(0x107e7adcu); f_107e7fd0();
  /* 107e7adc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7adf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 107e7ae4 push 0x1080c0d0 */
  push32((uint32_t)(0x1080c0d0u));
  /* 107e7ae9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 107e7aef push eax */
  push32((uint32_t)(EAX));
  /* 107e7af0 call 0x107e8770 */
  push32(0x107e7af5u); f_107e8770();
  /* 107e7af5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e7af8:;
  /* 107e7af8 pop edi */
  EDI = (pop32());
  /* 107e7af9 pop esi */
  ESI = (pop32());
  /* 107e7afa pop ebx */
  EBX = (pop32());
  /* 107e7afb mov esp, ebp */
  ESP = (EBP);
  /* 107e7afd pop ebp */
  EBP = (pop32());
  /* 107e7afe ret  */
  ESPCHK(0x107e7940u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x107e7b00 (80 bytes, 27 insns) */
void f_107e7b00(void) {
  FTRACE(0x107e7b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7b00 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7b01 mov ebp, esp */
  EBP = (ESP);
  /* 107e7b03 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7b04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107e7b0b jmp 0x107e7b16 */
  goto L_107e7b16;
L_107e7b0d:;
  /* 107e7b0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7b10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7b13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e7b16:;
  /* 107e7b16 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7b1a jae 0x107e7b2f */
  if (!C.cf) goto L_107e7b2f;
  /* 107e7b1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7b1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7b22 cmp edx, dword ptr [ecx*8 + 0x1080eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1080eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7b29 jne 0x107e7b2d */
  if (!C.zf) goto L_107e7b2d;
  /* 107e7b2b jmp 0x107e7b2f */
  goto L_107e7b2f;
L_107e7b2d:;
  /* 107e7b2d jmp 0x107e7b0d */
  goto L_107e7b0d;
L_107e7b2f:;
  /* 107e7b2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7b32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7b35 cmp ecx, dword ptr [eax*8 + 0x1080eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1080eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7b3c jne 0x107e7b4a */
  if (!C.zf) goto L_107e7b4a;
  /* 107e7b3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7b41 mov eax, dword ptr [edx*8 + 0x1080eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1080eab4)));
  /* 107e7b48 jmp 0x107e7b4c */
  goto L_107e7b4c;
L_107e7b4a:;
  /* 107e7b4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107e7b4c:;
  /* 107e7b4c mov esp, ebp */
  ESP = (EBP);
  /* 107e7b4e pop ebp */
  EBP = (pop32());
  /* 107e7b4f ret  */
  ESPCHK(0x107e7b00u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x107e7b50 (66 bytes, 28 insns) */
void f_107e7b50(void) {
  FTRACE(0x107e7b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7b50 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7b51 mov ebp, esp */
  EBP = (ESP);
  /* 107e7b53 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7b57 jne 0x107e7b77 */
  if (!C.zf) goto L_107e7b77;
  /* 107e7b59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7b5d jge 0x107e7b77 */
  if ((C.sf==C.of)) goto L_107e7b77;
  /* 107e7b5f push 1 */
  push32((uint32_t)(0x1u));
  /* 107e7b61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7b64 push eax */
  push32((uint32_t)(EAX));
  /* 107e7b65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7b68 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7b69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7b6c push edx */
  push32((uint32_t)(EDX));
  /* 107e7b6d call 0x107e7ba0 */
  push32(0x107e7b72u); f_107e7ba0();
  /* 107e7b72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7b75 jmp 0x107e7b8d */
  goto L_107e7b8d;
L_107e7b77:;
  /* 107e7b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e7b79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7b7c push eax */
  push32((uint32_t)(EAX));
  /* 107e7b7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7b80 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7b81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7b84 push edx */
  push32((uint32_t)(EDX));
  /* 107e7b85 call 0x107e7ba0 */
  push32(0x107e7b8au); f_107e7ba0();
  /* 107e7b8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e7b8d:;
  /* 107e7b8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7b90 pop ebp */
  EBP = (pop32());
  /* 107e7b91 ret  */
  ESPCHK(0x107e7b50u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x107e7ba0 (194 bytes, 71 insns) */
void f_107e7ba0(void) {
  FTRACE(0x107e7ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7ba1 mov ebp, esp */
  EBP = (ESP);
  /* 107e7ba3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7ba6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7ba9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e7bac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7bb0 je 0x107e7bc9 */
  if (C.zf) goto L_107e7bc9;
  /* 107e7bb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7bb5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 107e7bb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7bbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7bbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e7bc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7bc4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107e7bc6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107e7bc9:;
  /* 107e7bc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7bcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107e7bcf:;
  /* 107e7bcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7bd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e7bd4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107e7bd7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107e7bda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7bdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e7bdf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107e7be2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107e7be5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7be9 jbe 0x107e7c01 */
  if ((C.cf||C.zf)) goto L_107e7c01;
  /* 107e7beb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7bee add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7bf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7bf4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107e7bf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7bf9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7bfc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107e7bff jmp 0x107e7c15 */
  goto L_107e7c15;
L_107e7c01:;
  /* 107e7c01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7c04 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7c07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7c0a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107e7c0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7c0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7c12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107e7c15:;
  /* 107e7c15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7c19 ja 0x107e7bcf */
  if ((!C.cf&&!C.zf)) goto L_107e7bcf;
  /* 107e7c1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7c1e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107e7c21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7c24 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7c27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e7c2a:;
  /* 107e7c2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7c2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107e7c2f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 107e7c32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7c35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7c38 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107e7c3a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107e7c3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7c3f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 107e7c42 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 107e7c44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7c47 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7c4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e7c4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7c50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7c53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e7c56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7c59 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7c5c jb 0x107e7c2a */
  if (C.cf) goto L_107e7c2a;
  /* 107e7c5e mov esp, ebp */
  ESP = (EBP);
  /* 107e7c60 pop ebp */
  EBP = (pop32());
  /* 107e7c61 ret  */
  ESPCHK(0x107e7ba0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x107e7c70 (63 bytes, 24 insns) */
void f_107e7c70(void) {
  FTRACE(0x107e7c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7c70 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7c71 mov ebp, esp */
  EBP = (ESP);
  /* 107e7c73 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7c74 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7c78 jne 0x107e7c89 */
  if (!C.zf) goto L_107e7c89;
  /* 107e7c7a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7c7e jge 0x107e7c89 */
  if ((C.sf==C.of)) goto L_107e7c89;
  /* 107e7c80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107e7c87 jmp 0x107e7c90 */
  goto L_107e7c90;
L_107e7c89:;
  /* 107e7c89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107e7c90:;
  /* 107e7c90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7c93 push eax */
  push32((uint32_t)(EAX));
  /* 107e7c94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7c97 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7c98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7c9b push edx */
  push32((uint32_t)(EDX));
  /* 107e7c9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7c9f push eax */
  push32((uint32_t)(EAX));
  /* 107e7ca0 call 0x107e7ba0 */
  push32(0x107e7ca5u); f_107e7ba0();
  /* 107e7ca5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7ca8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7cab mov esp, ebp */
  ESP = (EBP);
  /* 107e7cad pop ebp */
  EBP = (pop32());
  /* 107e7cae ret  */
  ESPCHK(0x107e7c70u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x107e7cb0 (30 bytes, 14 insns) */
void f_107e7cb0(void) {
  FTRACE(0x107e7cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7cb1 mov ebp, esp */
  EBP = (ESP);
  /* 107e7cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e7cb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7cb8 push eax */
  push32((uint32_t)(EAX));
  /* 107e7cb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7cbc push ecx */
  push32((uint32_t)(ECX));
  /* 107e7cbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7cc0 push edx */
  push32((uint32_t)(EDX));
  /* 107e7cc1 call 0x107e7ba0 */
  push32(0x107e7cc6u); f_107e7ba0();
  /* 107e7cc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7cc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7ccc pop ebp */
  EBP = (pop32());
  /* 107e7ccd ret  */
  ESPCHK(0x107e7cb0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x107e7cd0 (72 bytes, 28 insns) */
void f_107e7cd0(void) {
  FTRACE(0x107e7cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7cd1 mov ebp, esp */
  EBP = (ESP);
  /* 107e7cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7cd4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7cd8 jne 0x107e7cf1 */
  if (!C.zf) goto L_107e7cf1;
  /* 107e7cda cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7cde jg 0x107e7cf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_107e7cf1;
  /* 107e7ce0 jl 0x107e7ce8 */
  if ((C.sf!=C.of)) goto L_107e7ce8;
  /* 107e7ce2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7ce6 jae 0x107e7cf1 */
  if (!C.cf) goto L_107e7cf1;
L_107e7ce8:;
  /* 107e7ce8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107e7cef jmp 0x107e7cf8 */
  goto L_107e7cf8;
L_107e7cf1:;
  /* 107e7cf1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107e7cf8:;
  /* 107e7cf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7cfb push eax */
  push32((uint32_t)(EAX));
  /* 107e7cfc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e7cff push ecx */
  push32((uint32_t)(ECX));
  /* 107e7d00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7d03 push edx */
  push32((uint32_t)(EDX));
  /* 107e7d04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7d07 push eax */
  push32((uint32_t)(EAX));
  /* 107e7d08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7d0b push ecx */
  push32((uint32_t)(ECX));
  /* 107e7d0c call 0x107e7d20 */
  push32(0x107e7d11u); f_107e7d20();
  /* 107e7d11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7d14 mov esp, ebp */
  ESP = (EBP);
  /* 107e7d16 pop ebp */
  EBP = (pop32());
  /* 107e7d17 ret  */
  ESPCHK(0x107e7cd0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x107e7d20 (242 bytes, 91 insns) */
void f_107e7d20(void) {
  FTRACE(0x107e7d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7d20 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7d21 mov ebp, esp */
  EBP = (ESP);
  /* 107e7d23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7d26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7d29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e7d2c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7d30 je 0x107e7d54 */
  if (C.zf) goto L_107e7d54;
  /* 107e7d32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7d35 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 107e7d38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7d3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7d3e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e7d41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7d44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107e7d46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7d49 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7d4c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107e7d4e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107e7d51 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_107e7d54:;
  /* 107e7d54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7d57 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107e7d5a:;
  /* 107e7d5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e7d5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e7d5f push ecx */
  push32((uint32_t)(ECX));
  /* 107e7d60 push eax */
  push32((uint32_t)(EAX));
  /* 107e7d61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7d64 push edx */
  push32((uint32_t)(EDX));
  /* 107e7d65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7d68 push eax */
  push32((uint32_t)(EAX));
  /* 107e7d69 call 0x107ebca0 */
  push32(0x107e7d6eu); f_107ebca0();
  /* 107e7d6e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e7d71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e7d74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e7d76 push edx */
  push32((uint32_t)(EDX));
  /* 107e7d77 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7d78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7d7b push eax */
  push32((uint32_t)(EAX));
  /* 107e7d7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7d7f push ecx */
  push32((uint32_t)(ECX));
  /* 107e7d80 call 0x107ebc30 */
  push32(0x107e7d85u); f_107ebc30();
  /* 107e7d85 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107e7d88 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 107e7d8b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7d8f jbe 0x107e7da7 */
  if ((C.cf||C.zf)) goto L_107e7da7;
  /* 107e7d91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7d94 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7d97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7d9a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107e7d9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7d9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7da2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107e7da5 jmp 0x107e7dbb */
  goto L_107e7dbb;
L_107e7da7:;
  /* 107e7da7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e7daa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7dad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7db0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107e7db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7db5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7db8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107e7dbb:;
  /* 107e7dbb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7dbf ja 0x107e7d5a */
  if ((!C.cf&&!C.zf)) goto L_107e7d5a;
  /* 107e7dc1 jb 0x107e7dc9 */
  if (C.cf) goto L_107e7dc9;
  /* 107e7dc3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7dc7 ja 0x107e7d5a */
  if ((!C.cf&&!C.zf)) goto L_107e7d5a;
L_107e7dc9:;
  /* 107e7dc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7dcc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107e7dcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7dd2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7dd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e7dd8:;
  /* 107e7dd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7ddb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107e7ddd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 107e7de0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7de3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7de6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107e7de8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107e7dea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7ded mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 107e7df0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 107e7df2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e7df5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7df8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e7dfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7dfe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7e01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e7e04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e7e07 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7e0a jb 0x107e7dd8 */
  if (C.cf) goto L_107e7dd8;
  /* 107e7e0c mov esp, ebp */
  ESP = (EBP);
  /* 107e7e0e pop ebp */
  EBP = (pop32());
  /* 107e7e0f ret 0x14 */
  ESPCHK(0x107e7d20u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x107e7e20 (31 bytes, 15 insns) */
void f_107e7e20(void) {
  FTRACE(0x107e7e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7e20 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7e21 mov ebp, esp */
  EBP = (ESP);
  /* 107e7e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e7e25 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e7e28 push eax */
  push32((uint32_t)(EAX));
  /* 107e7e29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7e2c push ecx */
  push32((uint32_t)(ECX));
  /* 107e7e2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7e30 push edx */
  push32((uint32_t)(EDX));
  /* 107e7e31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7e34 push eax */
  push32((uint32_t)(EAX));
  /* 107e7e35 call 0x107e7d20 */
  push32(0x107e7e3au); f_107e7d20();
  /* 107e7e3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7e3d pop ebp */
  EBP = (pop32());
  /* 107e7e3e ret  */
  ESPCHK(0x107e7e20u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x107e7e40 (123 bytes, 44 insns) */
void f_107e7e40(void) {
  FTRACE(0x107e7e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7e40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107e7e44 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107e7e4a je 0x107e7e60 */
  if (C.zf) goto L_107e7e60;
L_107e7e4c:;
  /* 107e7e4c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 107e7e4e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 107e7e4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107e7e51 je 0x107e7e93 */
  if (C.zf) goto L_107e7e93;
  /* 107e7e53 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107e7e59 jne 0x107e7e4c */
  if (!C.zf) goto L_107e7e4c;
  /* 107e7e5b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_107e7e60:;
  /* 107e7e60 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 107e7e62 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 107e7e67 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7e69 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e7e6c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107e7e6e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7e71 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 107e7e76 je 0x107e7e60 */
  if (C.zf) goto L_107e7e60;
  /* 107e7e78 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 107e7e7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107e7e7d je 0x107e7eb1 */
  if (C.zf) goto L_107e7eb1;
  /* 107e7e7f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 107e7e81 je 0x107e7ea7 */
  if (C.zf) goto L_107e7ea7;
  /* 107e7e83 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 107e7e88 je 0x107e7e9d */
  if (C.zf) goto L_107e7e9d;
  /* 107e7e8a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 107e7e8f je 0x107e7e93 */
  if (C.zf) goto L_107e7e93;
  /* 107e7e91 jmp 0x107e7e60 */
  goto L_107e7e60;
L_107e7e93:;
  /* 107e7e93 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 107e7e96 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107e7e9a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7e9c ret  */
  ESPCHK(0x107e7e40u, _esp0);
  ESP += 4; return;
L_107e7e9d:;
  /* 107e7e9d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 107e7ea0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107e7ea4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7ea6 ret  */
  ESPCHK(0x107e7e40u, _esp0);
  ESP += 4; return;
L_107e7ea7:;
  /* 107e7ea7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 107e7eaa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107e7eae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7eb0 ret  */
  ESPCHK(0x107e7e40u, _esp0);
  ESP += 4; return;
L_107e7eb1:;
  /* 107e7eb1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 107e7eb4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107e7eb8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7eba ret  */
  ESPCHK(0x107e7e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec0 @ 0x107e7ec0 (249 bytes, 93 insns) */
void f_107e7ec0(void) {
  FTRACE(0x107e7ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e7ec1 mov ebp, esp */
  EBP = (ESP);
  /* 107e7ec3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 107e7ec7 push esi */
  push32((uint32_t)(ESI));
  /* 107e7ec8 push edi */
  push32((uint32_t)(EDI));
  /* 107e7ec9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 107e7ecc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107e7ecf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 107e7ed2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_107e7ed5:;
  /* 107e7ed5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7ed9 jne 0x107e7ef9 */
  if (!C.zf) goto L_107e7ef9;
  /* 107e7edb push 0x1080c130 */
  push32((uint32_t)(0x1080c130u));
  /* 107e7ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e7ee2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 107e7ee4 push 0x1080c124 */
  push32((uint32_t)(0x1080c124u));
  /* 107e7ee9 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e7eeb call 0x107e40d0 */
  push32(0x107e7ef0u); f_107e40d0();
  /* 107e7ef0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7ef3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7ef6 jne 0x107e7ef9 */
  if (!C.zf) goto L_107e7ef9;
  /* 107e7ef8 int3  */
  x86_unimpl("int3 @ 0x107e7ef8");
L_107e7ef9:;
  /* 107e7ef9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e7efb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e7efd jne 0x107e7ed5 */
  if (!C.zf) goto L_107e7ed5;
L_107e7eff:;
  /* 107e7eff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7f03 jne 0x107e7f23 */
  if (!C.zf) goto L_107e7f23;
  /* 107e7f05 push 0x1080c114 */
  push32((uint32_t)(0x1080c114u));
  /* 107e7f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 107e7f0c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 107e7f0e push 0x1080c124 */
  push32((uint32_t)(0x1080c124u));
  /* 107e7f13 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e7f15 call 0x107e40d0 */
  push32(0x107e7f1au); f_107e40d0();
  /* 107e7f1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7f1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7f20 jne 0x107e7f23 */
  if (!C.zf) goto L_107e7f23;
  /* 107e7f22 int3  */
  x86_unimpl("int3 @ 0x107e7f22");
L_107e7f23:;
  /* 107e7f23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e7f25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e7f27 jne 0x107e7eff */
  if (!C.zf) goto L_107e7eff;
  /* 107e7f29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7f2c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 107e7f33 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7f39 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107e7f3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7f3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e7f42 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107e7f44 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7f47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e7f4a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 107e7f4d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107e7f50 push edx */
  push32((uint32_t)(EDX));
  /* 107e7f51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e7f54 push eax */
  push32((uint32_t)(EAX));
  /* 107e7f55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7f58 push ecx */
  push32((uint32_t)(ECX));
  /* 107e7f59 call 0x107ebfa0 */
  push32(0x107e7f5eu); f_107ebfa0();
  /* 107e7f5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7f61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107e7f64 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7f67 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107e7f6a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e7f6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7f70 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107e7f73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7f76 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e7f7a jl 0x107e7f9e */
  if ((C.sf!=C.of)) goto L_107e7f9e;
  /* 107e7f7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7f7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e7f81 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 107e7f84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e7f86 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e7f8c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 107e7f8f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7f92 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e7f94 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7f97 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7f9a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107e7f9c jmp 0x107e7faf */
  goto L_107e7faf;
L_107e7f9e:;
  /* 107e7f9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e7fa1 push eax */
  push32((uint32_t)(EAX));
  /* 107e7fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e7fa4 call 0x107ebd20 */
  push32(0x107e7fa9u); f_107ebd20();
  /* 107e7fa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7fac mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_107e7faf:;
  /* 107e7faf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107e7fb2 pop edi */
  EDI = (pop32());
  /* 107e7fb3 pop esi */
  ESI = (pop32());
  /* 107e7fb4 pop ebx */
  EBX = (pop32());
  /* 107e7fb5 mov esp, ebp */
  ESP = (EBP);
  /* 107e7fb7 pop ebp */
  EBP = (pop32());
  /* 107e7fb8 ret  */
  ESPCHK(0x107e7ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc0 @ 0x107e7fc0 (7 bytes, 3 insns) */
void f_107e7fc0(void) {
  FTRACE(0x107e7fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7fc0 push edi */
  push32((uint32_t)(EDI));
  /* 107e7fc1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 107e7fc5 jmp 0x107e8031 */
  jmp_ind(0x107e8031u); return;
}

/* FUN_10007fd0 @ 0x107e7fd0 (224 bytes, 84 insns) */
void f_107e7fd0(void) {
  FTRACE(0x107e7fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e7fd0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107e7fd4 push edi */
  push32((uint32_t)(EDI));
  /* 107e7fd5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107e7fdb je 0x107e7fec */
  if (C.zf) goto L_107e7fec;
L_107e7fdd:;
  /* 107e7fdd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 107e7fdf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 107e7fe0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107e7fe2 je 0x107e801f */
  if (C.zf) goto L_107e801f;
  /* 107e7fe4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107e7fea jne 0x107e7fdd */
  if (!C.zf) goto L_107e7fdd;
L_107e7fec:;
  /* 107e7fec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 107e7fee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 107e7ff3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7ff5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e7ff8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107e7ffa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e7ffd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 107e8002 je 0x107e7fec */
  if (C.zf) goto L_107e7fec;
  /* 107e8004 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 107e8007 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107e8009 je 0x107e802e */
  if (C.zf) goto L_107e802e;
  /* 107e800b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 107e800d je 0x107e8029 */
  if (C.zf) goto L_107e8029;
  /* 107e800f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 107e8014 je 0x107e8024 */
  if (C.zf) goto L_107e8024;
  /* 107e8016 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 107e801b je 0x107e801f */
  if (C.zf) goto L_107e801f;
  /* 107e801d jmp 0x107e7fec */
  goto L_107e7fec;
L_107e801f:;
  /* 107e801f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 107e8022 jmp 0x107e8031 */
  goto L_107e8031;
L_107e8024:;
  /* 107e8024 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 107e8027 jmp 0x107e8031 */
  goto L_107e8031;
L_107e8029:;
  /* 107e8029 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 107e802c jmp 0x107e8031 */
  goto L_107e8031;
L_107e802e:;
  /* 107e802e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_107e8031:;
  /* 107e8031 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 107e8035 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107e803b je 0x107e8056 */
  if (C.zf) goto L_107e8056;
L_107e803d:;
  /* 107e803d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107e803f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 107e8040 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 107e8042 je 0x107e80a8 */
  if (C.zf) goto L_107e80a8;
  /* 107e8044 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 107e8046 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107e8047 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107e804d jne 0x107e803d */
  if (!C.zf) goto L_107e803d;
  /* 107e804f jmp 0x107e8056 */
  goto L_107e8056;
L_107e8051:;
  /* 107e8051 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107e8053 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_107e8056:;
  /* 107e8056 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 107e805b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 107e805d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e805f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e8062 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107e8064 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e8066 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8069 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 107e806e je 0x107e8051 */
  if (C.zf) goto L_107e8051;
  /* 107e8070 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 107e8072 je 0x107e80a8 */
  if (C.zf) goto L_107e80a8;
  /* 107e8074 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 107e8076 je 0x107e809f */
  if (C.zf) goto L_107e809f;
  /* 107e8078 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 107e807e je 0x107e8092 */
  if (C.zf) goto L_107e8092;
  /* 107e8080 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 107e8086 je 0x107e808a */
  if (C.zf) goto L_107e808a;
  /* 107e8088 jmp 0x107e8051 */
  goto L_107e8051;
L_107e808a:;
  /* 107e808a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107e808c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107e8090 pop edi */
  EDI = (pop32());
  /* 107e8091 ret  */
  ESPCHK(0x107e7fd0u, _esp0);
  ESP += 4; return;
L_107e8092:;
  /* 107e8092 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 107e8095 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107e8099 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 107e809d pop edi */
  EDI = (pop32());
  /* 107e809e ret  */
  ESPCHK(0x107e7fd0u, _esp0);
  ESP += 4; return;
L_107e809f:;
  /* 107e809f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 107e80a2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107e80a6 pop edi */
  EDI = (pop32());
  /* 107e80a7 ret  */
  ESPCHK(0x107e7fd0u, _esp0);
  ESP += 4; return;
L_107e80a8:;
  /* 107e80a8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 107e80aa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107e80ae pop edi */
  EDI = (pop32());
  /* 107e80af ret  */
  ESPCHK(0x107e7fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080b0 @ 0x107e80b0 (243 bytes, 91 insns) */
void f_107e80b0(void) {
  FTRACE(0x107e80b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e80b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e80b1 mov ebp, esp */
  EBP = (ESP);
  /* 107e80b3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e80b6 push ebx */
  push32((uint32_t)(EBX));
  /* 107e80b7 push esi */
  push32((uint32_t)(ESI));
  /* 107e80b8 push edi */
  push32((uint32_t)(EDI));
  /* 107e80b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 107e80bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107e80bf:;
  /* 107e80bf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e80c3 jne 0x107e80e3 */
  if (!C.zf) goto L_107e80e3;
  /* 107e80c5 push 0x1080c130 */
  push32((uint32_t)(0x1080c130u));
  /* 107e80ca push 0 */
  push32((uint32_t)(0x0u));
  /* 107e80cc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 107e80ce push 0x1080c140 */
  push32((uint32_t)(0x1080c140u));
  /* 107e80d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e80d5 call 0x107e40d0 */
  push32(0x107e80dau); f_107e40d0();
  /* 107e80da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e80dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e80e0 jne 0x107e80e3 */
  if (!C.zf) goto L_107e80e3;
  /* 107e80e2 int3  */
  x86_unimpl("int3 @ 0x107e80e2");
L_107e80e3:;
  /* 107e80e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e80e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e80e7 jne 0x107e80bf */
  if (!C.zf) goto L_107e80bf;
L_107e80e9:;
  /* 107e80e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e80ed jne 0x107e810d */
  if (!C.zf) goto L_107e810d;
  /* 107e80ef push 0x1080c114 */
  push32((uint32_t)(0x1080c114u));
  /* 107e80f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e80f6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 107e80f8 push 0x1080c140 */
  push32((uint32_t)(0x1080c140u));
  /* 107e80fd push 2 */
  push32((uint32_t)(0x2u));
  /* 107e80ff call 0x107e40d0 */
  push32(0x107e8104u); f_107e40d0();
  /* 107e8104 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8107 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e810a jne 0x107e810d */
  if (!C.zf) goto L_107e810d;
  /* 107e810c int3  */
  x86_unimpl("int3 @ 0x107e810c");
L_107e810d:;
  /* 107e810d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e810f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e8111 jne 0x107e80e9 */
  if (!C.zf) goto L_107e80e9;
  /* 107e8113 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e8116 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 107e811d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e8120 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8123 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107e8126 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e8129 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e812c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107e812e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e8131 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8134 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 107e8137 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107e813a push ecx */
  push32((uint32_t)(ECX));
  /* 107e813b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e813e push edx */
  push32((uint32_t)(EDX));
  /* 107e813f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e8142 push eax */
  push32((uint32_t)(EAX));
  /* 107e8143 call 0x107ebfa0 */
  push32(0x107e8148u); f_107ebfa0();
  /* 107e8148 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e814b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107e814e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e8151 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107e8154 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e8157 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e815a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107e815d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e8160 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8164 jl 0x107e8188 */
  if ((C.sf!=C.of)) goto L_107e8188;
  /* 107e8166 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e8169 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e816b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107e816e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107e8170 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e8176 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107e8179 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e817c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e817e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8181 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e8184 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107e8186 jmp 0x107e8199 */
  goto L_107e8199;
L_107e8188:;
  /* 107e8188 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e818b push edx */
  push32((uint32_t)(EDX));
  /* 107e818c push 0 */
  push32((uint32_t)(0x0u));
  /* 107e818e call 0x107ebd20 */
  push32(0x107e8193u); f_107ebd20();
  /* 107e8193 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8196 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_107e8199:;
  /* 107e8199 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107e819c pop edi */
  EDI = (pop32());
  /* 107e819d pop esi */
  ESI = (pop32());
  /* 107e819e pop ebx */
  EBX = (pop32());
  /* 107e819f mov esp, ebp */
  ESP = (EBP);
  /* 107e81a1 pop ebp */
  EBP = (pop32());
  /* 107e81a2 ret  */
  ESPCHK(0x107e80b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081b0 @ 0x107e81b0 (47 bytes, 17 insns) */
void f_107e81b0(void) {
  FTRACE(0x107e81b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e81b0 push ecx */
  push32((uint32_t)(ECX));
  /* 107e81b1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e81b6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 107e81ba jb 0x107e81d0 */
  if (C.cf) goto L_107e81d0;
L_107e81bc:;
  /* 107e81bc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e81c2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e81c7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 107e81c9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e81ce jae 0x107e81bc */
  if (!C.cf) goto L_107e81bc;
L_107e81d0:;
  /* 107e81d0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e81d2 mov eax, esp */
  EAX = (ESP);
  /* 107e81d4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 107e81d6 mov esp, ecx */
  ESP = (ECX);
  /* 107e81d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e81da mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e81dd push eax */
  push32((uint32_t)(EAX));
  /* 107e81de ret  */
  ESPCHK(0x107e81b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081e0 @ 0x107e81e0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_107e81e0(void) {
  FTRACE(0x107e81e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e81e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e81e1 mov ebp, esp */
  EBP = (ESP);
  /* 107e81e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e81e6 push esi */
  push32((uint32_t)(ESI));
  /* 107e81e7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e81eb je 0x107e81f3 */
  if (C.zf) goto L_107e81f3;
  /* 107e81ed cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e81f1 jne 0x107e81f8 */
  if (!C.zf) goto L_107e81f8;
L_107e81f3:;
  /* 107e81f3 jmp 0x107e83c8 */
  goto L_107e83c8;
L_107e81f8:;
  /* 107e81f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e81fc je 0x107e8214 */
  if (C.zf) goto L_107e8214;
  /* 107e81fe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8202 je 0x107e8214 */
  if (C.zf) goto L_107e8214;
  /* 107e8204 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8208 je 0x107e8214 */
  if (C.zf) goto L_107e8214;
  /* 107e820a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e820e jne 0x107e82f1 */
  if (!C.zf) goto L_107e82f1;
L_107e8214:;
  /* 107e8214 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e8216 call 0x107e8a10 */
  push32(0x107e821bu); f_107e8a10();
  /* 107e821b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e821e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8222 je 0x107e822a */
  if (C.zf) goto L_107e822a;
  /* 107e8224 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8228 jne 0x107e826f */
  if (!C.zf) goto L_107e826f;
L_107e822a:;
  /* 107e822a cmp dword ptr [0x1081077c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081077c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8231 jne 0x107e826f */
  if (!C.zf) goto L_107e826f;
  /* 107e8233 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e8235 push 0x107e8410 */
  push32((uint32_t)(0x107e8410u));
  /* 107e823a call dword ptr [0x10813324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813324))), 0x107e8240u);
  /* 107e8240 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8243 jne 0x107e8251 */
  if (!C.zf) goto L_107e8251;
  /* 107e8245 mov dword ptr [0x1081077c], 1 */
  w32((uint32_t)(0x1081077c), (0x1u));
  /* 107e824f jmp 0x107e826f */
  goto L_107e826f;
L_107e8251:;
  /* 107e8251 call dword ptr [0x10813380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813380))), 0x107e8257u);
  /* 107e8257 mov esi, eax */
  ESI = (EAX);
  /* 107e8259 call 0x107ecef0 */
  push32(0x107e825eu); f_107ecef0();
  /* 107e825e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 107e8260 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e8262 call 0x107e8ab0 */
  push32(0x107e8267u); f_107e8ab0();
  /* 107e8267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e826a jmp 0x107e83c8 */
  goto L_107e83c8;
L_107e826f:;
  /* 107e826f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8272 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107e8275 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8278 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e827b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107e827e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8282 ja 0x107e82e2 */
  if ((!C.cf&&!C.zf)) goto L_107e82e2;
  /* 107e8284 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8287 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e8289 mov dl, byte ptr [eax + 0x107e83ef] */
  DL = (r8((uint32_t)(EAX + 0x107e83ef)));
  /* 107e828f jmp dword ptr [edx*4 + 0x107e83db] */
  switch (EDX) {
    case 0: goto L_107e8296;
    case 1: goto L_107e82d0;
    case 2: goto L_107e82aa;
    case 3: goto L_107e82bd;
    case 4: goto L_107e82e2;
    default: x86_unimpl("switch@0x107e828f out of table"); return;
  }
L_107e8296:;
  /* 107e8296 mov ecx, dword ptr [0x1081076c] */
  ECX = (r32((uint32_t)(0x1081076c)));
  /* 107e829c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107e829f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e82a2 mov dword ptr [0x1081076c], edx */
  w32((uint32_t)(0x1081076c), (EDX));
  /* 107e82a8 jmp 0x107e82e2 */
  goto L_107e82e2;
L_107e82aa:;
  /* 107e82aa mov eax, dword ptr [0x10810770] */
  EAX = (r32((uint32_t)(0x10810770)));
  /* 107e82af mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e82b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e82b5 mov dword ptr [0x10810770], ecx */
  w32((uint32_t)(0x10810770), (ECX));
  /* 107e82bb jmp 0x107e82e2 */
  goto L_107e82e2;
L_107e82bd:;
  /* 107e82bd mov edx, dword ptr [0x10810774] */
  EDX = (r32((uint32_t)(0x10810774)));
  /* 107e82c3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107e82c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e82c9 mov dword ptr [0x10810774], eax */
  w32((uint32_t)(0x10810774), (EAX));
  /* 107e82ce jmp 0x107e82e2 */
  goto L_107e82e2;
L_107e82d0:;
  /* 107e82d0 mov ecx, dword ptr [0x10810778] */
  ECX = (r32((uint32_t)(0x10810778)));
  /* 107e82d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107e82d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e82dc mov dword ptr [0x10810778], edx */
  w32((uint32_t)(0x10810778), (EDX));
L_107e82e2:;
  /* 107e82e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e82e4 call 0x107e8ab0 */
  push32(0x107e82e9u); f_107e8ab0();
  /* 107e82e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e82ec jmp 0x107e83c3 */
  goto L_107e83c3;
L_107e82f1:;
  /* 107e82f1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e82f5 je 0x107e8308 */
  if (C.zf) goto L_107e8308;
  /* 107e82f7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e82fb je 0x107e8308 */
  if (C.zf) goto L_107e8308;
  /* 107e82fd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8301 je 0x107e8308 */
  if (C.zf) goto L_107e8308;
  /* 107e8303 jmp 0x107e83c8 */
  goto L_107e83c8;
L_107e8308:;
  /* 107e8308 call 0x107e4a50 */
  push32(0x107e830du); f_107e4a50();
  /* 107e830d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e8310 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8313 cmp dword ptr [eax + 0x50], 0x1080ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1080ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e831a jne 0x107e8365 */
  if (!C.zf) goto L_107e8365;
  /* 107e831c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 107e8321 push 0x1080c14c */
  push32((uint32_t)(0x1080c14cu));
  /* 107e8326 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e8328 mov ecx, dword ptr [0x1080ec80] */
  ECX = (r32((uint32_t)(0x1080ec80)));
  /* 107e832e push ecx */
  push32((uint32_t)(ECX));
  /* 107e832f call 0x107e5010 */
  push32(0x107e8334u); f_107e5010();
  /* 107e8334 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8337 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e833a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 107e833d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8340 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8344 je 0x107e8363 */
  if (C.zf) goto L_107e8363;
  /* 107e8346 mov ecx, dword ptr [0x1080ec80] */
  ECX = (r32((uint32_t)(0x1080ec80)));
  /* 107e834c push ecx */
  push32((uint32_t)(ECX));
  /* 107e834d push 0x1080ec00 */
  push32((uint32_t)(0x1080ec00u));
  /* 107e8352 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8355 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 107e8358 push eax */
  push32((uint32_t)(EAX));
  /* 107e8359 call 0x107eb8f0 */
  push32(0x107e835eu); f_107eb8f0();
  /* 107e835e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8361 jmp 0x107e8365 */
  goto L_107e8365;
L_107e8363:;
  /* 107e8363 jmp 0x107e83c8 */
  goto L_107e83c8;
L_107e8365:;
  /* 107e8365 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8368 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107e836b push edx */
  push32((uint32_t)(EDX));
  /* 107e836c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e836f push eax */
  push32((uint32_t)(EAX));
  /* 107e8370 call 0x107e86f0 */
  push32(0x107e8375u); f_107e86f0();
  /* 107e8375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8378 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e837b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e837f jne 0x107e8383 */
  if (!C.zf) goto L_107e8383;
  /* 107e8381 jmp 0x107e83c8 */
  goto L_107e83c8;
L_107e8383:;
  /* 107e8383 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8386 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107e8389 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107e838c:;
  /* 107e838c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e838f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e8392 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8395 jne 0x107e83c3 */
  if (!C.zf) goto L_107e83c3;
  /* 107e8397 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e839a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e839d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107e83a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e83a3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e83a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107e83a9 mov edx, dword ptr [0x1080ec84] */
  EDX = (r32((uint32_t)(0x1080ec84)));
  /* 107e83af imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e83b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e83b5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 107e83b8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e83ba cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e83bd jb 0x107e83c1 */
  if (C.cf) goto L_107e83c1;
  /* 107e83bf jmp 0x107e83c3 */
  goto L_107e83c3;
L_107e83c1:;
  /* 107e83c1 jmp 0x107e838c */
  goto L_107e838c;
L_107e83c3:;
  /* 107e83c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e83c6 jmp 0x107e83d6 */
  goto L_107e83d6;
L_107e83c8:;
  /* 107e83c8 call 0x107ecee0 */
  push32(0x107e83cdu); f_107ecee0();
  /* 107e83cd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 107e83d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107e83d6:;
  /* 107e83d6 pop esi */
  ESI = (pop32());
  /* 107e83d7 mov esp, ebp */
  ESP = (EBP);
  /* 107e83d9 pop ebp */
  EBP = (pop32());
  /* 107e83da ret  */
  ESPCHK(0x107e81e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008410 @ 0x107e8410 (146 bytes, 45 insns) */
void f_107e8410(void) {
  FTRACE(0x107e8410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8410 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8411 mov ebp, esp */
  EBP = (ESP);
  /* 107e8413 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e8416 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e8418 call 0x107e8a10 */
  push32(0x107e841du); f_107e8a10();
  /* 107e841d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8420 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8424 jne 0x107e843e */
  if (!C.zf) goto L_107e843e;
  /* 107e8426 mov dword ptr [ebp - 8], 0x1081076c */
  w32((uint32_t)(EBP + -0x8), (0x1081076cu));
  /* 107e842d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8430 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e8432 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107e8435 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 107e843c jmp 0x107e8454 */
  goto L_107e8454;
L_107e843e:;
  /* 107e843e mov dword ptr [ebp - 8], 0x10810770 */
  w32((uint32_t)(EBP + -0x8), (0x10810770u));
  /* 107e8445 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8448 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e844a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e844d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_107e8454:;
  /* 107e8454 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8458 jne 0x107e8468 */
  if (!C.zf) goto L_107e8468;
  /* 107e845a push 1 */
  push32((uint32_t)(0x1u));
  /* 107e845c call 0x107e8ab0 */
  push32(0x107e8461u); f_107e8ab0();
  /* 107e8461 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e8466 jmp 0x107e849c */
  goto L_107e849c;
L_107e8468:;
  /* 107e8468 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e846c je 0x107e848d */
  if (C.zf) goto L_107e848d;
  /* 107e846e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8471 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 107e8477 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e8479 call 0x107e8ab0 */
  push32(0x107e847eu); f_107e8ab0();
  /* 107e847e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8481 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8484 push edx */
  push32((uint32_t)(EDX));
  /* 107e8485 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x107e8488u);
  /* 107e8488 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e848b jmp 0x107e8497 */
  goto L_107e8497;
L_107e848d:;
  /* 107e848d push 1 */
  push32((uint32_t)(0x1u));
  /* 107e848f call 0x107e8ab0 */
  push32(0x107e8494u); f_107e8ab0();
  /* 107e8494 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e8497:;
  /* 107e8497 mov eax, 1 */
  EAX = (0x1u);
L_107e849c:;
  /* 107e849c mov esp, ebp */
  ESP = (EBP);
  /* 107e849e pop ebp */
  EBP = (pop32());
  /* 107e849f ret 4 */
  ESPCHK(0x107e8410u, _esp0);
  ESP += 8; return;
}

/* FUN_100084b0 @ 0x107e84b0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_107e84b0(void) {
  FTRACE(0x107e84b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e84b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e84b1 mov ebp, esp */
  EBP = (ESP);
  /* 107e84b3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e84b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107e84bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e84c0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107e84c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e84c6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e84c9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107e84cc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e84d0 ja 0x107e857e */
  if ((!C.cf&&!C.zf)) goto L_107e857e;
  /* 107e84d6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e84d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e84db mov dl, byte ptr [eax + 0x107e86d2] */
  DL = (r8((uint32_t)(EAX + 0x107e86d2)));
  /* 107e84e1 jmp dword ptr [edx*4 + 0x107e86ba] */
  switch (EDX) {
    case 0: goto L_107e84e8;
    case 1: goto L_107e8553;
    case 2: goto L_107e8539;
    case 3: goto L_107e8505;
    case 4: goto L_107e851f;
    case 5: goto L_107e857e;
    default: x86_unimpl("switch@0x107e84e1 out of table"); return;
  }
L_107e84e8:;
  /* 107e84e8 mov dword ptr [ebp - 0x18], 0x1081076c */
  w32((uint32_t)(EBP + -0x18), (0x1081076cu));
  /* 107e84ef mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e84f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e84f4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107e84f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e84fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e84fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e8500 jmp 0x107e8586 */
  goto L_107e8586;
L_107e8505:;
  /* 107e8505 mov dword ptr [ebp - 0x18], 0x10810770 */
  w32((uint32_t)(EBP + -0x18), (0x10810770u));
  /* 107e850c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e850f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e8511 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107e8514 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e8517 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e851a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e851d jmp 0x107e8586 */
  goto L_107e8586;
L_107e851f:;
  /* 107e851f mov dword ptr [ebp - 0x18], 0x10810774 */
  w32((uint32_t)(EBP + -0x18), (0x10810774u));
  /* 107e8526 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e8529 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e852b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107e852e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e8531 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8534 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e8537 jmp 0x107e8586 */
  goto L_107e8586;
L_107e8539:;
  /* 107e8539 mov dword ptr [ebp - 0x18], 0x10810778 */
  w32((uint32_t)(EBP + -0x18), (0x10810778u));
  /* 107e8540 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e8543 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e8545 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107e8548 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e854b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e854e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e8551 jmp 0x107e8586 */
  goto L_107e8586;
L_107e8553:;
  /* 107e8553 call 0x107e4a50 */
  push32(0x107e8558u); f_107e4a50();
  /* 107e8558 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e855b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e855e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107e8561 push edx */
  push32((uint32_t)(EDX));
  /* 107e8562 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8565 push eax */
  push32((uint32_t)(EAX));
  /* 107e8566 call 0x107e86f0 */
  push32(0x107e856bu); f_107e86f0();
  /* 107e856b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e856e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8571 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107e8574 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e8577 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e8579 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107e857c jmp 0x107e8586 */
  goto L_107e8586;
L_107e857e:;
  /* 107e857e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e8581 jmp 0x107e86b6 */
  goto L_107e86b6;
L_107e8586:;
  /* 107e8586 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e858a je 0x107e8596 */
  if (C.zf) goto L_107e8596;
  /* 107e858c push 1 */
  push32((uint32_t)(0x1u));
  /* 107e858e call 0x107e8a10 */
  push32(0x107e8593u); f_107e8a10();
  /* 107e8593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e8596:;
  /* 107e8596 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e859a jne 0x107e85b3 */
  if (!C.zf) goto L_107e85b3;
  /* 107e859c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e85a0 je 0x107e85ac */
  if (C.zf) goto L_107e85ac;
  /* 107e85a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107e85a4 call 0x107e8ab0 */
  push32(0x107e85a9u); f_107e8ab0();
  /* 107e85a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e85ac:;
  /* 107e85ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e85ae jmp 0x107e86b6 */
  goto L_107e86b6;
L_107e85b3:;
  /* 107e85b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e85b7 jne 0x107e85d0 */
  if (!C.zf) goto L_107e85d0;
  /* 107e85b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e85bd je 0x107e85c9 */
  if (C.zf) goto L_107e85c9;
  /* 107e85bf push 1 */
  push32((uint32_t)(0x1u));
  /* 107e85c1 call 0x107e8ab0 */
  push32(0x107e85c6u); f_107e8ab0();
  /* 107e85c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e85c9:;
  /* 107e85c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 107e85cb call 0x107e47d0 */
  push32(0x107e85d0u); f_107e47d0();
L_107e85d0:;
  /* 107e85d0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e85d4 je 0x107e85e2 */
  if (C.zf) goto L_107e85e2;
  /* 107e85d6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e85da je 0x107e85e2 */
  if (C.zf) goto L_107e85e2;
  /* 107e85dc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e85e0 jne 0x107e860e */
  if (!C.zf) goto L_107e860e;
L_107e85e2:;
  /* 107e85e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e85e5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 107e85e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107e85eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e85ee mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 107e85f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e85f9 jne 0x107e860e */
  if (!C.zf) goto L_107e860e;
  /* 107e85fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e85fe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 107e8601 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107e8604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8607 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_107e860e:;
  /* 107e860e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8612 jne 0x107e8650 */
  if (!C.zf) goto L_107e8650;
  /* 107e8614 mov eax, dword ptr [0x1080ec78] */
  EAX = (r32((uint32_t)(0x1080ec78)));
  /* 107e8619 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107e861c jmp 0x107e8627 */
  goto L_107e8627;
L_107e861e:;
  /* 107e861e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8621 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8624 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107e8627:;
  /* 107e8627 mov edx, dword ptr [0x1080ec78] */
  EDX = (r32((uint32_t)(0x1080ec78)));
  /* 107e862d add edx, dword ptr [0x1080ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1080ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8633 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8636 jge 0x107e864e */
  if ((C.sf==C.of)) goto L_107e864e;
  /* 107e8638 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e863b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e863e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8641 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107e8644 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 107e864c jmp 0x107e861e */
  goto L_107e861e;
L_107e864e:;
  /* 107e864e jmp 0x107e8659 */
  goto L_107e8659;
L_107e8650:;
  /* 107e8650 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e8653 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_107e8659:;
  /* 107e8659 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e865d je 0x107e8669 */
  if (C.zf) goto L_107e8669;
  /* 107e865f push 1 */
  push32((uint32_t)(0x1u));
  /* 107e8661 call 0x107e8ab0 */
  push32(0x107e8666u); f_107e8ab0();
  /* 107e8666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e8669:;
  /* 107e8669 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e866d jne 0x107e8680 */
  if (!C.zf) goto L_107e8680;
  /* 107e866f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8672 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 107e8675 push edx */
  push32((uint32_t)(EDX));
  /* 107e8676 push 8 */
  push32((uint32_t)(0x8u));
  /* 107e8678 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x107e867bu);
  /* 107e867b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e867e jmp 0x107e868a */
  goto L_107e868a;
L_107e8680:;
  /* 107e8680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8683 push eax */
  push32((uint32_t)(EAX));
  /* 107e8684 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x107e8687u);
  /* 107e8687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e868a:;
  /* 107e868a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e868e je 0x107e869c */
  if (C.zf) goto L_107e869c;
  /* 107e8690 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8694 je 0x107e869c */
  if (C.zf) goto L_107e869c;
  /* 107e8696 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e869a jne 0x107e86b4 */
  if (!C.zf) goto L_107e86b4;
L_107e869c:;
  /* 107e869c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e869f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e86a2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 107e86a5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e86a9 jne 0x107e86b4 */
  if (!C.zf) goto L_107e86b4;
  /* 107e86ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e86ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e86b1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_107e86b4:;
  /* 107e86b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107e86b6:;
  /* 107e86b6 mov esp, ebp */
  ESP = (EBP);
  /* 107e86b8 pop ebp */
  EBP = (pop32());
  /* 107e86b9 ret  */
  ESPCHK(0x107e84b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086f0 @ 0x107e86f0 (91 bytes, 35 insns) */
void f_107e86f0(void) {
  FTRACE(0x107e86f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e86f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e86f1 mov ebp, esp */
  EBP = (ESP);
  /* 107e86f3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e86f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e86f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e86fa:;
  /* 107e86fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e86fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107e8700 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8703 je 0x107e8723 */
  if (C.zf) goto L_107e8723;
  /* 107e8705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8708 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e870b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e870e mov ecx, dword ptr [0x1080ec84] */
  ECX = (r32((uint32_t)(0x1080ec84)));
  /* 107e8714 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e8717 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e871a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e871c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e871f jae 0x107e8723 */
  if (!C.cf) goto L_107e8723;
  /* 107e8721 jmp 0x107e86fa */
  goto L_107e86fa;
L_107e8723:;
  /* 107e8723 mov eax, dword ptr [0x1080ec84] */
  EAX = (r32((uint32_t)(0x1080ec84)));
  /* 107e8728 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e872b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e872e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8730 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8733 jae 0x107e8745 */
  if (!C.cf) goto L_107e8745;
  /* 107e8735 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8738 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107e873b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e873e jne 0x107e8745 */
  if (!C.zf) goto L_107e8745;
  /* 107e8740 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8743 jmp 0x107e8747 */
  goto L_107e8747;
L_107e8745:;
  /* 107e8745 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107e8747:;
  /* 107e8747 mov esp, ebp */
  ESP = (EBP);
  /* 107e8749 pop ebp */
  EBP = (pop32());
  /* 107e874a ret  */
  ESPCHK(0x107e86f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008750 @ 0x107e8750 (13 bytes, 6 insns) */
void f_107e8750(void) {
  FTRACE(0x107e8750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8750 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8751 mov ebp, esp */
  EBP = (ESP);
  /* 107e8753 call 0x107e4a50 */
  push32(0x107e8758u); f_107e4a50();
  /* 107e8758 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e875b pop ebp */
  EBP = (pop32());
  /* 107e875c ret  */
  ESPCHK(0x107e8750u, _esp0);
  ESP += 4; return;
}

/* FUN_10008760 @ 0x107e8760 (13 bytes, 6 insns) */
void f_107e8760(void) {
  FTRACE(0x107e8760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8760 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8761 mov ebp, esp */
  EBP = (ESP);
  /* 107e8763 call 0x107e4a50 */
  push32(0x107e8768u); f_107e4a50();
  /* 107e8768 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e876b pop ebp */
  EBP = (pop32());
  /* 107e876c ret  */
  ESPCHK(0x107e8760u, _esp0);
  ESP += 4; return;
}

/* FUN_10008770 @ 0x107e8770 (187 bytes, 54 insns) */
void f_107e8770(void) {
  FTRACE(0x107e8770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8770 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8771 mov ebp, esp */
  EBP = (ESP);
  /* 107e8773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e8776 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107e877d cmp dword ptr [0x10810780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8784 jne 0x107e87e3 */
  if (!C.zf) goto L_107e87e3;
  /* 107e8786 push 0x1080b578 */
  push32((uint32_t)(0x1080b578u));
  /* 107e878b call dword ptr [0x10813350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813350))), 0x107e8791u);
  /* 107e8791 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e8794 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8798 je 0x107e87b7 */
  if (C.zf) goto L_107e87b7;
  /* 107e879a push 0x1080c17c */
  push32((uint32_t)(0x1080c17cu));
  /* 107e879f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e87a2 push eax */
  push32((uint32_t)(EAX));
  /* 107e87a3 call dword ptr [0x1081334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081334c))), 0x107e87a9u);
  /* 107e87a9 mov dword ptr [0x10810780], eax */
  w32((uint32_t)(0x10810780), (EAX));
  /* 107e87ae cmp dword ptr [0x10810780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e87b5 jne 0x107e87bb */
  if (!C.zf) goto L_107e87bb;
L_107e87b7:;
  /* 107e87b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e87b9 jmp 0x107e8827 */
  goto L_107e8827;
L_107e87bb:;
  /* 107e87bb push 0x1080c16c */
  push32((uint32_t)(0x1080c16cu));
  /* 107e87c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e87c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e87c4 call dword ptr [0x1081334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081334c))), 0x107e87cau);
  /* 107e87ca mov dword ptr [0x10810784], eax */
  w32((uint32_t)(0x10810784), (EAX));
  /* 107e87cf push 0x1080c158 */
  push32((uint32_t)(0x1080c158u));
  /* 107e87d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e87d7 push edx */
  push32((uint32_t)(EDX));
  /* 107e87d8 call dword ptr [0x1081334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081334c))), 0x107e87deu);
  /* 107e87de mov dword ptr [0x10810788], eax */
  w32((uint32_t)(0x10810788), (EAX));
L_107e87e3:;
  /* 107e87e3 cmp dword ptr [0x10810784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e87ea je 0x107e87f5 */
  if (C.zf) goto L_107e87f5;
  /* 107e87ec call dword ptr [0x10810784] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810784))), 0x107e87f2u);
  /* 107e87f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e87f5:;
  /* 107e87f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e87f9 je 0x107e8811 */
  if (C.zf) goto L_107e8811;
  /* 107e87fb cmp dword ptr [0x10810788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8802 je 0x107e8811 */
  if (C.zf) goto L_107e8811;
  /* 107e8804 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8807 push eax */
  push32((uint32_t)(EAX));
  /* 107e8808 call dword ptr [0x10810788] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810788))), 0x107e880eu);
  /* 107e880e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e8811:;
  /* 107e8811 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107e8814 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8815 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8818 push edx */
  push32((uint32_t)(EDX));
  /* 107e8819 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e881c push eax */
  push32((uint32_t)(EAX));
  /* 107e881d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8820 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8821 call dword ptr [0x10810780] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810780))), 0x107e8827u);
L_107e8827:;
  /* 107e8827 mov esp, ebp */
  ESP = (EBP);
  /* 107e8829 pop ebp */
  EBP = (pop32());
  /* 107e882a ret  */
  ESPCHK(0x107e8770u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x107e8830 (254 bytes, 109 insns) */
void f_107e8830(void) {
  FTRACE(0x107e8830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8830 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 107e8834 push edi */
  push32((uint32_t)(EDI));
  /* 107e8835 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e8837 je 0x107e88b3 */
  if (C.zf) goto L_107e88b3;
  /* 107e8839 push esi */
  push32((uint32_t)(ESI));
  /* 107e883a push ebx */
  push32((uint32_t)(EBX));
  /* 107e883b mov ebx, ecx */
  EBX = (ECX);
  /* 107e883d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 107e8841 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 107e8847 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 107e884b jne 0x107e8854 */
  if (!C.zf) goto L_107e8854;
  /* 107e884d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107e8850 jne 0x107e88c1 */
  if (!C.zf) goto L_107e88c1;
  /* 107e8852 jmp 0x107e8875 */
  goto L_107e8875;
L_107e8854:;
  /* 107e8854 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107e8856 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107e8857 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107e8859 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107e885a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107e885b je 0x107e8882 */
  if (C.zf) goto L_107e8882;
  /* 107e885d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107e885f je 0x107e888a */
  if (C.zf) goto L_107e888a;
  /* 107e8861 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 107e8867 jne 0x107e8854 */
  if (!C.zf) goto L_107e8854;
  /* 107e8869 mov ebx, ecx */
  EBX = (ECX);
  /* 107e886b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107e886e jne 0x107e88c1 */
  if (!C.zf) goto L_107e88c1;
L_107e8870:;
  /* 107e8870 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 107e8873 je 0x107e8882 */
  if (C.zf) goto L_107e8882;
L_107e8875:;
  /* 107e8875 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107e8877 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107e8878 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107e887a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107e887b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107e887d je 0x107e88ae */
  if (C.zf) goto L_107e88ae;
  /* 107e887f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 107e8880 jne 0x107e8875 */
  if (!C.zf) goto L_107e8875;
L_107e8882:;
  /* 107e8882 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 107e8886 pop ebx */
  EBX = (pop32());
  /* 107e8887 pop esi */
  ESI = (pop32());
  /* 107e8888 pop edi */
  EDI = (pop32());
  /* 107e8889 ret  */
  ESPCHK(0x107e8830u, _esp0);
  ESP += 4; return;
L_107e888a:;
  /* 107e888a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107e8890 je 0x107e88a4 */
  if (C.zf) goto L_107e88a4;
L_107e8892:;
  /* 107e8892 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107e8894 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107e8895 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107e8896 je 0x107e8926 */
  if (C.zf) goto L_107e8926;
  /* 107e889c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107e88a2 jne 0x107e8892 */
  if (!C.zf) goto L_107e8892;
L_107e88a4:;
  /* 107e88a4 mov ebx, ecx */
  EBX = (ECX);
  /* 107e88a6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107e88a9 jne 0x107e8917 */
  if (!C.zf) goto L_107e8917;
L_107e88ab:;
  /* 107e88ab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107e88ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_107e88ae:;
  /* 107e88ae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 107e88af jne 0x107e88ab */
  if (!C.zf) goto L_107e88ab;
  /* 107e88b1 pop ebx */
  EBX = (pop32());
  /* 107e88b2 pop esi */
  ESI = (pop32());
L_107e88b3:;
  /* 107e88b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107e88b7 pop edi */
  EDI = (pop32());
  /* 107e88b8 ret  */
  ESPCHK(0x107e8830u, _esp0);
  ESP += 4; return;
L_107e88b9:;
  /* 107e88b9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107e88bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107e88be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107e88bf je 0x107e8870 */
  if (C.zf) goto L_107e8870;
L_107e88c1:;
  /* 107e88c1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 107e88c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 107e88c8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e88ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e88cd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107e88cf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 107e88d1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107e88d4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 107e88d9 je 0x107e88b9 */
  if (C.zf) goto L_107e88b9;
  /* 107e88db test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 107e88dd je 0x107e890b */
  if (C.zf) goto L_107e890b;
  /* 107e88df test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 107e88e1 je 0x107e8901 */
  if (C.zf) goto L_107e8901;
  /* 107e88e3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 107e88e9 je 0x107e88f7 */
  if (C.zf) goto L_107e88f7;
  /* 107e88eb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 107e88f1 jne 0x107e88b9 */
  if (!C.zf) goto L_107e88b9;
  /* 107e88f3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107e88f5 jmp 0x107e890f */
  goto L_107e890f;
L_107e88f7:;
  /* 107e88f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e88fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107e88ff jmp 0x107e890f */
  goto L_107e890f;
L_107e8901:;
  /* 107e8901 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e8907 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107e8909 jmp 0x107e890f */
  goto L_107e890f;
L_107e890b:;
  /* 107e890b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107e890d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_107e890f:;
  /* 107e890f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e8914 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107e8915 je 0x107e8921 */
  if (C.zf) goto L_107e8921;
L_107e8917:;
  /* 107e8917 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107e8919:;
  /* 107e8919 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 107e891b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107e891e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107e891f jne 0x107e8919 */
  if (!C.zf) goto L_107e8919;
L_107e8921:;
  /* 107e8921 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 107e8924 jne 0x107e88ab */
  if (!C.zf) goto L_107e88ab;
L_107e8926:;
  /* 107e8926 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 107e892a pop ebx */
  EBX = (pop32());
  /* 107e892b pop esi */
  ESI = (pop32());
  /* 107e892c pop edi */
  EDI = (pop32());
  /* 107e892d ret  */
  ESPCHK(0x107e8830u, _esp0);
  ESP += 4; return;
}

/* FUN_10008930 @ 0x107e8930 (55 bytes, 16 insns) */
void f_107e8930(void) {
  FTRACE(0x107e8930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8930 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8931 mov ebp, esp */
  EBP = (ESP);
  /* 107e8933 mov eax, dword ptr [0x1080eb84] */
  EAX = (r32((uint32_t)(0x1080eb84)));
  /* 107e8938 push eax */
  push32((uint32_t)(EAX));
  /* 107e8939 call dword ptr [0x1081332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081332c))), 0x107e893fu);
  /* 107e893f mov ecx, dword ptr [0x1080eb74] */
  ECX = (r32((uint32_t)(0x1080eb74)));
  /* 107e8945 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8946 call dword ptr [0x1081332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081332c))), 0x107e894cu);
  /* 107e894c mov edx, dword ptr [0x1080eb64] */
  EDX = (r32((uint32_t)(0x1080eb64)));
  /* 107e8952 push edx */
  push32((uint32_t)(EDX));
  /* 107e8953 call dword ptr [0x1081332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081332c))), 0x107e8959u);
  /* 107e8959 mov eax, dword ptr [0x1080eb44] */
  EAX = (r32((uint32_t)(0x1080eb44)));
  /* 107e895e push eax */
  push32((uint32_t)(EAX));
  /* 107e895f call dword ptr [0x1081332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081332c))), 0x107e8965u);
  /* 107e8965 pop ebp */
  EBP = (pop32());
  /* 107e8966 ret  */
  ESPCHK(0x107e8930u, _esp0);
  ESP += 4; return;
}

/* FUN_10008970 @ 0x107e8970 (159 bytes, 47 insns) */
void f_107e8970(void) {
  FTRACE(0x107e8970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8970 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8971 mov ebp, esp */
  EBP = (ESP);
  /* 107e8973 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8974 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107e897b jmp 0x107e8986 */
  goto L_107e8986;
L_107e897d:;
  /* 107e897d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8980 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8983 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e8986:;
  /* 107e8986 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e898a jge 0x107e89d9 */
  if ((C.sf==C.of)) goto L_107e89d9;
  /* 107e898c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e898f cmp dword ptr [ecx*4 + 0x1080eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1080eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8997 je 0x107e89d7 */
  if (C.zf) goto L_107e89d7;
  /* 107e8999 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e899d je 0x107e89d7 */
  if (C.zf) goto L_107e89d7;
  /* 107e899f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e89a3 je 0x107e89d7 */
  if (C.zf) goto L_107e89d7;
  /* 107e89a5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e89a9 je 0x107e89d7 */
  if (C.zf) goto L_107e89d7;
  /* 107e89ab cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e89af je 0x107e89d7 */
  if (C.zf) goto L_107e89d7;
  /* 107e89b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e89b4 mov eax, dword ptr [edx*4 + 0x1080eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1080eb40)));
  /* 107e89bb push eax */
  push32((uint32_t)(EAX));
  /* 107e89bc call dword ptr [0x10813394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813394))), 0x107e89c2u);
  /* 107e89c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107e89c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e89c7 mov edx, dword ptr [ecx*4 + 0x1080eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1080eb40)));
  /* 107e89ce push edx */
  push32((uint32_t)(EDX));
  /* 107e89cf call 0x107e5aa0 */
  push32(0x107e89d4u); f_107e5aa0();
  /* 107e89d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e89d7:;
  /* 107e89d7 jmp 0x107e897d */
  goto L_107e897d;
L_107e89d9:;
  /* 107e89d9 mov eax, dword ptr [0x1080eb64] */
  EAX = (r32((uint32_t)(0x1080eb64)));
  /* 107e89de push eax */
  push32((uint32_t)(EAX));
  /* 107e89df call dword ptr [0x10813394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813394))), 0x107e89e5u);
  /* 107e89e5 mov ecx, dword ptr [0x1080eb74] */
  ECX = (r32((uint32_t)(0x1080eb74)));
  /* 107e89eb push ecx */
  push32((uint32_t)(ECX));
  /* 107e89ec call dword ptr [0x10813394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813394))), 0x107e89f2u);
  /* 107e89f2 mov edx, dword ptr [0x1080eb84] */
  EDX = (r32((uint32_t)(0x1080eb84)));
  /* 107e89f8 push edx */
  push32((uint32_t)(EDX));
  /* 107e89f9 call dword ptr [0x10813394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813394))), 0x107e89ffu);
  /* 107e89ff mov eax, dword ptr [0x1080eb44] */
  EAX = (r32((uint32_t)(0x1080eb44)));
  /* 107e8a04 push eax */
  push32((uint32_t)(EAX));
  /* 107e8a05 call dword ptr [0x10813394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813394))), 0x107e8a0bu);
  /* 107e8a0b mov esp, ebp */
  ESP = (EBP);
  /* 107e8a0d pop ebp */
  EBP = (pop32());
  /* 107e8a0e ret  */
  ESPCHK(0x107e8970u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a10 @ 0x107e8a10 (151 bytes, 46 insns) */
void f_107e8a10(void) {
  FTRACE(0x107e8a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8a10 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8a11 mov ebp, esp */
  EBP = (ESP);
  /* 107e8a13 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8a17 cmp dword ptr [eax*4 + 0x1080eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1080eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8a1f jne 0x107e8a92 */
  if (!C.zf) goto L_107e8a92;
  /* 107e8a21 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 107e8a26 push 0x1080c188 */
  push32((uint32_t)(0x1080c188u));
  /* 107e8a2b push 2 */
  push32((uint32_t)(0x2u));
  /* 107e8a2d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 107e8a2f call 0x107e5010 */
  push32(0x107e8a34u); f_107e5010();
  /* 107e8a34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8a37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e8a3a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8a3e jne 0x107e8a4a */
  if (!C.zf) goto L_107e8a4a;
  /* 107e8a40 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107e8a42 call 0x107e3f80 */
  push32(0x107e8a47u); f_107e3f80();
  /* 107e8a47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e8a4a:;
  /* 107e8a4a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107e8a4c call 0x107e8a10 */
  push32(0x107e8a51u); f_107e8a10();
  /* 107e8a51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8a54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8a57 cmp dword ptr [ecx*4 + 0x1080eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1080eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8a5f jne 0x107e8a7a */
  if (!C.zf) goto L_107e8a7a;
  /* 107e8a61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8a64 push edx */
  push32((uint32_t)(EDX));
  /* 107e8a65 call dword ptr [0x1081332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081332c))), 0x107e8a6bu);
  /* 107e8a6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8a6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8a71 mov dword ptr [eax*4 + 0x1080eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1080eb40), (ECX));
  /* 107e8a78 jmp 0x107e8a88 */
  goto L_107e8a88;
L_107e8a7a:;
  /* 107e8a7a push 2 */
  push32((uint32_t)(0x2u));
  /* 107e8a7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8a7f push edx */
  push32((uint32_t)(EDX));
  /* 107e8a80 call 0x107e5aa0 */
  push32(0x107e8a85u); f_107e5aa0();
  /* 107e8a85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e8a88:;
  /* 107e8a88 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107e8a8a call 0x107e8ab0 */
  push32(0x107e8a8fu); f_107e8ab0();
  /* 107e8a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e8a92:;
  /* 107e8a92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8a95 mov ecx, dword ptr [eax*4 + 0x1080eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1080eb40)));
  /* 107e8a9c push ecx */
  push32((uint32_t)(ECX));
  /* 107e8a9d call dword ptr [0x1081331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081331c))), 0x107e8aa3u);
  /* 107e8aa3 mov esp, ebp */
  ESP = (EBP);
  /* 107e8aa5 pop ebp */
  EBP = (pop32());
  /* 107e8aa6 ret  */
  ESPCHK(0x107e8a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ab0 @ 0x107e8ab0 (22 bytes, 8 insns) */
void f_107e8ab0(void) {
  FTRACE(0x107e8ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8ab1 mov ebp, esp */
  EBP = (ESP);
  /* 107e8ab3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8ab6 mov ecx, dword ptr [eax*4 + 0x1080eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1080eb40)));
  /* 107e8abd push ecx */
  push32((uint32_t)(ECX));
  /* 107e8abe call dword ptr [0x10813318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813318))), 0x107e8ac4u);
  /* 107e8ac4 pop ebp */
  EBP = (pop32());
  /* 107e8ac5 ret  */
  ESPCHK(0x107e8ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ad0 @ 0x107e8ad0 (26 bytes, 10 insns) */
void f_107e8ad0(void) {
  FTRACE(0x107e8ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8ad1 mov ebp, esp */
  EBP = (ESP);
  /* 107e8ad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8ad6 push eax */
  push32((uint32_t)(EAX));
  /* 107e8ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e8ad9 call dword ptr [0x10813320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813320))), 0x107e8adfu);
  /* 107e8adf push 0xff */
  push32((uint32_t)(0xffu));
  /* 107e8ae4 call dword ptr [0x1081335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081335c))), 0x107e8aeau);
  /* 107e8aea pop ebp */
  EBP = (pop32());
  /* 107e8aeb ret  */
  ESPCHK(0x107e8ad0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x107e8af0 (446 bytes, 130 insns) */
void f_107e8af0(void) {
  FTRACE(0x107e8af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8af0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8af1 mov ebp, esp */
  EBP = (ESP);
  /* 107e8af3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e8af6 call 0x107e4a50 */
  push32(0x107e8afbu); f_107e4a50();
  /* 107e8afb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e8afe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8b01 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 107e8b04 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8b05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8b08 push edx */
  push32((uint32_t)(EDX));
  /* 107e8b09 call 0x107e8cb0 */
  push32(0x107e8b0eu); f_107e8cb0();
  /* 107e8b0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8b11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107e8b14 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8b18 je 0x107e8b23 */
  if (C.zf) goto L_107e8b23;
  /* 107e8b1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8b1d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8b21 jne 0x107e8b32 */
  if (!C.zf) goto L_107e8b32;
L_107e8b23:;
  /* 107e8b23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8b26 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8b27 call dword ptr [0x10813310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813310))), 0x107e8b2du);
  /* 107e8b2d jmp 0x107e8caa */
  goto L_107e8caa;
L_107e8b32:;
  /* 107e8b32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8b35 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8b39 jne 0x107e8b4f */
  if (!C.zf) goto L_107e8b4f;
  /* 107e8b3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8b3e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 107e8b45 mov eax, 1 */
  EAX = (0x1u);
  /* 107e8b4a jmp 0x107e8caa */
  goto L_107e8caa;
L_107e8b4f:;
  /* 107e8b4f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8b52 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8b56 jne 0x107e8b60 */
  if (!C.zf) goto L_107e8b60;
  /* 107e8b58 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e8b5b jmp 0x107e8caa */
  goto L_107e8caa;
L_107e8b60:;
  /* 107e8b60 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8b63 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107e8b66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e8b69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8b6c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 107e8b6f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107e8b72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8b75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8b78 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 107e8b7b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8b7e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8b82 jne 0x107e8c87 */
  if (!C.zf) goto L_107e8c87;
  /* 107e8b88 mov eax, dword ptr [0x1080ec78] */
  EAX = (r32((uint32_t)(0x1080ec78)));
  /* 107e8b8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107e8b90 jmp 0x107e8b9b */
  goto L_107e8b9b;
L_107e8b92:;
  /* 107e8b92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e8b95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8b98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_107e8b9b:;
  /* 107e8b9b mov edx, dword ptr [0x1080ec78] */
  EDX = (r32((uint32_t)(0x1080ec78)));
  /* 107e8ba1 add edx, dword ptr [0x1080ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1080ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8ba7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8baa jge 0x107e8bc2 */
  if ((C.sf==C.of)) goto L_107e8bc2;
  /* 107e8bac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e8baf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e8bb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8bb5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107e8bb8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 107e8bc0 jmp 0x107e8b92 */
  goto L_107e8b92;
L_107e8bc2:;
  /* 107e8bc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8bc5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 107e8bc8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107e8bcb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8bce cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8bd4 jne 0x107e8be5 */
  if (!C.zf) goto L_107e8be5;
  /* 107e8bd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8bd9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 107e8be0 jmp 0x107e8c6d */
  goto L_107e8c6d;
L_107e8be5:;
  /* 107e8be5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8be8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8bee jne 0x107e8bfc */
  if (!C.zf) goto L_107e8bfc;
  /* 107e8bf0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8bf3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 107e8bfa jmp 0x107e8c6d */
  goto L_107e8c6d;
L_107e8bfc:;
  /* 107e8bfc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8bff cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8c05 jne 0x107e8c13 */
  if (!C.zf) goto L_107e8c13;
  /* 107e8c07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8c0a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 107e8c11 jmp 0x107e8c6d */
  goto L_107e8c6d;
L_107e8c13:;
  /* 107e8c13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8c16 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8c1c jne 0x107e8c2a */
  if (!C.zf) goto L_107e8c2a;
  /* 107e8c1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8c21 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 107e8c28 jmp 0x107e8c6d */
  goto L_107e8c6d;
L_107e8c2a:;
  /* 107e8c2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8c2d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8c33 jne 0x107e8c41 */
  if (!C.zf) goto L_107e8c41;
  /* 107e8c35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8c38 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 107e8c3f jmp 0x107e8c6d */
  goto L_107e8c6d;
L_107e8c41:;
  /* 107e8c41 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8c44 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8c4a jne 0x107e8c58 */
  if (!C.zf) goto L_107e8c58;
  /* 107e8c4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8c4f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 107e8c56 jmp 0x107e8c6d */
  goto L_107e8c6d;
L_107e8c58:;
  /* 107e8c58 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8c5b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8c61 jne 0x107e8c6d */
  if (!C.zf) goto L_107e8c6d;
  /* 107e8c63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8c66 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_107e8c6d:;
  /* 107e8c6d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8c70 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 107e8c73 push edx */
  push32((uint32_t)(EDX));
  /* 107e8c74 push 8 */
  push32((uint32_t)(0x8u));
  /* 107e8c76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x107e8c79u);
  /* 107e8c79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8c7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8c7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e8c82 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 107e8c85 jmp 0x107e8c9e */
  goto L_107e8c9e;
L_107e8c87:;
  /* 107e8c87 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8c8a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 107e8c91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e8c94 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e8c97 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8c98 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x107e8c9bu);
  /* 107e8c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e8c9e:;
  /* 107e8c9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8ca1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e8ca4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 107e8ca7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107e8caa:;
  /* 107e8caa mov esp, ebp */
  ESP = (EBP);
  /* 107e8cac pop ebp */
  EBP = (pop32());
  /* 107e8cad ret  */
  ESPCHK(0x107e8af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cb0 @ 0x107e8cb0 (89 bytes, 35 insns) */
void f_107e8cb0(void) {
  FTRACE(0x107e8cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8cb1 mov ebp, esp */
  EBP = (ESP);
  /* 107e8cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8cb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8cb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107e8cba:;
  /* 107e8cba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8cbd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e8cbf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8cc2 je 0x107e8ce2 */
  if (C.zf) goto L_107e8ce2;
  /* 107e8cc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8cc7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8cca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e8ccd mov ecx, dword ptr [0x1080ec84] */
  ECX = (r32((uint32_t)(0x1080ec84)));
  /* 107e8cd3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e8cd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8cd9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8cdb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8cde jae 0x107e8ce2 */
  if (!C.cf) goto L_107e8ce2;
  /* 107e8ce0 jmp 0x107e8cba */
  goto L_107e8cba;
L_107e8ce2:;
  /* 107e8ce2 mov eax, dword ptr [0x1080ec84] */
  EAX = (r32((uint32_t)(0x1080ec84)));
  /* 107e8ce7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e8cea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8ced add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8cef cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8cf2 jae 0x107e8cfe */
  if (!C.cf) goto L_107e8cfe;
  /* 107e8cf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8cf7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e8cf9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8cfc je 0x107e8d02 */
  if (C.zf) goto L_107e8d02;
L_107e8cfe:;
  /* 107e8cfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e8d00 jmp 0x107e8d05 */
  goto L_107e8d05;
L_107e8d02:;
  /* 107e8d02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107e8d05:;
  /* 107e8d05 mov esp, ebp */
  ESP = (EBP);
  /* 107e8d07 pop ebp */
  EBP = (pop32());
  /* 107e8d08 ret  */
  ESPCHK(0x107e8cb0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x107e8d10 (48 bytes, 17 insns) */
void f_107e8d10(void) {
  FTRACE(0x107e8d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8d10 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8d11 mov ebp, esp */
  EBP = (ESP);
  /* 107e8d13 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8d14 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e8d16 call 0x107e8a10 */
  push32(0x107e8d1bu); f_107e8a10();
  /* 107e8d1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8d1e mov eax, dword ptr [0x108107f4] */
  EAX = (r32((uint32_t)(0x108107f4)));
  /* 107e8d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e8d26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8d29 mov dword ptr [0x108107f4], ecx */
  w32((uint32_t)(0x108107f4), (ECX));
  /* 107e8d2f push 9 */
  push32((uint32_t)(0x9u));
  /* 107e8d31 call 0x107e8ab0 */
  push32(0x107e8d36u); f_107e8ab0();
  /* 107e8d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8d39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8d3c mov esp, ebp */
  ESP = (EBP);
  /* 107e8d3e pop ebp */
  EBP = (pop32());
  /* 107e8d3f ret  */
  ESPCHK(0x107e8d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d40 @ 0x107e8d40 (10 bytes, 5 insns) */
void f_107e8d40(void) {
  FTRACE(0x107e8d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8d40 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8d41 mov ebp, esp */
  EBP = (ESP);
  /* 107e8d43 mov eax, dword ptr [0x108107f4] */
  EAX = (r32((uint32_t)(0x108107f4)));
  /* 107e8d48 pop ebp */
  EBP = (pop32());
  /* 107e8d49 ret  */
  ESPCHK(0x107e8d40u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x107e8d50 (45 bytes, 19 insns) */
void f_107e8d50(void) {
  FTRACE(0x107e8d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8d50 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8d51 mov ebp, esp */
  EBP = (ESP);
  /* 107e8d53 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8d54 mov eax, dword ptr [0x108107f4] */
  EAX = (r32((uint32_t)(0x108107f4)));
  /* 107e8d59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e8d5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8d60 je 0x107e8d70 */
  if (C.zf) goto L_107e8d70;
  /* 107e8d62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8d65 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8d66 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x107e8d69u);
  /* 107e8d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e8d6e jne 0x107e8d74 */
  if (!C.zf) goto L_107e8d74;
L_107e8d70:;
  /* 107e8d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e8d72 jmp 0x107e8d79 */
  goto L_107e8d79;
L_107e8d74:;
  /* 107e8d74 mov eax, 1 */
  EAX = (0x1u);
L_107e8d79:;
  /* 107e8d79 mov esp, ebp */
  ESP = (EBP);
  /* 107e8d7b pop ebp */
  EBP = (pop32());
  /* 107e8d7c ret  */
  ESPCHK(0x107e8d50u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x107e8d80 (88 bytes, 40 insns) */
void f_107e8d80(void) {
  FTRACE(0x107e8d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8d80 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 107e8d84 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107e8d88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e8d8a je 0x107e8dd3 */
  if (C.zf) goto L_107e8dd3;
  /* 107e8d8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e8d8e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 107e8d92 push edi */
  push32((uint32_t)(EDI));
  /* 107e8d93 mov edi, ecx */
  EDI = (ECX);
  /* 107e8d95 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8d98 jb 0x107e8dc7 */
  if (C.cf) goto L_107e8dc7;
  /* 107e8d9a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107e8d9c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 107e8d9f je 0x107e8da9 */
  if (C.zf) goto L_107e8da9;
  /* 107e8da1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_107e8da3:;
  /* 107e8da3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107e8da5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107e8da6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107e8da7 jne 0x107e8da3 */
  if (!C.zf) goto L_107e8da3;
L_107e8da9:;
  /* 107e8da9 mov ecx, eax */
  ECX = (EAX);
  /* 107e8dab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 107e8dae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8db0 mov ecx, eax */
  ECX = (EAX);
  /* 107e8db2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107e8db5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8db7 mov ecx, edx */
  ECX = (EDX);
  /* 107e8db9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107e8dbc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107e8dbf je 0x107e8dc7 */
  if (C.zf) goto L_107e8dc7;
  /* 107e8dc1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107e8dc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e8dc5 je 0x107e8dcd */
  if (C.zf) goto L_107e8dcd;
L_107e8dc7:;
  /* 107e8dc7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107e8dc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107e8dca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 107e8dcb jne 0x107e8dc7 */
  if (!C.zf) goto L_107e8dc7;
L_107e8dcd:;
  /* 107e8dcd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107e8dd1 pop edi */
  EDI = (pop32());
  /* 107e8dd2 ret  */
  ESPCHK(0x107e8d80u, _esp0);
  ESP += 4; return;
L_107e8dd3:;
  /* 107e8dd3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 107e8dd7 ret  */
  ESPCHK(0x107e8d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008de0 @ 0x107e8de0 (23 bytes, 10 insns) */
void f_107e8de0(void) {
  FTRACE(0x107e8de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8de0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8de1 mov ebp, esp */
  EBP = (ESP);
  /* 107e8de3 mov eax, dword ptr [0x108107f0] */
  EAX = (r32((uint32_t)(0x108107f0)));
  /* 107e8de8 push eax */
  push32((uint32_t)(EAX));
  /* 107e8de9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8dec push ecx */
  push32((uint32_t)(ECX));
  /* 107e8ded call 0x107e8e00 */
  push32(0x107e8df2u); f_107e8e00();
  /* 107e8df2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8df5 pop ebp */
  EBP = (pop32());
  /* 107e8df6 ret  */
  ESPCHK(0x107e8de0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x107e8e00 (87 bytes, 34 insns) */
void f_107e8e00(void) {
  FTRACE(0x107e8e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8e00 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8e01 mov ebp, esp */
  EBP = (ESP);
  /* 107e8e03 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8e04 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8e08 jbe 0x107e8e0e */
  if ((C.cf||C.zf)) goto L_107e8e0e;
  /* 107e8e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e8e0c jmp 0x107e8e53 */
  goto L_107e8e53;
L_107e8e0e:;
  /* 107e8e0e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8e12 ja 0x107e8e25 */
  if ((!C.cf&&!C.zf)) goto L_107e8e25;
  /* 107e8e14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8e17 push eax */
  push32((uint32_t)(EAX));
  /* 107e8e18 call 0x107e8e60 */
  push32(0x107e8e1du); f_107e8e60();
  /* 107e8e1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8e20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e8e23 jmp 0x107e8e2c */
  goto L_107e8e2c;
L_107e8e25:;
  /* 107e8e25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107e8e2c:;
  /* 107e8e2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8e30 jne 0x107e8e38 */
  if (!C.zf) goto L_107e8e38;
  /* 107e8e32 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8e36 jne 0x107e8e3d */
  if (!C.zf) goto L_107e8e3d;
L_107e8e38:;
  /* 107e8e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8e3b jmp 0x107e8e53 */
  goto L_107e8e53;
L_107e8e3d:;
  /* 107e8e3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8e40 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8e41 call 0x107e8d50 */
  push32(0x107e8e46u); f_107e8d50();
  /* 107e8e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8e49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e8e4b jne 0x107e8e51 */
  if (!C.zf) goto L_107e8e51;
  /* 107e8e4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e8e4f jmp 0x107e8e53 */
  goto L_107e8e53;
L_107e8e51:;
  /* 107e8e51 jmp 0x107e8e0e */
  goto L_107e8e0e;
L_107e8e53:;
  /* 107e8e53 mov esp, ebp */
  ESP = (EBP);
  /* 107e8e55 pop ebp */
  EBP = (pop32());
  /* 107e8e56 ret  */
  ESPCHK(0x107e8e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e60 @ 0x107e8e60 (109 bytes, 37 insns) */
void f_107e8e60(void) {
  FTRACE(0x107e8e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8e60 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8e61 mov ebp, esp */
  EBP = (ESP);
  /* 107e8e63 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8e67 cmp eax, dword ptr [0x1080ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1080ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8e6d ja 0x107e8e9d */
  if ((!C.cf&&!C.zf)) goto L_107e8e9d;
  /* 107e8e6f push 9 */
  push32((uint32_t)(0x9u));
  /* 107e8e71 call 0x107e8a10 */
  push32(0x107e8e76u); f_107e8a10();
  /* 107e8e76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8e79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8e7c push ecx */
  push32((uint32_t)(ECX));
  /* 107e8e7d call 0x107e99a0 */
  push32(0x107e8e82u); f_107e99a0();
  /* 107e8e82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8e85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e8e88 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e8e8a call 0x107e8ab0 */
  push32(0x107e8e8fu); f_107e8ab0();
  /* 107e8e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8e92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8e96 je 0x107e8e9d */
  if (C.zf) goto L_107e8e9d;
  /* 107e8e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8e9b jmp 0x107e8ec9 */
  goto L_107e8ec9;
L_107e8e9d:;
  /* 107e8e9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8ea1 jne 0x107e8eaa */
  if (!C.zf) goto L_107e8eaa;
  /* 107e8ea3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_107e8eaa:;
  /* 107e8eaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8ead add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8eb0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 107e8eb3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107e8eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8eb9 push eax */
  push32((uint32_t)(EAX));
  /* 107e8eba push 0 */
  push32((uint32_t)(0x0u));
  /* 107e8ebc mov ecx, dword ptr [0x10811fac] */
  ECX = (r32((uint32_t)(0x10811fac)));
  /* 107e8ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8ec3 call dword ptr [0x1081330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081330c))), 0x107e8ec9u);
L_107e8ec9:;
  /* 107e8ec9 mov esp, ebp */
  ESP = (EBP);
  /* 107e8ecb pop ebp */
  EBP = (pop32());
  /* 107e8ecc ret  */
  ESPCHK(0x107e8e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ed0 @ 0x107e8ed0 (10 bytes, 5 insns) */
void f_107e8ed0(void) {
  FTRACE(0x107e8ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8ed1 mov ebp, esp */
  EBP = (ESP);
  /* 107e8ed3 mov eax, 1 */
  EAX = (0x1u);
  /* 107e8ed8 pop ebp */
  EBP = (pop32());
  /* 107e8ed9 ret  */
  ESPCHK(0x107e8ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ee0 @ 0x107e8ee0 (173 bytes, 59 insns) */
void f_107e8ee0(void) {
  FTRACE(0x107e8ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8ee1 mov ebp, esp */
  EBP = (ESP);
  /* 107e8ee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e8ee6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8eea jbe 0x107e8ef3 */
  if ((C.cf||C.zf)) goto L_107e8ef3;
  /* 107e8eec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e8eee jmp 0x107e8f89 */
  goto L_107e8f89;
L_107e8ef3:;
  /* 107e8ef3 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e8ef5 call 0x107e8a10 */
  push32(0x107e8efau); f_107e8a10();
  /* 107e8efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8efd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8f00 push eax */
  push32((uint32_t)(EAX));
  /* 107e8f01 call 0x107e9310 */
  push32(0x107e8f06u); f_107e9310();
  /* 107e8f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8f09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e8f0c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8f10 je 0x107e8f51 */
  if (C.zf) goto L_107e8f51;
  /* 107e8f12 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107e8f19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8f1c cmp ecx, dword ptr [0x1080ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1080ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8f22 ja 0x107e8f42 */
  if ((!C.cf&&!C.zf)) goto L_107e8f42;
  /* 107e8f24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8f27 push edx */
  push32((uint32_t)(EDX));
  /* 107e8f28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8f2b push eax */
  push32((uint32_t)(EAX));
  /* 107e8f2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e8f2f push ecx */
  push32((uint32_t)(ECX));
  /* 107e8f30 call 0x107ea1e0 */
  push32(0x107e8f35u); f_107ea1e0();
  /* 107e8f35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8f38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e8f3a je 0x107e8f42 */
  if (C.zf) goto L_107e8f42;
  /* 107e8f3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8f3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107e8f42:;
  /* 107e8f42 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e8f44 call 0x107e8ab0 */
  push32(0x107e8f49u); f_107e8ab0();
  /* 107e8f49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8f4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e8f4f jmp 0x107e8f89 */
  goto L_107e8f89;
L_107e8f51:;
  /* 107e8f51 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e8f53 call 0x107e8ab0 */
  push32(0x107e8f58u); f_107e8ab0();
  /* 107e8f58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8f5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8f5f jne 0x107e8f68 */
  if (!C.zf) goto L_107e8f68;
  /* 107e8f61 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_107e8f68:;
  /* 107e8f68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8f6b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8f6e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 107e8f70 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 107e8f73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8f76 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8f77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8f7a push edx */
  push32((uint32_t)(EDX));
  /* 107e8f7b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 107e8f7d mov eax, dword ptr [0x10811fac] */
  EAX = (r32((uint32_t)(0x10811fac)));
  /* 107e8f82 push eax */
  push32((uint32_t)(EAX));
  /* 107e8f83 call dword ptr [0x10813314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813314))), 0x107e8f89u);
L_107e8f89:;
  /* 107e8f89 mov esp, ebp */
  ESP = (EBP);
  /* 107e8f8b pop ebp */
  EBP = (pop32());
  /* 107e8f8c ret  */
  ESPCHK(0x107e8ee0u, _esp0);
  ESP += 4; return;
}

