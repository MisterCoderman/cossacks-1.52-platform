#include "recomp.h"

/* thunk_FUN_10003a60 @ 0x103a1005 (5 bytes, 1 insns) */
void f_103a1005(void) {
  FTRACE(0x103a1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a1005 jmp 0x103a3a60 */
  f_103a3a60(); return;
}

/* OnInit @ 0x103a100a (5 bytes, 1 insns) */
void f_103a100a(void) {
  FTRACE(0x103a100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a100a jmp 0x103a10a0 */
  f_103a10a0(); return;
}

/* thunk_FUN_10003ab0 @ 0x103a100f (5 bytes, 1 insns) */
void f_103a100f(void) {
  FTRACE(0x103a100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a100f jmp 0x103a3ab0 */
  f_103a3ab0(); return;
}

/* thunk_FUN_10001040 @ 0x103a1014 (5 bytes, 1 insns) */
void f_103a1014(void) {
  FTRACE(0x103a1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a1014 jmp 0x103a1040 */
  f_103a1040(); return;
}

/* ProcessScenary @ 0x103a1019 (5 bytes, 1 insns) */
void f_103a1019(void) {
  FTRACE(0x103a1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a1019 jmp 0x103a18d0 */
  f_103a18d0(); return;
}

/* FUN_10001040 @ 0x103a1040 (67 bytes, 26 insns) */
void f_103a1040(void) {
  FTRACE(0x103a1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a1040 push ebp */
  push32((uint32_t)(EBP));
  /* 103a1041 mov ebp, esp */
  EBP = (ESP);
  /* 103a1043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a1046 push ebx */
  push32((uint32_t)(EBX));
  /* 103a1047 push esi */
  push32((uint32_t)(ESI));
  /* 103a1048 push edi */
  push32((uint32_t)(EDI));
  /* 103a1049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 103a104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 103a1051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 103a1056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103a1058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1062 je 0x103a1066 */
  if (C.zf) goto L_103a1066;
  /* 103a1064 jmp 0x103a106b */
  goto L_103a106b;
L_103a1066:;
  /* 103a1066 call 0x103a100a */
  push32(0x103a106bu); f_103a100a();
L_103a106b:;
  /* 103a106b mov eax, 1 */
  EAX = (0x1u);
  /* 103a1070 pop edi */
  EDI = (pop32());
  /* 103a1071 pop esi */
  ESI = (pop32());
  /* 103a1072 pop ebx */
  EBX = (pop32());
  /* 103a1073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1078 call 0x103a3be0 */
  push32(0x103a107du); f_103a3be0();
  /* 103a107d mov esp, ebp */
  ESP = (EBP);
  /* 103a107f pop ebp */
  EBP = (pop32());
  /* 103a1080 ret 0xc */
  ESPCHK(0x103a1040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x103a10a0 (1676 bytes, 439 insns) */
void f_103a10a0(void) {
  FTRACE(0x103a10a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a10a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a10a1 mov ebp, esp */
  EBP = (ESP);
  /* 103a10a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a10a6 push ebx */
  push32((uint32_t)(EBX));
  /* 103a10a7 push esi */
  push32((uint32_t)(ESI));
  /* 103a10a8 push edi */
  push32((uint32_t)(EDI));
  /* 103a10a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 103a10ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 103a10b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 103a10b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103a10b8 mov esi, esp */
  ESI = (ESP);
  /* 103a10ba push 0x103cb210 */
  push32((uint32_t)(0x103cb210u));
  /* 103a10bf push 0x103d04f0 */
  push32((uint32_t)(0x103d04f0u));
  /* 103a10c4 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a10cau);
  /* 103a10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a10cf call 0x103a3be0 */
  push32(0x103a10d4u); f_103a3be0();
  /* 103a10d4 mov esi, esp */
  ESI = (ESP);
  /* 103a10d6 push 0x103cb208 */
  push32((uint32_t)(0x103cb208u));
  /* 103a10db push 0x103d04f8 */
  push32((uint32_t)(0x103d04f8u));
  /* 103a10e0 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a10e6u);
  /* 103a10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a10eb call 0x103a3be0 */
  push32(0x103a10f0u); f_103a3be0();
  /* 103a10f0 mov esi, esp */
  ESI = (ESP);
  /* 103a10f2 push 0x103cb200 */
  push32((uint32_t)(0x103cb200u));
  /* 103a10f7 push 0x103d0500 */
  push32((uint32_t)(0x103d0500u));
  /* 103a10fc call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a1102u);
  /* 103a1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1107 call 0x103a3be0 */
  push32(0x103a110cu); f_103a3be0();
  /* 103a110c mov esi, esp */
  ESI = (ESP);
  /* 103a110e push 0x103cb1f8 */
  push32((uint32_t)(0x103cb1f8u));
  /* 103a1113 push 0x103d0508 */
  push32((uint32_t)(0x103d0508u));
  /* 103a1118 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a111eu);
  /* 103a111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1123 call 0x103a3be0 */
  push32(0x103a1128u); f_103a3be0();
  /* 103a1128 mov esi, esp */
  ESI = (ESP);
  /* 103a112a push 0x103cb1f0 */
  push32((uint32_t)(0x103cb1f0u));
  /* 103a112f push 0x103d0510 */
  push32((uint32_t)(0x103d0510u));
  /* 103a1134 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a113au);
  /* 103a113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a113f call 0x103a3be0 */
  push32(0x103a1144u); f_103a3be0();
  /* 103a1144 mov esi, esp */
  ESI = (ESP);
  /* 103a1146 push 0x103cb1e8 */
  push32((uint32_t)(0x103cb1e8u));
  /* 103a114b push 0x103d0518 */
  push32((uint32_t)(0x103d0518u));
  /* 103a1150 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a1156u);
  /* 103a1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a115b call 0x103a3be0 */
  push32(0x103a1160u); f_103a3be0();
  /* 103a1160 mov esi, esp */
  ESI = (ESP);
  /* 103a1162 push 0x103cb1e0 */
  push32((uint32_t)(0x103cb1e0u));
  /* 103a1167 push 0x103d0520 */
  push32((uint32_t)(0x103d0520u));
  /* 103a116c call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a1172u);
  /* 103a1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1177 call 0x103a3be0 */
  push32(0x103a117cu); f_103a3be0();
  /* 103a117c mov esi, esp */
  ESI = (ESP);
  /* 103a117e push 0x103cb1d8 */
  push32((uint32_t)(0x103cb1d8u));
  /* 103a1183 push 0x103d0528 */
  push32((uint32_t)(0x103d0528u));
  /* 103a1188 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a118eu);
  /* 103a118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1193 call 0x103a3be0 */
  push32(0x103a1198u); f_103a3be0();
  /* 103a1198 mov esi, esp */
  ESI = (ESP);
  /* 103a119a push 0x103cb1d0 */
  push32((uint32_t)(0x103cb1d0u));
  /* 103a119f push 0x103d0530 */
  push32((uint32_t)(0x103d0530u));
  /* 103a11a4 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a11aau);
  /* 103a11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a11af call 0x103a3be0 */
  push32(0x103a11b4u); f_103a3be0();
  /* 103a11b4 mov esi, esp */
  ESI = (ESP);
  /* 103a11b6 push 0x103cb1c8 */
  push32((uint32_t)(0x103cb1c8u));
  /* 103a11bb push 0x103d0498 */
  push32((uint32_t)(0x103d0498u));
  /* 103a11c0 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a11c6u);
  /* 103a11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a11cb call 0x103a3be0 */
  push32(0x103a11d0u); f_103a3be0();
  /* 103a11d0 mov esi, esp */
  ESI = (ESP);
  /* 103a11d2 push 0x103cb1c0 */
  push32((uint32_t)(0x103cb1c0u));
  /* 103a11d7 push 0x103d0490 */
  push32((uint32_t)(0x103d0490u));
  /* 103a11dc call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a11e2u);
  /* 103a11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a11e7 call 0x103a3be0 */
  push32(0x103a11ecu); f_103a3be0();
  /* 103a11ec mov esi, esp */
  ESI = (ESP);
  /* 103a11ee push 0x103cb1b8 */
  push32((uint32_t)(0x103cb1b8u));
  /* 103a11f3 push 0x103d04a8 */
  push32((uint32_t)(0x103d04a8u));
  /* 103a11f8 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a11feu);
  /* 103a11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1203 call 0x103a3be0 */
  push32(0x103a1208u); f_103a3be0();
  /* 103a1208 mov esi, esp */
  ESI = (ESP);
  /* 103a120a push 0x103cb1b0 */
  push32((uint32_t)(0x103cb1b0u));
  /* 103a120f push 0x103d04a0 */
  push32((uint32_t)(0x103d04a0u));
  /* 103a1214 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a121au);
  /* 103a121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a121f call 0x103a3be0 */
  push32(0x103a1224u); f_103a3be0();
  /* 103a1224 mov esi, esp */
  ESI = (ESP);
  /* 103a1226 push 0x103cb1a4 */
  push32((uint32_t)(0x103cb1a4u));
  /* 103a122b push 0x103d0578 */
  push32((uint32_t)(0x103d0578u));
  /* 103a1230 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a1236u);
  /* 103a1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a123b call 0x103a3be0 */
  push32(0x103a1240u); f_103a3be0();
  /* 103a1240 mov esi, esp */
  ESI = (ESP);
  /* 103a1242 push 0x103cb19c */
  push32((uint32_t)(0x103cb19cu));
  /* 103a1247 push 0x103d04b8 */
  push32((uint32_t)(0x103d04b8u));
  /* 103a124c call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a1252u);
  /* 103a1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1257 call 0x103a3be0 */
  push32(0x103a125cu); f_103a3be0();
  /* 103a125c mov esi, esp */
  ESI = (ESP);
  /* 103a125e push 0x103cb194 */
  push32((uint32_t)(0x103cb194u));
  /* 103a1263 push 0x103d04b0 */
  push32((uint32_t)(0x103d04b0u));
  /* 103a1268 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a126eu);
  /* 103a126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1273 call 0x103a3be0 */
  push32(0x103a1278u); f_103a3be0();
  /* 103a1278 mov esi, esp */
  ESI = (ESP);
  /* 103a127a push 0x103cb18c */
  push32((uint32_t)(0x103cb18cu));
  /* 103a127f push 0x103d04c8 */
  push32((uint32_t)(0x103d04c8u));
  /* 103a1284 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a128au);
  /* 103a128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a128f call 0x103a3be0 */
  push32(0x103a1294u); f_103a3be0();
  /* 103a1294 mov esi, esp */
  ESI = (ESP);
  /* 103a1296 push 0x103cb184 */
  push32((uint32_t)(0x103cb184u));
  /* 103a129b push 0x103d04c0 */
  push32((uint32_t)(0x103d04c0u));
  /* 103a12a0 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a12a6u);
  /* 103a12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a12ab call 0x103a3be0 */
  push32(0x103a12b0u); f_103a3be0();
  /* 103a12b0 mov esi, esp */
  ESI = (ESP);
  /* 103a12b2 push 0x103cb17c */
  push32((uint32_t)(0x103cb17cu));
  /* 103a12b7 push 0x103d04d8 */
  push32((uint32_t)(0x103d04d8u));
  /* 103a12bc call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a12c2u);
  /* 103a12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a12c7 call 0x103a3be0 */
  push32(0x103a12ccu); f_103a3be0();
  /* 103a12cc mov esi, esp */
  ESI = (ESP);
  /* 103a12ce push 0x103cb174 */
  push32((uint32_t)(0x103cb174u));
  /* 103a12d3 push 0x103d04d0 */
  push32((uint32_t)(0x103d04d0u));
  /* 103a12d8 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a12deu);
  /* 103a12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a12e3 call 0x103a3be0 */
  push32(0x103a12e8u); f_103a3be0();
  /* 103a12e8 mov esi, esp */
  ESI = (ESP);
  /* 103a12ea push 0x103cb16c */
  push32((uint32_t)(0x103cb16cu));
  /* 103a12ef push 0x103d0450 */
  push32((uint32_t)(0x103d0450u));
  /* 103a12f4 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a12fau);
  /* 103a12fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a12fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a12ff call 0x103a3be0 */
  push32(0x103a1304u); f_103a3be0();
  /* 103a1304 mov esi, esp */
  ESI = (ESP);
  /* 103a1306 push 0x103cb164 */
  push32((uint32_t)(0x103cb164u));
  /* 103a130b push 0x103d0458 */
  push32((uint32_t)(0x103d0458u));
  /* 103a1310 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a1316u);
  /* 103a1316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a131b call 0x103a3be0 */
  push32(0x103a1320u); f_103a3be0();
  /* 103a1320 mov esi, esp */
  ESI = (ESP);
  /* 103a1322 push 0x103cb15c */
  push32((uint32_t)(0x103cb15cu));
  /* 103a1327 push 0x103d0460 */
  push32((uint32_t)(0x103d0460u));
  /* 103a132c call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a1332u);
  /* 103a1332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1337 call 0x103a3be0 */
  push32(0x103a133cu); f_103a3be0();
  /* 103a133c mov esi, esp */
  ESI = (ESP);
  /* 103a133e push 0x103cb154 */
  push32((uint32_t)(0x103cb154u));
  /* 103a1343 push 0x103d0468 */
  push32((uint32_t)(0x103d0468u));
  /* 103a1348 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a134eu);
  /* 103a134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1353 call 0x103a3be0 */
  push32(0x103a1358u); f_103a3be0();
  /* 103a1358 mov esi, esp */
  ESI = (ESP);
  /* 103a135a push 0x103cb14c */
  push32((uint32_t)(0x103cb14cu));
  /* 103a135f push 0x103d0470 */
  push32((uint32_t)(0x103d0470u));
  /* 103a1364 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a136au);
  /* 103a136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a136f call 0x103a3be0 */
  push32(0x103a1374u); f_103a3be0();
  /* 103a1374 mov esi, esp */
  ESI = (ESP);
  /* 103a1376 push 0x103cb144 */
  push32((uint32_t)(0x103cb144u));
  /* 103a137b push 0x103d0478 */
  push32((uint32_t)(0x103d0478u));
  /* 103a1380 call dword ptr [0x103d348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d348c))), 0x103a1386u);
  /* 103a1386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a138b call 0x103a3be0 */
  push32(0x103a1390u); f_103a3be0();
  /* 103a1390 mov esi, esp */
  ESI = (ESP);
  /* 103a1392 push 0x103cb13c */
  push32((uint32_t)(0x103cb13cu));
  /* 103a1397 push 0x103d0400 */
  push32((uint32_t)(0x103d0400u));
  /* 103a139c call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a13a2u);
  /* 103a13a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a13a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a13a7 call 0x103a3be0 */
  push32(0x103a13acu); f_103a3be0();
  /* 103a13ac mov esi, esp */
  ESI = (ESP);
  /* 103a13ae push 0x103cb134 */
  push32((uint32_t)(0x103cb134u));
  /* 103a13b3 push 0x103d03f8 */
  push32((uint32_t)(0x103d03f8u));
  /* 103a13b8 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a13beu);
  /* 103a13be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a13c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a13c3 call 0x103a3be0 */
  push32(0x103a13c8u); f_103a3be0();
  /* 103a13c8 mov esi, esp */
  ESI = (ESP);
  /* 103a13ca push 0x103cb12c */
  push32((uint32_t)(0x103cb12cu));
  /* 103a13cf push 0x103d0410 */
  push32((uint32_t)(0x103d0410u));
  /* 103a13d4 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a13dau);
  /* 103a13da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a13dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a13df call 0x103a3be0 */
  push32(0x103a13e4u); f_103a3be0();
  /* 103a13e4 mov esi, esp */
  ESI = (ESP);
  /* 103a13e6 push 0x103cb124 */
  push32((uint32_t)(0x103cb124u));
  /* 103a13eb push 0x103d0408 */
  push32((uint32_t)(0x103d0408u));
  /* 103a13f0 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a13f6u);
  /* 103a13f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a13fb call 0x103a3be0 */
  push32(0x103a1400u); f_103a3be0();
  /* 103a1400 mov esi, esp */
  ESI = (ESP);
  /* 103a1402 push 0x103cb11c */
  push32((uint32_t)(0x103cb11cu));
  /* 103a1407 push 0x103d0420 */
  push32((uint32_t)(0x103d0420u));
  /* 103a140c call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a1412u);
  /* 103a1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1417 call 0x103a3be0 */
  push32(0x103a141cu); f_103a3be0();
  /* 103a141c mov esi, esp */
  ESI = (ESP);
  /* 103a141e push 0x103cb114 */
  push32((uint32_t)(0x103cb114u));
  /* 103a1423 push 0x103d0418 */
  push32((uint32_t)(0x103d0418u));
  /* 103a1428 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a142eu);
  /* 103a142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1433 call 0x103a3be0 */
  push32(0x103a1438u); f_103a3be0();
  /* 103a1438 mov esi, esp */
  ESI = (ESP);
  /* 103a143a push 0x103cb10c */
  push32((uint32_t)(0x103cb10cu));
  /* 103a143f push 0x103d0430 */
  push32((uint32_t)(0x103d0430u));
  /* 103a1444 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a144au);
  /* 103a144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a144f call 0x103a3be0 */
  push32(0x103a1454u); f_103a3be0();
  /* 103a1454 mov esi, esp */
  ESI = (ESP);
  /* 103a1456 push 0x103cb104 */
  push32((uint32_t)(0x103cb104u));
  /* 103a145b push 0x103d0428 */
  push32((uint32_t)(0x103d0428u));
  /* 103a1460 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a1466u);
  /* 103a1466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a146b call 0x103a3be0 */
  push32(0x103a1470u); f_103a3be0();
  /* 103a1470 mov esi, esp */
  ESI = (ESP);
  /* 103a1472 push 0x103cb0fc */
  push32((uint32_t)(0x103cb0fcu));
  /* 103a1477 push 0x103d0440 */
  push32((uint32_t)(0x103d0440u));
  /* 103a147c call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a1482u);
  /* 103a1482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1487 call 0x103a3be0 */
  push32(0x103a148cu); f_103a3be0();
  /* 103a148c mov esi, esp */
  ESI = (ESP);
  /* 103a148e push 0x103cb0f4 */
  push32((uint32_t)(0x103cb0f4u));
  /* 103a1493 push 0x103d0438 */
  push32((uint32_t)(0x103d0438u));
  /* 103a1498 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a149eu);
  /* 103a149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a14a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a14a3 call 0x103a3be0 */
  push32(0x103a14a8u); f_103a3be0();
  /* 103a14a8 mov esi, esp */
  ESI = (ESP);
  /* 103a14aa push 0x103cb0e8 */
  push32((uint32_t)(0x103cb0e8u));
  /* 103a14af push 0x103d0548 */
  push32((uint32_t)(0x103d0548u));
  /* 103a14b4 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a14bau);
  /* 103a14ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a14bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a14bf call 0x103a3be0 */
  push32(0x103a14c4u); f_103a3be0();
  /* 103a14c4 mov esi, esp */
  ESI = (ESP);
  /* 103a14c6 push 0x103cb0dc */
  push32((uint32_t)(0x103cb0dcu));
  /* 103a14cb push 0x103d0568 */
  push32((uint32_t)(0x103d0568u));
  /* 103a14d0 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a14d6u);
  /* 103a14d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a14d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a14db call 0x103a3be0 */
  push32(0x103a14e0u); f_103a3be0();
  /* 103a14e0 mov esi, esp */
  ESI = (ESP);
  /* 103a14e2 push 0x103cb0d0 */
  push32((uint32_t)(0x103cb0d0u));
  /* 103a14e7 push 0x103d0570 */
  push32((uint32_t)(0x103d0570u));
  /* 103a14ec call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a14f2u);
  /* 103a14f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a14f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a14f7 call 0x103a3be0 */
  push32(0x103a14fcu); f_103a3be0();
  /* 103a14fc mov esi, esp */
  ESI = (ESP);
  /* 103a14fe push 0x103cb0c4 */
  push32((uint32_t)(0x103cb0c4u));
  /* 103a1503 push 0x103d0558 */
  push32((uint32_t)(0x103d0558u));
  /* 103a1508 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a150eu);
  /* 103a150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1513 call 0x103a3be0 */
  push32(0x103a1518u); f_103a3be0();
  /* 103a1518 mov esi, esp */
  ESI = (ESP);
  /* 103a151a push 0x103cb0b8 */
  push32((uint32_t)(0x103cb0b8u));
  /* 103a151f push 0x103d0560 */
  push32((uint32_t)(0x103d0560u));
  /* 103a1524 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a152au);
  /* 103a152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a152f call 0x103a3be0 */
  push32(0x103a1534u); f_103a3be0();
  /* 103a1534 mov esi, esp */
  ESI = (ESP);
  /* 103a1536 push 0x103cb0ac */
  push32((uint32_t)(0x103cb0acu));
  /* 103a153b push 0x103d0550 */
  push32((uint32_t)(0x103d0550u));
  /* 103a1540 call dword ptr [0x103d3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3490))), 0x103a1546u);
  /* 103a1546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a154b call 0x103a3be0 */
  push32(0x103a1550u); f_103a3be0();
  /* 103a1550 mov esi, esp */
  ESI = (ESP);
  /* 103a1552 push 0x103cb0a4 */
  push32((uint32_t)(0x103cb0a4u));
  /* 103a1557 push 0x103d03f0 */
  push32((uint32_t)(0x103d03f0u));
  /* 103a155c call dword ptr [0x103d3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3494))), 0x103a1562u);
  /* 103a1562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1567 call 0x103a3be0 */
  push32(0x103a156cu); f_103a3be0();
  /* 103a156c mov esi, esp */
  ESI = (ESP);
  /* 103a156e push 0x103cb094 */
  push32((uint32_t)(0x103cb094u));
  /* 103a1573 push 0x103d0448 */
  push32((uint32_t)(0x103d0448u));
  /* 103a1578 call dword ptr [0x103d3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3498))), 0x103a157eu);
  /* 103a157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1583 call 0x103a3be0 */
  push32(0x103a1588u); f_103a3be0();
  /* 103a1588 mov esi, esp */
  ESI = (ESP);
  /* 103a158a push 0x103cb07c */
  push32((uint32_t)(0x103cb07cu));
  /* 103a158f push 0x103d0480 */
  push32((uint32_t)(0x103d0480u));
  /* 103a1594 call dword ptr [0x103d3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3498))), 0x103a159au);
  /* 103a159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a159f call 0x103a3be0 */
  push32(0x103a15a4u); f_103a3be0();
  /* 103a15a4 mov esi, esp */
  ESI = (ESP);
  /* 103a15a6 push 0x103cb06c */
  push32((uint32_t)(0x103cb06cu));
  /* 103a15ab push 0x103d03e0 */
  push32((uint32_t)(0x103d03e0u));
  /* 103a15b0 call dword ptr [0x103d3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3498))), 0x103a15b6u);
  /* 103a15b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a15b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a15bb call 0x103a3be0 */
  push32(0x103a15c0u); f_103a3be0();
  /* 103a15c0 mov esi, esp */
  ESI = (ESP);
  /* 103a15c2 push 0x103cb060 */
  push32((uint32_t)(0x103cb060u));
  /* 103a15c7 push 0x103d0538 */
  push32((uint32_t)(0x103d0538u));
  /* 103a15cc call dword ptr [0x103d3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3498))), 0x103a15d2u);
  /* 103a15d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a15d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a15d7 call 0x103a3be0 */
  push32(0x103a15dcu); f_103a3be0();
  /* 103a15dc mov esi, esp */
  ESI = (ESP);
  /* 103a15de push 0x103cb048 */
  push32((uint32_t)(0x103cb048u));
  /* 103a15e3 push 0x103d0540 */
  push32((uint32_t)(0x103d0540u));
  /* 103a15e8 call dword ptr [0x103d3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3498))), 0x103a15eeu);
  /* 103a15ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a15f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a15f3 call 0x103a3be0 */
  push32(0x103a15f8u); f_103a3be0();
  /* 103a15f8 mov esi, esp */
  ESI = (ESP);
  /* 103a15fa push 0x103cb03c */
  push32((uint32_t)(0x103cb03cu));
  /* 103a15ff push 0x103d03e8 */
  push32((uint32_t)(0x103d03e8u));
  /* 103a1604 call dword ptr [0x103d3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3498))), 0x103a160au);
  /* 103a160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a160f call 0x103a3be0 */
  push32(0x103a1614u); f_103a3be0();
  /* 103a1614 mov esi, esp */
  ESI = (ESP);
  /* 103a1616 push 8 */
  push32((uint32_t)(0x8u));
  /* 103a1618 push 0x103d04e8 */
  push32((uint32_t)(0x103d04e8u));
  /* 103a161d call dword ptr [0x103d349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d349c))), 0x103a1623u);
  /* 103a1623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1626 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1628 call 0x103a3be0 */
  push32(0x103a162du); f_103a3be0();
  /* 103a162d mov esi, esp */
  ESI = (ESP);
  /* 103a162f push 8 */
  push32((uint32_t)(0x8u));
  /* 103a1631 push 0x103d0488 */
  push32((uint32_t)(0x103d0488u));
  /* 103a1636 call dword ptr [0x103d349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d349c))), 0x103a163cu);
  /* 103a163c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a163f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1641 call 0x103a3be0 */
  push32(0x103a1646u); f_103a3be0();
  /* 103a1646 mov esi, esp */
  ESI = (ESP);
  /* 103a1648 push 8 */
  push32((uint32_t)(0x8u));
  /* 103a164a push 0x103d04e0 */
  push32((uint32_t)(0x103d04e0u));
  /* 103a164f call dword ptr [0x103d349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d349c))), 0x103a1655u);
  /* 103a1655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1658 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a165a call 0x103a3be0 */
  push32(0x103a165fu); f_103a3be0();
  /* 103a165f mov esi, esp */
  ESI = (ESP);
  /* 103a1661 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103a1663 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1665 call dword ptr [0x103d34a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d34a0))), 0x103a166bu);
  /* 103a166b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a166e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1670 call 0x103a3be0 */
  push32(0x103a1675u); f_103a3be0();
  /* 103a1675 mov esi, esp */
  ESI = (ESP);
  /* 103a1677 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103a1679 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a167b call dword ptr [0x103d34a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d34a0))), 0x103a1681u);
  /* 103a1681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1684 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1686 call 0x103a3be0 */
  push32(0x103a168bu); f_103a3be0();
  /* 103a168b mov esi, esp */
  ESI = (ESP);
  /* 103a168d push 0x22 */
  push32((uint32_t)(0x22u));
  /* 103a168f push 1 */
  push32((uint32_t)(0x1u));
  /* 103a1691 call dword ptr [0x103d34a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d34a0))), 0x103a1697u);
  /* 103a1697 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a169a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a169c call 0x103a3be0 */
  push32(0x103a16a1u); f_103a3be0();
  /* 103a16a1 mov esi, esp */
  ESI = (ESP);
  /* 103a16a3 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 103a16a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 103a16a7 call dword ptr [0x103d34a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d34a0))), 0x103a16adu);
  /* 103a16ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a16b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a16b2 call 0x103a3be0 */
  push32(0x103a16b7u); f_103a3be0();
  /* 103a16b7 mov esi, esp */
  ESI = (ESP);
  /* 103a16b9 push 0x103d03f0 */
  push32((uint32_t)(0x103d03f0u));
  /* 103a16be push 0 */
  push32((uint32_t)(0x0u));
  /* 103a16c0 call dword ptr [0x103d34a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d34a4))), 0x103a16c6u);
  /* 103a16c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a16c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a16cb call 0x103a3be0 */
  push32(0x103a16d0u); f_103a3be0();
  /* 103a16d0 mov esi, esp */
  ESI = (ESP);
  /* 103a16d2 push 0x103cb030 */
  push32((uint32_t)(0x103cb030u));
  /* 103a16d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a16d9 call dword ptr [0x103d34a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d34a8))), 0x103a16dfu);
  /* 103a16df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a16e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a16e4 call 0x103a3be0 */
  push32(0x103a16e9u); f_103a3be0();
  /* 103a16e9 mov esi, esp */
  ESI = (ESP);
  /* 103a16eb push 0x103cb028 */
  push32((uint32_t)(0x103cb028u));
  /* 103a16f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a16f2 call dword ptr [0x103d34a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d34a8))), 0x103a16f8u);
  /* 103a16f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a16fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a16fd call 0x103a3be0 */
  push32(0x103a1702u); f_103a3be0();
  /* 103a1702 mov esi, esp */
  ESI = (ESP);
  /* 103a1704 push 0x103cb01c */
  push32((uint32_t)(0x103cb01cu));
  /* 103a1709 push 5 */
  push32((uint32_t)(0x5u));
  /* 103a170b call dword ptr [0x103d34a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d34a8))), 0x103a1711u);
  /* 103a1711 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1714 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1716 call 0x103a3be0 */
  push32(0x103a171bu); f_103a3be0();
  /* 103a171b pop edi */
  EDI = (pop32());
  /* 103a171c pop esi */
  ESI = (pop32());
  /* 103a171d pop ebx */
  EBX = (pop32());
  /* 103a171e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1721 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1723 call 0x103a3be0 */
  push32(0x103a1728u); f_103a3be0();
  /* 103a1728 mov esp, ebp */
  ESP = (EBP);
  /* 103a172a pop ebp */
  EBP = (pop32());
  /* 103a172b ret  */
  ESPCHK(0x103a10a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100018d0 @ 0x103a18d0 (6872 bytes, 1997 insns) */
void f_103a18d0(void) {
  FTRACE(0x103a18d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a18d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a18d1 mov ebp, esp */
  EBP = (ESP);
  /* 103a18d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a18d6 push ebx */
  push32((uint32_t)(EBX));
  /* 103a18d7 push esi */
  push32((uint32_t)(ESI));
  /* 103a18d8 push edi */
  push32((uint32_t)(EDI));
  /* 103a18d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 103a18dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 103a18e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 103a18e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103a18e8 mov esi, esp */
  ESI = (ESP);
  /* 103a18ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 103a18ec call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a18f2u);
  /* 103a18f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a18f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a18f7 call 0x103a3be0 */
  push32(0x103a18fcu); f_103a3be0();
  /* 103a18fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1903 je 0x103a1a52 */
  if (C.zf) goto L_103a1a52;
  /* 103a1909 mov esi, esp */
  ESI = (ESP);
  /* 103a190b push 0 */
  push32((uint32_t)(0x0u));
  /* 103a190d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 103a190f call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a1915u);
  /* 103a1915 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1918 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a191a call 0x103a3be0 */
  push32(0x103a191fu); f_103a3be0();
  /* 103a191f mov esi, esp */
  ESI = (ESP);
  /* 103a1921 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1923 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 103a1925 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a192bu);
  /* 103a192b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a192e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1930 call 0x103a3be0 */
  push32(0x103a1935u); f_103a3be0();
  /* 103a1935 mov esi, esp */
  ESI = (ESP);
  /* 103a1937 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 103a193c push 3 */
  push32((uint32_t)(0x3u));
  /* 103a193e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1940 call dword ptr [0x103d342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d342c))), 0x103a1946u);
  /* 103a1946 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1949 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a194b call 0x103a3be0 */
  push32(0x103a1950u); f_103a3be0();
  /* 103a1950 mov esi, esp */
  ESI = (ESP);
  /* 103a1952 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 103a1957 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a1959 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a195b call dword ptr [0x103d342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d342c))), 0x103a1961u);
  /* 103a1961 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1964 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1966 call 0x103a3be0 */
  push32(0x103a196bu); f_103a3be0();
  /* 103a196b mov esi, esp */
  ESI = (ESP);
  /* 103a196d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 103a1972 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1974 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1976 call dword ptr [0x103d342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d342c))), 0x103a197cu);
  /* 103a197c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a197f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1981 call 0x103a3be0 */
  push32(0x103a1986u); f_103a3be0();
  /* 103a1986 mov esi, esp */
  ESI = (ESP);
  /* 103a1988 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a198a push 2 */
  push32((uint32_t)(0x2u));
  /* 103a198c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a198e call dword ptr [0x103d342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d342c))), 0x103a1994u);
  /* 103a1994 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1997 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1999 call 0x103a3be0 */
  push32(0x103a199eu); f_103a3be0();
  /* 103a199e mov esi, esp */
  ESI = (ESP);
  /* 103a19a0 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 103a19a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 103a19a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a19a9 call dword ptr [0x103d342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d342c))), 0x103a19afu);
  /* 103a19af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a19b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a19b4 call 0x103a3be0 */
  push32(0x103a19b9u); f_103a3be0();
  /* 103a19b9 mov esi, esp */
  ESI = (ESP);
  /* 103a19bb push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 103a19c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a19c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a19c4 call dword ptr [0x103d342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d342c))), 0x103a19cau);
  /* 103a19ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a19cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a19cf call 0x103a3be0 */
  push32(0x103a19d4u); f_103a3be0();
  /* 103a19d4 mov esi, esp */
  ESI = (ESP);
  /* 103a19d6 push 0x103cb36c */
  push32((uint32_t)(0x103cb36cu));
  /* 103a19db call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a19e1u);
  /* 103a19e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a19e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a19e6 call 0x103a3be0 */
  push32(0x103a19ebu); f_103a3be0();
  /* 103a19eb mov esi, esp */
  ESI = (ESP);
  /* 103a19ed push 0x103cb360 */
  push32((uint32_t)(0x103cb360u));
  /* 103a19f2 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a19f8u);
  /* 103a19f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a19fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a19fd call 0x103a3be0 */
  push32(0x103a1a02u); f_103a3be0();
  /* 103a1a02 mov esi, esp */
  ESI = (ESP);
  /* 103a1a04 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 103a1a06 call dword ptr [0x103d3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3434))), 0x103a1a0cu);
  /* 103a1a0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1a0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1a11 call 0x103a3be0 */
  push32(0x103a1a16u); f_103a3be0();
  /* 103a1a16 mov esi, esp */
  ESI = (ESP);
  /* 103a1a18 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 103a1a1a call dword ptr [0x103d3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3434))), 0x103a1a20u);
  /* 103a1a20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1a23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1a25 call 0x103a3be0 */
  push32(0x103a1a2au); f_103a3be0();
  /* 103a1a2a mov esi, esp */
  ESI = (ESP);
  /* 103a1a2c push 0x47 */
  push32((uint32_t)(0x47u));
  /* 103a1a2e call dword ptr [0x103d3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3434))), 0x103a1a34u);
  /* 103a1a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1a37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1a39 call 0x103a3be0 */
  push32(0x103a1a3eu); f_103a3be0();
  /* 103a1a3e mov esi, esp */
  ESI = (ESP);
  /* 103a1a40 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 103a1a42 call dword ptr [0x103d3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3434))), 0x103a1a48u);
  /* 103a1a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1a4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1a4d call 0x103a3be0 */
  push32(0x103a1a52u); f_103a3be0();
L_103a1a52:;
  /* 103a1a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1a54 push 0x103d0540 */
  push32((uint32_t)(0x103d0540u));
  /* 103a1a59 call 0x103a100f */
  push32(0x103a1a5eu); f_103a100f();
  /* 103a1a5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1a63 jle 0x103a1a98 */
  if ((C.zf||C.sf!=C.of)) goto L_103a1a98;
  /* 103a1a65 mov esi, esp */
  ESI = (ESP);
  /* 103a1a67 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 103a1a69 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1a6fu);
  /* 103a1a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1a72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1a74 call 0x103a3be0 */
  push32(0x103a1a79u); f_103a3be0();
  /* 103a1a79 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1a7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1a80 jne 0x103a1a98 */
  if (!C.zf) goto L_103a1a98;
  /* 103a1a82 mov esi, esp */
  ESI = (ESP);
  /* 103a1a84 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a1a86 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 103a1a88 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a1a8eu);
  /* 103a1a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1a91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1a93 call 0x103a3be0 */
  push32(0x103a1a98u); f_103a3be0();
L_103a1a98:;
  /* 103a1a98 mov esi, esp */
  ESI = (ESP);
  /* 103a1a9a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 103a1a9c call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1aa2u);
  /* 103a1aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1aa5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1aa7 call 0x103a3be0 */
  push32(0x103a1aacu); f_103a3be0();
  /* 103a1aac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1ab1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1ab3 je 0x103a1bb9 */
  if (C.zf) goto L_103a1bb9;
  /* 103a1ab9 mov esi, esp */
  ESI = (ESP);
  /* 103a1abb push 0xe */
  push32((uint32_t)(0xeu));
  /* 103a1abd call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1ac3u);
  /* 103a1ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1ac6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1ac8 call 0x103a3be0 */
  push32(0x103a1acdu); f_103a3be0();
  /* 103a1acd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1ad4 je 0x103a1bb9 */
  if (C.zf) goto L_103a1bb9;
  /* 103a1ada mov esi, esp */
  ESI = (ESP);
  /* 103a1adc push 0x16 */
  push32((uint32_t)(0x16u));
  /* 103a1ade call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1ae4u);
  /* 103a1ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1ae7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1ae9 call 0x103a3be0 */
  push32(0x103a1aeeu); f_103a3be0();
  /* 103a1aee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1af3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1af5 je 0x103a1bb9 */
  if (C.zf) goto L_103a1bb9;
  /* 103a1afb push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1afd push 0x103d0540 */
  push32((uint32_t)(0x103d0540u));
  /* 103a1b02 call 0x103a100f */
  push32(0x103a1b07u); f_103a100f();
  /* 103a1b07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1b0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1b0c jne 0x103a1bb9 */
  if (!C.zf) goto L_103a1bb9;
  /* 103a1b12 mov esi, esp */
  ESI = (ESP);
  /* 103a1b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1b16 push 0x103d0480 */
  push32((uint32_t)(0x103d0480u));
  /* 103a1b1b call dword ptr [0x103d3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3438))), 0x103a1b21u);
  /* 103a1b21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1b24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1b26 call 0x103a3be0 */
  push32(0x103a1b2bu); f_103a3be0();
  /* 103a1b2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1b2d je 0x103a1b67 */
  if (C.zf) goto L_103a1b67;
  /* 103a1b2f mov esi, esp */
  ESI = (ESP);
  /* 103a1b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1b33 push 3 */
  push32((uint32_t)(0x3u));
  /* 103a1b35 call dword ptr [0x103d343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d343c))), 0x103a1b3bu);
  /* 103a1b3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1b3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1b40 call 0x103a3be0 */
  push32(0x103a1b45u); f_103a3be0();
  /* 103a1b45 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1b48 jge 0x103a1bb9 */
  if ((C.sf==C.of)) goto L_103a1bb9;
  /* 103a1b4a mov esi, esp */
  ESI = (ESP);
  /* 103a1b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1b4e push 0x103d03e8 */
  push32((uint32_t)(0x103d03e8u));
  /* 103a1b53 call dword ptr [0x103d3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3438))), 0x103a1b59u);
  /* 103a1b59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1b5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1b5e call 0x103a3be0 */
  push32(0x103a1b63u); f_103a3be0();
  /* 103a1b63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1b65 jne 0x103a1bb9 */
  if (!C.zf) goto L_103a1bb9;
L_103a1b67:;
  /* 103a1b67 mov esi, esp */
  ESI = (ESP);
  /* 103a1b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1b6b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 103a1b6d call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a1b73u);
  /* 103a1b73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1b76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1b78 call 0x103a3be0 */
  push32(0x103a1b7du); f_103a3be0();
  /* 103a1b7d mov esi, esp */
  ESI = (ESP);
  /* 103a1b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1b81 push 0xe */
  push32((uint32_t)(0xeu));
  /* 103a1b83 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a1b89u);
  /* 103a1b89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1b8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1b8e call 0x103a3be0 */
  push32(0x103a1b93u); f_103a3be0();
  /* 103a1b93 mov esi, esp */
  ESI = (ESP);
  /* 103a1b95 push 0x103cb354 */
  push32((uint32_t)(0x103cb354u));
  /* 103a1b9a call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a1ba0u);
  /* 103a1ba0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1ba3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1ba5 call 0x103a3be0 */
  push32(0x103a1baau); f_103a3be0();
  /* 103a1baa mov esi, esp */
  ESI = (ESP);
  /* 103a1bac call dword ptr [0x103d3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3440))), 0x103a1bb2u);
  /* 103a1bb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1bb4 call 0x103a3be0 */
  push32(0x103a1bb9u); f_103a3be0();
L_103a1bb9:;
  /* 103a1bb9 mov esi, esp */
  ESI = (ESP);
  /* 103a1bbb push 0xf */
  push32((uint32_t)(0xfu));
  /* 103a1bbd call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1bc3u);
  /* 103a1bc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1bc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1bc8 call 0x103a3be0 */
  push32(0x103a1bcdu); f_103a3be0();
  /* 103a1bcd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1bd4 je 0x103a1d53 */
  if (C.zf) goto L_103a1d53;
  /* 103a1bda mov esi, esp */
  ESI = (ESP);
  /* 103a1bdc push 0xe */
  push32((uint32_t)(0xeu));
  /* 103a1bde call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1be4u);
  /* 103a1be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1be7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1be9 call 0x103a3be0 */
  push32(0x103a1beeu); f_103a3be0();
  /* 103a1bee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1bf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1bf5 je 0x103a1d53 */
  if (C.zf) goto L_103a1d53;
  /* 103a1bfb mov esi, esp */
  ESI = (ESP);
  /* 103a1bfd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 103a1bff call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1c05u);
  /* 103a1c05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1c08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1c0a call 0x103a3be0 */
  push32(0x103a1c0fu); f_103a3be0();
  /* 103a1c0f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1c14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1c16 je 0x103a1d53 */
  if (C.zf) goto L_103a1d53;
  /* 103a1c1c push 0x103d03f8 */
  push32((uint32_t)(0x103d03f8u));
  /* 103a1c21 call 0x103a1005 */
  push32(0x103a1c26u); f_103a1005();
  /* 103a1c26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1c2b jne 0x103a1d53 */
  if (!C.zf) goto L_103a1d53;
  /* 103a1c31 mov esi, esp */
  ESI = (ESP);
  /* 103a1c33 push 0x103d0400 */
  push32((uint32_t)(0x103d0400u));
  /* 103a1c38 push 0x103d0450 */
  push32((uint32_t)(0x103d0450u));
  /* 103a1c3d call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a1c43u);
  /* 103a1c43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1c46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1c48 call 0x103a3be0 */
  push32(0x103a1c4du); f_103a3be0();
  /* 103a1c4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1c4f jne 0x103a1d53 */
  if (!C.zf) goto L_103a1d53;
  /* 103a1c55 mov esi, esp */
  ESI = (ESP);
  /* 103a1c57 push 0x103d0400 */
  push32((uint32_t)(0x103d0400u));
  /* 103a1c5c push 0x103d0458 */
  push32((uint32_t)(0x103d0458u));
  /* 103a1c61 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a1c67u);
  /* 103a1c67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1c6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1c6c call 0x103a3be0 */
  push32(0x103a1c71u); f_103a3be0();
  /* 103a1c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1c73 jne 0x103a1d53 */
  if (!C.zf) goto L_103a1d53;
  /* 103a1c79 mov esi, esp */
  ESI = (ESP);
  /* 103a1c7b push 0x103d0400 */
  push32((uint32_t)(0x103d0400u));
  /* 103a1c80 push 0x103d0460 */
  push32((uint32_t)(0x103d0460u));
  /* 103a1c85 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a1c8bu);
  /* 103a1c8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1c8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1c90 call 0x103a3be0 */
  push32(0x103a1c95u); f_103a3be0();
  /* 103a1c95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1c97 jne 0x103a1d53 */
  if (!C.zf) goto L_103a1d53;
  /* 103a1c9d mov esi, esp */
  ESI = (ESP);
  /* 103a1c9f push 0x103d0400 */
  push32((uint32_t)(0x103d0400u));
  /* 103a1ca4 push 0x103d0468 */
  push32((uint32_t)(0x103d0468u));
  /* 103a1ca9 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a1cafu);
  /* 103a1caf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1cb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1cb4 call 0x103a3be0 */
  push32(0x103a1cb9u); f_103a3be0();
  /* 103a1cb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1cbb jne 0x103a1d53 */
  if (!C.zf) goto L_103a1d53;
  /* 103a1cc1 mov esi, esp */
  ESI = (ESP);
  /* 103a1cc3 push 0x103d0400 */
  push32((uint32_t)(0x103d0400u));
  /* 103a1cc8 push 0x103d0470 */
  push32((uint32_t)(0x103d0470u));
  /* 103a1ccd call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a1cd3u);
  /* 103a1cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1cd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1cd8 call 0x103a3be0 */
  push32(0x103a1cddu); f_103a3be0();
  /* 103a1cdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1cdf jne 0x103a1d53 */
  if (!C.zf) goto L_103a1d53;
  /* 103a1ce1 mov esi, esp */
  ESI = (ESP);
  /* 103a1ce3 push 0x103d0400 */
  push32((uint32_t)(0x103d0400u));
  /* 103a1ce8 push 0x103d0478 */
  push32((uint32_t)(0x103d0478u));
  /* 103a1ced call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a1cf3u);
  /* 103a1cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1cf6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1cf8 call 0x103a3be0 */
  push32(0x103a1cfdu); f_103a3be0();
  /* 103a1cfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1cff jne 0x103a1d53 */
  if (!C.zf) goto L_103a1d53;
  /* 103a1d01 mov esi, esp */
  ESI = (ESP);
  /* 103a1d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1d05 push 0xf */
  push32((uint32_t)(0xfu));
  /* 103a1d07 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a1d0du);
  /* 103a1d0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1d10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1d12 call 0x103a3be0 */
  push32(0x103a1d17u); f_103a3be0();
  /* 103a1d17 mov esi, esp */
  ESI = (ESP);
  /* 103a1d19 push 0x103cb348 */
  push32((uint32_t)(0x103cb348u));
  /* 103a1d1e call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a1d24u);
  /* 103a1d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1d27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1d29 call 0x103a3be0 */
  push32(0x103a1d2eu); f_103a3be0();
  /* 103a1d2e mov esi, esp */
  ESI = (ESP);
  /* 103a1d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1d32 push 0xe */
  push32((uint32_t)(0xeu));
  /* 103a1d34 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a1d3au);
  /* 103a1d3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1d3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1d3f call 0x103a3be0 */
  push32(0x103a1d44u); f_103a3be0();
  /* 103a1d44 mov esi, esp */
  ESI = (ESP);
  /* 103a1d46 call dword ptr [0x103d3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3440))), 0x103a1d4cu);
  /* 103a1d4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1d4e call 0x103a3be0 */
  push32(0x103a1d53u); f_103a3be0();
L_103a1d53:;
  /* 103a1d53 mov esi, esp */
  ESI = (ESP);
  /* 103a1d55 push 0xe */
  push32((uint32_t)(0xeu));
  /* 103a1d57 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1d5du);
  /* 103a1d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1d60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1d62 call 0x103a3be0 */
  push32(0x103a1d67u); f_103a3be0();
  /* 103a1d67 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1d6e je 0x103a1ddb */
  if (C.zf) goto L_103a1ddb;
  /* 103a1d70 mov esi, esp */
  ESI = (ESP);
  /* 103a1d72 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 103a1d74 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1d7au);
  /* 103a1d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1d7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1d7f call 0x103a3be0 */
  push32(0x103a1d84u); f_103a3be0();
  /* 103a1d84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1d8b je 0x103a1ddb */
  if (C.zf) goto L_103a1ddb;
  /* 103a1d8d push 0x103d0410 */
  push32((uint32_t)(0x103d0410u));
  /* 103a1d92 call 0x103a1005 */
  push32(0x103a1d97u); f_103a1005();
  /* 103a1d97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1d9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1d9d jne 0x103a1ddb */
  if (!C.zf) goto L_103a1ddb;
  /* 103a1d9f mov esi, esp */
  ESI = (ESP);
  /* 103a1da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1da3 push 0xe */
  push32((uint32_t)(0xeu));
  /* 103a1da5 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a1dabu);
  /* 103a1dab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1dae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1db0 call 0x103a3be0 */
  push32(0x103a1db5u); f_103a3be0();
  /* 103a1db5 mov esi, esp */
  ESI = (ESP);
  /* 103a1db7 push 0x103cb33c */
  push32((uint32_t)(0x103cb33cu));
  /* 103a1dbc call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a1dc2u);
  /* 103a1dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1dc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1dc7 call 0x103a3be0 */
  push32(0x103a1dccu); f_103a3be0();
  /* 103a1dcc mov esi, esp */
  ESI = (ESP);
  /* 103a1dce call dword ptr [0x103d3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3440))), 0x103a1dd4u);
  /* 103a1dd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1dd6 call 0x103a3be0 */
  push32(0x103a1ddbu); f_103a3be0();
L_103a1ddb:;
  /* 103a1ddb mov esi, esp */
  ESI = (ESP);
  /* 103a1ddd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103a1ddf call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1de5u);
  /* 103a1de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1de8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1dea call 0x103a3be0 */
  push32(0x103a1defu); f_103a3be0();
  /* 103a1def and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1df4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1df6 je 0x103a1e73 */
  if (C.zf) goto L_103a1e73;
  /* 103a1df8 push 0x103d0420 */
  push32((uint32_t)(0x103d0420u));
  /* 103a1dfd call 0x103a1005 */
  push32(0x103a1e02u); f_103a1005();
  /* 103a1e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1e05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1e07 jne 0x103a1e73 */
  if (!C.zf) goto L_103a1e73;
  /* 103a1e09 push 0x103d0418 */
  push32((uint32_t)(0x103d0418u));
  /* 103a1e0e call 0x103a1005 */
  push32(0x103a1e13u); f_103a1005();
  /* 103a1e13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1e16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1e18 jne 0x103a1e73 */
  if (!C.zf) goto L_103a1e73;
  /* 103a1e1a mov esi, esp */
  ESI = (ESP);
  /* 103a1e1c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1e1e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103a1e20 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a1e26u);
  /* 103a1e26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1e29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1e2b call 0x103a3be0 */
  push32(0x103a1e30u); f_103a3be0();
  /* 103a1e30 mov esi, esp */
  ESI = (ESP);
  /* 103a1e32 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103a1e34 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1e3au);
  /* 103a1e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1e3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1e3f call 0x103a3be0 */
  push32(0x103a1e44u); f_103a3be0();
  /* 103a1e44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1e49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1e4b jne 0x103a1e73 */
  if (!C.zf) goto L_103a1e73;
  /* 103a1e4d mov esi, esp */
  ESI = (ESP);
  /* 103a1e4f push 0x103cb330 */
  push32((uint32_t)(0x103cb330u));
  /* 103a1e54 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a1e5au);
  /* 103a1e5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1e5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1e5f call 0x103a3be0 */
  push32(0x103a1e64u); f_103a3be0();
  /* 103a1e64 mov esi, esp */
  ESI = (ESP);
  /* 103a1e66 call dword ptr [0x103d3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3448))), 0x103a1e6cu);
  /* 103a1e6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1e6e call 0x103a3be0 */
  push32(0x103a1e73u); f_103a3be0();
L_103a1e73:;
  /* 103a1e73 mov esi, esp */
  ESI = (ESP);
  /* 103a1e75 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103a1e77 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1e7du);
  /* 103a1e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1e80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1e82 call 0x103a3be0 */
  push32(0x103a1e87u); f_103a3be0();
  /* 103a1e87 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1e8e je 0x103a1fdd */
  if (C.zf) goto L_103a1fdd;
  /* 103a1e94 mov esi, esp */
  ESI = (ESP);
  /* 103a1e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1e98 push 0x103d0538 */
  push32((uint32_t)(0x103d0538u));
  /* 103a1e9d call dword ptr [0x103d3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3438))), 0x103a1ea3u);
  /* 103a1ea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1ea6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1ea8 call 0x103a3be0 */
  push32(0x103a1eadu); f_103a3be0();
  /* 103a1ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1eaf jle 0x103a1fdd */
  if ((C.zf||C.sf!=C.of)) goto L_103a1fdd;
  /* 103a1eb5 mov esi, esp */
  ESI = (ESP);
  /* 103a1eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1eb9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103a1ebb call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a1ec1u);
  /* 103a1ec1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1ec4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1ec6 call 0x103a3be0 */
  push32(0x103a1ecbu); f_103a3be0();
  /* 103a1ecb mov esi, esp */
  ESI = (ESP);
  /* 103a1ecd push 0x103cb324 */
  push32((uint32_t)(0x103cb324u));
  /* 103a1ed2 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a1ed8u);
  /* 103a1ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1edb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1edd call 0x103a3be0 */
  push32(0x103a1ee2u); f_103a3be0();
  /* 103a1ee2 mov esi, esp */
  ESI = (ESP);
  /* 103a1ee4 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103a1ee6 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1eecu);
  /* 103a1eec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1eef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1ef1 call 0x103a3be0 */
  push32(0x103a1ef6u); f_103a3be0();
  /* 103a1ef6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1efb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1efd je 0x103a1fce */
  if (C.zf) goto L_103a1fce;
  /* 103a1f03 mov esi, esp */
  ESI = (ESP);
  /* 103a1f05 push 0x103cb318 */
  push32((uint32_t)(0x103cb318u));
  /* 103a1f0a call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a1f10u);
  /* 103a1f10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1f13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1f15 call 0x103a3be0 */
  push32(0x103a1f1au); f_103a3be0();
  /* 103a1f1a mov esi, esp */
  ESI = (ESP);
  /* 103a1f1c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 103a1f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a1f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1f25 call dword ptr [0x103d344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d344c))), 0x103a1f2bu);
  /* 103a1f2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1f2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1f30 call 0x103a3be0 */
  push32(0x103a1f35u); f_103a3be0();
  /* 103a1f35 mov esi, esp */
  ESI = (ESP);
  /* 103a1f37 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 103a1f39 call dword ptr [0x103d3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3434))), 0x103a1f3fu);
  /* 103a1f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1f42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1f44 call 0x103a3be0 */
  push32(0x103a1f49u); f_103a3be0();
  /* 103a1f49 mov esi, esp */
  ESI = (ESP);
  /* 103a1f4b push 0x47 */
  push32((uint32_t)(0x47u));
  /* 103a1f4d call dword ptr [0x103d3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3450))), 0x103a1f53u);
  /* 103a1f53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1f56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1f58 call 0x103a3be0 */
  push32(0x103a1f5du); f_103a3be0();
  /* 103a1f5d mov esi, esp */
  ESI = (ESP);
  /* 103a1f5f push 0x48 */
  push32((uint32_t)(0x48u));
  /* 103a1f61 call dword ptr [0x103d3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3450))), 0x103a1f67u);
  /* 103a1f67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1f6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1f6c call 0x103a3be0 */
  push32(0x103a1f71u); f_103a3be0();
  /* 103a1f71 mov esi, esp */
  ESI = (ESP);
  /* 103a1f73 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a1f75 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a1f7bu);
  /* 103a1f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1f7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1f80 call 0x103a3be0 */
  push32(0x103a1f85u); f_103a3be0();
  /* 103a1f85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a1f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1f8c je 0x103a1fcc */
  if (C.zf) goto L_103a1fcc;
  /* 103a1f8e push 0x103d0568 */
  push32((uint32_t)(0x103d0568u));
  /* 103a1f93 call 0x103a1005 */
  push32(0x103a1f98u); f_103a1005();
  /* 103a1f98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1f9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1f9d jle 0x103a1fcc */
  if ((C.zf||C.sf!=C.of)) goto L_103a1fcc;
  /* 103a1f9f mov esi, esp */
  ESI = (ESP);
  /* 103a1fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1fa3 push 0x103d0568 */
  push32((uint32_t)(0x103d0568u));
  /* 103a1fa8 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a1faeu);
  /* 103a1fae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1fb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1fb3 call 0x103a3be0 */
  push32(0x103a1fb8u); f_103a3be0();
  /* 103a1fb8 mov esi, esp */
  ESI = (ESP);
  /* 103a1fba push 4 */
  push32((uint32_t)(0x4u));
  /* 103a1fbc call dword ptr [0x103d3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3458))), 0x103a1fc2u);
  /* 103a1fc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1fc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1fc7 call 0x103a3be0 */
  push32(0x103a1fccu); f_103a3be0();
L_103a1fcc:;
  /* 103a1fcc jmp 0x103a1fdd */
  goto L_103a1fdd;
L_103a1fce:;
  /* 103a1fce mov esi, esp */
  ESI = (ESP);
  /* 103a1fd0 call dword ptr [0x103d3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3448))), 0x103a1fd6u);
  /* 103a1fd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1fd8 call 0x103a3be0 */
  push32(0x103a1fddu); f_103a3be0();
L_103a1fdd:;
  /* 103a1fdd mov esi, esp */
  ESI = (ESP);
  /* 103a1fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1fe1 push 0x103d04d8 */
  push32((uint32_t)(0x103d04d8u));
  /* 103a1fe6 call dword ptr [0x103d345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d345c))), 0x103a1fecu);
  /* 103a1fec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a1fef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a1ff1 call 0x103a3be0 */
  push32(0x103a1ff6u); f_103a3be0();
  /* 103a1ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a1ff8 jle 0x103a2018 */
  if ((C.zf||C.sf!=C.of)) goto L_103a2018;
  /* 103a1ffa mov esi, esp */
  ESI = (ESP);
  /* 103a1ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 103a1ffe push 0x103d04d8 */
  push32((uint32_t)(0x103d04d8u));
  /* 103a2003 push 0x103d0560 */
  push32((uint32_t)(0x103d0560u));
  /* 103a2008 call dword ptr [0x103d3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3460))), 0x103a200eu);
  /* 103a200e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2011 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2013 call 0x103a3be0 */
  push32(0x103a2018u); f_103a3be0();
L_103a2018:;
  /* 103a2018 mov esi, esp */
  ESI = (ESP);
  /* 103a201a push 0x103d0418 */
  push32((uint32_t)(0x103d0418u));
  /* 103a201f push 0x103d0508 */
  push32((uint32_t)(0x103d0508u));
  /* 103a2024 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a202au);
  /* 103a202a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a202d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a202f call 0x103a3be0 */
  push32(0x103a2034u); f_103a3be0();
  /* 103a2034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2036 jle 0x103a206e */
  if ((C.zf||C.sf!=C.of)) goto L_103a206e;
  /* 103a2038 mov esi, esp */
  ESI = (ESP);
  /* 103a203a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a203c push 0x103d0418 */
  push32((uint32_t)(0x103d0418u));
  /* 103a2041 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a2047u);
  /* 103a2047 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a204a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a204c call 0x103a3be0 */
  push32(0x103a2051u); f_103a3be0();
  /* 103a2051 mov esi, esp */
  ESI = (ESP);
  /* 103a2053 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2055 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2057 push 0x103d0510 */
  push32((uint32_t)(0x103d0510u));
  /* 103a205c push 1 */
  push32((uint32_t)(0x1u));
  /* 103a205e call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a2064u);
  /* 103a2064 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2067 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2069 call 0x103a3be0 */
  push32(0x103a206eu); f_103a3be0();
L_103a206e:;
  /* 103a206e mov esi, esp */
  ESI = (ESP);
  /* 103a2070 push 0x103d0420 */
  push32((uint32_t)(0x103d0420u));
  /* 103a2075 push 0x103d0508 */
  push32((uint32_t)(0x103d0508u));
  /* 103a207a call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a2080u);
  /* 103a2080 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2083 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2085 call 0x103a3be0 */
  push32(0x103a208au); f_103a3be0();
  /* 103a208a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a208c jle 0x103a20c4 */
  if ((C.zf||C.sf!=C.of)) goto L_103a20c4;
  /* 103a208e mov esi, esp */
  ESI = (ESP);
  /* 103a2090 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2092 push 0x103d0420 */
  push32((uint32_t)(0x103d0420u));
  /* 103a2097 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a209du);
  /* 103a209d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a20a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a20a2 call 0x103a3be0 */
  push32(0x103a20a7u); f_103a3be0();
  /* 103a20a7 mov esi, esp */
  ESI = (ESP);
  /* 103a20a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a20ab push 0 */
  push32((uint32_t)(0x0u));
  /* 103a20ad push 0x103d0510 */
  push32((uint32_t)(0x103d0510u));
  /* 103a20b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a20b4 call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a20bau);
  /* 103a20ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a20bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a20bf call 0x103a3be0 */
  push32(0x103a20c4u); f_103a3be0();
L_103a20c4:;
  /* 103a20c4 mov esi, esp */
  ESI = (ESP);
  /* 103a20c6 push 0x103d0418 */
  push32((uint32_t)(0x103d0418u));
  /* 103a20cb push 0x103d0510 */
  push32((uint32_t)(0x103d0510u));
  /* 103a20d0 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a20d6u);
  /* 103a20d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a20d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a20db call 0x103a3be0 */
  push32(0x103a20e0u); f_103a3be0();
  /* 103a20e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a20e2 jle 0x103a211a */
  if ((C.zf||C.sf!=C.of)) goto L_103a211a;
  /* 103a20e4 mov esi, esp */
  ESI = (ESP);
  /* 103a20e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a20e8 push 0x103d0418 */
  push32((uint32_t)(0x103d0418u));
  /* 103a20ed call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a20f3u);
  /* 103a20f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a20f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a20f8 call 0x103a3be0 */
  push32(0x103a20fdu); f_103a3be0();
  /* 103a20fd mov esi, esp */
  ESI = (ESP);
  /* 103a20ff push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2101 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2103 push 0x103d0508 */
  push32((uint32_t)(0x103d0508u));
  /* 103a2108 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a210a call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a2110u);
  /* 103a2110 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2113 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2115 call 0x103a3be0 */
  push32(0x103a211au); f_103a3be0();
L_103a211a:;
  /* 103a211a mov esi, esp */
  ESI = (ESP);
  /* 103a211c push 0x103d0420 */
  push32((uint32_t)(0x103d0420u));
  /* 103a2121 push 0x103d0510 */
  push32((uint32_t)(0x103d0510u));
  /* 103a2126 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a212cu);
  /* 103a212c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a212f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2131 call 0x103a3be0 */
  push32(0x103a2136u); f_103a3be0();
  /* 103a2136 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2138 jle 0x103a2170 */
  if ((C.zf||C.sf!=C.of)) goto L_103a2170;
  /* 103a213a mov esi, esp */
  ESI = (ESP);
  /* 103a213c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a213e push 0x103d0420 */
  push32((uint32_t)(0x103d0420u));
  /* 103a2143 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a2149u);
  /* 103a2149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a214c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a214e call 0x103a3be0 */
  push32(0x103a2153u); f_103a3be0();
  /* 103a2153 mov esi, esp */
  ESI = (ESP);
  /* 103a2155 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2157 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2159 push 0x103d0508 */
  push32((uint32_t)(0x103d0508u));
  /* 103a215e push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2160 call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a2166u);
  /* 103a2166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2169 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a216b call 0x103a3be0 */
  push32(0x103a2170u); f_103a3be0();
L_103a2170:;
  /* 103a2170 mov esi, esp */
  ESI = (ESP);
  /* 103a2172 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2174 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a217au);
  /* 103a217a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a217d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a217f call 0x103a3be0 */
  push32(0x103a2184u); f_103a3be0();
  /* 103a2184 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a218b je 0x103a21db */
  if (C.zf) goto L_103a21db;
  /* 103a218d mov esi, esp */
  ESI = (ESP);
  /* 103a218f push 0x103d0410 */
  push32((uint32_t)(0x103d0410u));
  /* 103a2194 push 0x103d04f0 */
  push32((uint32_t)(0x103d04f0u));
  /* 103a2199 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a219fu);
  /* 103a219f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a21a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a21a4 call 0x103a3be0 */
  push32(0x103a21a9u); f_103a3be0();
  /* 103a21a9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a21ac jge 0x103a21db */
  if ((C.sf==C.of)) goto L_103a21db;
  /* 103a21ae mov esi, esp */
  ESI = (ESP);
  /* 103a21b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a21b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a21b4 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a21bau);
  /* 103a21ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a21bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a21bf call 0x103a3be0 */
  push32(0x103a21c4u); f_103a3be0();
  /* 103a21c4 mov esi, esp */
  ESI = (ESP);
  /* 103a21c6 push 0x103cb310 */
  push32((uint32_t)(0x103cb310u));
  /* 103a21cb call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a21d1u);
  /* 103a21d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a21d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a21d6 call 0x103a3be0 */
  push32(0x103a21dbu); f_103a3be0();
L_103a21db:;
  /* 103a21db mov esi, esp */
  ESI = (ESP);
  /* 103a21dd push 2 */
  push32((uint32_t)(0x2u));
  /* 103a21df call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a21e5u);
  /* 103a21e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a21e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a21ea call 0x103a3be0 */
  push32(0x103a21efu); f_103a3be0();
  /* 103a21ef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a21f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a21f6 je 0x103a22d9 */
  if (C.zf) goto L_103a22d9;
  /* 103a21fc mov esi, esp */
  ESI = (ESP);
  /* 103a21fe push 0x103d0410 */
  push32((uint32_t)(0x103d0410u));
  /* 103a2203 push 0x103d0500 */
  push32((uint32_t)(0x103d0500u));
  /* 103a2208 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a220eu);
  /* 103a220e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2211 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2213 call 0x103a3be0 */
  push32(0x103a2218u); f_103a3be0();
  /* 103a2218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a221a jle 0x103a22d9 */
  if ((C.zf||C.sf!=C.of)) goto L_103a22d9;
  /* 103a2220 push 0x103d0430 */
  push32((uint32_t)(0x103d0430u));
  /* 103a2225 call 0x103a1005 */
  push32(0x103a222au); f_103a1005();
  /* 103a222a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a222d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a222f jle 0x103a22d9 */
  if ((C.zf||C.sf!=C.of)) goto L_103a22d9;
  /* 103a2235 mov esi, esp */
  ESI = (ESP);
  /* 103a2237 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103a2239 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a223fu);
  /* 103a223f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2242 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2244 call 0x103a3be0 */
  push32(0x103a2249u); f_103a3be0();
  /* 103a2249 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a224e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2250 je 0x103a22d9 */
  if (C.zf) goto L_103a22d9;
  /* 103a2256 mov esi, esp */
  ESI = (ESP);
  /* 103a2258 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a225a push 2 */
  push32((uint32_t)(0x2u));
  /* 103a225c call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2262u);
  /* 103a2262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2265 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2267 call 0x103a3be0 */
  push32(0x103a226cu); f_103a3be0();
  /* 103a226c mov esi, esp */
  ESI = (ESP);
  /* 103a226e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2270 push 0x103d0430 */
  push32((uint32_t)(0x103d0430u));
  /* 103a2275 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a227bu);
  /* 103a227b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a227e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2280 call 0x103a3be0 */
  push32(0x103a2285u); f_103a3be0();
  /* 103a2285 mov esi, esp */
  ESI = (ESP);
  /* 103a2287 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a2289 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 103a228b push 0x103d0518 */
  push32((uint32_t)(0x103d0518u));
  /* 103a2290 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2292 call dword ptr [0x103d3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3468))), 0x103a2298u);
  /* 103a2298 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a229b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a229d call 0x103a3be0 */
  push32(0x103a22a2u); f_103a3be0();
  /* 103a22a2 mov esi, esp */
  ESI = (ESP);
  /* 103a22a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a22a6 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 103a22ab push 0x103d0520 */
  push32((uint32_t)(0x103d0520u));
  /* 103a22b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a22b2 call dword ptr [0x103d3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3468))), 0x103a22b8u);
  /* 103a22b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a22bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a22bd call 0x103a3be0 */
  push32(0x103a22c2u); f_103a3be0();
  /* 103a22c2 mov esi, esp */
  ESI = (ESP);
  /* 103a22c4 push 0x103cb308 */
  push32((uint32_t)(0x103cb308u));
  /* 103a22c9 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a22cfu);
  /* 103a22cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a22d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a22d4 call 0x103a3be0 */
  push32(0x103a22d9u); f_103a3be0();
L_103a22d9:;
  /* 103a22d9 mov esi, esp */
  ESI = (ESP);
  /* 103a22db push 3 */
  push32((uint32_t)(0x3u));
  /* 103a22dd call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a22e3u);
  /* 103a22e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a22e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a22e8 call 0x103a3be0 */
  push32(0x103a22edu); f_103a3be0();
  /* 103a22ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a22f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a22f4 je 0x103a2386 */
  if (C.zf) goto L_103a2386;
  /* 103a22fa mov esi, esp */
  ESI = (ESP);
  /* 103a22fc push 0x103d0430 */
  push32((uint32_t)(0x103d0430u));
  /* 103a2301 push 0x103d0520 */
  push32((uint32_t)(0x103d0520u));
  /* 103a2306 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a230cu);
  /* 103a230c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a230f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2311 call 0x103a3be0 */
  push32(0x103a2316u); f_103a3be0();
  /* 103a2316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2318 jle 0x103a2386 */
  if ((C.zf||C.sf!=C.of)) goto L_103a2386;
  /* 103a231a mov esi, esp */
  ESI = (ESP);
  /* 103a231c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a231e push 3 */
  push32((uint32_t)(0x3u));
  /* 103a2320 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2326u);
  /* 103a2326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2329 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a232b call 0x103a3be0 */
  push32(0x103a2330u); f_103a3be0();
  /* 103a2330 mov esi, esp */
  ESI = (ESP);
  /* 103a2332 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2334 push 0x103d0428 */
  push32((uint32_t)(0x103d0428u));
  /* 103a2339 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a233fu);
  /* 103a233f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2342 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2344 call 0x103a3be0 */
  push32(0x103a2349u); f_103a3be0();
  /* 103a2349 mov esi, esp */
  ESI = (ESP);
  /* 103a234b push 2 */
  push32((uint32_t)(0x2u));
  /* 103a234d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a234f push 0x103d0518 */
  push32((uint32_t)(0x103d0518u));
  /* 103a2354 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2356 call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a235cu);
  /* 103a235c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a235f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2361 call 0x103a3be0 */
  push32(0x103a2366u); f_103a3be0();
  /* 103a2366 mov esi, esp */
  ESI = (ESP);
  /* 103a2368 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a236a push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103a236f push 0x103d0500 */
  push32((uint32_t)(0x103d0500u));
  /* 103a2374 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2376 call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a237cu);
  /* 103a237c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a237f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2381 call 0x103a3be0 */
  push32(0x103a2386u); f_103a3be0();
L_103a2386:;
  /* 103a2386 mov esi, esp */
  ESI = (ESP);
  /* 103a2388 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a238a call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2390u);
  /* 103a2390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2393 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2395 call 0x103a3be0 */
  push32(0x103a239au); f_103a3be0();
  /* 103a239a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a239f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a23a1 je 0x103a242a */
  if (C.zf) goto L_103a242a;
  /* 103a23a7 mov esi, esp */
  ESI = (ESP);
  /* 103a23a9 push 0x103d0410 */
  push32((uint32_t)(0x103d0410u));
  /* 103a23ae push 0x103d04f8 */
  push32((uint32_t)(0x103d04f8u));
  /* 103a23b3 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a23b9u);
  /* 103a23b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a23bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a23be call 0x103a3be0 */
  push32(0x103a23c3u); f_103a3be0();
  /* 103a23c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a23c5 jle 0x103a242a */
  if ((C.zf||C.sf!=C.of)) goto L_103a242a;
  /* 103a23c7 mov esi, esp */
  ESI = (ESP);
  /* 103a23c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a23cb push 4 */
  push32((uint32_t)(0x4u));
  /* 103a23cd call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a23d3u);
  /* 103a23d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a23d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a23d8 call 0x103a3be0 */
  push32(0x103a23ddu); f_103a3be0();
  /* 103a23dd mov esi, esp */
  ESI = (ESP);
  /* 103a23df push 0 */
  push32((uint32_t)(0x0u));
  /* 103a23e1 push 0x103d0408 */
  push32((uint32_t)(0x103d0408u));
  /* 103a23e6 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a23ecu);
  /* 103a23ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a23ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a23f1 call 0x103a3be0 */
  push32(0x103a23f6u); f_103a3be0();
  /* 103a23f6 mov esi, esp */
  ESI = (ESP);
  /* 103a23f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a23fa push 0 */
  push32((uint32_t)(0x0u));
  /* 103a23fc push 0x103d04f8 */
  push32((uint32_t)(0x103d04f8u));
  /* 103a2401 push 5 */
  push32((uint32_t)(0x5u));
  /* 103a2403 call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a2409u);
  /* 103a2409 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a240c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a240e call 0x103a3be0 */
  push32(0x103a2413u); f_103a3be0();
  /* 103a2413 mov esi, esp */
  ESI = (ESP);
  /* 103a2415 push 0x103cb300 */
  push32((uint32_t)(0x103cb300u));
  /* 103a241a call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a2420u);
  /* 103a2420 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2423 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2425 call 0x103a3be0 */
  push32(0x103a242au); f_103a3be0();
L_103a242a:;
  /* 103a242a mov esi, esp */
  ESI = (ESP);
  /* 103a242c push 5 */
  push32((uint32_t)(0x5u));
  /* 103a242e call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2434u);
  /* 103a2434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2437 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2439 call 0x103a3be0 */
  push32(0x103a243eu); f_103a3be0();
  /* 103a243e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2443 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2445 je 0x103a24c2 */
  if (C.zf) goto L_103a24c2;
  /* 103a2447 mov esi, esp */
  ESI = (ESP);
  /* 103a2449 push 0x103d0410 */
  push32((uint32_t)(0x103d0410u));
  /* 103a244e push 0x103d04a8 */
  push32((uint32_t)(0x103d04a8u));
  /* 103a2453 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a2459u);
  /* 103a2459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a245c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a245e call 0x103a3be0 */
  push32(0x103a2463u); f_103a3be0();
  /* 103a2463 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2465 jle 0x103a24c2 */
  if ((C.zf||C.sf!=C.of)) goto L_103a24c2;
  /* 103a2467 mov esi, esp */
  ESI = (ESP);
  /* 103a2469 push 3 */
  push32((uint32_t)(0x3u));
  /* 103a246b call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2471u);
  /* 103a2471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2474 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2476 call 0x103a3be0 */
  push32(0x103a247bu); f_103a3be0();
  /* 103a247b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2482 jne 0x103a24c2 */
  if (!C.zf) goto L_103a24c2;
  /* 103a2484 push 0x103d0430 */
  push32((uint32_t)(0x103d0430u));
  /* 103a2489 call 0x103a1005 */
  push32(0x103a248eu); f_103a1005();
  /* 103a248e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2491 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2493 jle 0x103a24c2 */
  if ((C.zf||C.sf!=C.of)) goto L_103a24c2;
  /* 103a2495 mov esi, esp */
  ESI = (ESP);
  /* 103a2497 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2499 push 5 */
  push32((uint32_t)(0x5u));
  /* 103a249b call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a24a1u);
  /* 103a24a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a24a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a24a6 call 0x103a3be0 */
  push32(0x103a24abu); f_103a3be0();
  /* 103a24ab mov esi, esp */
  ESI = (ESP);
  /* 103a24ad push 0x103cb2f8 */
  push32((uint32_t)(0x103cb2f8u));
  /* 103a24b2 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a24b8u);
  /* 103a24b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a24bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a24bd call 0x103a3be0 */
  push32(0x103a24c2u); f_103a3be0();
L_103a24c2:;
  /* 103a24c2 mov esi, esp */
  ESI = (ESP);
  /* 103a24c4 push 6 */
  push32((uint32_t)(0x6u));
  /* 103a24c6 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a24ccu);
  /* 103a24cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a24cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a24d1 call 0x103a3be0 */
  push32(0x103a24d6u); f_103a3be0();
  /* 103a24d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a24db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a24dd je 0x103a25ee */
  if (C.zf) goto L_103a25ee;
  /* 103a24e3 mov esi, esp */
  ESI = (ESP);
  /* 103a24e5 push 0x103d0410 */
  push32((uint32_t)(0x103d0410u));
  /* 103a24ea push 0x103d0530 */
  push32((uint32_t)(0x103d0530u));
  /* 103a24ef call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a24f5u);
  /* 103a24f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a24f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a24fa call 0x103a3be0 */
  push32(0x103a24ffu); f_103a3be0();
  /* 103a24ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2501 jle 0x103a25ee */
  if ((C.zf||C.sf!=C.of)) goto L_103a25ee;
  /* 103a2507 mov esi, esp */
  ESI = (ESP);
  /* 103a2509 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a250b push 6 */
  push32((uint32_t)(0x6u));
  /* 103a250d call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2513u);
  /* 103a2513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2516 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2518 call 0x103a3be0 */
  push32(0x103a251du); f_103a3be0();
  /* 103a251d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a251f push 0x103d0448 */
  push32((uint32_t)(0x103d0448u));
  /* 103a2524 call 0x103a100f */
  push32(0x103a2529u); f_103a100f();
  /* 103a2529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a252c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a252e jle 0x103a256e */
  if ((C.zf||C.sf!=C.of)) goto L_103a256e;
  /* 103a2530 mov esi, esp */
  ESI = (ESP);
  /* 103a2532 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 103a2537 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2539 push 0x103d0448 */
  push32((uint32_t)(0x103d0448u));
  /* 103a253e push 0x103d0530 */
  push32((uint32_t)(0x103d0530u));
  /* 103a2543 push 0x103d04e8 */
  push32((uint32_t)(0x103d04e8u));
  /* 103a2548 call dword ptr [0x103d346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d346c))), 0x103a254eu);
  /* 103a254e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2551 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2553 call 0x103a3be0 */
  push32(0x103a2558u); f_103a3be0();
  /* 103a2558 mov esi, esp */
  ESI = (ESP);
  /* 103a255a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a255c push 0x33 */
  push32((uint32_t)(0x33u));
  /* 103a255e call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2564u);
  /* 103a2564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2567 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2569 call 0x103a3be0 */
  push32(0x103a256eu); f_103a3be0();
L_103a256e:;
  /* 103a256e mov esi, esp */
  ESI = (ESP);
  /* 103a2570 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2572 push 0x103d0438 */
  push32((uint32_t)(0x103d0438u));
  /* 103a2577 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a257du);
  /* 103a257d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2580 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2582 call 0x103a3be0 */
  push32(0x103a2587u); f_103a3be0();
  /* 103a2587 mov esi, esp */
  ESI = (ESP);
  /* 103a2589 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a258b push 5 */
  push32((uint32_t)(0x5u));
  /* 103a258d call dword ptr [0x103d3470] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3470))), 0x103a2593u);
  /* 103a2593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2596 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2598 call 0x103a3be0 */
  push32(0x103a259du); f_103a3be0();
  /* 103a259d mov esi, esp */
  ESI = (ESP);
  /* 103a259f push 0x33 */
  push32((uint32_t)(0x33u));
  /* 103a25a1 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a25a7u);
  /* 103a25a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a25aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a25ac call 0x103a3be0 */
  push32(0x103a25b1u); f_103a3be0();
  /* 103a25b1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a25b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a25b8 jne 0x103a25d7 */
  if (!C.zf) goto L_103a25d7;
  /* 103a25ba mov esi, esp */
  ESI = (ESP);
  /* 103a25bc push 0 */
  push32((uint32_t)(0x0u));
  /* 103a25be push 0 */
  push32((uint32_t)(0x0u));
  /* 103a25c0 push 0x103d04e8 */
  push32((uint32_t)(0x103d04e8u));
  /* 103a25c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 103a25c7 call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a25cdu);
  /* 103a25cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a25d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a25d2 call 0x103a3be0 */
  push32(0x103a25d7u); f_103a3be0();
L_103a25d7:;
  /* 103a25d7 mov esi, esp */
  ESI = (ESP);
  /* 103a25d9 push 0x103cb2f0 */
  push32((uint32_t)(0x103cb2f0u));
  /* 103a25de call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a25e4u);
  /* 103a25e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a25e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a25e9 call 0x103a3be0 */
  push32(0x103a25eeu); f_103a3be0();
L_103a25ee:;
  /* 103a25ee mov esi, esp */
  ESI = (ESP);
  /* 103a25f0 push 7 */
  push32((uint32_t)(0x7u));
  /* 103a25f2 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a25f8u);
  /* 103a25f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a25fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a25fd call 0x103a3be0 */
  push32(0x103a2602u); f_103a3be0();
  /* 103a2602 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2607 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2609 je 0x103a2699 */
  if (C.zf) goto L_103a2699;
  /* 103a260f mov esi, esp */
  ESI = (ESP);
  /* 103a2611 push 0x103d0410 */
  push32((uint32_t)(0x103d0410u));
  /* 103a2616 push 0x103d04a0 */
  push32((uint32_t)(0x103d04a0u));
  /* 103a261b call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a2621u);
  /* 103a2621 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2624 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2626 call 0x103a3be0 */
  push32(0x103a262bu); f_103a3be0();
  /* 103a262b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a262d jg 0x103a264f */
  if ((!C.zf&&C.sf==C.of)) goto L_103a264f;
  /* 103a262f mov esi, esp */
  ESI = (ESP);
  /* 103a2631 push 0x103d0410 */
  push32((uint32_t)(0x103d0410u));
  /* 103a2636 push 0x103d0578 */
  push32((uint32_t)(0x103d0578u));
  /* 103a263b call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a2641u);
  /* 103a2641 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2644 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2646 call 0x103a3be0 */
  push32(0x103a264bu); f_103a3be0();
  /* 103a264b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a264d jle 0x103a2699 */
  if ((C.zf||C.sf!=C.of)) goto L_103a2699;
L_103a264f:;
  /* 103a264f mov esi, esp */
  ESI = (ESP);
  /* 103a2651 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103a2653 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2659u);
  /* 103a2659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a265c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a265e call 0x103a3be0 */
  push32(0x103a2663u); f_103a3be0();
  /* 103a2663 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a266a je 0x103a2699 */
  if (C.zf) goto L_103a2699;
  /* 103a266c mov esi, esp */
  ESI = (ESP);
  /* 103a266e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2670 push 7 */
  push32((uint32_t)(0x7u));
  /* 103a2672 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2678u);
  /* 103a2678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a267b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a267d call 0x103a3be0 */
  push32(0x103a2682u); f_103a3be0();
  /* 103a2682 mov esi, esp */
  ESI = (ESP);
  /* 103a2684 push 0x103cb2e8 */
  push32((uint32_t)(0x103cb2e8u));
  /* 103a2689 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a268fu);
  /* 103a268f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2694 call 0x103a3be0 */
  push32(0x103a2699u); f_103a3be0();
L_103a2699:;
  /* 103a2699 mov esi, esp */
  ESI = (ESP);
  /* 103a269b push 8 */
  push32((uint32_t)(0x8u));
  /* 103a269d call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a26a3u);
  /* 103a26a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a26a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a26a8 call 0x103a3be0 */
  push32(0x103a26adu); f_103a3be0();
  /* 103a26ad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a26b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a26b4 je 0x103a273d */
  if (C.zf) goto L_103a273d;
  /* 103a26ba mov esi, esp */
  ESI = (ESP);
  /* 103a26bc push 0x103d0410 */
  push32((uint32_t)(0x103d0410u));
  /* 103a26c1 push 0x103d0498 */
  push32((uint32_t)(0x103d0498u));
  /* 103a26c6 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a26ccu);
  /* 103a26cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a26cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a26d1 call 0x103a3be0 */
  push32(0x103a26d6u); f_103a3be0();
  /* 103a26d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a26d8 jle 0x103a273d */
  if ((C.zf||C.sf!=C.of)) goto L_103a273d;
  /* 103a26da mov esi, esp */
  ESI = (ESP);
  /* 103a26dc push 0 */
  push32((uint32_t)(0x0u));
  /* 103a26de push 8 */
  push32((uint32_t)(0x8u));
  /* 103a26e0 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a26e6u);
  /* 103a26e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a26e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a26eb call 0x103a3be0 */
  push32(0x103a26f0u); f_103a3be0();
  /* 103a26f0 mov esi, esp */
  ESI = (ESP);
  /* 103a26f2 push 0x103cb2e0 */
  push32((uint32_t)(0x103cb2e0u));
  /* 103a26f7 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a26fdu);
  /* 103a26fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2700 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2702 call 0x103a3be0 */
  push32(0x103a2707u); f_103a3be0();
  /* 103a2707 mov esi, esp */
  ESI = (ESP);
  /* 103a2709 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a270b push 0x103d0568 */
  push32((uint32_t)(0x103d0568u));
  /* 103a2710 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a2716u);
  /* 103a2716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2719 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a271b call 0x103a3be0 */
  push32(0x103a2720u); f_103a3be0();
  /* 103a2720 mov esi, esp */
  ESI = (ESP);
  /* 103a2722 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2724 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2726 push 0x103d0498 */
  push32((uint32_t)(0x103d0498u));
  /* 103a272b push 4 */
  push32((uint32_t)(0x4u));
  /* 103a272d call dword ptr [0x103d3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3468))), 0x103a2733u);
  /* 103a2733 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2736 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2738 call 0x103a3be0 */
  push32(0x103a273du); f_103a3be0();
L_103a273d:;
  /* 103a273d mov esi, esp */
  ESI = (ESP);
  /* 103a273f push 9 */
  push32((uint32_t)(0x9u));
  /* 103a2741 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2747u);
  /* 103a2747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a274a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a274c call 0x103a3be0 */
  push32(0x103a2751u); f_103a3be0();
  /* 103a2751 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2756 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2758 je 0x103a28ce */
  if (C.zf) goto L_103a28ce;
  /* 103a275e mov esi, esp */
  ESI = (ESP);
  /* 103a2760 push 0x103d0568 */
  push32((uint32_t)(0x103d0568u));
  /* 103a2765 push 0x103d0498 */
  push32((uint32_t)(0x103d0498u));
  /* 103a276a call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a2770u);
  /* 103a2770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2773 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2775 call 0x103a3be0 */
  push32(0x103a277au); f_103a3be0();
  /* 103a277a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a277c jle 0x103a28ce */
  if ((C.zf||C.sf!=C.of)) goto L_103a28ce;
  /* 103a2782 mov esi, esp */
  ESI = (ESP);
  /* 103a2784 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2786 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a2788 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a278eu);
  /* 103a278e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2791 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2793 call 0x103a3be0 */
  push32(0x103a2798u); f_103a3be0();
  /* 103a2798 mov esi, esp */
  ESI = (ESP);
  /* 103a279a push 0xc */
  push32((uint32_t)(0xcu));
  /* 103a279c call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a27a2u);
  /* 103a27a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a27a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a27a7 call 0x103a3be0 */
  push32(0x103a27acu); f_103a3be0();
  /* 103a27ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a27b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a27b3 je 0x103a286d */
  if (C.zf) goto L_103a286d;
  /* 103a27b9 mov esi, esp */
  ESI = (ESP);
  /* 103a27bb push 0x103cb2d8 */
  push32((uint32_t)(0x103cb2d8u));
  /* 103a27c0 call dword ptr [0x103d3474] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3474))), 0x103a27c6u);
  /* 103a27c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a27c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a27cb call 0x103a3be0 */
  push32(0x103a27d0u); f_103a3be0();
  /* 103a27d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a27d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a27d7 je 0x103a27f2 */
  if (C.zf) goto L_103a27f2;
  /* 103a27d9 mov esi, esp */
  ESI = (ESP);
  /* 103a27db push 0x103cb2cc */
  push32((uint32_t)(0x103cb2ccu));
  /* 103a27e0 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a27e6u);
  /* 103a27e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a27e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a27eb call 0x103a3be0 */
  push32(0x103a27f0u); f_103a3be0();
  /* 103a27f0 jmp 0x103a2835 */
  goto L_103a2835;
L_103a27f2:;
  /* 103a27f2 mov esi, esp */
  ESI = (ESP);
  /* 103a27f4 push 0x103cb2c0 */
  push32((uint32_t)(0x103cb2c0u));
  /* 103a27f9 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a27ffu);
  /* 103a27ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2802 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2804 call 0x103a3be0 */
  push32(0x103a2809u); f_103a3be0();
  /* 103a2809 mov esi, esp */
  ESI = (ESP);
  /* 103a280b push 0 */
  push32((uint32_t)(0x0u));
  /* 103a280d push 0xc */
  push32((uint32_t)(0xcu));
  /* 103a280f call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2815u);
  /* 103a2815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2818 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a281a call 0x103a3be0 */
  push32(0x103a281fu); f_103a3be0();
  /* 103a281f mov esi, esp */
  ESI = (ESP);
  /* 103a2821 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2823 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103a2825 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a282bu);
  /* 103a282b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a282e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2830 call 0x103a3be0 */
  push32(0x103a2835u); f_103a3be0();
L_103a2835:;
  /* 103a2835 mov esi, esp */
  ESI = (ESP);
  /* 103a2837 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2839 push 0x103d0568 */
  push32((uint32_t)(0x103d0568u));
  /* 103a283e call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a2844u);
  /* 103a2844 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2847 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2849 call 0x103a3be0 */
  push32(0x103a284eu); f_103a3be0();
  /* 103a284e mov esi, esp */
  ESI = (ESP);
  /* 103a2850 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2852 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 103a2854 push 0x103d0490 */
  push32((uint32_t)(0x103d0490u));
  /* 103a2859 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a285b call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a2861u);
  /* 103a2861 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2864 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2866 call 0x103a3be0 */
  push32(0x103a286bu); f_103a3be0();
  /* 103a286b jmp 0x103a28ce */
  goto L_103a28ce;
L_103a286d:;
  /* 103a286d mov esi, esp */
  ESI = (ESP);
  /* 103a286f push 0x103cb2b4 */
  push32((uint32_t)(0x103cb2b4u));
  /* 103a2874 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a287au);
  /* 103a287a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a287d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a287f call 0x103a3be0 */
  push32(0x103a2884u); f_103a3be0();
  /* 103a2884 mov esi, esp */
  ESI = (ESP);
  /* 103a2886 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 103a288b push 1 */
  push32((uint32_t)(0x1u));
  /* 103a288d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a288f call dword ptr [0x103d344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d344c))), 0x103a2895u);
  /* 103a2895 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2898 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a289a call 0x103a3be0 */
  push32(0x103a289fu); f_103a3be0();
  /* 103a289f mov esi, esp */
  ESI = (ESP);
  /* 103a28a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a28a3 push 0x103d0568 */
  push32((uint32_t)(0x103d0568u));
  /* 103a28a8 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a28aeu);
  /* 103a28ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a28b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a28b3 call 0x103a3be0 */
  push32(0x103a28b8u); f_103a3be0();
  /* 103a28b8 mov esi, esp */
  ESI = (ESP);
  /* 103a28ba push 0 */
  push32((uint32_t)(0x0u));
  /* 103a28bc push 4 */
  push32((uint32_t)(0x4u));
  /* 103a28be call dword ptr [0x103d3478] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3478))), 0x103a28c4u);
  /* 103a28c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a28c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a28c9 call 0x103a3be0 */
  push32(0x103a28ceu); f_103a3be0();
L_103a28ce:;
  /* 103a28ce mov esi, esp */
  ESI = (ESP);
  /* 103a28d0 push 0x103d0568 */
  push32((uint32_t)(0x103d0568u));
  /* 103a28d5 push 0x103d0490 */
  push32((uint32_t)(0x103d0490u));
  /* 103a28da call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a28e0u);
  /* 103a28e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a28e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a28e5 call 0x103a3be0 */
  push32(0x103a28eau); f_103a3be0();
  /* 103a28ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a28ec jg 0x103a290e */
  if ((!C.zf&&C.sf==C.of)) goto L_103a290e;
  /* 103a28ee mov esi, esp */
  ESI = (ESP);
  /* 103a28f0 push 0x103d0410 */
  push32((uint32_t)(0x103d0410u));
  /* 103a28f5 push 0x103d0490 */
  push32((uint32_t)(0x103d0490u));
  /* 103a28fa call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a2900u);
  /* 103a2900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2903 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2905 call 0x103a3be0 */
  push32(0x103a290au); f_103a3be0();
  /* 103a290a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a290c jle 0x103a297a */
  if ((C.zf||C.sf!=C.of)) goto L_103a297a;
L_103a290e:;
  /* 103a290e mov esi, esp */
  ESI = (ESP);
  /* 103a2910 push 0xf */
  push32((uint32_t)(0xfu));
  /* 103a2912 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2918u);
  /* 103a2918 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a291b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a291d call 0x103a3be0 */
  push32(0x103a2922u); f_103a3be0();
  /* 103a2922 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2927 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2929 je 0x103a297a */
  if (C.zf) goto L_103a297a;
  /* 103a292b mov esi, esp */
  ESI = (ESP);
  /* 103a292d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a292f push 0xf */
  push32((uint32_t)(0xfu));
  /* 103a2931 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2937u);
  /* 103a2937 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a293a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a293c call 0x103a3be0 */
  push32(0x103a2941u); f_103a3be0();
  /* 103a2941 mov esi, esp */
  ESI = (ESP);
  /* 103a2943 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2945 push 0x103d0548 */
  push32((uint32_t)(0x103d0548u));
  /* 103a294a call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a2950u);
  /* 103a2950 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2953 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2955 call 0x103a3be0 */
  push32(0x103a295au); f_103a3be0();
  /* 103a295a mov esi, esp */
  ESI = (ESP);
  /* 103a295c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a295e push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103a2963 push 0x103d0490 */
  push32((uint32_t)(0x103d0490u));
  /* 103a2968 push 5 */
  push32((uint32_t)(0x5u));
  /* 103a296a call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a2970u);
  /* 103a2970 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2973 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2975 call 0x103a3be0 */
  push32(0x103a297au); f_103a3be0();
L_103a297a:;
  /* 103a297a mov esi, esp */
  ESI = (ESP);
  /* 103a297c push 0xa */
  push32((uint32_t)(0xau));
  /* 103a297e call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2984u);
  /* 103a2984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2987 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2989 call 0x103a3be0 */
  push32(0x103a298eu); f_103a3be0();
  /* 103a298e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2995 je 0x103a29f0 */
  if (C.zf) goto L_103a29f0;
  /* 103a2997 push 0x103d0408 */
  push32((uint32_t)(0x103d0408u));
  /* 103a299c call 0x103a1005 */
  push32(0x103a29a1u); f_103a1005();
  /* 103a29a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a29a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a29a6 jne 0x103a29f0 */
  if (!C.zf) goto L_103a29f0;
  /* 103a29a8 mov esi, esp */
  ESI = (ESP);
  /* 103a29aa push 0 */
  push32((uint32_t)(0x0u));
  /* 103a29ac push 0xa */
  push32((uint32_t)(0xau));
  /* 103a29ae call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a29b4u);
  /* 103a29b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a29b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a29b9 call 0x103a3be0 */
  push32(0x103a29beu); f_103a3be0();
  /* 103a29be mov esi, esp */
  ESI = (ESP);
  /* 103a29c0 push 0x103cb2a8 */
  push32((uint32_t)(0x103cb2a8u));
  /* 103a29c5 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a29cbu);
  /* 103a29cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a29ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a29d0 call 0x103a3be0 */
  push32(0x103a29d5u); f_103a3be0();
  /* 103a29d5 mov esi, esp */
  ESI = (ESP);
  /* 103a29d7 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 103a29dc push 1 */
  push32((uint32_t)(0x1u));
  /* 103a29de push 0 */
  push32((uint32_t)(0x0u));
  /* 103a29e0 call dword ptr [0x103d344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d344c))), 0x103a29e6u);
  /* 103a29e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a29e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a29eb call 0x103a3be0 */
  push32(0x103a29f0u); f_103a3be0();
L_103a29f0:;
  /* 103a29f0 mov esi, esp */
  ESI = (ESP);
  /* 103a29f2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103a29f4 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a29fau);
  /* 103a29fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a29fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a29ff call 0x103a3be0 */
  push32(0x103a2a04u); f_103a3be0();
  /* 103a2a04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2a0b je 0x103a2a66 */
  if (C.zf) goto L_103a2a66;
  /* 103a2a0d push 0x103d0438 */
  push32((uint32_t)(0x103d0438u));
  /* 103a2a12 call 0x103a1005 */
  push32(0x103a2a17u); f_103a1005();
  /* 103a2a17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2a1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2a1c jne 0x103a2a66 */
  if (!C.zf) goto L_103a2a66;
  /* 103a2a1e mov esi, esp */
  ESI = (ESP);
  /* 103a2a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2a22 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103a2a24 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2a2au);
  /* 103a2a2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2a2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2a2f call 0x103a3be0 */
  push32(0x103a2a34u); f_103a3be0();
  /* 103a2a34 mov esi, esp */
  ESI = (ESP);
  /* 103a2a36 push 0x103cb29c */
  push32((uint32_t)(0x103cb29cu));
  /* 103a2a3b call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a2a41u);
  /* 103a2a41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2a44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2a46 call 0x103a3be0 */
  push32(0x103a2a4bu); f_103a3be0();
  /* 103a2a4b mov esi, esp */
  ESI = (ESP);
  /* 103a2a4d push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 103a2a52 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2a56 call dword ptr [0x103d344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d344c))), 0x103a2a5cu);
  /* 103a2a5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2a5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2a61 call 0x103a3be0 */
  push32(0x103a2a66u); f_103a3be0();
L_103a2a66:;
  /* 103a2a66 mov esi, esp */
  ESI = (ESP);
  /* 103a2a68 push 0xc */
  push32((uint32_t)(0xcu));
  /* 103a2a6a call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2a70u);
  /* 103a2a70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2a73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2a75 call 0x103a3be0 */
  push32(0x103a2a7au); f_103a3be0();
  /* 103a2a7a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2a7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2a81 je 0x103a2b75 */
  if (C.zf) goto L_103a2b75;
  /* 103a2a87 push 0x103d0548 */
  push32((uint32_t)(0x103d0548u));
  /* 103a2a8c call 0x103a1005 */
  push32(0x103a2a91u); f_103a1005();
  /* 103a2a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2a96 jne 0x103a2b75 */
  if (!C.zf) goto L_103a2b75;
  /* 103a2a9c push 0x103d0568 */
  push32((uint32_t)(0x103d0568u));
  /* 103a2aa1 call 0x103a1005 */
  push32(0x103a2aa6u); f_103a1005();
  /* 103a2aa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2aa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2aab jle 0x103a2b75 */
  if ((C.zf||C.sf!=C.of)) goto L_103a2b75;
  /* 103a2ab1 mov esi, esp */
  ESI = (ESP);
  /* 103a2ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2ab5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 103a2ab7 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2abdu);
  /* 103a2abd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2ac0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2ac2 call 0x103a3be0 */
  push32(0x103a2ac7u); f_103a3be0();
  /* 103a2ac7 mov esi, esp */
  ESI = (ESP);
  /* 103a2ac9 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a2acb call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2ad1u);
  /* 103a2ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2ad4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2ad6 call 0x103a3be0 */
  push32(0x103a2adbu); f_103a3be0();
  /* 103a2adb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2ae2 je 0x103a2afd */
  if (C.zf) goto L_103a2afd;
  /* 103a2ae4 mov esi, esp */
  ESI = (ESP);
  /* 103a2ae6 push 0x103cb290 */
  push32((uint32_t)(0x103cb290u));
  /* 103a2aeb call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a2af1u);
  /* 103a2af1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2af4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2af6 call 0x103a3be0 */
  push32(0x103a2afbu); f_103a3be0();
  /* 103a2afb jmp 0x103a2b75 */
  goto L_103a2b75;
L_103a2afd:;
  /* 103a2afd mov esi, esp */
  ESI = (ESP);
  /* 103a2aff push 0x103cb284 */
  push32((uint32_t)(0x103cb284u));
  /* 103a2b04 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a2b0au);
  /* 103a2b0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2b0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2b0f call 0x103a3be0 */
  push32(0x103a2b14u); f_103a3be0();
  /* 103a2b14 mov esi, esp */
  ESI = (ESP);
  /* 103a2b16 push 0x103cb278 */
  push32((uint32_t)(0x103cb278u));
  /* 103a2b1b call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a2b21u);
  /* 103a2b21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2b24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2b26 call 0x103a3be0 */
  push32(0x103a2b2bu); f_103a3be0();
  /* 103a2b2b mov esi, esp */
  ESI = (ESP);
  /* 103a2b2d push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 103a2b32 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2b36 call dword ptr [0x103d344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d344c))), 0x103a2b3cu);
  /* 103a2b3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2b3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2b41 call 0x103a3be0 */
  push32(0x103a2b46u); f_103a3be0();
  /* 103a2b46 mov esi, esp */
  ESI = (ESP);
  /* 103a2b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2b4a push 0x103d0568 */
  push32((uint32_t)(0x103d0568u));
  /* 103a2b4f call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a2b55u);
  /* 103a2b55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2b58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2b5a call 0x103a3be0 */
  push32(0x103a2b5fu); f_103a3be0();
  /* 103a2b5f mov esi, esp */
  ESI = (ESP);
  /* 103a2b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2b63 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a2b65 call dword ptr [0x103d3478] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3478))), 0x103a2b6bu);
  /* 103a2b6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2b6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2b70 call 0x103a3be0 */
  push32(0x103a2b75u); f_103a3be0();
L_103a2b75:;
  /* 103a2b75 mov esi, esp */
  ESI = (ESP);
  /* 103a2b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2b79 push 0x103d0528 */
  push32((uint32_t)(0x103d0528u));
  /* 103a2b7e call dword ptr [0x103d345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d345c))), 0x103a2b84u);
  /* 103a2b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2b87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2b89 call 0x103a3be0 */
  push32(0x103a2b8eu); f_103a3be0();
  /* 103a2b8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2b90 jle 0x103a2cbd */
  if ((C.zf||C.sf!=C.of)) goto L_103a2cbd;
  /* 103a2b96 push 0x103d0440 */
  push32((uint32_t)(0x103d0440u));
  /* 103a2b9b call 0x103a1005 */
  push32(0x103a2ba0u); f_103a1005();
  /* 103a2ba0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2ba5 jle 0x103a2cbd */
  if ((C.zf||C.sf!=C.of)) goto L_103a2cbd;
  /* 103a2bab mov esi, esp */
  ESI = (ESP);
  /* 103a2bad push 0xd */
  push32((uint32_t)(0xdu));
  /* 103a2baf call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2bb5u);
  /* 103a2bb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2bb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2bba call 0x103a3be0 */
  push32(0x103a2bbfu); f_103a3be0();
  /* 103a2bbf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2bc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2bc6 je 0x103a2cbd */
  if (C.zf) goto L_103a2cbd;
  /* 103a2bcc mov esi, esp */
  ESI = (ESP);
  /* 103a2bce push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2bd0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 103a2bd2 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2bd8u);
  /* 103a2bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2bdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2bdd call 0x103a3be0 */
  push32(0x103a2be2u); f_103a3be0();
  /* 103a2be2 mov esi, esp */
  ESI = (ESP);
  /* 103a2be4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103a2be6 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2becu);
  /* 103a2bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2bef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2bf1 call 0x103a3be0 */
  push32(0x103a2bf6u); f_103a3be0();
  /* 103a2bf6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2bfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2bfd je 0x103a2c16 */
  if (C.zf) goto L_103a2c16;
  /* 103a2bff mov esi, esp */
  ESI = (ESP);
  /* 103a2c01 push 0x103cb26c */
  push32((uint32_t)(0x103cb26cu));
  /* 103a2c06 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a2c0cu);
  /* 103a2c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2c0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2c11 call 0x103a3be0 */
  push32(0x103a2c16u); f_103a3be0();
L_103a2c16:;
  /* 103a2c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2c18 push 0x103d0448 */
  push32((uint32_t)(0x103d0448u));
  /* 103a2c1d call 0x103a100f */
  push32(0x103a2c22u); f_103a100f();
  /* 103a2c22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2c25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2c27 jle 0x103a2c67 */
  if ((C.zf||C.sf!=C.of)) goto L_103a2c67;
  /* 103a2c29 mov esi, esp */
  ESI = (ESP);
  /* 103a2c2b push 0x82 */
  push32((uint32_t)(0x82u));
  /* 103a2c30 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2c32 push 0x103d0448 */
  push32((uint32_t)(0x103d0448u));
  /* 103a2c37 push 0x103d0528 */
  push32((uint32_t)(0x103d0528u));
  /* 103a2c3c push 0x103d0488 */
  push32((uint32_t)(0x103d0488u));
  /* 103a2c41 call dword ptr [0x103d346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d346c))), 0x103a2c47u);
  /* 103a2c47 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2c4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2c4c call 0x103a3be0 */
  push32(0x103a2c51u); f_103a3be0();
  /* 103a2c51 mov esi, esp */
  ESI = (ESP);
  /* 103a2c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2c55 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 103a2c57 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2c5du);
  /* 103a2c5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2c60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2c62 call 0x103a3be0 */
  push32(0x103a2c67u); f_103a3be0();
L_103a2c67:;
  /* 103a2c67 mov esi, esp */
  ESI = (ESP);
  /* 103a2c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2c6b push 0x103d0440 */
  push32((uint32_t)(0x103d0440u));
  /* 103a2c70 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a2c76u);
  /* 103a2c76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2c79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2c7b call 0x103a3be0 */
  push32(0x103a2c80u); f_103a3be0();
  /* 103a2c80 mov esi, esp */
  ESI = (ESP);
  /* 103a2c82 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 103a2c84 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2c8au);
  /* 103a2c8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2c8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2c8f call 0x103a3be0 */
  push32(0x103a2c94u); f_103a3be0();
  /* 103a2c94 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2c9b jne 0x103a2cbd */
  if (!C.zf) goto L_103a2cbd;
  /* 103a2c9d mov esi, esp */
  ESI = (ESP);
  /* 103a2c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2ca1 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103a2ca6 push 0x103d0488 */
  push32((uint32_t)(0x103d0488u));
  /* 103a2cab push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2cad call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a2cb3u);
  /* 103a2cb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2cb8 call 0x103a3be0 */
  push32(0x103a2cbdu); f_103a3be0();
L_103a2cbd:;
  /* 103a2cbd mov esi, esp */
  ESI = (ESP);
  /* 103a2cbf push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103a2cc1 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2cc7u);
  /* 103a2cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2ccc call 0x103a3be0 */
  push32(0x103a2cd1u); f_103a3be0();
  /* 103a2cd1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2cd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2cd8 je 0x103a2d3d */
  if (C.zf) goto L_103a2d3d;
  /* 103a2cda mov esi, esp */
  ESI = (ESP);
  /* 103a2cdc push 5 */
  push32((uint32_t)(0x5u));
  /* 103a2cde push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2ce0 call dword ptr [0x103d343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d343c))), 0x103a2ce6u);
  /* 103a2ce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2ce9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2ceb call 0x103a3be0 */
  push32(0x103a2cf0u); f_103a3be0();
  /* 103a2cf0 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2cf3 jl 0x103a2d10 */
  if ((C.sf!=C.of)) goto L_103a2d10;
  /* 103a2cf5 mov esi, esp */
  ESI = (ESP);
  /* 103a2cf7 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a2cf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2cfb call dword ptr [0x103d343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d343c))), 0x103a2d01u);
  /* 103a2d01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2d04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2d06 call 0x103a3be0 */
  push32(0x103a2d0bu); f_103a3be0();
  /* 103a2d0b cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2d0e jge 0x103a2d3d */
  if ((C.sf==C.of)) goto L_103a2d3d;
L_103a2d10:;
  /* 103a2d10 mov esi, esp */
  ESI = (ESP);
  /* 103a2d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2d14 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103a2d16 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2d1cu);
  /* 103a2d1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2d1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2d21 call 0x103a3be0 */
  push32(0x103a2d26u); f_103a3be0();
  /* 103a2d26 mov esi, esp */
  ESI = (ESP);
  /* 103a2d28 push 0x103cb260 */
  push32((uint32_t)(0x103cb260u));
  /* 103a2d2d call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a2d33u);
  /* 103a2d33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2d36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2d38 call 0x103a3be0 */
  push32(0x103a2d3du); f_103a3be0();
L_103a2d3d:;
  /* 103a2d3d mov esi, esp */
  ESI = (ESP);
  /* 103a2d3f push 5 */
  push32((uint32_t)(0x5u));
  /* 103a2d41 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2d43 call dword ptr [0x103d343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d343c))), 0x103a2d49u);
  /* 103a2d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2d4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2d4e call 0x103a3be0 */
  push32(0x103a2d53u); f_103a3be0();
  /* 103a2d53 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2d56 jle 0x103a2d89 */
  if ((C.zf||C.sf!=C.of)) goto L_103a2d89;
  /* 103a2d58 mov esi, esp */
  ESI = (ESP);
  /* 103a2d5a push 4 */
  push32((uint32_t)(0x4u));
  /* 103a2d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2d5e call dword ptr [0x103d343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d343c))), 0x103a2d64u);
  /* 103a2d64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2d67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2d69 call 0x103a3be0 */
  push32(0x103a2d6eu); f_103a3be0();
  /* 103a2d6e cmp eax, 0x1a */
  { uint32_t _a=(EAX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2d71 jle 0x103a2d89 */
  if ((C.zf||C.sf!=C.of)) goto L_103a2d89;
  /* 103a2d73 mov esi, esp */
  ESI = (ESP);
  /* 103a2d75 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2d77 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103a2d79 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2d7fu);
  /* 103a2d7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2d82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2d84 call 0x103a3be0 */
  push32(0x103a2d89u); f_103a3be0();
L_103a2d89:;
  /* 103a2d89 mov esi, esp */
  ESI = (ESP);
  /* 103a2d8b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103a2d8d call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2d93u);
  /* 103a2d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2d96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2d98 call 0x103a3be0 */
  push32(0x103a2d9du); f_103a3be0();
  /* 103a2d9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2da2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2da4 je 0x103a2ded */
  if (C.zf) goto L_103a2ded;
  /* 103a2da6 mov esi, esp */
  ESI = (ESP);
  /* 103a2da8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2daa push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2dac call dword ptr [0x103d343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d343c))), 0x103a2db2u);
  /* 103a2db2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2db5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2db7 call 0x103a3be0 */
  push32(0x103a2dbcu); f_103a3be0();
  /* 103a2dbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2dbe jne 0x103a2ded */
  if (!C.zf) goto L_103a2ded;
  /* 103a2dc0 mov esi, esp */
  ESI = (ESP);
  /* 103a2dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2dc4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103a2dc6 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2dccu);
  /* 103a2dcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2dcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2dd1 call 0x103a3be0 */
  push32(0x103a2dd6u); f_103a3be0();
  /* 103a2dd6 mov esi, esp */
  ESI = (ESP);
  /* 103a2dd8 push 0x103cb254 */
  push32((uint32_t)(0x103cb254u));
  /* 103a2ddd call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a2de3u);
  /* 103a2de3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2de6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2de8 call 0x103a3be0 */
  push32(0x103a2dedu); f_103a3be0();
L_103a2ded:;
  /* 103a2ded mov esi, esp */
  ESI = (ESP);
  /* 103a2def push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2df1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2df3 call dword ptr [0x103d343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d343c))), 0x103a2df9u);
  /* 103a2df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2dfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2dfe call 0x103a3be0 */
  push32(0x103a2e03u); f_103a3be0();
  /* 103a2e03 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2e06 jle 0x103a2e1e */
  if ((C.zf||C.sf!=C.of)) goto L_103a2e1e;
  /* 103a2e08 mov esi, esp */
  ESI = (ESP);
  /* 103a2e0a push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2e0c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103a2e0e call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2e14u);
  /* 103a2e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2e17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2e19 call 0x103a3be0 */
  push32(0x103a2e1eu); f_103a3be0();
L_103a2e1e:;
  /* 103a2e1e mov esi, esp */
  ESI = (ESP);
  /* 103a2e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2e22 push 0x103d04b8 */
  push32((uint32_t)(0x103d04b8u));
  /* 103a2e27 call dword ptr [0x103d345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d345c))), 0x103a2e2du);
  /* 103a2e2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2e30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2e32 call 0x103a3be0 */
  push32(0x103a2e37u); f_103a3be0();
  /* 103a2e37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2e39 je 0x103a2ec1 */
  if (C.zf) goto L_103a2ec1;
  /* 103a2e3f mov esi, esp */
  ESI = (ESP);
  /* 103a2e41 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103a2e43 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2e49u);
  /* 103a2e49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2e4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2e4e call 0x103a3be0 */
  push32(0x103a2e53u); f_103a3be0();
  /* 103a2e53 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2e58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2e5a je 0x103a2ec1 */
  if (C.zf) goto L_103a2ec1;
  /* 103a2e5c mov esi, esp */
  ESI = (ESP);
  /* 103a2e5e push 0xc */
  push32((uint32_t)(0xcu));
  /* 103a2e60 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2e66u);
  /* 103a2e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2e69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2e6b call 0x103a3be0 */
  push32(0x103a2e70u); f_103a3be0();
  /* 103a2e70 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2e75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2e77 jne 0x103a2ec1 */
  if (!C.zf) goto L_103a2ec1;
  /* 103a2e79 mov esi, esp */
  ESI = (ESP);
  /* 103a2e7b push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2e7d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 103a2e7f call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2e85u);
  /* 103a2e85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2e88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2e8a call 0x103a3be0 */
  push32(0x103a2e8fu); f_103a3be0();
  /* 103a2e8f mov esi, esp */
  ESI = (ESP);
  /* 103a2e91 push 0x103cb248 */
  push32((uint32_t)(0x103cb248u));
  /* 103a2e96 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a2e9cu);
  /* 103a2e9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2e9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2ea1 call 0x103a3be0 */
  push32(0x103a2ea6u); f_103a3be0();
  /* 103a2ea6 mov esi, esp */
  ESI = (ESP);
  /* 103a2ea8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 103a2ead push 1 */
  push32((uint32_t)(0x1u));
  /* 103a2eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2eb1 call dword ptr [0x103d344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d344c))), 0x103a2eb7u);
  /* 103a2eb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2eba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2ebc call 0x103a3be0 */
  push32(0x103a2ec1u); f_103a3be0();
L_103a2ec1:;
  /* 103a2ec1 mov esi, esp */
  ESI = (ESP);
  /* 103a2ec3 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 103a2ec5 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2ecbu);
  /* 103a2ecb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2ece cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2ed0 call 0x103a3be0 */
  push32(0x103a2ed5u); f_103a3be0();
  /* 103a2ed5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2eda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2edc je 0x103a2f9d */
  if (C.zf) goto L_103a2f9d;
  /* 103a2ee2 mov esi, esp */
  ESI = (ESP);
  /* 103a2ee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2ee6 push 0x103d03e0 */
  push32((uint32_t)(0x103d03e0u));
  /* 103a2eeb call dword ptr [0x103d3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3438))), 0x103a2ef1u);
  /* 103a2ef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2ef4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2ef6 call 0x103a3be0 */
  push32(0x103a2efbu); f_103a3be0();
  /* 103a2efb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2efd jle 0x103a2f9d */
  if ((C.zf||C.sf!=C.of)) goto L_103a2f9d;
  /* 103a2f03 mov esi, esp */
  ESI = (ESP);
  /* 103a2f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2f07 push 0x103d0480 */
  push32((uint32_t)(0x103d0480u));
  /* 103a2f0c call dword ptr [0x103d3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3438))), 0x103a2f12u);
  /* 103a2f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2f15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2f17 call 0x103a3be0 */
  push32(0x103a2f1cu); f_103a3be0();
  /* 103a2f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2f1e jle 0x103a2f9d */
  if ((C.zf||C.sf!=C.of)) goto L_103a2f9d;
  /* 103a2f20 mov esi, esp */
  ESI = (ESP);
  /* 103a2f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2f24 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 103a2f26 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2f2cu);
  /* 103a2f2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2f2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2f31 call 0x103a3be0 */
  push32(0x103a2f36u); f_103a3be0();
  /* 103a2f36 mov esi, esp */
  ESI = (ESP);
  /* 103a2f38 push 0x103cb23c */
  push32((uint32_t)(0x103cb23cu));
  /* 103a2f3d call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a2f43u);
  /* 103a2f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2f46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2f48 call 0x103a3be0 */
  push32(0x103a2f4du); f_103a3be0();
  /* 103a2f4d mov esi, esp */
  ESI = (ESP);
  /* 103a2f4f push 0x42 */
  push32((uint32_t)(0x42u));
  /* 103a2f51 call dword ptr [0x103d3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3434))), 0x103a2f57u);
  /* 103a2f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2f5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2f5c call 0x103a3be0 */
  push32(0x103a2f61u); f_103a3be0();
  /* 103a2f61 mov esi, esp */
  ESI = (ESP);
  /* 103a2f63 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 103a2f65 call dword ptr [0x103d3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3434))), 0x103a2f6bu);
  /* 103a2f6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2f6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2f70 call 0x103a3be0 */
  push32(0x103a2f75u); f_103a3be0();
  /* 103a2f75 mov esi, esp */
  ESI = (ESP);
  /* 103a2f77 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 103a2f79 call dword ptr [0x103d3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3450))), 0x103a2f7fu);
  /* 103a2f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2f82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2f84 call 0x103a3be0 */
  push32(0x103a2f89u); f_103a3be0();
  /* 103a2f89 mov esi, esp */
  ESI = (ESP);
  /* 103a2f8b push 0x46 */
  push32((uint32_t)(0x46u));
  /* 103a2f8d call dword ptr [0x103d3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3450))), 0x103a2f93u);
  /* 103a2f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2f96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2f98 call 0x103a3be0 */
  push32(0x103a2f9du); f_103a3be0();
L_103a2f9d:;
  /* 103a2f9d mov esi, esp */
  ESI = (ESP);
  /* 103a2f9f push 0x12 */
  push32((uint32_t)(0x12u));
  /* 103a2fa1 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a2fa7u);
  /* 103a2fa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2faa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2fac call 0x103a3be0 */
  push32(0x103a2fb1u); f_103a3be0();
  /* 103a2fb1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a2fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2fb8 je 0x103a3026 */
  if (C.zf) goto L_103a3026;
  /* 103a2fba push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2fbc push 0x103d03e8 */
  push32((uint32_t)(0x103d03e8u));
  /* 103a2fc1 call 0x103a100f */
  push32(0x103a2fc6u); f_103a100f();
  /* 103a2fc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a2fcb jle 0x103a3026 */
  if ((C.zf||C.sf!=C.of)) goto L_103a3026;
  /* 103a2fcd mov esi, esp */
  ESI = (ESP);
  /* 103a2fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2fd1 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 103a2fd3 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a2fd9u);
  /* 103a2fd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2fdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2fde call 0x103a3be0 */
  push32(0x103a2fe3u); f_103a3be0();
  /* 103a2fe3 mov esi, esp */
  ESI = (ESP);
  /* 103a2fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a2fe7 push 0x103d0558 */
  push32((uint32_t)(0x103d0558u));
  /* 103a2fec call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a2ff2u);
  /* 103a2ff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a2ff5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a2ff7 call 0x103a3be0 */
  push32(0x103a2ffcu); f_103a3be0();
  /* 103a2ffc mov esi, esp */
  ESI = (ESP);
  /* 103a2ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 103a3000 call dword ptr [0x103d347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d347c))), 0x103a3006u);
  /* 103a3006 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3009 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a300b call 0x103a3be0 */
  push32(0x103a3010u); f_103a3be0();
  /* 103a3010 mov esi, esp */
  ESI = (ESP);
  /* 103a3012 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103a3014 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a3016 call dword ptr [0x103d3480] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3480))), 0x103a301cu);
  /* 103a301c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a301f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3021 call 0x103a3be0 */
  push32(0x103a3026u); f_103a3be0();
L_103a3026:;
  /* 103a3026 mov esi, esp */
  ESI = (ESP);
  /* 103a3028 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a302a call dword ptr [0x103d3484] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3484))), 0x103a3030u);
  /* 103a3030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3033 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3035 call 0x103a3be0 */
  push32(0x103a303au); f_103a3be0();
  /* 103a303a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a303f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a3041 je 0x103a307c */
  if (C.zf) goto L_103a307c;
  /* 103a3043 mov esi, esp */
  ESI = (ESP);
  /* 103a3045 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a3047 push 0x103d0570 */
  push32((uint32_t)(0x103d0570u));
  /* 103a304c call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a3052u);
  /* 103a3052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3055 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3057 call 0x103a3be0 */
  push32(0x103a305cu); f_103a3be0();
  /* 103a305c mov esi, esp */
  ESI = (ESP);
  /* 103a305e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a3060 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 103a3065 push 0x103d04b0 */
  push32((uint32_t)(0x103d04b0u));
  /* 103a306a push 1 */
  push32((uint32_t)(0x1u));
  /* 103a306c call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a3072u);
  /* 103a3072 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3075 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3077 call 0x103a3be0 */
  push32(0x103a307cu); f_103a3be0();
L_103a307c:;
  /* 103a307c mov esi, esp */
  ESI = (ESP);
  /* 103a307e push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 103a3080 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a3086u);
  /* 103a3086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3089 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a308b call 0x103a3be0 */
  push32(0x103a3090u); f_103a3be0();
  /* 103a3090 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a3095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a3097 je 0x103a3112 */
  if (C.zf) goto L_103a3112;
  /* 103a3099 mov esi, esp */
  ESI = (ESP);
  /* 103a309b push 0x103d0570 */
  push32((uint32_t)(0x103d0570u));
  /* 103a30a0 push 0x103d04b0 */
  push32((uint32_t)(0x103d04b0u));
  /* 103a30a5 call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a30abu);
  /* 103a30ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a30ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a30b0 call 0x103a3be0 */
  push32(0x103a30b5u); f_103a3be0();
  /* 103a30b5 mov esi, eax */
  ESI = (EAX);
  /* 103a30b7 push 0x103d0570 */
  push32((uint32_t)(0x103d0570u));
  /* 103a30bc call 0x103a1005 */
  push32(0x103a30c1u); f_103a1005();
  /* 103a30c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a30c4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a30c6 jne 0x103a3112 */
  if (!C.zf) goto L_103a3112;
  /* 103a30c8 mov esi, esp */
  ESI = (ESP);
  /* 103a30ca push 0 */
  push32((uint32_t)(0x0u));
  /* 103a30cc push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 103a30ce call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a30d4u);
  /* 103a30d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a30d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a30d9 call 0x103a3be0 */
  push32(0x103a30deu); f_103a3be0();
  /* 103a30de mov esi, esp */
  ESI = (ESP);
  /* 103a30e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a30e2 push 0x103d0570 */
  push32((uint32_t)(0x103d0570u));
  /* 103a30e7 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a30edu);
  /* 103a30ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a30f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a30f2 call 0x103a3be0 */
  push32(0x103a30f7u); f_103a3be0();
  /* 103a30f7 mov esi, esp */
  ESI = (ESP);
  /* 103a30f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a30fb push 0x103d04c0 */
  push32((uint32_t)(0x103d04c0u));
  /* 103a3100 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a3102 call dword ptr [0x103d3488] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3488))), 0x103a3108u);
  /* 103a3108 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a310b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a310d call 0x103a3be0 */
  push32(0x103a3112u); f_103a3be0();
L_103a3112:;
  /* 103a3112 mov esi, esp */
  ESI = (ESP);
  /* 103a3114 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 103a3116 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a311cu);
  /* 103a311c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a311f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3121 call 0x103a3be0 */
  push32(0x103a3126u); f_103a3be0();
  /* 103a3126 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a312b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a312d je 0x103a31d8 */
  if (C.zf) goto L_103a31d8;
  /* 103a3133 mov esi, esp */
  ESI = (ESP);
  /* 103a3135 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103a3137 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a313du);
  /* 103a313d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3140 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3142 call 0x103a3be0 */
  push32(0x103a3147u); f_103a3be0();
  /* 103a3147 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a314c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a314e je 0x103a31d8 */
  if (C.zf) goto L_103a31d8;
  /* 103a3154 mov esi, esp */
  ESI = (ESP);
  /* 103a3156 push 6 */
  push32((uint32_t)(0x6u));
  /* 103a3158 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a315eu);
  /* 103a315e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3161 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3163 call 0x103a3be0 */
  push32(0x103a3168u); f_103a3be0();
  /* 103a3168 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a316d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a316f je 0x103a31d8 */
  if (C.zf) goto L_103a31d8;
  /* 103a3171 mov esi, esp */
  ESI = (ESP);
  /* 103a3173 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a3175 push 0x103d04c8 */
  push32((uint32_t)(0x103d04c8u));
  /* 103a317a call dword ptr [0x103d345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d345c))), 0x103a3180u);
  /* 103a3180 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3183 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3185 call 0x103a3be0 */
  push32(0x103a318au); f_103a3be0();
  /* 103a318a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a318c jle 0x103a31d8 */
  if ((C.zf||C.sf!=C.of)) goto L_103a31d8;
  /* 103a318e mov esi, esp */
  ESI = (ESP);
  /* 103a3190 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 103a3192 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a3198u);
  /* 103a3198 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a319b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a319d call 0x103a3be0 */
  push32(0x103a31a2u); f_103a3be0();
  /* 103a31a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a31a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a31a9 je 0x103a31d8 */
  if (C.zf) goto L_103a31d8;
  /* 103a31ab mov esi, esp */
  ESI = (ESP);
  /* 103a31ad push 0 */
  push32((uint32_t)(0x0u));
  /* 103a31af push 0x17 */
  push32((uint32_t)(0x17u));
  /* 103a31b1 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a31b7u);
  /* 103a31b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a31ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a31bc call 0x103a3be0 */
  push32(0x103a31c1u); f_103a3be0();
  /* 103a31c1 mov esi, esp */
  ESI = (ESP);
  /* 103a31c3 push 0x103cb230 */
  push32((uint32_t)(0x103cb230u));
  /* 103a31c8 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a31ceu);
  /* 103a31ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a31d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a31d3 call 0x103a3be0 */
  push32(0x103a31d8u); f_103a3be0();
L_103a31d8:;
  /* 103a31d8 mov esi, esp */
  ESI = (ESP);
  /* 103a31da push 0x21 */
  push32((uint32_t)(0x21u));
  /* 103a31dc call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a31e2u);
  /* 103a31e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a31e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a31e7 call 0x103a3be0 */
  push32(0x103a31ecu); f_103a3be0();
  /* 103a31ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a31f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a31f3 je 0x103a32ee */
  if (C.zf) goto L_103a32ee;
  /* 103a31f9 mov esi, esp */
  ESI = (ESP);
  /* 103a31fb push 0 */
  push32((uint32_t)(0x0u));
  /* 103a31fd push 0x103d04d0 */
  push32((uint32_t)(0x103d04d0u));
  /* 103a3202 call dword ptr [0x103d345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d345c))), 0x103a3208u);
  /* 103a3208 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a320b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a320d call 0x103a3be0 */
  push32(0x103a3212u); f_103a3be0();
  /* 103a3212 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a3214 jle 0x103a32ee */
  if ((C.zf||C.sf!=C.of)) goto L_103a32ee;
  /* 103a321a mov esi, esp */
  ESI = (ESP);
  /* 103a321c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a321e push 0x21 */
  push32((uint32_t)(0x21u));
  /* 103a3220 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a3226u);
  /* 103a3226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a322b call 0x103a3be0 */
  push32(0x103a3230u); f_103a3be0();
  /* 103a3230 mov esi, esp */
  ESI = (ESP);
  /* 103a3232 push 0x103cb224 */
  push32((uint32_t)(0x103cb224u));
  /* 103a3237 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a323du);
  /* 103a323d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3240 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3242 call 0x103a3be0 */
  push32(0x103a3247u); f_103a3be0();
  /* 103a3247 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a3249 push 0x103d0448 */
  push32((uint32_t)(0x103d0448u));
  /* 103a324e call 0x103a100f */
  push32(0x103a3253u); f_103a100f();
  /* 103a3253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a3258 jle 0x103a3298 */
  if ((C.zf||C.sf!=C.of)) goto L_103a3298;
  /* 103a325a mov esi, esp */
  ESI = (ESP);
  /* 103a325c push 0x82 */
  push32((uint32_t)(0x82u));
  /* 103a3261 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a3263 push 0x103d0448 */
  push32((uint32_t)(0x103d0448u));
  /* 103a3268 push 0x103d04d0 */
  push32((uint32_t)(0x103d04d0u));
  /* 103a326d push 0x103d04e0 */
  push32((uint32_t)(0x103d04e0u));
  /* 103a3272 call dword ptr [0x103d346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d346c))), 0x103a3278u);
  /* 103a3278 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a327b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a327d call 0x103a3be0 */
  push32(0x103a3282u); f_103a3be0();
  /* 103a3282 mov esi, esp */
  ESI = (ESP);
  /* 103a3284 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a3286 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 103a3288 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a328eu);
  /* 103a328e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3291 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3293 call 0x103a3be0 */
  push32(0x103a3298u); f_103a3be0();
L_103a3298:;
  /* 103a3298 mov esi, esp */
  ESI = (ESP);
  /* 103a329a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a329c push 0x103d0550 */
  push32((uint32_t)(0x103d0550u));
  /* 103a32a1 call dword ptr [0x103d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3454))), 0x103a32a7u);
  /* 103a32a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a32aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a32ac call 0x103a3be0 */
  push32(0x103a32b1u); f_103a3be0();
  /* 103a32b1 mov esi, esp */
  ESI = (ESP);
  /* 103a32b3 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 103a32b5 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a32bbu);
  /* 103a32bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a32be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a32c0 call 0x103a3be0 */
  push32(0x103a32c5u); f_103a3be0();
  /* 103a32c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a32ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a32cc jne 0x103a32ee */
  if (!C.zf) goto L_103a32ee;
  /* 103a32ce mov esi, esp */
  ESI = (ESP);
  /* 103a32d0 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 103a32d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a32d7 push 0x103d04e0 */
  push32((uint32_t)(0x103d04e0u));
  /* 103a32dc push 1 */
  push32((uint32_t)(0x1u));
  /* 103a32de call dword ptr [0x103d3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3464))), 0x103a32e4u);
  /* 103a32e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a32e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a32e9 call 0x103a3be0 */
  push32(0x103a32eeu); f_103a3be0();
L_103a32ee:;
  /* 103a32ee mov esi, esp */
  ESI = (ESP);
  /* 103a32f0 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 103a32f2 call dword ptr [0x103d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3424))), 0x103a32f8u);
  /* 103a32f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a32fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a32fd call 0x103a3be0 */
  push32(0x103a3302u); f_103a3be0();
  /* 103a3302 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a3307 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a3309 je 0x103a3397 */
  if (C.zf) goto L_103a3397;
  /* 103a330f mov esi, esp */
  ESI = (ESP);
  /* 103a3311 push 0x103d0400 */
  push32((uint32_t)(0x103d0400u));
  /* 103a3316 push 0x103d0460 */
  push32((uint32_t)(0x103d0460u));
  /* 103a331b call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a3321u);
  /* 103a3321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3324 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3326 call 0x103a3be0 */
  push32(0x103a332bu); f_103a3be0();
  /* 103a332b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a332d jg 0x103a334f */
  if ((!C.zf&&C.sf==C.of)) goto L_103a334f;
  /* 103a332f mov esi, esp */
  ESI = (ESP);
  /* 103a3331 push 0x103d0400 */
  push32((uint32_t)(0x103d0400u));
  /* 103a3336 push 0x103d0478 */
  push32((uint32_t)(0x103d0478u));
  /* 103a333b call dword ptr [0x103d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3444))), 0x103a3341u);
  /* 103a3341 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3344 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3346 call 0x103a3be0 */
  push32(0x103a334bu); f_103a3be0();
  /* 103a334b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a334d jle 0x103a3397 */
  if ((C.zf||C.sf!=C.of)) goto L_103a3397;
L_103a334f:;
  /* 103a334f mov esi, esp */
  ESI = (ESP);
  /* 103a3351 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a3353 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 103a3355 call dword ptr [0x103d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3428))), 0x103a335bu);
  /* 103a335b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a335e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3360 call 0x103a3be0 */
  push32(0x103a3365u); f_103a3be0();
  /* 103a3365 mov esi, esp */
  ESI = (ESP);
  /* 103a3367 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 103a336c push 2 */
  push32((uint32_t)(0x2u));
  /* 103a336e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a3370 call dword ptr [0x103d344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d344c))), 0x103a3376u);
  /* 103a3376 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a337b call 0x103a3be0 */
  push32(0x103a3380u); f_103a3be0();
  /* 103a3380 mov esi, esp */
  ESI = (ESP);
  /* 103a3382 push 0x103cb218 */
  push32((uint32_t)(0x103cb218u));
  /* 103a3387 call dword ptr [0x103d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3430))), 0x103a338du);
  /* 103a338d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3392 call 0x103a3be0 */
  push32(0x103a3397u); f_103a3be0();
L_103a3397:;
  /* 103a3397 pop edi */
  EDI = (pop32());
  /* 103a3398 pop esi */
  ESI = (pop32());
  /* 103a3399 pop ebx */
  EBX = (pop32());
  /* 103a339a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a339d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a339f call 0x103a3be0 */
  push32(0x103a33a4u); f_103a3be0();
  /* 103a33a4 mov esp, ebp */
  ESP = (EBP);
  /* 103a33a6 pop ebp */
  EBP = (pop32());
  /* 103a33a7 ret  */
  ESPCHK(0x103a18d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a60 @ 0x103a3a60 (63 bytes, 26 insns) */
void f_103a3a60(void) {
  FTRACE(0x103a3a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a3a60 push ebp */
  push32((uint32_t)(EBP));
  /* 103a3a61 mov ebp, esp */
  EBP = (ESP);
  /* 103a3a63 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a3a66 push ebx */
  push32((uint32_t)(EBX));
  /* 103a3a67 push esi */
  push32((uint32_t)(ESI));
  /* 103a3a68 push edi */
  push32((uint32_t)(EDI));
  /* 103a3a69 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 103a3a6c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 103a3a71 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 103a3a76 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103a3a78 mov esi, esp */
  ESI = (ESP);
  /* 103a3a7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3a7d push eax */
  push32((uint32_t)(EAX));
  /* 103a3a7e call dword ptr [0x103d3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3420))), 0x103a3a84u);
  /* 103a3a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3a87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3a89 call 0x103a3be0 */
  push32(0x103a3a8eu); f_103a3be0();
  /* 103a3a8e pop edi */
  EDI = (pop32());
  /* 103a3a8f pop esi */
  ESI = (pop32());
  /* 103a3a90 pop ebx */
  EBX = (pop32());
  /* 103a3a91 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3a94 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3a96 call 0x103a3be0 */
  push32(0x103a3a9bu); f_103a3be0();
  /* 103a3a9b mov esp, ebp */
  ESP = (EBP);
  /* 103a3a9d pop ebp */
  EBP = (pop32());
  /* 103a3a9e ret  */
  ESPCHK(0x103a3a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ab0 @ 0x103a3ab0 (67 bytes, 28 insns) */
void f_103a3ab0(void) {
  FTRACE(0x103a3ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a3ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a3ab1 mov ebp, esp */
  EBP = (ESP);
  /* 103a3ab3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a3ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 103a3ab7 push esi */
  push32((uint32_t)(ESI));
  /* 103a3ab8 push edi */
  push32((uint32_t)(EDI));
  /* 103a3ab9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 103a3abc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 103a3ac1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 103a3ac6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103a3ac8 mov esi, esp */
  ESI = (ESP);
  /* 103a3aca mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 103a3acd push eax */
  push32((uint32_t)(EAX));
  /* 103a3ace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3ad1 push ecx */
  push32((uint32_t)(ECX));
  /* 103a3ad2 call dword ptr [0x103d341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d341c))), 0x103a3ad8u);
  /* 103a3ad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3adb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3add call 0x103a3be0 */
  push32(0x103a3ae2u); f_103a3be0();
  /* 103a3ae2 pop edi */
  EDI = (pop32());
  /* 103a3ae3 pop esi */
  ESI = (pop32());
  /* 103a3ae4 pop ebx */
  EBX = (pop32());
  /* 103a3ae5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3ae8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3aea call 0x103a3be0 */
  push32(0x103a3aefu); f_103a3be0();
  /* 103a3aef mov esp, ebp */
  ESP = (EBP);
  /* 103a3af1 pop ebp */
  EBP = (pop32());
  /* 103a3af2 ret  */
  ESPCHK(0x103a3ab0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x103a3be0 (56 bytes, 28 insns) */
void f_103a3be0(void) {
  FTRACE(0x103a3be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a3be0 jne 0x103a3be3 */
  if (!C.zf) goto L_103a3be3;
  /* 103a3be2 ret  */
  ESPCHK(0x103a3be0u, _esp0);
  ESP += 4; return;
L_103a3be3:;
  /* 103a3be3 push ebp */
  push32((uint32_t)(EBP));
  /* 103a3be4 mov ebp, esp */
  EBP = (ESP);
  /* 103a3be6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a3be9 push eax */
  push32((uint32_t)(EAX));
  /* 103a3bea push edx */
  push32((uint32_t)(EDX));
  /* 103a3beb push ebx */
  push32((uint32_t)(EBX));
  /* 103a3bec push esi */
  push32((uint32_t)(ESI));
  /* 103a3bed push edi */
  push32((uint32_t)(EDI));
  /* 103a3bee push 0x103cb388 */
  push32((uint32_t)(0x103cb388u));
  /* 103a3bf3 push 0x103cb384 */
  push32((uint32_t)(0x103cb384u));
  /* 103a3bf8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 103a3bfa push 0x103cb374 */
  push32((uint32_t)(0x103cb374u));
  /* 103a3bff push 1 */
  push32((uint32_t)(0x1u));
  /* 103a3c01 call 0x103a3fb0 */
  push32(0x103a3c06u); f_103a3fb0();
  /* 103a3c06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3c09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3c0c jne 0x103a3c0f */
  if (!C.zf) goto L_103a3c0f;
  /* 103a3c0e int3  */
  x86_unimpl("int3 @ 0x103a3c0e");
L_103a3c0f:;
  /* 103a3c0f pop edi */
  EDI = (pop32());
  /* 103a3c10 pop esi */
  ESI = (pop32());
  /* 103a3c11 pop ebx */
  EBX = (pop32());
  /* 103a3c12 pop edx */
  EDX = (pop32());
  /* 103a3c13 pop eax */
  EAX = (pop32());
  /* 103a3c14 mov esp, ebp */
  ESP = (EBP);
  /* 103a3c16 pop ebp */
  EBP = (pop32());
  /* 103a3c17 ret  */
  ESPCHK(0x103a3be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c20 @ 0x103a3c20 (313 bytes, 78 insns) */
void f_103a3c20(void) {
  FTRACE(0x103a3c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a3c20 push ebp */
  push32((uint32_t)(EBP));
  /* 103a3c21 mov ebp, esp */
  EBP = (ESP);
  /* 103a3c23 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3c27 jne 0x103a3ce7 */
  if (!C.zf) goto L_103a3ce7;
  /* 103a3c2d call dword ptr [0x103d332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d332c))), 0x103a3c33u);
  /* 103a3c33 mov dword ptr [0x103d05f4], eax */
  w32((uint32_t)(0x103d05f4), (EAX));
  /* 103a3c38 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a3c3a call 0x103a76e0 */
  push32(0x103a3c3fu); f_103a76e0();
  /* 103a3c3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a3c44 jne 0x103a3c4d */
  if (!C.zf) goto L_103a3c4d;
  /* 103a3c46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a3c48 jmp 0x103a3d55 */
  goto L_103a3d55;
L_103a3c4d:;
  /* 103a3c4d mov eax, dword ptr [0x103d05f4] */
  EAX = (r32((uint32_t)(0x103d05f4)));
  /* 103a3c52 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103a3c55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a3c5a mov dword ptr [0x103d0600], eax */
  w32((uint32_t)(0x103d0600), (EAX));
  /* 103a3c5f mov ecx, dword ptr [0x103d05f4] */
  ECX = (r32((uint32_t)(0x103d05f4)));
  /* 103a3c65 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a3c6b mov dword ptr [0x103d05fc], ecx */
  w32((uint32_t)(0x103d05fc), (ECX));
  /* 103a3c71 mov edx, dword ptr [0x103d05fc] */
  EDX = (r32((uint32_t)(0x103d05fc)));
  /* 103a3c77 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 103a3c7a add edx, dword ptr [0x103d0600] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x103d0600))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3c80 mov dword ptr [0x103d05f8], edx */
  w32((uint32_t)(0x103d05f8), (EDX));
  /* 103a3c86 mov eax, dword ptr [0x103d05f4] */
  EAX = (r32((uint32_t)(0x103d05f4)));
  /* 103a3c8b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103a3c8e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a3c93 mov dword ptr [0x103d05f4], eax */
  w32((uint32_t)(0x103d05f4), (EAX));
  /* 103a3c98 call 0x103a4850 */
  push32(0x103a3c9du); f_103a4850();
  /* 103a3c9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a3c9f jne 0x103a3cad */
  if (!C.zf) goto L_103a3cad;
  /* 103a3ca1 call 0x103a7730 */
  push32(0x103a3ca6u); f_103a7730();
  /* 103a3ca6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a3ca8 jmp 0x103a3d55 */
  goto L_103a3d55;
L_103a3cad:;
  /* 103a3cad call dword ptr [0x103d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3328))), 0x103a3cb3u);
  /* 103a3cb3 mov dword ptr [0x103d212c], eax */
  w32((uint32_t)(0x103d212c), (EAX));
  /* 103a3cb8 call 0x103a74c0 */
  push32(0x103a3cbdu); f_103a74c0();
  /* 103a3cbd mov dword ptr [0x103d05dc], eax */
  w32((uint32_t)(0x103d05dc), (EAX));
  /* 103a3cc2 call 0x103a4b00 */
  push32(0x103a3cc7u); f_103a4b00();
  /* 103a3cc7 call 0x103a6fb0 */
  push32(0x103a3cccu); f_103a6fb0();
  /* 103a3ccc call 0x103a6e60 */
  push32(0x103a3cd1u); f_103a6e60();
  /* 103a3cd1 call 0x103a4650 */
  push32(0x103a3cd6u); f_103a4650();
  /* 103a3cd6 mov ecx, dword ptr [0x103d05d8] */
  ECX = (r32((uint32_t)(0x103d05d8)));
  /* 103a3cdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3cdf mov dword ptr [0x103d05d8], ecx */
  w32((uint32_t)(0x103d05d8), (ECX));
  /* 103a3ce5 jmp 0x103a3d50 */
  goto L_103a3d50;
L_103a3ce7:;
  /* 103a3ce7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3ceb jne 0x103a3d40 */
  if (!C.zf) goto L_103a3d40;
  /* 103a3ced cmp dword ptr [0x103d05d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d05d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3cf4 jle 0x103a3d3a */
  if ((C.zf||C.sf!=C.of)) goto L_103a3d3a;
  /* 103a3cf6 mov edx, dword ptr [0x103d05d8] */
  EDX = (r32((uint32_t)(0x103d05d8)));
  /* 103a3cfc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a3cff mov dword ptr [0x103d05d8], edx */
  w32((uint32_t)(0x103d05d8), (EDX));
  /* 103a3d05 cmp dword ptr [0x103d062c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d062c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3d0c jne 0x103a3d13 */
  if (!C.zf) goto L_103a3d13;
  /* 103a3d0e call 0x103a46d0 */
  push32(0x103a3d13u); f_103a46d0();
L_103a3d13:;
  /* 103a3d13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103a3d15 call 0x103a6400 */
  push32(0x103a3d1au); f_103a6400();
  /* 103a3d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3d1d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 103a3d20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a3d22 je 0x103a3d29 */
  if (C.zf) goto L_103a3d29;
  /* 103a3d24 call 0x103a6d10 */
  push32(0x103a3d29u); f_103a6d10();
L_103a3d29:;
  /* 103a3d29 call 0x103a4e30 */
  push32(0x103a3d2eu); f_103a4e30();
  /* 103a3d2e call 0x103a48e0 */
  push32(0x103a3d33u); f_103a48e0();
  /* 103a3d33 call 0x103a7730 */
  push32(0x103a3d38u); f_103a7730();
  /* 103a3d38 jmp 0x103a3d3e */
  goto L_103a3d3e;
L_103a3d3a:;
  /* 103a3d3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a3d3c jmp 0x103a3d55 */
  goto L_103a3d55;
L_103a3d3e:;
  /* 103a3d3e jmp 0x103a3d50 */
  goto L_103a3d50;
L_103a3d40:;
  /* 103a3d40 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3d44 jne 0x103a3d50 */
  if (!C.zf) goto L_103a3d50;
  /* 103a3d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a3d48 call 0x103a49d0 */
  push32(0x103a3d4du); f_103a49d0();
  /* 103a3d4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a3d50:;
  /* 103a3d50 mov eax, 1 */
  EAX = (0x1u);
L_103a3d55:;
  /* 103a3d55 pop ebp */
  EBP = (pop32());
  /* 103a3d56 ret 0xc */
  ESPCHK(0x103a3c20u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x103a3d60 (243 bytes, 86 insns) */
void f_103a3d60(void) {
  FTRACE(0x103a3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 103a3d61 mov ebp, esp */
  EBP = (ESP);
  /* 103a3d63 push ecx */
  push32((uint32_t)(ECX));
  /* 103a3d64 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103a3d6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3d6f jne 0x103a3d81 */
  if (!C.zf) goto L_103a3d81;
  /* 103a3d71 cmp dword ptr [0x103d05d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d05d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3d78 jne 0x103a3d81 */
  if (!C.zf) goto L_103a3d81;
  /* 103a3d7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a3d7c jmp 0x103a3e4d */
  goto L_103a3e4d;
L_103a3d81:;
  /* 103a3d81 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3d85 je 0x103a3d8d */
  if (C.zf) goto L_103a3d8d;
  /* 103a3d87 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3d8b jne 0x103a3dcf */
  if (!C.zf) goto L_103a3dcf;
L_103a3d8d:;
  /* 103a3d8d cmp dword ptr [0x103d213c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d213c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3d94 je 0x103a3dab */
  if (C.zf) goto L_103a3dab;
  /* 103a3d96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a3d99 push eax */
  push32((uint32_t)(EAX));
  /* 103a3d9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a3d9d push ecx */
  push32((uint32_t)(ECX));
  /* 103a3d9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3da1 push edx */
  push32((uint32_t)(EDX));
  /* 103a3da2 call dword ptr [0x103d213c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d213c))), 0x103a3da8u);
  /* 103a3da8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a3dab:;
  /* 103a3dab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3daf je 0x103a3dc5 */
  if (C.zf) goto L_103a3dc5;
  /* 103a3db1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a3db4 push eax */
  push32((uint32_t)(EAX));
  /* 103a3db5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a3db8 push ecx */
  push32((uint32_t)(ECX));
  /* 103a3db9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3dbc push edx */
  push32((uint32_t)(EDX));
  /* 103a3dbd call 0x103a3c20 */
  push32(0x103a3dc2u); f_103a3c20();
  /* 103a3dc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a3dc5:;
  /* 103a3dc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3dc9 jne 0x103a3dcf */
  if (!C.zf) goto L_103a3dcf;
  /* 103a3dcb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a3dcd jmp 0x103a3e4d */
  goto L_103a3e4d;
L_103a3dcf:;
  /* 103a3dcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a3dd2 push eax */
  push32((uint32_t)(EAX));
  /* 103a3dd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a3dd6 push ecx */
  push32((uint32_t)(ECX));
  /* 103a3dd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3dda push edx */
  push32((uint32_t)(EDX));
  /* 103a3ddb call 0x103a1014 */
  push32(0x103a3de0u); f_103a1014();
  /* 103a3de0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a3de3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3de7 jne 0x103a3dfe */
  if (!C.zf) goto L_103a3dfe;
  /* 103a3de9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3ded jne 0x103a3dfe */
  if (!C.zf) goto L_103a3dfe;
  /* 103a3def mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a3df2 push eax */
  push32((uint32_t)(EAX));
  /* 103a3df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a3df5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3df8 push ecx */
  push32((uint32_t)(ECX));
  /* 103a3df9 call 0x103a3c20 */
  push32(0x103a3dfeu); f_103a3c20();
L_103a3dfe:;
  /* 103a3dfe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3e02 je 0x103a3e0a */
  if (C.zf) goto L_103a3e0a;
  /* 103a3e04 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3e08 jne 0x103a3e4a */
  if (!C.zf) goto L_103a3e4a;
L_103a3e0a:;
  /* 103a3e0a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a3e0d push edx */
  push32((uint32_t)(EDX));
  /* 103a3e0e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a3e11 push eax */
  push32((uint32_t)(EAX));
  /* 103a3e12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3e15 push ecx */
  push32((uint32_t)(ECX));
  /* 103a3e16 call 0x103a3c20 */
  push32(0x103a3e1bu); f_103a3c20();
  /* 103a3e1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a3e1d jne 0x103a3e26 */
  if (!C.zf) goto L_103a3e26;
  /* 103a3e1f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103a3e26:;
  /* 103a3e26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3e2a je 0x103a3e4a */
  if (C.zf) goto L_103a3e4a;
  /* 103a3e2c cmp dword ptr [0x103d213c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d213c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3e33 je 0x103a3e4a */
  if (C.zf) goto L_103a3e4a;
  /* 103a3e35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a3e38 push edx */
  push32((uint32_t)(EDX));
  /* 103a3e39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a3e3c push eax */
  push32((uint32_t)(EAX));
  /* 103a3e3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3e40 push ecx */
  push32((uint32_t)(ECX));
  /* 103a3e41 call dword ptr [0x103d213c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d213c))), 0x103a3e47u);
  /* 103a3e47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a3e4a:;
  /* 103a3e4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103a3e4d:;
  /* 103a3e4d mov esp, ebp */
  ESP = (EBP);
  /* 103a3e4f pop ebp */
  EBP = (pop32());
  /* 103a3e50 ret 0xc */
  ESPCHK(0x103a3d60u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x103a3e60 (58 bytes, 18 insns) */
void f_103a3e60(void) {
  FTRACE(0x103a3e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a3e60 push ebp */
  push32((uint32_t)(EBP));
  /* 103a3e61 mov ebp, esp */
  EBP = (ESP);
  /* 103a3e63 cmp dword ptr [0x103d05e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d05e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3e6a je 0x103a3e7e */
  if (C.zf) goto L_103a3e7e;
  /* 103a3e6c cmp dword ptr [0x103d05e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d05e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3e73 jne 0x103a3e83 */
  if (!C.zf) goto L_103a3e83;
  /* 103a3e75 cmp dword ptr [0x103d05e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d05e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3e7c jne 0x103a3e83 */
  if (!C.zf) goto L_103a3e83;
L_103a3e7e:;
  /* 103a3e7e call 0x103a77d0 */
  push32(0x103a3e83u); f_103a77d0();
L_103a3e83:;
  /* 103a3e83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3e86 push eax */
  push32((uint32_t)(EAX));
  /* 103a3e87 call 0x103a7820 */
  push32(0x103a3e8cu); f_103a7820();
  /* 103a3e8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3e8f push 0xff */
  push32((uint32_t)(0xffu));
  /* 103a3e94 call dword ptr [0x103cea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x103cea30))), 0x103a3e9au);
  /* 103a3e9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a3e9d pop ebp */
  EBP = (pop32());
  /* 103a3e9e ret  */
  ESPCHK(0x103a3e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ea0 @ 0x103a3ea0 (11 bytes, 5 insns) */
void f_103a3ea0(void) {
  FTRACE(0x103a3ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a3ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a3ea1 mov ebp, esp */
  EBP = (ESP);
  /* 103a3ea3 call dword ptr [0x103d3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3330))), 0x103a3ea9u);
  /* 103a3ea9 pop ebp */
  EBP = (pop32());
  /* 103a3eaa ret  */
  ESPCHK(0x103a3ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003eb0 @ 0x103a3eb0 (87 bytes, 30 insns) */
void f_103a3eb0(void) {
  FTRACE(0x103a3eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a3eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a3eb1 mov ebp, esp */
  EBP = (ESP);
  /* 103a3eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a3eb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3eb8 jl 0x103a3ec0 */
  if ((C.sf!=C.of)) goto L_103a3ec0;
  /* 103a3eba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3ebe jl 0x103a3ec5 */
  if ((C.sf!=C.of)) goto L_103a3ec5;
L_103a3ec0:;
  /* 103a3ec0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a3ec3 jmp 0x103a3f03 */
  goto L_103a3f03;
L_103a3ec5:;
  /* 103a3ec5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3ec9 jne 0x103a3ed7 */
  if (!C.zf) goto L_103a3ed7;
  /* 103a3ecb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3ece mov eax, dword ptr [eax*4 + 0x103cea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x103cea38)));
  /* 103a3ed5 jmp 0x103a3f03 */
  goto L_103a3f03;
L_103a3ed7:;
  /* 103a3ed7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a3eda and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 103a3edd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a3edf je 0x103a3ee6 */
  if (C.zf) goto L_103a3ee6;
  /* 103a3ee1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a3ee4 jmp 0x103a3f03 */
  goto L_103a3f03;
L_103a3ee6:;
  /* 103a3ee6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3ee9 mov eax, dword ptr [edx*4 + 0x103cea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x103cea38)));
  /* 103a3ef0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a3ef3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3ef6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a3ef9 mov dword ptr [ecx*4 + 0x103cea38], edx */
  w32((uint32_t)(ECX*4 + 0x103cea38), (EDX));
  /* 103a3f00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103a3f03:;
  /* 103a3f03 mov esp, ebp */
  ESP = (EBP);
  /* 103a3f05 pop ebp */
  EBP = (pop32());
  /* 103a3f06 ret  */
  ESPCHK(0x103a3eb0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x103a3f10 (126 bytes, 38 insns) */
void f_103a3f10(void) {
  FTRACE(0x103a3f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a3f10 push ebp */
  push32((uint32_t)(EBP));
  /* 103a3f11 mov ebp, esp */
  EBP = (ESP);
  /* 103a3f13 push ecx */
  push32((uint32_t)(ECX));
  /* 103a3f14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3f18 jl 0x103a3f20 */
  if ((C.sf!=C.of)) goto L_103a3f20;
  /* 103a3f1a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3f1e jl 0x103a3f27 */
  if ((C.sf!=C.of)) goto L_103a3f27;
L_103a3f20:;
  /* 103a3f20 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 103a3f25 jmp 0x103a3f8a */
  goto L_103a3f8a;
L_103a3f27:;
  /* 103a3f27 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3f2b jne 0x103a3f39 */
  if (!C.zf) goto L_103a3f39;
  /* 103a3f2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3f30 mov eax, dword ptr [eax*4 + 0x103cea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x103cea44)));
  /* 103a3f37 jmp 0x103a3f8a */
  goto L_103a3f8a;
L_103a3f39:;
  /* 103a3f39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3f3c mov edx, dword ptr [ecx*4 + 0x103cea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103cea44)));
  /* 103a3f43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a3f46 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3f4a jne 0x103a3f60 */
  if (!C.zf) goto L_103a3f60;
  /* 103a3f4c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 103a3f4e call dword ptr [0x103d3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3334))), 0x103a3f54u);
  /* 103a3f54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3f57 mov dword ptr [ecx*4 + 0x103cea44], eax */
  w32((uint32_t)(ECX*4 + 0x103cea44), (EAX));
  /* 103a3f5e jmp 0x103a3f87 */
  goto L_103a3f87;
L_103a3f60:;
  /* 103a3f60 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a3f64 jne 0x103a3f7a */
  if (!C.zf) goto L_103a3f7a;
  /* 103a3f66 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 103a3f68 call dword ptr [0x103d3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3334))), 0x103a3f6eu);
  /* 103a3f6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3f71 mov dword ptr [edx*4 + 0x103cea44], eax */
  w32((uint32_t)(EDX*4 + 0x103cea44), (EAX));
  /* 103a3f78 jmp 0x103a3f87 */
  goto L_103a3f87;
L_103a3f7a:;
  /* 103a3f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3f7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a3f80 mov dword ptr [eax*4 + 0x103cea44], ecx */
  w32((uint32_t)(EAX*4 + 0x103cea44), (ECX));
L_103a3f87:;
  /* 103a3f87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103a3f8a:;
  /* 103a3f8a mov esp, ebp */
  ESP = (EBP);
  /* 103a3f8c pop ebp */
  EBP = (pop32());
  /* 103a3f8d ret  */
  ESPCHK(0x103a3f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f90 @ 0x103a3f90 (28 bytes, 11 insns) */
void f_103a3f90(void) {
  FTRACE(0x103a3f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a3f90 push ebp */
  push32((uint32_t)(EBP));
  /* 103a3f91 mov ebp, esp */
  EBP = (ESP);
  /* 103a3f93 push ecx */
  push32((uint32_t)(ECX));
  /* 103a3f94 mov eax, dword ptr [0x103d2120] */
  EAX = (r32((uint32_t)(0x103d2120)));
  /* 103a3f99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a3f9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a3f9f mov dword ptr [0x103d2120], ecx */
  w32((uint32_t)(0x103d2120), (ECX));
  /* 103a3fa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a3fa8 mov esp, ebp */
  ESP = (EBP);
  /* 103a3faa pop ebp */
  EBP = (pop32());
  /* 103a3fab ret  */
  ESPCHK(0x103a3f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fb0 @ 0x103a3fb0 (912 bytes, 248 insns) */
void f_103a3fb0(void) {
  FTRACE(0x103a3fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a3fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a3fb1 mov ebp, esp */
  EBP = (ESP);
  /* 103a3fb3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 103a3fb8 call 0x103a8090 */
  push32(0x103a3fbdu); f_103a8090();
  /* 103a3fbd push edi */
  push32((uint32_t)(EDI));
  /* 103a3fbe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 103a3fc5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 103a3fca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a3fcc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 103a3fd2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103a3fd4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 103a3fd6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103a3fd7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 103a3fde mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 103a3fe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a3fe5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 103a3feb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103a3fed stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 103a3fef stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103a3ff0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 103a3ff7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 103a3ffc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a3ffe lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 103a4004 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103a4006 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 103a4008 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103a4009 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 103a400c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 103a4012 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4016 jl 0x103a401e */
  if ((C.sf!=C.of)) goto L_103a401e;
  /* 103a4018 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a401c jl 0x103a4026 */
  if ((C.sf!=C.of)) goto L_103a4026;
L_103a401e:;
  /* 103a401e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a4021 jmp 0x103a433b */
  goto L_103a433b;
L_103a4026:;
  /* 103a4026 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a402a jne 0x103a40d0 */
  if (!C.zf) goto L_103a40d0;
  /* 103a4030 push 0x103cea34 */
  push32((uint32_t)(0x103cea34u));
  /* 103a4035 call dword ptr [0x103d334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d334c))), 0x103a403bu);
  /* 103a403b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a403d jle 0x103a40d0 */
  if ((C.zf||C.sf!=C.of)) goto L_103a40d0;
  /* 103a4043 cmp dword ptr [0x103d05ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d05ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a404a jne 0x103a408e */
  if (!C.zf) goto L_103a408e;
  /* 103a404c push 0x103cb530 */
  push32((uint32_t)(0x103cb530u));
  /* 103a4051 call dword ptr [0x103d3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3348))), 0x103a4057u);
  /* 103a4057 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 103a405d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4064 je 0x103a4086 */
  if (C.zf) goto L_103a4086;
  /* 103a4066 push 0x103cb524 */
  push32((uint32_t)(0x103cb524u));
  /* 103a406b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 103a4071 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4072 call dword ptr [0x103d3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3344))), 0x103a4078u);
  /* 103a4078 mov dword ptr [0x103d05ec], eax */
  w32((uint32_t)(0x103d05ec), (EAX));
  /* 103a407d cmp dword ptr [0x103d05ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d05ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4084 jne 0x103a408e */
  if (!C.zf) goto L_103a408e;
L_103a4086:;
  /* 103a4086 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a4089 jmp 0x103a433b */
  goto L_103a433b;
L_103a408e:;
  /* 103a408e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a4091 push edx */
  push32((uint32_t)(EDX));
  /* 103a4092 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a4095 push eax */
  push32((uint32_t)(EAX));
  /* 103a4096 push 0x103cb4f0 */
  push32((uint32_t)(0x103cb4f0u));
  /* 103a409b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 103a40a1 push ecx */
  push32((uint32_t)(ECX));
  /* 103a40a2 call dword ptr [0x103d05ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d05ec))), 0x103a40a8u);
  /* 103a40a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a40ab lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 103a40b1 push edx */
  push32((uint32_t)(EDX));
  /* 103a40b2 call dword ptr [0x103d3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3340))), 0x103a40b8u);
  /* 103a40b8 push 0x103cea34 */
  push32((uint32_t)(0x103cea34u));
  /* 103a40bd call dword ptr [0x103d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d333c))), 0x103a40c3u);
  /* 103a40c3 call 0x103a3ea0 */
  push32(0x103a40c8u); f_103a3ea0();
  /* 103a40c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a40cb jmp 0x103a433b */
  goto L_103a433b;
L_103a40d0:;
  /* 103a40d0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a40d4 je 0x103a410d */
  if (C.zf) goto L_103a410d;
  /* 103a40d6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 103a40dc push eax */
  push32((uint32_t)(EAX));
  /* 103a40dd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a40e0 push ecx */
  push32((uint32_t)(ECX));
  /* 103a40e1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 103a40e6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 103a40ec push edx */
  push32((uint32_t)(EDX));
  /* 103a40ed call 0x103a7f90 */
  push32(0x103a40f2u); f_103a7f90();
  /* 103a40f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a40f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a40f7 jge 0x103a410d */
  if ((C.sf==C.of)) goto L_103a410d;
  /* 103a40f9 push 0x103cb4c4 */
  push32((uint32_t)(0x103cb4c4u));
  /* 103a40fe lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 103a4104 push eax */
  push32((uint32_t)(EAX));
  /* 103a4105 call 0x103a7ea0 */
  push32(0x103a410au); f_103a7ea0();
  /* 103a410a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a410d:;
  /* 103a410d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4111 jne 0x103a4145 */
  if (!C.zf) goto L_103a4145;
  /* 103a4113 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4117 je 0x103a4125 */
  if (C.zf) goto L_103a4125;
  /* 103a4119 mov dword ptr [ebp - 0x3028], 0x103cb4b0 */
  w32((uint32_t)(EBP + -0x3028), (0x103cb4b0u));
  /* 103a4123 jmp 0x103a412f */
  goto L_103a412f;
L_103a4125:;
  /* 103a4125 mov dword ptr [ebp - 0x3028], 0x103cb49c */
  w32((uint32_t)(EBP + -0x3028), (0x103cb49cu));
L_103a412f:;
  /* 103a412f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 103a4135 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4136 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 103a413c push edx */
  push32((uint32_t)(EDX));
  /* 103a413d call 0x103a7ea0 */
  push32(0x103a4142u); f_103a7ea0();
  /* 103a4142 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4145:;
  /* 103a4145 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 103a414b push eax */
  push32((uint32_t)(EAX));
  /* 103a414c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 103a4152 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4153 call 0x103a7eb0 */
  push32(0x103a4158u); f_103a7eb0();
  /* 103a4158 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a415b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a415f jne 0x103a419a */
  if (!C.zf) goto L_103a419a;
  /* 103a4161 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4164 mov eax, dword ptr [edx*4 + 0x103cea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x103cea38)));
  /* 103a416b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 103a416e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a4170 je 0x103a4186 */
  if (C.zf) goto L_103a4186;
  /* 103a4172 push 0x103cb498 */
  push32((uint32_t)(0x103cb498u));
  /* 103a4177 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 103a417d push ecx */
  push32((uint32_t)(ECX));
  /* 103a417e call 0x103a7eb0 */
  push32(0x103a4183u); f_103a7eb0();
  /* 103a4183 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4186:;
  /* 103a4186 push 0x103cb494 */
  push32((uint32_t)(0x103cb494u));
  /* 103a418b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 103a4191 push edx */
  push32((uint32_t)(EDX));
  /* 103a4192 call 0x103a7eb0 */
  push32(0x103a4197u); f_103a7eb0();
  /* 103a4197 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a419a:;
  /* 103a419a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a419e je 0x103a41e2 */
  if (C.zf) goto L_103a41e2;
  /* 103a41a0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 103a41a6 push eax */
  push32((uint32_t)(EAX));
  /* 103a41a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a41aa push ecx */
  push32((uint32_t)(ECX));
  /* 103a41ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a41ae push edx */
  push32((uint32_t)(EDX));
  /* 103a41af push 0x103cb488 */
  push32((uint32_t)(0x103cb488u));
  /* 103a41b4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103a41b9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 103a41bf push eax */
  push32((uint32_t)(EAX));
  /* 103a41c0 call 0x103a7da0 */
  push32(0x103a41c5u); f_103a7da0();
  /* 103a41c5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a41c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a41ca jge 0x103a41e0 */
  if ((C.sf==C.of)) goto L_103a41e0;
  /* 103a41cc push 0x103cb4c4 */
  push32((uint32_t)(0x103cb4c4u));
  /* 103a41d1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 103a41d7 push ecx */
  push32((uint32_t)(ECX));
  /* 103a41d8 call 0x103a7ea0 */
  push32(0x103a41ddu); f_103a7ea0();
  /* 103a41dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a41e0:;
  /* 103a41e0 jmp 0x103a41f8 */
  goto L_103a41f8;
L_103a41e2:;
  /* 103a41e2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 103a41e8 push edx */
  push32((uint32_t)(EDX));
  /* 103a41e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 103a41ef push eax */
  push32((uint32_t)(EAX));
  /* 103a41f0 call 0x103a7ea0 */
  push32(0x103a41f5u); f_103a7ea0();
  /* 103a41f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a41f8:;
  /* 103a41f8 cmp dword ptr [0x103d2120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d2120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a41ff je 0x103a423c */
  if (C.zf) goto L_103a423c;
  /* 103a4201 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 103a4207 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4208 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 103a420e push edx */
  push32((uint32_t)(EDX));
  /* 103a420f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4212 push eax */
  push32((uint32_t)(EAX));
  /* 103a4213 call dword ptr [0x103d2120] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d2120))), 0x103a4219u);
  /* 103a4219 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a421c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a421e je 0x103a423c */
  if (C.zf) goto L_103a423c;
  /* 103a4220 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4224 jne 0x103a4231 */
  if (!C.zf) goto L_103a4231;
  /* 103a4226 push 0x103cea34 */
  push32((uint32_t)(0x103cea34u));
  /* 103a422b call dword ptr [0x103d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d333c))), 0x103a4231u);
L_103a4231:;
  /* 103a4231 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 103a4237 jmp 0x103a433b */
  goto L_103a433b;
L_103a423c:;
  /* 103a423c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a423f mov edx, dword ptr [ecx*4 + 0x103cea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103cea38)));
  /* 103a4246 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103a4249 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a424b je 0x103a428b */
  if (C.zf) goto L_103a428b;
  /* 103a424d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4250 cmp dword ptr [eax*4 + 0x103cea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x103cea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4258 je 0x103a428b */
  if (C.zf) goto L_103a428b;
  /* 103a425a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a425c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 103a4262 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4263 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 103a4269 push edx */
  push32((uint32_t)(EDX));
  /* 103a426a call 0x103a7d20 */
  push32(0x103a426fu); f_103a7d20();
  /* 103a426f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4272 push eax */
  push32((uint32_t)(EAX));
  /* 103a4273 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 103a4279 push eax */
  push32((uint32_t)(EAX));
  /* 103a427a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a427d mov edx, dword ptr [ecx*4 + 0x103cea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103cea44)));
  /* 103a4284 push edx */
  push32((uint32_t)(EDX));
  /* 103a4285 call dword ptr [0x103d3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3338))), 0x103a428bu);
L_103a428b:;
  /* 103a428b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a428e mov ecx, dword ptr [eax*4 + 0x103cea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x103cea38)));
  /* 103a4295 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 103a4298 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a429a je 0x103a42a9 */
  if (C.zf) goto L_103a42a9;
  /* 103a429c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 103a42a2 push edx */
  push32((uint32_t)(EDX));
  /* 103a42a3 call dword ptr [0x103d3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3340))), 0x103a42a9u);
L_103a42a9:;
  /* 103a42a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a42ac mov ecx, dword ptr [eax*4 + 0x103cea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x103cea38)));
  /* 103a42b3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103a42b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a42b8 je 0x103a4328 */
  if (C.zf) goto L_103a4328;
  /* 103a42ba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a42be je 0x103a42dd */
  if (C.zf) goto L_103a42dd;
  /* 103a42c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 103a42c2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 103a42c8 push edx */
  push32((uint32_t)(EDX));
  /* 103a42c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a42cc push eax */
  push32((uint32_t)(EAX));
  /* 103a42cd call 0x103a7a30 */
  push32(0x103a42d2u); f_103a7a30();
  /* 103a42d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a42d5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 103a42db jmp 0x103a42e7 */
  goto L_103a42e7;
L_103a42dd:;
  /* 103a42dd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_103a42e7:;
  /* 103a42e7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 103a42ed push ecx */
  push32((uint32_t)(ECX));
  /* 103a42ee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a42f1 push edx */
  push32((uint32_t)(EDX));
  /* 103a42f2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 103a42f8 push eax */
  push32((uint32_t)(EAX));
  /* 103a42f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a42fc push ecx */
  push32((uint32_t)(ECX));
  /* 103a42fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4300 push edx */
  push32((uint32_t)(EDX));
  /* 103a4301 call 0x103a4340 */
  push32(0x103a4306u); f_103a4340();
  /* 103a4306 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4309 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 103a430f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4313 jne 0x103a4320 */
  if (!C.zf) goto L_103a4320;
  /* 103a4315 push 0x103cea34 */
  push32((uint32_t)(0x103cea34u));
  /* 103a431a call dword ptr [0x103d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d333c))), 0x103a4320u);
L_103a4320:;
  /* 103a4320 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 103a4326 jmp 0x103a433b */
  goto L_103a433b;
L_103a4328:;
  /* 103a4328 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a432c jne 0x103a4339 */
  if (!C.zf) goto L_103a4339;
  /* 103a432e push 0x103cea34 */
  push32((uint32_t)(0x103cea34u));
  /* 103a4333 call dword ptr [0x103d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d333c))), 0x103a4339u);
L_103a4339:;
  /* 103a4339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103a433b:;
  /* 103a433b pop edi */
  EDI = (pop32());
  /* 103a433c mov esp, ebp */
  ESP = (EBP);
  /* 103a433e pop ebp */
  EBP = (pop32());
  /* 103a433f ret  */
  ESPCHK(0x103a3fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004340 @ 0x103a4340 (780 bytes, 197 insns) */
void f_103a4340(void) {
  FTRACE(0x103a4340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4340 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4341 mov ebp, esp */
  EBP = (ESP);
  /* 103a4343 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 103a4348 call 0x103a8090 */
  push32(0x103a434du); f_103a8090();
L_103a434d:;
  /* 103a434d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4351 jne 0x103a4378 */
  if (!C.zf) goto L_103a4378;
  /* 103a4353 push 0x103cb680 */
  push32((uint32_t)(0x103cb680u));
  /* 103a4358 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a435a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 103a435f push 0x103cb674 */
  push32((uint32_t)(0x103cb674u));
  /* 103a4364 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4366 call 0x103a3fb0 */
  push32(0x103a436bu); f_103a3fb0();
  /* 103a436b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a436e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4371 jne 0x103a4378 */
  if (!C.zf) goto L_103a4378;
  /* 103a4373 call 0x103a3ea0 */
  push32(0x103a4378u); f_103a3ea0();
L_103a4378:;
  /* 103a4378 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a437a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a437c jne 0x103a434d */
  if (!C.zf) goto L_103a434d;
  /* 103a437e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 103a4383 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 103a4389 push ecx */
  push32((uint32_t)(ECX));
  /* 103a438a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a438c call dword ptr [0x103d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3350))), 0x103a4392u);
  /* 103a4392 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a4394 jne 0x103a43aa */
  if (!C.zf) goto L_103a43aa;
  /* 103a4396 push 0x103cb65c */
  push32((uint32_t)(0x103cb65cu));
  /* 103a439b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 103a43a1 push edx */
  push32((uint32_t)(EDX));
  /* 103a43a2 call 0x103a7ea0 */
  push32(0x103a43a7u); f_103a7ea0();
  /* 103a43a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a43aa:;
  /* 103a43aa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 103a43b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a43b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a43b6 push ecx */
  push32((uint32_t)(ECX));
  /* 103a43b7 call 0x103a7d20 */
  push32(0x103a43bcu); f_103a7d20();
  /* 103a43bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a43bf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a43c2 jbe 0x103a43ed */
  if ((C.cf||C.zf)) goto L_103a43ed;
  /* 103a43c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a43c7 push edx */
  push32((uint32_t)(EDX));
  /* 103a43c8 call 0x103a7d20 */
  push32(0x103a43cdu); f_103a7d20();
  /* 103a43cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a43d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a43d3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 103a43d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a43da push 3 */
  push32((uint32_t)(0x3u));
  /* 103a43dc push 0x103cb658 */
  push32((uint32_t)(0x103cb658u));
  /* 103a43e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a43e4 push eax */
  push32((uint32_t)(EAX));
  /* 103a43e5 call 0x103a8710 */
  push32(0x103a43eau); f_103a8710();
  /* 103a43ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a43ed:;
  /* 103a43ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a43f0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 103a43f6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a43fd je 0x103a4448 */
  if (C.zf) goto L_103a4448;
  /* 103a43ff mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 103a4405 push edx */
  push32((uint32_t)(EDX));
  /* 103a4406 call 0x103a7d20 */
  push32(0x103a440bu); f_103a7d20();
  /* 103a440b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a440e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4411 jbe 0x103a4448 */
  if ((C.cf||C.zf)) goto L_103a4448;
  /* 103a4413 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 103a4419 push eax */
  push32((uint32_t)(EAX));
  /* 103a441a call 0x103a7d20 */
  push32(0x103a441fu); f_103a7d20();
  /* 103a441f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4422 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 103a4428 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 103a442c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 103a4432 push 3 */
  push32((uint32_t)(0x3u));
  /* 103a4434 push 0x103cb658 */
  push32((uint32_t)(0x103cb658u));
  /* 103a4439 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 103a443f push eax */
  push32((uint32_t)(EAX));
  /* 103a4440 call 0x103a8710 */
  push32(0x103a4445u); f_103a8710();
  /* 103a4445 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4448:;
  /* 103a4448 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a444c jne 0x103a445a */
  if (!C.zf) goto L_103a445a;
  /* 103a444e mov dword ptr [ebp - 0x1114], 0x103cb5e4 */
  w32((uint32_t)(EBP + -0x1114), (0x103cb5e4u));
  /* 103a4458 jmp 0x103a4464 */
  goto L_103a4464;
L_103a445a:;
  /* 103a445a mov dword ptr [ebp - 0x1114], 0x103cb384 */
  w32((uint32_t)(EBP + -0x1114), (0x103cb384u));
L_103a4464:;
  /* 103a4464 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a4467 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103a446a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a446c je 0x103a4479 */
  if (C.zf) goto L_103a4479;
  /* 103a446e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a4471 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 103a4477 jmp 0x103a4483 */
  goto L_103a4483;
L_103a4479:;
  /* 103a4479 mov dword ptr [ebp - 0x1118], 0x103cb384 */
  w32((uint32_t)(EBP + -0x1118), (0x103cb384u));
L_103a4483:;
  /* 103a4483 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a4486 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103a4489 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a448b je 0x103a449f */
  if (C.zf) goto L_103a449f;
  /* 103a448d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4491 jne 0x103a449f */
  if (!C.zf) goto L_103a449f;
  /* 103a4493 mov dword ptr [ebp - 0x111c], 0x103cb5d4 */
  w32((uint32_t)(EBP + -0x111c), (0x103cb5d4u));
  /* 103a449d jmp 0x103a44a9 */
  goto L_103a44a9;
L_103a449f:;
  /* 103a449f mov dword ptr [ebp - 0x111c], 0x103cb384 */
  w32((uint32_t)(EBP + -0x111c), (0x103cb384u));
L_103a44a9:;
  /* 103a44a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a44ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103a44af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a44b1 je 0x103a44bf */
  if (C.zf) goto L_103a44bf;
  /* 103a44b3 mov dword ptr [ebp - 0x1120], 0x103cb5d0 */
  w32((uint32_t)(EBP + -0x1120), (0x103cb5d0u));
  /* 103a44bd jmp 0x103a44c9 */
  goto L_103a44c9;
L_103a44bf:;
  /* 103a44bf mov dword ptr [ebp - 0x1120], 0x103cb384 */
  w32((uint32_t)(EBP + -0x1120), (0x103cb384u));
L_103a44c9:;
  /* 103a44c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a44cd je 0x103a44da */
  if (C.zf) goto L_103a44da;
  /* 103a44cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a44d2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 103a44d8 jmp 0x103a44e4 */
  goto L_103a44e4;
L_103a44da:;
  /* 103a44da mov dword ptr [ebp - 0x1124], 0x103cb384 */
  w32((uint32_t)(EBP + -0x1124), (0x103cb384u));
L_103a44e4:;
  /* 103a44e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a44e8 je 0x103a44f6 */
  if (C.zf) goto L_103a44f6;
  /* 103a44ea mov dword ptr [ebp - 0x1128], 0x103cb5c8 */
  w32((uint32_t)(EBP + -0x1128), (0x103cb5c8u));
  /* 103a44f4 jmp 0x103a4500 */
  goto L_103a4500;
L_103a44f6:;
  /* 103a44f6 mov dword ptr [ebp - 0x1128], 0x103cb384 */
  w32((uint32_t)(EBP + -0x1128), (0x103cb384u));
L_103a4500:;
  /* 103a4500 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4504 je 0x103a4511 */
  if (C.zf) goto L_103a4511;
  /* 103a4506 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a4509 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 103a450f jmp 0x103a451b */
  goto L_103a451b;
L_103a4511:;
  /* 103a4511 mov dword ptr [ebp - 0x112c], 0x103cb384 */
  w32((uint32_t)(EBP + -0x112c), (0x103cb384u));
L_103a451b:;
  /* 103a451b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a451f je 0x103a452d */
  if (C.zf) goto L_103a452d;
  /* 103a4521 mov dword ptr [ebp - 0x1130], 0x103cb5c0 */
  w32((uint32_t)(EBP + -0x1130), (0x103cb5c0u));
  /* 103a452b jmp 0x103a4537 */
  goto L_103a4537;
L_103a452d:;
  /* 103a452d mov dword ptr [ebp - 0x1130], 0x103cb384 */
  w32((uint32_t)(EBP + -0x1130), (0x103cb384u));
L_103a4537:;
  /* 103a4537 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a453e je 0x103a454e */
  if (C.zf) goto L_103a454e;
  /* 103a4540 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 103a4546 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 103a454c jmp 0x103a4558 */
  goto L_103a4558;
L_103a454e:;
  /* 103a454e mov dword ptr [ebp - 0x1134], 0x103cb384 */
  w32((uint32_t)(EBP + -0x1134), (0x103cb384u));
L_103a4558:;
  /* 103a4558 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a455f je 0x103a456d */
  if (C.zf) goto L_103a456d;
  /* 103a4561 mov dword ptr [ebp - 0x1138], 0x103cb5b4 */
  w32((uint32_t)(EBP + -0x1138), (0x103cb5b4u));
  /* 103a456b jmp 0x103a4577 */
  goto L_103a4577;
L_103a456d:;
  /* 103a456d mov dword ptr [ebp - 0x1138], 0x103cb384 */
  w32((uint32_t)(EBP + -0x1138), (0x103cb384u));
L_103a4577:;
  /* 103a4577 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 103a457d push edx */
  push32((uint32_t)(EDX));
  /* 103a457e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 103a4584 push eax */
  push32((uint32_t)(EAX));
  /* 103a4585 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 103a458b push ecx */
  push32((uint32_t)(ECX));
  /* 103a458c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 103a4592 push edx */
  push32((uint32_t)(EDX));
  /* 103a4593 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 103a4599 push eax */
  push32((uint32_t)(EAX));
  /* 103a459a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 103a45a0 push ecx */
  push32((uint32_t)(ECX));
  /* 103a45a1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 103a45a7 push edx */
  push32((uint32_t)(EDX));
  /* 103a45a8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 103a45ae push eax */
  push32((uint32_t)(EAX));
  /* 103a45af mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 103a45b5 push ecx */
  push32((uint32_t)(ECX));
  /* 103a45b6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 103a45bc push edx */
  push32((uint32_t)(EDX));
  /* 103a45bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a45c0 push eax */
  push32((uint32_t)(EAX));
  /* 103a45c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a45c4 mov edx, dword ptr [ecx*4 + 0x103cea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103cea50)));
  /* 103a45cb push edx */
  push32((uint32_t)(EDX));
  /* 103a45cc push 0x103cb560 */
  push32((uint32_t)(0x103cb560u));
  /* 103a45d1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103a45d6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 103a45dc push eax */
  push32((uint32_t)(EAX));
  /* 103a45dd call 0x103a7da0 */
  push32(0x103a45e2u); f_103a7da0();
  /* 103a45e2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a45e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a45e7 jge 0x103a45fd */
  if ((C.sf==C.of)) goto L_103a45fd;
  /* 103a45e9 push 0x103cb4c4 */
  push32((uint32_t)(0x103cb4c4u));
  /* 103a45ee lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 103a45f4 push ecx */
  push32((uint32_t)(ECX));
  /* 103a45f5 call 0x103a7ea0 */
  push32(0x103a45fau); f_103a7ea0();
  /* 103a45fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a45fd:;
  /* 103a45fd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 103a4602 push 0x103cb53c */
  push32((uint32_t)(0x103cb53cu));
  /* 103a4607 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 103a460d push edx */
  push32((uint32_t)(EDX));
  /* 103a460e call 0x103a8650 */
  push32(0x103a4613u); f_103a8650();
  /* 103a4613 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4616 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 103a461c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4623 jne 0x103a4636 */
  if (!C.zf) goto L_103a4636;
  /* 103a4625 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 103a4627 call 0x103a8390 */
  push32(0x103a462cu); f_103a8390();
  /* 103a462c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a462f push 3 */
  push32((uint32_t)(0x3u));
  /* 103a4631 call 0x103a46b0 */
  push32(0x103a4636u); f_103a46b0();
L_103a4636:;
  /* 103a4636 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a463d jne 0x103a4646 */
  if (!C.zf) goto L_103a4646;
  /* 103a463f mov eax, 1 */
  EAX = (0x1u);
  /* 103a4644 jmp 0x103a4648 */
  goto L_103a4648;
L_103a4646:;
  /* 103a4646 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103a4648:;
  /* 103a4648 mov esp, ebp */
  ESP = (EBP);
  /* 103a464a pop ebp */
  EBP = (pop32());
  /* 103a464b ret  */
  ESPCHK(0x103a4340u, _esp0);
  ESP += 4; return;
}

/* FUN_10004650 @ 0x103a4650 (56 bytes, 15 insns) */
void f_103a4650(void) {
  FTRACE(0x103a4650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4650 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4651 mov ebp, esp */
  EBP = (ESP);
  /* 103a4653 cmp dword ptr [0x103d211c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d211c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a465a je 0x103a4662 */
  if (C.zf) goto L_103a4662;
  /* 103a465c call dword ptr [0x103d211c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d211c))), 0x103a4662u);
L_103a4662:;
  /* 103a4662 push 0x103ce418 */
  push32((uint32_t)(0x103ce418u));
  /* 103a4667 push 0x103ce208 */
  push32((uint32_t)(0x103ce208u));
  /* 103a466c call 0x103a4820 */
  push32(0x103a4671u); f_103a4820();
  /* 103a4671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4674 push 0x103ce104 */
  push32((uint32_t)(0x103ce104u));
  /* 103a4679 push 0x103ce000 */
  push32((uint32_t)(0x103ce000u));
  /* 103a467e call 0x103a4820 */
  push32(0x103a4683u); f_103a4820();
  /* 103a4683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4686 pop ebp */
  EBP = (pop32());
  /* 103a4687 ret  */
  ESPCHK(0x103a4650u, _esp0);
  ESP += 4; return;
}

/* FUN_10004690 @ 0x103a4690 (21 bytes, 10 insns) */
void f_103a4690(void) {
  FTRACE(0x103a4690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4690 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4691 mov ebp, esp */
  EBP = (ESP);
  /* 103a4693 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a4695 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a4697 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a469a push eax */
  push32((uint32_t)(EAX));
  /* 103a469b call 0x103a4710 */
  push32(0x103a46a0u); f_103a4710();
  /* 103a46a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a46a3 pop ebp */
  EBP = (pop32());
  /* 103a46a4 ret  */
  ESPCHK(0x103a4690u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x103a46b0 (21 bytes, 10 insns) */
void f_103a46b0(void) {
  FTRACE(0x103a46b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a46b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a46b1 mov ebp, esp */
  EBP = (ESP);
  /* 103a46b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a46b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a46b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a46ba push eax */
  push32((uint32_t)(EAX));
  /* 103a46bb call 0x103a4710 */
  push32(0x103a46c0u); f_103a4710();
  /* 103a46c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a46c3 pop ebp */
  EBP = (pop32());
  /* 103a46c4 ret  */
  ESPCHK(0x103a46b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046d0 @ 0x103a46d0 (19 bytes, 9 insns) */
void f_103a46d0(void) {
  FTRACE(0x103a46d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a46d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a46d1 mov ebp, esp */
  EBP = (ESP);
  /* 103a46d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a46d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a46d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a46d9 call 0x103a4710 */
  push32(0x103a46deu); f_103a4710();
  /* 103a46de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a46e1 pop ebp */
  EBP = (pop32());
  /* 103a46e2 ret  */
  ESPCHK(0x103a46d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046f0 @ 0x103a46f0 (19 bytes, 9 insns) */
void f_103a46f0(void) {
  FTRACE(0x103a46f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a46f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a46f1 mov ebp, esp */
  EBP = (ESP);
  /* 103a46f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a46f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a46f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a46f9 call 0x103a4710 */
  push32(0x103a46feu); f_103a4710();
  /* 103a46fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4701 pop ebp */
  EBP = (pop32());
  /* 103a4702 ret  */
  ESPCHK(0x103a46f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004710 @ 0x103a4710 (227 bytes, 61 insns) */
void f_103a4710(void) {
  FTRACE(0x103a4710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4710 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4711 mov ebp, esp */
  EBP = (ESP);
  /* 103a4713 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4714 call 0x103a4800 */
  push32(0x103a4719u); f_103a4800();
  /* 103a4719 cmp dword ptr [0x103d0630], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d0630))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4720 jne 0x103a4733 */
  if (!C.zf) goto L_103a4733;
  /* 103a4722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4725 push eax */
  push32((uint32_t)(EAX));
  /* 103a4726 call dword ptr [0x103d335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d335c))), 0x103a472cu);
  /* 103a472c push eax */
  push32((uint32_t)(EAX));
  /* 103a472d call dword ptr [0x103d3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3358))), 0x103a4733u);
L_103a4733:;
  /* 103a4733 mov dword ptr [0x103d062c], 1 */
  w32((uint32_t)(0x103d062c), (0x1u));
  /* 103a473d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 103a4740 mov byte ptr [0x103d0628], cl */
  w8((uint32_t)(0x103d0628), (CL));
  /* 103a4746 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a474a jne 0x103a4793 */
  if (!C.zf) goto L_103a4793;
  /* 103a474c cmp dword ptr [0x103d2118], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d2118))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4753 je 0x103a4781 */
  if (C.zf) goto L_103a4781;
  /* 103a4755 mov edx, dword ptr [0x103d2114] */
  EDX = (r32((uint32_t)(0x103d2114)));
  /* 103a475b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103a475e:;
  /* 103a475e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4761 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a4764 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a4767 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a476a cmp ecx, dword ptr [0x103d2118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d2118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4770 jb 0x103a4781 */
  if (C.cf) goto L_103a4781;
  /* 103a4772 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4775 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4778 je 0x103a477f */
  if (C.zf) goto L_103a477f;
  /* 103a477a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a477d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x103a477fu);
L_103a477f:;
  /* 103a477f jmp 0x103a475e */
  goto L_103a475e;
L_103a4781:;
  /* 103a4781 push 0x103ce724 */
  push32((uint32_t)(0x103ce724u));
  /* 103a4786 push 0x103ce51c */
  push32((uint32_t)(0x103ce51cu));
  /* 103a478b call 0x103a4820 */
  push32(0x103a4790u); f_103a4820();
  /* 103a4790 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4793:;
  /* 103a4793 push 0x103ce92c */
  push32((uint32_t)(0x103ce92cu));
  /* 103a4798 push 0x103ce828 */
  push32((uint32_t)(0x103ce828u));
  /* 103a479d call 0x103a4820 */
  push32(0x103a47a2u); f_103a4820();
  /* 103a47a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a47a5 cmp dword ptr [0x103d0634], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0634))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a47ac jne 0x103a47ce */
  if (!C.zf) goto L_103a47ce;
  /* 103a47ae push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103a47b0 call 0x103a6400 */
  push32(0x103a47b5u); f_103a6400();
  /* 103a47b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a47b8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 103a47bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a47bd je 0x103a47ce */
  if (C.zf) goto L_103a47ce;
  /* 103a47bf mov dword ptr [0x103d0634], 1 */
  w32((uint32_t)(0x103d0634), (0x1u));
  /* 103a47c9 call 0x103a6d10 */
  push32(0x103a47ceu); f_103a6d10();
L_103a47ce:;
  /* 103a47ce cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a47d2 je 0x103a47db */
  if (C.zf) goto L_103a47db;
  /* 103a47d4 call 0x103a4810 */
  push32(0x103a47d9u); f_103a4810();
  /* 103a47d9 jmp 0x103a47ef */
  goto L_103a47ef;
L_103a47db:;
  /* 103a47db mov dword ptr [0x103d0630], 1 */
  w32((uint32_t)(0x103d0630), (0x1u));
  /* 103a47e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a47e8 push ecx */
  push32((uint32_t)(ECX));
  /* 103a47e9 call dword ptr [0x103d3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3354))), 0x103a47efu);
L_103a47ef:;
  /* 103a47ef mov esp, ebp */
  ESP = (EBP);
  /* 103a47f1 pop ebp */
  EBP = (pop32());
  /* 103a47f2 ret  */
  ESPCHK(0x103a4710u, _esp0);
  ESP += 4; return;
}

/* FUN_10004800 @ 0x103a4800 (15 bytes, 7 insns) */
void f_103a4800(void) {
  FTRACE(0x103a4800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4800 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4801 mov ebp, esp */
  EBP = (ESP);
  /* 103a4803 push 0xd */
  push32((uint32_t)(0xdu));
  /* 103a4805 call 0x103a88f0 */
  push32(0x103a480au); f_103a88f0();
  /* 103a480a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a480d pop ebp */
  EBP = (pop32());
  /* 103a480e ret  */
  ESPCHK(0x103a4800u, _esp0);
  ESP += 4; return;
}

/* FUN_10004810 @ 0x103a4810 (15 bytes, 7 insns) */
void f_103a4810(void) {
  FTRACE(0x103a4810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4810 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4811 mov ebp, esp */
  EBP = (ESP);
  /* 103a4813 push 0xd */
  push32((uint32_t)(0xdu));
  /* 103a4815 call 0x103a8990 */
  push32(0x103a481au); f_103a8990();
  /* 103a481a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a481d pop ebp */
  EBP = (pop32());
  /* 103a481e ret  */
  ESPCHK(0x103a4810u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x103a4820 (37 bytes, 16 insns) */
void f_103a4820(void) {
  FTRACE(0x103a4820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4820 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4821 mov ebp, esp */
  EBP = (ESP);
L_103a4823:;
  /* 103a4823 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4826 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4829 jae 0x103a4843 */
  if (!C.cf) goto L_103a4843;
  /* 103a482b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a482e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4831 je 0x103a4838 */
  if (C.zf) goto L_103a4838;
  /* 103a4833 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4836 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x103a4838u);
L_103a4838:;
  /* 103a4838 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a483b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a483e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103a4841 jmp 0x103a4823 */
  goto L_103a4823;
L_103a4843:;
  /* 103a4843 pop ebp */
  EBP = (pop32());
  /* 103a4844 ret  */
  ESPCHK(0x103a4820u, _esp0);
  ESP += 4; return;
}

/* FUN_10004850 @ 0x103a4850 (130 bytes, 42 insns) */
void f_103a4850(void) {
  FTRACE(0x103a4850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4850 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4851 mov ebp, esp */
  EBP = (ESP);
  /* 103a4853 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4854 call 0x103a8810 */
  push32(0x103a4859u); f_103a8810();
  /* 103a4859 call dword ptr [0x103d3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3368))), 0x103a485fu);
  /* 103a485f mov dword ptr [0x103cea5c], eax */
  w32((uint32_t)(0x103cea5c), (EAX));
  /* 103a4864 cmp dword ptr [0x103cea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x103cea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a486b jne 0x103a4871 */
  if (!C.zf) goto L_103a4871;
  /* 103a486d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a486f jmp 0x103a48ce */
  goto L_103a48ce;
L_103a4871:;
  /* 103a4871 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 103a4873 push 0x103cb698 */
  push32((uint32_t)(0x103cb698u));
  /* 103a4878 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a487a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 103a487c push 1 */
  push32((uint32_t)(0x1u));
  /* 103a487e call 0x103a5300 */
  push32(0x103a4883u); f_103a5300();
  /* 103a4883 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4886 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a4889 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a488d je 0x103a48a4 */
  if (C.zf) goto L_103a48a4;
  /* 103a488f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4892 push eax */
  push32((uint32_t)(EAX));
  /* 103a4893 mov ecx, dword ptr [0x103cea5c] */
  ECX = (r32((uint32_t)(0x103cea5c)));
  /* 103a4899 push ecx */
  push32((uint32_t)(ECX));
  /* 103a489a call dword ptr [0x103d3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3364))), 0x103a48a0u);
  /* 103a48a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a48a2 jne 0x103a48a8 */
  if (!C.zf) goto L_103a48a8;
L_103a48a4:;
  /* 103a48a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a48a6 jmp 0x103a48ce */
  goto L_103a48ce;
L_103a48a8:;
  /* 103a48a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a48ab push edx */
  push32((uint32_t)(EDX));
  /* 103a48ac call 0x103a4910 */
  push32(0x103a48b1u); f_103a4910();
  /* 103a48b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a48b4 call dword ptr [0x103d3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3360))), 0x103a48bau);
  /* 103a48ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a48bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103a48bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a48c2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 103a48c9 mov eax, 1 */
  EAX = (0x1u);
L_103a48ce:;
  /* 103a48ce mov esp, ebp */
  ESP = (EBP);
  /* 103a48d0 pop ebp */
  EBP = (pop32());
  /* 103a48d1 ret  */
  ESPCHK(0x103a4850u, _esp0);
  ESP += 4; return;
}

/* FUN_100048e0 @ 0x103a48e0 (41 bytes, 11 insns) */
void f_103a48e0(void) {
  FTRACE(0x103a48e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a48e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a48e1 mov ebp, esp */
  EBP = (ESP);
  /* 103a48e3 call 0x103a8850 */
  push32(0x103a48e8u); f_103a8850();
  /* 103a48e8 cmp dword ptr [0x103cea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x103cea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a48ef je 0x103a4907 */
  if (C.zf) goto L_103a4907;
  /* 103a48f1 mov eax, dword ptr [0x103cea5c] */
  EAX = (r32((uint32_t)(0x103cea5c)));
  /* 103a48f6 push eax */
  push32((uint32_t)(EAX));
  /* 103a48f7 call dword ptr [0x103d329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d329c))), 0x103a48fdu);
  /* 103a48fd mov dword ptr [0x103cea5c], 0xffffffff */
  w32((uint32_t)(0x103cea5c), (0xffffffffu));
L_103a4907:;
  /* 103a4907 pop ebp */
  EBP = (pop32());
  /* 103a4908 ret  */
  ESPCHK(0x103a48e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004910 @ 0x103a4910 (25 bytes, 8 insns) */
void f_103a4910(void) {
  FTRACE(0x103a4910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4910 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4911 mov ebp, esp */
  EBP = (ESP);
  /* 103a4913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4916 mov dword ptr [eax + 0x50], 0x103cec00 */
  w32((uint32_t)(EAX + 0x50), (0x103cec00u));
  /* 103a491d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4920 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 103a4927 pop ebp */
  EBP = (pop32());
  /* 103a4928 ret  */
  ESPCHK(0x103a4910u, _esp0);
  ESP += 4; return;
}

/* FUN_10004930 @ 0x103a4930 (152 bytes, 48 insns) */
void f_103a4930(void) {
  FTRACE(0x103a4930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4930 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4931 mov ebp, esp */
  EBP = (ESP);
  /* 103a4933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a4936 call dword ptr [0x103d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3378))), 0x103a493cu);
  /* 103a493c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a493f mov eax, dword ptr [0x103cea5c] */
  EAX = (r32((uint32_t)(0x103cea5c)));
  /* 103a4944 push eax */
  push32((uint32_t)(EAX));
  /* 103a4945 call dword ptr [0x103d3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3374))), 0x103a494bu);
  /* 103a494b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a494e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4952 jne 0x103a49b7 */
  if (!C.zf) goto L_103a49b7;
  /* 103a4954 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 103a4959 push 0x103cb698 */
  push32((uint32_t)(0x103cb698u));
  /* 103a495e push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4960 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 103a4962 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a4964 call 0x103a5300 */
  push32(0x103a4969u); f_103a5300();
  /* 103a4969 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a496c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a496f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4973 je 0x103a49ad */
  if (C.zf) goto L_103a49ad;
  /* 103a4975 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4978 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4979 mov edx, dword ptr [0x103cea5c] */
  EDX = (r32((uint32_t)(0x103cea5c)));
  /* 103a497f push edx */
  push32((uint32_t)(EDX));
  /* 103a4980 call dword ptr [0x103d3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3364))), 0x103a4986u);
  /* 103a4986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a4988 je 0x103a49ad */
  if (C.zf) goto L_103a49ad;
  /* 103a498a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a498d push eax */
  push32((uint32_t)(EAX));
  /* 103a498e call 0x103a4910 */
  push32(0x103a4993u); f_103a4910();
  /* 103a4993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4996 call dword ptr [0x103d3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3360))), 0x103a499cu);
  /* 103a499c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a499f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103a49a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a49a4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 103a49ab jmp 0x103a49b7 */
  goto L_103a49b7;
L_103a49ad:;
  /* 103a49ad push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103a49af call 0x103a3e60 */
  push32(0x103a49b4u); f_103a3e60();
  /* 103a49b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a49b7:;
  /* 103a49b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a49ba push eax */
  push32((uint32_t)(EAX));
  /* 103a49bb call dword ptr [0x103d3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3298))), 0x103a49c1u);
  /* 103a49c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a49c4 mov esp, ebp */
  ESP = (EBP);
  /* 103a49c6 pop ebp */
  EBP = (pop32());
  /* 103a49c7 ret  */
  ESPCHK(0x103a4930u, _esp0);
  ESP += 4; return;
}

/* FUN_100049d0 @ 0x103a49d0 (263 bytes, 86 insns) */
void f_103a49d0(void) {
  FTRACE(0x103a49d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a49d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a49d1 mov ebp, esp */
  EBP = (ESP);
  /* 103a49d3 cmp dword ptr [0x103cea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x103cea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a49da je 0x103a4ad5 */
  if (C.zf) goto L_103a4ad5;
  /* 103a49e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a49e4 jne 0x103a49f5 */
  if (!C.zf) goto L_103a49f5;
  /* 103a49e6 mov eax, dword ptr [0x103cea5c] */
  EAX = (r32((uint32_t)(0x103cea5c)));
  /* 103a49eb push eax */
  push32((uint32_t)(EAX));
  /* 103a49ec call dword ptr [0x103d3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3374))), 0x103a49f2u);
  /* 103a49f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103a49f5:;
  /* 103a49f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a49f9 je 0x103a4ac6 */
  if (C.zf) goto L_103a4ac6;
  /* 103a49ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a02 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4a06 je 0x103a4a19 */
  if (C.zf) goto L_103a4a19;
  /* 103a4a08 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4a0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a0d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 103a4a10 push eax */
  push32((uint32_t)(EAX));
  /* 103a4a11 call 0x103a5980 */
  push32(0x103a4a16u); f_103a5980();
  /* 103a4a16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4a19:;
  /* 103a4a19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a1c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4a20 je 0x103a4a33 */
  if (C.zf) goto L_103a4a33;
  /* 103a4a22 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4a24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a27 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 103a4a2a push eax */
  push32((uint32_t)(EAX));
  /* 103a4a2b call 0x103a5980 */
  push32(0x103a4a30u); f_103a5980();
  /* 103a4a30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4a33:;
  /* 103a4a33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a36 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4a3a je 0x103a4a4d */
  if (C.zf) goto L_103a4a4d;
  /* 103a4a3c push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4a3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a41 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 103a4a44 push eax */
  push32((uint32_t)(EAX));
  /* 103a4a45 call 0x103a5980 */
  push32(0x103a4a4au); f_103a5980();
  /* 103a4a4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4a4d:;
  /* 103a4a4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a50 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4a54 je 0x103a4a67 */
  if (C.zf) goto L_103a4a67;
  /* 103a4a56 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4a58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a5b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 103a4a5e push eax */
  push32((uint32_t)(EAX));
  /* 103a4a5f call 0x103a5980 */
  push32(0x103a4a64u); f_103a5980();
  /* 103a4a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4a67:;
  /* 103a4a67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a6a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4a6e je 0x103a4a81 */
  if (C.zf) goto L_103a4a81;
  /* 103a4a70 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4a72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a75 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 103a4a78 push eax */
  push32((uint32_t)(EAX));
  /* 103a4a79 call 0x103a5980 */
  push32(0x103a4a7eu); f_103a5980();
  /* 103a4a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4a81:;
  /* 103a4a81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a84 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4a88 je 0x103a4a9b */
  if (C.zf) goto L_103a4a9b;
  /* 103a4a8a push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4a8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a8f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 103a4a92 push eax */
  push32((uint32_t)(EAX));
  /* 103a4a93 call 0x103a5980 */
  push32(0x103a4a98u); f_103a5980();
  /* 103a4a98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4a9b:;
  /* 103a4a9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4a9e cmp dword ptr [ecx + 0x50], 0x103cec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x103cec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4aa5 je 0x103a4ab8 */
  if (C.zf) goto L_103a4ab8;
  /* 103a4aa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4aa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4aac mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 103a4aaf push eax */
  push32((uint32_t)(EAX));
  /* 103a4ab0 call 0x103a5980 */
  push32(0x103a4ab5u); f_103a5980();
  /* 103a4ab5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4ab8:;
  /* 103a4ab8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4aba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4abd push ecx */
  push32((uint32_t)(ECX));
  /* 103a4abe call 0x103a5980 */
  push32(0x103a4ac3u); f_103a5980();
  /* 103a4ac3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4ac6:;
  /* 103a4ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a4ac8 mov edx, dword ptr [0x103cea5c] */
  EDX = (r32((uint32_t)(0x103cea5c)));
  /* 103a4ace push edx */
  push32((uint32_t)(EDX));
  /* 103a4acf call dword ptr [0x103d3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3364))), 0x103a4ad5u);
L_103a4ad5:;
  /* 103a4ad5 pop ebp */
  EBP = (pop32());
  /* 103a4ad6 ret  */
  ESPCHK(0x103a49d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae0 @ 0x103a4ae0 (11 bytes, 5 insns) */
void f_103a4ae0(void) {
  FTRACE(0x103a4ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4ae1 mov ebp, esp */
  EBP = (ESP);
  /* 103a4ae3 call dword ptr [0x103d3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3360))), 0x103a4ae9u);
  /* 103a4ae9 pop ebp */
  EBP = (pop32());
  /* 103a4aea ret  */
  ESPCHK(0x103a4ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004af0 @ 0x103a4af0 (11 bytes, 5 insns) */
void f_103a4af0(void) {
  FTRACE(0x103a4af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4af0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4af1 mov ebp, esp */
  EBP = (ESP);
  /* 103a4af3 call dword ptr [0x103d337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d337c))), 0x103a4af9u);
  /* 103a4af9 pop ebp */
  EBP = (pop32());
  /* 103a4afa ret  */
  ESPCHK(0x103a4af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b00 @ 0x103a4b00 (804 bytes, 236 insns) */
void f_103a4b00(void) {
  FTRACE(0x103a4b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4b00 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4b01 mov ebp, esp */
  EBP = (ESP);
  /* 103a4b03 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a4b06 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 103a4b0b push 0x103cb6a4 */
  push32((uint32_t)(0x103cb6a4u));
  /* 103a4b10 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4b12 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 103a4b17 call 0x103a4ef0 */
  push32(0x103a4b1cu); f_103a4ef0();
  /* 103a4b1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4b1f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 103a4b22 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4b26 jne 0x103a4b32 */
  if (!C.zf) goto L_103a4b32;
  /* 103a4b28 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 103a4b2a call 0x103a3e60 */
  push32(0x103a4b2fu); f_103a3e60();
  /* 103a4b2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a4b32:;
  /* 103a4b32 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4b35 mov dword ptr [0x103d1fc0], eax */
  w32((uint32_t)(0x103d1fc0), (EAX));
  /* 103a4b3a mov dword ptr [0x103d20fc], 0x20 */
  w32((uint32_t)(0x103d20fc), (0x20u));
  /* 103a4b44 jmp 0x103a4b4f */
  goto L_103a4b4f;
L_103a4b46:;
  /* 103a4b46 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4b49 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4b4c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_103a4b4f:;
  /* 103a4b4f mov edx, dword ptr [0x103d1fc0] */
  EDX = (r32((uint32_t)(0x103d1fc0)));
  /* 103a4b55 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4b5b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4b5e jae 0x103a4b83 */
  if (!C.cf) goto L_103a4b83;
  /* 103a4b60 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4b63 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 103a4b67 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4b6a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 103a4b70 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4b73 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 103a4b77 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4b7a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 103a4b81 jmp 0x103a4b46 */
  goto L_103a4b46;
L_103a4b83:;
  /* 103a4b83 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 103a4b86 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4b87 call dword ptr [0x103d3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3388))), 0x103a4b8du);
  /* 103a4b8d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 103a4b90 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a4b96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a4b98 je 0x103a4d25 */
  if (C.zf) goto L_103a4d25;
  /* 103a4b9e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4ba2 je 0x103a4d25 */
  if (C.zf) goto L_103a4d25;
  /* 103a4ba8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a4bab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a4bad mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 103a4bb0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a4bb3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4bb6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a4bb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4bbc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4bbf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 103a4bc2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4bc9 jge 0x103a4bd3 */
  if ((C.sf==C.of)) goto L_103a4bd3;
  /* 103a4bcb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 103a4bce mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 103a4bd1 jmp 0x103a4bda */
  goto L_103a4bda;
L_103a4bd3:;
  /* 103a4bd3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_103a4bda:;
  /* 103a4bda mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 103a4bdd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 103a4be0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 103a4be7 jmp 0x103a4bf2 */
  goto L_103a4bf2;
L_103a4be9:;
  /* 103a4be9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 103a4bec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4bef mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_103a4bf2:;
  /* 103a4bf2 mov ecx, dword ptr [0x103d20fc] */
  ECX = (r32((uint32_t)(0x103d20fc)));
  /* 103a4bf8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4bfb jge 0x103a4c92 */
  if ((C.sf==C.of)) goto L_103a4c92;
  /* 103a4c01 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 103a4c06 push 0x103cb6a4 */
  push32((uint32_t)(0x103cb6a4u));
  /* 103a4c0b push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4c0d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 103a4c12 call 0x103a4ef0 */
  push32(0x103a4c17u); f_103a4ef0();
  /* 103a4c17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4c1a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 103a4c1d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4c21 jne 0x103a4c2e */
  if (!C.zf) goto L_103a4c2e;
  /* 103a4c23 mov edx, dword ptr [0x103d20fc] */
  EDX = (r32((uint32_t)(0x103d20fc)));
  /* 103a4c29 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 103a4c2c jmp 0x103a4c92 */
  goto L_103a4c92;
L_103a4c2e:;
  /* 103a4c2e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 103a4c31 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4c34 mov dword ptr [eax*4 + 0x103d1fc0], ecx */
  w32((uint32_t)(EAX*4 + 0x103d1fc0), (ECX));
  /* 103a4c3b mov edx, dword ptr [0x103d20fc] */
  EDX = (r32((uint32_t)(0x103d20fc)));
  /* 103a4c41 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4c44 mov dword ptr [0x103d20fc], edx */
  w32((uint32_t)(0x103d20fc), (EDX));
  /* 103a4c4a jmp 0x103a4c55 */
  goto L_103a4c55;
L_103a4c4c:;
  /* 103a4c4c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4c4f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4c52 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_103a4c55:;
  /* 103a4c55 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 103a4c58 mov edx, dword ptr [ecx*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103d1fc0)));
  /* 103a4c5f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4c65 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4c68 jae 0x103a4c8d */
  if (!C.cf) goto L_103a4c8d;
  /* 103a4c6a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4c6d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 103a4c71 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4c74 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 103a4c7a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4c7d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 103a4c81 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4c84 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 103a4c8b jmp 0x103a4c4c */
  goto L_103a4c4c;
L_103a4c8d:;
  /* 103a4c8d jmp 0x103a4be9 */
  goto L_103a4be9;
L_103a4c92:;
  /* 103a4c92 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 103a4c99 jmp 0x103a4cb6 */
  goto L_103a4cb6;
L_103a4c9b:;
  /* 103a4c9b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 103a4c9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4ca1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 103a4ca4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4ca7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4caa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a4cad mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 103a4cb0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4cb3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_103a4cb6:;
  /* 103a4cb6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 103a4cb9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4cbc jge 0x103a4d25 */
  if ((C.sf==C.of)) goto L_103a4d25;
  /* 103a4cbe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 103a4cc1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4cc4 je 0x103a4d20 */
  if (C.zf) goto L_103a4d20;
  /* 103a4cc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4cc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103a4ccc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103a4ccf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a4cd1 je 0x103a4d20 */
  if (C.zf) goto L_103a4d20;
  /* 103a4cd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4cd6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103a4cd9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 103a4cdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a4cde jne 0x103a4cf0 */
  if (!C.zf) goto L_103a4cf0;
  /* 103a4ce0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 103a4ce3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a4ce5 push edx */
  push32((uint32_t)(EDX));
  /* 103a4ce6 call dword ptr [0x103d3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3384))), 0x103a4cecu);
  /* 103a4cec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a4cee je 0x103a4d20 */
  if (C.zf) goto L_103a4d20;
L_103a4cf0:;
  /* 103a4cf0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 103a4cf3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103a4cf6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 103a4cf9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103a4cfc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a4cff mov edx, dword ptr [eax*4 + 0x103d1fc0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103a4d06 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4d08 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 103a4d0b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4d0e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 103a4d11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a4d13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103a4d15 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4d18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4d1b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103a4d1d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_103a4d20:;
  /* 103a4d20 jmp 0x103a4c9b */
  goto L_103a4c9b;
L_103a4d25:;
  /* 103a4d25 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 103a4d2c jmp 0x103a4d37 */
  goto L_103a4d37;
L_103a4d2e:;
  /* 103a4d2e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 103a4d31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4d34 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_103a4d37:;
  /* 103a4d37 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4d3b jge 0x103a4e14 */
  if ((C.sf==C.of)) goto L_103a4e14;
  /* 103a4d41 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 103a4d44 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a4d47 mov edx, dword ptr [0x103d1fc0] */
  EDX = (r32((uint32_t)(0x103d1fc0)));
  /* 103a4d4d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4d4f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 103a4d52 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4d55 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4d58 jne 0x103a4e00 */
  if (!C.zf) goto L_103a4e00;
  /* 103a4d5e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4d61 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 103a4d65 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4d69 jne 0x103a4d74 */
  if (!C.zf) goto L_103a4d74;
  /* 103a4d6b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 103a4d72 jmp 0x103a4d84 */
  goto L_103a4d84;
L_103a4d74:;
  /* 103a4d74 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 103a4d77 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a4d7a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 103a4d7c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a4d7e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4d81 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_103a4d84:;
  /* 103a4d84 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 103a4d87 push eax */
  push32((uint32_t)(EAX));
  /* 103a4d88 call dword ptr [0x103d3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3334))), 0x103a4d8eu);
  /* 103a4d8e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 103a4d91 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4d95 je 0x103a4def */
  if (C.zf) goto L_103a4def;
  /* 103a4d97 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103a4d9a push ecx */
  push32((uint32_t)(ECX));
  /* 103a4d9b call dword ptr [0x103d3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3384))), 0x103a4da1u);
  /* 103a4da1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 103a4da4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4da8 je 0x103a4def */
  if (C.zf) goto L_103a4def;
  /* 103a4daa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4dad mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103a4db0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103a4db2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 103a4db5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a4dbb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4dbe jne 0x103a4dd0 */
  if (!C.zf) goto L_103a4dd0;
  /* 103a4dc0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4dc3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 103a4dc6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 103a4dc8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4dcb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 103a4dce jmp 0x103a4ded */
  goto L_103a4ded;
L_103a4dd0:;
  /* 103a4dd0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 103a4dd3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a4dd9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4ddc jne 0x103a4ded */
  if (!C.zf) goto L_103a4ded;
  /* 103a4dde mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4de1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103a4de4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 103a4de7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4dea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_103a4ded:;
  /* 103a4ded jmp 0x103a4dfe */
  goto L_103a4dfe;
L_103a4def:;
  /* 103a4def mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4df2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103a4df5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 103a4df8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4dfb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_103a4dfe:;
  /* 103a4dfe jmp 0x103a4e0f */
  goto L_103a4e0f;
L_103a4e00:;
  /* 103a4e00 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4e03 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103a4e06 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 103a4e09 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a4e0c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_103a4e0f:;
  /* 103a4e0f jmp 0x103a4d2e */
  goto L_103a4d2e;
L_103a4e14:;
  /* 103a4e14 mov eax, dword ptr [0x103d20fc] */
  EAX = (r32((uint32_t)(0x103d20fc)));
  /* 103a4e19 push eax */
  push32((uint32_t)(EAX));
  /* 103a4e1a call dword ptr [0x103d3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3380))), 0x103a4e20u);
  /* 103a4e20 mov esp, ebp */
  ESP = (EBP);
  /* 103a4e22 pop ebp */
  EBP = (pop32());
  /* 103a4e23 ret  */
  ESPCHK(0x103a4b00u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x103a4e30 (155 bytes, 45 insns) */
void f_103a4e30(void) {
  FTRACE(0x103a4e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4e30 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4e31 mov ebp, esp */
  EBP = (ESP);
  /* 103a4e33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a4e36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103a4e3d jmp 0x103a4e48 */
  goto L_103a4e48;
L_103a4e3f:;
  /* 103a4e3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a4e42 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4e45 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103a4e48:;
  /* 103a4e48 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4e4c jge 0x103a4ec7 */
  if ((C.sf==C.of)) goto L_103a4ec7;
  /* 103a4e4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a4e51 cmp dword ptr [ecx*4 + 0x103d1fc0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x103d1fc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4e59 je 0x103a4ec2 */
  if (C.zf) goto L_103a4ec2;
  /* 103a4e5b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a4e5e mov eax, dword ptr [edx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x103d1fc0)));
  /* 103a4e65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a4e68 jmp 0x103a4e73 */
  goto L_103a4e73;
L_103a4e6a:;
  /* 103a4e6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4e6d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4e70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103a4e73:;
  /* 103a4e73 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a4e76 mov eax, dword ptr [edx*4 + 0x103d1fc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x103d1fc0)));
  /* 103a4e7d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4e82 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4e85 jae 0x103a4e9f */
  if (!C.cf) goto L_103a4e9f;
  /* 103a4e87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4e8a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4e8e je 0x103a4e9d */
  if (C.zf) goto L_103a4e9d;
  /* 103a4e90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4e93 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4e96 push edx */
  push32((uint32_t)(EDX));
  /* 103a4e97 call dword ptr [0x103d338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d338c))), 0x103a4e9du);
L_103a4e9d:;
  /* 103a4e9d jmp 0x103a4e6a */
  goto L_103a4e6a;
L_103a4e9f:;
  /* 103a4e9f push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4ea1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a4ea4 mov ecx, dword ptr [eax*4 + 0x103d1fc0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x103d1fc0)));
  /* 103a4eab push ecx */
  push32((uint32_t)(ECX));
  /* 103a4eac call 0x103a5980 */
  push32(0x103a4eb1u); f_103a5980();
  /* 103a4eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4eb4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a4eb7 mov dword ptr [edx*4 + 0x103d1fc0], 0 */
  w32((uint32_t)(EDX*4 + 0x103d1fc0), (0x0u));
L_103a4ec2:;
  /* 103a4ec2 jmp 0x103a4e3f */
  goto L_103a4e3f;
L_103a4ec7:;
  /* 103a4ec7 mov esp, ebp */
  ESP = (EBP);
  /* 103a4ec9 pop ebp */
  EBP = (pop32());
  /* 103a4eca ret  */
  ESPCHK(0x103a4e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ed0 @ 0x103a4ed0 (29 bytes, 13 insns) */
void f_103a4ed0(void) {
  FTRACE(0x103a4ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4ed1 mov ebp, esp */
  EBP = (ESP);
  /* 103a4ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a4ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a4ed7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a4ed9 mov eax, dword ptr [0x103d07d8] */
  EAX = (r32((uint32_t)(0x103d07d8)));
  /* 103a4ede push eax */
  push32((uint32_t)(EAX));
  /* 103a4edf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4ee3 call 0x103a4f40 */
  push32(0x103a4ee8u); f_103a4f40();
  /* 103a4ee8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4eeb pop ebp */
  EBP = (pop32());
  /* 103a4eec ret  */
  ESPCHK(0x103a4ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ef0 @ 0x103a4ef0 (35 bytes, 16 insns) */
void f_103a4ef0(void) {
  FTRACE(0x103a4ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4ef1 mov ebp, esp */
  EBP = (ESP);
  /* 103a4ef3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a4ef6 push eax */
  push32((uint32_t)(EAX));
  /* 103a4ef7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a4efa push ecx */
  push32((uint32_t)(ECX));
  /* 103a4efb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a4efe push edx */
  push32((uint32_t)(EDX));
  /* 103a4eff mov eax, dword ptr [0x103d07d8] */
  EAX = (r32((uint32_t)(0x103d07d8)));
  /* 103a4f04 push eax */
  push32((uint32_t)(EAX));
  /* 103a4f05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4f08 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4f09 call 0x103a4f40 */
  push32(0x103a4f0eu); f_103a4f40();
  /* 103a4f0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4f11 pop ebp */
  EBP = (pop32());
  /* 103a4f12 ret  */
  ESPCHK(0x103a4ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f20 @ 0x103a4f20 (27 bytes, 13 insns) */
void f_103a4f20(void) {
  FTRACE(0x103a4f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4f20 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4f21 mov ebp, esp */
  EBP = (ESP);
  /* 103a4f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a4f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a4f27 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a4f29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a4f2c push eax */
  push32((uint32_t)(EAX));
  /* 103a4f2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4f30 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4f31 call 0x103a4f40 */
  push32(0x103a4f36u); f_103a4f40();
  /* 103a4f36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4f39 pop ebp */
  EBP = (pop32());
  /* 103a4f3a ret  */
  ESPCHK(0x103a4f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f40 @ 0x103a4f40 (94 bytes, 38 insns) */
void f_103a4f40(void) {
  FTRACE(0x103a4f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4f40 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4f41 mov ebp, esp */
  EBP = (ESP);
  /* 103a4f43 push ecx */
  push32((uint32_t)(ECX));
L_103a4f44:;
  /* 103a4f44 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a4f46 call 0x103a88f0 */
  push32(0x103a4f4bu); f_103a88f0();
  /* 103a4f4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4f4e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a4f51 push eax */
  push32((uint32_t)(EAX));
  /* 103a4f52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a4f55 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4f56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a4f59 push edx */
  push32((uint32_t)(EDX));
  /* 103a4f5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4f5d push eax */
  push32((uint32_t)(EAX));
  /* 103a4f5e call 0x103a4fc0 */
  push32(0x103a4f63u); f_103a4fc0();
  /* 103a4f63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4f66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a4f69 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a4f6b call 0x103a8990 */
  push32(0x103a4f70u); f_103a8990();
  /* 103a4f70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4f73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4f77 jne 0x103a4f7f */
  if (!C.zf) goto L_103a4f7f;
  /* 103a4f79 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a4f7d jne 0x103a4f84 */
  if (!C.zf) goto L_103a4f84;
L_103a4f7f:;
  /* 103a4f7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a4f82 jmp 0x103a4f9a */
  goto L_103a4f9a;
L_103a4f84:;
  /* 103a4f84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4f87 push ecx */
  push32((uint32_t)(ECX));
  /* 103a4f88 call 0x103a8c30 */
  push32(0x103a4f8du); f_103a8c30();
  /* 103a4f8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4f90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a4f92 jne 0x103a4f98 */
  if (!C.zf) goto L_103a4f98;
  /* 103a4f94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a4f96 jmp 0x103a4f9a */
  goto L_103a4f9a;
L_103a4f98:;
  /* 103a4f98 jmp 0x103a4f44 */
  goto L_103a4f44;
L_103a4f9a:;
  /* 103a4f9a mov esp, ebp */
  ESP = (EBP);
  /* 103a4f9c pop ebp */
  EBP = (pop32());
  /* 103a4f9d ret  */
  ESPCHK(0x103a4f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fa0 @ 0x103a4fa0 (23 bytes, 11 insns) */
void f_103a4fa0(void) {
  FTRACE(0x103a4fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4fa1 mov ebp, esp */
  EBP = (ESP);
  /* 103a4fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a4fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a4fa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a4fa9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a4fac push eax */
  push32((uint32_t)(EAX));
  /* 103a4fad call 0x103a4fc0 */
  push32(0x103a4fb2u); f_103a4fc0();
  /* 103a4fb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a4fb5 pop ebp */
  EBP = (pop32());
  /* 103a4fb6 ret  */
  ESPCHK(0x103a4fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc0 @ 0x103a4fc0 (787 bytes, 254 insns) */
void f_103a4fc0(void) {
  FTRACE(0x103a4fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a4fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a4fc1 mov ebp, esp */
  EBP = (ESP);
  /* 103a4fc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a4fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 103a4fc7 push esi */
  push32((uint32_t)(ESI));
  /* 103a4fc8 push edi */
  push32((uint32_t)(EDI));
  /* 103a4fc9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103a4fd0 mov eax, dword ptr [0x103cea84] */
  EAX = (r32((uint32_t)(0x103cea84)));
  /* 103a4fd5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103a4fd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a4fda je 0x103a500c */
  if (C.zf) goto L_103a500c;
L_103a4fdc:;
  /* 103a4fdc call 0x103a6090 */
  push32(0x103a4fe1u); f_103a6090();
  /* 103a4fe1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a4fe3 jne 0x103a5006 */
  if (!C.zf) goto L_103a5006;
  /* 103a4fe5 push 0x103cb798 */
  push32((uint32_t)(0x103cb798u));
  /* 103a4fea push 0 */
  push32((uint32_t)(0x0u));
  /* 103a4fec push 0x141 */
  push32((uint32_t)(0x141u));
  /* 103a4ff1 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a4ff6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a4ff8 call 0x103a3fb0 */
  push32(0x103a4ffdu); f_103a3fb0();
  /* 103a4ffd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5000 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5003 jne 0x103a5006 */
  if (!C.zf) goto L_103a5006;
  /* 103a5005 int3  */
  x86_unimpl("int3 @ 0x103a5005");
L_103a5006:;
  /* 103a5006 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a5008 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a500a jne 0x103a4fdc */
  if (!C.zf) goto L_103a4fdc;
L_103a500c:;
  /* 103a500c mov edx, dword ptr [0x103cea88] */
  EDX = (r32((uint32_t)(0x103cea88)));
  /* 103a5012 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103a5015 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5018 cmp eax, dword ptr [0x103cea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103cea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a501e jne 0x103a5021 */
  if (!C.zf) goto L_103a5021;
  /* 103a5020 int3  */
  x86_unimpl("int3 @ 0x103a5020");
L_103a5021:;
  /* 103a5021 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a5024 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5025 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a5028 push edx */
  push32((uint32_t)(EDX));
  /* 103a5029 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a502c push eax */
  push32((uint32_t)(EAX));
  /* 103a502d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a5030 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5034 push edx */
  push32((uint32_t)(EDX));
  /* 103a5035 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5037 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a5039 call dword ptr [0x103cec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x103cec90))), 0x103a503fu);
  /* 103a503f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5042 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5044 jne 0x103a50a4 */
  if (!C.zf) goto L_103a50a4;
  /* 103a5046 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a504a je 0x103a5077 */
  if (C.zf) goto L_103a5077;
L_103a504c:;
  /* 103a504c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a504f push eax */
  push32((uint32_t)(EAX));
  /* 103a5050 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a5053 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5054 push 0x103cb754 */
  push32((uint32_t)(0x103cb754u));
  /* 103a5059 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a505b push 0 */
  push32((uint32_t)(0x0u));
  /* 103a505d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a505f push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5061 call 0x103a3fb0 */
  push32(0x103a5066u); f_103a3fb0();
  /* 103a5066 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5069 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a506c jne 0x103a506f */
  if (!C.zf) goto L_103a506f;
  /* 103a506e int3  */
  x86_unimpl("int3 @ 0x103a506e");
L_103a506f:;
  /* 103a506f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a5071 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a5073 jne 0x103a504c */
  if (!C.zf) goto L_103a504c;
  /* 103a5075 jmp 0x103a509d */
  goto L_103a509d;
L_103a5077:;
  /* 103a5077 push 0x103cb730 */
  push32((uint32_t)(0x103cb730u));
  /* 103a507c push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a5081 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5083 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5085 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5087 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5089 call 0x103a3fb0 */
  push32(0x103a508eu); f_103a3fb0();
  /* 103a508e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5091 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5094 jne 0x103a5097 */
  if (!C.zf) goto L_103a5097;
  /* 103a5096 int3  */
  x86_unimpl("int3 @ 0x103a5096");
L_103a5097:;
  /* 103a5097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a509b jne 0x103a5077 */
  if (!C.zf) goto L_103a5077;
L_103a509d:;
  /* 103a509d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a509f jmp 0x103a52cc */
  goto L_103a52cc;
L_103a50a4:;
  /* 103a50a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a50a7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a50ad cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a50b0 je 0x103a50c6 */
  if (C.zf) goto L_103a50c6;
  /* 103a50b2 mov edx, dword ptr [0x103cea84] */
  EDX = (r32((uint32_t)(0x103cea84)));
  /* 103a50b8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 103a50bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a50bd jne 0x103a50c6 */
  if (!C.zf) goto L_103a50c6;
  /* 103a50bf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_103a50c6:;
  /* 103a50c6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a50ca ja 0x103a50d7 */
  if ((!C.cf&&!C.zf)) goto L_103a50d7;
  /* 103a50cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a50cf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a50d2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a50d5 jbe 0x103a5103 */
  if ((C.cf||C.zf)) goto L_103a5103;
L_103a50d7:;
  /* 103a50d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a50da push ecx */
  push32((uint32_t)(ECX));
  /* 103a50db push 0x103cb708 */
  push32((uint32_t)(0x103cb708u));
  /* 103a50e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a50e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a50e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a50e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a50e8 call 0x103a3fb0 */
  push32(0x103a50edu); f_103a3fb0();
  /* 103a50ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a50f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a50f3 jne 0x103a50f6 */
  if (!C.zf) goto L_103a50f6;
  /* 103a50f5 int3  */
  x86_unimpl("int3 @ 0x103a50f5");
L_103a50f6:;
  /* 103a50f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a50f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a50fa jne 0x103a50d7 */
  if (!C.zf) goto L_103a50d7;
  /* 103a50fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a50fe jmp 0x103a52cc */
  goto L_103a52cc;
L_103a5103:;
  /* 103a5103 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a5106 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a510b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a510e je 0x103a5150 */
  if (C.zf) goto L_103a5150;
  /* 103a5110 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5114 je 0x103a5150 */
  if (C.zf) goto L_103a5150;
  /* 103a5116 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a5119 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a511f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5122 je 0x103a5150 */
  if (C.zf) goto L_103a5150;
  /* 103a5124 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5128 je 0x103a5150 */
  if (C.zf) goto L_103a5150;
L_103a512a:;
  /* 103a512a push 0x103cb6d4 */
  push32((uint32_t)(0x103cb6d4u));
  /* 103a512f push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a5134 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5136 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5138 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a513a push 1 */
  push32((uint32_t)(0x1u));
  /* 103a513c call 0x103a3fb0 */
  push32(0x103a5141u); f_103a3fb0();
  /* 103a5141 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5144 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5147 jne 0x103a514a */
  if (!C.zf) goto L_103a514a;
  /* 103a5149 int3  */
  x86_unimpl("int3 @ 0x103a5149");
L_103a514a:;
  /* 103a514a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a514c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a514e jne 0x103a512a */
  if (!C.zf) goto L_103a512a;
L_103a5150:;
  /* 103a5150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5153 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5156 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103a5159 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a515c push ecx */
  push32((uint32_t)(ECX));
  /* 103a515d call 0x103a8d40 */
  push32(0x103a5162u); f_103a8d40();
  /* 103a5162 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5165 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a5168 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a516c jne 0x103a5175 */
  if (!C.zf) goto L_103a5175;
  /* 103a516e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5170 jmp 0x103a52cc */
  goto L_103a52cc;
L_103a5175:;
  /* 103a5175 mov edx, dword ptr [0x103cea88] */
  EDX = (r32((uint32_t)(0x103cea88)));
  /* 103a517b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a517e mov dword ptr [0x103cea88], edx */
  w32((uint32_t)(0x103cea88), (EDX));
  /* 103a5184 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5188 je 0x103a51d3 */
  if (C.zf) goto L_103a51d3;
  /* 103a518a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a518d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103a5193 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5196 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 103a519d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a51a0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 103a51a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a51aa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 103a51b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a51b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a51b7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 103a51ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a51bd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 103a51c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a51c7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 103a51ce jmp 0x103a5273 */
  goto L_103a5273;
L_103a51d3:;
  /* 103a51d3 mov edx, dword ptr [0x103d063c] */
  EDX = (r32((uint32_t)(0x103d063c)));
  /* 103a51d9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a51dc mov dword ptr [0x103d063c], edx */
  w32((uint32_t)(0x103d063c), (EDX));
  /* 103a51e2 mov eax, dword ptr [0x103d0644] */
  EAX = (r32((uint32_t)(0x103d0644)));
  /* 103a51e7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a51ea mov dword ptr [0x103d0644], eax */
  w32((uint32_t)(0x103d0644), (EAX));
  /* 103a51ef mov ecx, dword ptr [0x103d0644] */
  ECX = (r32((uint32_t)(0x103d0644)));
  /* 103a51f5 cmp ecx, dword ptr [0x103d0648] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103d0648))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a51fb jbe 0x103a5209 */
  if ((C.cf||C.zf)) goto L_103a5209;
  /* 103a51fd mov edx, dword ptr [0x103d0644] */
  EDX = (r32((uint32_t)(0x103d0644)));
  /* 103a5203 mov dword ptr [0x103d0648], edx */
  w32((uint32_t)(0x103d0648), (EDX));
L_103a5209:;
  /* 103a5209 cmp dword ptr [0x103d0640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5210 je 0x103a521f */
  if (C.zf) goto L_103a521f;
  /* 103a5212 mov eax, dword ptr [0x103d0640] */
  EAX = (r32((uint32_t)(0x103d0640)));
  /* 103a5217 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a521a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103a521d jmp 0x103a5228 */
  goto L_103a5228;
L_103a521f:;
  /* 103a521f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5222 mov dword ptr [0x103d0638], edx */
  w32((uint32_t)(0x103d0638), (EDX));
L_103a5228:;
  /* 103a5228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a522b mov ecx, dword ptr [0x103d0640] */
  ECX = (r32((uint32_t)(0x103d0640)));
  /* 103a5231 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103a5233 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5236 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 103a523d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5240 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a5243 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 103a5246 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5249 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a524c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 103a524f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5252 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5255 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 103a5258 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a525b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a525e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 103a5261 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5264 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5267 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 103a526a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a526d mov dword ptr [0x103d0640], ecx */
  w32((uint32_t)(0x103d0640), (ECX));
L_103a5273:;
  /* 103a5273 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a5275 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a5277 mov dl, byte ptr [0x103cea90] */
  DL = (r8((uint32_t)(0x103cea90)));
  /* 103a527d push edx */
  push32((uint32_t)(EDX));
  /* 103a527e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5281 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5284 push eax */
  push32((uint32_t)(EAX));
  /* 103a5285 call 0x103a8c60 */
  push32(0x103a528au); f_103a8c60();
  /* 103a528a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a528d push 4 */
  push32((uint32_t)(0x4u));
  /* 103a528f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a5291 mov cl, byte ptr [0x103cea90] */
  CL = (r8((uint32_t)(0x103cea90)));
  /* 103a5297 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5298 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a529b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a529e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 103a52a2 push ecx */
  push32((uint32_t)(ECX));
  /* 103a52a3 call 0x103a8c60 */
  push32(0x103a52a8u); f_103a8c60();
  /* 103a52a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a52ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a52ae push edx */
  push32((uint32_t)(EDX));
  /* 103a52af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a52b1 mov al, byte ptr [0x103cea92] */
  AL = (r8((uint32_t)(0x103cea92)));
  /* 103a52b6 push eax */
  push32((uint32_t)(EAX));
  /* 103a52b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a52ba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a52bd push ecx */
  push32((uint32_t)(ECX));
  /* 103a52be call 0x103a8c60 */
  push32(0x103a52c3u); f_103a8c60();
  /* 103a52c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a52c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a52c9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_103a52cc:;
  /* 103a52cc pop edi */
  EDI = (pop32());
  /* 103a52cd pop esi */
  ESI = (pop32());
  /* 103a52ce pop ebx */
  EBX = (pop32());
  /* 103a52cf mov esp, ebp */
  ESP = (EBP);
  /* 103a52d1 pop ebp */
  EBP = (pop32());
  /* 103a52d2 ret  */
  ESPCHK(0x103a4fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052e0 @ 0x103a52e0 (27 bytes, 13 insns) */
void f_103a52e0(void) {
  FTRACE(0x103a52e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a52e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a52e1 mov ebp, esp */
  EBP = (ESP);
  /* 103a52e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a52e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a52e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a52e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a52ec push eax */
  push32((uint32_t)(EAX));
  /* 103a52ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a52f0 push ecx */
  push32((uint32_t)(ECX));
  /* 103a52f1 call 0x103a5300 */
  push32(0x103a52f6u); f_103a5300();
  /* 103a52f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a52f9 pop ebp */
  EBP = (pop32());
  /* 103a52fa ret  */
  ESPCHK(0x103a52e0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x103a5300 (96 bytes, 37 insns) */
void f_103a5300(void) {
  FTRACE(0x103a5300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5300 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5301 mov ebp, esp */
  EBP = (ESP);
  /* 103a5303 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a5306 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a5309 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a530d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 103a5310 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a5313 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5314 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a5317 push edx */
  push32((uint32_t)(EDX));
  /* 103a5318 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a531b push eax */
  push32((uint32_t)(EAX));
  /* 103a531c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a531f push ecx */
  push32((uint32_t)(ECX));
  /* 103a5320 call 0x103a4ef0 */
  push32(0x103a5325u); f_103a4ef0();
  /* 103a5325 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5328 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a532b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a532f je 0x103a5359 */
  if (C.zf) goto L_103a5359;
  /* 103a5331 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5334 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103a5337 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a533a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a533d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a5340:;
  /* 103a5340 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a5343 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5346 jae 0x103a5359 */
  if (!C.cf) goto L_103a5359;
  /* 103a5348 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a534b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103a534e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a5351 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5354 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a5357 jmp 0x103a5340 */
  goto L_103a5340;
L_103a5359:;
  /* 103a5359 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a535c mov esp, ebp */
  ESP = (EBP);
  /* 103a535e pop ebp */
  EBP = (pop32());
  /* 103a535f ret  */
  ESPCHK(0x103a5300u, _esp0);
  ESP += 4; return;
}

/* FUN_10005360 @ 0x103a5360 (27 bytes, 13 insns) */
void f_103a5360(void) {
  FTRACE(0x103a5360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5360 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5361 mov ebp, esp */
  EBP = (ESP);
  /* 103a5363 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5365 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5367 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a5369 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a536c push eax */
  push32((uint32_t)(EAX));
  /* 103a536d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5370 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5371 call 0x103a5380 */
  push32(0x103a5376u); f_103a5380();
  /* 103a5376 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5379 pop ebp */
  EBP = (pop32());
  /* 103a537a ret  */
  ESPCHK(0x103a5360u, _esp0);
  ESP += 4; return;
}

/* FUN_10005380 @ 0x103a5380 (64 bytes, 27 insns) */
void f_103a5380(void) {
  FTRACE(0x103a5380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5380 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5381 mov ebp, esp */
  EBP = (ESP);
  /* 103a5383 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5384 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a5386 call 0x103a88f0 */
  push32(0x103a538bu); f_103a88f0();
  /* 103a538b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a538e push 1 */
  push32((uint32_t)(0x1u));
  /* 103a5390 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a5393 push eax */
  push32((uint32_t)(EAX));
  /* 103a5394 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a5397 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5398 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a539b push edx */
  push32((uint32_t)(EDX));
  /* 103a539c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a539f push eax */
  push32((uint32_t)(EAX));
  /* 103a53a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a53a3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a53a4 call 0x103a53c0 */
  push32(0x103a53a9u); f_103a53c0();
  /* 103a53a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a53ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a53af push 9 */
  push32((uint32_t)(0x9u));
  /* 103a53b1 call 0x103a8990 */
  push32(0x103a53b6u); f_103a8990();
  /* 103a53b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a53b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a53bc mov esp, ebp */
  ESP = (EBP);
  /* 103a53be pop ebp */
  EBP = (pop32());
  /* 103a53bf ret  */
  ESPCHK(0x103a5380u, _esp0);
  ESP += 4; return;
}

/* FUN_100053c0 @ 0x103a53c0 (1297 bytes, 431 insns) */
void f_103a53c0(void) {
  FTRACE(0x103a53c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a53c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a53c1 mov ebp, esp */
  EBP = (ESP);
  /* 103a53c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a53c6 push ebx */
  push32((uint32_t)(EBX));
  /* 103a53c7 push esi */
  push32((uint32_t)(ESI));
  /* 103a53c8 push edi */
  push32((uint32_t)(EDI));
  /* 103a53c9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 103a53d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a53d4 jne 0x103a53f3 */
  if (!C.zf) goto L_103a53f3;
  /* 103a53d6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a53d9 push eax */
  push32((uint32_t)(EAX));
  /* 103a53da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a53dd push ecx */
  push32((uint32_t)(ECX));
  /* 103a53de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a53e1 push edx */
  push32((uint32_t)(EDX));
  /* 103a53e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a53e5 push eax */
  push32((uint32_t)(EAX));
  /* 103a53e6 call 0x103a4ef0 */
  push32(0x103a53ebu); f_103a4ef0();
  /* 103a53eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a53ee jmp 0x103a58ca */
  goto L_103a58ca;
L_103a53f3:;
  /* 103a53f3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a53f7 je 0x103a5416 */
  if (C.zf) goto L_103a5416;
  /* 103a53f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a53fd jne 0x103a5416 */
  if (!C.zf) goto L_103a5416;
  /* 103a53ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a5402 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5403 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5406 push edx */
  push32((uint32_t)(EDX));
  /* 103a5407 call 0x103a5980 */
  push32(0x103a540cu); f_103a5980();
  /* 103a540c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a540f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5411 jmp 0x103a58ca */
  goto L_103a58ca;
L_103a5416:;
  /* 103a5416 mov eax, dword ptr [0x103cea84] */
  EAX = (r32((uint32_t)(0x103cea84)));
  /* 103a541b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103a541e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5420 je 0x103a5452 */
  if (C.zf) goto L_103a5452;
L_103a5422:;
  /* 103a5422 call 0x103a6090 */
  push32(0x103a5427u); f_103a6090();
  /* 103a5427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5429 jne 0x103a544c */
  if (!C.zf) goto L_103a544c;
  /* 103a542b push 0x103cb798 */
  push32((uint32_t)(0x103cb798u));
  /* 103a5430 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5432 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 103a5437 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a543c push 2 */
  push32((uint32_t)(0x2u));
  /* 103a543e call 0x103a3fb0 */
  push32(0x103a5443u); f_103a3fb0();
  /* 103a5443 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5446 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5449 jne 0x103a544c */
  if (!C.zf) goto L_103a544c;
  /* 103a544b int3  */
  x86_unimpl("int3 @ 0x103a544b");
L_103a544c:;
  /* 103a544c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a544e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a5450 jne 0x103a5422 */
  if (!C.zf) goto L_103a5422;
L_103a5452:;
  /* 103a5452 mov edx, dword ptr [0x103cea88] */
  EDX = (r32((uint32_t)(0x103cea88)));
  /* 103a5458 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103a545b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a545e cmp eax, dword ptr [0x103cea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103cea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5464 jne 0x103a5467 */
  if (!C.zf) goto L_103a5467;
  /* 103a5466 int3  */
  x86_unimpl("int3 @ 0x103a5466");
L_103a5467:;
  /* 103a5467 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a546a push ecx */
  push32((uint32_t)(ECX));
  /* 103a546b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a546e push edx */
  push32((uint32_t)(EDX));
  /* 103a546f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a5472 push eax */
  push32((uint32_t)(EAX));
  /* 103a5473 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a5476 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5477 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a547a push edx */
  push32((uint32_t)(EDX));
  /* 103a547b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a547e push eax */
  push32((uint32_t)(EAX));
  /* 103a547f push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5481 call dword ptr [0x103cec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x103cec90))), 0x103a5487u);
  /* 103a5487 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a548a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a548c jne 0x103a54ec */
  if (!C.zf) goto L_103a54ec;
  /* 103a548e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5492 je 0x103a54bf */
  if (C.zf) goto L_103a54bf;
L_103a5494:;
  /* 103a5494 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a5497 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5498 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a549b push edx */
  push32((uint32_t)(EDX));
  /* 103a549c push 0x103cb914 */
  push32((uint32_t)(0x103cb914u));
  /* 103a54a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a54a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a54a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a54a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a54a9 call 0x103a3fb0 */
  push32(0x103a54aeu); f_103a3fb0();
  /* 103a54ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a54b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a54b4 jne 0x103a54b7 */
  if (!C.zf) goto L_103a54b7;
  /* 103a54b6 int3  */
  x86_unimpl("int3 @ 0x103a54b6");
L_103a54b7:;
  /* 103a54b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a54b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a54bb jne 0x103a5494 */
  if (!C.zf) goto L_103a5494;
  /* 103a54bd jmp 0x103a54e5 */
  goto L_103a54e5;
L_103a54bf:;
  /* 103a54bf push 0x103cb8f0 */
  push32((uint32_t)(0x103cb8f0u));
  /* 103a54c4 push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a54c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a54cb push 0 */
  push32((uint32_t)(0x0u));
  /* 103a54cd push 0 */
  push32((uint32_t)(0x0u));
  /* 103a54cf push 0 */
  push32((uint32_t)(0x0u));
  /* 103a54d1 call 0x103a3fb0 */
  push32(0x103a54d6u); f_103a3fb0();
  /* 103a54d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a54d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a54dc jne 0x103a54df */
  if (!C.zf) goto L_103a54df;
  /* 103a54de int3  */
  x86_unimpl("int3 @ 0x103a54de");
L_103a54df:;
  /* 103a54df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a54e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a54e3 jne 0x103a54bf */
  if (!C.zf) goto L_103a54bf;
L_103a54e5:;
  /* 103a54e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a54e7 jmp 0x103a58ca */
  goto L_103a58ca;
L_103a54ec:;
  /* 103a54ec cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a54f0 jbe 0x103a551e */
  if ((C.cf||C.zf)) goto L_103a551e;
L_103a54f2:;
  /* 103a54f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a54f5 push edx */
  push32((uint32_t)(EDX));
  /* 103a54f6 push 0x103cb8c0 */
  push32((uint32_t)(0x103cb8c0u));
  /* 103a54fb push 0 */
  push32((uint32_t)(0x0u));
  /* 103a54fd push 0 */
  push32((uint32_t)(0x0u));
  /* 103a54ff push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5501 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a5503 call 0x103a3fb0 */
  push32(0x103a5508u); f_103a3fb0();
  /* 103a5508 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a550b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a550e jne 0x103a5511 */
  if (!C.zf) goto L_103a5511;
  /* 103a5510 int3  */
  x86_unimpl("int3 @ 0x103a5510");
L_103a5511:;
  /* 103a5511 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5515 jne 0x103a54f2 */
  if (!C.zf) goto L_103a54f2;
  /* 103a5517 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5519 jmp 0x103a58ca */
  goto L_103a58ca;
L_103a551e:;
  /* 103a551e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5522 je 0x103a5566 */
  if (C.zf) goto L_103a5566;
  /* 103a5524 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a5527 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a552d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5530 je 0x103a5566 */
  if (C.zf) goto L_103a5566;
  /* 103a5532 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a5535 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a553b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a553e je 0x103a5566 */
  if (C.zf) goto L_103a5566;
L_103a5540:;
  /* 103a5540 push 0x103cb6d4 */
  push32((uint32_t)(0x103cb6d4u));
  /* 103a5545 push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a554a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a554c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a554e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5550 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a5552 call 0x103a3fb0 */
  push32(0x103a5557u); f_103a3fb0();
  /* 103a5557 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a555a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a555d jne 0x103a5560 */
  if (!C.zf) goto L_103a5560;
  /* 103a555f int3  */
  x86_unimpl("int3 @ 0x103a555f");
L_103a5560:;
  /* 103a5560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5564 jne 0x103a5540 */
  if (!C.zf) goto L_103a5540;
L_103a5566:;
  /* 103a5566 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5569 push ecx */
  push32((uint32_t)(ECX));
  /* 103a556a call 0x103a64f0 */
  push32(0x103a556fu); f_103a64f0();
  /* 103a556f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5572 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5574 jne 0x103a5597 */
  if (!C.zf) goto L_103a5597;
  /* 103a5576 push 0x103cb89c */
  push32((uint32_t)(0x103cb89cu));
  /* 103a557b push 0 */
  push32((uint32_t)(0x0u));
  /* 103a557d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 103a5582 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5587 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5589 call 0x103a3fb0 */
  push32(0x103a558eu); f_103a3fb0();
  /* 103a558e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5591 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5594 jne 0x103a5597 */
  if (!C.zf) goto L_103a5597;
  /* 103a5596 int3  */
  x86_unimpl("int3 @ 0x103a5596");
L_103a5597:;
  /* 103a5597 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a5599 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a559b jne 0x103a5566 */
  if (!C.zf) goto L_103a5566;
  /* 103a559d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a55a0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a55a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a55a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a55a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a55ad jne 0x103a55b6 */
  if (!C.zf) goto L_103a55b6;
  /* 103a55af mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_103a55b6:;
  /* 103a55b6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a55ba je 0x103a55fa */
  if (C.zf) goto L_103a55fa;
L_103a55bc:;
  /* 103a55bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a55bf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a55c6 jne 0x103a55d1 */
  if (!C.zf) goto L_103a55d1;
  /* 103a55c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a55cb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a55cf je 0x103a55f2 */
  if (C.zf) goto L_103a55f2;
L_103a55d1:;
  /* 103a55d1 push 0x103cb854 */
  push32((uint32_t)(0x103cb854u));
  /* 103a55d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a55d8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 103a55dd push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a55e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a55e4 call 0x103a3fb0 */
  push32(0x103a55e9u); f_103a3fb0();
  /* 103a55e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a55ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a55ef jne 0x103a55f2 */
  if (!C.zf) goto L_103a55f2;
  /* 103a55f1 int3  */
  x86_unimpl("int3 @ 0x103a55f1");
L_103a55f2:;
  /* 103a55f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a55f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a55f6 jne 0x103a55bc */
  if (!C.zf) goto L_103a55bc;
  /* 103a55f8 jmp 0x103a565e */
  goto L_103a565e;
L_103a55fa:;
  /* 103a55fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a55fd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a5600 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a5605 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5608 jne 0x103a561f */
  if (!C.zf) goto L_103a561f;
  /* 103a560a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a560d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a5613 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5616 jne 0x103a561f */
  if (!C.zf) goto L_103a561f;
  /* 103a5618 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_103a561f:;
  /* 103a561f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5622 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a5625 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a562a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a562d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a5633 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5635 je 0x103a5658 */
  if (C.zf) goto L_103a5658;
  /* 103a5637 push 0x103cb818 */
  push32((uint32_t)(0x103cb818u));
  /* 103a563c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a563e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 103a5643 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5648 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a564a call 0x103a3fb0 */
  push32(0x103a564fu); f_103a3fb0();
  /* 103a564f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5652 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5655 jne 0x103a5658 */
  if (!C.zf) goto L_103a5658;
  /* 103a5657 int3  */
  x86_unimpl("int3 @ 0x103a5657");
L_103a5658:;
  /* 103a5658 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a565a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a565c jne 0x103a561f */
  if (!C.zf) goto L_103a561f;
L_103a565e:;
  /* 103a565e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5662 je 0x103a5689 */
  if (C.zf) goto L_103a5689;
  /* 103a5664 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a5667 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a566a push eax */
  push32((uint32_t)(EAX));
  /* 103a566b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a566e push ecx */
  push32((uint32_t)(ECX));
  /* 103a566f call 0x103a8e70 */
  push32(0x103a5674u); f_103a8e70();
  /* 103a5674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5677 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a567a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a567e jne 0x103a5687 */
  if (!C.zf) goto L_103a5687;
  /* 103a5680 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5682 jmp 0x103a58ca */
  goto L_103a58ca;
L_103a5687:;
  /* 103a5687 jmp 0x103a56ac */
  goto L_103a56ac;
L_103a5689:;
  /* 103a5689 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a568c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a568f push edx */
  push32((uint32_t)(EDX));
  /* 103a5690 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5693 push eax */
  push32((uint32_t)(EAX));
  /* 103a5694 call 0x103a8dc0 */
  push32(0x103a5699u); f_103a8dc0();
  /* 103a5699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a569c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a569f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a56a3 jne 0x103a56ac */
  if (!C.zf) goto L_103a56ac;
  /* 103a56a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a56a7 jmp 0x103a58ca */
  goto L_103a58ca;
L_103a56ac:;
  /* 103a56ac mov ecx, dword ptr [0x103cea88] */
  ECX = (r32((uint32_t)(0x103cea88)));
  /* 103a56b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a56b5 mov dword ptr [0x103cea88], ecx */
  w32((uint32_t)(0x103cea88), (ECX));
  /* 103a56bb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a56bf jne 0x103a5717 */
  if (!C.zf) goto L_103a5717;
  /* 103a56c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a56c4 mov eax, dword ptr [0x103d063c] */
  EAX = (r32((uint32_t)(0x103d063c)));
  /* 103a56c9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a56cc mov dword ptr [0x103d063c], eax */
  w32((uint32_t)(0x103d063c), (EAX));
  /* 103a56d1 mov ecx, dword ptr [0x103d063c] */
  ECX = (r32((uint32_t)(0x103d063c)));
  /* 103a56d7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a56da mov dword ptr [0x103d063c], ecx */
  w32((uint32_t)(0x103d063c), (ECX));
  /* 103a56e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a56e3 mov eax, dword ptr [0x103d0644] */
  EAX = (r32((uint32_t)(0x103d0644)));
  /* 103a56e8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a56eb mov dword ptr [0x103d0644], eax */
  w32((uint32_t)(0x103d0644), (EAX));
  /* 103a56f0 mov ecx, dword ptr [0x103d0644] */
  ECX = (r32((uint32_t)(0x103d0644)));
  /* 103a56f6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a56f9 mov dword ptr [0x103d0644], ecx */
  w32((uint32_t)(0x103d0644), (ECX));
  /* 103a56ff mov edx, dword ptr [0x103d0644] */
  EDX = (r32((uint32_t)(0x103d0644)));
  /* 103a5705 cmp edx, dword ptr [0x103d0648] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x103d0648))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a570b jbe 0x103a5717 */
  if ((C.cf||C.zf)) goto L_103a5717;
  /* 103a570d mov eax, dword ptr [0x103d0644] */
  EAX = (r32((uint32_t)(0x103d0644)));
  /* 103a5712 mov dword ptr [0x103d0648], eax */
  w32((uint32_t)(0x103d0648), (EAX));
L_103a5717:;
  /* 103a5717 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a571a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a571d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a5720 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a5723 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a5726 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5729 jbe 0x103a574f */
  if ((C.cf||C.zf)) goto L_103a574f;
  /* 103a572b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a572e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a5731 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a5734 push edx */
  push32((uint32_t)(EDX));
  /* 103a5735 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5737 mov al, byte ptr [0x103cea92] */
  AL = (r8((uint32_t)(0x103cea92)));
  /* 103a573c push eax */
  push32((uint32_t)(EAX));
  /* 103a573d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a5740 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5743 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5746 push edx */
  push32((uint32_t)(EDX));
  /* 103a5747 call 0x103a8c60 */
  push32(0x103a574cu); f_103a8c60();
  /* 103a574c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a574f:;
  /* 103a574f push 4 */
  push32((uint32_t)(0x4u));
  /* 103a5751 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5753 mov al, byte ptr [0x103cea90] */
  AL = (r8((uint32_t)(0x103cea90)));
  /* 103a5758 push eax */
  push32((uint32_t)(EAX));
  /* 103a5759 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a575c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a575f push ecx */
  push32((uint32_t)(ECX));
  /* 103a5760 call 0x103a8c60 */
  push32(0x103a5765u); f_103a8c60();
  /* 103a5765 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5768 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a576c jne 0x103a5789 */
  if (!C.zf) goto L_103a5789;
  /* 103a576e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a5771 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a5774 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103a5777 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a577a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a577d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 103a5780 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a5783 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a5786 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_103a5789:;
  /* 103a5789 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a578c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a578f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_103a5792:;
  /* 103a5792 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5796 jne 0x103a57c7 */
  if (!C.zf) goto L_103a57c7;
  /* 103a5798 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a579c jne 0x103a57a6 */
  if (!C.zf) goto L_103a57a6;
  /* 103a579e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a57a1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a57a4 je 0x103a57c7 */
  if (C.zf) goto L_103a57c7;
L_103a57a6:;
  /* 103a57a6 push 0x103cb7e4 */
  push32((uint32_t)(0x103cb7e4u));
  /* 103a57ab push 0 */
  push32((uint32_t)(0x0u));
  /* 103a57ad push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 103a57b2 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a57b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a57b9 call 0x103a3fb0 */
  push32(0x103a57beu); f_103a3fb0();
  /* 103a57be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a57c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a57c4 jne 0x103a57c7 */
  if (!C.zf) goto L_103a57c7;
  /* 103a57c6 int3  */
  x86_unimpl("int3 @ 0x103a57c6");
L_103a57c7:;
  /* 103a57c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a57c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a57cb jne 0x103a5792 */
  if (!C.zf) goto L_103a5792;
  /* 103a57cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a57d0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a57d3 je 0x103a57db */
  if (C.zf) goto L_103a57db;
  /* 103a57d5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a57d9 je 0x103a57e3 */
  if (C.zf) goto L_103a57e3;
L_103a57db:;
  /* 103a57db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a57de jmp 0x103a58ca */
  goto L_103a58ca;
L_103a57e3:;
  /* 103a57e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a57e6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a57e9 je 0x103a57fb */
  if (C.zf) goto L_103a57fb;
  /* 103a57eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a57ee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a57f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a57f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103a57f6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103a57f9 jmp 0x103a5837 */
  goto L_103a5837;
L_103a57fb:;
  /* 103a57fb mov eax, dword ptr [0x103d0638] */
  EAX = (r32((uint32_t)(0x103d0638)));
  /* 103a5800 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5803 je 0x103a5826 */
  if (C.zf) goto L_103a5826;
  /* 103a5805 push 0x103cb7c8 */
  push32((uint32_t)(0x103cb7c8u));
  /* 103a580a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a580c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 103a5811 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5816 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5818 call 0x103a3fb0 */
  push32(0x103a581du); f_103a3fb0();
  /* 103a581d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5820 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5823 jne 0x103a5826 */
  if (!C.zf) goto L_103a5826;
  /* 103a5825 int3  */
  x86_unimpl("int3 @ 0x103a5825");
L_103a5826:;
  /* 103a5826 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a5828 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a582a jne 0x103a57fb */
  if (!C.zf) goto L_103a57fb;
  /* 103a582c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a582f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103a5832 mov dword ptr [0x103d0638], eax */
  w32((uint32_t)(0x103d0638), (EAX));
L_103a5837:;
  /* 103a5837 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a583a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a583e je 0x103a584f */
  if (C.zf) goto L_103a584f;
  /* 103a5840 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a5843 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103a5846 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a5849 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a584b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103a584d jmp 0x103a588a */
  goto L_103a588a;
L_103a584f:;
  /* 103a584f mov eax, dword ptr [0x103d0640] */
  EAX = (r32((uint32_t)(0x103d0640)));
  /* 103a5854 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5857 je 0x103a587a */
  if (C.zf) goto L_103a587a;
  /* 103a5859 push 0x103cb7ac */
  push32((uint32_t)(0x103cb7acu));
  /* 103a585e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5860 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 103a5865 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a586a push 2 */
  push32((uint32_t)(0x2u));
  /* 103a586c call 0x103a3fb0 */
  push32(0x103a5871u); f_103a3fb0();
  /* 103a5871 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5874 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5877 jne 0x103a587a */
  if (!C.zf) goto L_103a587a;
  /* 103a5879 int3  */
  x86_unimpl("int3 @ 0x103a5879");
L_103a587a:;
  /* 103a587a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a587c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a587e jne 0x103a584f */
  if (!C.zf) goto L_103a584f;
  /* 103a5880 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a5883 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a5885 mov dword ptr [0x103d0640], eax */
  w32((uint32_t)(0x103d0640), (EAX));
L_103a588a:;
  /* 103a588a cmp dword ptr [0x103d0640], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0640))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5891 je 0x103a58a1 */
  if (C.zf) goto L_103a58a1;
  /* 103a5893 mov ecx, dword ptr [0x103d0640] */
  ECX = (r32((uint32_t)(0x103d0640)));
  /* 103a5899 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a589c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 103a589f jmp 0x103a58a9 */
  goto L_103a58a9;
L_103a58a1:;
  /* 103a58a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a58a4 mov dword ptr [0x103d0638], eax */
  w32((uint32_t)(0x103d0638), (EAX));
L_103a58a9:;
  /* 103a58a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a58ac mov edx, dword ptr [0x103d0640] */
  EDX = (r32((uint32_t)(0x103d0640)));
  /* 103a58b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103a58b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a58b7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 103a58be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a58c1 mov dword ptr [0x103d0640], ecx */
  w32((uint32_t)(0x103d0640), (ECX));
  /* 103a58c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103a58ca:;
  /* 103a58ca pop edi */
  EDI = (pop32());
  /* 103a58cb pop esi */
  ESI = (pop32());
  /* 103a58cc pop ebx */
  EBX = (pop32());
  /* 103a58cd mov esp, ebp */
  ESP = (EBP);
  /* 103a58cf pop ebp */
  EBP = (pop32());
  /* 103a58d0 ret  */
  ESPCHK(0x103a53c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058e0 @ 0x103a58e0 (27 bytes, 13 insns) */
void f_103a58e0(void) {
  FTRACE(0x103a58e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a58e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a58e1 mov ebp, esp */
  EBP = (ESP);
  /* 103a58e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a58e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a58e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a58e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a58ec push eax */
  push32((uint32_t)(EAX));
  /* 103a58ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a58f0 push ecx */
  push32((uint32_t)(ECX));
  /* 103a58f1 call 0x103a5900 */
  push32(0x103a58f6u); f_103a5900();
  /* 103a58f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a58f9 pop ebp */
  EBP = (pop32());
  /* 103a58fa ret  */
  ESPCHK(0x103a58e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005900 @ 0x103a5900 (64 bytes, 27 insns) */
void f_103a5900(void) {
  FTRACE(0x103a5900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5900 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5901 mov ebp, esp */
  EBP = (ESP);
  /* 103a5903 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5904 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a5906 call 0x103a88f0 */
  push32(0x103a590bu); f_103a88f0();
  /* 103a590b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a590e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5910 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a5913 push eax */
  push32((uint32_t)(EAX));
  /* 103a5914 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a5917 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5918 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a591b push edx */
  push32((uint32_t)(EDX));
  /* 103a591c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a591f push eax */
  push32((uint32_t)(EAX));
  /* 103a5920 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5923 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5924 call 0x103a53c0 */
  push32(0x103a5929u); f_103a53c0();
  /* 103a5929 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a592c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a592f push 9 */
  push32((uint32_t)(0x9u));
  /* 103a5931 call 0x103a8990 */
  push32(0x103a5936u); f_103a8990();
  /* 103a5936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a593c mov esp, ebp */
  ESP = (EBP);
  /* 103a593e pop ebp */
  EBP = (pop32());
  /* 103a593f ret  */
  ESPCHK(0x103a5900u, _esp0);
  ESP += 4; return;
}

/* FUN_10005940 @ 0x103a5940 (19 bytes, 9 insns) */
void f_103a5940(void) {
  FTRACE(0x103a5940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5940 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5941 mov ebp, esp */
  EBP = (ESP);
  /* 103a5943 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a5945 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5948 push eax */
  push32((uint32_t)(EAX));
  /* 103a5949 call 0x103a5980 */
  push32(0x103a594eu); f_103a5980();
  /* 103a594e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5951 pop ebp */
  EBP = (pop32());
  /* 103a5952 ret  */
  ESPCHK(0x103a5940u, _esp0);
  ESP += 4; return;
}

/* FUN_10005960 @ 0x103a5960 (19 bytes, 9 insns) */
void f_103a5960(void) {
  FTRACE(0x103a5960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5960 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5961 mov ebp, esp */
  EBP = (ESP);
  /* 103a5963 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a5965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5968 push eax */
  push32((uint32_t)(EAX));
  /* 103a5969 call 0x103a59b0 */
  push32(0x103a596eu); f_103a59b0();
  /* 103a596e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5971 pop ebp */
  EBP = (pop32());
  /* 103a5972 ret  */
  ESPCHK(0x103a5960u, _esp0);
  ESP += 4; return;
}

/* FUN_10005980 @ 0x103a5980 (41 bytes, 16 insns) */
void f_103a5980(void) {
  FTRACE(0x103a5980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5980 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5981 mov ebp, esp */
  EBP = (ESP);
  /* 103a5983 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a5985 call 0x103a88f0 */
  push32(0x103a598au); f_103a88f0();
  /* 103a598a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a598d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a5990 push eax */
  push32((uint32_t)(EAX));
  /* 103a5991 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5994 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5995 call 0x103a59b0 */
  push32(0x103a599au); f_103a59b0();
  /* 103a599a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a599d push 9 */
  push32((uint32_t)(0x9u));
  /* 103a599f call 0x103a8990 */
  push32(0x103a59a4u); f_103a8990();
  /* 103a59a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a59a7 pop ebp */
  EBP = (pop32());
  /* 103a59a8 ret  */
  ESPCHK(0x103a5980u, _esp0);
  ESP += 4; return;
}

/* FUN_100059b0 @ 0x103a59b0 (1004 bytes, 342 insns) */
void f_103a59b0(void) {
  FTRACE(0x103a59b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a59b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a59b1 mov ebp, esp */
  EBP = (ESP);
  /* 103a59b3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a59b4 push ebx */
  push32((uint32_t)(EBX));
  /* 103a59b5 push esi */
  push32((uint32_t)(ESI));
  /* 103a59b6 push edi */
  push32((uint32_t)(EDI));
  /* 103a59b7 mov eax, dword ptr [0x103cea84] */
  EAX = (r32((uint32_t)(0x103cea84)));
  /* 103a59bc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103a59bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a59c1 je 0x103a59f3 */
  if (C.zf) goto L_103a59f3;
L_103a59c3:;
  /* 103a59c3 call 0x103a6090 */
  push32(0x103a59c8u); f_103a6090();
  /* 103a59c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a59ca jne 0x103a59ed */
  if (!C.zf) goto L_103a59ed;
  /* 103a59cc push 0x103cb798 */
  push32((uint32_t)(0x103cb798u));
  /* 103a59d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a59d3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 103a59d8 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a59dd push 2 */
  push32((uint32_t)(0x2u));
  /* 103a59df call 0x103a3fb0 */
  push32(0x103a59e4u); f_103a3fb0();
  /* 103a59e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a59e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a59ea jne 0x103a59ed */
  if (!C.zf) goto L_103a59ed;
  /* 103a59ec int3  */
  x86_unimpl("int3 @ 0x103a59ec");
L_103a59ed:;
  /* 103a59ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a59ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a59f1 jne 0x103a59c3 */
  if (!C.zf) goto L_103a59c3;
L_103a59f3:;
  /* 103a59f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a59f7 jne 0x103a59fe */
  if (!C.zf) goto L_103a59fe;
  /* 103a59f9 jmp 0x103a5d95 */
  goto L_103a5d95;
L_103a59fe:;
  /* 103a59fe push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5a04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a5a07 push edx */
  push32((uint32_t)(EDX));
  /* 103a5a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5a0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5a0d push eax */
  push32((uint32_t)(EAX));
  /* 103a5a0e push 3 */
  push32((uint32_t)(0x3u));
  /* 103a5a10 call dword ptr [0x103cec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x103cec90))), 0x103a5a16u);
  /* 103a5a16 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5a1b jne 0x103a5a48 */
  if (!C.zf) goto L_103a5a48;
L_103a5a1d:;
  /* 103a5a1d push 0x103cba5c */
  push32((uint32_t)(0x103cba5cu));
  /* 103a5a22 push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a5a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5a2f call 0x103a3fb0 */
  push32(0x103a5a34u); f_103a3fb0();
  /* 103a5a34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5a37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5a3a jne 0x103a5a3d */
  if (!C.zf) goto L_103a5a3d;
  /* 103a5a3c int3  */
  x86_unimpl("int3 @ 0x103a5a3c");
L_103a5a3d:;
  /* 103a5a3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a5a3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a5a41 jne 0x103a5a1d */
  if (!C.zf) goto L_103a5a1d;
  /* 103a5a43 jmp 0x103a5d95 */
  goto L_103a5d95;
L_103a5a48:;
  /* 103a5a48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5a4b push edx */
  push32((uint32_t)(EDX));
  /* 103a5a4c call 0x103a64f0 */
  push32(0x103a5a51u); f_103a64f0();
  /* 103a5a51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5a54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5a56 jne 0x103a5a79 */
  if (!C.zf) goto L_103a5a79;
  /* 103a5a58 push 0x103cb89c */
  push32((uint32_t)(0x103cb89cu));
  /* 103a5a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5a5f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 103a5a64 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5a69 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5a6b call 0x103a3fb0 */
  push32(0x103a5a70u); f_103a3fb0();
  /* 103a5a70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5a73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5a76 jne 0x103a5a79 */
  if (!C.zf) goto L_103a5a79;
  /* 103a5a78 int3  */
  x86_unimpl("int3 @ 0x103a5a78");
L_103a5a79:;
  /* 103a5a79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5a7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5a7d jne 0x103a5a48 */
  if (!C.zf) goto L_103a5a48;
  /* 103a5a7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5a82 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a5a85 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103a5a88:;
  /* 103a5a88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5a8b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a5a8e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a5a93 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5a96 je 0x103a5adb */
  if (C.zf) goto L_103a5adb;
  /* 103a5a98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5a9b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5a9f je 0x103a5adb */
  if (C.zf) goto L_103a5adb;
  /* 103a5aa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5aa4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a5aa7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a5aac cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5aaf je 0x103a5adb */
  if (C.zf) goto L_103a5adb;
  /* 103a5ab1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5ab4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5ab8 je 0x103a5adb */
  if (C.zf) goto L_103a5adb;
  /* 103a5aba push 0x103cba34 */
  push32((uint32_t)(0x103cba34u));
  /* 103a5abf push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5ac1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 103a5ac6 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5acb push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5acd call 0x103a3fb0 */
  push32(0x103a5ad2u); f_103a3fb0();
  /* 103a5ad2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5ad5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5ad8 jne 0x103a5adb */
  if (!C.zf) goto L_103a5adb;
  /* 103a5ada int3  */
  x86_unimpl("int3 @ 0x103a5ada");
L_103a5adb:;
  /* 103a5adb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a5add test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a5adf jne 0x103a5a88 */
  if (!C.zf) goto L_103a5a88;
  /* 103a5ae1 mov eax, dword ptr [0x103cea84] */
  EAX = (r32((uint32_t)(0x103cea84)));
  /* 103a5ae6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103a5ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5aeb jne 0x103a5bb6 */
  if (!C.zf) goto L_103a5bb6;
  /* 103a5af1 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a5af3 mov cl, byte ptr [0x103cea90] */
  CL = (r8((uint32_t)(0x103cea90)));
  /* 103a5af9 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5afa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5afd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5b00 push edx */
  push32((uint32_t)(EDX));
  /* 103a5b01 call 0x103a6000 */
  push32(0x103a5b06u); f_103a6000();
  /* 103a5b06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5b0b jne 0x103a5b50 */
  if (!C.zf) goto L_103a5b50;
L_103a5b0d:;
  /* 103a5b0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5b10 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5b13 push eax */
  push32((uint32_t)(EAX));
  /* 103a5b14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5b17 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103a5b1a push edx */
  push32((uint32_t)(EDX));
  /* 103a5b1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5b1e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103a5b21 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a5b27 mov edx, dword ptr [ecx*4 + 0x103cea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103cea94)));
  /* 103a5b2e push edx */
  push32((uint32_t)(EDX));
  /* 103a5b2f push 0x103cba08 */
  push32((uint32_t)(0x103cba08u));
  /* 103a5b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5b3a push 1 */
  push32((uint32_t)(0x1u));
  /* 103a5b3c call 0x103a3fb0 */
  push32(0x103a5b41u); f_103a3fb0();
  /* 103a5b41 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5b44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5b47 jne 0x103a5b4a */
  if (!C.zf) goto L_103a5b4a;
  /* 103a5b49 int3  */
  x86_unimpl("int3 @ 0x103a5b49");
L_103a5b4a:;
  /* 103a5b4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5b4e jne 0x103a5b0d */
  if (!C.zf) goto L_103a5b0d;
L_103a5b50:;
  /* 103a5b50 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a5b52 mov cl, byte ptr [0x103cea90] */
  CL = (r8((uint32_t)(0x103cea90)));
  /* 103a5b58 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5b59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5b5c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103a5b5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5b62 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 103a5b66 push edx */
  push32((uint32_t)(EDX));
  /* 103a5b67 call 0x103a6000 */
  push32(0x103a5b6cu); f_103a6000();
  /* 103a5b6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5b6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5b71 jne 0x103a5bb6 */
  if (!C.zf) goto L_103a5bb6;
L_103a5b73:;
  /* 103a5b73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5b76 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5b79 push eax */
  push32((uint32_t)(EAX));
  /* 103a5b7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5b7d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103a5b80 push edx */
  push32((uint32_t)(EDX));
  /* 103a5b81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5b84 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103a5b87 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a5b8d mov edx, dword ptr [ecx*4 + 0x103cea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103cea94)));
  /* 103a5b94 push edx */
  push32((uint32_t)(EDX));
  /* 103a5b95 push 0x103cb9dc */
  push32((uint32_t)(0x103cb9dcu));
  /* 103a5b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5b9e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5ba0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a5ba2 call 0x103a3fb0 */
  push32(0x103a5ba7u); f_103a3fb0();
  /* 103a5ba7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5baa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5bad jne 0x103a5bb0 */
  if (!C.zf) goto L_103a5bb0;
  /* 103a5baf int3  */
  x86_unimpl("int3 @ 0x103a5baf");
L_103a5bb0:;
  /* 103a5bb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5bb4 jne 0x103a5b73 */
  if (!C.zf) goto L_103a5b73;
L_103a5bb6:;
  /* 103a5bb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5bb9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5bbd jne 0x103a5c2b */
  if (!C.zf) goto L_103a5c2b;
L_103a5bbf:;
  /* 103a5bbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5bc2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5bc9 jne 0x103a5bd4 */
  if (!C.zf) goto L_103a5bd4;
  /* 103a5bcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5bce cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5bd2 je 0x103a5bf5 */
  if (C.zf) goto L_103a5bf5;
L_103a5bd4:;
  /* 103a5bd4 push 0x103cb99c */
  push32((uint32_t)(0x103cb99cu));
  /* 103a5bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5bdb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 103a5be0 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5be5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5be7 call 0x103a3fb0 */
  push32(0x103a5becu); f_103a3fb0();
  /* 103a5bec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5bef cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5bf2 jne 0x103a5bf5 */
  if (!C.zf) goto L_103a5bf5;
  /* 103a5bf4 int3  */
  x86_unimpl("int3 @ 0x103a5bf4");
L_103a5bf5:;
  /* 103a5bf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a5bf7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a5bf9 jne 0x103a5bbf */
  if (!C.zf) goto L_103a5bbf;
  /* 103a5bfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5bfe mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103a5c01 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5c04 push eax */
  push32((uint32_t)(EAX));
  /* 103a5c05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a5c07 mov cl, byte ptr [0x103cea91] */
  CL = (r8((uint32_t)(0x103cea91)));
  /* 103a5c0d push ecx */
  push32((uint32_t)(ECX));
  /* 103a5c0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5c11 push edx */
  push32((uint32_t)(EDX));
  /* 103a5c12 call 0x103a8c60 */
  push32(0x103a5c17u); f_103a8c60();
  /* 103a5c17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5c1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5c1d push eax */
  push32((uint32_t)(EAX));
  /* 103a5c1e call 0x103a9060 */
  push32(0x103a5c23u); f_103a9060();
  /* 103a5c23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5c26 jmp 0x103a5d95 */
  goto L_103a5d95;
L_103a5c2b:;
  /* 103a5c2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5c2e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5c32 jne 0x103a5c41 */
  if (!C.zf) goto L_103a5c41;
  /* 103a5c34 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5c38 jne 0x103a5c41 */
  if (!C.zf) goto L_103a5c41;
  /* 103a5c3a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_103a5c41:;
  /* 103a5c41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5c44 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a5c47 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5c4a je 0x103a5c6d */
  if (C.zf) goto L_103a5c6d;
  /* 103a5c4c push 0x103cb97c */
  push32((uint32_t)(0x103cb97cu));
  /* 103a5c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5c53 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 103a5c58 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5c5d push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5c5f call 0x103a3fb0 */
  push32(0x103a5c64u); f_103a3fb0();
  /* 103a5c64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5c67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5c6a jne 0x103a5c6d */
  if (!C.zf) goto L_103a5c6d;
  /* 103a5c6c int3  */
  x86_unimpl("int3 @ 0x103a5c6c");
L_103a5c6d:;
  /* 103a5c6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a5c6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a5c71 jne 0x103a5c41 */
  if (!C.zf) goto L_103a5c41;
  /* 103a5c73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5c76 mov eax, dword ptr [0x103d0644] */
  EAX = (r32((uint32_t)(0x103d0644)));
  /* 103a5c7b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a5c7e mov dword ptr [0x103d0644], eax */
  w32((uint32_t)(0x103d0644), (EAX));
  /* 103a5c83 mov ecx, dword ptr [0x103cea84] */
  ECX = (r32((uint32_t)(0x103cea84)));
  /* 103a5c89 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 103a5c8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a5c8e jne 0x103a5d6c */
  if (!C.zf) goto L_103a5d6c;
  /* 103a5c94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5c97 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5c9a je 0x103a5cac */
  if (C.zf) goto L_103a5cac;
  /* 103a5c9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5c9f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a5ca1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5ca4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103a5ca7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103a5caa jmp 0x103a5cea */
  goto L_103a5cea;
L_103a5cac:;
  /* 103a5cac mov ecx, dword ptr [0x103d0638] */
  ECX = (r32((uint32_t)(0x103d0638)));
  /* 103a5cb2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5cb5 je 0x103a5cd8 */
  if (C.zf) goto L_103a5cd8;
  /* 103a5cb7 push 0x103cb964 */
  push32((uint32_t)(0x103cb964u));
  /* 103a5cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5cbe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 103a5cc3 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5cc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5cca call 0x103a3fb0 */
  push32(0x103a5ccfu); f_103a3fb0();
  /* 103a5ccf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5cd2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5cd5 jne 0x103a5cd8 */
  if (!C.zf) goto L_103a5cd8;
  /* 103a5cd7 int3  */
  x86_unimpl("int3 @ 0x103a5cd7");
L_103a5cd8:;
  /* 103a5cd8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a5cda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a5cdc jne 0x103a5cac */
  if (!C.zf) goto L_103a5cac;
  /* 103a5cde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5ce1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a5ce4 mov dword ptr [0x103d0638], ecx */
  w32((uint32_t)(0x103d0638), (ECX));
L_103a5cea:;
  /* 103a5cea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5ced cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5cf1 je 0x103a5d02 */
  if (C.zf) goto L_103a5d02;
  /* 103a5cf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5cf6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a5cf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5cfc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a5cfe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103a5d00 jmp 0x103a5d3f */
  goto L_103a5d3f;
L_103a5d02:;
  /* 103a5d02 mov ecx, dword ptr [0x103d0640] */
  ECX = (r32((uint32_t)(0x103d0640)));
  /* 103a5d08 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5d0b je 0x103a5d2e */
  if (C.zf) goto L_103a5d2e;
  /* 103a5d0d push 0x103cb94c */
  push32((uint32_t)(0x103cb94cu));
  /* 103a5d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5d14 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 103a5d19 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5d1e push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5d20 call 0x103a3fb0 */
  push32(0x103a5d25u); f_103a3fb0();
  /* 103a5d25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5d28 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5d2b jne 0x103a5d2e */
  if (!C.zf) goto L_103a5d2e;
  /* 103a5d2d int3  */
  x86_unimpl("int3 @ 0x103a5d2d");
L_103a5d2e:;
  /* 103a5d2e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a5d30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a5d32 jne 0x103a5d02 */
  if (!C.zf) goto L_103a5d02;
  /* 103a5d34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5d37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a5d39 mov dword ptr [0x103d0640], ecx */
  w32((uint32_t)(0x103d0640), (ECX));
L_103a5d3f:;
  /* 103a5d3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5d42 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103a5d45 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5d48 push eax */
  push32((uint32_t)(EAX));
  /* 103a5d49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a5d4b mov cl, byte ptr [0x103cea91] */
  CL = (r8((uint32_t)(0x103cea91)));
  /* 103a5d51 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5d52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5d55 push edx */
  push32((uint32_t)(EDX));
  /* 103a5d56 call 0x103a8c60 */
  push32(0x103a5d5bu); f_103a8c60();
  /* 103a5d5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5d5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5d61 push eax */
  push32((uint32_t)(EAX));
  /* 103a5d62 call 0x103a9060 */
  push32(0x103a5d67u); f_103a9060();
  /* 103a5d67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5d6a jmp 0x103a5d95 */
  goto L_103a5d95;
L_103a5d6c:;
  /* 103a5d6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5d6f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 103a5d76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5d79 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103a5d7c push eax */
  push32((uint32_t)(EAX));
  /* 103a5d7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a5d7f mov cl, byte ptr [0x103cea91] */
  CL = (r8((uint32_t)(0x103cea91)));
  /* 103a5d85 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5d86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5d89 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5d8c push edx */
  push32((uint32_t)(EDX));
  /* 103a5d8d call 0x103a8c60 */
  push32(0x103a5d92u); f_103a8c60();
  /* 103a5d92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a5d95:;
  /* 103a5d95 pop edi */
  EDI = (pop32());
  /* 103a5d96 pop esi */
  ESI = (pop32());
  /* 103a5d97 pop ebx */
  EBX = (pop32());
  /* 103a5d98 mov esp, ebp */
  ESP = (EBP);
  /* 103a5d9a pop ebp */
  EBP = (pop32());
  /* 103a5d9b ret  */
  ESPCHK(0x103a59b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005da0 @ 0x103a5da0 (19 bytes, 9 insns) */
void f_103a5da0(void) {
  FTRACE(0x103a5da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5da0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5da1 mov ebp, esp */
  EBP = (ESP);
  /* 103a5da3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a5da5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5da8 push eax */
  push32((uint32_t)(EAX));
  /* 103a5da9 call 0x103a5dc0 */
  push32(0x103a5daeu); f_103a5dc0();
  /* 103a5dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5db1 pop ebp */
  EBP = (pop32());
  /* 103a5db2 ret  */
  ESPCHK(0x103a5da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dc0 @ 0x103a5dc0 (342 bytes, 119 insns) */
void f_103a5dc0(void) {
  FTRACE(0x103a5dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5dc1 mov ebp, esp */
  EBP = (ESP);
  /* 103a5dc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a5dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 103a5dc7 push esi */
  push32((uint32_t)(ESI));
  /* 103a5dc8 push edi */
  push32((uint32_t)(EDI));
  /* 103a5dc9 mov eax, dword ptr [0x103cea84] */
  EAX = (r32((uint32_t)(0x103cea84)));
  /* 103a5dce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103a5dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5dd3 je 0x103a5e05 */
  if (C.zf) goto L_103a5e05;
L_103a5dd5:;
  /* 103a5dd5 call 0x103a6090 */
  push32(0x103a5ddau); f_103a6090();
  /* 103a5dda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5ddc jne 0x103a5dff */
  if (!C.zf) goto L_103a5dff;
  /* 103a5dde push 0x103cb798 */
  push32((uint32_t)(0x103cb798u));
  /* 103a5de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5de5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 103a5dea push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5def push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5df1 call 0x103a3fb0 */
  push32(0x103a5df6u); f_103a3fb0();
  /* 103a5df6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5df9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5dfc jne 0x103a5dff */
  if (!C.zf) goto L_103a5dff;
  /* 103a5dfe int3  */
  x86_unimpl("int3 @ 0x103a5dfe");
L_103a5dff:;
  /* 103a5dff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a5e01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a5e03 jne 0x103a5dd5 */
  if (!C.zf) goto L_103a5dd5;
L_103a5e05:;
  /* 103a5e05 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a5e07 call 0x103a88f0 */
  push32(0x103a5e0cu); f_103a88f0();
  /* 103a5e0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a5e0f:;
  /* 103a5e0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5e12 push edx */
  push32((uint32_t)(EDX));
  /* 103a5e13 call 0x103a64f0 */
  push32(0x103a5e18u); f_103a64f0();
  /* 103a5e18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5e1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5e1d jne 0x103a5e40 */
  if (!C.zf) goto L_103a5e40;
  /* 103a5e1f push 0x103cb89c */
  push32((uint32_t)(0x103cb89cu));
  /* 103a5e24 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5e26 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 103a5e2b push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5e30 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5e32 call 0x103a3fb0 */
  push32(0x103a5e37u); f_103a3fb0();
  /* 103a5e37 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5e3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5e3d jne 0x103a5e40 */
  if (!C.zf) goto L_103a5e40;
  /* 103a5e3f int3  */
  x86_unimpl("int3 @ 0x103a5e3f");
L_103a5e40:;
  /* 103a5e40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a5e42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5e44 jne 0x103a5e0f */
  if (!C.zf) goto L_103a5e0f;
  /* 103a5e46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5e49 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a5e4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103a5e4f:;
  /* 103a5e4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5e52 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a5e55 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a5e5a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5e5d je 0x103a5ea2 */
  if (C.zf) goto L_103a5ea2;
  /* 103a5e5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5e62 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5e66 je 0x103a5ea2 */
  if (C.zf) goto L_103a5ea2;
  /* 103a5e68 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5e6b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a5e6e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a5e73 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5e76 je 0x103a5ea2 */
  if (C.zf) goto L_103a5ea2;
  /* 103a5e78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5e7b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5e7f je 0x103a5ea2 */
  if (C.zf) goto L_103a5ea2;
  /* 103a5e81 push 0x103cba34 */
  push32((uint32_t)(0x103cba34u));
  /* 103a5e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5e88 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 103a5e8d push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5e92 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5e94 call 0x103a3fb0 */
  push32(0x103a5e99u); f_103a3fb0();
  /* 103a5e99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5e9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5e9f jne 0x103a5ea2 */
  if (!C.zf) goto L_103a5ea2;
  /* 103a5ea1 int3  */
  x86_unimpl("int3 @ 0x103a5ea1");
L_103a5ea2:;
  /* 103a5ea2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a5ea4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a5ea6 jne 0x103a5e4f */
  if (!C.zf) goto L_103a5e4f;
  /* 103a5ea8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5eab cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5eaf jne 0x103a5ebe */
  if (!C.zf) goto L_103a5ebe;
  /* 103a5eb1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5eb5 jne 0x103a5ebe */
  if (!C.zf) goto L_103a5ebe;
  /* 103a5eb7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_103a5ebe:;
  /* 103a5ebe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5ec1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5ec5 je 0x103a5ef9 */
  if (C.zf) goto L_103a5ef9;
L_103a5ec7:;
  /* 103a5ec7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5eca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a5ecd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5ed0 je 0x103a5ef3 */
  if (C.zf) goto L_103a5ef3;
  /* 103a5ed2 push 0x103cb97c */
  push32((uint32_t)(0x103cb97cu));
  /* 103a5ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5ed9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 103a5ede push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5ee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5ee5 call 0x103a3fb0 */
  push32(0x103a5eeau); f_103a3fb0();
  /* 103a5eea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5eed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5ef0 jne 0x103a5ef3 */
  if (!C.zf) goto L_103a5ef3;
  /* 103a5ef2 int3  */
  x86_unimpl("int3 @ 0x103a5ef2");
L_103a5ef3:;
  /* 103a5ef3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a5ef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a5ef7 jne 0x103a5ec7 */
  if (!C.zf) goto L_103a5ec7;
L_103a5ef9:;
  /* 103a5ef9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a5efc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103a5eff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a5f02 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a5f04 call 0x103a8990 */
  push32(0x103a5f09u); f_103a8990();
  /* 103a5f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5f0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5f0f pop edi */
  EDI = (pop32());
  /* 103a5f10 pop esi */
  ESI = (pop32());
  /* 103a5f11 pop ebx */
  EBX = (pop32());
  /* 103a5f12 mov esp, ebp */
  ESP = (EBP);
  /* 103a5f14 pop ebp */
  EBP = (pop32());
  /* 103a5f15 ret  */
  ESPCHK(0x103a5dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f20 @ 0x103a5f20 (28 bytes, 11 insns) */
void f_103a5f20(void) {
  FTRACE(0x103a5f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5f20 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5f21 mov ebp, esp */
  EBP = (ESP);
  /* 103a5f23 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5f24 mov eax, dword ptr [0x103cea8c] */
  EAX = (r32((uint32_t)(0x103cea8c)));
  /* 103a5f29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a5f2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5f2f mov dword ptr [0x103cea8c], ecx */
  w32((uint32_t)(0x103cea8c), (ECX));
  /* 103a5f35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5f38 mov esp, ebp */
  ESP = (EBP);
  /* 103a5f3a pop ebp */
  EBP = (pop32());
  /* 103a5f3b ret  */
  ESPCHK(0x103a5f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f40 @ 0x103a5f40 (157 bytes, 59 insns) */
void f_103a5f40(void) {
  FTRACE(0x103a5f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5f40 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5f41 mov ebp, esp */
  EBP = (ESP);
  /* 103a5f43 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5f44 push ebx */
  push32((uint32_t)(EBX));
  /* 103a5f45 push esi */
  push32((uint32_t)(ESI));
  /* 103a5f46 push edi */
  push32((uint32_t)(EDI));
  /* 103a5f47 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a5f49 call 0x103a88f0 */
  push32(0x103a5f4eu); f_103a88f0();
  /* 103a5f4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5f51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5f54 push eax */
  push32((uint32_t)(EAX));
  /* 103a5f55 call 0x103a64f0 */
  push32(0x103a5f5au); f_103a64f0();
  /* 103a5f5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a5f5f je 0x103a5fcc */
  if (C.zf) goto L_103a5fcc;
  /* 103a5f61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5f64 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a5f67 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103a5f6a:;
  /* 103a5f6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5f6d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a5f70 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a5f75 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5f78 je 0x103a5fbd */
  if (C.zf) goto L_103a5fbd;
  /* 103a5f7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5f7d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5f81 je 0x103a5fbd */
  if (C.zf) goto L_103a5fbd;
  /* 103a5f83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5f86 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a5f89 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a5f8e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5f91 je 0x103a5fbd */
  if (C.zf) goto L_103a5fbd;
  /* 103a5f93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5f96 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5f9a je 0x103a5fbd */
  if (C.zf) goto L_103a5fbd;
  /* 103a5f9c push 0x103cba34 */
  push32((uint32_t)(0x103cba34u));
  /* 103a5fa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a5fa3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 103a5fa8 push 0x103cb78c */
  push32((uint32_t)(0x103cb78cu));
  /* 103a5fad push 2 */
  push32((uint32_t)(0x2u));
  /* 103a5faf call 0x103a3fb0 */
  push32(0x103a5fb4u); f_103a3fb0();
  /* 103a5fb4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5fb7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a5fba jne 0x103a5fbd */
  if (!C.zf) goto L_103a5fbd;
  /* 103a5fbc int3  */
  x86_unimpl("int3 @ 0x103a5fbc");
L_103a5fbd:;
  /* 103a5fbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a5fbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a5fc1 jne 0x103a5f6a */
  if (!C.zf) goto L_103a5f6a;
  /* 103a5fc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5fc6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a5fc9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_103a5fcc:;
  /* 103a5fcc push 9 */
  push32((uint32_t)(0x9u));
  /* 103a5fce call 0x103a8990 */
  push32(0x103a5fd3u); f_103a8990();
  /* 103a5fd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a5fd6 pop edi */
  EDI = (pop32());
  /* 103a5fd7 pop esi */
  ESI = (pop32());
  /* 103a5fd8 pop ebx */
  EBX = (pop32());
  /* 103a5fd9 mov esp, ebp */
  ESP = (EBP);
  /* 103a5fdb pop ebp */
  EBP = (pop32());
  /* 103a5fdc ret  */
  ESPCHK(0x103a5f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x103a5fe0 (28 bytes, 11 insns) */
void f_103a5fe0(void) {
  FTRACE(0x103a5fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a5fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a5fe1 mov ebp, esp */
  EBP = (ESP);
  /* 103a5fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a5fe4 mov eax, dword ptr [0x103cec90] */
  EAX = (r32((uint32_t)(0x103cec90)));
  /* 103a5fe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a5fec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a5fef mov dword ptr [0x103cec90], ecx */
  w32((uint32_t)(0x103cec90), (ECX));
  /* 103a5ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a5ff8 mov esp, ebp */
  ESP = (EBP);
  /* 103a5ffa pop ebp */
  EBP = (pop32());
  /* 103a5ffb ret  */
  ESPCHK(0x103a5fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006000 @ 0x103a6000 (136 bytes, 55 insns) */
void f_103a6000(void) {
  FTRACE(0x103a6000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6000 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6001 mov ebp, esp */
  EBP = (ESP);
  /* 103a6003 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6004 push ebx */
  push32((uint32_t)(EBX));
  /* 103a6005 push esi */
  push32((uint32_t)(ESI));
  /* 103a6006 push edi */
  push32((uint32_t)(EDI));
  /* 103a6007 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_103a600e:;
  /* 103a600e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a6011 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a6014 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6017 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103a601a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a601c je 0x103a607e */
  if (C.zf) goto L_103a607e;
  /* 103a601e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6021 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6023 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103a6025 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a6028 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a602e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6031 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6034 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103a6037 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6039 je 0x103a607c */
  if (C.zf) goto L_103a607c;
L_103a603b:;
  /* 103a603b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a603e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a6043 push eax */
  push32((uint32_t)(EAX));
  /* 103a6044 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6047 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a6049 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 103a604c push edx */
  push32((uint32_t)(EDX));
  /* 103a604d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6050 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6053 push eax */
  push32((uint32_t)(EAX));
  /* 103a6054 push 0x103cba78 */
  push32((uint32_t)(0x103cba78u));
  /* 103a6059 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a605b push 0 */
  push32((uint32_t)(0x0u));
  /* 103a605d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a605f push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6061 call 0x103a3fb0 */
  push32(0x103a6066u); f_103a3fb0();
  /* 103a6066 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6069 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a606c jne 0x103a606f */
  if (!C.zf) goto L_103a606f;
  /* 103a606e int3  */
  x86_unimpl("int3 @ 0x103a606e");
L_103a606f:;
  /* 103a606f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a6071 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a6073 jne 0x103a603b */
  if (!C.zf) goto L_103a603b;
  /* 103a6075 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103a607c:;
  /* 103a607c jmp 0x103a600e */
  goto L_103a600e;
L_103a607e:;
  /* 103a607e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6081 pop edi */
  EDI = (pop32());
  /* 103a6082 pop esi */
  ESI = (pop32());
  /* 103a6083 pop ebx */
  EBX = (pop32());
  /* 103a6084 mov esp, ebp */
  ESP = (EBP);
  /* 103a6086 pop ebp */
  EBP = (pop32());
  /* 103a6087 ret  */
  ESPCHK(0x103a6000u, _esp0);
  ESP += 4; return;
}

/* FUN_10006090 @ 0x103a6090 (863 bytes, 299 insns) [1 switch table(s)] */
void f_103a6090(void) {
  FTRACE(0x103a6090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6090 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6091 mov ebp, esp */
  EBP = (ESP);
  /* 103a6093 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6096 push ebx */
  push32((uint32_t)(EBX));
  /* 103a6097 push esi */
  push32((uint32_t)(ESI));
  /* 103a6098 push edi */
  push32((uint32_t)(EDI));
  /* 103a6099 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103a60a0 mov eax, dword ptr [0x103cea84] */
  EAX = (r32((uint32_t)(0x103cea84)));
  /* 103a60a5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 103a60a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a60aa jne 0x103a60b6 */
  if (!C.zf) goto L_103a60b6;
  /* 103a60ac mov eax, 1 */
  EAX = (0x1u);
  /* 103a60b1 jmp 0x103a63e8 */
  goto L_103a63e8;
L_103a60b6:;
  /* 103a60b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a60b8 call 0x103a88f0 */
  push32(0x103a60bdu); f_103a88f0();
  /* 103a60bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a60c0 call 0x103a90d0 */
  push32(0x103a60c5u); f_103a90d0();
  /* 103a60c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a60c8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a60cc je 0x103a61d9 */
  if (C.zf) goto L_103a61d9;
  /* 103a60d2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a60d6 je 0x103a61d9 */
  if (C.zf) goto L_103a61d9;
  /* 103a60dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a60df mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103a60e2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a60e5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a60e8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103a60eb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a60ef ja 0x103a61a2 */
  if ((!C.cf&&!C.zf)) goto L_103a61a2;
  /* 103a60f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a60f8 jmp dword ptr [eax*4 + 0x103a63ef] */
  switch (EAX) {
    case 0: goto L_103a617a;
    case 1: goto L_103a6152;
    case 2: goto L_103a612a;
    case 3: goto L_103a60ff;
    default: x86_unimpl("switch@0x103a60f8 out of table"); return;
  }
L_103a60ff:;
  /* 103a60ff push 0x103cbbcc */
  push32((uint32_t)(0x103cbbccu));
  /* 103a6104 push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a6109 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a610b push 0 */
  push32((uint32_t)(0x0u));
  /* 103a610d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a610f push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6111 call 0x103a3fb0 */
  push32(0x103a6116u); f_103a3fb0();
  /* 103a6116 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6119 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a611c jne 0x103a611f */
  if (!C.zf) goto L_103a611f;
  /* 103a611e int3  */
  x86_unimpl("int3 @ 0x103a611e");
L_103a611f:;
  /* 103a611f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a6121 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a6123 jne 0x103a60ff */
  if (!C.zf) goto L_103a60ff;
  /* 103a6125 jmp 0x103a61c8 */
  goto L_103a61c8;
L_103a612a:;
  /* 103a612a push 0x103cbba8 */
  push32((uint32_t)(0x103cbba8u));
  /* 103a612f push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a6134 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6136 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6138 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a613a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a613c call 0x103a3fb0 */
  push32(0x103a6141u); f_103a3fb0();
  /* 103a6141 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6144 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6147 jne 0x103a614a */
  if (!C.zf) goto L_103a614a;
  /* 103a6149 int3  */
  x86_unimpl("int3 @ 0x103a6149");
L_103a614a:;
  /* 103a614a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a614c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a614e jne 0x103a612a */
  if (!C.zf) goto L_103a612a;
  /* 103a6150 jmp 0x103a61c8 */
  goto L_103a61c8;
L_103a6152:;
  /* 103a6152 push 0x103cbb84 */
  push32((uint32_t)(0x103cbb84u));
  /* 103a6157 push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a615c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a615e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6160 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6162 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6164 call 0x103a3fb0 */
  push32(0x103a6169u); f_103a3fb0();
  /* 103a6169 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a616c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a616f jne 0x103a6172 */
  if (!C.zf) goto L_103a6172;
  /* 103a6171 int3  */
  x86_unimpl("int3 @ 0x103a6171");
L_103a6172:;
  /* 103a6172 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6176 jne 0x103a6152 */
  if (!C.zf) goto L_103a6152;
  /* 103a6178 jmp 0x103a61c8 */
  goto L_103a61c8;
L_103a617a:;
  /* 103a617a push 0x103cbb60 */
  push32((uint32_t)(0x103cbb60u));
  /* 103a617f push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a6184 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6186 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6188 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a618a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a618c call 0x103a3fb0 */
  push32(0x103a6191u); f_103a3fb0();
  /* 103a6191 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6194 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6197 jne 0x103a619a */
  if (!C.zf) goto L_103a619a;
  /* 103a6199 int3  */
  x86_unimpl("int3 @ 0x103a6199");
L_103a619a:;
  /* 103a619a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a619c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a619e jne 0x103a617a */
  if (!C.zf) goto L_103a617a;
  /* 103a61a0 jmp 0x103a61c8 */
  goto L_103a61c8;
L_103a61a2:;
  /* 103a61a2 push 0x103cbb34 */
  push32((uint32_t)(0x103cbb34u));
  /* 103a61a7 push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a61ac push 0 */
  push32((uint32_t)(0x0u));
  /* 103a61ae push 0 */
  push32((uint32_t)(0x0u));
  /* 103a61b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a61b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a61b4 call 0x103a3fb0 */
  push32(0x103a61b9u); f_103a3fb0();
  /* 103a61b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a61bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a61bf jne 0x103a61c2 */
  if (!C.zf) goto L_103a61c2;
  /* 103a61c1 int3  */
  x86_unimpl("int3 @ 0x103a61c1");
L_103a61c2:;
  /* 103a61c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a61c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a61c6 jne 0x103a61a2 */
  if (!C.zf) goto L_103a61a2;
L_103a61c8:;
  /* 103a61c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a61ca call 0x103a8990 */
  push32(0x103a61cfu); f_103a8990();
  /* 103a61cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a61d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a61d4 jmp 0x103a63e8 */
  goto L_103a63e8;
L_103a61d9:;
  /* 103a61d9 mov eax, dword ptr [0x103d0640] */
  EAX = (r32((uint32_t)(0x103d0640)));
  /* 103a61de mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a61e1 jmp 0x103a61eb */
  goto L_103a61eb;
L_103a61e3:;
  /* 103a61e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a61e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a61e8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103a61eb:;
  /* 103a61eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a61ef je 0x103a63db */
  if (C.zf) goto L_103a63db;
  /* 103a61f5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 103a61fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a61ff mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103a6202 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a6208 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a620b je 0x103a6230 */
  if (C.zf) goto L_103a6230;
  /* 103a620d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6210 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6214 je 0x103a6230 */
  if (C.zf) goto L_103a6230;
  /* 103a6216 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6219 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103a621c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a6222 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6225 je 0x103a6230 */
  if (C.zf) goto L_103a6230;
  /* 103a6227 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a622a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a622e jne 0x103a6248 */
  if (!C.zf) goto L_103a6248;
L_103a6230:;
  /* 103a6230 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6233 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103a6236 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a623c mov edx, dword ptr [ecx*4 + 0x103cea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103cea94)));
  /* 103a6243 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103a6246 jmp 0x103a624f */
  goto L_103a624f;
L_103a6248:;
  /* 103a6248 mov dword ptr [ebp - 0x14], 0x103cbb2c */
  w32((uint32_t)(EBP + -0x14), (0x103cbb2cu));
L_103a624f:;
  /* 103a624f push 4 */
  push32((uint32_t)(0x4u));
  /* 103a6251 mov al, byte ptr [0x103cea90] */
  AL = (r8((uint32_t)(0x103cea90)));
  /* 103a6256 push eax */
  push32((uint32_t)(EAX));
  /* 103a6257 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a625a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a625d push ecx */
  push32((uint32_t)(ECX));
  /* 103a625e call 0x103a6000 */
  push32(0x103a6263u); f_103a6000();
  /* 103a6263 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6266 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6268 jne 0x103a62a4 */
  if (!C.zf) goto L_103a62a4;
L_103a626a:;
  /* 103a626a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a626d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6270 push edx */
  push32((uint32_t)(EDX));
  /* 103a6271 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6274 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 103a6277 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6278 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a627b push edx */
  push32((uint32_t)(EDX));
  /* 103a627c push 0x103cba08 */
  push32((uint32_t)(0x103cba08u));
  /* 103a6281 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6283 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6285 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6287 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6289 call 0x103a3fb0 */
  push32(0x103a628eu); f_103a3fb0();
  /* 103a628e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6291 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6294 jne 0x103a6297 */
  if (!C.zf) goto L_103a6297;
  /* 103a6296 int3  */
  x86_unimpl("int3 @ 0x103a6296");
L_103a6297:;
  /* 103a6297 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6299 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a629b jne 0x103a626a */
  if (!C.zf) goto L_103a626a;
  /* 103a629d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_103a62a4:;
  /* 103a62a4 push 4 */
  push32((uint32_t)(0x4u));
  /* 103a62a6 mov cl, byte ptr [0x103cea90] */
  CL = (r8((uint32_t)(0x103cea90)));
  /* 103a62ac push ecx */
  push32((uint32_t)(ECX));
  /* 103a62ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a62b0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103a62b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a62b6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 103a62ba push edx */
  push32((uint32_t)(EDX));
  /* 103a62bb call 0x103a6000 */
  push32(0x103a62c0u); f_103a6000();
  /* 103a62c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a62c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a62c5 jne 0x103a6301 */
  if (!C.zf) goto L_103a6301;
L_103a62c7:;
  /* 103a62c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a62ca add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a62cd push eax */
  push32((uint32_t)(EAX));
  /* 103a62ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a62d1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103a62d4 push edx */
  push32((uint32_t)(EDX));
  /* 103a62d5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a62d8 push eax */
  push32((uint32_t)(EAX));
  /* 103a62d9 push 0x103cb9dc */
  push32((uint32_t)(0x103cb9dcu));
  /* 103a62de push 0 */
  push32((uint32_t)(0x0u));
  /* 103a62e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a62e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a62e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a62e6 call 0x103a3fb0 */
  push32(0x103a62ebu); f_103a3fb0();
  /* 103a62eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a62ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a62f1 jne 0x103a62f4 */
  if (!C.zf) goto L_103a62f4;
  /* 103a62f3 int3  */
  x86_unimpl("int3 @ 0x103a62f3");
L_103a62f4:;
  /* 103a62f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a62f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a62f8 jne 0x103a62c7 */
  if (!C.zf) goto L_103a62c7;
  /* 103a62fa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_103a6301:;
  /* 103a6301 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6304 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6308 jne 0x103a635a */
  if (!C.zf) goto L_103a635a;
  /* 103a630a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a630d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a6310 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6311 mov dl, byte ptr [0x103cea91] */
  DL = (r8((uint32_t)(0x103cea91)));
  /* 103a6317 push edx */
  push32((uint32_t)(EDX));
  /* 103a6318 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a631b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a631e push eax */
  push32((uint32_t)(EAX));
  /* 103a631f call 0x103a6000 */
  push32(0x103a6324u); f_103a6000();
  /* 103a6324 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6327 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6329 jne 0x103a635a */
  if (!C.zf) goto L_103a635a;
L_103a632b:;
  /* 103a632b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a632e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6331 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6332 push 0x103cbb00 */
  push32((uint32_t)(0x103cbb00u));
  /* 103a6337 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6339 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a633b push 0 */
  push32((uint32_t)(0x0u));
  /* 103a633d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a633f call 0x103a3fb0 */
  push32(0x103a6344u); f_103a3fb0();
  /* 103a6344 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6347 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a634a jne 0x103a634d */
  if (!C.zf) goto L_103a634d;
  /* 103a634c int3  */
  x86_unimpl("int3 @ 0x103a634c");
L_103a634d:;
  /* 103a634d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a634f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a6351 jne 0x103a632b */
  if (!C.zf) goto L_103a632b;
  /* 103a6353 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_103a635a:;
  /* 103a635a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a635e jne 0x103a63d6 */
  if (!C.zf) goto L_103a63d6;
  /* 103a6360 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6363 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6367 je 0x103a639c */
  if (C.zf) goto L_103a639c;
L_103a6369:;
  /* 103a6369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a636c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 103a636f push edx */
  push32((uint32_t)(EDX));
  /* 103a6370 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6373 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103a6376 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6377 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a637a push edx */
  push32((uint32_t)(EDX));
  /* 103a637b push 0x103cbae0 */
  push32((uint32_t)(0x103cbae0u));
  /* 103a6380 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6382 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6384 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6386 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6388 call 0x103a3fb0 */
  push32(0x103a638du); f_103a3fb0();
  /* 103a638d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6390 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6393 jne 0x103a6396 */
  if (!C.zf) goto L_103a6396;
  /* 103a6395 int3  */
  x86_unimpl("int3 @ 0x103a6395");
L_103a6396:;
  /* 103a6396 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6398 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a639a jne 0x103a6369 */
  if (!C.zf) goto L_103a6369;
L_103a639c:;
  /* 103a639c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a639f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103a63a2 push edx */
  push32((uint32_t)(EDX));
  /* 103a63a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a63a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a63a9 push eax */
  push32((uint32_t)(EAX));
  /* 103a63aa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a63ad push ecx */
  push32((uint32_t)(ECX));
  /* 103a63ae push 0x103cbab4 */
  push32((uint32_t)(0x103cbab4u));
  /* 103a63b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a63b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a63b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a63b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a63bb call 0x103a3fb0 */
  push32(0x103a63c0u); f_103a3fb0();
  /* 103a63c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a63c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a63c6 jne 0x103a63c9 */
  if (!C.zf) goto L_103a63c9;
  /* 103a63c8 int3  */
  x86_unimpl("int3 @ 0x103a63c8");
L_103a63c9:;
  /* 103a63c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a63cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a63cd jne 0x103a639c */
  if (!C.zf) goto L_103a639c;
  /* 103a63cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103a63d6:;
  /* 103a63d6 jmp 0x103a61e3 */
  goto L_103a61e3;
L_103a63db:;
  /* 103a63db push 9 */
  push32((uint32_t)(0x9u));
  /* 103a63dd call 0x103a8990 */
  push32(0x103a63e2u); f_103a8990();
  /* 103a63e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a63e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103a63e8:;
  /* 103a63e8 pop edi */
  EDI = (pop32());
  /* 103a63e9 pop esi */
  ESI = (pop32());
  /* 103a63ea pop ebx */
  EBX = (pop32());
  /* 103a63eb mov esp, ebp */
  ESP = (EBP);
  /* 103a63ed pop ebp */
  EBP = (pop32());
  /* 103a63ee ret  */
  ESPCHK(0x103a6090u, _esp0);
  ESP += 4; return;
}

/* FUN_10006400 @ 0x103a6400 (34 bytes, 13 insns) */
void f_103a6400(void) {
  FTRACE(0x103a6400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6400 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6401 mov ebp, esp */
  EBP = (ESP);
  /* 103a6403 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6404 mov eax, dword ptr [0x103cea84] */
  EAX = (r32((uint32_t)(0x103cea84)));
  /* 103a6409 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a640c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6410 je 0x103a641b */
  if (C.zf) goto L_103a641b;
  /* 103a6412 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6415 mov dword ptr [0x103cea84], ecx */
  w32((uint32_t)(0x103cea84), (ECX));
L_103a641b:;
  /* 103a641b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a641e mov esp, ebp */
  ESP = (EBP);
  /* 103a6420 pop ebp */
  EBP = (pop32());
  /* 103a6421 ret  */
  ESPCHK(0x103a6400u, _esp0);
  ESP += 4; return;
}

/* FUN_10006430 @ 0x103a6430 (103 bytes, 38 insns) */
void f_103a6430(void) {
  FTRACE(0x103a6430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6430 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6431 mov ebp, esp */
  EBP = (ESP);
  /* 103a6433 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6434 mov eax, dword ptr [0x103cea84] */
  EAX = (r32((uint32_t)(0x103cea84)));
  /* 103a6439 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 103a643c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a643e jne 0x103a6442 */
  if (!C.zf) goto L_103a6442;
  /* 103a6440 jmp 0x103a6493 */
  goto L_103a6493;
L_103a6442:;
  /* 103a6442 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a6444 call 0x103a88f0 */
  push32(0x103a6449u); f_103a88f0();
  /* 103a6449 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a644c mov ecx, dword ptr [0x103d0640] */
  ECX = (r32((uint32_t)(0x103d0640)));
  /* 103a6452 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a6455 jmp 0x103a645f */
  goto L_103a645f;
L_103a6457:;
  /* 103a6457 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a645a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a645c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a645f:;
  /* 103a645f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6463 je 0x103a6489 */
  if (C.zf) goto L_103a6489;
  /* 103a6465 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6468 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103a646b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a6471 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6474 jne 0x103a6487 */
  if (!C.zf) goto L_103a6487;
  /* 103a6476 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a6479 push eax */
  push32((uint32_t)(EAX));
  /* 103a647a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a647d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6480 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6481 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x103a6484u);
  /* 103a6484 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a6487:;
  /* 103a6487 jmp 0x103a6457 */
  goto L_103a6457;
L_103a6489:;
  /* 103a6489 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a648b call 0x103a8990 */
  push32(0x103a6490u); f_103a8990();
  /* 103a6490 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a6493:;
  /* 103a6493 mov esp, ebp */
  ESP = (EBP);
  /* 103a6495 pop ebp */
  EBP = (pop32());
  /* 103a6496 ret  */
  ESPCHK(0x103a6430u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x103a64a0 (75 bytes, 28 insns) */
void f_103a64a0(void) {
  FTRACE(0x103a64a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a64a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a64a1 mov ebp, esp */
  EBP = (ESP);
  /* 103a64a3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a64a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a64a8 je 0x103a64dd */
  if (C.zf) goto L_103a64dd;
  /* 103a64aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a64ad push eax */
  push32((uint32_t)(EAX));
  /* 103a64ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a64b1 push ecx */
  push32((uint32_t)(ECX));
  /* 103a64b2 call dword ptr [0x103d3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3370))), 0x103a64b8u);
  /* 103a64b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a64ba jne 0x103a64dd */
  if (!C.zf) goto L_103a64dd;
  /* 103a64bc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a64c0 je 0x103a64d4 */
  if (C.zf) goto L_103a64d4;
  /* 103a64c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a64c5 push edx */
  push32((uint32_t)(EDX));
  /* 103a64c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a64c9 push eax */
  push32((uint32_t)(EAX));
  /* 103a64ca call dword ptr [0x103d3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3390))), 0x103a64d0u);
  /* 103a64d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a64d2 jne 0x103a64dd */
  if (!C.zf) goto L_103a64dd;
L_103a64d4:;
  /* 103a64d4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103a64db jmp 0x103a64e4 */
  goto L_103a64e4;
L_103a64dd:;
  /* 103a64dd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103a64e4:;
  /* 103a64e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a64e7 mov esp, ebp */
  ESP = (EBP);
  /* 103a64e9 pop ebp */
  EBP = (pop32());
  /* 103a64ea ret  */
  ESPCHK(0x103a64a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064f0 @ 0x103a64f0 (134 bytes, 50 insns) */
void f_103a64f0(void) {
  FTRACE(0x103a64f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a64f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a64f1 mov ebp, esp */
  EBP = (ESP);
  /* 103a64f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a64f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a64f8 jne 0x103a64fe */
  if (!C.zf) goto L_103a64fe;
  /* 103a64fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a64fc jmp 0x103a6572 */
  goto L_103a6572;
L_103a64fe:;
  /* 103a64fe push 1 */
  push32((uint32_t)(0x1u));
  /* 103a6500 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103a6502 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6505 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6508 push eax */
  push32((uint32_t)(EAX));
  /* 103a6509 call 0x103a64a0 */
  push32(0x103a650eu); f_103a64a0();
  /* 103a650e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6511 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6513 jne 0x103a6519 */
  if (!C.zf) goto L_103a6519;
  /* 103a6515 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6517 jmp 0x103a6572 */
  goto L_103a6572;
L_103a6519:;
  /* 103a6519 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a651c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a651f push ecx */
  push32((uint32_t)(ECX));
  /* 103a6520 call 0x103a91f0 */
  push32(0x103a6525u); f_103a91f0();
  /* 103a6525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6528 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a652b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a652f je 0x103a6546 */
  if (C.zf) goto L_103a6546;
  /* 103a6531 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6534 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6537 push edx */
  push32((uint32_t)(EDX));
  /* 103a6538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a653b push eax */
  push32((uint32_t)(EAX));
  /* 103a653c call 0x103a9250 */
  push32(0x103a6541u); f_103a9250();
  /* 103a6541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6544 jmp 0x103a6572 */
  goto L_103a6572;
L_103a6546:;
  /* 103a6546 mov ecx, dword ptr [0x103d05f4] */
  ECX = (r32((uint32_t)(0x103d05f4)));
  /* 103a654c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 103a6552 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a6554 je 0x103a655d */
  if (C.zf) goto L_103a655d;
  /* 103a6556 mov eax, 1 */
  EAX = (0x1u);
  /* 103a655b jmp 0x103a6572 */
  goto L_103a6572;
L_103a655d:;
  /* 103a655d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6560 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6563 push edx */
  push32((uint32_t)(EDX));
  /* 103a6564 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6566 mov eax, dword ptr [0x103d1f8c] */
  EAX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a656b push eax */
  push32((uint32_t)(EAX));
  /* 103a656c call dword ptr [0x103d3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3398))), 0x103a6572u);
L_103a6572:;
  /* 103a6572 mov esp, ebp */
  ESP = (EBP);
  /* 103a6574 pop ebp */
  EBP = (pop32());
  /* 103a6575 ret  */
  ESPCHK(0x103a64f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006580 @ 0x103a6580 (227 bytes, 80 insns) */
void f_103a6580(void) {
  FTRACE(0x103a6580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6580 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6581 mov ebp, esp */
  EBP = (ESP);
  /* 103a6583 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6587 push eax */
  push32((uint32_t)(EAX));
  /* 103a6588 call 0x103a64f0 */
  push32(0x103a658du); f_103a64f0();
  /* 103a658d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6590 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6592 jne 0x103a659b */
  if (!C.zf) goto L_103a659b;
  /* 103a6594 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6596 jmp 0x103a665f */
  goto L_103a665f;
L_103a659b:;
  /* 103a659b push 9 */
  push32((uint32_t)(0x9u));
  /* 103a659d call 0x103a88f0 */
  push32(0x103a65a2u); f_103a88f0();
  /* 103a65a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a65a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a65a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a65ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a65ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a65b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a65b4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a65b9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a65bc je 0x103a65e0 */
  if (C.zf) goto L_103a65e0;
  /* 103a65be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a65c1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a65c5 je 0x103a65e0 */
  if (C.zf) goto L_103a65e0;
  /* 103a65c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a65ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a65cd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a65d2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a65d5 je 0x103a65e0 */
  if (C.zf) goto L_103a65e0;
  /* 103a65d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a65da cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a65de jne 0x103a6653 */
  if (!C.zf) goto L_103a6653;
L_103a65e0:;
  /* 103a65e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a65e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a65e5 push edx */
  push32((uint32_t)(EDX));
  /* 103a65e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a65e9 push eax */
  push32((uint32_t)(EAX));
  /* 103a65ea call 0x103a64a0 */
  push32(0x103a65efu); f_103a64a0();
  /* 103a65ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a65f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a65f4 je 0x103a6653 */
  if (C.zf) goto L_103a6653;
  /* 103a65f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a65f9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103a65fc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a65ff jne 0x103a6653 */
  if (!C.zf) goto L_103a6653;
  /* 103a6601 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6604 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 103a6607 cmp ecx, dword ptr [0x103cea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103cea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a660d jg 0x103a6653 */
  if ((!C.zf&&C.sf==C.of)) goto L_103a6653;
  /* 103a660f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6613 je 0x103a6620 */
  if (C.zf) goto L_103a6620;
  /* 103a6615 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a6618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a661b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 103a661e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103a6620:;
  /* 103a6620 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6624 je 0x103a6631 */
  if (C.zf) goto L_103a6631;
  /* 103a6626 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a6629 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a662c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103a662f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103a6631:;
  /* 103a6631 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6635 je 0x103a6642 */
  if (C.zf) goto L_103a6642;
  /* 103a6637 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a663a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a663d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103a6640 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103a6642:;
  /* 103a6642 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a6644 call 0x103a8990 */
  push32(0x103a6649u); f_103a8990();
  /* 103a6649 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a664c mov eax, 1 */
  EAX = (0x1u);
  /* 103a6651 jmp 0x103a665f */
  goto L_103a665f;
L_103a6653:;
  /* 103a6653 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a6655 call 0x103a8990 */
  push32(0x103a665au); f_103a8990();
  /* 103a665a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a665d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103a665f:;
  /* 103a665f mov esp, ebp */
  ESP = (EBP);
  /* 103a6661 pop ebp */
  EBP = (pop32());
  /* 103a6662 ret  */
  ESPCHK(0x103a6580u, _esp0);
  ESP += 4; return;
}

/* FUN_10006670 @ 0x103a6670 (28 bytes, 11 insns) */
void f_103a6670(void) {
  FTRACE(0x103a6670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6670 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6671 mov ebp, esp */
  EBP = (ESP);
  /* 103a6673 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6674 mov eax, dword ptr [0x103d1f98] */
  EAX = (r32((uint32_t)(0x103d1f98)));
  /* 103a6679 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a667c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a667f mov dword ptr [0x103d1f98], ecx */
  w32((uint32_t)(0x103d1f98), (ECX));
  /* 103a6685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6688 mov esp, ebp */
  ESP = (EBP);
  /* 103a668a pop ebp */
  EBP = (pop32());
  /* 103a668b ret  */
  ESPCHK(0x103a6670u, _esp0);
  ESP += 4; return;
}

/* FUN_10006690 @ 0x103a6690 (362 bytes, 116 insns) */
void f_103a6690(void) {
  FTRACE(0x103a6690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6690 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6691 mov ebp, esp */
  EBP = (ESP);
  /* 103a6693 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6696 push ebx */
  push32((uint32_t)(EBX));
  /* 103a6697 push esi */
  push32((uint32_t)(ESI));
  /* 103a6698 push edi */
  push32((uint32_t)(EDI));
  /* 103a6699 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a669d jne 0x103a66ca */
  if (!C.zf) goto L_103a66ca;
L_103a669f:;
  /* 103a669f push 0x103cbc14 */
  push32((uint32_t)(0x103cbc14u));
  /* 103a66a4 push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a66a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a66ab push 0 */
  push32((uint32_t)(0x0u));
  /* 103a66ad push 0 */
  push32((uint32_t)(0x0u));
  /* 103a66af push 0 */
  push32((uint32_t)(0x0u));
  /* 103a66b1 call 0x103a3fb0 */
  push32(0x103a66b6u); f_103a3fb0();
  /* 103a66b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a66b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a66bc jne 0x103a66bf */
  if (!C.zf) goto L_103a66bf;
  /* 103a66be int3  */
  x86_unimpl("int3 @ 0x103a66be");
L_103a66bf:;
  /* 103a66bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a66c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a66c3 jne 0x103a669f */
  if (!C.zf) goto L_103a669f;
  /* 103a66c5 jmp 0x103a67f3 */
  goto L_103a67f3;
L_103a66ca:;
  /* 103a66ca push 9 */
  push32((uint32_t)(0x9u));
  /* 103a66cc call 0x103a88f0 */
  push32(0x103a66d1u); f_103a88f0();
  /* 103a66d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a66d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a66d7 mov edx, dword ptr [0x103d0640] */
  EDX = (r32((uint32_t)(0x103d0640)));
  /* 103a66dd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103a66df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103a66e6 jmp 0x103a66f1 */
  goto L_103a66f1;
L_103a66e8:;
  /* 103a66e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a66eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a66ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a66f1:;
  /* 103a66f1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a66f5 jge 0x103a6715 */
  if ((C.sf==C.of)) goto L_103a6715;
  /* 103a66f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a66fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a66fd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 103a6705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6708 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a670b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 103a6713 jmp 0x103a66e8 */
  goto L_103a66e8;
L_103a6715:;
  /* 103a6715 mov edx, dword ptr [0x103d0640] */
  EDX = (r32((uint32_t)(0x103d0640)));
  /* 103a671b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103a671e jmp 0x103a6728 */
  goto L_103a6728;
L_103a6720:;
  /* 103a6720 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6723 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a6725 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103a6728:;
  /* 103a6728 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a672c je 0x103a67d1 */
  if (C.zf) goto L_103a67d1;
  /* 103a6732 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6735 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a6738 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a673d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a673f jl 0x103a67a7 */
  if ((C.sf!=C.of)) goto L_103a67a7;
  /* 103a6741 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6744 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103a6747 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a674d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6750 jge 0x103a67a7 */
  if ((C.sf==C.of)) goto L_103a67a7;
  /* 103a6752 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6755 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103a6758 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a675e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6761 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 103a6765 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6768 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a676b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103a676e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a6774 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6777 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 103a677b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a677e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a6781 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a6786 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6789 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 103a678d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6790 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6793 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6796 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 103a6799 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a679e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a67a1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 103a67a5 jmp 0x103a67cc */
  goto L_103a67cc;
L_103a67a7:;
  /* 103a67a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a67aa push edx */
  push32((uint32_t)(EDX));
  /* 103a67ab push 0x103cbbf0 */
  push32((uint32_t)(0x103cbbf0u));
  /* 103a67b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a67b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a67b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a67b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a67b8 call 0x103a3fb0 */
  push32(0x103a67bdu); f_103a3fb0();
  /* 103a67bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a67c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a67c3 jne 0x103a67c6 */
  if (!C.zf) goto L_103a67c6;
  /* 103a67c5 int3  */
  x86_unimpl("int3 @ 0x103a67c5");
L_103a67c6:;
  /* 103a67c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a67c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a67ca jne 0x103a67a7 */
  if (!C.zf) goto L_103a67a7;
L_103a67cc:;
  /* 103a67cc jmp 0x103a6720 */
  goto L_103a6720;
L_103a67d1:;
  /* 103a67d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a67d4 mov edx, dword ptr [0x103d0648] */
  EDX = (r32((uint32_t)(0x103d0648)));
  /* 103a67da mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 103a67dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a67e0 mov ecx, dword ptr [0x103d063c] */
  ECX = (r32((uint32_t)(0x103d063c)));
  /* 103a67e6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 103a67e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a67eb call 0x103a8990 */
  push32(0x103a67f0u); f_103a8990();
  /* 103a67f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a67f3:;
  /* 103a67f3 pop edi */
  EDI = (pop32());
  /* 103a67f4 pop esi */
  ESI = (pop32());
  /* 103a67f5 pop ebx */
  EBX = (pop32());
  /* 103a67f6 mov esp, ebp */
  ESP = (EBP);
  /* 103a67f8 pop ebp */
  EBP = (pop32());
  /* 103a67f9 ret  */
  ESPCHK(0x103a6690u, _esp0);
  ESP += 4; return;
}

/* FUN_10006800 @ 0x103a6800 (291 bytes, 95 insns) */
void f_103a6800(void) {
  FTRACE(0x103a6800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6800 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6801 mov ebp, esp */
  EBP = (ESP);
  /* 103a6803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6806 push ebx */
  push32((uint32_t)(EBX));
  /* 103a6807 push esi */
  push32((uint32_t)(ESI));
  /* 103a6808 push edi */
  push32((uint32_t)(EDI));
  /* 103a6809 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103a6810 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6814 je 0x103a6822 */
  if (C.zf) goto L_103a6822;
  /* 103a6816 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a681a je 0x103a6822 */
  if (C.zf) goto L_103a6822;
  /* 103a681c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6820 jne 0x103a6850 */
  if (!C.zf) goto L_103a6850;
L_103a6822:;
  /* 103a6822 push 0x103cbc3c */
  push32((uint32_t)(0x103cbc3cu));
  /* 103a6827 push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a682c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a682e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6830 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6832 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6834 call 0x103a3fb0 */
  push32(0x103a6839u); f_103a3fb0();
  /* 103a6839 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a683c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a683f jne 0x103a6842 */
  if (!C.zf) goto L_103a6842;
  /* 103a6841 int3  */
  x86_unimpl("int3 @ 0x103a6841");
L_103a6842:;
  /* 103a6842 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6844 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6846 jne 0x103a6822 */
  if (!C.zf) goto L_103a6822;
  /* 103a6848 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a684b jmp 0x103a691c */
  goto L_103a691c;
L_103a6850:;
  /* 103a6850 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103a6857 jmp 0x103a6862 */
  goto L_103a6862;
L_103a6859:;
  /* 103a6859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a685c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a685f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103a6862:;
  /* 103a6862 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6866 jge 0x103a68ec */
  if ((C.sf==C.of)) goto L_103a68ec;
  /* 103a686c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a686f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a6872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6875 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103a6878 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 103a687c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6880 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6883 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6886 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 103a688a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a688d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a6890 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6893 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103a6896 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 103a689a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a689e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a68a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a68a4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 103a68a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a68ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a68ae cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a68b3 jne 0x103a68c2 */
  if (!C.zf) goto L_103a68c2;
  /* 103a68b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a68b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a68bb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a68c0 je 0x103a68e7 */
  if (C.zf) goto L_103a68e7;
L_103a68c2:;
  /* 103a68c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a68c6 je 0x103a68e7 */
  if (C.zf) goto L_103a68e7;
  /* 103a68c8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a68cc jne 0x103a68e0 */
  if (!C.zf) goto L_103a68e0;
  /* 103a68ce cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a68d2 jne 0x103a68e7 */
  if (!C.zf) goto L_103a68e7;
  /* 103a68d4 mov eax, dword ptr [0x103cea84] */
  EAX = (r32((uint32_t)(0x103cea84)));
  /* 103a68d9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 103a68dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a68de je 0x103a68e7 */
  if (C.zf) goto L_103a68e7;
L_103a68e0:;
  /* 103a68e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_103a68e7:;
  /* 103a68e7 jmp 0x103a6859 */
  goto L_103a6859;
L_103a68ec:;
  /* 103a68ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a68ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a68f2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 103a68f5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a68f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a68fb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 103a68fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a6901 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a6904 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 103a6907 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a690a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a690d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 103a6910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6913 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103a6919 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103a691c:;
  /* 103a691c pop edi */
  EDI = (pop32());
  /* 103a691d pop esi */
  ESI = (pop32());
  /* 103a691e pop ebx */
  EBX = (pop32());
  /* 103a691f mov esp, ebp */
  ESP = (EBP);
  /* 103a6921 pop ebp */
  EBP = (pop32());
  /* 103a6922 ret  */
  ESPCHK(0x103a6800u, _esp0);
  ESP += 4; return;
}

/* FUN_10006930 @ 0x103a6930 (697 bytes, 253 insns) */
void f_103a6930(void) {
  FTRACE(0x103a6930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6930 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6931 mov ebp, esp */
  EBP = (ESP);
  /* 103a6933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6936 push ebx */
  push32((uint32_t)(EBX));
  /* 103a6937 push esi */
  push32((uint32_t)(ESI));
  /* 103a6938 push edi */
  push32((uint32_t)(EDI));
  /* 103a6939 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103a6940 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a6942 call 0x103a88f0 */
  push32(0x103a6947u); f_103a88f0();
  /* 103a6947 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a694a:;
  /* 103a694a push 0x103cbd34 */
  push32((uint32_t)(0x103cbd34u));
  /* 103a694f push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a6954 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6956 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6958 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a695a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a695c call 0x103a3fb0 */
  push32(0x103a6961u); f_103a3fb0();
  /* 103a6961 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6964 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6967 jne 0x103a696a */
  if (!C.zf) goto L_103a696a;
  /* 103a6969 int3  */
  x86_unimpl("int3 @ 0x103a6969");
L_103a696a:;
  /* 103a696a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a696c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a696e jne 0x103a694a */
  if (!C.zf) goto L_103a694a;
  /* 103a6970 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6974 je 0x103a697e */
  if (C.zf) goto L_103a697e;
  /* 103a6976 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6979 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a697b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103a697e:;
  /* 103a697e mov eax, dword ptr [0x103d0640] */
  EAX = (r32((uint32_t)(0x103d0640)));
  /* 103a6983 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a6986 jmp 0x103a6990 */
  goto L_103a6990;
L_103a6988:;
  /* 103a6988 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a698b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a698d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103a6990:;
  /* 103a6990 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6994 je 0x103a6bb2 */
  if (C.zf) goto L_103a6bb2;
  /* 103a699a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a699d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a69a0 je 0x103a6bb2 */
  if (C.zf) goto L_103a6bb2;
  /* 103a69a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a69a9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103a69ac and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a69b2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a69b5 je 0x103a69e4 */
  if (C.zf) goto L_103a69e4;
  /* 103a69b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a69ba mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103a69bd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a69c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a69c5 je 0x103a69e4 */
  if (C.zf) goto L_103a69e4;
  /* 103a69c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a69ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a69cd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a69d2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a69d5 jne 0x103a69e9 */
  if (!C.zf) goto L_103a69e9;
  /* 103a69d7 mov ecx, dword ptr [0x103cea84] */
  ECX = (r32((uint32_t)(0x103cea84)));
  /* 103a69dd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 103a69e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a69e2 jne 0x103a69e9 */
  if (!C.zf) goto L_103a69e9;
L_103a69e4:;
  /* 103a69e4 jmp 0x103a6bad */
  goto L_103a6bad;
L_103a69e9:;
  /* 103a69e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a69ec cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a69f0 je 0x103a6a62 */
  if (C.zf) goto L_103a6a62;
  /* 103a69f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a69f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a69f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a69f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103a69fc push ecx */
  push32((uint32_t)(ECX));
  /* 103a69fd call 0x103a64a0 */
  push32(0x103a6a02u); f_103a64a0();
  /* 103a6a02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6a05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6a07 jne 0x103a6a33 */
  if (!C.zf) goto L_103a6a33;
L_103a6a09:;
  /* 103a6a09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6a0c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103a6a0f push eax */
  push32((uint32_t)(EAX));
  /* 103a6a10 push 0x103cbd20 */
  push32((uint32_t)(0x103cbd20u));
  /* 103a6a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a17 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a1d call 0x103a3fb0 */
  push32(0x103a6a22u); f_103a3fb0();
  /* 103a6a22 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6a25 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6a28 jne 0x103a6a2b */
  if (!C.zf) goto L_103a6a2b;
  /* 103a6a2a int3  */
  x86_unimpl("int3 @ 0x103a6a2a");
L_103a6a2b:;
  /* 103a6a2b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a6a2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a6a2f jne 0x103a6a09 */
  if (!C.zf) goto L_103a6a09;
  /* 103a6a31 jmp 0x103a6a62 */
  goto L_103a6a62;
L_103a6a33:;
  /* 103a6a33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6a36 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103a6a39 push eax */
  push32((uint32_t)(EAX));
  /* 103a6a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6a3d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103a6a40 push edx */
  push32((uint32_t)(EDX));
  /* 103a6a41 push 0x103cbd14 */
  push32((uint32_t)(0x103cbd14u));
  /* 103a6a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a4e call 0x103a3fb0 */
  push32(0x103a6a53u); f_103a3fb0();
  /* 103a6a53 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6a56 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6a59 jne 0x103a6a5c */
  if (!C.zf) goto L_103a6a5c;
  /* 103a6a5b int3  */
  x86_unimpl("int3 @ 0x103a6a5b");
L_103a6a5c:;
  /* 103a6a5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6a5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6a60 jne 0x103a6a33 */
  if (!C.zf) goto L_103a6a33;
L_103a6a62:;
  /* 103a6a62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6a65 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103a6a68 push edx */
  push32((uint32_t)(EDX));
  /* 103a6a69 push 0x103cbd0c */
  push32((uint32_t)(0x103cbd0cu));
  /* 103a6a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6a76 call 0x103a3fb0 */
  push32(0x103a6a7bu); f_103a3fb0();
  /* 103a6a7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6a7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6a81 jne 0x103a6a84 */
  if (!C.zf) goto L_103a6a84;
  /* 103a6a83 int3  */
  x86_unimpl("int3 @ 0x103a6a83");
L_103a6a84:;
  /* 103a6a84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6a86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6a88 jne 0x103a6a62 */
  if (!C.zf) goto L_103a6a62;
  /* 103a6a8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6a8d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103a6a90 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a6a96 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6a99 jne 0x103a6b0c */
  if (!C.zf) goto L_103a6b0c;
L_103a6a9b:;
  /* 103a6a9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6a9e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a6aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6aa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6aa5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a6aa8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103a6aab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a6ab0 push eax */
  push32((uint32_t)(EAX));
  /* 103a6ab1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6ab4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6ab8 push 0x103cbcd8 */
  push32((uint32_t)(0x103cbcd8u));
  /* 103a6abd push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6abf push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6ac5 call 0x103a3fb0 */
  push32(0x103a6acau); f_103a3fb0();
  /* 103a6aca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6acd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6ad0 jne 0x103a6ad3 */
  if (!C.zf) goto L_103a6ad3;
  /* 103a6ad2 int3  */
  x86_unimpl("int3 @ 0x103a6ad2");
L_103a6ad3:;
  /* 103a6ad3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a6ad5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a6ad7 jne 0x103a6a9b */
  if (!C.zf) goto L_103a6a9b;
  /* 103a6ad9 cmp dword ptr [0x103d1f98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d1f98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6ae0 je 0x103a6afb */
  if (C.zf) goto L_103a6afb;
  /* 103a6ae2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6ae5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a6ae8 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6ae9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6aec add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6aef push edx */
  push32((uint32_t)(EDX));
  /* 103a6af0 call dword ptr [0x103d1f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d1f98))), 0x103a6af6u);
  /* 103a6af6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6af9 jmp 0x103a6b07 */
  goto L_103a6b07;
L_103a6afb:;
  /* 103a6afb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6afe push eax */
  push32((uint32_t)(EAX));
  /* 103a6aff call 0x103a6bf0 */
  push32(0x103a6b04u); f_103a6bf0();
  /* 103a6b04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a6b07:;
  /* 103a6b07 jmp 0x103a6bad */
  goto L_103a6bad;
L_103a6b0c:;
  /* 103a6b0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6b0f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6b13 jne 0x103a6b52 */
  if (!C.zf) goto L_103a6b52;
L_103a6b15:;
  /* 103a6b15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6b18 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103a6b1b push eax */
  push32((uint32_t)(EAX));
  /* 103a6b1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6b1f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6b22 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6b23 push 0x103cbcb0 */
  push32((uint32_t)(0x103cbcb0u));
  /* 103a6b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6b30 call 0x103a3fb0 */
  push32(0x103a6b35u); f_103a3fb0();
  /* 103a6b35 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6b38 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6b3b jne 0x103a6b3e */
  if (!C.zf) goto L_103a6b3e;
  /* 103a6b3d int3  */
  x86_unimpl("int3 @ 0x103a6b3d");
L_103a6b3e:;
  /* 103a6b3e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a6b40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a6b42 jne 0x103a6b15 */
  if (!C.zf) goto L_103a6b15;
  /* 103a6b44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6b47 push eax */
  push32((uint32_t)(EAX));
  /* 103a6b48 call 0x103a6bf0 */
  push32(0x103a6b4du); f_103a6bf0();
  /* 103a6b4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6b50 jmp 0x103a6bad */
  goto L_103a6bad;
L_103a6b52:;
  /* 103a6b52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6b55 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 103a6b58 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a6b5e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6b61 jne 0x103a6bad */
  if (!C.zf) goto L_103a6bad;
L_103a6b63:;
  /* 103a6b63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6b66 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103a6b69 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6b6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6b6d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 103a6b70 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103a6b73 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a6b78 push eax */
  push32((uint32_t)(EAX));
  /* 103a6b79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6b7c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6b7f push ecx */
  push32((uint32_t)(ECX));
  /* 103a6b80 push 0x103cbc7c */
  push32((uint32_t)(0x103cbc7cu));
  /* 103a6b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6b8d call 0x103a3fb0 */
  push32(0x103a6b92u); f_103a3fb0();
  /* 103a6b92 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6b95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6b98 jne 0x103a6b9b */
  if (!C.zf) goto L_103a6b9b;
  /* 103a6b9a int3  */
  x86_unimpl("int3 @ 0x103a6b9a");
L_103a6b9b:;
  /* 103a6b9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a6b9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a6b9f jne 0x103a6b63 */
  if (!C.zf) goto L_103a6b63;
  /* 103a6ba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6ba4 push eax */
  push32((uint32_t)(EAX));
  /* 103a6ba5 call 0x103a6bf0 */
  push32(0x103a6baau); f_103a6bf0();
  /* 103a6baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a6bad:;
  /* 103a6bad jmp 0x103a6988 */
  goto L_103a6988;
L_103a6bb2:;
  /* 103a6bb2 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a6bb4 call 0x103a8990 */
  push32(0x103a6bb9u); f_103a8990();
  /* 103a6bb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a6bbc:;
  /* 103a6bbc push 0x103cbc64 */
  push32((uint32_t)(0x103cbc64u));
  /* 103a6bc1 push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a6bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6bca push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6bcc push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6bce call 0x103a3fb0 */
  push32(0x103a6bd3u); f_103a3fb0();
  /* 103a6bd3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6bd6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6bd9 jne 0x103a6bdc */
  if (!C.zf) goto L_103a6bdc;
  /* 103a6bdb int3  */
  x86_unimpl("int3 @ 0x103a6bdb");
L_103a6bdc:;
  /* 103a6bdc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a6bde test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a6be0 jne 0x103a6bbc */
  if (!C.zf) goto L_103a6bbc;
  /* 103a6be2 pop edi */
  EDI = (pop32());
  /* 103a6be3 pop esi */
  ESI = (pop32());
  /* 103a6be4 pop ebx */
  EBX = (pop32());
  /* 103a6be5 mov esp, ebp */
  ESP = (EBP);
  /* 103a6be7 pop ebp */
  EBP = (pop32());
  /* 103a6be8 ret  */
  ESPCHK(0x103a6930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x103a6bf0 (276 bytes, 89 insns) */
void f_103a6bf0(void) {
  FTRACE(0x103a6bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6bf1 mov ebp, esp */
  EBP = (ESP);
  /* 103a6bf3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 103a6bf7 push esi */
  push32((uint32_t)(ESI));
  /* 103a6bf8 push edi */
  push32((uint32_t)(EDI));
  /* 103a6bf9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 103a6c00 jmp 0x103a6c0b */
  goto L_103a6c0b;
L_103a6c02:;
  /* 103a6c02 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103a6c05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6c08 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_103a6c0b:;
  /* 103a6c0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6c0e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6c12 jge 0x103a6c1f */
  if ((C.sf==C.of)) goto L_103a6c1f;
  /* 103a6c14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6c17 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103a6c1a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 103a6c1d jmp 0x103a6c26 */
  goto L_103a6c26;
L_103a6c1f:;
  /* 103a6c1f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_103a6c26:;
  /* 103a6c26 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103a6c29 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6c2c jge 0x103a6ccc */
  if ((C.sf==C.of)) goto L_103a6ccc;
  /* 103a6c32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6c35 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6c38 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 103a6c3b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 103a6c3e cmp dword ptr [0x103ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6c45 jle 0x103a6c63 */
  if ((C.zf||C.sf!=C.of)) goto L_103a6c63;
  /* 103a6c47 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 103a6c4c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a6c4f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a6c55 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6c56 call 0x103aaf00 */
  push32(0x103a6c5bu); f_103aaf00();
  /* 103a6c5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6c5e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 103a6c61 jmp 0x103a6c80 */
  goto L_103a6c80;
L_103a6c63:;
  /* 103a6c63 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a6c66 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a6c6c mov eax, dword ptr [0x103cec98] */
  EAX = (r32((uint32_t)(0x103cec98)));
  /* 103a6c71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a6c73 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 103a6c77 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 103a6c7d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_103a6c80:;
  /* 103a6c80 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6c84 je 0x103a6c94 */
  if (C.zf) goto L_103a6c94;
  /* 103a6c86 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a6c89 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a6c8f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 103a6c92 jmp 0x103a6c9b */
  goto L_103a6c9b;
L_103a6c94:;
  /* 103a6c94 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_103a6c9b:;
  /* 103a6c9b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103a6c9e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 103a6ca1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 103a6ca5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103a6ca8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a6cae push edx */
  push32((uint32_t)(EDX));
  /* 103a6caf push 0x103cbd58 */
  push32((uint32_t)(0x103cbd58u));
  /* 103a6cb4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103a6cb7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a6cba lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 103a6cbe push ecx */
  push32((uint32_t)(ECX));
  /* 103a6cbf call 0x103aae00 */
  push32(0x103a6cc4u); f_103aae00();
  /* 103a6cc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6cc7 jmp 0x103a6c02 */
  goto L_103a6c02;
L_103a6ccc:;
  /* 103a6ccc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103a6ccf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_103a6cd4:;
  /* 103a6cd4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 103a6cd7 push eax */
  push32((uint32_t)(EAX));
  /* 103a6cd8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 103a6cdb push ecx */
  push32((uint32_t)(ECX));
  /* 103a6cdc push 0x103cbd48 */
  push32((uint32_t)(0x103cbd48u));
  /* 103a6ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6ce9 call 0x103a3fb0 */
  push32(0x103a6ceeu); f_103a3fb0();
  /* 103a6cee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6cf1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6cf4 jne 0x103a6cf7 */
  if (!C.zf) goto L_103a6cf7;
  /* 103a6cf6 int3  */
  x86_unimpl("int3 @ 0x103a6cf6");
L_103a6cf7:;
  /* 103a6cf7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a6cf9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a6cfb jne 0x103a6cd4 */
  if (!C.zf) goto L_103a6cd4;
  /* 103a6cfd pop edi */
  EDI = (pop32());
  /* 103a6cfe pop esi */
  ESI = (pop32());
  /* 103a6cff pop ebx */
  EBX = (pop32());
  /* 103a6d00 mov esp, ebp */
  ESP = (EBP);
  /* 103a6d02 pop ebp */
  EBP = (pop32());
  /* 103a6d03 ret  */
  ESPCHK(0x103a6bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d10 @ 0x103a6d10 (116 bytes, 46 insns) */
void f_103a6d10(void) {
  FTRACE(0x103a6d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6d10 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6d11 mov ebp, esp */
  EBP = (ESP);
  /* 103a6d13 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6d16 push ebx */
  push32((uint32_t)(EBX));
  /* 103a6d17 push esi */
  push32((uint32_t)(ESI));
  /* 103a6d18 push edi */
  push32((uint32_t)(EDI));
  /* 103a6d19 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 103a6d1c push eax */
  push32((uint32_t)(EAX));
  /* 103a6d1d call 0x103a6690 */
  push32(0x103a6d22u); f_103a6690();
  /* 103a6d22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6d25 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6d29 jne 0x103a6d44 */
  if (!C.zf) goto L_103a6d44;
  /* 103a6d2b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6d2f jne 0x103a6d44 */
  if (!C.zf) goto L_103a6d44;
  /* 103a6d31 mov ecx, dword ptr [0x103cea84] */
  ECX = (r32((uint32_t)(0x103cea84)));
  /* 103a6d37 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 103a6d3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a6d3c je 0x103a6d7b */
  if (C.zf) goto L_103a6d7b;
  /* 103a6d3e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6d42 je 0x103a6d7b */
  if (C.zf) goto L_103a6d7b;
L_103a6d44:;
  /* 103a6d44 push 0x103cbd60 */
  push32((uint32_t)(0x103cbd60u));
  /* 103a6d49 push 0x103cb72c */
  push32((uint32_t)(0x103cb72cu));
  /* 103a6d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6d56 call 0x103a3fb0 */
  push32(0x103a6d5bu); f_103a3fb0();
  /* 103a6d5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6d5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6d61 jne 0x103a6d64 */
  if (!C.zf) goto L_103a6d64;
  /* 103a6d63 int3  */
  x86_unimpl("int3 @ 0x103a6d63");
L_103a6d64:;
  /* 103a6d64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a6d66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a6d68 jne 0x103a6d44 */
  if (!C.zf) goto L_103a6d44;
  /* 103a6d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6d6c call 0x103a6930 */
  push32(0x103a6d71u); f_103a6930();
  /* 103a6d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6d74 mov eax, 1 */
  EAX = (0x1u);
  /* 103a6d79 jmp 0x103a6d7d */
  goto L_103a6d7d;
L_103a6d7b:;
  /* 103a6d7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103a6d7d:;
  /* 103a6d7d pop edi */
  EDI = (pop32());
  /* 103a6d7e pop esi */
  ESI = (pop32());
  /* 103a6d7f pop ebx */
  EBX = (pop32());
  /* 103a6d80 mov esp, ebp */
  ESP = (EBP);
  /* 103a6d82 pop ebp */
  EBP = (pop32());
  /* 103a6d83 ret  */
  ESPCHK(0x103a6d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d90 @ 0x103a6d90 (197 bytes, 79 insns) */
void f_103a6d90(void) {
  FTRACE(0x103a6d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6d90 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6d91 mov ebp, esp */
  EBP = (ESP);
  /* 103a6d93 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6d94 push ebx */
  push32((uint32_t)(EBX));
  /* 103a6d95 push esi */
  push32((uint32_t)(ESI));
  /* 103a6d96 push edi */
  push32((uint32_t)(EDI));
  /* 103a6d97 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6d9b jne 0x103a6da2 */
  if (!C.zf) goto L_103a6da2;
  /* 103a6d9d jmp 0x103a6e4e */
  goto L_103a6e4e;
L_103a6da2:;
  /* 103a6da2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103a6da9 jmp 0x103a6db4 */
  goto L_103a6db4;
L_103a6dab:;
  /* 103a6dab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6dae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6db1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a6db4:;
  /* 103a6db4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6db8 jge 0x103a6dfe */
  if ((C.sf==C.of)) goto L_103a6dfe;
L_103a6dba:;
  /* 103a6dba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6dbd mov edx, dword ptr [ecx*4 + 0x103cea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103cea94)));
  /* 103a6dc4 push edx */
  push32((uint32_t)(EDX));
  /* 103a6dc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6dc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6dcb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 103a6dcf push edx */
  push32((uint32_t)(EDX));
  /* 103a6dd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6dd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6dd6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 103a6dda push edx */
  push32((uint32_t)(EDX));
  /* 103a6ddb push 0x103cbdbc */
  push32((uint32_t)(0x103cbdbcu));
  /* 103a6de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6de8 call 0x103a3fb0 */
  push32(0x103a6dedu); f_103a3fb0();
  /* 103a6ded add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6df0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6df3 jne 0x103a6df6 */
  if (!C.zf) goto L_103a6df6;
  /* 103a6df5 int3  */
  x86_unimpl("int3 @ 0x103a6df5");
L_103a6df6:;
  /* 103a6df6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6df8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6dfa jne 0x103a6dba */
  if (!C.zf) goto L_103a6dba;
  /* 103a6dfc jmp 0x103a6dab */
  goto L_103a6dab;
L_103a6dfe:;
  /* 103a6dfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6e01 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 103a6e04 push edx */
  push32((uint32_t)(EDX));
  /* 103a6e05 push 0x103cbd98 */
  push32((uint32_t)(0x103cbd98u));
  /* 103a6e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6e12 call 0x103a3fb0 */
  push32(0x103a6e17u); f_103a3fb0();
  /* 103a6e17 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6e1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6e1d jne 0x103a6e20 */
  if (!C.zf) goto L_103a6e20;
  /* 103a6e1f int3  */
  x86_unimpl("int3 @ 0x103a6e1f");
L_103a6e20:;
  /* 103a6e20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6e22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6e24 jne 0x103a6dfe */
  if (!C.zf) goto L_103a6dfe;
L_103a6e26:;
  /* 103a6e26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a6e29 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 103a6e2c push edx */
  push32((uint32_t)(EDX));
  /* 103a6e2d push 0x103cbd78 */
  push32((uint32_t)(0x103cbd78u));
  /* 103a6e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6e38 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6e3a call 0x103a3fb0 */
  push32(0x103a6e3fu); f_103a3fb0();
  /* 103a6e3f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6e42 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6e45 jne 0x103a6e48 */
  if (!C.zf) goto L_103a6e48;
  /* 103a6e47 int3  */
  x86_unimpl("int3 @ 0x103a6e47");
L_103a6e48:;
  /* 103a6e48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a6e4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6e4c jne 0x103a6e26 */
  if (!C.zf) goto L_103a6e26;
L_103a6e4e:;
  /* 103a6e4e pop edi */
  EDI = (pop32());
  /* 103a6e4f pop esi */
  ESI = (pop32());
  /* 103a6e50 pop ebx */
  EBX = (pop32());
  /* 103a6e51 mov esp, ebp */
  ESP = (EBP);
  /* 103a6e53 pop ebp */
  EBP = (pop32());
  /* 103a6e54 ret  */
  ESPCHK(0x103a6d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e60 @ 0x103a6e60 (329 bytes, 102 insns) */
void f_103a6e60(void) {
  FTRACE(0x103a6e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6e60 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6e61 mov ebp, esp */
  EBP = (ESP);
  /* 103a6e63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6e66 cmp dword ptr [0x103d2110], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d2110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6e6d jne 0x103a6e74 */
  if (!C.zf) goto L_103a6e74;
  /* 103a6e6f call 0x103ab7a0 */
  push32(0x103a6e74u); f_103ab7a0();
L_103a6e74:;
  /* 103a6e74 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103a6e7b mov eax, dword ptr [0x103d05dc] */
  EAX = (r32((uint32_t)(0x103d05dc)));
  /* 103a6e80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a6e83:;
  /* 103a6e83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6e86 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103a6e89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a6e8b je 0x103a6eb9 */
  if (C.zf) goto L_103a6eb9;
  /* 103a6e8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6e90 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103a6e93 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6e96 je 0x103a6ea1 */
  if (C.zf) goto L_103a6ea1;
  /* 103a6e98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6e9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6e9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103a6ea1:;
  /* 103a6ea1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6ea4 push eax */
  push32((uint32_t)(EAX));
  /* 103a6ea5 call 0x103a7d20 */
  push32(0x103a6eaau); f_103a7d20();
  /* 103a6eaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6ead mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6eb0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 103a6eb4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a6eb7 jmp 0x103a6e83 */
  goto L_103a6e83;
L_103a6eb9:;
  /* 103a6eb9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 103a6ebb push 0x103cbddc */
  push32((uint32_t)(0x103cbddcu));
  /* 103a6ec0 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a6ec2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a6ec5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 103a6ecc push ecx */
  push32((uint32_t)(ECX));
  /* 103a6ecd call 0x103a4ef0 */
  push32(0x103a6ed2u); f_103a4ef0();
  /* 103a6ed2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6ed5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a6ed8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a6edb mov dword ptr [0x103d0610], edx */
  w32((uint32_t)(0x103d0610), (EDX));
  /* 103a6ee1 cmp dword ptr [0x103d0610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6ee8 jne 0x103a6ef4 */
  if (!C.zf) goto L_103a6ef4;
  /* 103a6eea push 9 */
  push32((uint32_t)(0x9u));
  /* 103a6eec call 0x103a3e60 */
  push32(0x103a6ef1u); f_103a3e60();
  /* 103a6ef1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a6ef4:;
  /* 103a6ef4 mov eax, dword ptr [0x103d05dc] */
  EAX = (r32((uint32_t)(0x103d05dc)));
  /* 103a6ef9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a6efc jmp 0x103a6f07 */
  goto L_103a6f07;
L_103a6efe:;
  /* 103a6efe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6f01 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6f04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103a6f07:;
  /* 103a6f07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6f0a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103a6f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a6f0f je 0x103a6f77 */
  if (C.zf) goto L_103a6f77;
  /* 103a6f11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6f14 push ecx */
  push32((uint32_t)(ECX));
  /* 103a6f15 call 0x103a7d20 */
  push32(0x103a6f1au); f_103a7d20();
  /* 103a6f1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6f1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6f20 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103a6f23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6f26 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103a6f29 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6f2c je 0x103a6f75 */
  if (C.zf) goto L_103a6f75;
  /* 103a6f2e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 103a6f30 push 0x103cbddc */
  push32((uint32_t)(0x103cbddcu));
  /* 103a6f35 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a6f37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a6f3a push ecx */
  push32((uint32_t)(ECX));
  /* 103a6f3b call 0x103a4ef0 */
  push32(0x103a6f40u); f_103a4ef0();
  /* 103a6f40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6f43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a6f46 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103a6f48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a6f4b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6f4e jne 0x103a6f5a */
  if (!C.zf) goto L_103a6f5a;
  /* 103a6f50 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a6f52 call 0x103a3e60 */
  push32(0x103a6f57u); f_103a3e60();
  /* 103a6f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a6f5a:;
  /* 103a6f5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a6f5d push ecx */
  push32((uint32_t)(ECX));
  /* 103a6f5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a6f61 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a6f63 push eax */
  push32((uint32_t)(EAX));
  /* 103a6f64 call 0x103a7ea0 */
  push32(0x103a6f69u); f_103a7ea0();
  /* 103a6f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6f6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a6f6f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6f72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_103a6f75:;
  /* 103a6f75 jmp 0x103a6efe */
  goto L_103a6efe;
L_103a6f77:;
  /* 103a6f77 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a6f79 mov edx, dword ptr [0x103d05dc] */
  EDX = (r32((uint32_t)(0x103d05dc)));
  /* 103a6f7f push edx */
  push32((uint32_t)(EDX));
  /* 103a6f80 call 0x103a5980 */
  push32(0x103a6f85u); f_103a5980();
  /* 103a6f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a6f88 mov dword ptr [0x103d05dc], 0 */
  w32((uint32_t)(0x103d05dc), (0x0u));
  /* 103a6f92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a6f95 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103a6f9b mov dword ptr [0x103d2100], 1 */
  w32((uint32_t)(0x103d2100), (0x1u));
  /* 103a6fa5 mov esp, ebp */
  ESP = (EBP);
  /* 103a6fa7 pop ebp */
  EBP = (pop32());
  /* 103a6fa8 ret  */
  ESPCHK(0x103a6e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fb0 @ 0x103a6fb0 (216 bytes, 69 insns) */
void f_103a6fb0(void) {
  FTRACE(0x103a6fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a6fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a6fb1 mov ebp, esp */
  EBP = (ESP);
  /* 103a6fb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a6fb6 cmp dword ptr [0x103d2110], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d2110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a6fbd jne 0x103a6fc4 */
  if (!C.zf) goto L_103a6fc4;
  /* 103a6fbf call 0x103ab7a0 */
  push32(0x103a6fc4u); f_103ab7a0();
L_103a6fc4:;
  /* 103a6fc4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 103a6fc9 push 0x103d064c */
  push32((uint32_t)(0x103d064cu));
  /* 103a6fce push 0 */
  push32((uint32_t)(0x0u));
  /* 103a6fd0 call dword ptr [0x103d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3350))), 0x103a6fd6u);
  /* 103a6fd6 mov dword ptr [0x103d0620], 0x103d064c */
  w32((uint32_t)(0x103d0620), (0x103d064cu));
  /* 103a6fe0 mov eax, dword ptr [0x103d212c] */
  EAX = (r32((uint32_t)(0x103d212c)));
  /* 103a6fe5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103a6fe8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a6fea jne 0x103a6ff7 */
  if (!C.zf) goto L_103a6ff7;
  /* 103a6fec mov edx, dword ptr [0x103d0620] */
  EDX = (r32((uint32_t)(0x103d0620)));
  /* 103a6ff2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103a6ff5 jmp 0x103a6fff */
  goto L_103a6fff;
L_103a6ff7:;
  /* 103a6ff7 mov eax, dword ptr [0x103d212c] */
  EAX = (r32((uint32_t)(0x103d212c)));
  /* 103a6ffc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_103a6fff:;
  /* 103a6fff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a7002 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103a7005 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 103a7008 push edx */
  push32((uint32_t)(EDX));
  /* 103a7009 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 103a700c push eax */
  push32((uint32_t)(EAX));
  /* 103a700d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a700f push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7011 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a7014 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7015 call 0x103a7090 */
  push32(0x103a701au); f_103a7090();
  /* 103a701a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a701d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 103a7022 push 0x103cbde8 */
  push32((uint32_t)(0x103cbde8u));
  /* 103a7027 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a7029 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a702c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a702f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 103a7032 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7033 call 0x103a4ef0 */
  push32(0x103a7038u); f_103a4ef0();
  /* 103a7038 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a703b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a703e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7042 jne 0x103a704e */
  if (!C.zf) goto L_103a704e;
  /* 103a7044 push 8 */
  push32((uint32_t)(0x8u));
  /* 103a7046 call 0x103a3e60 */
  push32(0x103a704bu); f_103a3e60();
  /* 103a704b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a704e:;
  /* 103a704e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 103a7051 push edx */
  push32((uint32_t)(EDX));
  /* 103a7052 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 103a7055 push eax */
  push32((uint32_t)(EAX));
  /* 103a7056 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7059 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a705c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 103a705f push eax */
  push32((uint32_t)(EAX));
  /* 103a7060 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7063 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7064 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a7067 push edx */
  push32((uint32_t)(EDX));
  /* 103a7068 call 0x103a7090 */
  push32(0x103a706du); f_103a7090();
  /* 103a706d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7070 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7073 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7076 mov dword ptr [0x103d0604], eax */
  w32((uint32_t)(0x103d0604), (EAX));
  /* 103a707b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a707e mov dword ptr [0x103d0608], ecx */
  w32((uint32_t)(0x103d0608), (ECX));
  /* 103a7084 mov esp, ebp */
  ESP = (EBP);
  /* 103a7086 pop ebp */
  EBP = (pop32());
  /* 103a7087 ret  */
  ESPCHK(0x103a6fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007090 @ 0x103a7090 (1060 bytes, 360 insns) */
void f_103a7090(void) {
  FTRACE(0x103a7090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7090 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7091 mov ebp, esp */
  EBP = (ESP);
  /* 103a7093 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7096 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a7099 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103a709f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a70a2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 103a70a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a70ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a70ae cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a70b2 je 0x103a70c5 */
  if (C.zf) goto L_103a70c5;
  /* 103a70b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a70b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a70ba mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103a70bc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a70bf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a70c2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_103a70c5:;
  /* 103a70c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a70c8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103a70cb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a70ce jne 0x103a719d */
  if (!C.zf) goto L_103a719d;
L_103a70d4:;
  /* 103a70d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a70d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a70da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a70dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a70e0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103a70e3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a70e6 je 0x103a7162 */
  if (C.zf) goto L_103a7162;
  /* 103a70e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a70eb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103a70ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a70f0 je 0x103a7162 */
  if (C.zf) goto L_103a7162;
  /* 103a70f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a70f5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a70f7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103a70f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a70fb mov al, byte ptr [edx + 0x103d1e61] */
  AL = (r8((uint32_t)(EDX + 0x103d1e61)));
  /* 103a7101 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103a7104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a7106 je 0x103a7137 */
  if (C.zf) goto L_103a7137;
  /* 103a7108 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a710b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a710d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7110 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a7113 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103a7115 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7119 je 0x103a7137 */
  if (C.zf) goto L_103a7137;
  /* 103a711b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a711e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7121 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103a7123 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103a7125 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7128 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a712b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103a712e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7131 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7134 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103a7137:;
  /* 103a7137 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a713a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a713c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a713f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a7142 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103a7144 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7148 je 0x103a715d */
  if (C.zf) goto L_103a715d;
  /* 103a714a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a714d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7150 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103a7152 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103a7154 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7157 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a715a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_103a715d:;
  /* 103a715d jmp 0x103a70d4 */
  goto L_103a70d4;
L_103a7162:;
  /* 103a7162 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a7165 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a7167 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a716a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a716d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103a716f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7173 je 0x103a7184 */
  if (C.zf) goto L_103a7184;
  /* 103a7175 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7178 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 103a717b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a717e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7181 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_103a7184:;
  /* 103a7184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7187 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103a718a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a718d jne 0x103a7198 */
  if (!C.zf) goto L_103a7198;
  /* 103a718f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7192 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7195 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103a7198:;
  /* 103a7198 jmp 0x103a726c */
  goto L_103a726c;
L_103a719d:;
  /* 103a719d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a71a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a71a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a71a5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a71a8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103a71aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a71ae je 0x103a71c3 */
  if (C.zf) goto L_103a71c3;
  /* 103a71b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a71b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a71b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103a71b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103a71ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a71bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a71c0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_103a71c3:;
  /* 103a71c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a71c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103a71c8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 103a71cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a71ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a71d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a71d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a71d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a71dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a71df mov dl, byte ptr [ecx + 0x103d1e61] */
  DL = (r8((uint32_t)(ECX + 0x103d1e61)));
  /* 103a71e5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103a71e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a71ea je 0x103a721b */
  if (C.zf) goto L_103a721b;
  /* 103a71ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a71ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a71f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a71f4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a71f7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103a71f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a71fd je 0x103a7212 */
  if (C.zf) goto L_103a7212;
  /* 103a71ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7202 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7205 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103a7207 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103a7209 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a720c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a720f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_103a7212:;
  /* 103a7212 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7215 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7218 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103a721b:;
  /* 103a721b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a721e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a7224 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7227 je 0x103a7247 */
  if (C.zf) goto L_103a7247;
  /* 103a7229 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a722c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a7231 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a7233 je 0x103a7247 */
  if (C.zf) goto L_103a7247;
  /* 103a7235 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7238 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a723e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7241 jne 0x103a719d */
  if (!C.zf) goto L_103a719d;
L_103a7247:;
  /* 103a7247 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a724a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a7250 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a7252 jne 0x103a725f */
  if (!C.zf) goto L_103a725f;
  /* 103a7254 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7257 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a725a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a725d jmp 0x103a726c */
  goto L_103a726c;
L_103a725f:;
  /* 103a725f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7263 je 0x103a726c */
  if (C.zf) goto L_103a726c;
  /* 103a7265 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7268 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_103a726c:;
  /* 103a726c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_103a7273:;
  /* 103a7273 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7276 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103a7279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a727b je 0x103a729e */
  if (C.zf) goto L_103a729e;
L_103a727d:;
  /* 103a727d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7280 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103a7283 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7286 je 0x103a7293 */
  if (C.zf) goto L_103a7293;
  /* 103a7288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a728b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103a728e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7291 jne 0x103a729e */
  if (!C.zf) goto L_103a729e;
L_103a7293:;
  /* 103a7293 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7296 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7299 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a729c jmp 0x103a727d */
  goto L_103a727d;
L_103a729e:;
  /* 103a729e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a72a1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103a72a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a72a6 jne 0x103a72ad */
  if (!C.zf) goto L_103a72ad;
  /* 103a72a8 jmp 0x103a748b */
  goto L_103a748b;
L_103a72ad:;
  /* 103a72ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a72b1 je 0x103a72c4 */
  if (C.zf) goto L_103a72c4;
  /* 103a72b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a72b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a72b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 103a72bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a72be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a72c1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_103a72c4:;
  /* 103a72c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a72c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a72c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a72cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a72cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_103a72d1:;
  /* 103a72d1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 103a72d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_103a72df:;
  /* 103a72df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a72e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103a72e5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a72e8 jne 0x103a72fe */
  if (!C.zf) goto L_103a72fe;
  /* 103a72ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a72ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a72f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a72f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a72f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a72f9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103a72fc jmp 0x103a72df */
  goto L_103a72df;
L_103a72fe:;
  /* 103a72fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7301 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103a7304 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7307 jne 0x103a735a */
  if (!C.zf) goto L_103a735a;
  /* 103a7309 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a730c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a730e mov ecx, 2 */
  ECX = (0x2u);
  /* 103a7313 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103a7315 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a7317 jne 0x103a7352 */
  if (!C.zf) goto L_103a7352;
  /* 103a7319 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a731d je 0x103a733f */
  if (C.zf) goto L_103a733f;
  /* 103a731f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7322 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 103a7326 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7329 jne 0x103a7336 */
  if (!C.zf) goto L_103a7336;
  /* 103a732b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a732e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7331 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a7334 jmp 0x103a733d */
  goto L_103a733d;
L_103a7336:;
  /* 103a7336 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103a733d:;
  /* 103a733d jmp 0x103a7346 */
  goto L_103a7346;
L_103a733f:;
  /* 103a733f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_103a7346:;
  /* 103a7346 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a7348 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a734c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 103a734f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_103a7352:;
  /* 103a7352 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a7355 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 103a7357 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_103a735a:;
  /* 103a735a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a735d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a7360 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7363 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 103a7366 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a7368 je 0x103a738e */
  if (C.zf) goto L_103a738e;
  /* 103a736a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a736e je 0x103a737f */
  if (C.zf) goto L_103a737f;
  /* 103a7370 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7373 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 103a7376 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7379 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a737c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_103a737f:;
  /* 103a737f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a7382 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a7384 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7387 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a738a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103a738c jmp 0x103a735a */
  goto L_103a735a;
L_103a738e:;
  /* 103a738e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7391 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103a7394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a7396 je 0x103a73b4 */
  if (C.zf) goto L_103a73b4;
  /* 103a7398 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a739c jne 0x103a73b9 */
  if (!C.zf) goto L_103a73b9;
  /* 103a739e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a73a1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103a73a4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a73a7 je 0x103a73b4 */
  if (C.zf) goto L_103a73b4;
  /* 103a73a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a73ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103a73af cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a73b2 jne 0x103a73b9 */
  if (!C.zf) goto L_103a73b9;
L_103a73b4:;
  /* 103a73b4 jmp 0x103a7464 */
  goto L_103a7464;
L_103a73b9:;
  /* 103a73b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a73bd je 0x103a7456 */
  if (C.zf) goto L_103a7456;
  /* 103a73c3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a73c7 je 0x103a741d */
  if (C.zf) goto L_103a741d;
  /* 103a73c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a73cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a73ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103a73d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a73d2 mov cl, byte ptr [eax + 0x103d1e61] */
  CL = (r8((uint32_t)(EAX + 0x103d1e61)));
  /* 103a73d8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103a73db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a73dd je 0x103a7408 */
  if (C.zf) goto L_103a7408;
  /* 103a73df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a73e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a73e5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 103a73e7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 103a73e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a73ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a73ef mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 103a73f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a73f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a73f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a73fb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a73fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a7400 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7403 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a7406 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_103a7408:;
  /* 103a7408 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a740b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a740e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103a7410 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103a7412 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7415 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7418 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103a741b jmp 0x103a7449 */
  goto L_103a7449;
L_103a741d:;
  /* 103a741d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7420 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a7422 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103a7424 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a7426 mov cl, byte ptr [eax + 0x103d1e61] */
  CL = (r8((uint32_t)(EAX + 0x103d1e61)));
  /* 103a742c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 103a742f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a7431 je 0x103a7449 */
  if (C.zf) goto L_103a7449;
  /* 103a7433 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7436 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7439 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a743c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a743f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a7441 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7444 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a7447 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103a7449:;
  /* 103a7449 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a744c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a744e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7451 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a7454 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_103a7456:;
  /* 103a7456 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7459 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a745c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a745f jmp 0x103a72d1 */
  goto L_103a72d1;
L_103a7464:;
  /* 103a7464 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7468 je 0x103a7479 */
  if (C.zf) goto L_103a7479;
  /* 103a746a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a746d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 103a7470 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7473 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7476 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_103a7479:;
  /* 103a7479 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a747c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a747e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7481 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103a7484 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103a7486 jmp 0x103a7273 */
  goto L_103a7273;
L_103a748b:;
  /* 103a748b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a748f je 0x103a74a3 */
  if (C.zf) goto L_103a74a3;
  /* 103a7491 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7494 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103a749a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a749d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a74a0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_103a74a3:;
  /* 103a74a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a74a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a74a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a74ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a74ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103a74b0 mov esp, ebp */
  ESP = (EBP);
  /* 103a74b2 pop ebp */
  EBP = (pop32());
  /* 103a74b3 ret  */
  ESPCHK(0x103a7090u, _esp0);
  ESP += 4; return;
}

/* FUN_100074c0 @ 0x103a74c0 (537 bytes, 173 insns) */
void f_103a74c0(void) {
  FTRACE(0x103a74c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a74c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a74c1 mov ebp, esp */
  EBP = (ESP);
  /* 103a74c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a74c6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 103a74cd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 103a74d4 cmp dword ptr [0x103d0750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a74db jne 0x103a751a */
  if (!C.zf) goto L_103a751a;
  /* 103a74dd call dword ptr [0x103d33a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a8))), 0x103a74e3u);
  /* 103a74e3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103a74e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a74ea je 0x103a74f8 */
  if (C.zf) goto L_103a74f8;
  /* 103a74ec mov dword ptr [0x103d0750], 1 */
  w32((uint32_t)(0x103d0750), (0x1u));
  /* 103a74f6 jmp 0x103a751a */
  goto L_103a751a;
L_103a74f8:;
  /* 103a74f8 call dword ptr [0x103d3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3394))), 0x103a74feu);
  /* 103a74fe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103a7501 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7505 je 0x103a7513 */
  if (C.zf) goto L_103a7513;
  /* 103a7507 mov dword ptr [0x103d0750], 2 */
  w32((uint32_t)(0x103d0750), (0x2u));
  /* 103a7511 jmp 0x103a751a */
  goto L_103a751a;
L_103a7513:;
  /* 103a7513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a7515 jmp 0x103a76d5 */
  goto L_103a76d5;
L_103a751a:;
  /* 103a751a cmp dword ptr [0x103d0750], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d0750))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7521 jne 0x103a761e */
  if (!C.zf) goto L_103a761e;
  /* 103a7527 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a752b jne 0x103a7543 */
  if (!C.zf) goto L_103a7543;
  /* 103a752d call dword ptr [0x103d33a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a8))), 0x103a7533u);
  /* 103a7533 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103a7536 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a753a jne 0x103a7543 */
  if (!C.zf) goto L_103a7543;
  /* 103a753c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a753e jmp 0x103a76d5 */
  goto L_103a76d5;
L_103a7543:;
  /* 103a7543 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a7546 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103a7549:;
  /* 103a7549 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a754c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a754e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 103a7551 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a7553 je 0x103a7575 */
  if (C.zf) goto L_103a7575;
  /* 103a7555 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7558 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a755b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a755e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7561 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a7563 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 103a7566 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a7568 jne 0x103a7573 */
  if (!C.zf) goto L_103a7573;
  /* 103a756a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a756d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7570 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103a7573:;
  /* 103a7573 jmp 0x103a7549 */
  goto L_103a7549;
L_103a7575:;
  /* 103a7575 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7578 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a757b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103a757d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7580 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a7583 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7585 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7587 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7589 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a758b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a758e push edx */
  push32((uint32_t)(EDX));
  /* 103a758f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a7592 push eax */
  push32((uint32_t)(EAX));
  /* 103a7593 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7595 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7597 call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103a759du);
  /* 103a759d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103a75a0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a75a4 je 0x103a75c4 */
  if (C.zf) goto L_103a75c4;
  /* 103a75a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 103a75a8 push 0x103cbdf4 */
  push32((uint32_t)(0x103cbdf4u));
  /* 103a75ad push 2 */
  push32((uint32_t)(0x2u));
  /* 103a75af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a75b2 push ecx */
  push32((uint32_t)(ECX));
  /* 103a75b3 call 0x103a4ef0 */
  push32(0x103a75b8u); f_103a4ef0();
  /* 103a75b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a75bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103a75be cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a75c2 jne 0x103a75d5 */
  if (!C.zf) goto L_103a75d5;
L_103a75c4:;
  /* 103a75c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a75c7 push edx */
  push32((uint32_t)(EDX));
  /* 103a75c8 call dword ptr [0x103d33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a0))), 0x103a75ceu);
  /* 103a75ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a75d0 jmp 0x103a76d5 */
  goto L_103a76d5;
L_103a75d5:;
  /* 103a75d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a75d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a75d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a75dc push eax */
  push32((uint32_t)(EAX));
  /* 103a75dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a75e0 push ecx */
  push32((uint32_t)(ECX));
  /* 103a75e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a75e4 push edx */
  push32((uint32_t)(EDX));
  /* 103a75e5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a75e8 push eax */
  push32((uint32_t)(EAX));
  /* 103a75e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a75eb push 0 */
  push32((uint32_t)(0x0u));
  /* 103a75ed call dword ptr [0x103d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a4))), 0x103a75f3u);
  /* 103a75f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a75f5 jne 0x103a760c */
  if (!C.zf) goto L_103a760c;
  /* 103a75f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a75f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a75fc push ecx */
  push32((uint32_t)(ECX));
  /* 103a75fd call 0x103a5980 */
  push32(0x103a7602u); f_103a5980();
  /* 103a7602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7605 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_103a760c:;
  /* 103a760c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a760f push edx */
  push32((uint32_t)(EDX));
  /* 103a7610 call dword ptr [0x103d33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33a0))), 0x103a7616u);
  /* 103a7616 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a7619 jmp 0x103a76d5 */
  goto L_103a76d5;
L_103a761e:;
  /* 103a761e cmp dword ptr [0x103d0750], 2 */
  { uint32_t _a=(r32((uint32_t)(0x103d0750))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7625 jne 0x103a76d3 */
  if (!C.zf) goto L_103a76d3;
  /* 103a762b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a762f jne 0x103a7647 */
  if (!C.zf) goto L_103a7647;
  /* 103a7631 call dword ptr [0x103d3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3394))), 0x103a7637u);
  /* 103a7637 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103a763a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a763e jne 0x103a7647 */
  if (!C.zf) goto L_103a7647;
  /* 103a7640 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a7642 jmp 0x103a76d5 */
  goto L_103a76d5;
L_103a7647:;
  /* 103a7647 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a764a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103a764d:;
  /* 103a764d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7650 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103a7653 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a7655 je 0x103a7675 */
  if (C.zf) goto L_103a7675;
  /* 103a7657 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a765a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a765d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a7660 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7663 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 103a7666 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a7668 jne 0x103a7673 */
  if (!C.zf) goto L_103a7673;
  /* 103a766a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a766d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7670 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_103a7673:;
  /* 103a7673 jmp 0x103a764d */
  goto L_103a764d;
L_103a7675:;
  /* 103a7675 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7678 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a767b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a767e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103a7681 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 103a7686 push 0x103cbdf4 */
  push32((uint32_t)(0x103cbdf4u));
  /* 103a768b push 2 */
  push32((uint32_t)(0x2u));
  /* 103a768d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a7690 push edx */
  push32((uint32_t)(EDX));
  /* 103a7691 call 0x103a4ef0 */
  push32(0x103a7696u); f_103a4ef0();
  /* 103a7696 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7699 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a769c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a76a0 jne 0x103a76b0 */
  if (!C.zf) goto L_103a76b0;
  /* 103a76a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a76a5 push eax */
  push32((uint32_t)(EAX));
  /* 103a76a6 call dword ptr [0x103d339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d339c))), 0x103a76acu);
  /* 103a76ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a76ae jmp 0x103a76d5 */
  goto L_103a76d5;
L_103a76b0:;
  /* 103a76b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a76b3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a76b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a76b7 push edx */
  push32((uint32_t)(EDX));
  /* 103a76b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a76bb push eax */
  push32((uint32_t)(EAX));
  /* 103a76bc call 0x103ab7d0 */
  push32(0x103a76c1u); f_103ab7d0();
  /* 103a76c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a76c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a76c7 push ecx */
  push32((uint32_t)(ECX));
  /* 103a76c8 call dword ptr [0x103d339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d339c))), 0x103a76ceu);
  /* 103a76ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a76d1 jmp 0x103a76d5 */
  goto L_103a76d5;
L_103a76d3:;
  /* 103a76d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103a76d5:;
  /* 103a76d5 mov esp, ebp */
  ESP = (EBP);
  /* 103a76d7 pop ebp */
  EBP = (pop32());
  /* 103a76d8 ret  */
  ESPCHK(0x103a74c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076e0 @ 0x103a76e0 (77 bytes, 25 insns) */
void f_103a76e0(void) {
  FTRACE(0x103a76e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a76e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a76e1 mov ebp, esp */
  EBP = (ESP);
  /* 103a76e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a76e5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 103a76ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a76ec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a76f0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 103a76f3 push eax */
  push32((uint32_t)(EAX));
  /* 103a76f4 call dword ptr [0x103d33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33b0))), 0x103a76fau);
  /* 103a76fa mov dword ptr [0x103d1f8c], eax */
  w32((uint32_t)(0x103d1f8c), (EAX));
  /* 103a76ff cmp dword ptr [0x103d1f8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d1f8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7706 jne 0x103a770c */
  if (!C.zf) goto L_103a770c;
  /* 103a7708 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a770a jmp 0x103a772b */
  goto L_103a772b;
L_103a770c:;
  /* 103a770c call 0x103a9190 */
  push32(0x103a7711u); f_103a9190();
  /* 103a7711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a7713 jne 0x103a7726 */
  if (!C.zf) goto L_103a7726;
  /* 103a7715 mov ecx, dword ptr [0x103d1f8c] */
  ECX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a771b push ecx */
  push32((uint32_t)(ECX));
  /* 103a771c call dword ptr [0x103d33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33ac))), 0x103a7722u);
  /* 103a7722 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a7724 jmp 0x103a772b */
  goto L_103a772b;
L_103a7726:;
  /* 103a7726 mov eax, 1 */
  EAX = (0x1u);
L_103a772b:;
  /* 103a772b pop ebp */
  EBP = (pop32());
  /* 103a772c ret  */
  ESPCHK(0x103a76e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007730 @ 0x103a7730 (156 bytes, 48 insns) */
void f_103a7730(void) {
  FTRACE(0x103a7730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7730 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7731 mov ebp, esp */
  EBP = (ESP);
  /* 103a7733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7736 mov eax, dword ptr [0x103d1f88] */
  EAX = (r32((uint32_t)(0x103d1f88)));
  /* 103a773b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a773e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103a7745 jmp 0x103a7750 */
  goto L_103a7750;
L_103a7747:;
  /* 103a7747 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a774a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a774d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103a7750:;
  /* 103a7750 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7753 cmp edx, dword ptr [0x103d1f84] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x103d1f84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7759 jge 0x103a77a6 */
  if ((C.sf==C.of)) goto L_103a77a6;
  /* 103a775b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 103a7760 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 103a7765 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7768 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 103a776b push ecx */
  push32((uint32_t)(ECX));
  /* 103a776c call dword ptr [0x103d336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d336c))), 0x103a7772u);
  /* 103a7772 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 103a7777 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7779 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a777c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103a777f push eax */
  push32((uint32_t)(EAX));
  /* 103a7780 call dword ptr [0x103d336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d336c))), 0x103a7786u);
  /* 103a7786 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7789 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 103a778c push edx */
  push32((uint32_t)(EDX));
  /* 103a778d push 0 */
  push32((uint32_t)(0x0u));
  /* 103a778f mov eax, dword ptr [0x103d1f8c] */
  EAX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a7794 push eax */
  push32((uint32_t)(EAX));
  /* 103a7795 call dword ptr [0x103d33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33b4))), 0x103a779bu);
  /* 103a779b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a779e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a77a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103a77a4 jmp 0x103a7747 */
  goto L_103a7747;
L_103a77a6:;
  /* 103a77a6 mov edx, dword ptr [0x103d1f88] */
  EDX = (r32((uint32_t)(0x103d1f88)));
  /* 103a77ac push edx */
  push32((uint32_t)(EDX));
  /* 103a77ad push 0 */
  push32((uint32_t)(0x0u));
  /* 103a77af mov eax, dword ptr [0x103d1f8c] */
  EAX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a77b4 push eax */
  push32((uint32_t)(EAX));
  /* 103a77b5 call dword ptr [0x103d33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33b4))), 0x103a77bbu);
  /* 103a77bb mov ecx, dword ptr [0x103d1f8c] */
  ECX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a77c1 push ecx */
  push32((uint32_t)(ECX));
  /* 103a77c2 call dword ptr [0x103d33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d33ac))), 0x103a77c8u);
  /* 103a77c8 mov esp, ebp */
  ESP = (EBP);
  /* 103a77ca pop ebp */
  EBP = (pop32());
  /* 103a77cb ret  */
  ESPCHK(0x103a7730u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x103a77d0 (73 bytes, 19 insns) */
void f_103a77d0(void) {
  FTRACE(0x103a77d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a77d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a77d1 mov ebp, esp */
  EBP = (ESP);
  /* 103a77d3 cmp dword ptr [0x103d05e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d05e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a77da je 0x103a77ee */
  if (C.zf) goto L_103a77ee;
  /* 103a77dc cmp dword ptr [0x103d05e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d05e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a77e3 jne 0x103a7817 */
  if (!C.zf) goto L_103a7817;
  /* 103a77e5 cmp dword ptr [0x103d05e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d05e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a77ec jne 0x103a7817 */
  if (!C.zf) goto L_103a7817;
L_103a77ee:;
  /* 103a77ee push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 103a77f3 call 0x103a7820 */
  push32(0x103a77f8u); f_103a7820();
  /* 103a77f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a77fb cmp dword ptr [0x103d0754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7802 je 0x103a780a */
  if (C.zf) goto L_103a780a;
  /* 103a7804 call dword ptr [0x103d0754] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d0754))), 0x103a780au);
L_103a780a:;
  /* 103a780a push 0xff */
  push32((uint32_t)(0xffu));
  /* 103a780f call 0x103a7820 */
  push32(0x103a7814u); f_103a7820();
  /* 103a7814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a7817:;
  /* 103a7817 pop ebp */
  EBP = (pop32());
  /* 103a7818 ret  */
  ESPCHK(0x103a77d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007820 @ 0x103a7820 (447 bytes, 131 insns) */
void f_103a7820(void) {
  FTRACE(0x103a7820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7820 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7821 mov ebp, esp */
  EBP = (ESP);
  /* 103a7823 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7829 push ebx */
  push32((uint32_t)(EBX));
  /* 103a782a push esi */
  push32((uint32_t)(ESI));
  /* 103a782b push edi */
  push32((uint32_t)(EDI));
  /* 103a782c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 103a7833 jmp 0x103a783e */
  goto L_103a783e;
L_103a7835:;
  /* 103a7835 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7838 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a783b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103a783e:;
  /* 103a783e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7842 jae 0x103a7857 */
  if (!C.cf) goto L_103a7857;
  /* 103a7844 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7847 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a784a cmp edx, dword ptr [ecx*8 + 0x103ceab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x103ceab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7851 jne 0x103a7855 */
  if (!C.zf) goto L_103a7855;
  /* 103a7853 jmp 0x103a7857 */
  goto L_103a7857;
L_103a7855:;
  /* 103a7855 jmp 0x103a7835 */
  goto L_103a7835;
L_103a7857:;
  /* 103a7857 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a785a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a785d cmp ecx, dword ptr [eax*8 + 0x103ceab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x103ceab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7864 jne 0x103a79d8 */
  if (!C.zf) goto L_103a79d8;
  /* 103a786a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7871 je 0x103a7894 */
  if (C.zf) goto L_103a7894;
  /* 103a7873 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7876 mov eax, dword ptr [edx*8 + 0x103ceab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x103ceab4)));
  /* 103a787d push eax */
  push32((uint32_t)(EAX));
  /* 103a787e push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7880 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7882 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7884 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a7886 call 0x103a3fb0 */
  push32(0x103a788bu); f_103a3fb0();
  /* 103a788b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a788e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7891 jne 0x103a7894 */
  if (!C.zf) goto L_103a7894;
  /* 103a7893 int3  */
  x86_unimpl("int3 @ 0x103a7893");
L_103a7894:;
  /* 103a7894 cmp dword ptr [0x103d05e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d05e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a789b je 0x103a78af */
  if (C.zf) goto L_103a78af;
  /* 103a789d cmp dword ptr [0x103d05e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d05e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a78a4 jne 0x103a78e8 */
  if (!C.zf) goto L_103a78e8;
  /* 103a78a6 cmp dword ptr [0x103d05e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103d05e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a78ad jne 0x103a78e8 */
  if (!C.zf) goto L_103a78e8;
L_103a78af:;
  /* 103a78af push 0 */
  push32((uint32_t)(0x0u));
  /* 103a78b1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 103a78b4 push ecx */
  push32((uint32_t)(ECX));
  /* 103a78b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a78b8 mov eax, dword ptr [edx*8 + 0x103ceab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x103ceab4)));
  /* 103a78bf push eax */
  push32((uint32_t)(EAX));
  /* 103a78c0 call 0x103a7d20 */
  push32(0x103a78c5u); f_103a7d20();
  /* 103a78c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a78c8 push eax */
  push32((uint32_t)(EAX));
  /* 103a78c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a78cc mov edx, dword ptr [ecx*8 + 0x103ceab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x103ceab4)));
  /* 103a78d3 push edx */
  push32((uint32_t)(EDX));
  /* 103a78d4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 103a78d6 call dword ptr [0x103d3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3334))), 0x103a78dcu);
  /* 103a78dc push eax */
  push32((uint32_t)(EAX));
  /* 103a78dd call dword ptr [0x103d3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3338))), 0x103a78e3u);
  /* 103a78e3 jmp 0x103a79d8 */
  goto L_103a79d8;
L_103a78e8:;
  /* 103a78e8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a78ef je 0x103a79d8 */
  if (C.zf) goto L_103a79d8;
  /* 103a78f5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 103a78fa lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 103a7900 push eax */
  push32((uint32_t)(EAX));
  /* 103a7901 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7903 call dword ptr [0x103d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3350))), 0x103a7909u);
  /* 103a7909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a790b jne 0x103a7921 */
  if (!C.zf) goto L_103a7921;
  /* 103a790d push 0x103cb65c */
  push32((uint32_t)(0x103cb65cu));
  /* 103a7912 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 103a7918 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7919 call 0x103a7ea0 */
  push32(0x103a791eu); f_103a7ea0();
  /* 103a791e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a7921:;
  /* 103a7921 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 103a7927 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103a792a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a792d push eax */
  push32((uint32_t)(EAX));
  /* 103a792e call 0x103a7d20 */
  push32(0x103a7933u); f_103a7d20();
  /* 103a7933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7936 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7939 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a793c jbe 0x103a796a */
  if ((C.cf||C.zf)) goto L_103a796a;
  /* 103a793e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 103a7944 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7945 call 0x103a7d20 */
  push32(0x103a794au); f_103a7d20();
  /* 103a794a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a794d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7950 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 103a7954 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a7957 push 3 */
  push32((uint32_t)(0x3u));
  /* 103a7959 push 0x103cb658 */
  push32((uint32_t)(0x103cb658u));
  /* 103a795e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7961 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7962 call 0x103a8710 */
  push32(0x103a7967u); f_103a8710();
  /* 103a7967 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a796a:;
  /* 103a796a push 0x103cc0b0 */
  push32((uint32_t)(0x103cc0b0u));
  /* 103a796f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 103a7975 push edx */
  push32((uint32_t)(EDX));
  /* 103a7976 call 0x103a7ea0 */
  push32(0x103a797bu); f_103a7ea0();
  /* 103a797b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a797e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7981 push eax */
  push32((uint32_t)(EAX));
  /* 103a7982 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 103a7988 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7989 call 0x103a7eb0 */
  push32(0x103a798eu); f_103a7eb0();
  /* 103a798e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7991 push 0x103cb5d0 */
  push32((uint32_t)(0x103cb5d0u));
  /* 103a7996 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 103a799c push edx */
  push32((uint32_t)(EDX));
  /* 103a799d call 0x103a7eb0 */
  push32(0x103a79a2u); f_103a7eb0();
  /* 103a79a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a79a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a79a8 mov ecx, dword ptr [eax*8 + 0x103ceab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x103ceab4)));
  /* 103a79af push ecx */
  push32((uint32_t)(ECX));
  /* 103a79b0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 103a79b6 push edx */
  push32((uint32_t)(EDX));
  /* 103a79b7 call 0x103a7eb0 */
  push32(0x103a79bcu); f_103a7eb0();
  /* 103a79bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a79bf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 103a79c4 push 0x103cc088 */
  push32((uint32_t)(0x103cc088u));
  /* 103a79c9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 103a79cf push eax */
  push32((uint32_t)(EAX));
  /* 103a79d0 call 0x103a8650 */
  push32(0x103a79d5u); f_103a8650();
  /* 103a79d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a79d8:;
  /* 103a79d8 pop edi */
  EDI = (pop32());
  /* 103a79d9 pop esi */
  ESI = (pop32());
  /* 103a79da pop ebx */
  EBX = (pop32());
  /* 103a79db mov esp, ebp */
  ESP = (EBP);
  /* 103a79dd pop ebp */
  EBP = (pop32());
  /* 103a79de ret  */
  ESPCHK(0x103a7820u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x103a79e0 (80 bytes, 27 insns) */
void f_103a79e0(void) {
  FTRACE(0x103a79e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a79e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a79e1 mov ebp, esp */
  EBP = (ESP);
  /* 103a79e3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a79e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103a79eb jmp 0x103a79f6 */
  goto L_103a79f6;
L_103a79ed:;
  /* 103a79ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a79f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a79f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a79f6:;
  /* 103a79f6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a79fa jae 0x103a7a0f */
  if (!C.cf) goto L_103a7a0f;
  /* 103a79fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a79ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7a02 cmp edx, dword ptr [ecx*8 + 0x103ceab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x103ceab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7a09 jne 0x103a7a0d */
  if (!C.zf) goto L_103a7a0d;
  /* 103a7a0b jmp 0x103a7a0f */
  goto L_103a7a0f;
L_103a7a0d:;
  /* 103a7a0d jmp 0x103a79ed */
  goto L_103a79ed;
L_103a7a0f:;
  /* 103a7a0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7a12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7a15 cmp ecx, dword ptr [eax*8 + 0x103ceab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x103ceab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7a1c jne 0x103a7a2a */
  if (!C.zf) goto L_103a7a2a;
  /* 103a7a1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7a21 mov eax, dword ptr [edx*8 + 0x103ceab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x103ceab4)));
  /* 103a7a28 jmp 0x103a7a2c */
  goto L_103a7a2c;
L_103a7a2a:;
  /* 103a7a2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103a7a2c:;
  /* 103a7a2c mov esp, ebp */
  ESP = (EBP);
  /* 103a7a2e pop ebp */
  EBP = (pop32());
  /* 103a7a2f ret  */
  ESPCHK(0x103a79e0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x103a7a30 (66 bytes, 28 insns) */
void f_103a7a30(void) {
  FTRACE(0x103a7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7a31 mov ebp, esp */
  EBP = (ESP);
  /* 103a7a33 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7a37 jne 0x103a7a57 */
  if (!C.zf) goto L_103a7a57;
  /* 103a7a39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7a3d jge 0x103a7a57 */
  if ((C.sf==C.of)) goto L_103a7a57;
  /* 103a7a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 103a7a41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7a44 push eax */
  push32((uint32_t)(EAX));
  /* 103a7a45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7a48 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7a49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7a4c push edx */
  push32((uint32_t)(EDX));
  /* 103a7a4d call 0x103a7a80 */
  push32(0x103a7a52u); f_103a7a80();
  /* 103a7a52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7a55 jmp 0x103a7a6d */
  goto L_103a7a6d;
L_103a7a57:;
  /* 103a7a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7a59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7a5c push eax */
  push32((uint32_t)(EAX));
  /* 103a7a5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7a60 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7a61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7a64 push edx */
  push32((uint32_t)(EDX));
  /* 103a7a65 call 0x103a7a80 */
  push32(0x103a7a6au); f_103a7a80();
  /* 103a7a6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a7a6d:;
  /* 103a7a6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7a70 pop ebp */
  EBP = (pop32());
  /* 103a7a71 ret  */
  ESPCHK(0x103a7a30u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x103a7a80 (194 bytes, 71 insns) */
void f_103a7a80(void) {
  FTRACE(0x103a7a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7a80 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7a81 mov ebp, esp */
  EBP = (ESP);
  /* 103a7a83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7a86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7a89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a7a8c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7a90 je 0x103a7aa9 */
  if (C.zf) goto L_103a7aa9;
  /* 103a7a92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7a95 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 103a7a98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7a9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7a9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a7aa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7aa4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103a7aa6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103a7aa9:;
  /* 103a7aa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7aac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_103a7aaf:;
  /* 103a7aaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7ab2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a7ab4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103a7ab7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103a7aba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7abd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a7abf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 103a7ac2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103a7ac5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7ac9 jbe 0x103a7ae1 */
  if ((C.cf||C.zf)) goto L_103a7ae1;
  /* 103a7acb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7ace add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7ad4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103a7ad6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7ad9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7adc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a7adf jmp 0x103a7af5 */
  goto L_103a7af5;
L_103a7ae1:;
  /* 103a7ae1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7ae4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7ae7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7aea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103a7aec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7aef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7af2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103a7af5:;
  /* 103a7af5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7af9 ja 0x103a7aaf */
  if ((!C.cf&&!C.zf)) goto L_103a7aaf;
  /* 103a7afb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7afe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103a7b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7b04 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7b07 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a7b0a:;
  /* 103a7b0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7b0d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103a7b0f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 103a7b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7b15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7b18 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103a7b1a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103a7b1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7b1f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 103a7b22 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 103a7b24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7b27 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7b2a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a7b2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7b30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7b33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a7b36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7b39 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7b3c jb 0x103a7b0a */
  if (C.cf) goto L_103a7b0a;
  /* 103a7b3e mov esp, ebp */
  ESP = (EBP);
  /* 103a7b40 pop ebp */
  EBP = (pop32());
  /* 103a7b41 ret  */
  ESPCHK(0x103a7a80u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x103a7b50 (63 bytes, 24 insns) */
void f_103a7b50(void) {
  FTRACE(0x103a7b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7b50 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7b51 mov ebp, esp */
  EBP = (ESP);
  /* 103a7b53 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7b54 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7b58 jne 0x103a7b69 */
  if (!C.zf) goto L_103a7b69;
  /* 103a7b5a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7b5e jge 0x103a7b69 */
  if ((C.sf==C.of)) goto L_103a7b69;
  /* 103a7b60 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103a7b67 jmp 0x103a7b70 */
  goto L_103a7b70;
L_103a7b69:;
  /* 103a7b69 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103a7b70:;
  /* 103a7b70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7b73 push eax */
  push32((uint32_t)(EAX));
  /* 103a7b74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7b77 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7b78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7b7b push edx */
  push32((uint32_t)(EDX));
  /* 103a7b7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7b7f push eax */
  push32((uint32_t)(EAX));
  /* 103a7b80 call 0x103a7a80 */
  push32(0x103a7b85u); f_103a7a80();
  /* 103a7b85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7b88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7b8b mov esp, ebp */
  ESP = (EBP);
  /* 103a7b8d pop ebp */
  EBP = (pop32());
  /* 103a7b8e ret  */
  ESPCHK(0x103a7b50u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x103a7b90 (30 bytes, 14 insns) */
void f_103a7b90(void) {
  FTRACE(0x103a7b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7b90 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7b91 mov ebp, esp */
  EBP = (ESP);
  /* 103a7b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7b95 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7b98 push eax */
  push32((uint32_t)(EAX));
  /* 103a7b99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7b9c push ecx */
  push32((uint32_t)(ECX));
  /* 103a7b9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7ba0 push edx */
  push32((uint32_t)(EDX));
  /* 103a7ba1 call 0x103a7a80 */
  push32(0x103a7ba6u); f_103a7a80();
  /* 103a7ba6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7ba9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7bac pop ebp */
  EBP = (pop32());
  /* 103a7bad ret  */
  ESPCHK(0x103a7b90u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x103a7bb0 (72 bytes, 28 insns) */
void f_103a7bb0(void) {
  FTRACE(0x103a7bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7bb1 mov ebp, esp */
  EBP = (ESP);
  /* 103a7bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7bb4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7bb8 jne 0x103a7bd1 */
  if (!C.zf) goto L_103a7bd1;
  /* 103a7bba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7bbe jg 0x103a7bd1 */
  if ((!C.zf&&C.sf==C.of)) goto L_103a7bd1;
  /* 103a7bc0 jl 0x103a7bc8 */
  if ((C.sf!=C.of)) goto L_103a7bc8;
  /* 103a7bc2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7bc6 jae 0x103a7bd1 */
  if (!C.cf) goto L_103a7bd1;
L_103a7bc8:;
  /* 103a7bc8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103a7bcf jmp 0x103a7bd8 */
  goto L_103a7bd8;
L_103a7bd1:;
  /* 103a7bd1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103a7bd8:;
  /* 103a7bd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7bdb push eax */
  push32((uint32_t)(EAX));
  /* 103a7bdc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a7bdf push ecx */
  push32((uint32_t)(ECX));
  /* 103a7be0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7be3 push edx */
  push32((uint32_t)(EDX));
  /* 103a7be4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7be7 push eax */
  push32((uint32_t)(EAX));
  /* 103a7be8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7beb push ecx */
  push32((uint32_t)(ECX));
  /* 103a7bec call 0x103a7c00 */
  push32(0x103a7bf1u); f_103a7c00();
  /* 103a7bf1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7bf4 mov esp, ebp */
  ESP = (EBP);
  /* 103a7bf6 pop ebp */
  EBP = (pop32());
  /* 103a7bf7 ret  */
  ESPCHK(0x103a7bb0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x103a7c00 (242 bytes, 91 insns) */
void f_103a7c00(void) {
  FTRACE(0x103a7c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7c00 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7c01 mov ebp, esp */
  EBP = (ESP);
  /* 103a7c03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7c06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7c09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a7c0c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7c10 je 0x103a7c34 */
  if (C.zf) goto L_103a7c34;
  /* 103a7c12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7c15 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 103a7c18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7c1b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7c1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a7c21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7c24 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103a7c26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7c29 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7c2c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103a7c2e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103a7c31 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_103a7c34:;
  /* 103a7c34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7c37 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103a7c3a:;
  /* 103a7c3a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a7c3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a7c3f push ecx */
  push32((uint32_t)(ECX));
  /* 103a7c40 push eax */
  push32((uint32_t)(EAX));
  /* 103a7c41 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7c44 push edx */
  push32((uint32_t)(EDX));
  /* 103a7c45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7c48 push eax */
  push32((uint32_t)(EAX));
  /* 103a7c49 call 0x103abb80 */
  push32(0x103a7c4eu); f_103abb80();
  /* 103a7c4e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a7c51 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a7c54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a7c56 push edx */
  push32((uint32_t)(EDX));
  /* 103a7c57 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7c58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7c5b push eax */
  push32((uint32_t)(EAX));
  /* 103a7c5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7c5f push ecx */
  push32((uint32_t)(ECX));
  /* 103a7c60 call 0x103abb10 */
  push32(0x103a7c65u); f_103abb10();
  /* 103a7c65 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 103a7c68 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 103a7c6b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7c6f jbe 0x103a7c87 */
  if ((C.cf||C.zf)) goto L_103a7c87;
  /* 103a7c71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7c74 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7c77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7c7a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103a7c7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7c7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7c82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103a7c85 jmp 0x103a7c9b */
  goto L_103a7c9b;
L_103a7c87:;
  /* 103a7c87 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a7c8a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7c8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7c90 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103a7c92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7c95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7c98 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103a7c9b:;
  /* 103a7c9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7c9f ja 0x103a7c3a */
  if ((!C.cf&&!C.zf)) goto L_103a7c3a;
  /* 103a7ca1 jb 0x103a7ca9 */
  if (C.cf) goto L_103a7ca9;
  /* 103a7ca3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7ca7 ja 0x103a7c3a */
  if ((!C.cf&&!C.zf)) goto L_103a7c3a;
L_103a7ca9:;
  /* 103a7ca9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7cac mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103a7caf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7cb2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7cb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a7cb8:;
  /* 103a7cb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7cbb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103a7cbd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 103a7cc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7cc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7cc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103a7cc8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103a7cca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7ccd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 103a7cd0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 103a7cd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a7cd5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7cd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103a7cdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7cde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7ce1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a7ce4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a7ce7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7cea jb 0x103a7cb8 */
  if (C.cf) goto L_103a7cb8;
  /* 103a7cec mov esp, ebp */
  ESP = (EBP);
  /* 103a7cee pop ebp */
  EBP = (pop32());
  /* 103a7cef ret 0x14 */
  ESPCHK(0x103a7c00u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x103a7d00 (31 bytes, 15 insns) */
void f_103a7d00(void) {
  FTRACE(0x103a7d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7d00 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7d01 mov ebp, esp */
  EBP = (ESP);
  /* 103a7d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7d05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a7d08 push eax */
  push32((uint32_t)(EAX));
  /* 103a7d09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7d0c push ecx */
  push32((uint32_t)(ECX));
  /* 103a7d0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7d10 push edx */
  push32((uint32_t)(EDX));
  /* 103a7d11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7d14 push eax */
  push32((uint32_t)(EAX));
  /* 103a7d15 call 0x103a7c00 */
  push32(0x103a7d1au); f_103a7c00();
  /* 103a7d1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7d1d pop ebp */
  EBP = (pop32());
  /* 103a7d1e ret  */
  ESPCHK(0x103a7d00u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x103a7d20 (123 bytes, 44 insns) */
void f_103a7d20(void) {
  FTRACE(0x103a7d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7d20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103a7d24 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103a7d2a je 0x103a7d40 */
  if (C.zf) goto L_103a7d40;
L_103a7d2c:;
  /* 103a7d2c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 103a7d2e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103a7d2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103a7d31 je 0x103a7d73 */
  if (C.zf) goto L_103a7d73;
  /* 103a7d33 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103a7d39 jne 0x103a7d2c */
  if (!C.zf) goto L_103a7d2c;
  /* 103a7d3b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_103a7d40:;
  /* 103a7d40 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103a7d42 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103a7d47 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7d49 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a7d4c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103a7d4e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7d51 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103a7d56 je 0x103a7d40 */
  if (C.zf) goto L_103a7d40;
  /* 103a7d58 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 103a7d5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103a7d5d je 0x103a7d91 */
  if (C.zf) goto L_103a7d91;
  /* 103a7d5f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103a7d61 je 0x103a7d87 */
  if (C.zf) goto L_103a7d87;
  /* 103a7d63 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 103a7d68 je 0x103a7d7d */
  if (C.zf) goto L_103a7d7d;
  /* 103a7d6a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 103a7d6f je 0x103a7d73 */
  if (C.zf) goto L_103a7d73;
  /* 103a7d71 jmp 0x103a7d40 */
  goto L_103a7d40;
L_103a7d73:;
  /* 103a7d73 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 103a7d76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103a7d7a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7d7c ret  */
  ESPCHK(0x103a7d20u, _esp0);
  ESP += 4; return;
L_103a7d7d:;
  /* 103a7d7d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 103a7d80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103a7d84 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7d86 ret  */
  ESPCHK(0x103a7d20u, _esp0);
  ESP += 4; return;
L_103a7d87:;
  /* 103a7d87 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 103a7d8a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103a7d8e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7d90 ret  */
  ESPCHK(0x103a7d20u, _esp0);
  ESP += 4; return;
L_103a7d91:;
  /* 103a7d91 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 103a7d94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103a7d98 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7d9a ret  */
  ESPCHK(0x103a7d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007da0 @ 0x103a7da0 (249 bytes, 93 insns) */
void f_103a7da0(void) {
  FTRACE(0x103a7da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7da0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7da1 mov ebp, esp */
  EBP = (ESP);
  /* 103a7da3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7da6 push ebx */
  push32((uint32_t)(EBX));
  /* 103a7da7 push esi */
  push32((uint32_t)(ESI));
  /* 103a7da8 push edi */
  push32((uint32_t)(EDI));
  /* 103a7da9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 103a7dac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103a7daf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 103a7db2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_103a7db5:;
  /* 103a7db5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7db9 jne 0x103a7dd9 */
  if (!C.zf) goto L_103a7dd9;
  /* 103a7dbb push 0x103cc0e8 */
  push32((uint32_t)(0x103cc0e8u));
  /* 103a7dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7dc2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 103a7dc4 push 0x103cc0dc */
  push32((uint32_t)(0x103cc0dcu));
  /* 103a7dc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a7dcb call 0x103a3fb0 */
  push32(0x103a7dd0u); f_103a3fb0();
  /* 103a7dd0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7dd3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7dd6 jne 0x103a7dd9 */
  if (!C.zf) goto L_103a7dd9;
  /* 103a7dd8 int3  */
  x86_unimpl("int3 @ 0x103a7dd8");
L_103a7dd9:;
  /* 103a7dd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a7ddb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a7ddd jne 0x103a7db5 */
  if (!C.zf) goto L_103a7db5;
L_103a7ddf:;
  /* 103a7ddf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7de3 jne 0x103a7e03 */
  if (!C.zf) goto L_103a7e03;
  /* 103a7de5 push 0x103cc0cc */
  push32((uint32_t)(0x103cc0ccu));
  /* 103a7dea push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7dec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 103a7dee push 0x103cc0dc */
  push32((uint32_t)(0x103cc0dcu));
  /* 103a7df3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a7df5 call 0x103a3fb0 */
  push32(0x103a7dfau); f_103a3fb0();
  /* 103a7dfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7dfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7e00 jne 0x103a7e03 */
  if (!C.zf) goto L_103a7e03;
  /* 103a7e02 int3  */
  x86_unimpl("int3 @ 0x103a7e02");
L_103a7e03:;
  /* 103a7e03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a7e05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a7e07 jne 0x103a7ddf */
  if (!C.zf) goto L_103a7ddf;
  /* 103a7e09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e0c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 103a7e13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7e19 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103a7e1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a7e22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103a7e24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a7e2a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103a7e2d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 103a7e30 push edx */
  push32((uint32_t)(EDX));
  /* 103a7e31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a7e34 push eax */
  push32((uint32_t)(EAX));
  /* 103a7e35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e38 push ecx */
  push32((uint32_t)(ECX));
  /* 103a7e39 call 0x103abe80 */
  push32(0x103a7e3eu); f_103abe80();
  /* 103a7e3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7e41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103a7e44 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e47 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103a7e4a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7e4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103a7e53 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e56 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7e5a jl 0x103a7e7e */
  if ((C.sf!=C.of)) goto L_103a7e7e;
  /* 103a7e5c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a7e61 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 103a7e64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a7e66 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a7e6c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 103a7e6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e72 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a7e74 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7e77 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e7a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103a7e7c jmp 0x103a7e8f */
  goto L_103a7e8f;
L_103a7e7e:;
  /* 103a7e7e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7e81 push eax */
  push32((uint32_t)(EAX));
  /* 103a7e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7e84 call 0x103abc00 */
  push32(0x103a7e89u); f_103abc00();
  /* 103a7e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7e8c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_103a7e8f:;
  /* 103a7e8f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a7e92 pop edi */
  EDI = (pop32());
  /* 103a7e93 pop esi */
  ESI = (pop32());
  /* 103a7e94 pop ebx */
  EBX = (pop32());
  /* 103a7e95 mov esp, ebp */
  ESP = (EBP);
  /* 103a7e97 pop ebp */
  EBP = (pop32());
  /* 103a7e98 ret  */
  ESPCHK(0x103a7da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea0 @ 0x103a7ea0 (7 bytes, 3 insns) */
void f_103a7ea0(void) {
  FTRACE(0x103a7ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7ea0 push edi */
  push32((uint32_t)(EDI));
  /* 103a7ea1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 103a7ea5 jmp 0x103a7f11 */
  jmp_ind(0x103a7f11u); return;
}

/* FUN_10007eb0 @ 0x103a7eb0 (224 bytes, 84 insns) */
void f_103a7eb0(void) {
  FTRACE(0x103a7eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7eb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103a7eb4 push edi */
  push32((uint32_t)(EDI));
  /* 103a7eb5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103a7ebb je 0x103a7ecc */
  if (C.zf) goto L_103a7ecc;
L_103a7ebd:;
  /* 103a7ebd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 103a7ebf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103a7ec0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103a7ec2 je 0x103a7eff */
  if (C.zf) goto L_103a7eff;
  /* 103a7ec4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103a7eca jne 0x103a7ebd */
  if (!C.zf) goto L_103a7ebd;
L_103a7ecc:;
  /* 103a7ecc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103a7ece mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103a7ed3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7ed5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a7ed8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103a7eda add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7edd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103a7ee2 je 0x103a7ecc */
  if (C.zf) goto L_103a7ecc;
  /* 103a7ee4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 103a7ee7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103a7ee9 je 0x103a7f0e */
  if (C.zf) goto L_103a7f0e;
  /* 103a7eeb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103a7eed je 0x103a7f09 */
  if (C.zf) goto L_103a7f09;
  /* 103a7eef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 103a7ef4 je 0x103a7f04 */
  if (C.zf) goto L_103a7f04;
  /* 103a7ef6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 103a7efb je 0x103a7eff */
  if (C.zf) goto L_103a7eff;
  /* 103a7efd jmp 0x103a7ecc */
  goto L_103a7ecc;
L_103a7eff:;
  /* 103a7eff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 103a7f02 jmp 0x103a7f11 */
  goto L_103a7f11;
L_103a7f04:;
  /* 103a7f04 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 103a7f07 jmp 0x103a7f11 */
  goto L_103a7f11;
L_103a7f09:;
  /* 103a7f09 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 103a7f0c jmp 0x103a7f11 */
  goto L_103a7f11;
L_103a7f0e:;
  /* 103a7f0e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_103a7f11:;
  /* 103a7f11 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 103a7f15 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103a7f1b je 0x103a7f36 */
  if (C.zf) goto L_103a7f36;
L_103a7f1d:;
  /* 103a7f1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103a7f1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103a7f20 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103a7f22 je 0x103a7f88 */
  if (C.zf) goto L_103a7f88;
  /* 103a7f24 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 103a7f26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103a7f27 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103a7f2d jne 0x103a7f1d */
  if (!C.zf) goto L_103a7f1d;
  /* 103a7f2f jmp 0x103a7f36 */
  goto L_103a7f36;
L_103a7f31:;
  /* 103a7f31 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103a7f33 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103a7f36:;
  /* 103a7f36 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103a7f3b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103a7f3d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7f3f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a7f42 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103a7f44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a7f46 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7f49 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103a7f4e je 0x103a7f31 */
  if (C.zf) goto L_103a7f31;
  /* 103a7f50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103a7f52 je 0x103a7f88 */
  if (C.zf) goto L_103a7f88;
  /* 103a7f54 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 103a7f56 je 0x103a7f7f */
  if (C.zf) goto L_103a7f7f;
  /* 103a7f58 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 103a7f5e je 0x103a7f72 */
  if (C.zf) goto L_103a7f72;
  /* 103a7f60 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 103a7f66 je 0x103a7f6a */
  if (C.zf) goto L_103a7f6a;
  /* 103a7f68 jmp 0x103a7f31 */
  goto L_103a7f31;
L_103a7f6a:;
  /* 103a7f6a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103a7f6c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103a7f70 pop edi */
  EDI = (pop32());
  /* 103a7f71 ret  */
  ESPCHK(0x103a7eb0u, _esp0);
  ESP += 4; return;
L_103a7f72:;
  /* 103a7f72 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 103a7f75 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103a7f79 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 103a7f7d pop edi */
  EDI = (pop32());
  /* 103a7f7e ret  */
  ESPCHK(0x103a7eb0u, _esp0);
  ESP += 4; return;
L_103a7f7f:;
  /* 103a7f7f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 103a7f82 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103a7f86 pop edi */
  EDI = (pop32());
  /* 103a7f87 ret  */
  ESPCHK(0x103a7eb0u, _esp0);
  ESP += 4; return;
L_103a7f88:;
  /* 103a7f88 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 103a7f8a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103a7f8e pop edi */
  EDI = (pop32());
  /* 103a7f8f ret  */
  ESPCHK(0x103a7eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f90 @ 0x103a7f90 (243 bytes, 91 insns) */
void f_103a7f90(void) {
  FTRACE(0x103a7f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a7f90 push ebp */
  push32((uint32_t)(EBP));
  /* 103a7f91 mov ebp, esp */
  EBP = (ESP);
  /* 103a7f93 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a7f96 push ebx */
  push32((uint32_t)(EBX));
  /* 103a7f97 push esi */
  push32((uint32_t)(ESI));
  /* 103a7f98 push edi */
  push32((uint32_t)(EDI));
  /* 103a7f99 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 103a7f9c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_103a7f9f:;
  /* 103a7f9f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7fa3 jne 0x103a7fc3 */
  if (!C.zf) goto L_103a7fc3;
  /* 103a7fa5 push 0x103cc0e8 */
  push32((uint32_t)(0x103cc0e8u));
  /* 103a7faa push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7fac push 0x5a */
  push32((uint32_t)(0x5au));
  /* 103a7fae push 0x103cc0f8 */
  push32((uint32_t)(0x103cc0f8u));
  /* 103a7fb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a7fb5 call 0x103a3fb0 */
  push32(0x103a7fbau); f_103a3fb0();
  /* 103a7fba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7fbd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7fc0 jne 0x103a7fc3 */
  if (!C.zf) goto L_103a7fc3;
  /* 103a7fc2 int3  */
  x86_unimpl("int3 @ 0x103a7fc2");
L_103a7fc3:;
  /* 103a7fc3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a7fc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a7fc7 jne 0x103a7f9f */
  if (!C.zf) goto L_103a7f9f;
L_103a7fc9:;
  /* 103a7fc9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7fcd jne 0x103a7fed */
  if (!C.zf) goto L_103a7fed;
  /* 103a7fcf push 0x103cc0cc */
  push32((uint32_t)(0x103cc0ccu));
  /* 103a7fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a7fd6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 103a7fd8 push 0x103cc0f8 */
  push32((uint32_t)(0x103cc0f8u));
  /* 103a7fdd push 2 */
  push32((uint32_t)(0x2u));
  /* 103a7fdf call 0x103a3fb0 */
  push32(0x103a7fe4u); f_103a3fb0();
  /* 103a7fe4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a7fe7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a7fea jne 0x103a7fed */
  if (!C.zf) goto L_103a7fed;
  /* 103a7fec int3  */
  x86_unimpl("int3 @ 0x103a7fec");
L_103a7fed:;
  /* 103a7fed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a7fef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a7ff1 jne 0x103a7fc9 */
  if (!C.zf) goto L_103a7fc9;
  /* 103a7ff3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a7ff6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 103a7ffd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a8000 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8003 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103a8006 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a8009 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a800c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103a800e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a8011 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8014 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 103a8017 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103a801a push ecx */
  push32((uint32_t)(ECX));
  /* 103a801b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a801e push edx */
  push32((uint32_t)(EDX));
  /* 103a801f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a8022 push eax */
  push32((uint32_t)(EAX));
  /* 103a8023 call 0x103abe80 */
  push32(0x103a8028u); f_103abe80();
  /* 103a8028 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a802b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103a802e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a8031 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103a8034 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a8037 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a803a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 103a803d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a8040 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8044 jl 0x103a8068 */
  if ((C.sf!=C.of)) goto L_103a8068;
  /* 103a8046 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a8049 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a804b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 103a804e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103a8050 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103a8056 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 103a8059 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a805c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a805e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8061 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a8064 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103a8066 jmp 0x103a8079 */
  goto L_103a8079;
L_103a8068:;
  /* 103a8068 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103a806b push edx */
  push32((uint32_t)(EDX));
  /* 103a806c push 0 */
  push32((uint32_t)(0x0u));
  /* 103a806e call 0x103abc00 */
  push32(0x103a8073u); f_103abc00();
  /* 103a8073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8076 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_103a8079:;
  /* 103a8079 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 103a807c pop edi */
  EDI = (pop32());
  /* 103a807d pop esi */
  ESI = (pop32());
  /* 103a807e pop ebx */
  EBX = (pop32());
  /* 103a807f mov esp, ebp */
  ESP = (EBP);
  /* 103a8081 pop ebp */
  EBP = (pop32());
  /* 103a8082 ret  */
  ESPCHK(0x103a7f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008090 @ 0x103a8090 (47 bytes, 17 insns) */
void f_103a8090(void) {
  FTRACE(0x103a8090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8090 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8091 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8096 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 103a809a jb 0x103a80b0 */
  if (C.cf) goto L_103a80b0;
L_103a809c:;
  /* 103a809c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a80a2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a80a7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 103a80a9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a80ae jae 0x103a809c */
  if (!C.cf) goto L_103a809c;
L_103a80b0:;
  /* 103a80b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a80b2 mov eax, esp */
  EAX = (ESP);
  /* 103a80b4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 103a80b6 mov esp, ecx */
  ESP = (ECX);
  /* 103a80b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a80ba mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a80bd push eax */
  push32((uint32_t)(EAX));
  /* 103a80be ret  */
  ESPCHK(0x103a8090u, _esp0);
  ESP += 4; return;
}

/* FUN_100080c0 @ 0x103a80c0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_103a80c0(void) {
  FTRACE(0x103a80c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a80c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a80c1 mov ebp, esp */
  EBP = (ESP);
  /* 103a80c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a80c6 push esi */
  push32((uint32_t)(ESI));
  /* 103a80c7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a80cb je 0x103a80d3 */
  if (C.zf) goto L_103a80d3;
  /* 103a80cd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a80d1 jne 0x103a80d8 */
  if (!C.zf) goto L_103a80d8;
L_103a80d3:;
  /* 103a80d3 jmp 0x103a82a8 */
  goto L_103a82a8;
L_103a80d8:;
  /* 103a80d8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a80dc je 0x103a80f4 */
  if (C.zf) goto L_103a80f4;
  /* 103a80de cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a80e2 je 0x103a80f4 */
  if (C.zf) goto L_103a80f4;
  /* 103a80e4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a80e8 je 0x103a80f4 */
  if (C.zf) goto L_103a80f4;
  /* 103a80ea cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a80ee jne 0x103a81d1 */
  if (!C.zf) goto L_103a81d1;
L_103a80f4:;
  /* 103a80f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a80f6 call 0x103a88f0 */
  push32(0x103a80fbu); f_103a88f0();
  /* 103a80fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a80fe cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8102 je 0x103a810a */
  if (C.zf) goto L_103a810a;
  /* 103a8104 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8108 jne 0x103a814f */
  if (!C.zf) goto L_103a814f;
L_103a810a:;
  /* 103a810a cmp dword ptr [0x103d0768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8111 jne 0x103a814f */
  if (!C.zf) goto L_103a814f;
  /* 103a8113 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a8115 push 0x103a82f0 */
  push32((uint32_t)(0x103a82f0u));
  /* 103a811a call dword ptr [0x103d3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3324))), 0x103a8120u);
  /* 103a8120 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8123 jne 0x103a8131 */
  if (!C.zf) goto L_103a8131;
  /* 103a8125 mov dword ptr [0x103d0768], 1 */
  w32((uint32_t)(0x103d0768), (0x1u));
  /* 103a812f jmp 0x103a814f */
  goto L_103a814f;
L_103a8131:;
  /* 103a8131 call dword ptr [0x103d3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3378))), 0x103a8137u);
  /* 103a8137 mov esi, eax */
  ESI = (EAX);
  /* 103a8139 call 0x103acdd0 */
  push32(0x103a813eu); f_103acdd0();
  /* 103a813e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 103a8140 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a8142 call 0x103a8990 */
  push32(0x103a8147u); f_103a8990();
  /* 103a8147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a814a jmp 0x103a82a8 */
  goto L_103a82a8;
L_103a814f:;
  /* 103a814f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8152 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103a8155 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8158 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a815b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103a815e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8162 ja 0x103a81c2 */
  if ((!C.cf&&!C.zf)) goto L_103a81c2;
  /* 103a8164 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8167 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a8169 mov dl, byte ptr [eax + 0x103a82cf] */
  DL = (r8((uint32_t)(EAX + 0x103a82cf)));
  /* 103a816f jmp dword ptr [edx*4 + 0x103a82bb] */
  switch (EDX) {
    case 0: goto L_103a8176;
    case 1: goto L_103a81b0;
    case 2: goto L_103a818a;
    case 3: goto L_103a819d;
    case 4: goto L_103a81c2;
    default: x86_unimpl("switch@0x103a816f out of table"); return;
  }
L_103a8176:;
  /* 103a8176 mov ecx, dword ptr [0x103d0758] */
  ECX = (r32((uint32_t)(0x103d0758)));
  /* 103a817c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103a817f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8182 mov dword ptr [0x103d0758], edx */
  w32((uint32_t)(0x103d0758), (EDX));
  /* 103a8188 jmp 0x103a81c2 */
  goto L_103a81c2;
L_103a818a:;
  /* 103a818a mov eax, dword ptr [0x103d075c] */
  EAX = (r32((uint32_t)(0x103d075c)));
  /* 103a818f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a8192 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8195 mov dword ptr [0x103d075c], ecx */
  w32((uint32_t)(0x103d075c), (ECX));
  /* 103a819b jmp 0x103a81c2 */
  goto L_103a81c2;
L_103a819d:;
  /* 103a819d mov edx, dword ptr [0x103d0760] */
  EDX = (r32((uint32_t)(0x103d0760)));
  /* 103a81a3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103a81a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a81a9 mov dword ptr [0x103d0760], eax */
  w32((uint32_t)(0x103d0760), (EAX));
  /* 103a81ae jmp 0x103a81c2 */
  goto L_103a81c2;
L_103a81b0:;
  /* 103a81b0 mov ecx, dword ptr [0x103d0764] */
  ECX = (r32((uint32_t)(0x103d0764)));
  /* 103a81b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103a81b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a81bc mov dword ptr [0x103d0764], edx */
  w32((uint32_t)(0x103d0764), (EDX));
L_103a81c2:;
  /* 103a81c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a81c4 call 0x103a8990 */
  push32(0x103a81c9u); f_103a8990();
  /* 103a81c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a81cc jmp 0x103a82a3 */
  goto L_103a82a3;
L_103a81d1:;
  /* 103a81d1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a81d5 je 0x103a81e8 */
  if (C.zf) goto L_103a81e8;
  /* 103a81d7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a81db je 0x103a81e8 */
  if (C.zf) goto L_103a81e8;
  /* 103a81dd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a81e1 je 0x103a81e8 */
  if (C.zf) goto L_103a81e8;
  /* 103a81e3 jmp 0x103a82a8 */
  goto L_103a82a8;
L_103a81e8:;
  /* 103a81e8 call 0x103a4930 */
  push32(0x103a81edu); f_103a4930();
  /* 103a81ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a81f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a81f3 cmp dword ptr [eax + 0x50], 0x103cec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x103cec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a81fa jne 0x103a8245 */
  if (!C.zf) goto L_103a8245;
  /* 103a81fc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 103a8201 push 0x103cc104 */
  push32((uint32_t)(0x103cc104u));
  /* 103a8206 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a8208 mov ecx, dword ptr [0x103cec80] */
  ECX = (r32((uint32_t)(0x103cec80)));
  /* 103a820e push ecx */
  push32((uint32_t)(ECX));
  /* 103a820f call 0x103a4ef0 */
  push32(0x103a8214u); f_103a4ef0();
  /* 103a8214 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8217 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a821a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 103a821d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8220 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8224 je 0x103a8243 */
  if (C.zf) goto L_103a8243;
  /* 103a8226 mov ecx, dword ptr [0x103cec80] */
  ECX = (r32((uint32_t)(0x103cec80)));
  /* 103a822c push ecx */
  push32((uint32_t)(ECX));
  /* 103a822d push 0x103cec00 */
  push32((uint32_t)(0x103cec00u));
  /* 103a8232 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8235 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 103a8238 push eax */
  push32((uint32_t)(EAX));
  /* 103a8239 call 0x103ab7d0 */
  push32(0x103a823eu); f_103ab7d0();
  /* 103a823e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8241 jmp 0x103a8245 */
  goto L_103a8245;
L_103a8243:;
  /* 103a8243 jmp 0x103a82a8 */
  goto L_103a82a8;
L_103a8245:;
  /* 103a8245 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8248 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 103a824b push edx */
  push32((uint32_t)(EDX));
  /* 103a824c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a824f push eax */
  push32((uint32_t)(EAX));
  /* 103a8250 call 0x103a85d0 */
  push32(0x103a8255u); f_103a85d0();
  /* 103a8255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8258 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a825b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a825f jne 0x103a8263 */
  if (!C.zf) goto L_103a8263;
  /* 103a8261 jmp 0x103a82a8 */
  goto L_103a82a8;
L_103a8263:;
  /* 103a8263 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8266 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 103a8269 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_103a826c:;
  /* 103a826c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a826f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a8272 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8275 jne 0x103a82a3 */
  if (!C.zf) goto L_103a82a3;
  /* 103a8277 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a827a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a827d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103a8280 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8283 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8286 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103a8289 mov edx, dword ptr [0x103cec84] */
  EDX = (r32((uint32_t)(0x103cec84)));
  /* 103a828f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a8292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8295 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 103a8298 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a829a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a829d jb 0x103a82a1 */
  if (C.cf) goto L_103a82a1;
  /* 103a829f jmp 0x103a82a3 */
  goto L_103a82a3;
L_103a82a1:;
  /* 103a82a1 jmp 0x103a826c */
  goto L_103a826c;
L_103a82a3:;
  /* 103a82a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a82a6 jmp 0x103a82b6 */
  goto L_103a82b6;
L_103a82a8:;
  /* 103a82a8 call 0x103acdc0 */
  push32(0x103a82adu); f_103acdc0();
  /* 103a82ad mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 103a82b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103a82b6:;
  /* 103a82b6 pop esi */
  ESI = (pop32());
  /* 103a82b7 mov esp, ebp */
  ESP = (EBP);
  /* 103a82b9 pop ebp */
  EBP = (pop32());
  /* 103a82ba ret  */
  ESPCHK(0x103a80c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082f0 @ 0x103a82f0 (146 bytes, 45 insns) */
void f_103a82f0(void) {
  FTRACE(0x103a82f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a82f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a82f1 mov ebp, esp */
  EBP = (ESP);
  /* 103a82f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a82f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a82f8 call 0x103a88f0 */
  push32(0x103a82fdu); f_103a88f0();
  /* 103a82fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8300 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8304 jne 0x103a831e */
  if (!C.zf) goto L_103a831e;
  /* 103a8306 mov dword ptr [ebp - 8], 0x103d0758 */
  w32((uint32_t)(EBP + -0x8), (0x103d0758u));
  /* 103a830d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8310 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103a8312 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103a8315 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 103a831c jmp 0x103a8334 */
  goto L_103a8334;
L_103a831e:;
  /* 103a831e mov dword ptr [ebp - 8], 0x103d075c */
  w32((uint32_t)(EBP + -0x8), (0x103d075cu));
  /* 103a8325 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8328 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a832a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a832d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_103a8334:;
  /* 103a8334 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8338 jne 0x103a8348 */
  if (!C.zf) goto L_103a8348;
  /* 103a833a push 1 */
  push32((uint32_t)(0x1u));
  /* 103a833c call 0x103a8990 */
  push32(0x103a8341u); f_103a8990();
  /* 103a8341 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a8346 jmp 0x103a837c */
  goto L_103a837c;
L_103a8348:;
  /* 103a8348 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a834c je 0x103a836d */
  if (C.zf) goto L_103a836d;
  /* 103a834e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8351 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 103a8357 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a8359 call 0x103a8990 */
  push32(0x103a835eu); f_103a8990();
  /* 103a835e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8364 push edx */
  push32((uint32_t)(EDX));
  /* 103a8365 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x103a8368u);
  /* 103a8368 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a836b jmp 0x103a8377 */
  goto L_103a8377;
L_103a836d:;
  /* 103a836d push 1 */
  push32((uint32_t)(0x1u));
  /* 103a836f call 0x103a8990 */
  push32(0x103a8374u); f_103a8990();
  /* 103a8374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a8377:;
  /* 103a8377 mov eax, 1 */
  EAX = (0x1u);
L_103a837c:;
  /* 103a837c mov esp, ebp */
  ESP = (EBP);
  /* 103a837e pop ebp */
  EBP = (pop32());
  /* 103a837f ret 4 */
  ESPCHK(0x103a82f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008390 @ 0x103a8390 (522 bytes, 162 insns) [1 switch table(s)] */
void f_103a8390(void) {
  FTRACE(0x103a8390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8390 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8391 mov ebp, esp */
  EBP = (ESP);
  /* 103a8393 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a8396 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103a839d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a83a0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103a83a3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a83a6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a83a9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 103a83ac cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a83b0 ja 0x103a845e */
  if ((!C.cf&&!C.zf)) goto L_103a845e;
  /* 103a83b6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 103a83b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a83bb mov dl, byte ptr [eax + 0x103a85b2] */
  DL = (r8((uint32_t)(EAX + 0x103a85b2)));
  /* 103a83c1 jmp dword ptr [edx*4 + 0x103a859a] */
  switch (EDX) {
    case 0: goto L_103a83c8;
    case 1: goto L_103a8433;
    case 2: goto L_103a8419;
    case 3: goto L_103a83e5;
    case 4: goto L_103a83ff;
    case 5: goto L_103a845e;
    default: x86_unimpl("switch@0x103a83c1 out of table"); return;
  }
L_103a83c8:;
  /* 103a83c8 mov dword ptr [ebp - 0x18], 0x103d0758 */
  w32((uint32_t)(EBP + -0x18), (0x103d0758u));
  /* 103a83cf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a83d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a83d4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103a83d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a83da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a83dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a83e0 jmp 0x103a8466 */
  goto L_103a8466;
L_103a83e5:;
  /* 103a83e5 mov dword ptr [ebp - 0x18], 0x103d075c */
  w32((uint32_t)(EBP + -0x18), (0x103d075cu));
  /* 103a83ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a83ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a83f1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103a83f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a83f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a83fa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a83fd jmp 0x103a8466 */
  goto L_103a8466;
L_103a83ff:;
  /* 103a83ff mov dword ptr [ebp - 0x18], 0x103d0760 */
  w32((uint32_t)(EBP + -0x18), (0x103d0760u));
  /* 103a8406 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a8409 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a840b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103a840e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a8411 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8414 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a8417 jmp 0x103a8466 */
  goto L_103a8466;
L_103a8419:;
  /* 103a8419 mov dword ptr [ebp - 0x18], 0x103d0764 */
  w32((uint32_t)(EBP + -0x18), (0x103d0764u));
  /* 103a8420 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a8423 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a8425 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103a8428 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a842b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a842e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103a8431 jmp 0x103a8466 */
  goto L_103a8466;
L_103a8433:;
  /* 103a8433 call 0x103a4930 */
  push32(0x103a8438u); f_103a4930();
  /* 103a8438 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a843b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a843e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 103a8441 push edx */
  push32((uint32_t)(EDX));
  /* 103a8442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8445 push eax */
  push32((uint32_t)(EAX));
  /* 103a8446 call 0x103a85d0 */
  push32(0x103a844bu); f_103a85d0();
  /* 103a844b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a844e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8451 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 103a8454 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a8457 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a8459 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 103a845c jmp 0x103a8466 */
  goto L_103a8466;
L_103a845e:;
  /* 103a845e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a8461 jmp 0x103a8596 */
  goto L_103a8596;
L_103a8466:;
  /* 103a8466 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a846a je 0x103a8476 */
  if (C.zf) goto L_103a8476;
  /* 103a846c push 1 */
  push32((uint32_t)(0x1u));
  /* 103a846e call 0x103a88f0 */
  push32(0x103a8473u); f_103a88f0();
  /* 103a8473 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a8476:;
  /* 103a8476 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a847a jne 0x103a8493 */
  if (!C.zf) goto L_103a8493;
  /* 103a847c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8480 je 0x103a848c */
  if (C.zf) goto L_103a848c;
  /* 103a8482 push 1 */
  push32((uint32_t)(0x1u));
  /* 103a8484 call 0x103a8990 */
  push32(0x103a8489u); f_103a8990();
  /* 103a8489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a848c:;
  /* 103a848c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a848e jmp 0x103a8596 */
  goto L_103a8596;
L_103a8493:;
  /* 103a8493 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8497 jne 0x103a84b0 */
  if (!C.zf) goto L_103a84b0;
  /* 103a8499 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a849d je 0x103a84a9 */
  if (C.zf) goto L_103a84a9;
  /* 103a849f push 1 */
  push32((uint32_t)(0x1u));
  /* 103a84a1 call 0x103a8990 */
  push32(0x103a84a6u); f_103a8990();
  /* 103a84a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a84a9:;
  /* 103a84a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 103a84ab call 0x103a46b0 */
  push32(0x103a84b0u); f_103a46b0();
L_103a84b0:;
  /* 103a84b0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a84b4 je 0x103a84c2 */
  if (C.zf) goto L_103a84c2;
  /* 103a84b6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a84ba je 0x103a84c2 */
  if (C.zf) goto L_103a84c2;
  /* 103a84bc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a84c0 jne 0x103a84ee */
  if (!C.zf) goto L_103a84ee;
L_103a84c2:;
  /* 103a84c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a84c5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 103a84c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103a84cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a84ce mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 103a84d5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a84d9 jne 0x103a84ee */
  if (!C.zf) goto L_103a84ee;
  /* 103a84db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a84de mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 103a84e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103a84e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a84e7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_103a84ee:;
  /* 103a84ee cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a84f2 jne 0x103a8530 */
  if (!C.zf) goto L_103a8530;
  /* 103a84f4 mov eax, dword ptr [0x103cec78] */
  EAX = (r32((uint32_t)(0x103cec78)));
  /* 103a84f9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103a84fc jmp 0x103a8507 */
  goto L_103a8507;
L_103a84fe:;
  /* 103a84fe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8501 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8504 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_103a8507:;
  /* 103a8507 mov edx, dword ptr [0x103cec78] */
  EDX = (r32((uint32_t)(0x103cec78)));
  /* 103a850d add edx, dword ptr [0x103cec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x103cec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8513 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8516 jge 0x103a852e */
  if ((C.sf==C.of)) goto L_103a852e;
  /* 103a8518 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a851b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a851e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8521 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 103a8524 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 103a852c jmp 0x103a84fe */
  goto L_103a84fe;
L_103a852e:;
  /* 103a852e jmp 0x103a8539 */
  goto L_103a8539;
L_103a8530:;
  /* 103a8530 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a8533 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_103a8539:;
  /* 103a8539 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a853d je 0x103a8549 */
  if (C.zf) goto L_103a8549;
  /* 103a853f push 1 */
  push32((uint32_t)(0x1u));
  /* 103a8541 call 0x103a8990 */
  push32(0x103a8546u); f_103a8990();
  /* 103a8546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a8549:;
  /* 103a8549 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a854d jne 0x103a8560 */
  if (!C.zf) goto L_103a8560;
  /* 103a854f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8552 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 103a8555 push edx */
  push32((uint32_t)(EDX));
  /* 103a8556 push 8 */
  push32((uint32_t)(0x8u));
  /* 103a8558 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x103a855bu);
  /* 103a855b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a855e jmp 0x103a856a */
  goto L_103a856a;
L_103a8560:;
  /* 103a8560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8563 push eax */
  push32((uint32_t)(EAX));
  /* 103a8564 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x103a8567u);
  /* 103a8567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a856a:;
  /* 103a856a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a856e je 0x103a857c */
  if (C.zf) goto L_103a857c;
  /* 103a8570 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8574 je 0x103a857c */
  if (C.zf) goto L_103a857c;
  /* 103a8576 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a857a jne 0x103a8594 */
  if (!C.zf) goto L_103a8594;
L_103a857c:;
  /* 103a857c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a857f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a8582 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 103a8585 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8589 jne 0x103a8594 */
  if (!C.zf) goto L_103a8594;
  /* 103a858b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a858e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8591 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_103a8594:;
  /* 103a8594 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103a8596:;
  /* 103a8596 mov esp, ebp */
  ESP = (EBP);
  /* 103a8598 pop ebp */
  EBP = (pop32());
  /* 103a8599 ret  */
  ESPCHK(0x103a8390u, _esp0);
  ESP += 4; return;
}

/* FUN_100085d0 @ 0x103a85d0 (91 bytes, 35 insns) */
void f_103a85d0(void) {
  FTRACE(0x103a85d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a85d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a85d1 mov ebp, esp */
  EBP = (ESP);
  /* 103a85d3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a85d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a85d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a85da:;
  /* 103a85da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a85dd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103a85e0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a85e3 je 0x103a8603 */
  if (C.zf) goto L_103a8603;
  /* 103a85e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a85e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a85eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a85ee mov ecx, dword ptr [0x103cec84] */
  ECX = (r32((uint32_t)(0x103cec84)));
  /* 103a85f4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a85f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a85fa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a85fc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a85ff jae 0x103a8603 */
  if (!C.cf) goto L_103a8603;
  /* 103a8601 jmp 0x103a85da */
  goto L_103a85da;
L_103a8603:;
  /* 103a8603 mov eax, dword ptr [0x103cec84] */
  EAX = (r32((uint32_t)(0x103cec84)));
  /* 103a8608 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a860b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a860e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8610 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8613 jae 0x103a8625 */
  if (!C.cf) goto L_103a8625;
  /* 103a8615 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8618 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 103a861b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a861e jne 0x103a8625 */
  if (!C.zf) goto L_103a8625;
  /* 103a8620 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8623 jmp 0x103a8627 */
  goto L_103a8627;
L_103a8625:;
  /* 103a8625 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103a8627:;
  /* 103a8627 mov esp, ebp */
  ESP = (EBP);
  /* 103a8629 pop ebp */
  EBP = (pop32());
  /* 103a862a ret  */
  ESPCHK(0x103a85d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008630 @ 0x103a8630 (13 bytes, 6 insns) */
void f_103a8630(void) {
  FTRACE(0x103a8630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8630 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8631 mov ebp, esp */
  EBP = (ESP);
  /* 103a8633 call 0x103a4930 */
  push32(0x103a8638u); f_103a4930();
  /* 103a8638 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a863b pop ebp */
  EBP = (pop32());
  /* 103a863c ret  */
  ESPCHK(0x103a8630u, _esp0);
  ESP += 4; return;
}

/* FUN_10008640 @ 0x103a8640 (13 bytes, 6 insns) */
void f_103a8640(void) {
  FTRACE(0x103a8640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8640 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8641 mov ebp, esp */
  EBP = (ESP);
  /* 103a8643 call 0x103a4930 */
  push32(0x103a8648u); f_103a4930();
  /* 103a8648 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a864b pop ebp */
  EBP = (pop32());
  /* 103a864c ret  */
  ESPCHK(0x103a8640u, _esp0);
  ESP += 4; return;
}

/* FUN_10008650 @ 0x103a8650 (187 bytes, 54 insns) */
void f_103a8650(void) {
  FTRACE(0x103a8650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8650 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8651 mov ebp, esp */
  EBP = (ESP);
  /* 103a8653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a8656 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103a865d cmp dword ptr [0x103d076c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d076c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8664 jne 0x103a86c3 */
  if (!C.zf) goto L_103a86c3;
  /* 103a8666 push 0x103cb530 */
  push32((uint32_t)(0x103cb530u));
  /* 103a866b call dword ptr [0x103d3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3348))), 0x103a8671u);
  /* 103a8671 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a8674 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8678 je 0x103a8697 */
  if (C.zf) goto L_103a8697;
  /* 103a867a push 0x103cc134 */
  push32((uint32_t)(0x103cc134u));
  /* 103a867f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8682 push eax */
  push32((uint32_t)(EAX));
  /* 103a8683 call dword ptr [0x103d3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3344))), 0x103a8689u);
  /* 103a8689 mov dword ptr [0x103d076c], eax */
  w32((uint32_t)(0x103d076c), (EAX));
  /* 103a868e cmp dword ptr [0x103d076c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d076c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8695 jne 0x103a869b */
  if (!C.zf) goto L_103a869b;
L_103a8697:;
  /* 103a8697 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a8699 jmp 0x103a8707 */
  goto L_103a8707;
L_103a869b:;
  /* 103a869b push 0x103cc124 */
  push32((uint32_t)(0x103cc124u));
  /* 103a86a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a86a3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a86a4 call dword ptr [0x103d3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3344))), 0x103a86aau);
  /* 103a86aa mov dword ptr [0x103d0770], eax */
  w32((uint32_t)(0x103d0770), (EAX));
  /* 103a86af push 0x103cc110 */
  push32((uint32_t)(0x103cc110u));
  /* 103a86b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a86b7 push edx */
  push32((uint32_t)(EDX));
  /* 103a86b8 call dword ptr [0x103d3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3344))), 0x103a86beu);
  /* 103a86be mov dword ptr [0x103d0774], eax */
  w32((uint32_t)(0x103d0774), (EAX));
L_103a86c3:;
  /* 103a86c3 cmp dword ptr [0x103d0770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a86ca je 0x103a86d5 */
  if (C.zf) goto L_103a86d5;
  /* 103a86cc call dword ptr [0x103d0770] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d0770))), 0x103a86d2u);
  /* 103a86d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a86d5:;
  /* 103a86d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a86d9 je 0x103a86f1 */
  if (C.zf) goto L_103a86f1;
  /* 103a86db cmp dword ptr [0x103d0774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103d0774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a86e2 je 0x103a86f1 */
  if (C.zf) goto L_103a86f1;
  /* 103a86e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a86e7 push eax */
  push32((uint32_t)(EAX));
  /* 103a86e8 call dword ptr [0x103d0774] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d0774))), 0x103a86eeu);
  /* 103a86ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a86f1:;
  /* 103a86f1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103a86f4 push ecx */
  push32((uint32_t)(ECX));
  /* 103a86f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a86f8 push edx */
  push32((uint32_t)(EDX));
  /* 103a86f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a86fc push eax */
  push32((uint32_t)(EAX));
  /* 103a86fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8700 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8701 call dword ptr [0x103d076c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d076c))), 0x103a8707u);
L_103a8707:;
  /* 103a8707 mov esp, ebp */
  ESP = (EBP);
  /* 103a8709 pop ebp */
  EBP = (pop32());
  /* 103a870a ret  */
  ESPCHK(0x103a8650u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x103a8710 (254 bytes, 109 insns) */
void f_103a8710(void) {
  FTRACE(0x103a8710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8710 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 103a8714 push edi */
  push32((uint32_t)(EDI));
  /* 103a8715 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103a8717 je 0x103a8793 */
  if (C.zf) goto L_103a8793;
  /* 103a8719 push esi */
  push32((uint32_t)(ESI));
  /* 103a871a push ebx */
  push32((uint32_t)(EBX));
  /* 103a871b mov ebx, ecx */
  EBX = (ECX);
  /* 103a871d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 103a8721 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 103a8727 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 103a872b jne 0x103a8734 */
  if (!C.zf) goto L_103a8734;
  /* 103a872d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103a8730 jne 0x103a87a1 */
  if (!C.zf) goto L_103a87a1;
  /* 103a8732 jmp 0x103a8755 */
  goto L_103a8755;
L_103a8734:;
  /* 103a8734 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103a8736 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103a8737 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103a8739 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103a873a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103a873b je 0x103a8762 */
  if (C.zf) goto L_103a8762;
  /* 103a873d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103a873f je 0x103a876a */
  if (C.zf) goto L_103a876a;
  /* 103a8741 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 103a8747 jne 0x103a8734 */
  if (!C.zf) goto L_103a8734;
  /* 103a8749 mov ebx, ecx */
  EBX = (ECX);
  /* 103a874b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103a874e jne 0x103a87a1 */
  if (!C.zf) goto L_103a87a1;
L_103a8750:;
  /* 103a8750 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 103a8753 je 0x103a8762 */
  if (C.zf) goto L_103a8762;
L_103a8755:;
  /* 103a8755 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103a8757 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103a8758 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103a875a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103a875b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103a875d je 0x103a878e */
  if (C.zf) goto L_103a878e;
  /* 103a875f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103a8760 jne 0x103a8755 */
  if (!C.zf) goto L_103a8755;
L_103a8762:;
  /* 103a8762 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103a8766 pop ebx */
  EBX = (pop32());
  /* 103a8767 pop esi */
  ESI = (pop32());
  /* 103a8768 pop edi */
  EDI = (pop32());
  /* 103a8769 ret  */
  ESPCHK(0x103a8710u, _esp0);
  ESP += 4; return;
L_103a876a:;
  /* 103a876a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103a8770 je 0x103a8784 */
  if (C.zf) goto L_103a8784;
L_103a8772:;
  /* 103a8772 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103a8774 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103a8775 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103a8776 je 0x103a8806 */
  if (C.zf) goto L_103a8806;
  /* 103a877c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103a8782 jne 0x103a8772 */
  if (!C.zf) goto L_103a8772;
L_103a8784:;
  /* 103a8784 mov ebx, ecx */
  EBX = (ECX);
  /* 103a8786 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103a8789 jne 0x103a87f7 */
  if (!C.zf) goto L_103a87f7;
L_103a878b:;
  /* 103a878b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103a878d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_103a878e:;
  /* 103a878e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103a878f jne 0x103a878b */
  if (!C.zf) goto L_103a878b;
  /* 103a8791 pop ebx */
  EBX = (pop32());
  /* 103a8792 pop esi */
  ESI = (pop32());
L_103a8793:;
  /* 103a8793 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103a8797 pop edi */
  EDI = (pop32());
  /* 103a8798 ret  */
  ESPCHK(0x103a8710u, _esp0);
  ESP += 4; return;
L_103a8799:;
  /* 103a8799 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103a879b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103a879e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103a879f je 0x103a8750 */
  if (C.zf) goto L_103a8750;
L_103a87a1:;
  /* 103a87a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103a87a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 103a87a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a87aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a87ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103a87af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 103a87b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103a87b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103a87b9 je 0x103a8799 */
  if (C.zf) goto L_103a8799;
  /* 103a87bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103a87bd je 0x103a87eb */
  if (C.zf) goto L_103a87eb;
  /* 103a87bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 103a87c1 je 0x103a87e1 */
  if (C.zf) goto L_103a87e1;
  /* 103a87c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 103a87c9 je 0x103a87d7 */
  if (C.zf) goto L_103a87d7;
  /* 103a87cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 103a87d1 jne 0x103a8799 */
  if (!C.zf) goto L_103a8799;
  /* 103a87d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103a87d5 jmp 0x103a87ef */
  goto L_103a87ef;
L_103a87d7:;
  /* 103a87d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a87dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103a87df jmp 0x103a87ef */
  goto L_103a87ef;
L_103a87e1:;
  /* 103a87e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103a87e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103a87e9 jmp 0x103a87ef */
  goto L_103a87ef;
L_103a87eb:;
  /* 103a87eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103a87ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_103a87ef:;
  /* 103a87ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103a87f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a87f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103a87f5 je 0x103a8801 */
  if (C.zf) goto L_103a8801;
L_103a87f7:;
  /* 103a87f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103a87f9:;
  /* 103a87f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 103a87fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103a87fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103a87ff jne 0x103a87f9 */
  if (!C.zf) goto L_103a87f9;
L_103a8801:;
  /* 103a8801 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 103a8804 jne 0x103a878b */
  if (!C.zf) goto L_103a878b;
L_103a8806:;
  /* 103a8806 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103a880a pop ebx */
  EBX = (pop32());
  /* 103a880b pop esi */
  ESI = (pop32());
  /* 103a880c pop edi */
  EDI = (pop32());
  /* 103a880d ret  */
  ESPCHK(0x103a8710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008810 @ 0x103a8810 (55 bytes, 16 insns) */
void f_103a8810(void) {
  FTRACE(0x103a8810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8810 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8811 mov ebp, esp */
  EBP = (ESP);
  /* 103a8813 mov eax, dword ptr [0x103ceb84] */
  EAX = (r32((uint32_t)(0x103ceb84)));
  /* 103a8818 push eax */
  push32((uint32_t)(EAX));
  /* 103a8819 call dword ptr [0x103d3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3320))), 0x103a881fu);
  /* 103a881f mov ecx, dword ptr [0x103ceb74] */
  ECX = (r32((uint32_t)(0x103ceb74)));
  /* 103a8825 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8826 call dword ptr [0x103d3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3320))), 0x103a882cu);
  /* 103a882c mov edx, dword ptr [0x103ceb64] */
  EDX = (r32((uint32_t)(0x103ceb64)));
  /* 103a8832 push edx */
  push32((uint32_t)(EDX));
  /* 103a8833 call dword ptr [0x103d3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3320))), 0x103a8839u);
  /* 103a8839 mov eax, dword ptr [0x103ceb44] */
  EAX = (r32((uint32_t)(0x103ceb44)));
  /* 103a883e push eax */
  push32((uint32_t)(EAX));
  /* 103a883f call dword ptr [0x103d3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3320))), 0x103a8845u);
  /* 103a8845 pop ebp */
  EBP = (pop32());
  /* 103a8846 ret  */
  ESPCHK(0x103a8810u, _esp0);
  ESP += 4; return;
}

/* FUN_10008850 @ 0x103a8850 (159 bytes, 47 insns) */
void f_103a8850(void) {
  FTRACE(0x103a8850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8850 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8851 mov ebp, esp */
  EBP = (ESP);
  /* 103a8853 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8854 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103a885b jmp 0x103a8866 */
  goto L_103a8866;
L_103a885d:;
  /* 103a885d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8860 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8863 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a8866:;
  /* 103a8866 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a886a jge 0x103a88b9 */
  if ((C.sf==C.of)) goto L_103a88b9;
  /* 103a886c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a886f cmp dword ptr [ecx*4 + 0x103ceb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x103ceb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8877 je 0x103a88b7 */
  if (C.zf) goto L_103a88b7;
  /* 103a8879 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a887d je 0x103a88b7 */
  if (C.zf) goto L_103a88b7;
  /* 103a887f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8883 je 0x103a88b7 */
  if (C.zf) goto L_103a88b7;
  /* 103a8885 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8889 je 0x103a88b7 */
  if (C.zf) goto L_103a88b7;
  /* 103a888b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a888f je 0x103a88b7 */
  if (C.zf) goto L_103a88b7;
  /* 103a8891 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8894 mov eax, dword ptr [edx*4 + 0x103ceb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x103ceb40)));
  /* 103a889b push eax */
  push32((uint32_t)(EAX));
  /* 103a889c call dword ptr [0x103d338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d338c))), 0x103a88a2u);
  /* 103a88a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103a88a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a88a7 mov edx, dword ptr [ecx*4 + 0x103ceb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x103ceb40)));
  /* 103a88ae push edx */
  push32((uint32_t)(EDX));
  /* 103a88af call 0x103a5980 */
  push32(0x103a88b4u); f_103a5980();
  /* 103a88b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a88b7:;
  /* 103a88b7 jmp 0x103a885d */
  goto L_103a885d;
L_103a88b9:;
  /* 103a88b9 mov eax, dword ptr [0x103ceb64] */
  EAX = (r32((uint32_t)(0x103ceb64)));
  /* 103a88be push eax */
  push32((uint32_t)(EAX));
  /* 103a88bf call dword ptr [0x103d338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d338c))), 0x103a88c5u);
  /* 103a88c5 mov ecx, dword ptr [0x103ceb74] */
  ECX = (r32((uint32_t)(0x103ceb74)));
  /* 103a88cb push ecx */
  push32((uint32_t)(ECX));
  /* 103a88cc call dword ptr [0x103d338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d338c))), 0x103a88d2u);
  /* 103a88d2 mov edx, dword ptr [0x103ceb84] */
  EDX = (r32((uint32_t)(0x103ceb84)));
  /* 103a88d8 push edx */
  push32((uint32_t)(EDX));
  /* 103a88d9 call dword ptr [0x103d338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d338c))), 0x103a88dfu);
  /* 103a88df mov eax, dword ptr [0x103ceb44] */
  EAX = (r32((uint32_t)(0x103ceb44)));
  /* 103a88e4 push eax */
  push32((uint32_t)(EAX));
  /* 103a88e5 call dword ptr [0x103d338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d338c))), 0x103a88ebu);
  /* 103a88eb mov esp, ebp */
  ESP = (EBP);
  /* 103a88ed pop ebp */
  EBP = (pop32());
  /* 103a88ee ret  */
  ESPCHK(0x103a8850u, _esp0);
  ESP += 4; return;
}

/* FUN_100088f0 @ 0x103a88f0 (151 bytes, 46 insns) */
void f_103a88f0(void) {
  FTRACE(0x103a88f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a88f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a88f1 mov ebp, esp */
  EBP = (ESP);
  /* 103a88f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a88f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a88f7 cmp dword ptr [eax*4 + 0x103ceb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x103ceb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a88ff jne 0x103a8972 */
  if (!C.zf) goto L_103a8972;
  /* 103a8901 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 103a8906 push 0x103cc140 */
  push32((uint32_t)(0x103cc140u));
  /* 103a890b push 2 */
  push32((uint32_t)(0x2u));
  /* 103a890d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103a890f call 0x103a4ef0 */
  push32(0x103a8914u); f_103a4ef0();
  /* 103a8914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8917 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a891a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a891e jne 0x103a892a */
  if (!C.zf) goto L_103a892a;
  /* 103a8920 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103a8922 call 0x103a3e60 */
  push32(0x103a8927u); f_103a3e60();
  /* 103a8927 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a892a:;
  /* 103a892a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103a892c call 0x103a88f0 */
  push32(0x103a8931u); f_103a88f0();
  /* 103a8931 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8934 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8937 cmp dword ptr [ecx*4 + 0x103ceb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x103ceb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a893f jne 0x103a895a */
  if (!C.zf) goto L_103a895a;
  /* 103a8941 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8944 push edx */
  push32((uint32_t)(EDX));
  /* 103a8945 call dword ptr [0x103d3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3320))), 0x103a894bu);
  /* 103a894b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a894e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8951 mov dword ptr [eax*4 + 0x103ceb40], ecx */
  w32((uint32_t)(EAX*4 + 0x103ceb40), (ECX));
  /* 103a8958 jmp 0x103a8968 */
  goto L_103a8968;
L_103a895a:;
  /* 103a895a push 2 */
  push32((uint32_t)(0x2u));
  /* 103a895c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a895f push edx */
  push32((uint32_t)(EDX));
  /* 103a8960 call 0x103a5980 */
  push32(0x103a8965u); f_103a5980();
  /* 103a8965 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a8968:;
  /* 103a8968 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103a896a call 0x103a8990 */
  push32(0x103a896fu); f_103a8990();
  /* 103a896f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a8972:;
  /* 103a8972 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8975 mov ecx, dword ptr [eax*4 + 0x103ceb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x103ceb40)));
  /* 103a897c push ecx */
  push32((uint32_t)(ECX));
  /* 103a897d call dword ptr [0x103d331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d331c))), 0x103a8983u);
  /* 103a8983 mov esp, ebp */
  ESP = (EBP);
  /* 103a8985 pop ebp */
  EBP = (pop32());
  /* 103a8986 ret  */
  ESPCHK(0x103a88f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008990 @ 0x103a8990 (22 bytes, 8 insns) */
void f_103a8990(void) {
  FTRACE(0x103a8990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8990 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8991 mov ebp, esp */
  EBP = (ESP);
  /* 103a8993 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8996 mov ecx, dword ptr [eax*4 + 0x103ceb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x103ceb40)));
  /* 103a899d push ecx */
  push32((uint32_t)(ECX));
  /* 103a899e call dword ptr [0x103d3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3318))), 0x103a89a4u);
  /* 103a89a4 pop ebp */
  EBP = (pop32());
  /* 103a89a5 ret  */
  ESPCHK(0x103a8990u, _esp0);
  ESP += 4; return;
}

/* FUN_100089b0 @ 0x103a89b0 (26 bytes, 10 insns) */
void f_103a89b0(void) {
  FTRACE(0x103a89b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a89b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a89b1 mov ebp, esp */
  EBP = (ESP);
  /* 103a89b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a89b6 push eax */
  push32((uint32_t)(EAX));
  /* 103a89b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103a89b9 call dword ptr [0x103d3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3314))), 0x103a89bfu);
  /* 103a89bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 103a89c4 call dword ptr [0x103d3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3354))), 0x103a89cau);
  /* 103a89ca pop ebp */
  EBP = (pop32());
  /* 103a89cb ret  */
  ESPCHK(0x103a89b0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x103a89d0 (446 bytes, 130 insns) */
void f_103a89d0(void) {
  FTRACE(0x103a89d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a89d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a89d1 mov ebp, esp */
  EBP = (ESP);
  /* 103a89d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a89d6 call 0x103a4930 */
  push32(0x103a89dbu); f_103a4930();
  /* 103a89db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a89de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a89e1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 103a89e4 push ecx */
  push32((uint32_t)(ECX));
  /* 103a89e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a89e8 push edx */
  push32((uint32_t)(EDX));
  /* 103a89e9 call 0x103a8b90 */
  push32(0x103a89eeu); f_103a8b90();
  /* 103a89ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a89f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103a89f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a89f8 je 0x103a8a03 */
  if (C.zf) goto L_103a8a03;
  /* 103a89fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a89fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8a01 jne 0x103a8a12 */
  if (!C.zf) goto L_103a8a12;
L_103a8a03:;
  /* 103a8a03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8a06 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8a07 call dword ptr [0x103d3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3310))), 0x103a8a0du);
  /* 103a8a0d jmp 0x103a8b8a */
  goto L_103a8b8a;
L_103a8a12:;
  /* 103a8a12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8a15 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8a19 jne 0x103a8a2f */
  if (!C.zf) goto L_103a8a2f;
  /* 103a8a1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8a1e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 103a8a25 mov eax, 1 */
  EAX = (0x1u);
  /* 103a8a2a jmp 0x103a8b8a */
  goto L_103a8b8a;
L_103a8a2f:;
  /* 103a8a2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8a32 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8a36 jne 0x103a8a40 */
  if (!C.zf) goto L_103a8a40;
  /* 103a8a38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103a8a3b jmp 0x103a8b8a */
  goto L_103a8b8a;
L_103a8a40:;
  /* 103a8a40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8a43 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 103a8a46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a8a49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8a4c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 103a8a4f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103a8a52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8a55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8a58 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 103a8a5b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8a5e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8a62 jne 0x103a8b67 */
  if (!C.zf) goto L_103a8b67;
  /* 103a8a68 mov eax, dword ptr [0x103cec78] */
  EAX = (r32((uint32_t)(0x103cec78)));
  /* 103a8a6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 103a8a70 jmp 0x103a8a7b */
  goto L_103a8a7b;
L_103a8a72:;
  /* 103a8a72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a8a75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8a78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_103a8a7b:;
  /* 103a8a7b mov edx, dword ptr [0x103cec78] */
  EDX = (r32((uint32_t)(0x103cec78)));
  /* 103a8a81 add edx, dword ptr [0x103cec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x103cec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8a87 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8a8a jge 0x103a8aa2 */
  if ((C.sf==C.of)) goto L_103a8aa2;
  /* 103a8a8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103a8a8f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a8a92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8a95 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 103a8a98 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 103a8aa0 jmp 0x103a8a72 */
  goto L_103a8a72;
L_103a8aa2:;
  /* 103a8aa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8aa5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 103a8aa8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103a8aab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8aae cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8ab4 jne 0x103a8ac5 */
  if (!C.zf) goto L_103a8ac5;
  /* 103a8ab6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8ab9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 103a8ac0 jmp 0x103a8b4d */
  goto L_103a8b4d;
L_103a8ac5:;
  /* 103a8ac5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8ac8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8ace jne 0x103a8adc */
  if (!C.zf) goto L_103a8adc;
  /* 103a8ad0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8ad3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 103a8ada jmp 0x103a8b4d */
  goto L_103a8b4d;
L_103a8adc:;
  /* 103a8adc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8adf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8ae5 jne 0x103a8af3 */
  if (!C.zf) goto L_103a8af3;
  /* 103a8ae7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8aea mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 103a8af1 jmp 0x103a8b4d */
  goto L_103a8b4d;
L_103a8af3:;
  /* 103a8af3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8af6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8afc jne 0x103a8b0a */
  if (!C.zf) goto L_103a8b0a;
  /* 103a8afe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8b01 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 103a8b08 jmp 0x103a8b4d */
  goto L_103a8b4d;
L_103a8b0a:;
  /* 103a8b0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8b0d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8b13 jne 0x103a8b21 */
  if (!C.zf) goto L_103a8b21;
  /* 103a8b15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8b18 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 103a8b1f jmp 0x103a8b4d */
  goto L_103a8b4d;
L_103a8b21:;
  /* 103a8b21 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8b24 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8b2a jne 0x103a8b38 */
  if (!C.zf) goto L_103a8b38;
  /* 103a8b2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8b2f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 103a8b36 jmp 0x103a8b4d */
  goto L_103a8b4d;
L_103a8b38:;
  /* 103a8b38 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8b3b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8b41 jne 0x103a8b4d */
  if (!C.zf) goto L_103a8b4d;
  /* 103a8b43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8b46 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_103a8b4d:;
  /* 103a8b4d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8b50 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 103a8b53 push edx */
  push32((uint32_t)(EDX));
  /* 103a8b54 push 8 */
  push32((uint32_t)(0x8u));
  /* 103a8b56 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x103a8b59u);
  /* 103a8b59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8b5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8b5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103a8b62 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 103a8b65 jmp 0x103a8b7e */
  goto L_103a8b7e;
L_103a8b67:;
  /* 103a8b67 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8b6a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 103a8b71 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103a8b74 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103a8b77 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8b78 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x103a8b7bu);
  /* 103a8b7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103a8b7e:;
  /* 103a8b7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8b81 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103a8b84 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 103a8b87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_103a8b8a:;
  /* 103a8b8a mov esp, ebp */
  ESP = (EBP);
  /* 103a8b8c pop ebp */
  EBP = (pop32());
  /* 103a8b8d ret  */
  ESPCHK(0x103a89d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b90 @ 0x103a8b90 (89 bytes, 35 insns) */
void f_103a8b90(void) {
  FTRACE(0x103a8b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8b90 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8b91 mov ebp, esp */
  EBP = (ESP);
  /* 103a8b93 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8b94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8b97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103a8b9a:;
  /* 103a8b9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8b9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103a8b9f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8ba2 je 0x103a8bc2 */
  if (C.zf) goto L_103a8bc2;
  /* 103a8ba4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8ba7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8baa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a8bad mov ecx, dword ptr [0x103cec84] */
  ECX = (r32((uint32_t)(0x103cec84)));
  /* 103a8bb3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a8bb6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8bb9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8bbb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8bbe jae 0x103a8bc2 */
  if (!C.cf) goto L_103a8bc2;
  /* 103a8bc0 jmp 0x103a8b9a */
  goto L_103a8b9a;
L_103a8bc2:;
  /* 103a8bc2 mov eax, dword ptr [0x103cec84] */
  EAX = (r32((uint32_t)(0x103cec84)));
  /* 103a8bc7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103a8bca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8bcd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8bcf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8bd2 jae 0x103a8bde */
  if (!C.cf) goto L_103a8bde;
  /* 103a8bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8bd7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103a8bd9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8bdc je 0x103a8be2 */
  if (C.zf) goto L_103a8be2;
L_103a8bde:;
  /* 103a8bde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a8be0 jmp 0x103a8be5 */
  goto L_103a8be5;
L_103a8be2:;
  /* 103a8be2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103a8be5:;
  /* 103a8be5 mov esp, ebp */
  ESP = (EBP);
  /* 103a8be7 pop ebp */
  EBP = (pop32());
  /* 103a8be8 ret  */
  ESPCHK(0x103a8b90u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x103a8bf0 (48 bytes, 17 insns) */
void f_103a8bf0(void) {
  FTRACE(0x103a8bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8bf1 mov ebp, esp */
  EBP = (ESP);
  /* 103a8bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8bf4 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a8bf6 call 0x103a88f0 */
  push32(0x103a8bfbu); f_103a88f0();
  /* 103a8bfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8bfe mov eax, dword ptr [0x103d07dc] */
  EAX = (r32((uint32_t)(0x103d07dc)));
  /* 103a8c03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a8c06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8c09 mov dword ptr [0x103d07dc], ecx */
  w32((uint32_t)(0x103d07dc), (ECX));
  /* 103a8c0f push 9 */
  push32((uint32_t)(0x9u));
  /* 103a8c11 call 0x103a8990 */
  push32(0x103a8c16u); f_103a8990();
  /* 103a8c16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8c19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8c1c mov esp, ebp */
  ESP = (EBP);
  /* 103a8c1e pop ebp */
  EBP = (pop32());
  /* 103a8c1f ret  */
  ESPCHK(0x103a8bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c20 @ 0x103a8c20 (10 bytes, 5 insns) */
void f_103a8c20(void) {
  FTRACE(0x103a8c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8c20 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8c21 mov ebp, esp */
  EBP = (ESP);
  /* 103a8c23 mov eax, dword ptr [0x103d07dc] */
  EAX = (r32((uint32_t)(0x103d07dc)));
  /* 103a8c28 pop ebp */
  EBP = (pop32());
  /* 103a8c29 ret  */
  ESPCHK(0x103a8c20u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x103a8c30 (45 bytes, 19 insns) */
void f_103a8c30(void) {
  FTRACE(0x103a8c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8c30 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8c31 mov ebp, esp */
  EBP = (ESP);
  /* 103a8c33 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8c34 mov eax, dword ptr [0x103d07dc] */
  EAX = (r32((uint32_t)(0x103d07dc)));
  /* 103a8c39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a8c3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8c40 je 0x103a8c50 */
  if (C.zf) goto L_103a8c50;
  /* 103a8c42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8c45 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8c46 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x103a8c49u);
  /* 103a8c49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8c4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a8c4e jne 0x103a8c54 */
  if (!C.zf) goto L_103a8c54;
L_103a8c50:;
  /* 103a8c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a8c52 jmp 0x103a8c59 */
  goto L_103a8c59;
L_103a8c54:;
  /* 103a8c54 mov eax, 1 */
  EAX = (0x1u);
L_103a8c59:;
  /* 103a8c59 mov esp, ebp */
  ESP = (EBP);
  /* 103a8c5b pop ebp */
  EBP = (pop32());
  /* 103a8c5c ret  */
  ESPCHK(0x103a8c30u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x103a8c60 (88 bytes, 40 insns) */
void f_103a8c60(void) {
  FTRACE(0x103a8c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8c60 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 103a8c64 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103a8c68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a8c6a je 0x103a8cb3 */
  if (C.zf) goto L_103a8cb3;
  /* 103a8c6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a8c6e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 103a8c72 push edi */
  push32((uint32_t)(EDI));
  /* 103a8c73 mov edi, ecx */
  EDI = (ECX);
  /* 103a8c75 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8c78 jb 0x103a8ca7 */
  if (C.cf) goto L_103a8ca7;
  /* 103a8c7a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103a8c7c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 103a8c7f je 0x103a8c89 */
  if (C.zf) goto L_103a8c89;
  /* 103a8c81 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_103a8c83:;
  /* 103a8c83 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103a8c85 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103a8c86 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103a8c87 jne 0x103a8c83 */
  if (!C.zf) goto L_103a8c83;
L_103a8c89:;
  /* 103a8c89 mov ecx, eax */
  ECX = (EAX);
  /* 103a8c8b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103a8c8e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8c90 mov ecx, eax */
  ECX = (EAX);
  /* 103a8c92 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103a8c95 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8c97 mov ecx, edx */
  ECX = (EDX);
  /* 103a8c99 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103a8c9c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103a8c9f je 0x103a8ca7 */
  if (C.zf) goto L_103a8ca7;
  /* 103a8ca1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103a8ca3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103a8ca5 je 0x103a8cad */
  if (C.zf) goto L_103a8cad;
L_103a8ca7:;
  /* 103a8ca7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103a8ca9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103a8caa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 103a8cab jne 0x103a8ca7 */
  if (!C.zf) goto L_103a8ca7;
L_103a8cad:;
  /* 103a8cad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103a8cb1 pop edi */
  EDI = (pop32());
  /* 103a8cb2 ret  */
  ESPCHK(0x103a8c60u, _esp0);
  ESP += 4; return;
L_103a8cb3:;
  /* 103a8cb3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 103a8cb7 ret  */
  ESPCHK(0x103a8c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cc0 @ 0x103a8cc0 (23 bytes, 10 insns) */
void f_103a8cc0(void) {
  FTRACE(0x103a8cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8cc1 mov ebp, esp */
  EBP = (ESP);
  /* 103a8cc3 mov eax, dword ptr [0x103d07d8] */
  EAX = (r32((uint32_t)(0x103d07d8)));
  /* 103a8cc8 push eax */
  push32((uint32_t)(EAX));
  /* 103a8cc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8ccc push ecx */
  push32((uint32_t)(ECX));
  /* 103a8ccd call 0x103a8ce0 */
  push32(0x103a8cd2u); f_103a8ce0();
  /* 103a8cd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8cd5 pop ebp */
  EBP = (pop32());
  /* 103a8cd6 ret  */
  ESPCHK(0x103a8cc0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x103a8ce0 (87 bytes, 34 insns) */
void f_103a8ce0(void) {
  FTRACE(0x103a8ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8ce1 mov ebp, esp */
  EBP = (ESP);
  /* 103a8ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8ce4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8ce8 jbe 0x103a8cee */
  if ((C.cf||C.zf)) goto L_103a8cee;
  /* 103a8cea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a8cec jmp 0x103a8d33 */
  goto L_103a8d33;
L_103a8cee:;
  /* 103a8cee cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8cf2 ja 0x103a8d05 */
  if ((!C.cf&&!C.zf)) goto L_103a8d05;
  /* 103a8cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8cf7 push eax */
  push32((uint32_t)(EAX));
  /* 103a8cf8 call 0x103a8d40 */
  push32(0x103a8cfdu); f_103a8d40();
  /* 103a8cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8d00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a8d03 jmp 0x103a8d0c */
  goto L_103a8d0c;
L_103a8d05:;
  /* 103a8d05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103a8d0c:;
  /* 103a8d0c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8d10 jne 0x103a8d18 */
  if (!C.zf) goto L_103a8d18;
  /* 103a8d12 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8d16 jne 0x103a8d1d */
  if (!C.zf) goto L_103a8d1d;
L_103a8d18:;
  /* 103a8d18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8d1b jmp 0x103a8d33 */
  goto L_103a8d33;
L_103a8d1d:;
  /* 103a8d1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8d20 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8d21 call 0x103a8c30 */
  push32(0x103a8d26u); f_103a8c30();
  /* 103a8d26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a8d2b jne 0x103a8d31 */
  if (!C.zf) goto L_103a8d31;
  /* 103a8d2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a8d2f jmp 0x103a8d33 */
  goto L_103a8d33;
L_103a8d31:;
  /* 103a8d31 jmp 0x103a8cee */
  goto L_103a8cee;
L_103a8d33:;
  /* 103a8d33 mov esp, ebp */
  ESP = (EBP);
  /* 103a8d35 pop ebp */
  EBP = (pop32());
  /* 103a8d36 ret  */
  ESPCHK(0x103a8ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d40 @ 0x103a8d40 (109 bytes, 37 insns) */
void f_103a8d40(void) {
  FTRACE(0x103a8d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8d40 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8d41 mov ebp, esp */
  EBP = (ESP);
  /* 103a8d43 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8d47 cmp eax, dword ptr [0x103cec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103cec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8d4d ja 0x103a8d7d */
  if ((!C.cf&&!C.zf)) goto L_103a8d7d;
  /* 103a8d4f push 9 */
  push32((uint32_t)(0x9u));
  /* 103a8d51 call 0x103a88f0 */
  push32(0x103a8d56u); f_103a88f0();
  /* 103a8d56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8d59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8d5c push ecx */
  push32((uint32_t)(ECX));
  /* 103a8d5d call 0x103a9880 */
  push32(0x103a8d62u); f_103a9880();
  /* 103a8d62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8d65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103a8d68 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a8d6a call 0x103a8990 */
  push32(0x103a8d6fu); f_103a8990();
  /* 103a8d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8d72 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8d76 je 0x103a8d7d */
  if (C.zf) goto L_103a8d7d;
  /* 103a8d78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8d7b jmp 0x103a8da9 */
  goto L_103a8da9;
L_103a8d7d:;
  /* 103a8d7d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8d81 jne 0x103a8d8a */
  if (!C.zf) goto L_103a8d8a;
  /* 103a8d83 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_103a8d8a:;
  /* 103a8d8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8d8d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8d90 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 103a8d93 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 103a8d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8d99 push eax */
  push32((uint32_t)(EAX));
  /* 103a8d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 103a8d9c mov ecx, dword ptr [0x103d1f8c] */
  ECX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a8da2 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8da3 call dword ptr [0x103d330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d330c))), 0x103a8da9u);
L_103a8da9:;
  /* 103a8da9 mov esp, ebp */
  ESP = (EBP);
  /* 103a8dab pop ebp */
  EBP = (pop32());
  /* 103a8dac ret  */
  ESPCHK(0x103a8d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008db0 @ 0x103a8db0 (10 bytes, 5 insns) */
void f_103a8db0(void) {
  FTRACE(0x103a8db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8db0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8db1 mov ebp, esp */
  EBP = (ESP);
  /* 103a8db3 mov eax, 1 */
  EAX = (0x1u);
  /* 103a8db8 pop ebp */
  EBP = (pop32());
  /* 103a8db9 ret  */
  ESPCHK(0x103a8db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dc0 @ 0x103a8dc0 (173 bytes, 59 insns) */
void f_103a8dc0(void) {
  FTRACE(0x103a8dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103a8dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 103a8dc1 mov ebp, esp */
  EBP = (ESP);
  /* 103a8dc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103a8dc6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8dca jbe 0x103a8dd3 */
  if ((C.cf||C.zf)) goto L_103a8dd3;
  /* 103a8dcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103a8dce jmp 0x103a8e69 */
  goto L_103a8e69;
L_103a8dd3:;
  /* 103a8dd3 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a8dd5 call 0x103a88f0 */
  push32(0x103a8ddau); f_103a88f0();
  /* 103a8dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8ddd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8de0 push eax */
  push32((uint32_t)(EAX));
  /* 103a8de1 call 0x103a91f0 */
  push32(0x103a8de6u); f_103a91f0();
  /* 103a8de6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8de9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103a8dec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8df0 je 0x103a8e31 */
  if (C.zf) goto L_103a8e31;
  /* 103a8df2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103a8df9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8dfc cmp ecx, dword ptr [0x103cec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103cec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8e02 ja 0x103a8e22 */
  if ((!C.cf&&!C.zf)) goto L_103a8e22;
  /* 103a8e04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8e07 push edx */
  push32((uint32_t)(EDX));
  /* 103a8e08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8e0b push eax */
  push32((uint32_t)(EAX));
  /* 103a8e0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103a8e0f push ecx */
  push32((uint32_t)(ECX));
  /* 103a8e10 call 0x103aa0c0 */
  push32(0x103a8e15u); f_103aa0c0();
  /* 103a8e15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103a8e1a je 0x103a8e22 */
  if (C.zf) goto L_103a8e22;
  /* 103a8e1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8e1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103a8e22:;
  /* 103a8e22 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a8e24 call 0x103a8990 */
  push32(0x103a8e29u); f_103a8990();
  /* 103a8e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8e2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103a8e2f jmp 0x103a8e69 */
  goto L_103a8e69;
L_103a8e31:;
  /* 103a8e31 push 9 */
  push32((uint32_t)(0x9u));
  /* 103a8e33 call 0x103a8990 */
  push32(0x103a8e38u); f_103a8990();
  /* 103a8e38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8e3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103a8e3f jne 0x103a8e48 */
  if (!C.zf) goto L_103a8e48;
  /* 103a8e41 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_103a8e48:;
  /* 103a8e48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8e4b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103a8e4e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 103a8e50 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 103a8e53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103a8e56 push ecx */
  push32((uint32_t)(ECX));
  /* 103a8e57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103a8e5a push edx */
  push32((uint32_t)(EDX));
  /* 103a8e5b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103a8e5d mov eax, dword ptr [0x103d1f8c] */
  EAX = (r32((uint32_t)(0x103d1f8c)));
  /* 103a8e62 push eax */
  push32((uint32_t)(EAX));
  /* 103a8e63 call dword ptr [0x103d3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x103d3308))), 0x103a8e69u);
L_103a8e69:;
  /* 103a8e69 mov esp, ebp */
  ESP = (EBP);
  /* 103a8e6b pop ebp */
  EBP = (pop32());
  /* 103a8e6c ret  */
  ESPCHK(0x103a8dc0u, _esp0);
  ESP += 4; return;
}

