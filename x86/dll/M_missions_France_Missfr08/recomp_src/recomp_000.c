#include "recomp.h"

/* thunk_FUN_10002b50 @ 0x107a1005 (5 bytes, 1 insns) */
void f_107a1005(void) {
  FTRACE(0x107a1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a1005 jmp 0x107a2b50 */
  f_107a2b50(); return;
}

/* OnInit @ 0x107a100a (5 bytes, 1 insns) */
void f_107a100a(void) {
  FTRACE(0x107a100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a100a jmp 0x107a10a0 */
  f_107a10a0(); return;
}

/* thunk_FUN_10002ba0 @ 0x107a100f (5 bytes, 1 insns) */
void f_107a100f(void) {
  FTRACE(0x107a100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a100f jmp 0x107a2ba0 */
  f_107a2ba0(); return;
}

/* thunk_FUN_10001040 @ 0x107a1014 (5 bytes, 1 insns) */
void f_107a1014(void) {
  FTRACE(0x107a1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a1014 jmp 0x107a1040 */
  f_107a1040(); return;
}

/* ProcessScenary @ 0x107a1019 (5 bytes, 1 insns) */
void f_107a1019(void) {
  FTRACE(0x107a1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a1019 jmp 0x107a15a0 */
  f_107a15a0(); return;
}

/* FUN_10001040 @ 0x107a1040 (67 bytes, 26 insns) */
void f_107a1040(void) {
  FTRACE(0x107a1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a1040 push ebp */
  push32((uint32_t)(EBP));
  /* 107a1041 mov ebp, esp */
  EBP = (ESP);
  /* 107a1043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a1046 push ebx */
  push32((uint32_t)(EBX));
  /* 107a1047 push esi */
  push32((uint32_t)(ESI));
  /* 107a1048 push edi */
  push32((uint32_t)(EDI));
  /* 107a1049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 107a104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 107a1051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107a1056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107a1058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1062 je 0x107a1066 */
  if (C.zf) goto L_107a1066;
  /* 107a1064 jmp 0x107a106b */
  goto L_107a106b;
L_107a1066:;
  /* 107a1066 call 0x107a100a */
  push32(0x107a106bu); f_107a100a();
L_107a106b:;
  /* 107a106b mov eax, 1 */
  EAX = (0x1u);
  /* 107a1070 pop edi */
  EDI = (pop32());
  /* 107a1071 pop esi */
  ESI = (pop32());
  /* 107a1072 pop ebx */
  EBX = (pop32());
  /* 107a1073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1078 call 0x107a2ca0 */
  push32(0x107a107du); f_107a2ca0();
  /* 107a107d mov esp, ebp */
  ESP = (EBP);
  /* 107a107f pop ebp */
  EBP = (pop32());
  /* 107a1080 ret 0xc */
  ESPCHK(0x107a1040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x107a10a0 (1012 bytes, 264 insns) */
void f_107a10a0(void) {
  FTRACE(0x107a10a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a10a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a10a1 mov ebp, esp */
  EBP = (ESP);
  /* 107a10a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a10a6 push ebx */
  push32((uint32_t)(EBX));
  /* 107a10a7 push esi */
  push32((uint32_t)(ESI));
  /* 107a10a8 push edi */
  push32((uint32_t)(EDI));
  /* 107a10a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107a10ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107a10b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107a10b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107a10b8 mov esi, esp */
  ESI = (ESP);
  /* 107a10ba push 0x107ca14c */
  push32((uint32_t)(0x107ca14cu));
  /* 107a10bf push 0x107cf458 */
  push32((uint32_t)(0x107cf458u));
  /* 107a10c4 call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a10cau);
  /* 107a10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a10cf call 0x107a2ca0 */
  push32(0x107a10d4u); f_107a2ca0();
  /* 107a10d4 mov esi, esp */
  ESI = (ESP);
  /* 107a10d6 push 0x107ca144 */
  push32((uint32_t)(0x107ca144u));
  /* 107a10db push 0x107cf460 */
  push32((uint32_t)(0x107cf460u));
  /* 107a10e0 call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a10e6u);
  /* 107a10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a10eb call 0x107a2ca0 */
  push32(0x107a10f0u); f_107a2ca0();
  /* 107a10f0 mov esi, esp */
  ESI = (ESP);
  /* 107a10f2 push 0x107ca13c */
  push32((uint32_t)(0x107ca13cu));
  /* 107a10f7 push 0x107cf468 */
  push32((uint32_t)(0x107cf468u));
  /* 107a10fc call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a1102u);
  /* 107a1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1107 call 0x107a2ca0 */
  push32(0x107a110cu); f_107a2ca0();
  /* 107a110c mov esi, esp */
  ESI = (ESP);
  /* 107a110e push 0x107ca134 */
  push32((uint32_t)(0x107ca134u));
  /* 107a1113 push 0x107cf470 */
  push32((uint32_t)(0x107cf470u));
  /* 107a1118 call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a111eu);
  /* 107a111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1123 call 0x107a2ca0 */
  push32(0x107a1128u); f_107a2ca0();
  /* 107a1128 mov esi, esp */
  ESI = (ESP);
  /* 107a112a push 0x107ca12c */
  push32((uint32_t)(0x107ca12cu));
  /* 107a112f push 0x107cf478 */
  push32((uint32_t)(0x107cf478u));
  /* 107a1134 call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a113au);
  /* 107a113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a113f call 0x107a2ca0 */
  push32(0x107a1144u); f_107a2ca0();
  /* 107a1144 mov esi, esp */
  ESI = (ESP);
  /* 107a1146 push 0x107ca124 */
  push32((uint32_t)(0x107ca124u));
  /* 107a114b push 0x107cf480 */
  push32((uint32_t)(0x107cf480u));
  /* 107a1150 call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a1156u);
  /* 107a1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a115b call 0x107a2ca0 */
  push32(0x107a1160u); f_107a2ca0();
  /* 107a1160 mov esi, esp */
  ESI = (ESP);
  /* 107a1162 push 0x107ca11c */
  push32((uint32_t)(0x107ca11cu));
  /* 107a1167 push 0x107cf488 */
  push32((uint32_t)(0x107cf488u));
  /* 107a116c call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a1172u);
  /* 107a1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1177 call 0x107a2ca0 */
  push32(0x107a117cu); f_107a2ca0();
  /* 107a117c mov esi, esp */
  ESI = (ESP);
  /* 107a117e push 0x107ca114 */
  push32((uint32_t)(0x107ca114u));
  /* 107a1183 push 0x107cf450 */
  push32((uint32_t)(0x107cf450u));
  /* 107a1188 call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a118eu);
  /* 107a118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1193 call 0x107a2ca0 */
  push32(0x107a1198u); f_107a2ca0();
  /* 107a1198 mov esi, esp */
  ESI = (ESP);
  /* 107a119a push 0x107ca10c */
  push32((uint32_t)(0x107ca10cu));
  /* 107a119f push 0x107cf490 */
  push32((uint32_t)(0x107cf490u));
  /* 107a11a4 call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a11aau);
  /* 107a11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a11af call 0x107a2ca0 */
  push32(0x107a11b4u); f_107a2ca0();
  /* 107a11b4 mov esi, esp */
  ESI = (ESP);
  /* 107a11b6 push 0x107ca104 */
  push32((uint32_t)(0x107ca104u));
  /* 107a11bb push 0x107cf498 */
  push32((uint32_t)(0x107cf498u));
  /* 107a11c0 call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a11c6u);
  /* 107a11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a11cb call 0x107a2ca0 */
  push32(0x107a11d0u); f_107a2ca0();
  /* 107a11d0 mov esi, esp */
  ESI = (ESP);
  /* 107a11d2 push 0x107ca0fc */
  push32((uint32_t)(0x107ca0fcu));
  /* 107a11d7 push 0x107cf430 */
  push32((uint32_t)(0x107cf430u));
  /* 107a11dc call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a11e2u);
  /* 107a11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a11e7 call 0x107a2ca0 */
  push32(0x107a11ecu); f_107a2ca0();
  /* 107a11ec mov esi, esp */
  ESI = (ESP);
  /* 107a11ee push 0x107ca0f4 */
  push32((uint32_t)(0x107ca0f4u));
  /* 107a11f3 push 0x107cf428 */
  push32((uint32_t)(0x107cf428u));
  /* 107a11f8 call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a11feu);
  /* 107a11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1203 call 0x107a2ca0 */
  push32(0x107a1208u); f_107a2ca0();
  /* 107a1208 mov esi, esp */
  ESI = (ESP);
  /* 107a120a push 0x107ca0ec */
  push32((uint32_t)(0x107ca0ecu));
  /* 107a120f push 0x107cf440 */
  push32((uint32_t)(0x107cf440u));
  /* 107a1214 call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a121au);
  /* 107a121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a121f call 0x107a2ca0 */
  push32(0x107a1224u); f_107a2ca0();
  /* 107a1224 mov esi, esp */
  ESI = (ESP);
  /* 107a1226 push 0x107ca0e4 */
  push32((uint32_t)(0x107ca0e4u));
  /* 107a122b push 0x107cf438 */
  push32((uint32_t)(0x107cf438u));
  /* 107a1230 call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a1236u);
  /* 107a1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a123b call 0x107a2ca0 */
  push32(0x107a1240u); f_107a2ca0();
  /* 107a1240 mov esi, esp */
  ESI = (ESP);
  /* 107a1242 push 0x107ca0dc */
  push32((uint32_t)(0x107ca0dcu));
  /* 107a1247 push 0x107cf448 */
  push32((uint32_t)(0x107cf448u));
  /* 107a124c call dword ptr [0x107d2450] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2450))), 0x107a1252u);
  /* 107a1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1257 call 0x107a2ca0 */
  push32(0x107a125cu); f_107a2ca0();
  /* 107a125c mov esi, esp */
  ESI = (ESP);
  /* 107a125e push 0x107ca0d4 */
  push32((uint32_t)(0x107ca0d4u));
  /* 107a1263 push 0x107cf3e0 */
  push32((uint32_t)(0x107cf3e0u));
  /* 107a1268 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a126eu);
  /* 107a126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1273 call 0x107a2ca0 */
  push32(0x107a1278u); f_107a2ca0();
  /* 107a1278 mov esi, esp */
  ESI = (ESP);
  /* 107a127a push 0x107ca0cc */
  push32((uint32_t)(0x107ca0ccu));
  /* 107a127f push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1284 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a128au);
  /* 107a128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a128f call 0x107a2ca0 */
  push32(0x107a1294u); f_107a2ca0();
  /* 107a1294 mov esi, esp */
  ESI = (ESP);
  /* 107a1296 push 0x107ca0c0 */
  push32((uint32_t)(0x107ca0c0u));
  /* 107a129b push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a12a0 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a12a6u);
  /* 107a12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a12ab call 0x107a2ca0 */
  push32(0x107a12b0u); f_107a2ca0();
  /* 107a12b0 mov esi, esp */
  ESI = (ESP);
  /* 107a12b2 push 0x107ca0b8 */
  push32((uint32_t)(0x107ca0b8u));
  /* 107a12b7 push 0x107cf3e8 */
  push32((uint32_t)(0x107cf3e8u));
  /* 107a12bc call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a12c2u);
  /* 107a12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a12c7 call 0x107a2ca0 */
  push32(0x107a12ccu); f_107a2ca0();
  /* 107a12cc mov esi, esp */
  ESI = (ESP);
  /* 107a12ce push 0x107ca0b0 */
  push32((uint32_t)(0x107ca0b0u));
  /* 107a12d3 push 0x107cf400 */
  push32((uint32_t)(0x107cf400u));
  /* 107a12d8 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a12deu);
  /* 107a12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a12e3 call 0x107a2ca0 */
  push32(0x107a12e8u); f_107a2ca0();
  /* 107a12e8 mov esi, esp */
  ESI = (ESP);
  /* 107a12ea push 0x107ca0a8 */
  push32((uint32_t)(0x107ca0a8u));
  /* 107a12ef push 0x107cf3f8 */
  push32((uint32_t)(0x107cf3f8u));
  /* 107a12f4 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a12fau);
  /* 107a12fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a12fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a12ff call 0x107a2ca0 */
  push32(0x107a1304u); f_107a2ca0();
  /* 107a1304 mov esi, esp */
  ESI = (ESP);
  /* 107a1306 push 0x107ca0a0 */
  push32((uint32_t)(0x107ca0a0u));
  /* 107a130b push 0x107cf410 */
  push32((uint32_t)(0x107cf410u));
  /* 107a1310 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a1316u);
  /* 107a1316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a131b call 0x107a2ca0 */
  push32(0x107a1320u); f_107a2ca0();
  /* 107a1320 mov esi, esp */
  ESI = (ESP);
  /* 107a1322 push 0x107ca098 */
  push32((uint32_t)(0x107ca098u));
  /* 107a1327 push 0x107cf408 */
  push32((uint32_t)(0x107cf408u));
  /* 107a132c call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a1332u);
  /* 107a1332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1337 call 0x107a2ca0 */
  push32(0x107a133cu); f_107a2ca0();
  /* 107a133c mov esi, esp */
  ESI = (ESP);
  /* 107a133e push 0x107ca090 */
  push32((uint32_t)(0x107ca090u));
  /* 107a1343 push 0x107cf420 */
  push32((uint32_t)(0x107cf420u));
  /* 107a1348 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a134eu);
  /* 107a134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1353 call 0x107a2ca0 */
  push32(0x107a1358u); f_107a2ca0();
  /* 107a1358 mov esi, esp */
  ESI = (ESP);
  /* 107a135a push 0x107ca088 */
  push32((uint32_t)(0x107ca088u));
  /* 107a135f push 0x107cf418 */
  push32((uint32_t)(0x107cf418u));
  /* 107a1364 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a136au);
  /* 107a136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a136f call 0x107a2ca0 */
  push32(0x107a1374u); f_107a2ca0();
  /* 107a1374 mov esi, esp */
  ESI = (ESP);
  /* 107a1376 push 0x107ca07c */
  push32((uint32_t)(0x107ca07cu));
  /* 107a137b push 0x107cf4a8 */
  push32((uint32_t)(0x107cf4a8u));
  /* 107a1380 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a1386u);
  /* 107a1386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a138b call 0x107a2ca0 */
  push32(0x107a1390u); f_107a2ca0();
  /* 107a1390 mov esi, esp */
  ESI = (ESP);
  /* 107a1392 push 0x107ca070 */
  push32((uint32_t)(0x107ca070u));
  /* 107a1397 push 0x107cf4c0 */
  push32((uint32_t)(0x107cf4c0u));
  /* 107a139c call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a13a2u);
  /* 107a13a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a13a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a13a7 call 0x107a2ca0 */
  push32(0x107a13acu); f_107a2ca0();
  /* 107a13ac mov esi, esp */
  ESI = (ESP);
  /* 107a13ae push 0x107ca064 */
  push32((uint32_t)(0x107ca064u));
  /* 107a13b3 push 0x107cf4c8 */
  push32((uint32_t)(0x107cf4c8u));
  /* 107a13b8 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a13beu);
  /* 107a13be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a13c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a13c3 call 0x107a2ca0 */
  push32(0x107a13c8u); f_107a2ca0();
  /* 107a13c8 mov esi, esp */
  ESI = (ESP);
  /* 107a13ca push 0x107ca058 */
  push32((uint32_t)(0x107ca058u));
  /* 107a13cf push 0x107cf4b0 */
  push32((uint32_t)(0x107cf4b0u));
  /* 107a13d4 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a13dau);
  /* 107a13da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a13dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a13df call 0x107a2ca0 */
  push32(0x107a13e4u); f_107a2ca0();
  /* 107a13e4 mov esi, esp */
  ESI = (ESP);
  /* 107a13e6 push 0x107ca04c */
  push32((uint32_t)(0x107ca04cu));
  /* 107a13eb push 0x107cf4b8 */
  push32((uint32_t)(0x107cf4b8u));
  /* 107a13f0 call dword ptr [0x107d2454] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2454))), 0x107a13f6u);
  /* 107a13f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a13fb call 0x107a2ca0 */
  push32(0x107a1400u); f_107a2ca0();
  /* 107a1400 mov esi, esp */
  ESI = (ESP);
  /* 107a1402 push 0x107ca03c */
  push32((uint32_t)(0x107ca03cu));
  /* 107a1407 push 0x107cf4d8 */
  push32((uint32_t)(0x107cf4d8u));
  /* 107a140c call dword ptr [0x107d2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2458))), 0x107a1412u);
  /* 107a1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1417 call 0x107a2ca0 */
  push32(0x107a141cu); f_107a2ca0();
  /* 107a141c mov esi, esp */
  ESI = (ESP);
  /* 107a141e push 0x107ca02c */
  push32((uint32_t)(0x107ca02cu));
  /* 107a1423 push 0x107cf4a0 */
  push32((uint32_t)(0x107cf4a0u));
  /* 107a1428 call dword ptr [0x107d2458] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2458))), 0x107a142eu);
  /* 107a142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1433 call 0x107a2ca0 */
  push32(0x107a1438u); f_107a2ca0();
  /* 107a1438 mov esi, esp */
  ESI = (ESP);
  /* 107a143a push 0x91 */
  push32((uint32_t)(0x91u));
  /* 107a143f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1441 call dword ptr [0x107d245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d245c))), 0x107a1447u);
  /* 107a1447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a144a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a144c call 0x107a2ca0 */
  push32(0x107a1451u); f_107a2ca0();
  /* 107a1451 mov esi, esp */
  ESI = (ESP);
  /* 107a1453 push 0x107ca024 */
  push32((uint32_t)(0x107ca024u));
  /* 107a1458 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a145a call dword ptr [0x107d2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2460))), 0x107a1460u);
  /* 107a1460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1463 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1465 call 0x107a2ca0 */
  push32(0x107a146au); f_107a2ca0();
  /* 107a146a mov esi, esp */
  ESI = (ESP);
  /* 107a146c push 0x107ca01c */
  push32((uint32_t)(0x107ca01cu));
  /* 107a1471 push 4 */
  push32((uint32_t)(0x4u));
  /* 107a1473 call dword ptr [0x107d2460] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2460))), 0x107a1479u);
  /* 107a1479 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a147c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a147e call 0x107a2ca0 */
  push32(0x107a1483u); f_107a2ca0();
  /* 107a1483 pop edi */
  EDI = (pop32());
  /* 107a1484 pop esi */
  ESI = (pop32());
  /* 107a1485 pop ebx */
  EBX = (pop32());
  /* 107a1486 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1489 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a148b call 0x107a2ca0 */
  push32(0x107a1490u); f_107a2ca0();
  /* 107a1490 mov esp, ebp */
  ESP = (EBP);
  /* 107a1492 pop ebp */
  EBP = (pop32());
  /* 107a1493 ret  */
  ESPCHK(0x107a10a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100015a0 @ 0x107a15a0 (4434 bytes, 1279 insns) */
void f_107a15a0(void) {
  FTRACE(0x107a15a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a15a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a15a1 mov ebp, esp */
  EBP = (ESP);
  /* 107a15a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a15a6 push ebx */
  push32((uint32_t)(EBX));
  /* 107a15a7 push esi */
  push32((uint32_t)(ESI));
  /* 107a15a8 push edi */
  push32((uint32_t)(EDI));
  /* 107a15a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107a15ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107a15b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107a15b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107a15b8 mov esi, esp */
  ESI = (ESP);
  /* 107a15ba push 1 */
  push32((uint32_t)(0x1u));
  /* 107a15bc call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a15c2u);
  /* 107a15c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a15c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a15c7 call 0x107a2ca0 */
  push32(0x107a15ccu); f_107a2ca0();
  /* 107a15cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a15d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a15d3 je 0x107a16ed */
  if (C.zf) goto L_107a16ed;
  /* 107a15d9 mov esi, esp */
  ESI = (ESP);
  /* 107a15db push 0 */
  push32((uint32_t)(0x0u));
  /* 107a15dd push 1 */
  push32((uint32_t)(0x1u));
  /* 107a15df call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a15e5u);
  /* 107a15e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a15e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a15ea call 0x107a2ca0 */
  push32(0x107a15efu); f_107a2ca0();
  /* 107a15ef mov esi, esp */
  ESI = (ESP);
  /* 107a15f1 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 107a15f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 107a15f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a15fa call dword ptr [0x107d2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2404))), 0x107a1600u);
  /* 107a1600 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1603 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1605 call 0x107a2ca0 */
  push32(0x107a160au); f_107a2ca0();
  /* 107a160a mov esi, esp */
  ESI = (ESP);
  /* 107a160c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 107a1611 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1613 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1615 call dword ptr [0x107d2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2404))), 0x107a161bu);
  /* 107a161b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a161e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1620 call 0x107a2ca0 */
  push32(0x107a1625u); f_107a2ca0();
  /* 107a1625 mov esi, esp */
  ESI = (ESP);
  /* 107a1627 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1629 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a162b push 0 */
  push32((uint32_t)(0x0u));
  /* 107a162d call dword ptr [0x107d2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2404))), 0x107a1633u);
  /* 107a1633 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1636 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1638 call 0x107a2ca0 */
  push32(0x107a163du); f_107a2ca0();
  /* 107a163d mov esi, esp */
  ESI = (ESP);
  /* 107a163f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1641 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a1643 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1645 call dword ptr [0x107d2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2404))), 0x107a164bu);
  /* 107a164b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a164e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1650 call 0x107a2ca0 */
  push32(0x107a1655u); f_107a2ca0();
  /* 107a1655 mov esi, esp */
  ESI = (ESP);
  /* 107a1657 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 107a165c push 5 */
  push32((uint32_t)(0x5u));
  /* 107a165e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1660 call dword ptr [0x107d2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2404))), 0x107a1666u);
  /* 107a1666 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1669 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a166b call 0x107a2ca0 */
  push32(0x107a1670u); f_107a2ca0();
  /* 107a1670 mov esi, esp */
  ESI = (ESP);
  /* 107a1672 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 107a1677 push 4 */
  push32((uint32_t)(0x4u));
  /* 107a1679 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a167b call dword ptr [0x107d2404] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2404))), 0x107a1681u);
  /* 107a1681 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1684 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1686 call 0x107a2ca0 */
  push32(0x107a168bu); f_107a2ca0();
  /* 107a168b mov esi, esp */
  ESI = (ESP);
  /* 107a168d push 0x107ca194 */
  push32((uint32_t)(0x107ca194u));
  /* 107a1692 call dword ptr [0x107d2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2408))), 0x107a1698u);
  /* 107a1698 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a169b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a169d call 0x107a2ca0 */
  push32(0x107a16a2u); f_107a2ca0();
  /* 107a16a2 mov esi, esp */
  ESI = (ESP);
  /* 107a16a4 push 0x107ca188 */
  push32((uint32_t)(0x107ca188u));
  /* 107a16a9 call dword ptr [0x107d2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2408))), 0x107a16afu);
  /* 107a16af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a16b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a16b4 call 0x107a2ca0 */
  push32(0x107a16b9u); f_107a2ca0();
  /* 107a16b9 mov esi, esp */
  ESI = (ESP);
  /* 107a16bb push 0 */
  push32((uint32_t)(0x0u));
  /* 107a16bd push 0x107cf4b0 */
  push32((uint32_t)(0x107cf4b0u));
  /* 107a16c2 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a16c8u);
  /* 107a16c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a16cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a16cd call 0x107a2ca0 */
  push32(0x107a16d2u); f_107a2ca0();
  /* 107a16d2 mov esi, esp */
  ESI = (ESP);
  /* 107a16d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a16d6 push 0x107cf438 */
  push32((uint32_t)(0x107cf438u));
  /* 107a16db push 1 */
  push32((uint32_t)(0x1u));
  /* 107a16dd call dword ptr [0x107d2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2410))), 0x107a16e3u);
  /* 107a16e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a16e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a16e8 call 0x107a2ca0 */
  push32(0x107a16edu); f_107a2ca0();
L_107a16ed:;
  /* 107a16ed mov esi, esp */
  ESI = (ESP);
  /* 107a16ef push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 107a16f1 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a16f7u);
  /* 107a16f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a16fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a16fc call 0x107a2ca0 */
  push32(0x107a1701u); f_107a2ca0();
  /* 107a1701 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a1706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1708 je 0x107a1788 */
  if (C.zf) goto L_107a1788;
  /* 107a170a mov esi, esp */
  ESI = (ESP);
  /* 107a170c call dword ptr [0x107d2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2414))), 0x107a1712u);
  /* 107a1712 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1714 call 0x107a2ca0 */
  push32(0x107a1719u); f_107a2ca0();
  /* 107a1719 cmp eax, 0x5dc */
  { uint32_t _a=(EAX),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a171e jle 0x107a1788 */
  if ((C.zf||C.sf!=C.of)) goto L_107a1788;
  /* 107a1720 mov esi, esp */
  ESI = (ESP);
  /* 107a1722 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1724 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 107a1726 call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a172cu);
  /* 107a172c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a172f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1731 call 0x107a2ca0 */
  push32(0x107a1736u); f_107a2ca0();
  /* 107a1736 mov esi, esp */
  ESI = (ESP);
  /* 107a1738 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a173a push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a173f call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a1745u);
  /* 107a1745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1748 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a174a call 0x107a2ca0 */
  push32(0x107a174fu); f_107a2ca0();
  /* 107a174f mov esi, esp */
  ESI = (ESP);
  /* 107a1751 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1753 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1758 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a175eu);
  /* 107a175e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1761 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1763 call 0x107a2ca0 */
  push32(0x107a1768u); f_107a2ca0();
  /* 107a1768 mov esi, esp */
  ESI = (ESP);
  /* 107a176a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a176c push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107a1771 push 0x107cf458 */
  push32((uint32_t)(0x107cf458u));
  /* 107a1776 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1778 call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a177eu);
  /* 107a177e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1781 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1783 call 0x107a2ca0 */
  push32(0x107a1788u); f_107a2ca0();
L_107a1788:;
  /* 107a1788 mov esi, esp */
  ESI = (ESP);
  /* 107a178a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 107a178c call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a1792u);
  /* 107a1792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1795 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1797 call 0x107a2ca0 */
  push32(0x107a179cu); f_107a2ca0();
  /* 107a179c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a17a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a17a3 je 0x107a1885 */
  if (C.zf) goto L_107a1885;
  /* 107a17a9 mov esi, esp */
  ESI = (ESP);
  /* 107a17ab push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a17b0 push 0x107cf458 */
  push32((uint32_t)(0x107cf458u));
  /* 107a17b5 call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a17bbu);
  /* 107a17bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a17be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a17c0 call 0x107a2ca0 */
  push32(0x107a17c5u); f_107a2ca0();
  /* 107a17c5 mov esi, eax */
  ESI = (EAX);
  /* 107a17c7 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a17cc call 0x107a1005 */
  push32(0x107a17d1u); f_107a1005();
  /* 107a17d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a17d4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a17d6 jne 0x107a1885 */
  if (!C.zf) goto L_107a1885;
  /* 107a17dc mov esi, esp */
  ESI = (ESP);
  /* 107a17de push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a17e3 push 0x107cf458 */
  push32((uint32_t)(0x107cf458u));
  /* 107a17e8 call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a17eeu);
  /* 107a17ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a17f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a17f3 call 0x107a2ca0 */
  push32(0x107a17f8u); f_107a2ca0();
  /* 107a17f8 mov esi, eax */
  ESI = (EAX);
  /* 107a17fa push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a17ff call 0x107a1005 */
  push32(0x107a1804u); f_107a1005();
  /* 107a1804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1807 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1809 jne 0x107a1885 */
  if (!C.zf) goto L_107a1885;
  /* 107a180b push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1810 call 0x107a1005 */
  push32(0x107a1815u); f_107a1005();
  /* 107a1815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1818 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a181b jle 0x107a1885 */
  if ((C.zf||C.sf!=C.of)) goto L_107a1885;
  /* 107a181d mov esi, esp */
  ESI = (ESP);
  /* 107a181f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1821 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 107a1823 call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a1829u);
  /* 107a1829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a182c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a182e call 0x107a2ca0 */
  push32(0x107a1833u); f_107a2ca0();
  /* 107a1833 mov esi, esp */
  ESI = (ESP);
  /* 107a1835 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 107a183a push 1 */
  push32((uint32_t)(0x1u));
  /* 107a183c call dword ptr [0x107d2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2420))), 0x107a1842u);
  /* 107a1842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1845 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1847 call 0x107a2ca0 */
  push32(0x107a184cu); f_107a2ca0();
  /* 107a184c mov esi, esp */
  ESI = (ESP);
  /* 107a184e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1850 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1855 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a185bu);
  /* 107a185b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a185e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1860 call 0x107a2ca0 */
  push32(0x107a1865u); f_107a2ca0();
  /* 107a1865 mov esi, esp */
  ESI = (ESP);
  /* 107a1867 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1869 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107a186e push 0x107cf460 */
  push32((uint32_t)(0x107cf460u));
  /* 107a1873 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1875 call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a187bu);
  /* 107a187b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a187e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1880 call 0x107a2ca0 */
  push32(0x107a1885u); f_107a2ca0();
L_107a1885:;
  /* 107a1885 mov esi, esp */
  ESI = (ESP);
  /* 107a1887 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1889 call dword ptr [0x107d2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2424))), 0x107a188fu);
  /* 107a188f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1892 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1894 call 0x107a2ca0 */
  push32(0x107a1899u); f_107a2ca0();
  /* 107a1899 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a189e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a18a0 je 0x107a18db */
  if (C.zf) goto L_107a18db;
  /* 107a18a2 mov esi, esp */
  ESI = (ESP);
  /* 107a18a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a18a6 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a18ab call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a18b1u);
  /* 107a18b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a18b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a18b6 call 0x107a2ca0 */
  push32(0x107a18bbu); f_107a2ca0();
  /* 107a18bb mov esi, esp */
  ESI = (ESP);
  /* 107a18bd push 0 */
  push32((uint32_t)(0x0u));
  /* 107a18bf push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107a18c4 push 0x107cf460 */
  push32((uint32_t)(0x107cf460u));
  /* 107a18c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a18cb call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a18d1u);
  /* 107a18d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a18d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a18d6 call 0x107a2ca0 */
  push32(0x107a18dbu); f_107a2ca0();
L_107a18db:;
  /* 107a18db mov esi, esp */
  ESI = (ESP);
  /* 107a18dd push 0x20 */
  push32((uint32_t)(0x20u));
  /* 107a18df call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a18e5u);
  /* 107a18e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a18e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a18ea call 0x107a2ca0 */
  push32(0x107a18efu); f_107a2ca0();
  /* 107a18ef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a18f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a18f6 je 0x107a19d8 */
  if (C.zf) goto L_107a19d8;
  /* 107a18fc mov esi, esp */
  ESI = (ESP);
  /* 107a18fe push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1903 push 0x107cf460 */
  push32((uint32_t)(0x107cf460u));
  /* 107a1908 call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a190eu);
  /* 107a190e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1911 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1913 call 0x107a2ca0 */
  push32(0x107a1918u); f_107a2ca0();
  /* 107a1918 mov esi, eax */
  ESI = (EAX);
  /* 107a191a push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a191f call 0x107a1005 */
  push32(0x107a1924u); f_107a1005();
  /* 107a1924 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1927 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1929 jne 0x107a19d8 */
  if (!C.zf) goto L_107a19d8;
  /* 107a192f mov esi, esp */
  ESI = (ESP);
  /* 107a1931 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1936 push 0x107cf460 */
  push32((uint32_t)(0x107cf460u));
  /* 107a193b call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a1941u);
  /* 107a1941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1944 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1946 call 0x107a2ca0 */
  push32(0x107a194bu); f_107a2ca0();
  /* 107a194b mov esi, eax */
  ESI = (EAX);
  /* 107a194d push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1952 call 0x107a1005 */
  push32(0x107a1957u); f_107a1005();
  /* 107a1957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a195a cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a195c jne 0x107a19d8 */
  if (!C.zf) goto L_107a19d8;
  /* 107a195e push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1963 call 0x107a1005 */
  push32(0x107a1968u); f_107a1005();
  /* 107a1968 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a196b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a196e jle 0x107a19d8 */
  if ((C.zf||C.sf!=C.of)) goto L_107a19d8;
  /* 107a1970 mov esi, esp */
  ESI = (ESP);
  /* 107a1972 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1974 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 107a1976 call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a197cu);
  /* 107a197c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a197f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1981 call 0x107a2ca0 */
  push32(0x107a1986u); f_107a2ca0();
  /* 107a1986 mov esi, esp */
  ESI = (ESP);
  /* 107a1988 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 107a198d push 2 */
  push32((uint32_t)(0x2u));
  /* 107a198f call dword ptr [0x107d2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2420))), 0x107a1995u);
  /* 107a1995 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1998 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a199a call 0x107a2ca0 */
  push32(0x107a199fu); f_107a2ca0();
  /* 107a199f mov esi, esp */
  ESI = (ESP);
  /* 107a19a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a19a3 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a19a8 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a19aeu);
  /* 107a19ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a19b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a19b3 call 0x107a2ca0 */
  push32(0x107a19b8u); f_107a2ca0();
  /* 107a19b8 mov esi, esp */
  ESI = (ESP);
  /* 107a19ba push 0 */
  push32((uint32_t)(0x0u));
  /* 107a19bc push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107a19c1 push 0x107cf468 */
  push32((uint32_t)(0x107cf468u));
  /* 107a19c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a19c8 call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a19ceu);
  /* 107a19ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a19d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a19d3 call 0x107a2ca0 */
  push32(0x107a19d8u); f_107a2ca0();
L_107a19d8:;
  /* 107a19d8 mov esi, esp */
  ESI = (ESP);
  /* 107a19da push 2 */
  push32((uint32_t)(0x2u));
  /* 107a19dc call dword ptr [0x107d2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2424))), 0x107a19e2u);
  /* 107a19e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a19e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a19e7 call 0x107a2ca0 */
  push32(0x107a19ecu); f_107a2ca0();
  /* 107a19ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a19f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a19f3 je 0x107a1a2e */
  if (C.zf) goto L_107a1a2e;
  /* 107a19f5 mov esi, esp */
  ESI = (ESP);
  /* 107a19f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a19f9 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a19fe call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a1a04u);
  /* 107a1a04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1a09 call 0x107a2ca0 */
  push32(0x107a1a0eu); f_107a2ca0();
  /* 107a1a0e mov esi, esp */
  ESI = (ESP);
  /* 107a1a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1a12 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107a1a17 push 0x107cf468 */
  push32((uint32_t)(0x107cf468u));
  /* 107a1a1c push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1a1e call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a1a24u);
  /* 107a1a24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1a27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1a29 call 0x107a2ca0 */
  push32(0x107a1a2eu); f_107a2ca0();
L_107a1a2e:;
  /* 107a1a2e mov esi, esp */
  ESI = (ESP);
  /* 107a1a30 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 107a1a32 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a1a38u);
  /* 107a1a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1a3d call 0x107a2ca0 */
  push32(0x107a1a42u); f_107a2ca0();
  /* 107a1a42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a1a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1a49 je 0x107a1b2b */
  if (C.zf) goto L_107a1b2b;
  /* 107a1a4f mov esi, esp */
  ESI = (ESP);
  /* 107a1a51 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1a56 push 0x107cf468 */
  push32((uint32_t)(0x107cf468u));
  /* 107a1a5b call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a1a61u);
  /* 107a1a61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1a64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1a66 call 0x107a2ca0 */
  push32(0x107a1a6bu); f_107a2ca0();
  /* 107a1a6b mov esi, eax */
  ESI = (EAX);
  /* 107a1a6d push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1a72 call 0x107a1005 */
  push32(0x107a1a77u); f_107a1005();
  /* 107a1a77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1a7a cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1a7c jne 0x107a1b2b */
  if (!C.zf) goto L_107a1b2b;
  /* 107a1a82 mov esi, esp */
  ESI = (ESP);
  /* 107a1a84 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1a89 push 0x107cf468 */
  push32((uint32_t)(0x107cf468u));
  /* 107a1a8e call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a1a94u);
  /* 107a1a94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1a97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1a99 call 0x107a2ca0 */
  push32(0x107a1a9eu); f_107a2ca0();
  /* 107a1a9e mov esi, eax */
  ESI = (EAX);
  /* 107a1aa0 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1aa5 call 0x107a1005 */
  push32(0x107a1aaau); f_107a1005();
  /* 107a1aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1aad cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1aaf jne 0x107a1b2b */
  if (!C.zf) goto L_107a1b2b;
  /* 107a1ab1 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1ab6 call 0x107a1005 */
  push32(0x107a1abbu); f_107a1005();
  /* 107a1abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1abe cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1ac1 jle 0x107a1b2b */
  if ((C.zf||C.sf!=C.of)) goto L_107a1b2b;
  /* 107a1ac3 mov esi, esp */
  ESI = (ESP);
  /* 107a1ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1ac7 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 107a1ac9 call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a1acfu);
  /* 107a1acf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1ad2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1ad4 call 0x107a2ca0 */
  push32(0x107a1ad9u); f_107a2ca0();
  /* 107a1ad9 mov esi, esp */
  ESI = (ESP);
  /* 107a1adb push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 107a1ae0 push 3 */
  push32((uint32_t)(0x3u));
  /* 107a1ae2 call dword ptr [0x107d2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2420))), 0x107a1ae8u);
  /* 107a1ae8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1aeb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1aed call 0x107a2ca0 */
  push32(0x107a1af2u); f_107a2ca0();
  /* 107a1af2 mov esi, esp */
  ESI = (ESP);
  /* 107a1af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1af6 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1afb call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a1b01u);
  /* 107a1b01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1b04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1b06 call 0x107a2ca0 */
  push32(0x107a1b0bu); f_107a2ca0();
  /* 107a1b0b mov esi, esp */
  ESI = (ESP);
  /* 107a1b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1b0f push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107a1b14 push 0x107cf470 */
  push32((uint32_t)(0x107cf470u));
  /* 107a1b19 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1b1b call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a1b21u);
  /* 107a1b21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1b24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1b26 call 0x107a2ca0 */
  push32(0x107a1b2bu); f_107a2ca0();
L_107a1b2b:;
  /* 107a1b2b mov esi, esp */
  ESI = (ESP);
  /* 107a1b2d push 3 */
  push32((uint32_t)(0x3u));
  /* 107a1b2f call dword ptr [0x107d2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2424))), 0x107a1b35u);
  /* 107a1b35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1b38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1b3a call 0x107a2ca0 */
  push32(0x107a1b3fu); f_107a2ca0();
  /* 107a1b3f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a1b44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1b46 je 0x107a1b81 */
  if (C.zf) goto L_107a1b81;
  /* 107a1b48 mov esi, esp */
  ESI = (ESP);
  /* 107a1b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1b4c push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1b51 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a1b57u);
  /* 107a1b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1b5c call 0x107a2ca0 */
  push32(0x107a1b61u); f_107a2ca0();
  /* 107a1b61 mov esi, esp */
  ESI = (ESP);
  /* 107a1b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1b65 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107a1b6a push 0x107cf470 */
  push32((uint32_t)(0x107cf470u));
  /* 107a1b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1b71 call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a1b77u);
  /* 107a1b77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1b7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1b7c call 0x107a2ca0 */
  push32(0x107a1b81u); f_107a2ca0();
L_107a1b81:;
  /* 107a1b81 mov esi, esp */
  ESI = (ESP);
  /* 107a1b83 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 107a1b85 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a1b8bu);
  /* 107a1b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1b8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1b90 call 0x107a2ca0 */
  push32(0x107a1b95u); f_107a2ca0();
  /* 107a1b95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a1b9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1b9c je 0x107a1c7e */
  if (C.zf) goto L_107a1c7e;
  /* 107a1ba2 mov esi, esp */
  ESI = (ESP);
  /* 107a1ba4 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1ba9 push 0x107cf470 */
  push32((uint32_t)(0x107cf470u));
  /* 107a1bae call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a1bb4u);
  /* 107a1bb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1bb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1bb9 call 0x107a2ca0 */
  push32(0x107a1bbeu); f_107a2ca0();
  /* 107a1bbe mov esi, eax */
  ESI = (EAX);
  /* 107a1bc0 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1bc5 call 0x107a1005 */
  push32(0x107a1bcau); f_107a1005();
  /* 107a1bca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1bcd cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1bcf jne 0x107a1c7e */
  if (!C.zf) goto L_107a1c7e;
  /* 107a1bd5 mov esi, esp */
  ESI = (ESP);
  /* 107a1bd7 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1bdc push 0x107cf470 */
  push32((uint32_t)(0x107cf470u));
  /* 107a1be1 call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a1be7u);
  /* 107a1be7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1bea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1bec call 0x107a2ca0 */
  push32(0x107a1bf1u); f_107a2ca0();
  /* 107a1bf1 mov esi, eax */
  ESI = (EAX);
  /* 107a1bf3 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1bf8 call 0x107a1005 */
  push32(0x107a1bfdu); f_107a1005();
  /* 107a1bfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1c00 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1c02 jne 0x107a1c7e */
  if (!C.zf) goto L_107a1c7e;
  /* 107a1c04 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1c09 call 0x107a1005 */
  push32(0x107a1c0eu); f_107a1005();
  /* 107a1c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1c11 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1c14 jle 0x107a1c7e */
  if ((C.zf||C.sf!=C.of)) goto L_107a1c7e;
  /* 107a1c16 mov esi, esp */
  ESI = (ESP);
  /* 107a1c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1c1a push 0x22 */
  push32((uint32_t)(0x22u));
  /* 107a1c1c call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a1c22u);
  /* 107a1c22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1c25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1c27 call 0x107a2ca0 */
  push32(0x107a1c2cu); f_107a2ca0();
  /* 107a1c2c mov esi, esp */
  ESI = (ESP);
  /* 107a1c2e push 0x320 */
  push32((uint32_t)(0x320u));
  /* 107a1c33 push 4 */
  push32((uint32_t)(0x4u));
  /* 107a1c35 call dword ptr [0x107d2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2420))), 0x107a1c3bu);
  /* 107a1c3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1c3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1c40 call 0x107a2ca0 */
  push32(0x107a1c45u); f_107a2ca0();
  /* 107a1c45 mov esi, esp */
  ESI = (ESP);
  /* 107a1c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1c49 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1c4e call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a1c54u);
  /* 107a1c54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1c57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1c59 call 0x107a2ca0 */
  push32(0x107a1c5eu); f_107a2ca0();
  /* 107a1c5e mov esi, esp */
  ESI = (ESP);
  /* 107a1c60 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1c62 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107a1c67 push 0x107cf478 */
  push32((uint32_t)(0x107cf478u));
  /* 107a1c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1c6e call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a1c74u);
  /* 107a1c74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1c77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1c79 call 0x107a2ca0 */
  push32(0x107a1c7eu); f_107a2ca0();
L_107a1c7e:;
  /* 107a1c7e mov esi, esp */
  ESI = (ESP);
  /* 107a1c80 push 4 */
  push32((uint32_t)(0x4u));
  /* 107a1c82 call dword ptr [0x107d2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2424))), 0x107a1c88u);
  /* 107a1c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1c8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1c8d call 0x107a2ca0 */
  push32(0x107a1c92u); f_107a2ca0();
  /* 107a1c92 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a1c97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1c99 je 0x107a1cd4 */
  if (C.zf) goto L_107a1cd4;
  /* 107a1c9b mov esi, esp */
  ESI = (ESP);
  /* 107a1c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1c9f push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1ca4 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a1caau);
  /* 107a1caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1cad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1caf call 0x107a2ca0 */
  push32(0x107a1cb4u); f_107a2ca0();
  /* 107a1cb4 mov esi, esp */
  ESI = (ESP);
  /* 107a1cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1cb8 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107a1cbd push 0x107cf478 */
  push32((uint32_t)(0x107cf478u));
  /* 107a1cc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1cc4 call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a1ccau);
  /* 107a1cca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1ccd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1ccf call 0x107a2ca0 */
  push32(0x107a1cd4u); f_107a2ca0();
L_107a1cd4:;
  /* 107a1cd4 mov esi, esp */
  ESI = (ESP);
  /* 107a1cd6 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 107a1cd8 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a1cdeu);
  /* 107a1cde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1ce1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1ce3 call 0x107a2ca0 */
  push32(0x107a1ce8u); f_107a2ca0();
  /* 107a1ce8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a1ced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1cef je 0x107a1dd1 */
  if (C.zf) goto L_107a1dd1;
  /* 107a1cf5 mov esi, esp */
  ESI = (ESP);
  /* 107a1cf7 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1cfc push 0x107cf478 */
  push32((uint32_t)(0x107cf478u));
  /* 107a1d01 call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a1d07u);
  /* 107a1d07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1d0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1d0c call 0x107a2ca0 */
  push32(0x107a1d11u); f_107a2ca0();
  /* 107a1d11 mov esi, eax */
  ESI = (EAX);
  /* 107a1d13 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1d18 call 0x107a1005 */
  push32(0x107a1d1du); f_107a1005();
  /* 107a1d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1d20 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1d22 jne 0x107a1dd1 */
  if (!C.zf) goto L_107a1dd1;
  /* 107a1d28 mov esi, esp */
  ESI = (ESP);
  /* 107a1d2a push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1d2f push 0x107cf478 */
  push32((uint32_t)(0x107cf478u));
  /* 107a1d34 call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a1d3au);
  /* 107a1d3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1d3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1d3f call 0x107a2ca0 */
  push32(0x107a1d44u); f_107a2ca0();
  /* 107a1d44 mov esi, eax */
  ESI = (EAX);
  /* 107a1d46 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1d4b call 0x107a1005 */
  push32(0x107a1d50u); f_107a1005();
  /* 107a1d50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1d53 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1d55 jne 0x107a1dd1 */
  if (!C.zf) goto L_107a1dd1;
  /* 107a1d57 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1d5c call 0x107a1005 */
  push32(0x107a1d61u); f_107a1005();
  /* 107a1d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1d64 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1d67 jle 0x107a1dd1 */
  if ((C.zf||C.sf!=C.of)) goto L_107a1dd1;
  /* 107a1d69 mov esi, esp */
  ESI = (ESP);
  /* 107a1d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1d6d push 0x23 */
  push32((uint32_t)(0x23u));
  /* 107a1d6f call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a1d75u);
  /* 107a1d75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1d78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1d7a call 0x107a2ca0 */
  push32(0x107a1d7fu); f_107a2ca0();
  /* 107a1d7f mov esi, esp */
  ESI = (ESP);
  /* 107a1d81 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 107a1d86 push 5 */
  push32((uint32_t)(0x5u));
  /* 107a1d88 call dword ptr [0x107d2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2420))), 0x107a1d8eu);
  /* 107a1d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1d91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1d93 call 0x107a2ca0 */
  push32(0x107a1d98u); f_107a2ca0();
  /* 107a1d98 mov esi, esp */
  ESI = (ESP);
  /* 107a1d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1d9c push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1da1 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a1da7u);
  /* 107a1da7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1daa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1dac call 0x107a2ca0 */
  push32(0x107a1db1u); f_107a2ca0();
  /* 107a1db1 mov esi, esp */
  ESI = (ESP);
  /* 107a1db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1db5 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107a1dba push 0x107cf480 */
  push32((uint32_t)(0x107cf480u));
  /* 107a1dbf push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1dc1 call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a1dc7u);
  /* 107a1dc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1dca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1dcc call 0x107a2ca0 */
  push32(0x107a1dd1u); f_107a2ca0();
L_107a1dd1:;
  /* 107a1dd1 mov esi, esp */
  ESI = (ESP);
  /* 107a1dd3 push 5 */
  push32((uint32_t)(0x5u));
  /* 107a1dd5 call dword ptr [0x107d2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2424))), 0x107a1ddbu);
  /* 107a1ddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1dde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1de0 call 0x107a2ca0 */
  push32(0x107a1de5u); f_107a2ca0();
  /* 107a1de5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a1dea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1dec je 0x107a1e27 */
  if (C.zf) goto L_107a1e27;
  /* 107a1dee mov esi, esp */
  ESI = (ESP);
  /* 107a1df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1df2 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1df7 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a1dfdu);
  /* 107a1dfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1e00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1e02 call 0x107a2ca0 */
  push32(0x107a1e07u); f_107a2ca0();
  /* 107a1e07 mov esi, esp */
  ESI = (ESP);
  /* 107a1e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1e0b push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 107a1e10 push 0x107cf480 */
  push32((uint32_t)(0x107cf480u));
  /* 107a1e15 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1e17 call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a1e1du);
  /* 107a1e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1e20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1e22 call 0x107a2ca0 */
  push32(0x107a1e27u); f_107a2ca0();
L_107a1e27:;
  /* 107a1e27 mov esi, esp */
  ESI = (ESP);
  /* 107a1e29 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 107a1e2b call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a1e31u);
  /* 107a1e31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1e34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1e36 call 0x107a2ca0 */
  push32(0x107a1e3bu); f_107a2ca0();
  /* 107a1e3b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a1e40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1e42 je 0x107a1f21 */
  if (C.zf) goto L_107a1f21;
  /* 107a1e48 mov esi, esp */
  ESI = (ESP);
  /* 107a1e4a push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1e4f push 0x107cf480 */
  push32((uint32_t)(0x107cf480u));
  /* 107a1e54 call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a1e5au);
  /* 107a1e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1e5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1e5f call 0x107a2ca0 */
  push32(0x107a1e64u); f_107a2ca0();
  /* 107a1e64 mov esi, eax */
  ESI = (EAX);
  /* 107a1e66 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1e6b call 0x107a1005 */
  push32(0x107a1e70u); f_107a1005();
  /* 107a1e70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1e73 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1e75 jne 0x107a1f21 */
  if (!C.zf) goto L_107a1f21;
  /* 107a1e7b mov esi, esp */
  ESI = (ESP);
  /* 107a1e7d push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1e82 push 0x107cf480 */
  push32((uint32_t)(0x107cf480u));
  /* 107a1e87 call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a1e8du);
  /* 107a1e8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1e90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1e92 call 0x107a2ca0 */
  push32(0x107a1e97u); f_107a2ca0();
  /* 107a1e97 mov esi, eax */
  ESI = (EAX);
  /* 107a1e99 push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1e9e call 0x107a1005 */
  push32(0x107a1ea3u); f_107a1005();
  /* 107a1ea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1ea6 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1ea8 jne 0x107a1f21 */
  if (!C.zf) goto L_107a1f21;
  /* 107a1eaa push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1eaf call 0x107a1005 */
  push32(0x107a1eb4u); f_107a1005();
  /* 107a1eb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1eb7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1eba jle 0x107a1f21 */
  if ((C.zf||C.sf!=C.of)) goto L_107a1f21;
  /* 107a1ebc mov esi, esp */
  ESI = (ESP);
  /* 107a1ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1ec0 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 107a1ec2 call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a1ec8u);
  /* 107a1ec8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1ecb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1ecd call 0x107a2ca0 */
  push32(0x107a1ed2u); f_107a2ca0();
  /* 107a1ed2 mov esi, esp */
  ESI = (ESP);
  /* 107a1ed4 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 107a1ed9 push 6 */
  push32((uint32_t)(0x6u));
  /* 107a1edb call dword ptr [0x107d2420] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2420))), 0x107a1ee1u);
  /* 107a1ee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1ee4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1ee6 call 0x107a2ca0 */
  push32(0x107a1eebu); f_107a2ca0();
  /* 107a1eeb mov esi, esp */
  ESI = (ESP);
  /* 107a1eed push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1eef push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a1ef4 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a1efau);
  /* 107a1efa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1efd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1eff call 0x107a2ca0 */
  push32(0x107a1f04u); f_107a2ca0();
  /* 107a1f04 mov esi, esp */
  ESI = (ESP);
  /* 107a1f06 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1f08 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1f0a push 0x107cf450 */
  push32((uint32_t)(0x107cf450u));
  /* 107a1f0f push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1f11 call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a1f17u);
  /* 107a1f17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1f1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1f1c call 0x107a2ca0 */
  push32(0x107a1f21u); f_107a2ca0();
L_107a1f21:;
  /* 107a1f21 mov esi, esp */
  ESI = (ESP);
  /* 107a1f23 push 6 */
  push32((uint32_t)(0x6u));
  /* 107a1f25 call dword ptr [0x107d2424] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2424))), 0x107a1f2bu);
  /* 107a1f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1f2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1f30 call 0x107a2ca0 */
  push32(0x107a1f35u); f_107a2ca0();
  /* 107a1f35 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a1f3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1f3c je 0x107a1f74 */
  if (C.zf) goto L_107a1f74;
  /* 107a1f3e mov esi, esp */
  ESI = (ESP);
  /* 107a1f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1f42 push 0x107cf3f0 */
  push32((uint32_t)(0x107cf3f0u));
  /* 107a1f47 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a1f4du);
  /* 107a1f4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1f50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1f52 call 0x107a2ca0 */
  push32(0x107a1f57u); f_107a2ca0();
  /* 107a1f57 mov esi, esp */
  ESI = (ESP);
  /* 107a1f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1f5d push 0x107cf488 */
  push32((uint32_t)(0x107cf488u));
  /* 107a1f62 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1f64 call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a1f6au);
  /* 107a1f6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1f6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1f6f call 0x107a2ca0 */
  push32(0x107a1f74u); f_107a2ca0();
L_107a1f74:;
  /* 107a1f74 mov esi, esp */
  ESI = (ESP);
  /* 107a1f76 call dword ptr [0x107d2414] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2414))), 0x107a1f7cu);
  /* 107a1f7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1f7e call 0x107a2ca0 */
  push32(0x107a1f83u); f_107a2ca0();
  /* 107a1f83 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1f88 jle 0x107a1fde */
  if ((C.zf||C.sf!=C.of)) goto L_107a1fde;
  /* 107a1f8a push 0x107cf3e8 */
  push32((uint32_t)(0x107cf3e8u));
  /* 107a1f8f call 0x107a1005 */
  push32(0x107a1f94u); f_107a1005();
  /* 107a1f94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1f97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1f99 jle 0x107a1fde */
  if ((C.zf||C.sf!=C.of)) goto L_107a1fde;
  /* 107a1f9b push 0x107cf3f8 */
  push32((uint32_t)(0x107cf3f8u));
  /* 107a1fa0 call 0x107a1005 */
  push32(0x107a1fa5u); f_107a1005();
  /* 107a1fa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1faa jle 0x107a1fde */
  if ((C.zf||C.sf!=C.of)) goto L_107a1fde;
  /* 107a1fac mov esi, esp */
  ESI = (ESP);
  /* 107a1fae push 0 */
  push32((uint32_t)(0x0u));
  /* 107a1fb0 push 0x107cf3e8 */
  push32((uint32_t)(0x107cf3e8u));
  /* 107a1fb5 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a1fbbu);
  /* 107a1fbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1fbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1fc0 call 0x107a2ca0 */
  push32(0x107a1fc5u); f_107a2ca0();
  /* 107a1fc5 mov esi, esp */
  ESI = (ESP);
  /* 107a1fc7 push 0x107cf3f8 */
  push32((uint32_t)(0x107cf3f8u));
  /* 107a1fcc push 1 */
  push32((uint32_t)(0x1u));
  /* 107a1fce call dword ptr [0x107d2428] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2428))), 0x107a1fd4u);
  /* 107a1fd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1fd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1fd9 call 0x107a2ca0 */
  push32(0x107a1fdeu); f_107a2ca0();
L_107a1fde:;
  /* 107a1fde mov esi, esp */
  ESI = (ESP);
  /* 107a1fe0 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 107a1fe2 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a1fe8u);
  /* 107a1fe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a1feb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a1fed call 0x107a2ca0 */
  push32(0x107a1ff2u); f_107a2ca0();
  /* 107a1ff2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a1ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a1ff9 je 0x107a2051 */
  if (C.zf) goto L_107a2051;
  /* 107a1ffb push 0x107cf3e8 */
  push32((uint32_t)(0x107cf3e8u));
  /* 107a2000 call 0x107a1005 */
  push32(0x107a2005u); f_107a1005();
  /* 107a2005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a200a jle 0x107a2051 */
  if ((C.zf||C.sf!=C.of)) goto L_107a2051;
  /* 107a200c push 0x107cf3f8 */
  push32((uint32_t)(0x107cf3f8u));
  /* 107a2011 call 0x107a1005 */
  push32(0x107a2016u); f_107a1005();
  /* 107a2016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2019 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a201b jne 0x107a2051 */
  if (!C.zf) goto L_107a2051;
  /* 107a201d mov esi, esp */
  ESI = (ESP);
  /* 107a201f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2021 push 0x107cf3e8 */
  push32((uint32_t)(0x107cf3e8u));
  /* 107a2026 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a202cu);
  /* 107a202c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a202f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2031 call 0x107a2ca0 */
  push32(0x107a2036u); f_107a2ca0();
  /* 107a2036 mov esi, esp */
  ESI = (ESP);
  /* 107a2038 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a203a push 0x107cf440 */
  push32((uint32_t)(0x107cf440u));
  /* 107a203f push 1 */
  push32((uint32_t)(0x1u));
  /* 107a2041 call dword ptr [0x107d2410] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2410))), 0x107a2047u);
  /* 107a2047 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a204a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a204c call 0x107a2ca0 */
  push32(0x107a2051u); f_107a2ca0();
L_107a2051:;
  /* 107a2051 mov esi, esp */
  ESI = (ESP);
  /* 107a2053 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 107a2055 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a205bu);
  /* 107a205b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a205e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2060 call 0x107a2ca0 */
  push32(0x107a2065u); f_107a2ca0();
  /* 107a2065 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a206a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a206c je 0x107a2124 */
  if (C.zf) goto L_107a2124;
  /* 107a2072 push 0x107cf410 */
  push32((uint32_t)(0x107cf410u));
  /* 107a2077 call 0x107a1005 */
  push32(0x107a207cu); f_107a1005();
  /* 107a207c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a207f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2082 jge 0x107a2124 */
  if ((C.sf==C.of)) goto L_107a2124;
  /* 107a2088 mov esi, esp */
  ESI = (ESP);
  /* 107a208a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a208c push 0x25 */
  push32((uint32_t)(0x25u));
  /* 107a208e call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a2094u);
  /* 107a2094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2097 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2099 call 0x107a2ca0 */
  push32(0x107a209eu); f_107a2ca0();
  /* 107a209e mov esi, esp */
  ESI = (ESP);
  /* 107a20a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a20a2 call dword ptr [0x107d242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d242c))), 0x107a20a8u);
  /* 107a20a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a20ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a20ad call 0x107a2ca0 */
  push32(0x107a20b2u); f_107a2ca0();
  /* 107a20b2 mov esi, esp */
  ESI = (ESP);
  /* 107a20b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a20b6 push 0x107cf408 */
  push32((uint32_t)(0x107cf408u));
  /* 107a20bb push 1 */
  push32((uint32_t)(0x1u));
  /* 107a20bd call dword ptr [0x107d2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2430))), 0x107a20c3u);
  /* 107a20c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a20c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a20c8 call 0x107a2ca0 */
  push32(0x107a20cdu); f_107a2ca0();
  /* 107a20cd mov esi, esp */
  ESI = (ESP);
  /* 107a20cf push 1 */
  push32((uint32_t)(0x1u));
  /* 107a20d1 call dword ptr [0x107d2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2434))), 0x107a20d7u);
  /* 107a20d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a20da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a20dc call 0x107a2ca0 */
  push32(0x107a20e1u); f_107a2ca0();
  /* 107a20e1 mov esi, esp */
  ESI = (ESP);
  /* 107a20e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a20e5 call dword ptr [0x107d242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d242c))), 0x107a20ebu);
  /* 107a20eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a20ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a20f0 call 0x107a2ca0 */
  push32(0x107a20f5u); f_107a2ca0();
  /* 107a20f5 mov esi, esp */
  ESI = (ESP);
  /* 107a20f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a20f9 push 0x107cf408 */
  push32((uint32_t)(0x107cf408u));
  /* 107a20fe push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2100 call dword ptr [0x107d2430] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2430))), 0x107a2106u);
  /* 107a2106 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2109 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a210b call 0x107a2ca0 */
  push32(0x107a2110u); f_107a2ca0();
  /* 107a2110 mov esi, esp */
  ESI = (ESP);
  /* 107a2112 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2114 call dword ptr [0x107d2434] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2434))), 0x107a211au);
  /* 107a211a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a211d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a211f call 0x107a2ca0 */
  push32(0x107a2124u); f_107a2ca0();
L_107a2124:;
  /* 107a2124 mov esi, esp */
  ESI = (ESP);
  /* 107a2126 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 107a2128 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a212eu);
  /* 107a212e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2131 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2133 call 0x107a2ca0 */
  push32(0x107a2138u); f_107a2ca0();
  /* 107a2138 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a213d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a213f je 0x107a21ab */
  if (C.zf) goto L_107a21ab;
  /* 107a2141 mov esi, esp */
  ESI = (ESP);
  /* 107a2143 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2145 push 0x107cf490 */
  push32((uint32_t)(0x107cf490u));
  /* 107a214a call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a2150u);
  /* 107a2150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2153 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2155 call 0x107a2ca0 */
  push32(0x107a215au); f_107a2ca0();
  /* 107a215a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a215d jle 0x107a21ab */
  if ((C.zf||C.sf!=C.of)) goto L_107a21ab;
  /* 107a215f mov esi, esp */
  ESI = (ESP);
  /* 107a2161 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2163 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 107a2165 call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a216bu);
  /* 107a216b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a216e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2170 call 0x107a2ca0 */
  push32(0x107a2175u); f_107a2ca0();
  /* 107a2175 mov esi, esp */
  ESI = (ESP);
  /* 107a2177 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2179 push 0x107cf420 */
  push32((uint32_t)(0x107cf420u));
  /* 107a217e call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a2184u);
  /* 107a2184 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2187 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2189 call 0x107a2ca0 */
  push32(0x107a218eu); f_107a2ca0();
  /* 107a218e mov esi, esp */
  ESI = (ESP);
  /* 107a2190 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2192 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2194 push 0x107cf490 */
  push32((uint32_t)(0x107cf490u));
  /* 107a2199 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a219b call dword ptr [0x107d2418] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2418))), 0x107a21a1u);
  /* 107a21a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a21a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a21a6 call 0x107a2ca0 */
  push32(0x107a21abu); f_107a2ca0();
L_107a21ab:;
  /* 107a21ab mov esi, esp */
  ESI = (ESP);
  /* 107a21ad push 0 */
  push32((uint32_t)(0x0u));
  /* 107a21af push 0x107cf498 */
  push32((uint32_t)(0x107cf498u));
  /* 107a21b4 call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a21bau);
  /* 107a21ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a21bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a21bf call 0x107a2ca0 */
  push32(0x107a21c4u); f_107a2ca0();
  /* 107a21c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a21c6 jle 0x107a21f7 */
  if ((C.zf||C.sf!=C.of)) goto L_107a21f7;
  /* 107a21c8 push 0x107cf418 */
  push32((uint32_t)(0x107cf418u));
  /* 107a21cd call 0x107a1005 */
  push32(0x107a21d2u); f_107a1005();
  /* 107a21d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a21d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a21d7 jle 0x107a21f7 */
  if ((C.zf||C.sf!=C.of)) goto L_107a21f7;
  /* 107a21d9 mov esi, esp */
  ESI = (ESP);
  /* 107a21db push 0 */
  push32((uint32_t)(0x0u));
  /* 107a21dd push 0x107cf498 */
  push32((uint32_t)(0x107cf498u));
  /* 107a21e2 push 0x107cf418 */
  push32((uint32_t)(0x107cf418u));
  /* 107a21e7 call dword ptr [0x107d243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d243c))), 0x107a21edu);
  /* 107a21ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a21f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a21f2 call 0x107a2ca0 */
  push32(0x107a21f7u); f_107a2ca0();
L_107a21f7:;
  /* 107a21f7 mov esi, esp */
  ESI = (ESP);
  /* 107a21f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a21fb push 0x107cf430 */
  push32((uint32_t)(0x107cf430u));
  /* 107a2200 call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a2206u);
  /* 107a2206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2209 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a220b call 0x107a2ca0 */
  push32(0x107a2210u); f_107a2ca0();
  /* 107a2210 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2212 jle 0x107a2243 */
  if ((C.zf||C.sf!=C.of)) goto L_107a2243;
  /* 107a2214 push 0x107cf4a8 */
  push32((uint32_t)(0x107cf4a8u));
  /* 107a2219 call 0x107a1005 */
  push32(0x107a221eu); f_107a1005();
  /* 107a221e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2223 jle 0x107a2243 */
  if ((C.zf||C.sf!=C.of)) goto L_107a2243;
  /* 107a2225 mov esi, esp */
  ESI = (ESP);
  /* 107a2227 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2229 push 0x107cf430 */
  push32((uint32_t)(0x107cf430u));
  /* 107a222e push 0x107cf4a8 */
  push32((uint32_t)(0x107cf4a8u));
  /* 107a2233 call dword ptr [0x107d243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d243c))), 0x107a2239u);
  /* 107a2239 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a223c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a223e call 0x107a2ca0 */
  push32(0x107a2243u); f_107a2ca0();
L_107a2243:;
  /* 107a2243 mov esi, esp */
  ESI = (ESP);
  /* 107a2245 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2247 push 0x107cf428 */
  push32((uint32_t)(0x107cf428u));
  /* 107a224c call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a2252u);
  /* 107a2252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2257 call 0x107a2ca0 */
  push32(0x107a225cu); f_107a2ca0();
  /* 107a225c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a225e jle 0x107a228f */
  if ((C.zf||C.sf!=C.of)) goto L_107a228f;
  /* 107a2260 push 0x107cf4c0 */
  push32((uint32_t)(0x107cf4c0u));
  /* 107a2265 call 0x107a1005 */
  push32(0x107a226au); f_107a1005();
  /* 107a226a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a226d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a226f jle 0x107a228f */
  if ((C.zf||C.sf!=C.of)) goto L_107a228f;
  /* 107a2271 mov esi, esp */
  ESI = (ESP);
  /* 107a2273 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2275 push 0x107cf428 */
  push32((uint32_t)(0x107cf428u));
  /* 107a227a push 0x107cf4c0 */
  push32((uint32_t)(0x107cf4c0u));
  /* 107a227f call dword ptr [0x107d243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d243c))), 0x107a2285u);
  /* 107a2285 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2288 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a228a call 0x107a2ca0 */
  push32(0x107a228fu); f_107a2ca0();
L_107a228f:;
  /* 107a228f mov esi, esp */
  ESI = (ESP);
  /* 107a2291 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a2293 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a2299u);
  /* 107a2299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a229c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a229e call 0x107a2ca0 */
  push32(0x107a22a3u); f_107a2ca0();
  /* 107a22a3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a22a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a22aa je 0x107a232b */
  if (C.zf) goto L_107a232b;
  /* 107a22ac mov esi, esp */
  ESI = (ESP);
  /* 107a22ae push 0x25 */
  push32((uint32_t)(0x25u));
  /* 107a22b0 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a22b6u);
  /* 107a22b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a22b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a22bb call 0x107a2ca0 */
  push32(0x107a22c0u); f_107a2ca0();
  /* 107a22c0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a22c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a22c7 je 0x107a232b */
  if (C.zf) goto L_107a232b;
  /* 107a22c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a22cb push 0x107cf4a0 */
  push32((uint32_t)(0x107cf4a0u));
  /* 107a22d0 call 0x107a100f */
  push32(0x107a22d5u); f_107a100f();
  /* 107a22d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a22d8 mov esi, eax */
  ESI = (EAX);
  /* 107a22da push 0x107cf4d0 */
  push32((uint32_t)(0x107cf4d0u));
  /* 107a22df call 0x107a1005 */
  push32(0x107a22e4u); f_107a1005();
  /* 107a22e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a22e7 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a22e9 jne 0x107a232b */
  if (!C.zf) goto L_107a232b;
  /* 107a22eb push 0 */
  push32((uint32_t)(0x0u));
  /* 107a22ed push 0x107cf4a0 */
  push32((uint32_t)(0x107cf4a0u));
  /* 107a22f2 call 0x107a100f */
  push32(0x107a22f7u); f_107a100f();
  /* 107a22f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a22fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a22fc jle 0x107a232b */
  if ((C.zf||C.sf!=C.of)) goto L_107a232b;
  /* 107a22fe mov esi, esp */
  ESI = (ESP);
  /* 107a2300 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2302 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a2304 call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a230au);
  /* 107a230a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a230d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a230f call 0x107a2ca0 */
  push32(0x107a2314u); f_107a2ca0();
  /* 107a2314 mov esi, esp */
  ESI = (ESP);
  /* 107a2316 push 0x107ca180 */
  push32((uint32_t)(0x107ca180u));
  /* 107a231b call dword ptr [0x107d2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2408))), 0x107a2321u);
  /* 107a2321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2324 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2326 call 0x107a2ca0 */
  push32(0x107a232bu); f_107a2ca0();
L_107a232b:;
  /* 107a232b mov esi, esp */
  ESI = (ESP);
  /* 107a232d push 3 */
  push32((uint32_t)(0x3u));
  /* 107a232f call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a2335u);
  /* 107a2335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2338 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a233a call 0x107a2ca0 */
  push32(0x107a233fu); f_107a2ca0();
  /* 107a233f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a2344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2346 je 0x107a23fc */
  if (C.zf) goto L_107a23fc;
  /* 107a234c push 0 */
  push32((uint32_t)(0x0u));
  /* 107a234e push 0x107cf4d8 */
  push32((uint32_t)(0x107cf4d8u));
  /* 107a2353 call 0x107a100f */
  push32(0x107a2358u); f_107a100f();
  /* 107a2358 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a235b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a235d jle 0x107a23fc */
  if ((C.zf||C.sf!=C.of)) goto L_107a23fc;
  /* 107a2363 mov esi, esp */
  ESI = (ESP);
  /* 107a2365 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2367 push 3 */
  push32((uint32_t)(0x3u));
  /* 107a2369 call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a236fu);
  /* 107a236f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2372 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2374 call 0x107a2ca0 */
  push32(0x107a2379u); f_107a2ca0();
  /* 107a2379 mov esi, esp */
  ESI = (ESP);
  /* 107a237b push 0x107ca178 */
  push32((uint32_t)(0x107ca178u));
  /* 107a2380 call dword ptr [0x107d2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2408))), 0x107a2386u);
  /* 107a2386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a238b call 0x107a2ca0 */
  push32(0x107a2390u); f_107a2ca0();
  /* 107a2390 mov esi, esp */
  ESI = (ESP);
  /* 107a2392 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 107a2397 push 3 */
  push32((uint32_t)(0x3u));
  /* 107a2399 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a239b call dword ptr [0x107d2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2440))), 0x107a23a1u);
  /* 107a23a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a23a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a23a6 call 0x107a2ca0 */
  push32(0x107a23abu); f_107a2ca0();
  /* 107a23ab mov esi, esp */
  ESI = (ESP);
  /* 107a23ad push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 107a23b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a23b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a23b6 call dword ptr [0x107d2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2440))), 0x107a23bcu);
  /* 107a23bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a23bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a23c1 call 0x107a2ca0 */
  push32(0x107a23c6u); f_107a2ca0();
  /* 107a23c6 mov esi, esp */
  ESI = (ESP);
  /* 107a23c8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 107a23cd push 5 */
  push32((uint32_t)(0x5u));
  /* 107a23cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107a23d1 call dword ptr [0x107d2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2440))), 0x107a23d7u);
  /* 107a23d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a23da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a23dc call 0x107a2ca0 */
  push32(0x107a23e1u); f_107a2ca0();
  /* 107a23e1 mov esi, esp */
  ESI = (ESP);
  /* 107a23e3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 107a23e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 107a23ea push 0 */
  push32((uint32_t)(0x0u));
  /* 107a23ec call dword ptr [0x107d2440] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2440))), 0x107a23f2u);
  /* 107a23f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a23f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a23f7 call 0x107a2ca0 */
  push32(0x107a23fcu); f_107a2ca0();
L_107a23fc:;
  /* 107a23fc mov esi, esp */
  ESI = (ESP);
  /* 107a23fe push 4 */
  push32((uint32_t)(0x4u));
  /* 107a2400 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a2406u);
  /* 107a2406 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a240b call 0x107a2ca0 */
  push32(0x107a2410u); f_107a2ca0();
  /* 107a2410 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a2415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2417 je 0x107a2466 */
  if (C.zf) goto L_107a2466;
  /* 107a2419 push 0x107cf4c8 */
  push32((uint32_t)(0x107cf4c8u));
  /* 107a241e call 0x107a1005 */
  push32(0x107a2423u); f_107a1005();
  /* 107a2423 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2426 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2428 jne 0x107a2466 */
  if (!C.zf) goto L_107a2466;
  /* 107a242a mov esi, esp */
  ESI = (ESP);
  /* 107a242c push 0 */
  push32((uint32_t)(0x0u));
  /* 107a242e push 4 */
  push32((uint32_t)(0x4u));
  /* 107a2430 call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a2436u);
  /* 107a2436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2439 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a243b call 0x107a2ca0 */
  push32(0x107a2440u); f_107a2ca0();
  /* 107a2440 mov esi, esp */
  ESI = (ESP);
  /* 107a2442 push 0x107ca170 */
  push32((uint32_t)(0x107ca170u));
  /* 107a2447 call dword ptr [0x107d2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2408))), 0x107a244du);
  /* 107a244d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2450 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2452 call 0x107a2ca0 */
  push32(0x107a2457u); f_107a2ca0();
  /* 107a2457 mov esi, esp */
  ESI = (ESP);
  /* 107a2459 call dword ptr [0x107d2444] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2444))), 0x107a245fu);
  /* 107a245f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2461 call 0x107a2ca0 */
  push32(0x107a2466u); f_107a2ca0();
L_107a2466:;
  /* 107a2466 mov esi, esp */
  ESI = (ESP);
  /* 107a2468 push 5 */
  push32((uint32_t)(0x5u));
  /* 107a246a call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a2470u);
  /* 107a2470 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2473 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2475 call 0x107a2ca0 */
  push32(0x107a247au); f_107a2ca0();
  /* 107a247a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a247f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2481 je 0x107a24d0 */
  if (C.zf) goto L_107a24d0;
  /* 107a2483 push 0x107cf3e0 */
  push32((uint32_t)(0x107cf3e0u));
  /* 107a2488 call 0x107a1005 */
  push32(0x107a248du); f_107a1005();
  /* 107a248d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2492 jne 0x107a24d0 */
  if (!C.zf) goto L_107a24d0;
  /* 107a2494 mov esi, esp */
  ESI = (ESP);
  /* 107a2496 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2498 push 5 */
  push32((uint32_t)(0x5u));
  /* 107a249a call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a24a0u);
  /* 107a24a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a24a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a24a5 call 0x107a2ca0 */
  push32(0x107a24aau); f_107a2ca0();
  /* 107a24aa mov esi, esp */
  ESI = (ESP);
  /* 107a24ac push 0x107ca168 */
  push32((uint32_t)(0x107ca168u));
  /* 107a24b1 call dword ptr [0x107d2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2408))), 0x107a24b7u);
  /* 107a24b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a24ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a24bc call 0x107a2ca0 */
  push32(0x107a24c1u); f_107a2ca0();
  /* 107a24c1 mov esi, esp */
  ESI = (ESP);
  /* 107a24c3 call dword ptr [0x107d2448] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2448))), 0x107a24c9u);
  /* 107a24c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a24cb call 0x107a2ca0 */
  push32(0x107a24d0u); f_107a2ca0();
L_107a24d0:;
  /* 107a24d0 mov esi, esp */
  ESI = (ESP);
  /* 107a24d2 push 6 */
  push32((uint32_t)(0x6u));
  /* 107a24d4 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a24dau);
  /* 107a24da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a24dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a24df call 0x107a2ca0 */
  push32(0x107a24e4u); f_107a2ca0();
  /* 107a24e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a24e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a24eb je 0x107a257e */
  if (C.zf) goto L_107a257e;
  /* 107a24f1 mov esi, esp */
  ESI = (ESP);
  /* 107a24f3 push 0x107cf3e0 */
  push32((uint32_t)(0x107cf3e0u));
  /* 107a24f8 push 0x107cf448 */
  push32((uint32_t)(0x107cf448u));
  /* 107a24fd call dword ptr [0x107d241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d241c))), 0x107a2503u);
  /* 107a2503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2506 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2508 call 0x107a2ca0 */
  push32(0x107a250du); f_107a2ca0();
  /* 107a250d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a250f jle 0x107a257e */
  if ((C.zf||C.sf!=C.of)) goto L_107a257e;
  /* 107a2511 push 0x107cf4b8 */
  push32((uint32_t)(0x107cf4b8u));
  /* 107a2516 call 0x107a1005 */
  push32(0x107a251bu); f_107a1005();
  /* 107a251b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a251e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2520 jle 0x107a257e */
  if ((C.zf||C.sf!=C.of)) goto L_107a257e;
  /* 107a2522 mov esi, esp */
  ESI = (ESP);
  /* 107a2524 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2526 push 6 */
  push32((uint32_t)(0x6u));
  /* 107a2528 call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a252eu);
  /* 107a252e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2531 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2533 call 0x107a2ca0 */
  push32(0x107a2538u); f_107a2ca0();
  /* 107a2538 mov esi, esp */
  ESI = (ESP);
  /* 107a253a push 0x107ca160 */
  push32((uint32_t)(0x107ca160u));
  /* 107a253f call dword ptr [0x107d2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2408))), 0x107a2545u);
  /* 107a2545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2548 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a254a call 0x107a2ca0 */
  push32(0x107a254fu); f_107a2ca0();
  /* 107a254f mov esi, esp */
  ESI = (ESP);
  /* 107a2551 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2553 push 0x107cf4b8 */
  push32((uint32_t)(0x107cf4b8u));
  /* 107a2558 call dword ptr [0x107d240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d240c))), 0x107a255eu);
  /* 107a255e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2561 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2563 call 0x107a2ca0 */
  push32(0x107a2568u); f_107a2ca0();
  /* 107a2568 mov esi, esp */
  ESI = (ESP);
  /* 107a256a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a256c push 4 */
  push32((uint32_t)(0x4u));
  /* 107a256e call dword ptr [0x107d244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d244c))), 0x107a2574u);
  /* 107a2574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2577 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2579 call 0x107a2ca0 */
  push32(0x107a257eu); f_107a2ca0();
L_107a257e:;
  /* 107a257e mov esi, esp */
  ESI = (ESP);
  /* 107a2580 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 107a2582 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a2588u);
  /* 107a2588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a258b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a258d call 0x107a2ca0 */
  push32(0x107a2592u); f_107a2ca0();
  /* 107a2592 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a2597 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2599 je 0x107a26e1 */
  if (C.zf) goto L_107a26e1;
  /* 107a259f mov esi, esp */
  ESI = (ESP);
  /* 107a25a1 push 6 */
  push32((uint32_t)(0x6u));
  /* 107a25a3 call dword ptr [0x107d23fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23fc))), 0x107a25a9u);
  /* 107a25a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a25ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a25ae call 0x107a2ca0 */
  push32(0x107a25b3u); f_107a2ca0();
  /* 107a25b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a25b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a25ba je 0x107a26e1 */
  if (C.zf) goto L_107a26e1;
  /* 107a25c0 mov esi, esp */
  ESI = (ESP);
  /* 107a25c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a25c4 push 0x107cf458 */
  push32((uint32_t)(0x107cf458u));
  /* 107a25c9 call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a25cfu);
  /* 107a25cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a25d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a25d4 call 0x107a2ca0 */
  push32(0x107a25d9u); f_107a2ca0();
  /* 107a25d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a25db jg 0x107a26b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_107a26b4;
  /* 107a25e1 mov esi, esp */
  ESI = (ESP);
  /* 107a25e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a25e5 push 0x107cf460 */
  push32((uint32_t)(0x107cf460u));
  /* 107a25ea call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a25f0u);
  /* 107a25f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a25f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a25f5 call 0x107a2ca0 */
  push32(0x107a25fau); f_107a2ca0();
  /* 107a25fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a25fc jg 0x107a26b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_107a26b4;
  /* 107a2602 mov esi, esp */
  ESI = (ESP);
  /* 107a2604 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2606 push 0x107cf460 */
  push32((uint32_t)(0x107cf460u));
  /* 107a260b call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a2611u);
  /* 107a2611 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2614 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2616 call 0x107a2ca0 */
  push32(0x107a261bu); f_107a2ca0();
  /* 107a261b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a261d jg 0x107a26b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_107a26b4;
  /* 107a2623 mov esi, esp */
  ESI = (ESP);
  /* 107a2625 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2627 push 0x107cf468 */
  push32((uint32_t)(0x107cf468u));
  /* 107a262c call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a2632u);
  /* 107a2632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2637 call 0x107a2ca0 */
  push32(0x107a263cu); f_107a2ca0();
  /* 107a263c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a263e jg 0x107a26b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_107a26b4;
  /* 107a2640 mov esi, esp */
  ESI = (ESP);
  /* 107a2642 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2644 push 0x107cf470 */
  push32((uint32_t)(0x107cf470u));
  /* 107a2649 call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a264fu);
  /* 107a264f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2652 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2654 call 0x107a2ca0 */
  push32(0x107a2659u); f_107a2ca0();
  /* 107a2659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a265b jg 0x107a26b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_107a26b4;
  /* 107a265d mov esi, esp */
  ESI = (ESP);
  /* 107a265f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2661 push 0x107cf478 */
  push32((uint32_t)(0x107cf478u));
  /* 107a2666 call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a266cu);
  /* 107a266c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a266f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2671 call 0x107a2ca0 */
  push32(0x107a2676u); f_107a2ca0();
  /* 107a2676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2678 jg 0x107a26b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_107a26b4;
  /* 107a267a mov esi, esp */
  ESI = (ESP);
  /* 107a267c push 0 */
  push32((uint32_t)(0x0u));
  /* 107a267e push 0x107cf480 */
  push32((uint32_t)(0x107cf480u));
  /* 107a2683 call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a2689u);
  /* 107a2689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a268c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a268e call 0x107a2ca0 */
  push32(0x107a2693u); f_107a2ca0();
  /* 107a2693 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2695 jg 0x107a26b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_107a26b4;
  /* 107a2697 mov esi, esp */
  ESI = (ESP);
  /* 107a2699 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a269b push 0x107cf488 */
  push32((uint32_t)(0x107cf488u));
  /* 107a26a0 call dword ptr [0x107d2438] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2438))), 0x107a26a6u);
  /* 107a26a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a26a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a26ab call 0x107a2ca0 */
  push32(0x107a26b0u); f_107a2ca0();
  /* 107a26b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a26b2 jle 0x107a26e1 */
  if ((C.zf||C.sf!=C.of)) goto L_107a26e1;
L_107a26b4:;
  /* 107a26b4 mov esi, esp */
  ESI = (ESP);
  /* 107a26b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a26b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 107a26ba call dword ptr [0x107d2400] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2400))), 0x107a26c0u);
  /* 107a26c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a26c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a26c5 call 0x107a2ca0 */
  push32(0x107a26cau); f_107a2ca0();
  /* 107a26ca mov esi, esp */
  ESI = (ESP);
  /* 107a26cc push 0x107ca154 */
  push32((uint32_t)(0x107ca154u));
  /* 107a26d1 call dword ptr [0x107d2408] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2408))), 0x107a26d7u);
  /* 107a26d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a26da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a26dc call 0x107a2ca0 */
  push32(0x107a26e1u); f_107a2ca0();
L_107a26e1:;
  /* 107a26e1 pop edi */
  EDI = (pop32());
  /* 107a26e2 pop esi */
  ESI = (pop32());
  /* 107a26e3 pop ebx */
  EBX = (pop32());
  /* 107a26e4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a26e7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a26e9 call 0x107a2ca0 */
  push32(0x107a26eeu); f_107a2ca0();
  /* 107a26ee mov esp, ebp */
  ESP = (EBP);
  /* 107a26f0 pop ebp */
  EBP = (pop32());
  /* 107a26f1 ret  */
  ESPCHK(0x107a15a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b50 @ 0x107a2b50 (63 bytes, 26 insns) */
void f_107a2b50(void) {
  FTRACE(0x107a2b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a2b50 push ebp */
  push32((uint32_t)(EBP));
  /* 107a2b51 mov ebp, esp */
  EBP = (ESP);
  /* 107a2b53 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a2b56 push ebx */
  push32((uint32_t)(EBX));
  /* 107a2b57 push esi */
  push32((uint32_t)(ESI));
  /* 107a2b58 push edi */
  push32((uint32_t)(EDI));
  /* 107a2b59 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107a2b5c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107a2b61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107a2b66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107a2b68 mov esi, esp */
  ESI = (ESP);
  /* 107a2b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2b6d push eax */
  push32((uint32_t)(EAX));
  /* 107a2b6e call dword ptr [0x107d23f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23f8))), 0x107a2b74u);
  /* 107a2b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2b77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2b79 call 0x107a2ca0 */
  push32(0x107a2b7eu); f_107a2ca0();
  /* 107a2b7e pop edi */
  EDI = (pop32());
  /* 107a2b7f pop esi */
  ESI = (pop32());
  /* 107a2b80 pop ebx */
  EBX = (pop32());
  /* 107a2b81 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2b84 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2b86 call 0x107a2ca0 */
  push32(0x107a2b8bu); f_107a2ca0();
  /* 107a2b8b mov esp, ebp */
  ESP = (EBP);
  /* 107a2b8d pop ebp */
  EBP = (pop32());
  /* 107a2b8e ret  */
  ESPCHK(0x107a2b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba0 @ 0x107a2ba0 (67 bytes, 28 insns) */
void f_107a2ba0(void) {
  FTRACE(0x107a2ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a2ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a2ba1 mov ebp, esp */
  EBP = (ESP);
  /* 107a2ba3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a2ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 107a2ba7 push esi */
  push32((uint32_t)(ESI));
  /* 107a2ba8 push edi */
  push32((uint32_t)(EDI));
  /* 107a2ba9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107a2bac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107a2bb1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107a2bb6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107a2bb8 mov esi, esp */
  ESI = (ESP);
  /* 107a2bba mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 107a2bbd push eax */
  push32((uint32_t)(EAX));
  /* 107a2bbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2bc1 push ecx */
  push32((uint32_t)(ECX));
  /* 107a2bc2 call dword ptr [0x107d23f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d23f4))), 0x107a2bc8u);
  /* 107a2bc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2bcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2bcd call 0x107a2ca0 */
  push32(0x107a2bd2u); f_107a2ca0();
  /* 107a2bd2 pop edi */
  EDI = (pop32());
  /* 107a2bd3 pop esi */
  ESI = (pop32());
  /* 107a2bd4 pop ebx */
  EBX = (pop32());
  /* 107a2bd5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2bd8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2bda call 0x107a2ca0 */
  push32(0x107a2bdfu); f_107a2ca0();
  /* 107a2bdf mov esp, ebp */
  ESP = (EBP);
  /* 107a2be1 pop ebp */
  EBP = (pop32());
  /* 107a2be2 ret  */
  ESPCHK(0x107a2ba0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x107a2ca0 (56 bytes, 28 insns) */
void f_107a2ca0(void) {
  FTRACE(0x107a2ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a2ca0 jne 0x107a2ca3 */
  if (!C.zf) goto L_107a2ca3;
  /* 107a2ca2 ret  */
  ESPCHK(0x107a2ca0u, _esp0);
  ESP += 4; return;
L_107a2ca3:;
  /* 107a2ca3 push ebp */
  push32((uint32_t)(EBP));
  /* 107a2ca4 mov ebp, esp */
  EBP = (ESP);
  /* 107a2ca6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a2ca9 push eax */
  push32((uint32_t)(EAX));
  /* 107a2caa push edx */
  push32((uint32_t)(EDX));
  /* 107a2cab push ebx */
  push32((uint32_t)(EBX));
  /* 107a2cac push esi */
  push32((uint32_t)(ESI));
  /* 107a2cad push edi */
  push32((uint32_t)(EDI));
  /* 107a2cae push 0x107ca1b0 */
  push32((uint32_t)(0x107ca1b0u));
  /* 107a2cb3 push 0x107ca1ac */
  push32((uint32_t)(0x107ca1acu));
  /* 107a2cb8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 107a2cba push 0x107ca19c */
  push32((uint32_t)(0x107ca19cu));
  /* 107a2cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 107a2cc1 call 0x107a3070 */
  push32(0x107a2cc6u); f_107a3070();
  /* 107a2cc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2cc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2ccc jne 0x107a2ccf */
  if (!C.zf) goto L_107a2ccf;
  /* 107a2cce int3  */
  x86_unimpl("int3 @ 0x107a2cce");
L_107a2ccf:;
  /* 107a2ccf pop edi */
  EDI = (pop32());
  /* 107a2cd0 pop esi */
  ESI = (pop32());
  /* 107a2cd1 pop ebx */
  EBX = (pop32());
  /* 107a2cd2 pop edx */
  EDX = (pop32());
  /* 107a2cd3 pop eax */
  EAX = (pop32());
  /* 107a2cd4 mov esp, ebp */
  ESP = (EBP);
  /* 107a2cd6 pop ebp */
  EBP = (pop32());
  /* 107a2cd7 ret  */
  ESPCHK(0x107a2ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ce0 @ 0x107a2ce0 (313 bytes, 78 insns) */
void f_107a2ce0(void) {
  FTRACE(0x107a2ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a2ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a2ce1 mov ebp, esp */
  EBP = (ESP);
  /* 107a2ce3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2ce7 jne 0x107a2da7 */
  if (!C.zf) goto L_107a2da7;
  /* 107a2ced call dword ptr [0x107d22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22e4))), 0x107a2cf3u);
  /* 107a2cf3 mov dword ptr [0x107cf534], eax */
  w32((uint32_t)(0x107cf534), (EAX));
  /* 107a2cf8 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a2cfa call 0x107a67a0 */
  push32(0x107a2cffu); f_107a67a0();
  /* 107a2cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2d02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2d04 jne 0x107a2d0d */
  if (!C.zf) goto L_107a2d0d;
  /* 107a2d06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a2d08 jmp 0x107a2e15 */
  goto L_107a2e15;
L_107a2d0d:;
  /* 107a2d0d mov eax, dword ptr [0x107cf534] */
  EAX = (r32((uint32_t)(0x107cf534)));
  /* 107a2d12 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 107a2d15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a2d1a mov dword ptr [0x107cf540], eax */
  w32((uint32_t)(0x107cf540), (EAX));
  /* 107a2d1f mov ecx, dword ptr [0x107cf534] */
  ECX = (r32((uint32_t)(0x107cf534)));
  /* 107a2d25 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a2d2b mov dword ptr [0x107cf53c], ecx */
  w32((uint32_t)(0x107cf53c), (ECX));
  /* 107a2d31 mov edx, dword ptr [0x107cf53c] */
  EDX = (r32((uint32_t)(0x107cf53c)));
  /* 107a2d37 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107a2d3a add edx, dword ptr [0x107cf540] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x107cf540))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2d40 mov dword ptr [0x107cf538], edx */
  w32((uint32_t)(0x107cf538), (EDX));
  /* 107a2d46 mov eax, dword ptr [0x107cf534] */
  EAX = (r32((uint32_t)(0x107cf534)));
  /* 107a2d4b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107a2d4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a2d53 mov dword ptr [0x107cf534], eax */
  w32((uint32_t)(0x107cf534), (EAX));
  /* 107a2d58 call 0x107a3910 */
  push32(0x107a2d5du); f_107a3910();
  /* 107a2d5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2d5f jne 0x107a2d6d */
  if (!C.zf) goto L_107a2d6d;
  /* 107a2d61 call 0x107a67f0 */
  push32(0x107a2d66u); f_107a67f0();
  /* 107a2d66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a2d68 jmp 0x107a2e15 */
  goto L_107a2e15;
L_107a2d6d:;
  /* 107a2d6d call dword ptr [0x107d22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22e0))), 0x107a2d73u);
  /* 107a2d73 mov dword ptr [0x107d106c], eax */
  w32((uint32_t)(0x107d106c), (EAX));
  /* 107a2d78 call 0x107a6580 */
  push32(0x107a2d7du); f_107a6580();
  /* 107a2d7d mov dword ptr [0x107cf51c], eax */
  w32((uint32_t)(0x107cf51c), (EAX));
  /* 107a2d82 call 0x107a3bc0 */
  push32(0x107a2d87u); f_107a3bc0();
  /* 107a2d87 call 0x107a6070 */
  push32(0x107a2d8cu); f_107a6070();
  /* 107a2d8c call 0x107a5f20 */
  push32(0x107a2d91u); f_107a5f20();
  /* 107a2d91 call 0x107a3710 */
  push32(0x107a2d96u); f_107a3710();
  /* 107a2d96 mov ecx, dword ptr [0x107cf518] */
  ECX = (r32((uint32_t)(0x107cf518)));
  /* 107a2d9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2d9f mov dword ptr [0x107cf518], ecx */
  w32((uint32_t)(0x107cf518), (ECX));
  /* 107a2da5 jmp 0x107a2e10 */
  goto L_107a2e10;
L_107a2da7:;
  /* 107a2da7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2dab jne 0x107a2e00 */
  if (!C.zf) goto L_107a2e00;
  /* 107a2dad cmp dword ptr [0x107cf518], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf518))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2db4 jle 0x107a2dfa */
  if ((C.zf||C.sf!=C.of)) goto L_107a2dfa;
  /* 107a2db6 mov edx, dword ptr [0x107cf518] */
  EDX = (r32((uint32_t)(0x107cf518)));
  /* 107a2dbc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a2dbf mov dword ptr [0x107cf518], edx */
  w32((uint32_t)(0x107cf518), (EDX));
  /* 107a2dc5 cmp dword ptr [0x107cf56c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf56c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2dcc jne 0x107a2dd3 */
  if (!C.zf) goto L_107a2dd3;
  /* 107a2dce call 0x107a3790 */
  push32(0x107a2dd3u); f_107a3790();
L_107a2dd3:;
  /* 107a2dd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107a2dd5 call 0x107a54c0 */
  push32(0x107a2ddau); f_107a54c0();
  /* 107a2dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2ddd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 107a2de0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2de2 je 0x107a2de9 */
  if (C.zf) goto L_107a2de9;
  /* 107a2de4 call 0x107a5dd0 */
  push32(0x107a2de9u); f_107a5dd0();
L_107a2de9:;
  /* 107a2de9 call 0x107a3ef0 */
  push32(0x107a2deeu); f_107a3ef0();
  /* 107a2dee call 0x107a39a0 */
  push32(0x107a2df3u); f_107a39a0();
  /* 107a2df3 call 0x107a67f0 */
  push32(0x107a2df8u); f_107a67f0();
  /* 107a2df8 jmp 0x107a2dfe */
  goto L_107a2dfe;
L_107a2dfa:;
  /* 107a2dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a2dfc jmp 0x107a2e15 */
  goto L_107a2e15;
L_107a2dfe:;
  /* 107a2dfe jmp 0x107a2e10 */
  goto L_107a2e10;
L_107a2e00:;
  /* 107a2e00 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2e04 jne 0x107a2e10 */
  if (!C.zf) goto L_107a2e10;
  /* 107a2e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2e08 call 0x107a3a90 */
  push32(0x107a2e0du); f_107a3a90();
  /* 107a2e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a2e10:;
  /* 107a2e10 mov eax, 1 */
  EAX = (0x1u);
L_107a2e15:;
  /* 107a2e15 pop ebp */
  EBP = (pop32());
  /* 107a2e16 ret 0xc */
  ESPCHK(0x107a2ce0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x107a2e20 (243 bytes, 86 insns) */
void f_107a2e20(void) {
  FTRACE(0x107a2e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a2e20 push ebp */
  push32((uint32_t)(EBP));
  /* 107a2e21 mov ebp, esp */
  EBP = (ESP);
  /* 107a2e23 push ecx */
  push32((uint32_t)(ECX));
  /* 107a2e24 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107a2e2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2e2f jne 0x107a2e41 */
  if (!C.zf) goto L_107a2e41;
  /* 107a2e31 cmp dword ptr [0x107cf518], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf518))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2e38 jne 0x107a2e41 */
  if (!C.zf) goto L_107a2e41;
  /* 107a2e3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a2e3c jmp 0x107a2f0d */
  goto L_107a2f0d;
L_107a2e41:;
  /* 107a2e41 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2e45 je 0x107a2e4d */
  if (C.zf) goto L_107a2e4d;
  /* 107a2e47 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2e4b jne 0x107a2e8f */
  if (!C.zf) goto L_107a2e8f;
L_107a2e4d:;
  /* 107a2e4d cmp dword ptr [0x107d107c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d107c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2e54 je 0x107a2e6b */
  if (C.zf) goto L_107a2e6b;
  /* 107a2e56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a2e59 push eax */
  push32((uint32_t)(EAX));
  /* 107a2e5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a2e5d push ecx */
  push32((uint32_t)(ECX));
  /* 107a2e5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2e61 push edx */
  push32((uint32_t)(EDX));
  /* 107a2e62 call dword ptr [0x107d107c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d107c))), 0x107a2e68u);
  /* 107a2e68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a2e6b:;
  /* 107a2e6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2e6f je 0x107a2e85 */
  if (C.zf) goto L_107a2e85;
  /* 107a2e71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a2e74 push eax */
  push32((uint32_t)(EAX));
  /* 107a2e75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a2e78 push ecx */
  push32((uint32_t)(ECX));
  /* 107a2e79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2e7c push edx */
  push32((uint32_t)(EDX));
  /* 107a2e7d call 0x107a2ce0 */
  push32(0x107a2e82u); f_107a2ce0();
  /* 107a2e82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a2e85:;
  /* 107a2e85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2e89 jne 0x107a2e8f */
  if (!C.zf) goto L_107a2e8f;
  /* 107a2e8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a2e8d jmp 0x107a2f0d */
  goto L_107a2f0d;
L_107a2e8f:;
  /* 107a2e8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a2e92 push eax */
  push32((uint32_t)(EAX));
  /* 107a2e93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a2e96 push ecx */
  push32((uint32_t)(ECX));
  /* 107a2e97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2e9a push edx */
  push32((uint32_t)(EDX));
  /* 107a2e9b call 0x107a1014 */
  push32(0x107a2ea0u); f_107a1014();
  /* 107a2ea0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a2ea3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2ea7 jne 0x107a2ebe */
  if (!C.zf) goto L_107a2ebe;
  /* 107a2ea9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2ead jne 0x107a2ebe */
  if (!C.zf) goto L_107a2ebe;
  /* 107a2eaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a2eb2 push eax */
  push32((uint32_t)(EAX));
  /* 107a2eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a2eb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2eb8 push ecx */
  push32((uint32_t)(ECX));
  /* 107a2eb9 call 0x107a2ce0 */
  push32(0x107a2ebeu); f_107a2ce0();
L_107a2ebe:;
  /* 107a2ebe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2ec2 je 0x107a2eca */
  if (C.zf) goto L_107a2eca;
  /* 107a2ec4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2ec8 jne 0x107a2f0a */
  if (!C.zf) goto L_107a2f0a;
L_107a2eca:;
  /* 107a2eca mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a2ecd push edx */
  push32((uint32_t)(EDX));
  /* 107a2ece mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a2ed1 push eax */
  push32((uint32_t)(EAX));
  /* 107a2ed2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 107a2ed6 call 0x107a2ce0 */
  push32(0x107a2edbu); f_107a2ce0();
  /* 107a2edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a2edd jne 0x107a2ee6 */
  if (!C.zf) goto L_107a2ee6;
  /* 107a2edf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107a2ee6:;
  /* 107a2ee6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2eea je 0x107a2f0a */
  if (C.zf) goto L_107a2f0a;
  /* 107a2eec cmp dword ptr [0x107d107c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d107c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2ef3 je 0x107a2f0a */
  if (C.zf) goto L_107a2f0a;
  /* 107a2ef5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a2ef8 push edx */
  push32((uint32_t)(EDX));
  /* 107a2ef9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a2efc push eax */
  push32((uint32_t)(EAX));
  /* 107a2efd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2f00 push ecx */
  push32((uint32_t)(ECX));
  /* 107a2f01 call dword ptr [0x107d107c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d107c))), 0x107a2f07u);
  /* 107a2f07 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a2f0a:;
  /* 107a2f0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107a2f0d:;
  /* 107a2f0d mov esp, ebp */
  ESP = (EBP);
  /* 107a2f0f pop ebp */
  EBP = (pop32());
  /* 107a2f10 ret 0xc */
  ESPCHK(0x107a2e20u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x107a2f20 (58 bytes, 18 insns) */
void f_107a2f20(void) {
  FTRACE(0x107a2f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a2f20 push ebp */
  push32((uint32_t)(EBP));
  /* 107a2f21 mov ebp, esp */
  EBP = (ESP);
  /* 107a2f23 cmp dword ptr [0x107cf524], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf524))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2f2a je 0x107a2f3e */
  if (C.zf) goto L_107a2f3e;
  /* 107a2f2c cmp dword ptr [0x107cf524], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf524))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2f33 jne 0x107a2f43 */
  if (!C.zf) goto L_107a2f43;
  /* 107a2f35 cmp dword ptr [0x107cf528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2f3c jne 0x107a2f43 */
  if (!C.zf) goto L_107a2f43;
L_107a2f3e:;
  /* 107a2f3e call 0x107a6890 */
  push32(0x107a2f43u); f_107a6890();
L_107a2f43:;
  /* 107a2f43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2f46 push eax */
  push32((uint32_t)(EAX));
  /* 107a2f47 call 0x107a68e0 */
  push32(0x107a2f4cu); f_107a68e0();
  /* 107a2f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2f4f push 0xff */
  push32((uint32_t)(0xffu));
  /* 107a2f54 call dword ptr [0x107cda30] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cda30))), 0x107a2f5au);
  /* 107a2f5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a2f5d pop ebp */
  EBP = (pop32());
  /* 107a2f5e ret  */
  ESPCHK(0x107a2f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x107a2f60 (11 bytes, 5 insns) */
void f_107a2f60(void) {
  FTRACE(0x107a2f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a2f60 push ebp */
  push32((uint32_t)(EBP));
  /* 107a2f61 mov ebp, esp */
  EBP = (ESP);
  /* 107a2f63 call dword ptr [0x107d22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22e8))), 0x107a2f69u);
  /* 107a2f69 pop ebp */
  EBP = (pop32());
  /* 107a2f6a ret  */
  ESPCHK(0x107a2f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f70 @ 0x107a2f70 (87 bytes, 30 insns) */
void f_107a2f70(void) {
  FTRACE(0x107a2f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a2f70 push ebp */
  push32((uint32_t)(EBP));
  /* 107a2f71 mov ebp, esp */
  EBP = (ESP);
  /* 107a2f73 push ecx */
  push32((uint32_t)(ECX));
  /* 107a2f74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2f78 jl 0x107a2f80 */
  if ((C.sf!=C.of)) goto L_107a2f80;
  /* 107a2f7a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2f7e jl 0x107a2f85 */
  if ((C.sf!=C.of)) goto L_107a2f85;
L_107a2f80:;
  /* 107a2f80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a2f83 jmp 0x107a2fc3 */
  goto L_107a2fc3;
L_107a2f85:;
  /* 107a2f85 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2f89 jne 0x107a2f97 */
  if (!C.zf) goto L_107a2f97;
  /* 107a2f8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2f8e mov eax, dword ptr [eax*4 + 0x107cda38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x107cda38)));
  /* 107a2f95 jmp 0x107a2fc3 */
  goto L_107a2fc3;
L_107a2f97:;
  /* 107a2f97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a2f9a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 107a2f9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a2f9f je 0x107a2fa6 */
  if (C.zf) goto L_107a2fa6;
  /* 107a2fa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a2fa4 jmp 0x107a2fc3 */
  goto L_107a2fc3;
L_107a2fa6:;
  /* 107a2fa6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2fa9 mov eax, dword ptr [edx*4 + 0x107cda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x107cda38)));
  /* 107a2fb0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a2fb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2fb6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a2fb9 mov dword ptr [ecx*4 + 0x107cda38], edx */
  w32((uint32_t)(ECX*4 + 0x107cda38), (EDX));
  /* 107a2fc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107a2fc3:;
  /* 107a2fc3 mov esp, ebp */
  ESP = (EBP);
  /* 107a2fc5 pop ebp */
  EBP = (pop32());
  /* 107a2fc6 ret  */
  ESPCHK(0x107a2f70u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x107a2fd0 (126 bytes, 38 insns) */
void f_107a2fd0(void) {
  FTRACE(0x107a2fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a2fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a2fd1 mov ebp, esp */
  EBP = (ESP);
  /* 107a2fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a2fd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2fd8 jl 0x107a2fe0 */
  if ((C.sf!=C.of)) goto L_107a2fe0;
  /* 107a2fda cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2fde jl 0x107a2fe7 */
  if ((C.sf!=C.of)) goto L_107a2fe7;
L_107a2fe0:;
  /* 107a2fe0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 107a2fe5 jmp 0x107a304a */
  goto L_107a304a;
L_107a2fe7:;
  /* 107a2fe7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a2feb jne 0x107a2ff9 */
  if (!C.zf) goto L_107a2ff9;
  /* 107a2fed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2ff0 mov eax, dword ptr [eax*4 + 0x107cda44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x107cda44)));
  /* 107a2ff7 jmp 0x107a304a */
  goto L_107a304a;
L_107a2ff9:;
  /* 107a2ff9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a2ffc mov edx, dword ptr [ecx*4 + 0x107cda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107cda44)));
  /* 107a3003 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a3006 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a300a jne 0x107a3020 */
  if (!C.zf) goto L_107a3020;
  /* 107a300c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 107a300e call dword ptr [0x107d22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22ec))), 0x107a3014u);
  /* 107a3014 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3017 mov dword ptr [ecx*4 + 0x107cda44], eax */
  w32((uint32_t)(ECX*4 + 0x107cda44), (EAX));
  /* 107a301e jmp 0x107a3047 */
  goto L_107a3047;
L_107a3020:;
  /* 107a3020 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3024 jne 0x107a303a */
  if (!C.zf) goto L_107a303a;
  /* 107a3026 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 107a3028 call dword ptr [0x107d22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22ec))), 0x107a302eu);
  /* 107a302e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3031 mov dword ptr [edx*4 + 0x107cda44], eax */
  w32((uint32_t)(EDX*4 + 0x107cda44), (EAX));
  /* 107a3038 jmp 0x107a3047 */
  goto L_107a3047;
L_107a303a:;
  /* 107a303a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a303d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a3040 mov dword ptr [eax*4 + 0x107cda44], ecx */
  w32((uint32_t)(EAX*4 + 0x107cda44), (ECX));
L_107a3047:;
  /* 107a3047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107a304a:;
  /* 107a304a mov esp, ebp */
  ESP = (EBP);
  /* 107a304c pop ebp */
  EBP = (pop32());
  /* 107a304d ret  */
  ESPCHK(0x107a2fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003050 @ 0x107a3050 (28 bytes, 11 insns) */
void f_107a3050(void) {
  FTRACE(0x107a3050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3050 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3051 mov ebp, esp */
  EBP = (ESP);
  /* 107a3053 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3054 mov eax, dword ptr [0x107d1060] */
  EAX = (r32((uint32_t)(0x107d1060)));
  /* 107a3059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a305c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a305f mov dword ptr [0x107d1060], ecx */
  w32((uint32_t)(0x107d1060), (ECX));
  /* 107a3065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3068 mov esp, ebp */
  ESP = (EBP);
  /* 107a306a pop ebp */
  EBP = (pop32());
  /* 107a306b ret  */
  ESPCHK(0x107a3050u, _esp0);
  ESP += 4; return;
}

/* FUN_10003070 @ 0x107a3070 (912 bytes, 248 insns) */
void f_107a3070(void) {
  FTRACE(0x107a3070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3070 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3071 mov ebp, esp */
  EBP = (ESP);
  /* 107a3073 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 107a3078 call 0x107a7150 */
  push32(0x107a307du); f_107a7150();
  /* 107a307d push edi */
  push32((uint32_t)(EDI));
  /* 107a307e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 107a3085 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 107a308a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a308c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 107a3092 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107a3094 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 107a3096 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 107a3097 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 107a309e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 107a30a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a30a5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 107a30ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107a30ad stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 107a30af stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 107a30b0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 107a30b7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 107a30bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a30be lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 107a30c4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107a30c6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 107a30c8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 107a30c9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 107a30cc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 107a30d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a30d6 jl 0x107a30de */
  if ((C.sf!=C.of)) goto L_107a30de;
  /* 107a30d8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a30dc jl 0x107a30e6 */
  if ((C.sf!=C.of)) goto L_107a30e6;
L_107a30de:;
  /* 107a30de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a30e1 jmp 0x107a33fb */
  goto L_107a33fb;
L_107a30e6:;
  /* 107a30e6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a30ea jne 0x107a3190 */
  if (!C.zf) goto L_107a3190;
  /* 107a30f0 push 0x107cda34 */
  push32((uint32_t)(0x107cda34u));
  /* 107a30f5 call dword ptr [0x107d2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2304))), 0x107a30fbu);
  /* 107a30fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a30fd jle 0x107a3190 */
  if ((C.zf||C.sf!=C.of)) goto L_107a3190;
  /* 107a3103 cmp dword ptr [0x107cf52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a310a jne 0x107a314e */
  if (!C.zf) goto L_107a314e;
  /* 107a310c push 0x107ca358 */
  push32((uint32_t)(0x107ca358u));
  /* 107a3111 call dword ptr [0x107d2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2300))), 0x107a3117u);
  /* 107a3117 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 107a311d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3124 je 0x107a3146 */
  if (C.zf) goto L_107a3146;
  /* 107a3126 push 0x107ca34c */
  push32((uint32_t)(0x107ca34cu));
  /* 107a312b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 107a3131 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3132 call dword ptr [0x107d22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22fc))), 0x107a3138u);
  /* 107a3138 mov dword ptr [0x107cf52c], eax */
  w32((uint32_t)(0x107cf52c), (EAX));
  /* 107a313d cmp dword ptr [0x107cf52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3144 jne 0x107a314e */
  if (!C.zf) goto L_107a314e;
L_107a3146:;
  /* 107a3146 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a3149 jmp 0x107a33fb */
  goto L_107a33fb;
L_107a314e:;
  /* 107a314e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a3151 push edx */
  push32((uint32_t)(EDX));
  /* 107a3152 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a3155 push eax */
  push32((uint32_t)(EAX));
  /* 107a3156 push 0x107ca318 */
  push32((uint32_t)(0x107ca318u));
  /* 107a315b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 107a3161 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3162 call dword ptr [0x107cf52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf52c))), 0x107a3168u);
  /* 107a3168 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a316b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 107a3171 push edx */
  push32((uint32_t)(EDX));
  /* 107a3172 call dword ptr [0x107d22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f8))), 0x107a3178u);
  /* 107a3178 push 0x107cda34 */
  push32((uint32_t)(0x107cda34u));
  /* 107a317d call dword ptr [0x107d22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f4))), 0x107a3183u);
  /* 107a3183 call 0x107a2f60 */
  push32(0x107a3188u); f_107a2f60();
  /* 107a3188 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a318b jmp 0x107a33fb */
  goto L_107a33fb;
L_107a3190:;
  /* 107a3190 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3194 je 0x107a31cd */
  if (C.zf) goto L_107a31cd;
  /* 107a3196 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 107a319c push eax */
  push32((uint32_t)(EAX));
  /* 107a319d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a31a0 push ecx */
  push32((uint32_t)(ECX));
  /* 107a31a1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 107a31a6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 107a31ac push edx */
  push32((uint32_t)(EDX));
  /* 107a31ad call 0x107a7050 */
  push32(0x107a31b2u); f_107a7050();
  /* 107a31b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a31b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a31b7 jge 0x107a31cd */
  if ((C.sf==C.of)) goto L_107a31cd;
  /* 107a31b9 push 0x107ca2ec */
  push32((uint32_t)(0x107ca2ecu));
  /* 107a31be lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 107a31c4 push eax */
  push32((uint32_t)(EAX));
  /* 107a31c5 call 0x107a6f60 */
  push32(0x107a31cau); f_107a6f60();
  /* 107a31ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a31cd:;
  /* 107a31cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a31d1 jne 0x107a3205 */
  if (!C.zf) goto L_107a3205;
  /* 107a31d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a31d7 je 0x107a31e5 */
  if (C.zf) goto L_107a31e5;
  /* 107a31d9 mov dword ptr [ebp - 0x3028], 0x107ca2d8 */
  w32((uint32_t)(EBP + -0x3028), (0x107ca2d8u));
  /* 107a31e3 jmp 0x107a31ef */
  goto L_107a31ef;
L_107a31e5:;
  /* 107a31e5 mov dword ptr [ebp - 0x3028], 0x107ca2c4 */
  w32((uint32_t)(EBP + -0x3028), (0x107ca2c4u));
L_107a31ef:;
  /* 107a31ef mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 107a31f5 push ecx */
  push32((uint32_t)(ECX));
  /* 107a31f6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 107a31fc push edx */
  push32((uint32_t)(EDX));
  /* 107a31fd call 0x107a6f60 */
  push32(0x107a3202u); f_107a6f60();
  /* 107a3202 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3205:;
  /* 107a3205 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 107a320b push eax */
  push32((uint32_t)(EAX));
  /* 107a320c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 107a3212 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3213 call 0x107a6f70 */
  push32(0x107a3218u); f_107a6f70();
  /* 107a3218 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a321b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a321f jne 0x107a325a */
  if (!C.zf) goto L_107a325a;
  /* 107a3221 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3224 mov eax, dword ptr [edx*4 + 0x107cda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x107cda38)));
  /* 107a322b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 107a322e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a3230 je 0x107a3246 */
  if (C.zf) goto L_107a3246;
  /* 107a3232 push 0x107ca2c0 */
  push32((uint32_t)(0x107ca2c0u));
  /* 107a3237 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 107a323d push ecx */
  push32((uint32_t)(ECX));
  /* 107a323e call 0x107a6f70 */
  push32(0x107a3243u); f_107a6f70();
  /* 107a3243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3246:;
  /* 107a3246 push 0x107ca2bc */
  push32((uint32_t)(0x107ca2bcu));
  /* 107a324b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 107a3251 push edx */
  push32((uint32_t)(EDX));
  /* 107a3252 call 0x107a6f70 */
  push32(0x107a3257u); f_107a6f70();
  /* 107a3257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a325a:;
  /* 107a325a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a325e je 0x107a32a2 */
  if (C.zf) goto L_107a32a2;
  /* 107a3260 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 107a3266 push eax */
  push32((uint32_t)(EAX));
  /* 107a3267 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a326a push ecx */
  push32((uint32_t)(ECX));
  /* 107a326b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a326e push edx */
  push32((uint32_t)(EDX));
  /* 107a326f push 0x107ca2b0 */
  push32((uint32_t)(0x107ca2b0u));
  /* 107a3274 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107a3279 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 107a327f push eax */
  push32((uint32_t)(EAX));
  /* 107a3280 call 0x107a6e60 */
  push32(0x107a3285u); f_107a6e60();
  /* 107a3285 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a328a jge 0x107a32a0 */
  if ((C.sf==C.of)) goto L_107a32a0;
  /* 107a328c push 0x107ca2ec */
  push32((uint32_t)(0x107ca2ecu));
  /* 107a3291 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 107a3297 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3298 call 0x107a6f60 */
  push32(0x107a329du); f_107a6f60();
  /* 107a329d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a32a0:;
  /* 107a32a0 jmp 0x107a32b8 */
  goto L_107a32b8;
L_107a32a2:;
  /* 107a32a2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 107a32a8 push edx */
  push32((uint32_t)(EDX));
  /* 107a32a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 107a32af push eax */
  push32((uint32_t)(EAX));
  /* 107a32b0 call 0x107a6f60 */
  push32(0x107a32b5u); f_107a6f60();
  /* 107a32b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a32b8:;
  /* 107a32b8 cmp dword ptr [0x107d1060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d1060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a32bf je 0x107a32fc */
  if (C.zf) goto L_107a32fc;
  /* 107a32c1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 107a32c7 push ecx */
  push32((uint32_t)(ECX));
  /* 107a32c8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 107a32ce push edx */
  push32((uint32_t)(EDX));
  /* 107a32cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a32d2 push eax */
  push32((uint32_t)(EAX));
  /* 107a32d3 call dword ptr [0x107d1060] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d1060))), 0x107a32d9u);
  /* 107a32d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a32dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a32de je 0x107a32fc */
  if (C.zf) goto L_107a32fc;
  /* 107a32e0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a32e4 jne 0x107a32f1 */
  if (!C.zf) goto L_107a32f1;
  /* 107a32e6 push 0x107cda34 */
  push32((uint32_t)(0x107cda34u));
  /* 107a32eb call dword ptr [0x107d22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f4))), 0x107a32f1u);
L_107a32f1:;
  /* 107a32f1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 107a32f7 jmp 0x107a33fb */
  goto L_107a33fb;
L_107a32fc:;
  /* 107a32fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a32ff mov edx, dword ptr [ecx*4 + 0x107cda38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107cda38)));
  /* 107a3306 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107a3309 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a330b je 0x107a334b */
  if (C.zf) goto L_107a334b;
  /* 107a330d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3310 cmp dword ptr [eax*4 + 0x107cda44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x107cda44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3318 je 0x107a334b */
  if (C.zf) goto L_107a334b;
  /* 107a331a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a331c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 107a3322 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3323 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 107a3329 push edx */
  push32((uint32_t)(EDX));
  /* 107a332a call 0x107a6de0 */
  push32(0x107a332fu); f_107a6de0();
  /* 107a332f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3332 push eax */
  push32((uint32_t)(EAX));
  /* 107a3333 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 107a3339 push eax */
  push32((uint32_t)(EAX));
  /* 107a333a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a333d mov edx, dword ptr [ecx*4 + 0x107cda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107cda44)));
  /* 107a3344 push edx */
  push32((uint32_t)(EDX));
  /* 107a3345 call dword ptr [0x107d22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f0))), 0x107a334bu);
L_107a334b:;
  /* 107a334b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a334e mov ecx, dword ptr [eax*4 + 0x107cda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x107cda38)));
  /* 107a3355 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 107a3358 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a335a je 0x107a3369 */
  if (C.zf) goto L_107a3369;
  /* 107a335c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 107a3362 push edx */
  push32((uint32_t)(EDX));
  /* 107a3363 call dword ptr [0x107d22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f8))), 0x107a3369u);
L_107a3369:;
  /* 107a3369 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a336c mov ecx, dword ptr [eax*4 + 0x107cda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x107cda38)));
  /* 107a3373 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107a3376 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a3378 je 0x107a33e8 */
  if (C.zf) goto L_107a33e8;
  /* 107a337a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a337e je 0x107a339d */
  if (C.zf) goto L_107a339d;
  /* 107a3380 push 0xa */
  push32((uint32_t)(0xau));
  /* 107a3382 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 107a3388 push edx */
  push32((uint32_t)(EDX));
  /* 107a3389 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a338c push eax */
  push32((uint32_t)(EAX));
  /* 107a338d call 0x107a6af0 */
  push32(0x107a3392u); f_107a6af0();
  /* 107a3392 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3395 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 107a339b jmp 0x107a33a7 */
  goto L_107a33a7;
L_107a339d:;
  /* 107a339d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_107a33a7:;
  /* 107a33a7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 107a33ad push ecx */
  push32((uint32_t)(ECX));
  /* 107a33ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a33b1 push edx */
  push32((uint32_t)(EDX));
  /* 107a33b2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 107a33b8 push eax */
  push32((uint32_t)(EAX));
  /* 107a33b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a33bc push ecx */
  push32((uint32_t)(ECX));
  /* 107a33bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a33c0 push edx */
  push32((uint32_t)(EDX));
  /* 107a33c1 call 0x107a3400 */
  push32(0x107a33c6u); f_107a3400();
  /* 107a33c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a33c9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 107a33cf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a33d3 jne 0x107a33e0 */
  if (!C.zf) goto L_107a33e0;
  /* 107a33d5 push 0x107cda34 */
  push32((uint32_t)(0x107cda34u));
  /* 107a33da call dword ptr [0x107d22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f4))), 0x107a33e0u);
L_107a33e0:;
  /* 107a33e0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 107a33e6 jmp 0x107a33fb */
  goto L_107a33fb;
L_107a33e8:;
  /* 107a33e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a33ec jne 0x107a33f9 */
  if (!C.zf) goto L_107a33f9;
  /* 107a33ee push 0x107cda34 */
  push32((uint32_t)(0x107cda34u));
  /* 107a33f3 call dword ptr [0x107d22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f4))), 0x107a33f9u);
L_107a33f9:;
  /* 107a33f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107a33fb:;
  /* 107a33fb pop edi */
  EDI = (pop32());
  /* 107a33fc mov esp, ebp */
  ESP = (EBP);
  /* 107a33fe pop ebp */
  EBP = (pop32());
  /* 107a33ff ret  */
  ESPCHK(0x107a3070u, _esp0);
  ESP += 4; return;
}

/* FUN_10003400 @ 0x107a3400 (780 bytes, 197 insns) */
void f_107a3400(void) {
  FTRACE(0x107a3400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3400 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3401 mov ebp, esp */
  EBP = (ESP);
  /* 107a3403 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 107a3408 call 0x107a7150 */
  push32(0x107a340du); f_107a7150();
L_107a340d:;
  /* 107a340d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3411 jne 0x107a3438 */
  if (!C.zf) goto L_107a3438;
  /* 107a3413 push 0x107ca4a8 */
  push32((uint32_t)(0x107ca4a8u));
  /* 107a3418 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a341a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 107a341f push 0x107ca49c */
  push32((uint32_t)(0x107ca49cu));
  /* 107a3424 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3426 call 0x107a3070 */
  push32(0x107a342bu); f_107a3070();
  /* 107a342b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a342e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3431 jne 0x107a3438 */
  if (!C.zf) goto L_107a3438;
  /* 107a3433 call 0x107a2f60 */
  push32(0x107a3438u); f_107a2f60();
L_107a3438:;
  /* 107a3438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a343a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a343c jne 0x107a340d */
  if (!C.zf) goto L_107a340d;
  /* 107a343e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 107a3443 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 107a3449 push ecx */
  push32((uint32_t)(ECX));
  /* 107a344a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a344c call dword ptr [0x107d2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2308))), 0x107a3452u);
  /* 107a3452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a3454 jne 0x107a346a */
  if (!C.zf) goto L_107a346a;
  /* 107a3456 push 0x107ca484 */
  push32((uint32_t)(0x107ca484u));
  /* 107a345b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 107a3461 push edx */
  push32((uint32_t)(EDX));
  /* 107a3462 call 0x107a6f60 */
  push32(0x107a3467u); f_107a6f60();
  /* 107a3467 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a346a:;
  /* 107a346a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 107a3470 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a3473 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3476 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3477 call 0x107a6de0 */
  push32(0x107a347cu); f_107a6de0();
  /* 107a347c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a347f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3482 jbe 0x107a34ad */
  if ((C.cf||C.zf)) goto L_107a34ad;
  /* 107a3484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3487 push edx */
  push32((uint32_t)(EDX));
  /* 107a3488 call 0x107a6de0 */
  push32(0x107a348du); f_107a6de0();
  /* 107a348d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3490 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3493 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 107a3497 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a349a push 3 */
  push32((uint32_t)(0x3u));
  /* 107a349c push 0x107ca480 */
  push32((uint32_t)(0x107ca480u));
  /* 107a34a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a34a4 push eax */
  push32((uint32_t)(EAX));
  /* 107a34a5 call 0x107a77d0 */
  push32(0x107a34aau); f_107a77d0();
  /* 107a34aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a34ad:;
  /* 107a34ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a34b0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 107a34b6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a34bd je 0x107a3508 */
  if (C.zf) goto L_107a3508;
  /* 107a34bf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 107a34c5 push edx */
  push32((uint32_t)(EDX));
  /* 107a34c6 call 0x107a6de0 */
  push32(0x107a34cbu); f_107a6de0();
  /* 107a34cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a34ce cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a34d1 jbe 0x107a3508 */
  if ((C.cf||C.zf)) goto L_107a3508;
  /* 107a34d3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 107a34d9 push eax */
  push32((uint32_t)(EAX));
  /* 107a34da call 0x107a6de0 */
  push32(0x107a34dfu); f_107a6de0();
  /* 107a34df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a34e2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 107a34e8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 107a34ec mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 107a34f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 107a34f4 push 0x107ca480 */
  push32((uint32_t)(0x107ca480u));
  /* 107a34f9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 107a34ff push eax */
  push32((uint32_t)(EAX));
  /* 107a3500 call 0x107a77d0 */
  push32(0x107a3505u); f_107a77d0();
  /* 107a3505 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3508:;
  /* 107a3508 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a350c jne 0x107a351a */
  if (!C.zf) goto L_107a351a;
  /* 107a350e mov dword ptr [ebp - 0x1114], 0x107ca40c */
  w32((uint32_t)(EBP + -0x1114), (0x107ca40cu));
  /* 107a3518 jmp 0x107a3524 */
  goto L_107a3524;
L_107a351a:;
  /* 107a351a mov dword ptr [ebp - 0x1114], 0x107ca1ac */
  w32((uint32_t)(EBP + -0x1114), (0x107ca1acu));
L_107a3524:;
  /* 107a3524 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a3527 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107a352a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a352c je 0x107a3539 */
  if (C.zf) goto L_107a3539;
  /* 107a352e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a3531 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 107a3537 jmp 0x107a3543 */
  goto L_107a3543;
L_107a3539:;
  /* 107a3539 mov dword ptr [ebp - 0x1118], 0x107ca1ac */
  w32((uint32_t)(EBP + -0x1118), (0x107ca1acu));
L_107a3543:;
  /* 107a3543 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a3546 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107a3549 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a354b je 0x107a355f */
  if (C.zf) goto L_107a355f;
  /* 107a354d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3551 jne 0x107a355f */
  if (!C.zf) goto L_107a355f;
  /* 107a3553 mov dword ptr [ebp - 0x111c], 0x107ca3fc */
  w32((uint32_t)(EBP + -0x111c), (0x107ca3fcu));
  /* 107a355d jmp 0x107a3569 */
  goto L_107a3569;
L_107a355f:;
  /* 107a355f mov dword ptr [ebp - 0x111c], 0x107ca1ac */
  w32((uint32_t)(EBP + -0x111c), (0x107ca1acu));
L_107a3569:;
  /* 107a3569 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a356c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107a356f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a3571 je 0x107a357f */
  if (C.zf) goto L_107a357f;
  /* 107a3573 mov dword ptr [ebp - 0x1120], 0x107ca3f8 */
  w32((uint32_t)(EBP + -0x1120), (0x107ca3f8u));
  /* 107a357d jmp 0x107a3589 */
  goto L_107a3589;
L_107a357f:;
  /* 107a357f mov dword ptr [ebp - 0x1120], 0x107ca1ac */
  w32((uint32_t)(EBP + -0x1120), (0x107ca1acu));
L_107a3589:;
  /* 107a3589 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a358d je 0x107a359a */
  if (C.zf) goto L_107a359a;
  /* 107a358f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a3592 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 107a3598 jmp 0x107a35a4 */
  goto L_107a35a4;
L_107a359a:;
  /* 107a359a mov dword ptr [ebp - 0x1124], 0x107ca1ac */
  w32((uint32_t)(EBP + -0x1124), (0x107ca1acu));
L_107a35a4:;
  /* 107a35a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a35a8 je 0x107a35b6 */
  if (C.zf) goto L_107a35b6;
  /* 107a35aa mov dword ptr [ebp - 0x1128], 0x107ca3f0 */
  w32((uint32_t)(EBP + -0x1128), (0x107ca3f0u));
  /* 107a35b4 jmp 0x107a35c0 */
  goto L_107a35c0;
L_107a35b6:;
  /* 107a35b6 mov dword ptr [ebp - 0x1128], 0x107ca1ac */
  w32((uint32_t)(EBP + -0x1128), (0x107ca1acu));
L_107a35c0:;
  /* 107a35c0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a35c4 je 0x107a35d1 */
  if (C.zf) goto L_107a35d1;
  /* 107a35c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a35c9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 107a35cf jmp 0x107a35db */
  goto L_107a35db;
L_107a35d1:;
  /* 107a35d1 mov dword ptr [ebp - 0x112c], 0x107ca1ac */
  w32((uint32_t)(EBP + -0x112c), (0x107ca1acu));
L_107a35db:;
  /* 107a35db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a35df je 0x107a35ed */
  if (C.zf) goto L_107a35ed;
  /* 107a35e1 mov dword ptr [ebp - 0x1130], 0x107ca3e8 */
  w32((uint32_t)(EBP + -0x1130), (0x107ca3e8u));
  /* 107a35eb jmp 0x107a35f7 */
  goto L_107a35f7;
L_107a35ed:;
  /* 107a35ed mov dword ptr [ebp - 0x1130], 0x107ca1ac */
  w32((uint32_t)(EBP + -0x1130), (0x107ca1acu));
L_107a35f7:;
  /* 107a35f7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a35fe je 0x107a360e */
  if (C.zf) goto L_107a360e;
  /* 107a3600 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 107a3606 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 107a360c jmp 0x107a3618 */
  goto L_107a3618;
L_107a360e:;
  /* 107a360e mov dword ptr [ebp - 0x1134], 0x107ca1ac */
  w32((uint32_t)(EBP + -0x1134), (0x107ca1acu));
L_107a3618:;
  /* 107a3618 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a361f je 0x107a362d */
  if (C.zf) goto L_107a362d;
  /* 107a3621 mov dword ptr [ebp - 0x1138], 0x107ca3dc */
  w32((uint32_t)(EBP + -0x1138), (0x107ca3dcu));
  /* 107a362b jmp 0x107a3637 */
  goto L_107a3637;
L_107a362d:;
  /* 107a362d mov dword ptr [ebp - 0x1138], 0x107ca1ac */
  w32((uint32_t)(EBP + -0x1138), (0x107ca1acu));
L_107a3637:;
  /* 107a3637 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 107a363d push edx */
  push32((uint32_t)(EDX));
  /* 107a363e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 107a3644 push eax */
  push32((uint32_t)(EAX));
  /* 107a3645 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 107a364b push ecx */
  push32((uint32_t)(ECX));
  /* 107a364c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 107a3652 push edx */
  push32((uint32_t)(EDX));
  /* 107a3653 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 107a3659 push eax */
  push32((uint32_t)(EAX));
  /* 107a365a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 107a3660 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3661 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 107a3667 push edx */
  push32((uint32_t)(EDX));
  /* 107a3668 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 107a366e push eax */
  push32((uint32_t)(EAX));
  /* 107a366f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 107a3675 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3676 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 107a367c push edx */
  push32((uint32_t)(EDX));
  /* 107a367d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3680 push eax */
  push32((uint32_t)(EAX));
  /* 107a3681 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3684 mov edx, dword ptr [ecx*4 + 0x107cda50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107cda50)));
  /* 107a368b push edx */
  push32((uint32_t)(EDX));
  /* 107a368c push 0x107ca388 */
  push32((uint32_t)(0x107ca388u));
  /* 107a3691 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107a3696 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 107a369c push eax */
  push32((uint32_t)(EAX));
  /* 107a369d call 0x107a6e60 */
  push32(0x107a36a2u); f_107a6e60();
  /* 107a36a2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a36a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a36a7 jge 0x107a36bd */
  if ((C.sf==C.of)) goto L_107a36bd;
  /* 107a36a9 push 0x107ca2ec */
  push32((uint32_t)(0x107ca2ecu));
  /* 107a36ae lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 107a36b4 push ecx */
  push32((uint32_t)(ECX));
  /* 107a36b5 call 0x107a6f60 */
  push32(0x107a36bau); f_107a6f60();
  /* 107a36ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a36bd:;
  /* 107a36bd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 107a36c2 push 0x107ca364 */
  push32((uint32_t)(0x107ca364u));
  /* 107a36c7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 107a36cd push edx */
  push32((uint32_t)(EDX));
  /* 107a36ce call 0x107a7710 */
  push32(0x107a36d3u); f_107a7710();
  /* 107a36d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a36d6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 107a36dc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a36e3 jne 0x107a36f6 */
  if (!C.zf) goto L_107a36f6;
  /* 107a36e5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 107a36e7 call 0x107a7450 */
  push32(0x107a36ecu); f_107a7450();
  /* 107a36ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a36ef push 3 */
  push32((uint32_t)(0x3u));
  /* 107a36f1 call 0x107a3770 */
  push32(0x107a36f6u); f_107a3770();
L_107a36f6:;
  /* 107a36f6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a36fd jne 0x107a3706 */
  if (!C.zf) goto L_107a3706;
  /* 107a36ff mov eax, 1 */
  EAX = (0x1u);
  /* 107a3704 jmp 0x107a3708 */
  goto L_107a3708;
L_107a3706:;
  /* 107a3706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107a3708:;
  /* 107a3708 mov esp, ebp */
  ESP = (EBP);
  /* 107a370a pop ebp */
  EBP = (pop32());
  /* 107a370b ret  */
  ESPCHK(0x107a3400u, _esp0);
  ESP += 4; return;
}

/* FUN_10003710 @ 0x107a3710 (56 bytes, 15 insns) */
void f_107a3710(void) {
  FTRACE(0x107a3710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3710 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3711 mov ebp, esp */
  EBP = (ESP);
  /* 107a3713 cmp dword ptr [0x107d105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a371a je 0x107a3722 */
  if (C.zf) goto L_107a3722;
  /* 107a371c call dword ptr [0x107d105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d105c))), 0x107a3722u);
L_107a3722:;
  /* 107a3722 push 0x107cd418 */
  push32((uint32_t)(0x107cd418u));
  /* 107a3727 push 0x107cd208 */
  push32((uint32_t)(0x107cd208u));
  /* 107a372c call 0x107a38e0 */
  push32(0x107a3731u); f_107a38e0();
  /* 107a3731 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3734 push 0x107cd104 */
  push32((uint32_t)(0x107cd104u));
  /* 107a3739 push 0x107cd000 */
  push32((uint32_t)(0x107cd000u));
  /* 107a373e call 0x107a38e0 */
  push32(0x107a3743u); f_107a38e0();
  /* 107a3743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3746 pop ebp */
  EBP = (pop32());
  /* 107a3747 ret  */
  ESPCHK(0x107a3710u, _esp0);
  ESP += 4; return;
}

/* FUN_10003750 @ 0x107a3750 (21 bytes, 10 insns) */
void f_107a3750(void) {
  FTRACE(0x107a3750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3750 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3751 mov ebp, esp */
  EBP = (ESP);
  /* 107a3753 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a3755 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a3757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a375a push eax */
  push32((uint32_t)(EAX));
  /* 107a375b call 0x107a37d0 */
  push32(0x107a3760u); f_107a37d0();
  /* 107a3760 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3763 pop ebp */
  EBP = (pop32());
  /* 107a3764 ret  */
  ESPCHK(0x107a3750u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x107a3770 (21 bytes, 10 insns) */
void f_107a3770(void) {
  FTRACE(0x107a3770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3770 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3771 mov ebp, esp */
  EBP = (ESP);
  /* 107a3773 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a3775 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a3777 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a377a push eax */
  push32((uint32_t)(EAX));
  /* 107a377b call 0x107a37d0 */
  push32(0x107a3780u); f_107a37d0();
  /* 107a3780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3783 pop ebp */
  EBP = (pop32());
  /* 107a3784 ret  */
  ESPCHK(0x107a3770u, _esp0);
  ESP += 4; return;
}

/* FUN_10003790 @ 0x107a3790 (19 bytes, 9 insns) */
void f_107a3790(void) {
  FTRACE(0x107a3790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3790 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3791 mov ebp, esp */
  EBP = (ESP);
  /* 107a3793 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a3795 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a3797 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a3799 call 0x107a37d0 */
  push32(0x107a379eu); f_107a37d0();
  /* 107a379e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a37a1 pop ebp */
  EBP = (pop32());
  /* 107a37a2 ret  */
  ESPCHK(0x107a3790u, _esp0);
  ESP += 4; return;
}

/* FUN_100037b0 @ 0x107a37b0 (19 bytes, 9 insns) */
void f_107a37b0(void) {
  FTRACE(0x107a37b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a37b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a37b1 mov ebp, esp */
  EBP = (ESP);
  /* 107a37b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a37b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a37b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a37b9 call 0x107a37d0 */
  push32(0x107a37beu); f_107a37d0();
  /* 107a37be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a37c1 pop ebp */
  EBP = (pop32());
  /* 107a37c2 ret  */
  ESPCHK(0x107a37b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100037d0 @ 0x107a37d0 (227 bytes, 61 insns) */
void f_107a37d0(void) {
  FTRACE(0x107a37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a37d1 mov ebp, esp */
  EBP = (ESP);
  /* 107a37d3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a37d4 call 0x107a38c0 */
  push32(0x107a37d9u); f_107a38c0();
  /* 107a37d9 cmp dword ptr [0x107cf570], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf570))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a37e0 jne 0x107a37f3 */
  if (!C.zf) goto L_107a37f3;
  /* 107a37e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a37e5 push eax */
  push32((uint32_t)(EAX));
  /* 107a37e6 call dword ptr [0x107d2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2314))), 0x107a37ecu);
  /* 107a37ec push eax */
  push32((uint32_t)(EAX));
  /* 107a37ed call dword ptr [0x107d2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2310))), 0x107a37f3u);
L_107a37f3:;
  /* 107a37f3 mov dword ptr [0x107cf56c], 1 */
  w32((uint32_t)(0x107cf56c), (0x1u));
  /* 107a37fd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 107a3800 mov byte ptr [0x107cf568], cl */
  w8((uint32_t)(0x107cf568), (CL));
  /* 107a3806 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a380a jne 0x107a3853 */
  if (!C.zf) goto L_107a3853;
  /* 107a380c cmp dword ptr [0x107d1058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d1058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3813 je 0x107a3841 */
  if (C.zf) goto L_107a3841;
  /* 107a3815 mov edx, dword ptr [0x107d1054] */
  EDX = (r32((uint32_t)(0x107d1054)));
  /* 107a381b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107a381e:;
  /* 107a381e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3821 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a3824 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a3827 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a382a cmp ecx, dword ptr [0x107d1058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107d1058))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3830 jb 0x107a3841 */
  if (C.cf) goto L_107a3841;
  /* 107a3832 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3835 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3838 je 0x107a383f */
  if (C.zf) goto L_107a383f;
  /* 107a383a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a383d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x107a383fu);
L_107a383f:;
  /* 107a383f jmp 0x107a381e */
  goto L_107a381e;
L_107a3841:;
  /* 107a3841 push 0x107cd724 */
  push32((uint32_t)(0x107cd724u));
  /* 107a3846 push 0x107cd51c */
  push32((uint32_t)(0x107cd51cu));
  /* 107a384b call 0x107a38e0 */
  push32(0x107a3850u); f_107a38e0();
  /* 107a3850 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3853:;
  /* 107a3853 push 0x107cd92c */
  push32((uint32_t)(0x107cd92cu));
  /* 107a3858 push 0x107cd828 */
  push32((uint32_t)(0x107cd828u));
  /* 107a385d call 0x107a38e0 */
  push32(0x107a3862u); f_107a38e0();
  /* 107a3862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3865 cmp dword ptr [0x107cf574], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf574))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a386c jne 0x107a388e */
  if (!C.zf) goto L_107a388e;
  /* 107a386e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107a3870 call 0x107a54c0 */
  push32(0x107a3875u); f_107a54c0();
  /* 107a3875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3878 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 107a387b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a387d je 0x107a388e */
  if (C.zf) goto L_107a388e;
  /* 107a387f mov dword ptr [0x107cf574], 1 */
  w32((uint32_t)(0x107cf574), (0x1u));
  /* 107a3889 call 0x107a5dd0 */
  push32(0x107a388eu); f_107a5dd0();
L_107a388e:;
  /* 107a388e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3892 je 0x107a389b */
  if (C.zf) goto L_107a389b;
  /* 107a3894 call 0x107a38d0 */
  push32(0x107a3899u); f_107a38d0();
  /* 107a3899 jmp 0x107a38af */
  goto L_107a38af;
L_107a389b:;
  /* 107a389b mov dword ptr [0x107cf570], 1 */
  w32((uint32_t)(0x107cf570), (0x1u));
  /* 107a38a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a38a8 push ecx */
  push32((uint32_t)(ECX));
  /* 107a38a9 call dword ptr [0x107d230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d230c))), 0x107a38afu);
L_107a38af:;
  /* 107a38af mov esp, ebp */
  ESP = (EBP);
  /* 107a38b1 pop ebp */
  EBP = (pop32());
  /* 107a38b2 ret  */
  ESPCHK(0x107a37d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038c0 @ 0x107a38c0 (15 bytes, 7 insns) */
void f_107a38c0(void) {
  FTRACE(0x107a38c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a38c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a38c1 mov ebp, esp */
  EBP = (ESP);
  /* 107a38c3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 107a38c5 call 0x107a79b0 */
  push32(0x107a38cau); f_107a79b0();
  /* 107a38ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a38cd pop ebp */
  EBP = (pop32());
  /* 107a38ce ret  */
  ESPCHK(0x107a38c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038d0 @ 0x107a38d0 (15 bytes, 7 insns) */
void f_107a38d0(void) {
  FTRACE(0x107a38d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a38d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a38d1 mov ebp, esp */
  EBP = (ESP);
  /* 107a38d3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 107a38d5 call 0x107a7a50 */
  push32(0x107a38dau); f_107a7a50();
  /* 107a38da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a38dd pop ebp */
  EBP = (pop32());
  /* 107a38de ret  */
  ESPCHK(0x107a38d0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x107a38e0 (37 bytes, 16 insns) */
void f_107a38e0(void) {
  FTRACE(0x107a38e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a38e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a38e1 mov ebp, esp */
  EBP = (ESP);
L_107a38e3:;
  /* 107a38e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a38e6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a38e9 jae 0x107a3903 */
  if (!C.cf) goto L_107a3903;
  /* 107a38eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a38ee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a38f1 je 0x107a38f8 */
  if (C.zf) goto L_107a38f8;
  /* 107a38f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a38f6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x107a38f8u);
L_107a38f8:;
  /* 107a38f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a38fb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a38fe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107a3901 jmp 0x107a38e3 */
  goto L_107a38e3;
L_107a3903:;
  /* 107a3903 pop ebp */
  EBP = (pop32());
  /* 107a3904 ret  */
  ESPCHK(0x107a38e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003910 @ 0x107a3910 (130 bytes, 42 insns) */
void f_107a3910(void) {
  FTRACE(0x107a3910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3910 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3911 mov ebp, esp */
  EBP = (ESP);
  /* 107a3913 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3914 call 0x107a78d0 */
  push32(0x107a3919u); f_107a78d0();
  /* 107a3919 call dword ptr [0x107d2320] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2320))), 0x107a391fu);
  /* 107a391f mov dword ptr [0x107cda5c], eax */
  w32((uint32_t)(0x107cda5c), (EAX));
  /* 107a3924 cmp dword ptr [0x107cda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x107cda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a392b jne 0x107a3931 */
  if (!C.zf) goto L_107a3931;
  /* 107a392d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a392f jmp 0x107a398e */
  goto L_107a398e;
L_107a3931:;
  /* 107a3931 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 107a3933 push 0x107ca4c0 */
  push32((uint32_t)(0x107ca4c0u));
  /* 107a3938 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a393a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 107a393c push 1 */
  push32((uint32_t)(0x1u));
  /* 107a393e call 0x107a43c0 */
  push32(0x107a3943u); f_107a43c0();
  /* 107a3943 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3946 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a3949 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a394d je 0x107a3964 */
  if (C.zf) goto L_107a3964;
  /* 107a394f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3952 push eax */
  push32((uint32_t)(EAX));
  /* 107a3953 mov ecx, dword ptr [0x107cda5c] */
  ECX = (r32((uint32_t)(0x107cda5c)));
  /* 107a3959 push ecx */
  push32((uint32_t)(ECX));
  /* 107a395a call dword ptr [0x107d231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d231c))), 0x107a3960u);
  /* 107a3960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a3962 jne 0x107a3968 */
  if (!C.zf) goto L_107a3968;
L_107a3964:;
  /* 107a3964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a3966 jmp 0x107a398e */
  goto L_107a398e;
L_107a3968:;
  /* 107a3968 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a396b push edx */
  push32((uint32_t)(EDX));
  /* 107a396c call 0x107a39d0 */
  push32(0x107a3971u); f_107a39d0();
  /* 107a3971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3974 call dword ptr [0x107d2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2318))), 0x107a397au);
  /* 107a397a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a397d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107a397f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3982 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 107a3989 mov eax, 1 */
  EAX = (0x1u);
L_107a398e:;
  /* 107a398e mov esp, ebp */
  ESP = (EBP);
  /* 107a3990 pop ebp */
  EBP = (pop32());
  /* 107a3991 ret  */
  ESPCHK(0x107a3910u, _esp0);
  ESP += 4; return;
}

/* FUN_100039a0 @ 0x107a39a0 (41 bytes, 11 insns) */
void f_107a39a0(void) {
  FTRACE(0x107a39a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a39a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a39a1 mov ebp, esp */
  EBP = (ESP);
  /* 107a39a3 call 0x107a7910 */
  push32(0x107a39a8u); f_107a7910();
  /* 107a39a8 cmp dword ptr [0x107cda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x107cda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a39af je 0x107a39c7 */
  if (C.zf) goto L_107a39c7;
  /* 107a39b1 mov eax, dword ptr [0x107cda5c] */
  EAX = (r32((uint32_t)(0x107cda5c)));
  /* 107a39b6 push eax */
  push32((uint32_t)(EAX));
  /* 107a39b7 call dword ptr [0x107d2324] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2324))), 0x107a39bdu);
  /* 107a39bd mov dword ptr [0x107cda5c], 0xffffffff */
  w32((uint32_t)(0x107cda5c), (0xffffffffu));
L_107a39c7:;
  /* 107a39c7 pop ebp */
  EBP = (pop32());
  /* 107a39c8 ret  */
  ESPCHK(0x107a39a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d0 @ 0x107a39d0 (25 bytes, 8 insns) */
void f_107a39d0(void) {
  FTRACE(0x107a39d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a39d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a39d1 mov ebp, esp */
  EBP = (ESP);
  /* 107a39d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a39d6 mov dword ptr [eax + 0x50], 0x107cdc00 */
  w32((uint32_t)(EAX + 0x50), (0x107cdc00u));
  /* 107a39dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a39e0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 107a39e7 pop ebp */
  EBP = (pop32());
  /* 107a39e8 ret  */
  ESPCHK(0x107a39d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039f0 @ 0x107a39f0 (152 bytes, 48 insns) */
void f_107a39f0(void) {
  FTRACE(0x107a39f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a39f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a39f1 mov ebp, esp */
  EBP = (ESP);
  /* 107a39f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a39f6 call dword ptr [0x107d2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2330))), 0x107a39fcu);
  /* 107a39fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a39ff mov eax, dword ptr [0x107cda5c] */
  EAX = (r32((uint32_t)(0x107cda5c)));
  /* 107a3a04 push eax */
  push32((uint32_t)(EAX));
  /* 107a3a05 call dword ptr [0x107d232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d232c))), 0x107a3a0bu);
  /* 107a3a0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a3a0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3a12 jne 0x107a3a77 */
  if (!C.zf) goto L_107a3a77;
  /* 107a3a14 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 107a3a19 push 0x107ca4c0 */
  push32((uint32_t)(0x107ca4c0u));
  /* 107a3a1e push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3a20 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 107a3a22 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a3a24 call 0x107a43c0 */
  push32(0x107a3a29u); f_107a43c0();
  /* 107a3a29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3a2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a3a2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3a33 je 0x107a3a6d */
  if (C.zf) goto L_107a3a6d;
  /* 107a3a35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3a38 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3a39 mov edx, dword ptr [0x107cda5c] */
  EDX = (r32((uint32_t)(0x107cda5c)));
  /* 107a3a3f push edx */
  push32((uint32_t)(EDX));
  /* 107a3a40 call dword ptr [0x107d231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d231c))), 0x107a3a46u);
  /* 107a3a46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a3a48 je 0x107a3a6d */
  if (C.zf) goto L_107a3a6d;
  /* 107a3a4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3a4d push eax */
  push32((uint32_t)(EAX));
  /* 107a3a4e call 0x107a39d0 */
  push32(0x107a3a53u); f_107a39d0();
  /* 107a3a53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3a56 call dword ptr [0x107d2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2318))), 0x107a3a5cu);
  /* 107a3a5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3a5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107a3a61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3a64 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 107a3a6b jmp 0x107a3a77 */
  goto L_107a3a77;
L_107a3a6d:;
  /* 107a3a6d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 107a3a6f call 0x107a2f20 */
  push32(0x107a3a74u); f_107a2f20();
  /* 107a3a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3a77:;
  /* 107a3a77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a3a7a push eax */
  push32((uint32_t)(EAX));
  /* 107a3a7b call dword ptr [0x107d2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2328))), 0x107a3a81u);
  /* 107a3a81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3a84 mov esp, ebp */
  ESP = (EBP);
  /* 107a3a86 pop ebp */
  EBP = (pop32());
  /* 107a3a87 ret  */
  ESPCHK(0x107a39f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a90 @ 0x107a3a90 (263 bytes, 86 insns) */
void f_107a3a90(void) {
  FTRACE(0x107a3a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3a90 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3a91 mov ebp, esp */
  EBP = (ESP);
  /* 107a3a93 cmp dword ptr [0x107cda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x107cda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3a9a je 0x107a3b95 */
  if (C.zf) goto L_107a3b95;
  /* 107a3aa0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3aa4 jne 0x107a3ab5 */
  if (!C.zf) goto L_107a3ab5;
  /* 107a3aa6 mov eax, dword ptr [0x107cda5c] */
  EAX = (r32((uint32_t)(0x107cda5c)));
  /* 107a3aab push eax */
  push32((uint32_t)(EAX));
  /* 107a3aac call dword ptr [0x107d232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d232c))), 0x107a3ab2u);
  /* 107a3ab2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107a3ab5:;
  /* 107a3ab5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3ab9 je 0x107a3b86 */
  if (C.zf) goto L_107a3b86;
  /* 107a3abf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3ac2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3ac6 je 0x107a3ad9 */
  if (C.zf) goto L_107a3ad9;
  /* 107a3ac8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3aca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3acd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 107a3ad0 push eax */
  push32((uint32_t)(EAX));
  /* 107a3ad1 call 0x107a4a40 */
  push32(0x107a3ad6u); f_107a4a40();
  /* 107a3ad6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3ad9:;
  /* 107a3ad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3adc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3ae0 je 0x107a3af3 */
  if (C.zf) goto L_107a3af3;
  /* 107a3ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3ae4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3ae7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 107a3aea push eax */
  push32((uint32_t)(EAX));
  /* 107a3aeb call 0x107a4a40 */
  push32(0x107a3af0u); f_107a4a40();
  /* 107a3af0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3af3:;
  /* 107a3af3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3af6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3afa je 0x107a3b0d */
  if (C.zf) goto L_107a3b0d;
  /* 107a3afc push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3afe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3b01 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 107a3b04 push eax */
  push32((uint32_t)(EAX));
  /* 107a3b05 call 0x107a4a40 */
  push32(0x107a3b0au); f_107a4a40();
  /* 107a3b0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3b0d:;
  /* 107a3b0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3b10 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3b14 je 0x107a3b27 */
  if (C.zf) goto L_107a3b27;
  /* 107a3b16 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3b18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3b1b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 107a3b1e push eax */
  push32((uint32_t)(EAX));
  /* 107a3b1f call 0x107a4a40 */
  push32(0x107a3b24u); f_107a4a40();
  /* 107a3b24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3b27:;
  /* 107a3b27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3b2a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3b2e je 0x107a3b41 */
  if (C.zf) goto L_107a3b41;
  /* 107a3b30 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3b32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3b35 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 107a3b38 push eax */
  push32((uint32_t)(EAX));
  /* 107a3b39 call 0x107a4a40 */
  push32(0x107a3b3eu); f_107a4a40();
  /* 107a3b3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3b41:;
  /* 107a3b41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3b44 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3b48 je 0x107a3b5b */
  if (C.zf) goto L_107a3b5b;
  /* 107a3b4a push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3b4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3b4f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 107a3b52 push eax */
  push32((uint32_t)(EAX));
  /* 107a3b53 call 0x107a4a40 */
  push32(0x107a3b58u); f_107a4a40();
  /* 107a3b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3b5b:;
  /* 107a3b5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3b5e cmp dword ptr [ecx + 0x50], 0x107cdc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x107cdc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3b65 je 0x107a3b78 */
  if (C.zf) goto L_107a3b78;
  /* 107a3b67 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3b69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3b6c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 107a3b6f push eax */
  push32((uint32_t)(EAX));
  /* 107a3b70 call 0x107a4a40 */
  push32(0x107a3b75u); f_107a4a40();
  /* 107a3b75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3b78:;
  /* 107a3b78 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3b7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3b7d push ecx */
  push32((uint32_t)(ECX));
  /* 107a3b7e call 0x107a4a40 */
  push32(0x107a3b83u); f_107a4a40();
  /* 107a3b83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3b86:;
  /* 107a3b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a3b88 mov edx, dword ptr [0x107cda5c] */
  EDX = (r32((uint32_t)(0x107cda5c)));
  /* 107a3b8e push edx */
  push32((uint32_t)(EDX));
  /* 107a3b8f call dword ptr [0x107d231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d231c))), 0x107a3b95u);
L_107a3b95:;
  /* 107a3b95 pop ebp */
  EBP = (pop32());
  /* 107a3b96 ret  */
  ESPCHK(0x107a3a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba0 @ 0x107a3ba0 (11 bytes, 5 insns) */
void f_107a3ba0(void) {
  FTRACE(0x107a3ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3ba1 mov ebp, esp */
  EBP = (ESP);
  /* 107a3ba3 call dword ptr [0x107d2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2318))), 0x107a3ba9u);
  /* 107a3ba9 pop ebp */
  EBP = (pop32());
  /* 107a3baa ret  */
  ESPCHK(0x107a3ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bb0 @ 0x107a3bb0 (11 bytes, 5 insns) */
void f_107a3bb0(void) {
  FTRACE(0x107a3bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3bb1 mov ebp, esp */
  EBP = (ESP);
  /* 107a3bb3 call dword ptr [0x107d2274] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2274))), 0x107a3bb9u);
  /* 107a3bb9 pop ebp */
  EBP = (pop32());
  /* 107a3bba ret  */
  ESPCHK(0x107a3bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bc0 @ 0x107a3bc0 (804 bytes, 236 insns) */
void f_107a3bc0(void) {
  FTRACE(0x107a3bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3bc1 mov ebp, esp */
  EBP = (ESP);
  /* 107a3bc3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a3bc6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 107a3bcb push 0x107ca4cc */
  push32((uint32_t)(0x107ca4ccu));
  /* 107a3bd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3bd2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 107a3bd7 call 0x107a3fb0 */
  push32(0x107a3bdcu); f_107a3fb0();
  /* 107a3bdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3bdf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 107a3be2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3be6 jne 0x107a3bf2 */
  if (!C.zf) goto L_107a3bf2;
  /* 107a3be8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 107a3bea call 0x107a2f20 */
  push32(0x107a3befu); f_107a2f20();
  /* 107a3bef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a3bf2:;
  /* 107a3bf2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3bf5 mov dword ptr [0x107d0f00], eax */
  w32((uint32_t)(0x107d0f00), (EAX));
  /* 107a3bfa mov dword ptr [0x107d103c], 0x20 */
  w32((uint32_t)(0x107d103c), (0x20u));
  /* 107a3c04 jmp 0x107a3c0f */
  goto L_107a3c0f;
L_107a3c06:;
  /* 107a3c06 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3c09 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3c0c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_107a3c0f:;
  /* 107a3c0f mov edx, dword ptr [0x107d0f00] */
  EDX = (r32((uint32_t)(0x107d0f00)));
  /* 107a3c15 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3c1b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3c1e jae 0x107a3c43 */
  if (!C.cf) goto L_107a3c43;
  /* 107a3c20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3c23 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 107a3c27 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3c2a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107a3c30 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3c33 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 107a3c37 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3c3a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 107a3c41 jmp 0x107a3c06 */
  goto L_107a3c06;
L_107a3c43:;
  /* 107a3c43 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 107a3c46 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3c47 call dword ptr [0x107d2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2340))), 0x107a3c4du);
  /* 107a3c4d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 107a3c50 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a3c56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a3c58 je 0x107a3de5 */
  if (C.zf) goto L_107a3de5;
  /* 107a3c5e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3c62 je 0x107a3de5 */
  if (C.zf) goto L_107a3de5;
  /* 107a3c68 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a3c6b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a3c6d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 107a3c70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a3c73 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3c76 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a3c79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3c7c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3c7f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 107a3c82 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3c89 jge 0x107a3c93 */
  if ((C.sf==C.of)) goto L_107a3c93;
  /* 107a3c8b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 107a3c8e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 107a3c91 jmp 0x107a3c9a */
  goto L_107a3c9a;
L_107a3c93:;
  /* 107a3c93 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_107a3c9a:;
  /* 107a3c9a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 107a3c9d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 107a3ca0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 107a3ca7 jmp 0x107a3cb2 */
  goto L_107a3cb2;
L_107a3ca9:;
  /* 107a3ca9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 107a3cac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3caf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_107a3cb2:;
  /* 107a3cb2 mov ecx, dword ptr [0x107d103c] */
  ECX = (r32((uint32_t)(0x107d103c)));
  /* 107a3cb8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3cbb jge 0x107a3d52 */
  if ((C.sf==C.of)) goto L_107a3d52;
  /* 107a3cc1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 107a3cc6 push 0x107ca4cc */
  push32((uint32_t)(0x107ca4ccu));
  /* 107a3ccb push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3ccd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 107a3cd2 call 0x107a3fb0 */
  push32(0x107a3cd7u); f_107a3fb0();
  /* 107a3cd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3cda mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 107a3cdd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3ce1 jne 0x107a3cee */
  if (!C.zf) goto L_107a3cee;
  /* 107a3ce3 mov edx, dword ptr [0x107d103c] */
  EDX = (r32((uint32_t)(0x107d103c)));
  /* 107a3ce9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 107a3cec jmp 0x107a3d52 */
  goto L_107a3d52;
L_107a3cee:;
  /* 107a3cee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 107a3cf1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3cf4 mov dword ptr [eax*4 + 0x107d0f00], ecx */
  w32((uint32_t)(EAX*4 + 0x107d0f00), (ECX));
  /* 107a3cfb mov edx, dword ptr [0x107d103c] */
  EDX = (r32((uint32_t)(0x107d103c)));
  /* 107a3d01 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3d04 mov dword ptr [0x107d103c], edx */
  w32((uint32_t)(0x107d103c), (EDX));
  /* 107a3d0a jmp 0x107a3d15 */
  goto L_107a3d15;
L_107a3d0c:;
  /* 107a3d0c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3d0f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3d12 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_107a3d15:;
  /* 107a3d15 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 107a3d18 mov edx, dword ptr [ecx*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107d0f00)));
  /* 107a3d1f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3d25 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3d28 jae 0x107a3d4d */
  if (!C.cf) goto L_107a3d4d;
  /* 107a3d2a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3d2d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 107a3d31 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3d34 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107a3d3a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3d3d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 107a3d41 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3d44 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 107a3d4b jmp 0x107a3d0c */
  goto L_107a3d0c;
L_107a3d4d:;
  /* 107a3d4d jmp 0x107a3ca9 */
  goto L_107a3ca9;
L_107a3d52:;
  /* 107a3d52 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 107a3d59 jmp 0x107a3d76 */
  goto L_107a3d76;
L_107a3d5b:;
  /* 107a3d5b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 107a3d5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3d61 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 107a3d64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3d67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3d6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a3d6d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 107a3d70 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3d73 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_107a3d76:;
  /* 107a3d76 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 107a3d79 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3d7c jge 0x107a3de5 */
  if ((C.sf==C.of)) goto L_107a3de5;
  /* 107a3d7e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 107a3d81 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3d84 je 0x107a3de0 */
  if (C.zf) goto L_107a3de0;
  /* 107a3d86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3d89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107a3d8c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107a3d8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a3d91 je 0x107a3de0 */
  if (C.zf) goto L_107a3de0;
  /* 107a3d93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3d96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107a3d99 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 107a3d9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a3d9e jne 0x107a3db0 */
  if (!C.zf) goto L_107a3db0;
  /* 107a3da0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 107a3da3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a3da5 push edx */
  push32((uint32_t)(EDX));
  /* 107a3da6 call dword ptr [0x107d233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d233c))), 0x107a3dacu);
  /* 107a3dac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a3dae je 0x107a3de0 */
  if (C.zf) goto L_107a3de0;
L_107a3db0:;
  /* 107a3db0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 107a3db3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107a3db6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 107a3db9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107a3dbc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a3dbf mov edx, dword ptr [eax*4 + 0x107d0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107a3dc6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3dc8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 107a3dcb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3dce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 107a3dd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a3dd3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107a3dd5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3dd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3ddb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107a3ddd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_107a3de0:;
  /* 107a3de0 jmp 0x107a3d5b */
  goto L_107a3d5b;
L_107a3de5:;
  /* 107a3de5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 107a3dec jmp 0x107a3df7 */
  goto L_107a3df7;
L_107a3dee:;
  /* 107a3dee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 107a3df1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3df4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_107a3df7:;
  /* 107a3df7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3dfb jge 0x107a3ed4 */
  if ((C.sf==C.of)) goto L_107a3ed4;
  /* 107a3e01 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 107a3e04 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a3e07 mov edx, dword ptr [0x107d0f00] */
  EDX = (r32((uint32_t)(0x107d0f00)));
  /* 107a3e0d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3e0f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 107a3e12 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3e15 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3e18 jne 0x107a3ec0 */
  if (!C.zf) goto L_107a3ec0;
  /* 107a3e1e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3e21 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 107a3e25 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3e29 jne 0x107a3e34 */
  if (!C.zf) goto L_107a3e34;
  /* 107a3e2b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 107a3e32 jmp 0x107a3e44 */
  goto L_107a3e44;
L_107a3e34:;
  /* 107a3e34 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 107a3e37 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a3e3a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107a3e3c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a3e3e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3e41 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_107a3e44:;
  /* 107a3e44 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 107a3e47 push eax */
  push32((uint32_t)(EAX));
  /* 107a3e48 call dword ptr [0x107d22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22ec))), 0x107a3e4eu);
  /* 107a3e4e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 107a3e51 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3e55 je 0x107a3eaf */
  if (C.zf) goto L_107a3eaf;
  /* 107a3e57 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107a3e5a push ecx */
  push32((uint32_t)(ECX));
  /* 107a3e5b call dword ptr [0x107d233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d233c))), 0x107a3e61u);
  /* 107a3e61 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 107a3e64 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3e68 je 0x107a3eaf */
  if (C.zf) goto L_107a3eaf;
  /* 107a3e6a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3e6d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107a3e70 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107a3e72 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 107a3e75 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a3e7b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3e7e jne 0x107a3e90 */
  if (!C.zf) goto L_107a3e90;
  /* 107a3e80 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3e83 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107a3e86 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 107a3e88 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3e8b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 107a3e8e jmp 0x107a3ead */
  goto L_107a3ead;
L_107a3e90:;
  /* 107a3e90 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 107a3e93 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a3e99 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3e9c jne 0x107a3ead */
  if (!C.zf) goto L_107a3ead;
  /* 107a3e9e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3ea1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a3ea4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 107a3ea7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3eaa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_107a3ead:;
  /* 107a3ead jmp 0x107a3ebe */
  goto L_107a3ebe;
L_107a3eaf:;
  /* 107a3eaf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3eb2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a3eb5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 107a3eb8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3ebb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_107a3ebe:;
  /* 107a3ebe jmp 0x107a3ecf */
  goto L_107a3ecf;
L_107a3ec0:;
  /* 107a3ec0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3ec3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107a3ec6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 107a3ec9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a3ecc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_107a3ecf:;
  /* 107a3ecf jmp 0x107a3dee */
  goto L_107a3dee;
L_107a3ed4:;
  /* 107a3ed4 mov eax, dword ptr [0x107d103c] */
  EAX = (r32((uint32_t)(0x107d103c)));
  /* 107a3ed9 push eax */
  push32((uint32_t)(EAX));
  /* 107a3eda call dword ptr [0x107d2270] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2270))), 0x107a3ee0u);
  /* 107a3ee0 mov esp, ebp */
  ESP = (EBP);
  /* 107a3ee2 pop ebp */
  EBP = (pop32());
  /* 107a3ee3 ret  */
  ESPCHK(0x107a3bc0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x107a3ef0 (155 bytes, 45 insns) */
void f_107a3ef0(void) {
  FTRACE(0x107a3ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3ef1 mov ebp, esp */
  EBP = (ESP);
  /* 107a3ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a3ef6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107a3efd jmp 0x107a3f08 */
  goto L_107a3f08;
L_107a3eff:;
  /* 107a3eff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a3f02 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3f05 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107a3f08:;
  /* 107a3f08 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3f0c jge 0x107a3f87 */
  if ((C.sf==C.of)) goto L_107a3f87;
  /* 107a3f0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a3f11 cmp dword ptr [ecx*4 + 0x107d0f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x107d0f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3f19 je 0x107a3f82 */
  if (C.zf) goto L_107a3f82;
  /* 107a3f1b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a3f1e mov eax, dword ptr [edx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x107d0f00)));
  /* 107a3f25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a3f28 jmp 0x107a3f33 */
  goto L_107a3f33;
L_107a3f2a:;
  /* 107a3f2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3f2d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3f30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107a3f33:;
  /* 107a3f33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a3f36 mov eax, dword ptr [edx*4 + 0x107d0f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x107d0f00)));
  /* 107a3f3d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3f42 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3f45 jae 0x107a3f5f */
  if (!C.cf) goto L_107a3f5f;
  /* 107a3f47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3f4a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a3f4e je 0x107a3f5d */
  if (C.zf) goto L_107a3f5d;
  /* 107a3f50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a3f53 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3f56 push edx */
  push32((uint32_t)(EDX));
  /* 107a3f57 call dword ptr [0x107d2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2344))), 0x107a3f5du);
L_107a3f5d:;
  /* 107a3f5d jmp 0x107a3f2a */
  goto L_107a3f2a;
L_107a3f5f:;
  /* 107a3f5f push 2 */
  push32((uint32_t)(0x2u));
  /* 107a3f61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a3f64 mov ecx, dword ptr [eax*4 + 0x107d0f00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x107d0f00)));
  /* 107a3f6b push ecx */
  push32((uint32_t)(ECX));
  /* 107a3f6c call 0x107a4a40 */
  push32(0x107a3f71u); f_107a4a40();
  /* 107a3f71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3f74 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a3f77 mov dword ptr [edx*4 + 0x107d0f00], 0 */
  w32((uint32_t)(EDX*4 + 0x107d0f00), (0x0u));
L_107a3f82:;
  /* 107a3f82 jmp 0x107a3eff */
  goto L_107a3eff;
L_107a3f87:;
  /* 107a3f87 mov esp, ebp */
  ESP = (EBP);
  /* 107a3f89 pop ebp */
  EBP = (pop32());
  /* 107a3f8a ret  */
  ESPCHK(0x107a3ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f90 @ 0x107a3f90 (29 bytes, 13 insns) */
void f_107a3f90(void) {
  FTRACE(0x107a3f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3f90 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3f91 mov ebp, esp */
  EBP = (ESP);
  /* 107a3f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a3f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a3f97 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a3f99 mov eax, dword ptr [0x107cf718] */
  EAX = (r32((uint32_t)(0x107cf718)));
  /* 107a3f9e push eax */
  push32((uint32_t)(EAX));
  /* 107a3f9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3fa3 call 0x107a4000 */
  push32(0x107a3fa8u); f_107a4000();
  /* 107a3fa8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3fab pop ebp */
  EBP = (pop32());
  /* 107a3fac ret  */
  ESPCHK(0x107a3f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fb0 @ 0x107a3fb0 (35 bytes, 16 insns) */
void f_107a3fb0(void) {
  FTRACE(0x107a3fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3fb1 mov ebp, esp */
  EBP = (ESP);
  /* 107a3fb3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a3fb6 push eax */
  push32((uint32_t)(EAX));
  /* 107a3fb7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a3fba push ecx */
  push32((uint32_t)(ECX));
  /* 107a3fbb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a3fbe push edx */
  push32((uint32_t)(EDX));
  /* 107a3fbf mov eax, dword ptr [0x107cf718] */
  EAX = (r32((uint32_t)(0x107cf718)));
  /* 107a3fc4 push eax */
  push32((uint32_t)(EAX));
  /* 107a3fc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3fc8 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3fc9 call 0x107a4000 */
  push32(0x107a3fceu); f_107a4000();
  /* 107a3fce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3fd1 pop ebp */
  EBP = (pop32());
  /* 107a3fd2 ret  */
  ESPCHK(0x107a3fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fe0 @ 0x107a3fe0 (27 bytes, 13 insns) */
void f_107a3fe0(void) {
  FTRACE(0x107a3fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a3fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a3fe1 mov ebp, esp */
  EBP = (ESP);
  /* 107a3fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a3fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a3fe7 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a3fe9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a3fec push eax */
  push32((uint32_t)(EAX));
  /* 107a3fed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a3ff0 push ecx */
  push32((uint32_t)(ECX));
  /* 107a3ff1 call 0x107a4000 */
  push32(0x107a3ff6u); f_107a4000();
  /* 107a3ff6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a3ff9 pop ebp */
  EBP = (pop32());
  /* 107a3ffa ret  */
  ESPCHK(0x107a3fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004000 @ 0x107a4000 (94 bytes, 38 insns) */
void f_107a4000(void) {
  FTRACE(0x107a4000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4000 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4001 mov ebp, esp */
  EBP = (ESP);
  /* 107a4003 push ecx */
  push32((uint32_t)(ECX));
L_107a4004:;
  /* 107a4004 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a4006 call 0x107a79b0 */
  push32(0x107a400bu); f_107a79b0();
  /* 107a400b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a400e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a4011 push eax */
  push32((uint32_t)(EAX));
  /* 107a4012 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a4015 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4016 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a4019 push edx */
  push32((uint32_t)(EDX));
  /* 107a401a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a401d push eax */
  push32((uint32_t)(EAX));
  /* 107a401e call 0x107a4080 */
  push32(0x107a4023u); f_107a4080();
  /* 107a4023 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4026 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a4029 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a402b call 0x107a7a50 */
  push32(0x107a4030u); f_107a7a50();
  /* 107a4030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4033 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4037 jne 0x107a403f */
  if (!C.zf) goto L_107a403f;
  /* 107a4039 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a403d jne 0x107a4044 */
  if (!C.zf) goto L_107a4044;
L_107a403f:;
  /* 107a403f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4042 jmp 0x107a405a */
  goto L_107a405a;
L_107a4044:;
  /* 107a4044 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4047 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4048 call 0x107a7cf0 */
  push32(0x107a404du); f_107a7cf0();
  /* 107a404d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4052 jne 0x107a4058 */
  if (!C.zf) goto L_107a4058;
  /* 107a4054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4056 jmp 0x107a405a */
  goto L_107a405a;
L_107a4058:;
  /* 107a4058 jmp 0x107a4004 */
  goto L_107a4004;
L_107a405a:;
  /* 107a405a mov esp, ebp */
  ESP = (EBP);
  /* 107a405c pop ebp */
  EBP = (pop32());
  /* 107a405d ret  */
  ESPCHK(0x107a4000u, _esp0);
  ESP += 4; return;
}

/* FUN_10004060 @ 0x107a4060 (23 bytes, 11 insns) */
void f_107a4060(void) {
  FTRACE(0x107a4060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4060 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4061 mov ebp, esp */
  EBP = (ESP);
  /* 107a4063 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4065 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4067 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a4069 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a406c push eax */
  push32((uint32_t)(EAX));
  /* 107a406d call 0x107a4080 */
  push32(0x107a4072u); f_107a4080();
  /* 107a4072 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4075 pop ebp */
  EBP = (pop32());
  /* 107a4076 ret  */
  ESPCHK(0x107a4060u, _esp0);
  ESP += 4; return;
}

/* FUN_10004080 @ 0x107a4080 (787 bytes, 254 insns) */
void f_107a4080(void) {
  FTRACE(0x107a4080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4080 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4081 mov ebp, esp */
  EBP = (ESP);
  /* 107a4083 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a4086 push ebx */
  push32((uint32_t)(EBX));
  /* 107a4087 push esi */
  push32((uint32_t)(ESI));
  /* 107a4088 push edi */
  push32((uint32_t)(EDI));
  /* 107a4089 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107a4090 mov eax, dword ptr [0x107cda84] */
  EAX = (r32((uint32_t)(0x107cda84)));
  /* 107a4095 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107a4098 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a409a je 0x107a40cc */
  if (C.zf) goto L_107a40cc;
L_107a409c:;
  /* 107a409c call 0x107a5150 */
  push32(0x107a40a1u); f_107a5150();
  /* 107a40a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a40a3 jne 0x107a40c6 */
  if (!C.zf) goto L_107a40c6;
  /* 107a40a5 push 0x107ca5c0 */
  push32((uint32_t)(0x107ca5c0u));
  /* 107a40aa push 0 */
  push32((uint32_t)(0x0u));
  /* 107a40ac push 0x141 */
  push32((uint32_t)(0x141u));
  /* 107a40b1 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a40b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a40b8 call 0x107a3070 */
  push32(0x107a40bdu); f_107a3070();
  /* 107a40bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a40c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a40c3 jne 0x107a40c6 */
  if (!C.zf) goto L_107a40c6;
  /* 107a40c5 int3  */
  x86_unimpl("int3 @ 0x107a40c5");
L_107a40c6:;
  /* 107a40c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a40c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a40ca jne 0x107a409c */
  if (!C.zf) goto L_107a409c;
L_107a40cc:;
  /* 107a40cc mov edx, dword ptr [0x107cda88] */
  EDX = (r32((uint32_t)(0x107cda88)));
  /* 107a40d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107a40d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a40d8 cmp eax, dword ptr [0x107cda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a40de jne 0x107a40e1 */
  if (!C.zf) goto L_107a40e1;
  /* 107a40e0 int3  */
  x86_unimpl("int3 @ 0x107a40e0");
L_107a40e1:;
  /* 107a40e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a40e4 push ecx */
  push32((uint32_t)(ECX));
  /* 107a40e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a40e8 push edx */
  push32((uint32_t)(EDX));
  /* 107a40e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a40ec push eax */
  push32((uint32_t)(EAX));
  /* 107a40ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a40f0 push ecx */
  push32((uint32_t)(ECX));
  /* 107a40f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a40f4 push edx */
  push32((uint32_t)(EDX));
  /* 107a40f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a40f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a40f9 call dword ptr [0x107cdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cdc90))), 0x107a40ffu);
  /* 107a40ff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4104 jne 0x107a4164 */
  if (!C.zf) goto L_107a4164;
  /* 107a4106 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a410a je 0x107a4137 */
  if (C.zf) goto L_107a4137;
L_107a410c:;
  /* 107a410c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a410f push eax */
  push32((uint32_t)(EAX));
  /* 107a4110 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a4113 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4114 push 0x107ca57c */
  push32((uint32_t)(0x107ca57cu));
  /* 107a4119 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a411b push 0 */
  push32((uint32_t)(0x0u));
  /* 107a411d push 0 */
  push32((uint32_t)(0x0u));
  /* 107a411f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4121 call 0x107a3070 */
  push32(0x107a4126u); f_107a3070();
  /* 107a4126 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4129 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a412c jne 0x107a412f */
  if (!C.zf) goto L_107a412f;
  /* 107a412e int3  */
  x86_unimpl("int3 @ 0x107a412e");
L_107a412f:;
  /* 107a412f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a4131 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a4133 jne 0x107a410c */
  if (!C.zf) goto L_107a410c;
  /* 107a4135 jmp 0x107a415d */
  goto L_107a415d;
L_107a4137:;
  /* 107a4137 push 0x107ca558 */
  push32((uint32_t)(0x107ca558u));
  /* 107a413c push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a4141 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4143 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4145 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4147 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4149 call 0x107a3070 */
  push32(0x107a414eu); f_107a3070();
  /* 107a414e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4151 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4154 jne 0x107a4157 */
  if (!C.zf) goto L_107a4157;
  /* 107a4156 int3  */
  x86_unimpl("int3 @ 0x107a4156");
L_107a4157:;
  /* 107a4157 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a415b jne 0x107a4137 */
  if (!C.zf) goto L_107a4137;
L_107a415d:;
  /* 107a415d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a415f jmp 0x107a438c */
  goto L_107a438c;
L_107a4164:;
  /* 107a4164 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a4167 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a416d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4170 je 0x107a4186 */
  if (C.zf) goto L_107a4186;
  /* 107a4172 mov edx, dword ptr [0x107cda84] */
  EDX = (r32((uint32_t)(0x107cda84)));
  /* 107a4178 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107a417b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a417d jne 0x107a4186 */
  if (!C.zf) goto L_107a4186;
  /* 107a417f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_107a4186:;
  /* 107a4186 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a418a ja 0x107a4197 */
  if ((!C.cf&&!C.zf)) goto L_107a4197;
  /* 107a418c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a418f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4192 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4195 jbe 0x107a41c3 */
  if ((C.cf||C.zf)) goto L_107a41c3;
L_107a4197:;
  /* 107a4197 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a419a push ecx */
  push32((uint32_t)(ECX));
  /* 107a419b push 0x107ca530 */
  push32((uint32_t)(0x107ca530u));
  /* 107a41a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a41a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a41a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a41a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a41a8 call 0x107a3070 */
  push32(0x107a41adu); f_107a3070();
  /* 107a41ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a41b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a41b3 jne 0x107a41b6 */
  if (!C.zf) goto L_107a41b6;
  /* 107a41b5 int3  */
  x86_unimpl("int3 @ 0x107a41b5");
L_107a41b6:;
  /* 107a41b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a41b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a41ba jne 0x107a4197 */
  if (!C.zf) goto L_107a4197;
  /* 107a41bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a41be jmp 0x107a438c */
  goto L_107a438c;
L_107a41c3:;
  /* 107a41c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a41c6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a41cb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a41ce je 0x107a4210 */
  if (C.zf) goto L_107a4210;
  /* 107a41d0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a41d4 je 0x107a4210 */
  if (C.zf) goto L_107a4210;
  /* 107a41d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a41d9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a41df cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a41e2 je 0x107a4210 */
  if (C.zf) goto L_107a4210;
  /* 107a41e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a41e8 je 0x107a4210 */
  if (C.zf) goto L_107a4210;
L_107a41ea:;
  /* 107a41ea push 0x107ca4fc */
  push32((uint32_t)(0x107ca4fcu));
  /* 107a41ef push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a41f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a41f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a41f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a41fa push 1 */
  push32((uint32_t)(0x1u));
  /* 107a41fc call 0x107a3070 */
  push32(0x107a4201u); f_107a3070();
  /* 107a4201 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4204 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4207 jne 0x107a420a */
  if (!C.zf) goto L_107a420a;
  /* 107a4209 int3  */
  x86_unimpl("int3 @ 0x107a4209");
L_107a420a:;
  /* 107a420a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a420c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a420e jne 0x107a41ea */
  if (!C.zf) goto L_107a41ea;
L_107a4210:;
  /* 107a4210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4213 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4216 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107a4219 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a421c push ecx */
  push32((uint32_t)(ECX));
  /* 107a421d call 0x107a7e00 */
  push32(0x107a4222u); f_107a7e00();
  /* 107a4222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4225 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a4228 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a422c jne 0x107a4235 */
  if (!C.zf) goto L_107a4235;
  /* 107a422e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4230 jmp 0x107a438c */
  goto L_107a438c;
L_107a4235:;
  /* 107a4235 mov edx, dword ptr [0x107cda88] */
  EDX = (r32((uint32_t)(0x107cda88)));
  /* 107a423b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a423e mov dword ptr [0x107cda88], edx */
  w32((uint32_t)(0x107cda88), (EDX));
  /* 107a4244 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4248 je 0x107a4293 */
  if (C.zf) goto L_107a4293;
  /* 107a424a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a424d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107a4253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4256 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 107a425d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4260 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 107a4267 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a426a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 107a4271 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4274 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4277 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 107a427a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a427d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 107a4284 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4287 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 107a428e jmp 0x107a4333 */
  goto L_107a4333;
L_107a4293:;
  /* 107a4293 mov edx, dword ptr [0x107cf57c] */
  EDX = (r32((uint32_t)(0x107cf57c)));
  /* 107a4299 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a429c mov dword ptr [0x107cf57c], edx */
  w32((uint32_t)(0x107cf57c), (EDX));
  /* 107a42a2 mov eax, dword ptr [0x107cf584] */
  EAX = (r32((uint32_t)(0x107cf584)));
  /* 107a42a7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a42aa mov dword ptr [0x107cf584], eax */
  w32((uint32_t)(0x107cf584), (EAX));
  /* 107a42af mov ecx, dword ptr [0x107cf584] */
  ECX = (r32((uint32_t)(0x107cf584)));
  /* 107a42b5 cmp ecx, dword ptr [0x107cf588] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107cf588))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a42bb jbe 0x107a42c9 */
  if ((C.cf||C.zf)) goto L_107a42c9;
  /* 107a42bd mov edx, dword ptr [0x107cf584] */
  EDX = (r32((uint32_t)(0x107cf584)));
  /* 107a42c3 mov dword ptr [0x107cf588], edx */
  w32((uint32_t)(0x107cf588), (EDX));
L_107a42c9:;
  /* 107a42c9 cmp dword ptr [0x107cf580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a42d0 je 0x107a42df */
  if (C.zf) goto L_107a42df;
  /* 107a42d2 mov eax, dword ptr [0x107cf580] */
  EAX = (r32((uint32_t)(0x107cf580)));
  /* 107a42d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a42da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 107a42dd jmp 0x107a42e8 */
  goto L_107a42e8;
L_107a42df:;
  /* 107a42df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a42e2 mov dword ptr [0x107cf578], edx */
  w32((uint32_t)(0x107cf578), (EDX));
L_107a42e8:;
  /* 107a42e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a42eb mov ecx, dword ptr [0x107cf580] */
  ECX = (r32((uint32_t)(0x107cf580)));
  /* 107a42f1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107a42f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a42f6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 107a42fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4300 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a4303 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 107a4306 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4309 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a430c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 107a430f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4312 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4315 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 107a4318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a431b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a431e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 107a4321 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4324 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a4327 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 107a432a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a432d mov dword ptr [0x107cf580], ecx */
  w32((uint32_t)(0x107cf580), (ECX));
L_107a4333:;
  /* 107a4333 push 4 */
  push32((uint32_t)(0x4u));
  /* 107a4335 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a4337 mov dl, byte ptr [0x107cda90] */
  DL = (r8((uint32_t)(0x107cda90)));
  /* 107a433d push edx */
  push32((uint32_t)(EDX));
  /* 107a433e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4341 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4344 push eax */
  push32((uint32_t)(EAX));
  /* 107a4345 call 0x107a7d20 */
  push32(0x107a434au); f_107a7d20();
  /* 107a434a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a434d push 4 */
  push32((uint32_t)(0x4u));
  /* 107a434f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a4351 mov cl, byte ptr [0x107cda90] */
  CL = (r8((uint32_t)(0x107cda90)));
  /* 107a4357 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4358 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a435b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a435e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 107a4362 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4363 call 0x107a7d20 */
  push32(0x107a4368u); f_107a7d20();
  /* 107a4368 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a436b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a436e push edx */
  push32((uint32_t)(EDX));
  /* 107a436f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4371 mov al, byte ptr [0x107cda92] */
  AL = (r8((uint32_t)(0x107cda92)));
  /* 107a4376 push eax */
  push32((uint32_t)(EAX));
  /* 107a4377 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a437a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a437d push ecx */
  push32((uint32_t)(ECX));
  /* 107a437e call 0x107a7d20 */
  push32(0x107a4383u); f_107a7d20();
  /* 107a4383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4389 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_107a438c:;
  /* 107a438c pop edi */
  EDI = (pop32());
  /* 107a438d pop esi */
  ESI = (pop32());
  /* 107a438e pop ebx */
  EBX = (pop32());
  /* 107a438f mov esp, ebp */
  ESP = (EBP);
  /* 107a4391 pop ebp */
  EBP = (pop32());
  /* 107a4392 ret  */
  ESPCHK(0x107a4080u, _esp0);
  ESP += 4; return;
}

/* FUN_100043a0 @ 0x107a43a0 (27 bytes, 13 insns) */
void f_107a43a0(void) {
  FTRACE(0x107a43a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a43a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a43a1 mov ebp, esp */
  EBP = (ESP);
  /* 107a43a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a43a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a43a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a43a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a43ac push eax */
  push32((uint32_t)(EAX));
  /* 107a43ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a43b0 push ecx */
  push32((uint32_t)(ECX));
  /* 107a43b1 call 0x107a43c0 */
  push32(0x107a43b6u); f_107a43c0();
  /* 107a43b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a43b9 pop ebp */
  EBP = (pop32());
  /* 107a43ba ret  */
  ESPCHK(0x107a43a0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x107a43c0 (96 bytes, 37 insns) */
void f_107a43c0(void) {
  FTRACE(0x107a43c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a43c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a43c1 mov ebp, esp */
  EBP = (ESP);
  /* 107a43c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a43c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a43c9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a43cd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 107a43d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a43d3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a43d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a43d7 push edx */
  push32((uint32_t)(EDX));
  /* 107a43d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a43db push eax */
  push32((uint32_t)(EAX));
  /* 107a43dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a43df push ecx */
  push32((uint32_t)(ECX));
  /* 107a43e0 call 0x107a3fb0 */
  push32(0x107a43e5u); f_107a3fb0();
  /* 107a43e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a43e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a43eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a43ef je 0x107a4419 */
  if (C.zf) goto L_107a4419;
  /* 107a43f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a43f4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107a43f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a43fa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a43fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a4400:;
  /* 107a4400 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4403 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4406 jae 0x107a4419 */
  if (!C.cf) goto L_107a4419;
  /* 107a4408 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a440b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107a440e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4411 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4414 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a4417 jmp 0x107a4400 */
  goto L_107a4400;
L_107a4419:;
  /* 107a4419 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a441c mov esp, ebp */
  ESP = (EBP);
  /* 107a441e pop ebp */
  EBP = (pop32());
  /* 107a441f ret  */
  ESPCHK(0x107a43c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x107a4420 (27 bytes, 13 insns) */
void f_107a4420(void) {
  FTRACE(0x107a4420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4420 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4421 mov ebp, esp */
  EBP = (ESP);
  /* 107a4423 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4425 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4427 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a4429 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a442c push eax */
  push32((uint32_t)(EAX));
  /* 107a442d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4430 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4431 call 0x107a4440 */
  push32(0x107a4436u); f_107a4440();
  /* 107a4436 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4439 pop ebp */
  EBP = (pop32());
  /* 107a443a ret  */
  ESPCHK(0x107a4420u, _esp0);
  ESP += 4; return;
}

/* FUN_10004440 @ 0x107a4440 (64 bytes, 27 insns) */
void f_107a4440(void) {
  FTRACE(0x107a4440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4440 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4441 mov ebp, esp */
  EBP = (ESP);
  /* 107a4443 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4444 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a4446 call 0x107a79b0 */
  push32(0x107a444bu); f_107a79b0();
  /* 107a444b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a444e push 1 */
  push32((uint32_t)(0x1u));
  /* 107a4450 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a4453 push eax */
  push32((uint32_t)(EAX));
  /* 107a4454 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a4457 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4458 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a445b push edx */
  push32((uint32_t)(EDX));
  /* 107a445c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a445f push eax */
  push32((uint32_t)(EAX));
  /* 107a4460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4463 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4464 call 0x107a4480 */
  push32(0x107a4469u); f_107a4480();
  /* 107a4469 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a446c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a446f push 9 */
  push32((uint32_t)(0x9u));
  /* 107a4471 call 0x107a7a50 */
  push32(0x107a4476u); f_107a7a50();
  /* 107a4476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a447c mov esp, ebp */
  ESP = (EBP);
  /* 107a447e pop ebp */
  EBP = (pop32());
  /* 107a447f ret  */
  ESPCHK(0x107a4440u, _esp0);
  ESP += 4; return;
}

/* FUN_10004480 @ 0x107a4480 (1297 bytes, 431 insns) */
void f_107a4480(void) {
  FTRACE(0x107a4480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4480 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4481 mov ebp, esp */
  EBP = (ESP);
  /* 107a4483 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a4486 push ebx */
  push32((uint32_t)(EBX));
  /* 107a4487 push esi */
  push32((uint32_t)(ESI));
  /* 107a4488 push edi */
  push32((uint32_t)(EDI));
  /* 107a4489 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 107a4490 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4494 jne 0x107a44b3 */
  if (!C.zf) goto L_107a44b3;
  /* 107a4496 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a4499 push eax */
  push32((uint32_t)(EAX));
  /* 107a449a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a449d push ecx */
  push32((uint32_t)(ECX));
  /* 107a449e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a44a1 push edx */
  push32((uint32_t)(EDX));
  /* 107a44a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a44a5 push eax */
  push32((uint32_t)(EAX));
  /* 107a44a6 call 0x107a3fb0 */
  push32(0x107a44abu); f_107a3fb0();
  /* 107a44ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a44ae jmp 0x107a498a */
  goto L_107a498a;
L_107a44b3:;
  /* 107a44b3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a44b7 je 0x107a44d6 */
  if (C.zf) goto L_107a44d6;
  /* 107a44b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a44bd jne 0x107a44d6 */
  if (!C.zf) goto L_107a44d6;
  /* 107a44bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a44c2 push ecx */
  push32((uint32_t)(ECX));
  /* 107a44c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a44c6 push edx */
  push32((uint32_t)(EDX));
  /* 107a44c7 call 0x107a4a40 */
  push32(0x107a44ccu); f_107a4a40();
  /* 107a44cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a44cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a44d1 jmp 0x107a498a */
  goto L_107a498a;
L_107a44d6:;
  /* 107a44d6 mov eax, dword ptr [0x107cda84] */
  EAX = (r32((uint32_t)(0x107cda84)));
  /* 107a44db and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107a44de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a44e0 je 0x107a4512 */
  if (C.zf) goto L_107a4512;
L_107a44e2:;
  /* 107a44e2 call 0x107a5150 */
  push32(0x107a44e7u); f_107a5150();
  /* 107a44e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a44e9 jne 0x107a450c */
  if (!C.zf) goto L_107a450c;
  /* 107a44eb push 0x107ca5c0 */
  push32((uint32_t)(0x107ca5c0u));
  /* 107a44f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a44f2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 107a44f7 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a44fc push 2 */
  push32((uint32_t)(0x2u));
  /* 107a44fe call 0x107a3070 */
  push32(0x107a4503u); f_107a3070();
  /* 107a4503 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4506 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4509 jne 0x107a450c */
  if (!C.zf) goto L_107a450c;
  /* 107a450b int3  */
  x86_unimpl("int3 @ 0x107a450b");
L_107a450c:;
  /* 107a450c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a450e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a4510 jne 0x107a44e2 */
  if (!C.zf) goto L_107a44e2;
L_107a4512:;
  /* 107a4512 mov edx, dword ptr [0x107cda88] */
  EDX = (r32((uint32_t)(0x107cda88)));
  /* 107a4518 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107a451b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a451e cmp eax, dword ptr [0x107cda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4524 jne 0x107a4527 */
  if (!C.zf) goto L_107a4527;
  /* 107a4526 int3  */
  x86_unimpl("int3 @ 0x107a4526");
L_107a4527:;
  /* 107a4527 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a452a push ecx */
  push32((uint32_t)(ECX));
  /* 107a452b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a452e push edx */
  push32((uint32_t)(EDX));
  /* 107a452f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a4532 push eax */
  push32((uint32_t)(EAX));
  /* 107a4533 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a4536 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4537 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a453a push edx */
  push32((uint32_t)(EDX));
  /* 107a453b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a453e push eax */
  push32((uint32_t)(EAX));
  /* 107a453f push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4541 call dword ptr [0x107cdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cdc90))), 0x107a4547u);
  /* 107a4547 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a454a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a454c jne 0x107a45ac */
  if (!C.zf) goto L_107a45ac;
  /* 107a454e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4552 je 0x107a457f */
  if (C.zf) goto L_107a457f;
L_107a4554:;
  /* 107a4554 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a4557 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4558 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a455b push edx */
  push32((uint32_t)(EDX));
  /* 107a455c push 0x107ca73c */
  push32((uint32_t)(0x107ca73cu));
  /* 107a4561 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4563 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4565 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4567 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4569 call 0x107a3070 */
  push32(0x107a456eu); f_107a3070();
  /* 107a456e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4571 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4574 jne 0x107a4577 */
  if (!C.zf) goto L_107a4577;
  /* 107a4576 int3  */
  x86_unimpl("int3 @ 0x107a4576");
L_107a4577:;
  /* 107a4577 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4579 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a457b jne 0x107a4554 */
  if (!C.zf) goto L_107a4554;
  /* 107a457d jmp 0x107a45a5 */
  goto L_107a45a5;
L_107a457f:;
  /* 107a457f push 0x107ca718 */
  push32((uint32_t)(0x107ca718u));
  /* 107a4584 push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a4589 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a458b push 0 */
  push32((uint32_t)(0x0u));
  /* 107a458d push 0 */
  push32((uint32_t)(0x0u));
  /* 107a458f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4591 call 0x107a3070 */
  push32(0x107a4596u); f_107a3070();
  /* 107a4596 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4599 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a459c jne 0x107a459f */
  if (!C.zf) goto L_107a459f;
  /* 107a459e int3  */
  x86_unimpl("int3 @ 0x107a459e");
L_107a459f:;
  /* 107a459f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a45a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a45a3 jne 0x107a457f */
  if (!C.zf) goto L_107a457f;
L_107a45a5:;
  /* 107a45a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a45a7 jmp 0x107a498a */
  goto L_107a498a;
L_107a45ac:;
  /* 107a45ac cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a45b0 jbe 0x107a45de */
  if ((C.cf||C.zf)) goto L_107a45de;
L_107a45b2:;
  /* 107a45b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a45b5 push edx */
  push32((uint32_t)(EDX));
  /* 107a45b6 push 0x107ca6e8 */
  push32((uint32_t)(0x107ca6e8u));
  /* 107a45bb push 0 */
  push32((uint32_t)(0x0u));
  /* 107a45bd push 0 */
  push32((uint32_t)(0x0u));
  /* 107a45bf push 0 */
  push32((uint32_t)(0x0u));
  /* 107a45c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a45c3 call 0x107a3070 */
  push32(0x107a45c8u); f_107a3070();
  /* 107a45c8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a45cb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a45ce jne 0x107a45d1 */
  if (!C.zf) goto L_107a45d1;
  /* 107a45d0 int3  */
  x86_unimpl("int3 @ 0x107a45d0");
L_107a45d1:;
  /* 107a45d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a45d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a45d5 jne 0x107a45b2 */
  if (!C.zf) goto L_107a45b2;
  /* 107a45d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a45d9 jmp 0x107a498a */
  goto L_107a498a;
L_107a45de:;
  /* 107a45de cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a45e2 je 0x107a4626 */
  if (C.zf) goto L_107a4626;
  /* 107a45e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a45e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a45ed cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a45f0 je 0x107a4626 */
  if (C.zf) goto L_107a4626;
  /* 107a45f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a45f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a45fb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a45fe je 0x107a4626 */
  if (C.zf) goto L_107a4626;
L_107a4600:;
  /* 107a4600 push 0x107ca4fc */
  push32((uint32_t)(0x107ca4fcu));
  /* 107a4605 push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a460a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a460c push 0 */
  push32((uint32_t)(0x0u));
  /* 107a460e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4610 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a4612 call 0x107a3070 */
  push32(0x107a4617u); f_107a3070();
  /* 107a4617 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a461a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a461d jne 0x107a4620 */
  if (!C.zf) goto L_107a4620;
  /* 107a461f int3  */
  x86_unimpl("int3 @ 0x107a461f");
L_107a4620:;
  /* 107a4620 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4624 jne 0x107a4600 */
  if (!C.zf) goto L_107a4600;
L_107a4626:;
  /* 107a4626 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4629 push ecx */
  push32((uint32_t)(ECX));
  /* 107a462a call 0x107a55b0 */
  push32(0x107a462fu); f_107a55b0();
  /* 107a462f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4634 jne 0x107a4657 */
  if (!C.zf) goto L_107a4657;
  /* 107a4636 push 0x107ca6c4 */
  push32((uint32_t)(0x107ca6c4u));
  /* 107a463b push 0 */
  push32((uint32_t)(0x0u));
  /* 107a463d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 107a4642 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4647 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4649 call 0x107a3070 */
  push32(0x107a464eu); f_107a3070();
  /* 107a464e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4651 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4654 jne 0x107a4657 */
  if (!C.zf) goto L_107a4657;
  /* 107a4656 int3  */
  x86_unimpl("int3 @ 0x107a4656");
L_107a4657:;
  /* 107a4657 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a4659 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a465b jne 0x107a4626 */
  if (!C.zf) goto L_107a4626;
  /* 107a465d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4660 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a4663 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a4666 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a4669 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a466d jne 0x107a4676 */
  if (!C.zf) goto L_107a4676;
  /* 107a466f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_107a4676:;
  /* 107a4676 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a467a je 0x107a46ba */
  if (C.zf) goto L_107a46ba;
L_107a467c:;
  /* 107a467c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a467f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4686 jne 0x107a4691 */
  if (!C.zf) goto L_107a4691;
  /* 107a4688 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a468b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a468f je 0x107a46b2 */
  if (C.zf) goto L_107a46b2;
L_107a4691:;
  /* 107a4691 push 0x107ca67c */
  push32((uint32_t)(0x107ca67cu));
  /* 107a4696 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4698 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 107a469d push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a46a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a46a4 call 0x107a3070 */
  push32(0x107a46a9u); f_107a3070();
  /* 107a46a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a46ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a46af jne 0x107a46b2 */
  if (!C.zf) goto L_107a46b2;
  /* 107a46b1 int3  */
  x86_unimpl("int3 @ 0x107a46b1");
L_107a46b2:;
  /* 107a46b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a46b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a46b6 jne 0x107a467c */
  if (!C.zf) goto L_107a467c;
  /* 107a46b8 jmp 0x107a471e */
  goto L_107a471e;
L_107a46ba:;
  /* 107a46ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a46bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a46c0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a46c5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a46c8 jne 0x107a46df */
  if (!C.zf) goto L_107a46df;
  /* 107a46ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a46cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a46d3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a46d6 jne 0x107a46df */
  if (!C.zf) goto L_107a46df;
  /* 107a46d8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_107a46df:;
  /* 107a46df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a46e2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a46e5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a46ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a46ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a46f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a46f5 je 0x107a4718 */
  if (C.zf) goto L_107a4718;
  /* 107a46f7 push 0x107ca640 */
  push32((uint32_t)(0x107ca640u));
  /* 107a46fc push 0 */
  push32((uint32_t)(0x0u));
  /* 107a46fe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 107a4703 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4708 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a470a call 0x107a3070 */
  push32(0x107a470fu); f_107a3070();
  /* 107a470f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4712 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4715 jne 0x107a4718 */
  if (!C.zf) goto L_107a4718;
  /* 107a4717 int3  */
  x86_unimpl("int3 @ 0x107a4717");
L_107a4718:;
  /* 107a4718 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a471a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a471c jne 0x107a46df */
  if (!C.zf) goto L_107a46df;
L_107a471e:;
  /* 107a471e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4722 je 0x107a4749 */
  if (C.zf) goto L_107a4749;
  /* 107a4724 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a4727 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a472a push eax */
  push32((uint32_t)(EAX));
  /* 107a472b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a472e push ecx */
  push32((uint32_t)(ECX));
  /* 107a472f call 0x107a7f30 */
  push32(0x107a4734u); f_107a7f30();
  /* 107a4734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4737 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a473a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a473e jne 0x107a4747 */
  if (!C.zf) goto L_107a4747;
  /* 107a4740 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4742 jmp 0x107a498a */
  goto L_107a498a;
L_107a4747:;
  /* 107a4747 jmp 0x107a476c */
  goto L_107a476c;
L_107a4749:;
  /* 107a4749 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a474c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a474f push edx */
  push32((uint32_t)(EDX));
  /* 107a4750 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a4753 push eax */
  push32((uint32_t)(EAX));
  /* 107a4754 call 0x107a7e80 */
  push32(0x107a4759u); f_107a7e80();
  /* 107a4759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a475c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a475f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4763 jne 0x107a476c */
  if (!C.zf) goto L_107a476c;
  /* 107a4765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4767 jmp 0x107a498a */
  goto L_107a498a;
L_107a476c:;
  /* 107a476c mov ecx, dword ptr [0x107cda88] */
  ECX = (r32((uint32_t)(0x107cda88)));
  /* 107a4772 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4775 mov dword ptr [0x107cda88], ecx */
  w32((uint32_t)(0x107cda88), (ECX));
  /* 107a477b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a477f jne 0x107a47d7 */
  if (!C.zf) goto L_107a47d7;
  /* 107a4781 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4784 mov eax, dword ptr [0x107cf57c] */
  EAX = (r32((uint32_t)(0x107cf57c)));
  /* 107a4789 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a478c mov dword ptr [0x107cf57c], eax */
  w32((uint32_t)(0x107cf57c), (EAX));
  /* 107a4791 mov ecx, dword ptr [0x107cf57c] */
  ECX = (r32((uint32_t)(0x107cf57c)));
  /* 107a4797 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a479a mov dword ptr [0x107cf57c], ecx */
  w32((uint32_t)(0x107cf57c), (ECX));
  /* 107a47a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a47a3 mov eax, dword ptr [0x107cf584] */
  EAX = (r32((uint32_t)(0x107cf584)));
  /* 107a47a8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a47ab mov dword ptr [0x107cf584], eax */
  w32((uint32_t)(0x107cf584), (EAX));
  /* 107a47b0 mov ecx, dword ptr [0x107cf584] */
  ECX = (r32((uint32_t)(0x107cf584)));
  /* 107a47b6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a47b9 mov dword ptr [0x107cf584], ecx */
  w32((uint32_t)(0x107cf584), (ECX));
  /* 107a47bf mov edx, dword ptr [0x107cf584] */
  EDX = (r32((uint32_t)(0x107cf584)));
  /* 107a47c5 cmp edx, dword ptr [0x107cf588] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x107cf588))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a47cb jbe 0x107a47d7 */
  if ((C.cf||C.zf)) goto L_107a47d7;
  /* 107a47cd mov eax, dword ptr [0x107cf584] */
  EAX = (r32((uint32_t)(0x107cf584)));
  /* 107a47d2 mov dword ptr [0x107cf588], eax */
  w32((uint32_t)(0x107cf588), (EAX));
L_107a47d7:;
  /* 107a47d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a47da add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a47dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a47e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a47e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a47e6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a47e9 jbe 0x107a480f */
  if ((C.cf||C.zf)) goto L_107a480f;
  /* 107a47eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a47ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a47f1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a47f4 push edx */
  push32((uint32_t)(EDX));
  /* 107a47f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a47f7 mov al, byte ptr [0x107cda92] */
  AL = (r8((uint32_t)(0x107cda92)));
  /* 107a47fc push eax */
  push32((uint32_t)(EAX));
  /* 107a47fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4800 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4803 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4806 push edx */
  push32((uint32_t)(EDX));
  /* 107a4807 call 0x107a7d20 */
  push32(0x107a480cu); f_107a7d20();
  /* 107a480c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a480f:;
  /* 107a480f push 4 */
  push32((uint32_t)(0x4u));
  /* 107a4811 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4813 mov al, byte ptr [0x107cda90] */
  AL = (r8((uint32_t)(0x107cda90)));
  /* 107a4818 push eax */
  push32((uint32_t)(EAX));
  /* 107a4819 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a481c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a481f push ecx */
  push32((uint32_t)(ECX));
  /* 107a4820 call 0x107a7d20 */
  push32(0x107a4825u); f_107a7d20();
  /* 107a4825 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4828 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a482c jne 0x107a4849 */
  if (!C.zf) goto L_107a4849;
  /* 107a482e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4831 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a4834 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107a4837 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a483a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a483d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 107a4840 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4843 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a4846 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_107a4849:;
  /* 107a4849 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a484c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a484f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_107a4852:;
  /* 107a4852 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4856 jne 0x107a4887 */
  if (!C.zf) goto L_107a4887;
  /* 107a4858 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a485c jne 0x107a4866 */
  if (!C.zf) goto L_107a4866;
  /* 107a485e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4861 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4864 je 0x107a4887 */
  if (C.zf) goto L_107a4887;
L_107a4866:;
  /* 107a4866 push 0x107ca60c */
  push32((uint32_t)(0x107ca60cu));
  /* 107a486b push 0 */
  push32((uint32_t)(0x0u));
  /* 107a486d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 107a4872 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4877 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4879 call 0x107a3070 */
  push32(0x107a487eu); f_107a3070();
  /* 107a487e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4881 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4884 jne 0x107a4887 */
  if (!C.zf) goto L_107a4887;
  /* 107a4886 int3  */
  x86_unimpl("int3 @ 0x107a4886");
L_107a4887:;
  /* 107a4887 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a4889 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a488b jne 0x107a4852 */
  if (!C.zf) goto L_107a4852;
  /* 107a488d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4890 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4893 je 0x107a489b */
  if (C.zf) goto L_107a489b;
  /* 107a4895 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4899 je 0x107a48a3 */
  if (C.zf) goto L_107a48a3;
L_107a489b:;
  /* 107a489b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a489e jmp 0x107a498a */
  goto L_107a498a;
L_107a48a3:;
  /* 107a48a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a48a6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a48a9 je 0x107a48bb */
  if (C.zf) goto L_107a48bb;
  /* 107a48ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a48ae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a48b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a48b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a48b6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107a48b9 jmp 0x107a48f7 */
  goto L_107a48f7;
L_107a48bb:;
  /* 107a48bb mov eax, dword ptr [0x107cf578] */
  EAX = (r32((uint32_t)(0x107cf578)));
  /* 107a48c0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a48c3 je 0x107a48e6 */
  if (C.zf) goto L_107a48e6;
  /* 107a48c5 push 0x107ca5f0 */
  push32((uint32_t)(0x107ca5f0u));
  /* 107a48ca push 0 */
  push32((uint32_t)(0x0u));
  /* 107a48cc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 107a48d1 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a48d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a48d8 call 0x107a3070 */
  push32(0x107a48ddu); f_107a3070();
  /* 107a48dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a48e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a48e3 jne 0x107a48e6 */
  if (!C.zf) goto L_107a48e6;
  /* 107a48e5 int3  */
  x86_unimpl("int3 @ 0x107a48e5");
L_107a48e6:;
  /* 107a48e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a48e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a48ea jne 0x107a48bb */
  if (!C.zf) goto L_107a48bb;
  /* 107a48ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a48ef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a48f2 mov dword ptr [0x107cf578], eax */
  w32((uint32_t)(0x107cf578), (EAX));
L_107a48f7:;
  /* 107a48f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a48fa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a48fe je 0x107a490f */
  if (C.zf) goto L_107a490f;
  /* 107a4900 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4903 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a4906 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4909 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a490b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107a490d jmp 0x107a494a */
  goto L_107a494a;
L_107a490f:;
  /* 107a490f mov eax, dword ptr [0x107cf580] */
  EAX = (r32((uint32_t)(0x107cf580)));
  /* 107a4914 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4917 je 0x107a493a */
  if (C.zf) goto L_107a493a;
  /* 107a4919 push 0x107ca5d4 */
  push32((uint32_t)(0x107ca5d4u));
  /* 107a491e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4920 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 107a4925 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a492a push 2 */
  push32((uint32_t)(0x2u));
  /* 107a492c call 0x107a3070 */
  push32(0x107a4931u); f_107a3070();
  /* 107a4931 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4934 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4937 jne 0x107a493a */
  if (!C.zf) goto L_107a493a;
  /* 107a4939 int3  */
  x86_unimpl("int3 @ 0x107a4939");
L_107a493a:;
  /* 107a493a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a493c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a493e jne 0x107a490f */
  if (!C.zf) goto L_107a490f;
  /* 107a4940 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4943 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a4945 mov dword ptr [0x107cf580], eax */
  w32((uint32_t)(0x107cf580), (EAX));
L_107a494a:;
  /* 107a494a cmp dword ptr [0x107cf580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4951 je 0x107a4961 */
  if (C.zf) goto L_107a4961;
  /* 107a4953 mov ecx, dword ptr [0x107cf580] */
  ECX = (r32((uint32_t)(0x107cf580)));
  /* 107a4959 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a495c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 107a495f jmp 0x107a4969 */
  goto L_107a4969;
L_107a4961:;
  /* 107a4961 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4964 mov dword ptr [0x107cf578], eax */
  w32((uint32_t)(0x107cf578), (EAX));
L_107a4969:;
  /* 107a4969 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a496c mov edx, dword ptr [0x107cf580] */
  EDX = (r32((uint32_t)(0x107cf580)));
  /* 107a4972 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107a4974 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4977 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 107a497e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a4981 mov dword ptr [0x107cf580], ecx */
  w32((uint32_t)(0x107cf580), (ECX));
  /* 107a4987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107a498a:;
  /* 107a498a pop edi */
  EDI = (pop32());
  /* 107a498b pop esi */
  ESI = (pop32());
  /* 107a498c pop ebx */
  EBX = (pop32());
  /* 107a498d mov esp, ebp */
  ESP = (EBP);
  /* 107a498f pop ebp */
  EBP = (pop32());
  /* 107a4990 ret  */
  ESPCHK(0x107a4480u, _esp0);
  ESP += 4; return;
}

/* FUN_100049a0 @ 0x107a49a0 (27 bytes, 13 insns) */
void f_107a49a0(void) {
  FTRACE(0x107a49a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a49a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a49a1 mov ebp, esp */
  EBP = (ESP);
  /* 107a49a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a49a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a49a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a49a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a49ac push eax */
  push32((uint32_t)(EAX));
  /* 107a49ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a49b0 push ecx */
  push32((uint32_t)(ECX));
  /* 107a49b1 call 0x107a49c0 */
  push32(0x107a49b6u); f_107a49c0();
  /* 107a49b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a49b9 pop ebp */
  EBP = (pop32());
  /* 107a49ba ret  */
  ESPCHK(0x107a49a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049c0 @ 0x107a49c0 (64 bytes, 27 insns) */
void f_107a49c0(void) {
  FTRACE(0x107a49c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a49c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a49c1 mov ebp, esp */
  EBP = (ESP);
  /* 107a49c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a49c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a49c6 call 0x107a79b0 */
  push32(0x107a49cbu); f_107a79b0();
  /* 107a49cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a49ce push 0 */
  push32((uint32_t)(0x0u));
  /* 107a49d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a49d3 push eax */
  push32((uint32_t)(EAX));
  /* 107a49d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a49d7 push ecx */
  push32((uint32_t)(ECX));
  /* 107a49d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a49db push edx */
  push32((uint32_t)(EDX));
  /* 107a49dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a49df push eax */
  push32((uint32_t)(EAX));
  /* 107a49e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a49e3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a49e4 call 0x107a4480 */
  push32(0x107a49e9u); f_107a4480();
  /* 107a49e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a49ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a49ef push 9 */
  push32((uint32_t)(0x9u));
  /* 107a49f1 call 0x107a7a50 */
  push32(0x107a49f6u); f_107a7a50();
  /* 107a49f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a49f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a49fc mov esp, ebp */
  ESP = (EBP);
  /* 107a49fe pop ebp */
  EBP = (pop32());
  /* 107a49ff ret  */
  ESPCHK(0x107a49c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a00 @ 0x107a4a00 (19 bytes, 9 insns) */
void f_107a4a00(void) {
  FTRACE(0x107a4a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4a00 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4a01 mov ebp, esp */
  EBP = (ESP);
  /* 107a4a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a4a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4a08 push eax */
  push32((uint32_t)(EAX));
  /* 107a4a09 call 0x107a4a40 */
  push32(0x107a4a0eu); f_107a4a40();
  /* 107a4a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4a11 pop ebp */
  EBP = (pop32());
  /* 107a4a12 ret  */
  ESPCHK(0x107a4a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a20 @ 0x107a4a20 (19 bytes, 9 insns) */
void f_107a4a20(void) {
  FTRACE(0x107a4a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4a20 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4a21 mov ebp, esp */
  EBP = (ESP);
  /* 107a4a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a4a25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4a28 push eax */
  push32((uint32_t)(EAX));
  /* 107a4a29 call 0x107a4a70 */
  push32(0x107a4a2eu); f_107a4a70();
  /* 107a4a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4a31 pop ebp */
  EBP = (pop32());
  /* 107a4a32 ret  */
  ESPCHK(0x107a4a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a40 @ 0x107a4a40 (41 bytes, 16 insns) */
void f_107a4a40(void) {
  FTRACE(0x107a4a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4a40 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4a41 mov ebp, esp */
  EBP = (ESP);
  /* 107a4a43 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a4a45 call 0x107a79b0 */
  push32(0x107a4a4au); f_107a79b0();
  /* 107a4a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4a4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a4a50 push eax */
  push32((uint32_t)(EAX));
  /* 107a4a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4a54 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4a55 call 0x107a4a70 */
  push32(0x107a4a5au); f_107a4a70();
  /* 107a4a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4a5d push 9 */
  push32((uint32_t)(0x9u));
  /* 107a4a5f call 0x107a7a50 */
  push32(0x107a4a64u); f_107a7a50();
  /* 107a4a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4a67 pop ebp */
  EBP = (pop32());
  /* 107a4a68 ret  */
  ESPCHK(0x107a4a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a70 @ 0x107a4a70 (1004 bytes, 342 insns) */
void f_107a4a70(void) {
  FTRACE(0x107a4a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4a70 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4a71 mov ebp, esp */
  EBP = (ESP);
  /* 107a4a73 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4a74 push ebx */
  push32((uint32_t)(EBX));
  /* 107a4a75 push esi */
  push32((uint32_t)(ESI));
  /* 107a4a76 push edi */
  push32((uint32_t)(EDI));
  /* 107a4a77 mov eax, dword ptr [0x107cda84] */
  EAX = (r32((uint32_t)(0x107cda84)));
  /* 107a4a7c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107a4a7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4a81 je 0x107a4ab3 */
  if (C.zf) goto L_107a4ab3;
L_107a4a83:;
  /* 107a4a83 call 0x107a5150 */
  push32(0x107a4a88u); f_107a5150();
  /* 107a4a88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4a8a jne 0x107a4aad */
  if (!C.zf) goto L_107a4aad;
  /* 107a4a8c push 0x107ca5c0 */
  push32((uint32_t)(0x107ca5c0u));
  /* 107a4a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4a93 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 107a4a98 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4a9f call 0x107a3070 */
  push32(0x107a4aa4u); f_107a3070();
  /* 107a4aa4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4aa7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4aaa jne 0x107a4aad */
  if (!C.zf) goto L_107a4aad;
  /* 107a4aac int3  */
  x86_unimpl("int3 @ 0x107a4aac");
L_107a4aad:;
  /* 107a4aad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a4aaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a4ab1 jne 0x107a4a83 */
  if (!C.zf) goto L_107a4a83;
L_107a4ab3:;
  /* 107a4ab3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4ab7 jne 0x107a4abe */
  if (!C.zf) goto L_107a4abe;
  /* 107a4ab9 jmp 0x107a4e55 */
  goto L_107a4e55;
L_107a4abe:;
  /* 107a4abe push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4ac4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a4ac7 push edx */
  push32((uint32_t)(EDX));
  /* 107a4ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4aca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4acd push eax */
  push32((uint32_t)(EAX));
  /* 107a4ace push 3 */
  push32((uint32_t)(0x3u));
  /* 107a4ad0 call dword ptr [0x107cdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cdc90))), 0x107a4ad6u);
  /* 107a4ad6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4ad9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4adb jne 0x107a4b08 */
  if (!C.zf) goto L_107a4b08;
L_107a4add:;
  /* 107a4add push 0x107ca884 */
  push32((uint32_t)(0x107ca884u));
  /* 107a4ae2 push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a4ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4aeb push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4aed push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4aef call 0x107a3070 */
  push32(0x107a4af4u); f_107a3070();
  /* 107a4af4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4af7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4afa jne 0x107a4afd */
  if (!C.zf) goto L_107a4afd;
  /* 107a4afc int3  */
  x86_unimpl("int3 @ 0x107a4afc");
L_107a4afd:;
  /* 107a4afd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a4aff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a4b01 jne 0x107a4add */
  if (!C.zf) goto L_107a4add;
  /* 107a4b03 jmp 0x107a4e55 */
  goto L_107a4e55;
L_107a4b08:;
  /* 107a4b08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4b0b push edx */
  push32((uint32_t)(EDX));
  /* 107a4b0c call 0x107a55b0 */
  push32(0x107a4b11u); f_107a55b0();
  /* 107a4b11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4b16 jne 0x107a4b39 */
  if (!C.zf) goto L_107a4b39;
  /* 107a4b18 push 0x107ca6c4 */
  push32((uint32_t)(0x107ca6c4u));
  /* 107a4b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4b1f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 107a4b24 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4b29 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4b2b call 0x107a3070 */
  push32(0x107a4b30u); f_107a3070();
  /* 107a4b30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4b33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4b36 jne 0x107a4b39 */
  if (!C.zf) goto L_107a4b39;
  /* 107a4b38 int3  */
  x86_unimpl("int3 @ 0x107a4b38");
L_107a4b39:;
  /* 107a4b39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4b3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4b3d jne 0x107a4b08 */
  if (!C.zf) goto L_107a4b08;
  /* 107a4b3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4b42 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a4b45 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107a4b48:;
  /* 107a4b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4b4b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a4b4e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a4b53 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4b56 je 0x107a4b9b */
  if (C.zf) goto L_107a4b9b;
  /* 107a4b58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4b5b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4b5f je 0x107a4b9b */
  if (C.zf) goto L_107a4b9b;
  /* 107a4b61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4b64 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a4b67 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a4b6c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4b6f je 0x107a4b9b */
  if (C.zf) goto L_107a4b9b;
  /* 107a4b71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4b74 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4b78 je 0x107a4b9b */
  if (C.zf) goto L_107a4b9b;
  /* 107a4b7a push 0x107ca85c */
  push32((uint32_t)(0x107ca85cu));
  /* 107a4b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4b81 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 107a4b86 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4b8b push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4b8d call 0x107a3070 */
  push32(0x107a4b92u); f_107a3070();
  /* 107a4b92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4b95 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4b98 jne 0x107a4b9b */
  if (!C.zf) goto L_107a4b9b;
  /* 107a4b9a int3  */
  x86_unimpl("int3 @ 0x107a4b9a");
L_107a4b9b:;
  /* 107a4b9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a4b9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a4b9f jne 0x107a4b48 */
  if (!C.zf) goto L_107a4b48;
  /* 107a4ba1 mov eax, dword ptr [0x107cda84] */
  EAX = (r32((uint32_t)(0x107cda84)));
  /* 107a4ba6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107a4ba9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4bab jne 0x107a4c76 */
  if (!C.zf) goto L_107a4c76;
  /* 107a4bb1 push 4 */
  push32((uint32_t)(0x4u));
  /* 107a4bb3 mov cl, byte ptr [0x107cda90] */
  CL = (r8((uint32_t)(0x107cda90)));
  /* 107a4bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4bba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4bbd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4bc0 push edx */
  push32((uint32_t)(EDX));
  /* 107a4bc1 call 0x107a50c0 */
  push32(0x107a4bc6u); f_107a50c0();
  /* 107a4bc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4bc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4bcb jne 0x107a4c10 */
  if (!C.zf) goto L_107a4c10;
L_107a4bcd:;
  /* 107a4bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4bd0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4bd3 push eax */
  push32((uint32_t)(EAX));
  /* 107a4bd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4bd7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107a4bda push edx */
  push32((uint32_t)(EDX));
  /* 107a4bdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4bde mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107a4be1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a4be7 mov edx, dword ptr [ecx*4 + 0x107cda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107cda94)));
  /* 107a4bee push edx */
  push32((uint32_t)(EDX));
  /* 107a4bef push 0x107ca830 */
  push32((uint32_t)(0x107ca830u));
  /* 107a4bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4bf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4bf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4bfa push 1 */
  push32((uint32_t)(0x1u));
  /* 107a4bfc call 0x107a3070 */
  push32(0x107a4c01u); f_107a3070();
  /* 107a4c01 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4c04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4c07 jne 0x107a4c0a */
  if (!C.zf) goto L_107a4c0a;
  /* 107a4c09 int3  */
  x86_unimpl("int3 @ 0x107a4c09");
L_107a4c0a:;
  /* 107a4c0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4c0e jne 0x107a4bcd */
  if (!C.zf) goto L_107a4bcd;
L_107a4c10:;
  /* 107a4c10 push 4 */
  push32((uint32_t)(0x4u));
  /* 107a4c12 mov cl, byte ptr [0x107cda90] */
  CL = (r8((uint32_t)(0x107cda90)));
  /* 107a4c18 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4c19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4c1c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a4c1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4c22 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 107a4c26 push edx */
  push32((uint32_t)(EDX));
  /* 107a4c27 call 0x107a50c0 */
  push32(0x107a4c2cu); f_107a50c0();
  /* 107a4c2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4c2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4c31 jne 0x107a4c76 */
  if (!C.zf) goto L_107a4c76;
L_107a4c33:;
  /* 107a4c33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4c36 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4c39 push eax */
  push32((uint32_t)(EAX));
  /* 107a4c3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4c3d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107a4c40 push edx */
  push32((uint32_t)(EDX));
  /* 107a4c41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4c44 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107a4c47 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a4c4d mov edx, dword ptr [ecx*4 + 0x107cda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107cda94)));
  /* 107a4c54 push edx */
  push32((uint32_t)(EDX));
  /* 107a4c55 push 0x107ca804 */
  push32((uint32_t)(0x107ca804u));
  /* 107a4c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4c5e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4c60 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a4c62 call 0x107a3070 */
  push32(0x107a4c67u); f_107a3070();
  /* 107a4c67 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4c6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4c6d jne 0x107a4c70 */
  if (!C.zf) goto L_107a4c70;
  /* 107a4c6f int3  */
  x86_unimpl("int3 @ 0x107a4c6f");
L_107a4c70:;
  /* 107a4c70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4c74 jne 0x107a4c33 */
  if (!C.zf) goto L_107a4c33;
L_107a4c76:;
  /* 107a4c76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4c79 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4c7d jne 0x107a4ceb */
  if (!C.zf) goto L_107a4ceb;
L_107a4c7f:;
  /* 107a4c7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4c82 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4c89 jne 0x107a4c94 */
  if (!C.zf) goto L_107a4c94;
  /* 107a4c8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4c8e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4c92 je 0x107a4cb5 */
  if (C.zf) goto L_107a4cb5;
L_107a4c94:;
  /* 107a4c94 push 0x107ca7c4 */
  push32((uint32_t)(0x107ca7c4u));
  /* 107a4c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4c9b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 107a4ca0 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4ca5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4ca7 call 0x107a3070 */
  push32(0x107a4cacu); f_107a3070();
  /* 107a4cac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4caf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4cb2 jne 0x107a4cb5 */
  if (!C.zf) goto L_107a4cb5;
  /* 107a4cb4 int3  */
  x86_unimpl("int3 @ 0x107a4cb4");
L_107a4cb5:;
  /* 107a4cb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a4cb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a4cb9 jne 0x107a4c7f */
  if (!C.zf) goto L_107a4c7f;
  /* 107a4cbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4cbe mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a4cc1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4cc4 push eax */
  push32((uint32_t)(EAX));
  /* 107a4cc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a4cc7 mov cl, byte ptr [0x107cda91] */
  CL = (r8((uint32_t)(0x107cda91)));
  /* 107a4ccd push ecx */
  push32((uint32_t)(ECX));
  /* 107a4cce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4cd1 push edx */
  push32((uint32_t)(EDX));
  /* 107a4cd2 call 0x107a7d20 */
  push32(0x107a4cd7u); f_107a7d20();
  /* 107a4cd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4cda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4cdd push eax */
  push32((uint32_t)(EAX));
  /* 107a4cde call 0x107a8120 */
  push32(0x107a4ce3u); f_107a8120();
  /* 107a4ce3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4ce6 jmp 0x107a4e55 */
  goto L_107a4e55;
L_107a4ceb:;
  /* 107a4ceb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4cee cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4cf2 jne 0x107a4d01 */
  if (!C.zf) goto L_107a4d01;
  /* 107a4cf4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4cf8 jne 0x107a4d01 */
  if (!C.zf) goto L_107a4d01;
  /* 107a4cfa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_107a4d01:;
  /* 107a4d01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4d04 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a4d07 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4d0a je 0x107a4d2d */
  if (C.zf) goto L_107a4d2d;
  /* 107a4d0c push 0x107ca7a4 */
  push32((uint32_t)(0x107ca7a4u));
  /* 107a4d11 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4d13 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 107a4d18 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4d1d push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4d1f call 0x107a3070 */
  push32(0x107a4d24u); f_107a3070();
  /* 107a4d24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4d27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4d2a jne 0x107a4d2d */
  if (!C.zf) goto L_107a4d2d;
  /* 107a4d2c int3  */
  x86_unimpl("int3 @ 0x107a4d2c");
L_107a4d2d:;
  /* 107a4d2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a4d2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a4d31 jne 0x107a4d01 */
  if (!C.zf) goto L_107a4d01;
  /* 107a4d33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4d36 mov eax, dword ptr [0x107cf584] */
  EAX = (r32((uint32_t)(0x107cf584)));
  /* 107a4d3b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a4d3e mov dword ptr [0x107cf584], eax */
  w32((uint32_t)(0x107cf584), (EAX));
  /* 107a4d43 mov ecx, dword ptr [0x107cda84] */
  ECX = (r32((uint32_t)(0x107cda84)));
  /* 107a4d49 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 107a4d4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a4d4e jne 0x107a4e2c */
  if (!C.zf) goto L_107a4e2c;
  /* 107a4d54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4d57 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4d5a je 0x107a4d6c */
  if (C.zf) goto L_107a4d6c;
  /* 107a4d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4d5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a4d61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4d64 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a4d67 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107a4d6a jmp 0x107a4daa */
  goto L_107a4daa;
L_107a4d6c:;
  /* 107a4d6c mov ecx, dword ptr [0x107cf578] */
  ECX = (r32((uint32_t)(0x107cf578)));
  /* 107a4d72 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4d75 je 0x107a4d98 */
  if (C.zf) goto L_107a4d98;
  /* 107a4d77 push 0x107ca78c */
  push32((uint32_t)(0x107ca78cu));
  /* 107a4d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4d7e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 107a4d83 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4d88 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4d8a call 0x107a3070 */
  push32(0x107a4d8fu); f_107a3070();
  /* 107a4d8f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4d92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4d95 jne 0x107a4d98 */
  if (!C.zf) goto L_107a4d98;
  /* 107a4d97 int3  */
  x86_unimpl("int3 @ 0x107a4d97");
L_107a4d98:;
  /* 107a4d98 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a4d9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a4d9c jne 0x107a4d6c */
  if (!C.zf) goto L_107a4d6c;
  /* 107a4d9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4da1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a4da4 mov dword ptr [0x107cf578], ecx */
  w32((uint32_t)(0x107cf578), (ECX));
L_107a4daa:;
  /* 107a4daa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4dad cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4db1 je 0x107a4dc2 */
  if (C.zf) goto L_107a4dc2;
  /* 107a4db3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4db6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a4db9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4dbc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a4dbe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107a4dc0 jmp 0x107a4dff */
  goto L_107a4dff;
L_107a4dc2:;
  /* 107a4dc2 mov ecx, dword ptr [0x107cf580] */
  ECX = (r32((uint32_t)(0x107cf580)));
  /* 107a4dc8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4dcb je 0x107a4dee */
  if (C.zf) goto L_107a4dee;
  /* 107a4dcd push 0x107ca774 */
  push32((uint32_t)(0x107ca774u));
  /* 107a4dd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4dd4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 107a4dd9 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4dde push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4de0 call 0x107a3070 */
  push32(0x107a4de5u); f_107a3070();
  /* 107a4de5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4de8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4deb jne 0x107a4dee */
  if (!C.zf) goto L_107a4dee;
  /* 107a4ded int3  */
  x86_unimpl("int3 @ 0x107a4ded");
L_107a4dee:;
  /* 107a4dee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a4df0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a4df2 jne 0x107a4dc2 */
  if (!C.zf) goto L_107a4dc2;
  /* 107a4df4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4df7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a4df9 mov dword ptr [0x107cf580], ecx */
  w32((uint32_t)(0x107cf580), (ECX));
L_107a4dff:;
  /* 107a4dff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4e02 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a4e05 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4e08 push eax */
  push32((uint32_t)(EAX));
  /* 107a4e09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a4e0b mov cl, byte ptr [0x107cda91] */
  CL = (r8((uint32_t)(0x107cda91)));
  /* 107a4e11 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4e12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4e15 push edx */
  push32((uint32_t)(EDX));
  /* 107a4e16 call 0x107a7d20 */
  push32(0x107a4e1bu); f_107a7d20();
  /* 107a4e1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4e1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4e21 push eax */
  push32((uint32_t)(EAX));
  /* 107a4e22 call 0x107a8120 */
  push32(0x107a4e27u); f_107a8120();
  /* 107a4e27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4e2a jmp 0x107a4e55 */
  goto L_107a4e55;
L_107a4e2c:;
  /* 107a4e2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4e2f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 107a4e36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4e39 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a4e3c push eax */
  push32((uint32_t)(EAX));
  /* 107a4e3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a4e3f mov cl, byte ptr [0x107cda91] */
  CL = (r8((uint32_t)(0x107cda91)));
  /* 107a4e45 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4e46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4e49 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4e4c push edx */
  push32((uint32_t)(EDX));
  /* 107a4e4d call 0x107a7d20 */
  push32(0x107a4e52u); f_107a7d20();
  /* 107a4e52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a4e55:;
  /* 107a4e55 pop edi */
  EDI = (pop32());
  /* 107a4e56 pop esi */
  ESI = (pop32());
  /* 107a4e57 pop ebx */
  EBX = (pop32());
  /* 107a4e58 mov esp, ebp */
  ESP = (EBP);
  /* 107a4e5a pop ebp */
  EBP = (pop32());
  /* 107a4e5b ret  */
  ESPCHK(0x107a4a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e60 @ 0x107a4e60 (19 bytes, 9 insns) */
void f_107a4e60(void) {
  FTRACE(0x107a4e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4e60 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4e61 mov ebp, esp */
  EBP = (ESP);
  /* 107a4e63 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a4e65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4e68 push eax */
  push32((uint32_t)(EAX));
  /* 107a4e69 call 0x107a4e80 */
  push32(0x107a4e6eu); f_107a4e80();
  /* 107a4e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4e71 pop ebp */
  EBP = (pop32());
  /* 107a4e72 ret  */
  ESPCHK(0x107a4e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e80 @ 0x107a4e80 (342 bytes, 119 insns) */
void f_107a4e80(void) {
  FTRACE(0x107a4e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4e80 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4e81 mov ebp, esp */
  EBP = (ESP);
  /* 107a4e83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a4e86 push ebx */
  push32((uint32_t)(EBX));
  /* 107a4e87 push esi */
  push32((uint32_t)(ESI));
  /* 107a4e88 push edi */
  push32((uint32_t)(EDI));
  /* 107a4e89 mov eax, dword ptr [0x107cda84] */
  EAX = (r32((uint32_t)(0x107cda84)));
  /* 107a4e8e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107a4e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4e93 je 0x107a4ec5 */
  if (C.zf) goto L_107a4ec5;
L_107a4e95:;
  /* 107a4e95 call 0x107a5150 */
  push32(0x107a4e9au); f_107a5150();
  /* 107a4e9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4e9c jne 0x107a4ebf */
  if (!C.zf) goto L_107a4ebf;
  /* 107a4e9e push 0x107ca5c0 */
  push32((uint32_t)(0x107ca5c0u));
  /* 107a4ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4ea5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 107a4eaa push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4eaf push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4eb1 call 0x107a3070 */
  push32(0x107a4eb6u); f_107a3070();
  /* 107a4eb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4eb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4ebc jne 0x107a4ebf */
  if (!C.zf) goto L_107a4ebf;
  /* 107a4ebe int3  */
  x86_unimpl("int3 @ 0x107a4ebe");
L_107a4ebf:;
  /* 107a4ebf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a4ec1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a4ec3 jne 0x107a4e95 */
  if (!C.zf) goto L_107a4e95;
L_107a4ec5:;
  /* 107a4ec5 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a4ec7 call 0x107a79b0 */
  push32(0x107a4eccu); f_107a79b0();
  /* 107a4ecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a4ecf:;
  /* 107a4ecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4ed2 push edx */
  push32((uint32_t)(EDX));
  /* 107a4ed3 call 0x107a55b0 */
  push32(0x107a4ed8u); f_107a55b0();
  /* 107a4ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4edd jne 0x107a4f00 */
  if (!C.zf) goto L_107a4f00;
  /* 107a4edf push 0x107ca6c4 */
  push32((uint32_t)(0x107ca6c4u));
  /* 107a4ee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4ee6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 107a4eeb push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4ef0 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4ef2 call 0x107a3070 */
  push32(0x107a4ef7u); f_107a3070();
  /* 107a4ef7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4efa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4efd jne 0x107a4f00 */
  if (!C.zf) goto L_107a4f00;
  /* 107a4eff int3  */
  x86_unimpl("int3 @ 0x107a4eff");
L_107a4f00:;
  /* 107a4f00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a4f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a4f04 jne 0x107a4ecf */
  if (!C.zf) goto L_107a4ecf;
  /* 107a4f06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4f09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a4f0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107a4f0f:;
  /* 107a4f0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a4f12 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a4f15 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a4f1a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4f1d je 0x107a4f62 */
  if (C.zf) goto L_107a4f62;
  /* 107a4f1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a4f22 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4f26 je 0x107a4f62 */
  if (C.zf) goto L_107a4f62;
  /* 107a4f28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a4f2b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a4f2e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a4f33 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4f36 je 0x107a4f62 */
  if (C.zf) goto L_107a4f62;
  /* 107a4f38 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a4f3b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4f3f je 0x107a4f62 */
  if (C.zf) goto L_107a4f62;
  /* 107a4f41 push 0x107ca85c */
  push32((uint32_t)(0x107ca85cu));
  /* 107a4f46 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4f48 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 107a4f4d push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4f52 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4f54 call 0x107a3070 */
  push32(0x107a4f59u); f_107a3070();
  /* 107a4f59 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4f5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4f5f jne 0x107a4f62 */
  if (!C.zf) goto L_107a4f62;
  /* 107a4f61 int3  */
  x86_unimpl("int3 @ 0x107a4f61");
L_107a4f62:;
  /* 107a4f62 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a4f64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a4f66 jne 0x107a4f0f */
  if (!C.zf) goto L_107a4f0f;
  /* 107a4f68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a4f6b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4f6f jne 0x107a4f7e */
  if (!C.zf) goto L_107a4f7e;
  /* 107a4f71 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4f75 jne 0x107a4f7e */
  if (!C.zf) goto L_107a4f7e;
  /* 107a4f77 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_107a4f7e:;
  /* 107a4f7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a4f81 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4f85 je 0x107a4fb9 */
  if (C.zf) goto L_107a4fb9;
L_107a4f87:;
  /* 107a4f87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a4f8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a4f8d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4f90 je 0x107a4fb3 */
  if (C.zf) goto L_107a4fb3;
  /* 107a4f92 push 0x107ca7a4 */
  push32((uint32_t)(0x107ca7a4u));
  /* 107a4f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a4f99 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 107a4f9e push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a4fa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a4fa5 call 0x107a3070 */
  push32(0x107a4faau); f_107a3070();
  /* 107a4faa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4fad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a4fb0 jne 0x107a4fb3 */
  if (!C.zf) goto L_107a4fb3;
  /* 107a4fb2 int3  */
  x86_unimpl("int3 @ 0x107a4fb2");
L_107a4fb3:;
  /* 107a4fb3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a4fb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a4fb7 jne 0x107a4f87 */
  if (!C.zf) goto L_107a4f87;
L_107a4fb9:;
  /* 107a4fb9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a4fbc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a4fbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a4fc2 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a4fc4 call 0x107a7a50 */
  push32(0x107a4fc9u); f_107a7a50();
  /* 107a4fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a4fcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4fcf pop edi */
  EDI = (pop32());
  /* 107a4fd0 pop esi */
  ESI = (pop32());
  /* 107a4fd1 pop ebx */
  EBX = (pop32());
  /* 107a4fd2 mov esp, ebp */
  ESP = (EBP);
  /* 107a4fd4 pop ebp */
  EBP = (pop32());
  /* 107a4fd5 ret  */
  ESPCHK(0x107a4e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fe0 @ 0x107a4fe0 (28 bytes, 11 insns) */
void f_107a4fe0(void) {
  FTRACE(0x107a4fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a4fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a4fe1 mov ebp, esp */
  EBP = (ESP);
  /* 107a4fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a4fe4 mov eax, dword ptr [0x107cda8c] */
  EAX = (r32((uint32_t)(0x107cda8c)));
  /* 107a4fe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a4fec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a4fef mov dword ptr [0x107cda8c], ecx */
  w32((uint32_t)(0x107cda8c), (ECX));
  /* 107a4ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a4ff8 mov esp, ebp */
  ESP = (EBP);
  /* 107a4ffa pop ebp */
  EBP = (pop32());
  /* 107a4ffb ret  */
  ESPCHK(0x107a4fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005000 @ 0x107a5000 (157 bytes, 59 insns) */
void f_107a5000(void) {
  FTRACE(0x107a5000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a5000 push ebp */
  push32((uint32_t)(EBP));
  /* 107a5001 mov ebp, esp */
  EBP = (ESP);
  /* 107a5003 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5004 push ebx */
  push32((uint32_t)(EBX));
  /* 107a5005 push esi */
  push32((uint32_t)(ESI));
  /* 107a5006 push edi */
  push32((uint32_t)(EDI));
  /* 107a5007 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a5009 call 0x107a79b0 */
  push32(0x107a500eu); f_107a79b0();
  /* 107a500e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5011 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5014 push eax */
  push32((uint32_t)(EAX));
  /* 107a5015 call 0x107a55b0 */
  push32(0x107a501au); f_107a55b0();
  /* 107a501a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a501d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a501f je 0x107a508c */
  if (C.zf) goto L_107a508c;
  /* 107a5021 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5024 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a5027 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107a502a:;
  /* 107a502a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a502d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a5030 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a5035 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5038 je 0x107a507d */
  if (C.zf) goto L_107a507d;
  /* 107a503a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a503d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5041 je 0x107a507d */
  if (C.zf) goto L_107a507d;
  /* 107a5043 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5046 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a5049 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a504e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5051 je 0x107a507d */
  if (C.zf) goto L_107a507d;
  /* 107a5053 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5056 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a505a je 0x107a507d */
  if (C.zf) goto L_107a507d;
  /* 107a505c push 0x107ca85c */
  push32((uint32_t)(0x107ca85cu));
  /* 107a5061 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5063 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 107a5068 push 0x107ca5b4 */
  push32((uint32_t)(0x107ca5b4u));
  /* 107a506d push 2 */
  push32((uint32_t)(0x2u));
  /* 107a506f call 0x107a3070 */
  push32(0x107a5074u); f_107a3070();
  /* 107a5074 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5077 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a507a jne 0x107a507d */
  if (!C.zf) goto L_107a507d;
  /* 107a507c int3  */
  x86_unimpl("int3 @ 0x107a507c");
L_107a507d:;
  /* 107a507d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a507f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a5081 jne 0x107a502a */
  if (!C.zf) goto L_107a502a;
  /* 107a5083 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5086 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a5089 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_107a508c:;
  /* 107a508c push 9 */
  push32((uint32_t)(0x9u));
  /* 107a508e call 0x107a7a50 */
  push32(0x107a5093u); f_107a7a50();
  /* 107a5093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5096 pop edi */
  EDI = (pop32());
  /* 107a5097 pop esi */
  ESI = (pop32());
  /* 107a5098 pop ebx */
  EBX = (pop32());
  /* 107a5099 mov esp, ebp */
  ESP = (EBP);
  /* 107a509b pop ebp */
  EBP = (pop32());
  /* 107a509c ret  */
  ESPCHK(0x107a5000u, _esp0);
  ESP += 4; return;
}

/* FUN_100050a0 @ 0x107a50a0 (28 bytes, 11 insns) */
void f_107a50a0(void) {
  FTRACE(0x107a50a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a50a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a50a1 mov ebp, esp */
  EBP = (ESP);
  /* 107a50a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a50a4 mov eax, dword ptr [0x107cdc90] */
  EAX = (r32((uint32_t)(0x107cdc90)));
  /* 107a50a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a50ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a50af mov dword ptr [0x107cdc90], ecx */
  w32((uint32_t)(0x107cdc90), (ECX));
  /* 107a50b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a50b8 mov esp, ebp */
  ESP = (EBP);
  /* 107a50ba pop ebp */
  EBP = (pop32());
  /* 107a50bb ret  */
  ESPCHK(0x107a50a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050c0 @ 0x107a50c0 (136 bytes, 55 insns) */
void f_107a50c0(void) {
  FTRACE(0x107a50c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a50c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a50c1 mov ebp, esp */
  EBP = (ESP);
  /* 107a50c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a50c4 push ebx */
  push32((uint32_t)(EBX));
  /* 107a50c5 push esi */
  push32((uint32_t)(ESI));
  /* 107a50c6 push edi */
  push32((uint32_t)(EDI));
  /* 107a50c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_107a50ce:;
  /* 107a50ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a50d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a50d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a50d7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107a50da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a50dc je 0x107a513e */
  if (C.zf) goto L_107a513e;
  /* 107a50de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a50e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a50e3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107a50e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a50e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a50ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a50f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a50f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107a50f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a50f9 je 0x107a513c */
  if (C.zf) goto L_107a513c;
L_107a50fb:;
  /* 107a50fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a50fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a5103 push eax */
  push32((uint32_t)(EAX));
  /* 107a5104 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5107 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a5109 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 107a510c push edx */
  push32((uint32_t)(EDX));
  /* 107a510d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5110 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a5113 push eax */
  push32((uint32_t)(EAX));
  /* 107a5114 push 0x107ca8a0 */
  push32((uint32_t)(0x107ca8a0u));
  /* 107a5119 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a511b push 0 */
  push32((uint32_t)(0x0u));
  /* 107a511d push 0 */
  push32((uint32_t)(0x0u));
  /* 107a511f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5121 call 0x107a3070 */
  push32(0x107a5126u); f_107a3070();
  /* 107a5126 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5129 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a512c jne 0x107a512f */
  if (!C.zf) goto L_107a512f;
  /* 107a512e int3  */
  x86_unimpl("int3 @ 0x107a512e");
L_107a512f:;
  /* 107a512f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a5131 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a5133 jne 0x107a50fb */
  if (!C.zf) goto L_107a50fb;
  /* 107a5135 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107a513c:;
  /* 107a513c jmp 0x107a50ce */
  goto L_107a50ce;
L_107a513e:;
  /* 107a513e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5141 pop edi */
  EDI = (pop32());
  /* 107a5142 pop esi */
  ESI = (pop32());
  /* 107a5143 pop ebx */
  EBX = (pop32());
  /* 107a5144 mov esp, ebp */
  ESP = (EBP);
  /* 107a5146 pop ebp */
  EBP = (pop32());
  /* 107a5147 ret  */
  ESPCHK(0x107a50c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005150 @ 0x107a5150 (863 bytes, 299 insns) [1 switch table(s)] */
void f_107a5150(void) {
  FTRACE(0x107a5150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a5150 push ebp */
  push32((uint32_t)(EBP));
  /* 107a5151 mov ebp, esp */
  EBP = (ESP);
  /* 107a5153 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a5156 push ebx */
  push32((uint32_t)(EBX));
  /* 107a5157 push esi */
  push32((uint32_t)(ESI));
  /* 107a5158 push edi */
  push32((uint32_t)(EDI));
  /* 107a5159 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107a5160 mov eax, dword ptr [0x107cda84] */
  EAX = (r32((uint32_t)(0x107cda84)));
  /* 107a5165 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 107a5168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a516a jne 0x107a5176 */
  if (!C.zf) goto L_107a5176;
  /* 107a516c mov eax, 1 */
  EAX = (0x1u);
  /* 107a5171 jmp 0x107a54a8 */
  goto L_107a54a8;
L_107a5176:;
  /* 107a5176 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a5178 call 0x107a79b0 */
  push32(0x107a517du); f_107a79b0();
  /* 107a517d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5180 call 0x107a8190 */
  push32(0x107a5185u); f_107a8190();
  /* 107a5185 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a5188 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a518c je 0x107a5299 */
  if (C.zf) goto L_107a5299;
  /* 107a5192 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5196 je 0x107a5299 */
  if (C.zf) goto L_107a5299;
  /* 107a519c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a519f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107a51a2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a51a5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a51a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107a51ab cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a51af ja 0x107a5262 */
  if ((!C.cf&&!C.zf)) goto L_107a5262;
  /* 107a51b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a51b8 jmp dword ptr [eax*4 + 0x107a54af] */
  switch (EAX) {
    case 0: goto L_107a523a;
    case 1: goto L_107a5212;
    case 2: goto L_107a51ea;
    case 3: goto L_107a51bf;
    default: x86_unimpl("switch@0x107a51b8 out of table"); return;
  }
L_107a51bf:;
  /* 107a51bf push 0x107ca9f4 */
  push32((uint32_t)(0x107ca9f4u));
  /* 107a51c4 push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a51c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a51cb push 0 */
  push32((uint32_t)(0x0u));
  /* 107a51cd push 0 */
  push32((uint32_t)(0x0u));
  /* 107a51cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107a51d1 call 0x107a3070 */
  push32(0x107a51d6u); f_107a3070();
  /* 107a51d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a51d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a51dc jne 0x107a51df */
  if (!C.zf) goto L_107a51df;
  /* 107a51de int3  */
  x86_unimpl("int3 @ 0x107a51de");
L_107a51df:;
  /* 107a51df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a51e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a51e3 jne 0x107a51bf */
  if (!C.zf) goto L_107a51bf;
  /* 107a51e5 jmp 0x107a5288 */
  goto L_107a5288;
L_107a51ea:;
  /* 107a51ea push 0x107ca9d0 */
  push32((uint32_t)(0x107ca9d0u));
  /* 107a51ef push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a51f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a51f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a51f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a51fa push 0 */
  push32((uint32_t)(0x0u));
  /* 107a51fc call 0x107a3070 */
  push32(0x107a5201u); f_107a3070();
  /* 107a5201 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5204 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5207 jne 0x107a520a */
  if (!C.zf) goto L_107a520a;
  /* 107a5209 int3  */
  x86_unimpl("int3 @ 0x107a5209");
L_107a520a:;
  /* 107a520a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a520c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a520e jne 0x107a51ea */
  if (!C.zf) goto L_107a51ea;
  /* 107a5210 jmp 0x107a5288 */
  goto L_107a5288;
L_107a5212:;
  /* 107a5212 push 0x107ca9ac */
  push32((uint32_t)(0x107ca9acu));
  /* 107a5217 push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a521c push 0 */
  push32((uint32_t)(0x0u));
  /* 107a521e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5220 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5222 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5224 call 0x107a3070 */
  push32(0x107a5229u); f_107a3070();
  /* 107a5229 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a522c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a522f jne 0x107a5232 */
  if (!C.zf) goto L_107a5232;
  /* 107a5231 int3  */
  x86_unimpl("int3 @ 0x107a5231");
L_107a5232:;
  /* 107a5232 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5236 jne 0x107a5212 */
  if (!C.zf) goto L_107a5212;
  /* 107a5238 jmp 0x107a5288 */
  goto L_107a5288;
L_107a523a:;
  /* 107a523a push 0x107ca988 */
  push32((uint32_t)(0x107ca988u));
  /* 107a523f push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a5244 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5246 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5248 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a524a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a524c call 0x107a3070 */
  push32(0x107a5251u); f_107a3070();
  /* 107a5251 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5254 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5257 jne 0x107a525a */
  if (!C.zf) goto L_107a525a;
  /* 107a5259 int3  */
  x86_unimpl("int3 @ 0x107a5259");
L_107a525a:;
  /* 107a525a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a525c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a525e jne 0x107a523a */
  if (!C.zf) goto L_107a523a;
  /* 107a5260 jmp 0x107a5288 */
  goto L_107a5288;
L_107a5262:;
  /* 107a5262 push 0x107ca95c */
  push32((uint32_t)(0x107ca95cu));
  /* 107a5267 push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a526c push 0 */
  push32((uint32_t)(0x0u));
  /* 107a526e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5270 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5272 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5274 call 0x107a3070 */
  push32(0x107a5279u); f_107a3070();
  /* 107a5279 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a527c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a527f jne 0x107a5282 */
  if (!C.zf) goto L_107a5282;
  /* 107a5281 int3  */
  x86_unimpl("int3 @ 0x107a5281");
L_107a5282:;
  /* 107a5282 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a5284 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a5286 jne 0x107a5262 */
  if (!C.zf) goto L_107a5262;
L_107a5288:;
  /* 107a5288 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a528a call 0x107a7a50 */
  push32(0x107a528fu); f_107a7a50();
  /* 107a528f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5292 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5294 jmp 0x107a54a8 */
  goto L_107a54a8;
L_107a5299:;
  /* 107a5299 mov eax, dword ptr [0x107cf580] */
  EAX = (r32((uint32_t)(0x107cf580)));
  /* 107a529e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a52a1 jmp 0x107a52ab */
  goto L_107a52ab;
L_107a52a3:;
  /* 107a52a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a52a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a52a8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107a52ab:;
  /* 107a52ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a52af je 0x107a549b */
  if (C.zf) goto L_107a549b;
  /* 107a52b5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 107a52bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a52bf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107a52c2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a52c8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a52cb je 0x107a52f0 */
  if (C.zf) goto L_107a52f0;
  /* 107a52cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a52d0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a52d4 je 0x107a52f0 */
  if (C.zf) goto L_107a52f0;
  /* 107a52d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a52d9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107a52dc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a52e2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a52e5 je 0x107a52f0 */
  if (C.zf) goto L_107a52f0;
  /* 107a52e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a52ea cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a52ee jne 0x107a5308 */
  if (!C.zf) goto L_107a5308;
L_107a52f0:;
  /* 107a52f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a52f3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107a52f6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a52fc mov edx, dword ptr [ecx*4 + 0x107cda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107cda94)));
  /* 107a5303 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107a5306 jmp 0x107a530f */
  goto L_107a530f;
L_107a5308:;
  /* 107a5308 mov dword ptr [ebp - 0x14], 0x107ca954 */
  w32((uint32_t)(EBP + -0x14), (0x107ca954u));
L_107a530f:;
  /* 107a530f push 4 */
  push32((uint32_t)(0x4u));
  /* 107a5311 mov al, byte ptr [0x107cda90] */
  AL = (r8((uint32_t)(0x107cda90)));
  /* 107a5316 push eax */
  push32((uint32_t)(EAX));
  /* 107a5317 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a531a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a531d push ecx */
  push32((uint32_t)(ECX));
  /* 107a531e call 0x107a50c0 */
  push32(0x107a5323u); f_107a50c0();
  /* 107a5323 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5328 jne 0x107a5364 */
  if (!C.zf) goto L_107a5364;
L_107a532a:;
  /* 107a532a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a532d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5330 push edx */
  push32((uint32_t)(EDX));
  /* 107a5331 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5334 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 107a5337 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5338 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a533b push edx */
  push32((uint32_t)(EDX));
  /* 107a533c push 0x107ca830 */
  push32((uint32_t)(0x107ca830u));
  /* 107a5341 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5343 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5345 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5347 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5349 call 0x107a3070 */
  push32(0x107a534eu); f_107a3070();
  /* 107a534e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5351 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5354 jne 0x107a5357 */
  if (!C.zf) goto L_107a5357;
  /* 107a5356 int3  */
  x86_unimpl("int3 @ 0x107a5356");
L_107a5357:;
  /* 107a5357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a535b jne 0x107a532a */
  if (!C.zf) goto L_107a532a;
  /* 107a535d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_107a5364:;
  /* 107a5364 push 4 */
  push32((uint32_t)(0x4u));
  /* 107a5366 mov cl, byte ptr [0x107cda90] */
  CL = (r8((uint32_t)(0x107cda90)));
  /* 107a536c push ecx */
  push32((uint32_t)(ECX));
  /* 107a536d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5370 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a5373 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5376 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 107a537a push edx */
  push32((uint32_t)(EDX));
  /* 107a537b call 0x107a50c0 */
  push32(0x107a5380u); f_107a50c0();
  /* 107a5380 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5383 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5385 jne 0x107a53c1 */
  if (!C.zf) goto L_107a53c1;
L_107a5387:;
  /* 107a5387 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a538a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a538d push eax */
  push32((uint32_t)(EAX));
  /* 107a538e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5391 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107a5394 push edx */
  push32((uint32_t)(EDX));
  /* 107a5395 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a5398 push eax */
  push32((uint32_t)(EAX));
  /* 107a5399 push 0x107ca804 */
  push32((uint32_t)(0x107ca804u));
  /* 107a539e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a53a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a53a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a53a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a53a6 call 0x107a3070 */
  push32(0x107a53abu); f_107a3070();
  /* 107a53ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a53ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a53b1 jne 0x107a53b4 */
  if (!C.zf) goto L_107a53b4;
  /* 107a53b3 int3  */
  x86_unimpl("int3 @ 0x107a53b3");
L_107a53b4:;
  /* 107a53b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a53b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a53b8 jne 0x107a5387 */
  if (!C.zf) goto L_107a5387;
  /* 107a53ba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_107a53c1:;
  /* 107a53c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a53c4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a53c8 jne 0x107a541a */
  if (!C.zf) goto L_107a541a;
  /* 107a53ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a53cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a53d0 push ecx */
  push32((uint32_t)(ECX));
  /* 107a53d1 mov dl, byte ptr [0x107cda91] */
  DL = (r8((uint32_t)(0x107cda91)));
  /* 107a53d7 push edx */
  push32((uint32_t)(EDX));
  /* 107a53d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a53db add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a53de push eax */
  push32((uint32_t)(EAX));
  /* 107a53df call 0x107a50c0 */
  push32(0x107a53e4u); f_107a50c0();
  /* 107a53e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a53e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a53e9 jne 0x107a541a */
  if (!C.zf) goto L_107a541a;
L_107a53eb:;
  /* 107a53eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a53ee add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a53f1 push ecx */
  push32((uint32_t)(ECX));
  /* 107a53f2 push 0x107ca928 */
  push32((uint32_t)(0x107ca928u));
  /* 107a53f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a53f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a53fb push 0 */
  push32((uint32_t)(0x0u));
  /* 107a53fd push 0 */
  push32((uint32_t)(0x0u));
  /* 107a53ff call 0x107a3070 */
  push32(0x107a5404u); f_107a3070();
  /* 107a5404 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5407 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a540a jne 0x107a540d */
  if (!C.zf) goto L_107a540d;
  /* 107a540c int3  */
  x86_unimpl("int3 @ 0x107a540c");
L_107a540d:;
  /* 107a540d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a540f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a5411 jne 0x107a53eb */
  if (!C.zf) goto L_107a53eb;
  /* 107a5413 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_107a541a:;
  /* 107a541a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a541e jne 0x107a5496 */
  if (!C.zf) goto L_107a5496;
  /* 107a5420 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5423 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5427 je 0x107a545c */
  if (C.zf) goto L_107a545c;
L_107a5429:;
  /* 107a5429 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a542c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107a542f push edx */
  push32((uint32_t)(EDX));
  /* 107a5430 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5433 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107a5436 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5437 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a543a push edx */
  push32((uint32_t)(EDX));
  /* 107a543b push 0x107ca908 */
  push32((uint32_t)(0x107ca908u));
  /* 107a5440 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5442 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5444 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5446 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5448 call 0x107a3070 */
  push32(0x107a544du); f_107a3070();
  /* 107a544d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5450 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5453 jne 0x107a5456 */
  if (!C.zf) goto L_107a5456;
  /* 107a5455 int3  */
  x86_unimpl("int3 @ 0x107a5455");
L_107a5456:;
  /* 107a5456 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a545a jne 0x107a5429 */
  if (!C.zf) goto L_107a5429;
L_107a545c:;
  /* 107a545c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a545f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107a5462 push edx */
  push32((uint32_t)(EDX));
  /* 107a5463 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5466 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5469 push eax */
  push32((uint32_t)(EAX));
  /* 107a546a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a546d push ecx */
  push32((uint32_t)(ECX));
  /* 107a546e push 0x107ca8dc */
  push32((uint32_t)(0x107ca8dcu));
  /* 107a5473 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5475 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5477 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5479 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a547b call 0x107a3070 */
  push32(0x107a5480u); f_107a3070();
  /* 107a5480 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5483 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5486 jne 0x107a5489 */
  if (!C.zf) goto L_107a5489;
  /* 107a5488 int3  */
  x86_unimpl("int3 @ 0x107a5488");
L_107a5489:;
  /* 107a5489 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a548b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a548d jne 0x107a545c */
  if (!C.zf) goto L_107a545c;
  /* 107a548f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107a5496:;
  /* 107a5496 jmp 0x107a52a3 */
  goto L_107a52a3;
L_107a549b:;
  /* 107a549b push 9 */
  push32((uint32_t)(0x9u));
  /* 107a549d call 0x107a7a50 */
  push32(0x107a54a2u); f_107a7a50();
  /* 107a54a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a54a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107a54a8:;
  /* 107a54a8 pop edi */
  EDI = (pop32());
  /* 107a54a9 pop esi */
  ESI = (pop32());
  /* 107a54aa pop ebx */
  EBX = (pop32());
  /* 107a54ab mov esp, ebp */
  ESP = (EBP);
  /* 107a54ad pop ebp */
  EBP = (pop32());
  /* 107a54ae ret  */
  ESPCHK(0x107a5150u, _esp0);
  ESP += 4; return;
}

/* FUN_100054c0 @ 0x107a54c0 (34 bytes, 13 insns) */
void f_107a54c0(void) {
  FTRACE(0x107a54c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a54c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a54c1 mov ebp, esp */
  EBP = (ESP);
  /* 107a54c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a54c4 mov eax, dword ptr [0x107cda84] */
  EAX = (r32((uint32_t)(0x107cda84)));
  /* 107a54c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a54cc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a54d0 je 0x107a54db */
  if (C.zf) goto L_107a54db;
  /* 107a54d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a54d5 mov dword ptr [0x107cda84], ecx */
  w32((uint32_t)(0x107cda84), (ECX));
L_107a54db:;
  /* 107a54db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a54de mov esp, ebp */
  ESP = (EBP);
  /* 107a54e0 pop ebp */
  EBP = (pop32());
  /* 107a54e1 ret  */
  ESPCHK(0x107a54c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054f0 @ 0x107a54f0 (103 bytes, 38 insns) */
void f_107a54f0(void) {
  FTRACE(0x107a54f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a54f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a54f1 mov ebp, esp */
  EBP = (ESP);
  /* 107a54f3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a54f4 mov eax, dword ptr [0x107cda84] */
  EAX = (r32((uint32_t)(0x107cda84)));
  /* 107a54f9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 107a54fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a54fe jne 0x107a5502 */
  if (!C.zf) goto L_107a5502;
  /* 107a5500 jmp 0x107a5553 */
  goto L_107a5553;
L_107a5502:;
  /* 107a5502 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a5504 call 0x107a79b0 */
  push32(0x107a5509u); f_107a79b0();
  /* 107a5509 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a550c mov ecx, dword ptr [0x107cf580] */
  ECX = (r32((uint32_t)(0x107cf580)));
  /* 107a5512 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a5515 jmp 0x107a551f */
  goto L_107a551f;
L_107a5517:;
  /* 107a5517 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a551a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a551c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a551f:;
  /* 107a551f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5523 je 0x107a5549 */
  if (C.zf) goto L_107a5549;
  /* 107a5525 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5528 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107a552b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a5531 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5534 jne 0x107a5547 */
  if (!C.zf) goto L_107a5547;
  /* 107a5536 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a5539 push eax */
  push32((uint32_t)(EAX));
  /* 107a553a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a553d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5540 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5541 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x107a5544u);
  /* 107a5544 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a5547:;
  /* 107a5547 jmp 0x107a5517 */
  goto L_107a5517;
L_107a5549:;
  /* 107a5549 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a554b call 0x107a7a50 */
  push32(0x107a5550u); f_107a7a50();
  /* 107a5550 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a5553:;
  /* 107a5553 mov esp, ebp */
  ESP = (EBP);
  /* 107a5555 pop ebp */
  EBP = (pop32());
  /* 107a5556 ret  */
  ESPCHK(0x107a54f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x107a5560 (75 bytes, 28 insns) */
void f_107a5560(void) {
  FTRACE(0x107a5560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a5560 push ebp */
  push32((uint32_t)(EBP));
  /* 107a5561 mov ebp, esp */
  EBP = (ESP);
  /* 107a5563 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5564 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5568 je 0x107a559d */
  if (C.zf) goto L_107a559d;
  /* 107a556a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a556d push eax */
  push32((uint32_t)(EAX));
  /* 107a556e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5571 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5572 call dword ptr [0x107d234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d234c))), 0x107a5578u);
  /* 107a5578 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a557a jne 0x107a559d */
  if (!C.zf) goto L_107a559d;
  /* 107a557c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5580 je 0x107a5594 */
  if (C.zf) goto L_107a5594;
  /* 107a5582 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a5585 push edx */
  push32((uint32_t)(EDX));
  /* 107a5586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5589 push eax */
  push32((uint32_t)(EAX));
  /* 107a558a call dword ptr [0x107d2348] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2348))), 0x107a5590u);
  /* 107a5590 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5592 jne 0x107a559d */
  if (!C.zf) goto L_107a559d;
L_107a5594:;
  /* 107a5594 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107a559b jmp 0x107a55a4 */
  goto L_107a55a4;
L_107a559d:;
  /* 107a559d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107a55a4:;
  /* 107a55a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a55a7 mov esp, ebp */
  ESP = (EBP);
  /* 107a55a9 pop ebp */
  EBP = (pop32());
  /* 107a55aa ret  */
  ESPCHK(0x107a5560u, _esp0);
  ESP += 4; return;
}

/* FUN_100055b0 @ 0x107a55b0 (134 bytes, 50 insns) */
void f_107a55b0(void) {
  FTRACE(0x107a55b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a55b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a55b1 mov ebp, esp */
  EBP = (ESP);
  /* 107a55b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a55b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a55b8 jne 0x107a55be */
  if (!C.zf) goto L_107a55be;
  /* 107a55ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a55bc jmp 0x107a5632 */
  goto L_107a5632;
L_107a55be:;
  /* 107a55be push 1 */
  push32((uint32_t)(0x1u));
  /* 107a55c0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 107a55c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a55c5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a55c8 push eax */
  push32((uint32_t)(EAX));
  /* 107a55c9 call 0x107a5560 */
  push32(0x107a55ceu); f_107a5560();
  /* 107a55ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a55d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a55d3 jne 0x107a55d9 */
  if (!C.zf) goto L_107a55d9;
  /* 107a55d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a55d7 jmp 0x107a5632 */
  goto L_107a5632;
L_107a55d9:;
  /* 107a55d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a55dc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a55df push ecx */
  push32((uint32_t)(ECX));
  /* 107a55e0 call 0x107a82b0 */
  push32(0x107a55e5u); f_107a82b0();
  /* 107a55e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a55e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a55eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a55ef je 0x107a5606 */
  if (C.zf) goto L_107a5606;
  /* 107a55f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a55f4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a55f7 push edx */
  push32((uint32_t)(EDX));
  /* 107a55f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a55fb push eax */
  push32((uint32_t)(EAX));
  /* 107a55fc call 0x107a8310 */
  push32(0x107a5601u); f_107a8310();
  /* 107a5601 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5604 jmp 0x107a5632 */
  goto L_107a5632;
L_107a5606:;
  /* 107a5606 mov ecx, dword ptr [0x107cf534] */
  ECX = (r32((uint32_t)(0x107cf534)));
  /* 107a560c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 107a5612 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a5614 je 0x107a561d */
  if (C.zf) goto L_107a561d;
  /* 107a5616 mov eax, 1 */
  EAX = (0x1u);
  /* 107a561b jmp 0x107a5632 */
  goto L_107a5632;
L_107a561d:;
  /* 107a561d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5620 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a5623 push edx */
  push32((uint32_t)(EDX));
  /* 107a5624 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5626 mov eax, dword ptr [0x107d0ecc] */
  EAX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a562b push eax */
  push32((uint32_t)(EAX));
  /* 107a562c call dword ptr [0x107d2350] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2350))), 0x107a5632u);
L_107a5632:;
  /* 107a5632 mov esp, ebp */
  ESP = (EBP);
  /* 107a5634 pop ebp */
  EBP = (pop32());
  /* 107a5635 ret  */
  ESPCHK(0x107a55b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005640 @ 0x107a5640 (227 bytes, 80 insns) */
void f_107a5640(void) {
  FTRACE(0x107a5640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a5640 push ebp */
  push32((uint32_t)(EBP));
  /* 107a5641 mov ebp, esp */
  EBP = (ESP);
  /* 107a5643 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5647 push eax */
  push32((uint32_t)(EAX));
  /* 107a5648 call 0x107a55b0 */
  push32(0x107a564du); f_107a55b0();
  /* 107a564d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5650 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5652 jne 0x107a565b */
  if (!C.zf) goto L_107a565b;
  /* 107a5654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5656 jmp 0x107a571f */
  goto L_107a571f;
L_107a565b:;
  /* 107a565b push 9 */
  push32((uint32_t)(0x9u));
  /* 107a565d call 0x107a79b0 */
  push32(0x107a5662u); f_107a79b0();
  /* 107a5662 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5665 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5668 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a566b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a566e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5671 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a5674 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a5679 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a567c je 0x107a56a0 */
  if (C.zf) goto L_107a56a0;
  /* 107a567e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5681 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5685 je 0x107a56a0 */
  if (C.zf) goto L_107a56a0;
  /* 107a5687 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a568a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a568d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a5692 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5695 je 0x107a56a0 */
  if (C.zf) goto L_107a56a0;
  /* 107a5697 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a569a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a569e jne 0x107a5713 */
  if (!C.zf) goto L_107a5713;
L_107a56a0:;
  /* 107a56a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a56a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a56a5 push edx */
  push32((uint32_t)(EDX));
  /* 107a56a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a56a9 push eax */
  push32((uint32_t)(EAX));
  /* 107a56aa call 0x107a5560 */
  push32(0x107a56afu); f_107a5560();
  /* 107a56af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a56b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a56b4 je 0x107a5713 */
  if (C.zf) goto L_107a5713;
  /* 107a56b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a56b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107a56bc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a56bf jne 0x107a5713 */
  if (!C.zf) goto L_107a5713;
  /* 107a56c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a56c4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 107a56c7 cmp ecx, dword ptr [0x107cda88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107cda88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a56cd jg 0x107a5713 */
  if ((!C.zf&&C.sf==C.of)) goto L_107a5713;
  /* 107a56cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a56d3 je 0x107a56e0 */
  if (C.zf) goto L_107a56e0;
  /* 107a56d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a56d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a56db mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 107a56de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107a56e0:;
  /* 107a56e0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a56e4 je 0x107a56f1 */
  if (C.zf) goto L_107a56f1;
  /* 107a56e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a56e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a56ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107a56ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107a56f1:;
  /* 107a56f1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a56f5 je 0x107a5702 */
  if (C.zf) goto L_107a5702;
  /* 107a56f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a56fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a56fd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107a5700 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107a5702:;
  /* 107a5702 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a5704 call 0x107a7a50 */
  push32(0x107a5709u); f_107a7a50();
  /* 107a5709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a570c mov eax, 1 */
  EAX = (0x1u);
  /* 107a5711 jmp 0x107a571f */
  goto L_107a571f;
L_107a5713:;
  /* 107a5713 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a5715 call 0x107a7a50 */
  push32(0x107a571au); f_107a7a50();
  /* 107a571a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a571d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107a571f:;
  /* 107a571f mov esp, ebp */
  ESP = (EBP);
  /* 107a5721 pop ebp */
  EBP = (pop32());
  /* 107a5722 ret  */
  ESPCHK(0x107a5640u, _esp0);
  ESP += 4; return;
}

/* FUN_10005730 @ 0x107a5730 (28 bytes, 11 insns) */
void f_107a5730(void) {
  FTRACE(0x107a5730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a5730 push ebp */
  push32((uint32_t)(EBP));
  /* 107a5731 mov ebp, esp */
  EBP = (ESP);
  /* 107a5733 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5734 mov eax, dword ptr [0x107d0ed8] */
  EAX = (r32((uint32_t)(0x107d0ed8)));
  /* 107a5739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a573c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a573f mov dword ptr [0x107d0ed8], ecx */
  w32((uint32_t)(0x107d0ed8), (ECX));
  /* 107a5745 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5748 mov esp, ebp */
  ESP = (EBP);
  /* 107a574a pop ebp */
  EBP = (pop32());
  /* 107a574b ret  */
  ESPCHK(0x107a5730u, _esp0);
  ESP += 4; return;
}

/* FUN_10005750 @ 0x107a5750 (362 bytes, 116 insns) */
void f_107a5750(void) {
  FTRACE(0x107a5750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a5750 push ebp */
  push32((uint32_t)(EBP));
  /* 107a5751 mov ebp, esp */
  EBP = (ESP);
  /* 107a5753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a5756 push ebx */
  push32((uint32_t)(EBX));
  /* 107a5757 push esi */
  push32((uint32_t)(ESI));
  /* 107a5758 push edi */
  push32((uint32_t)(EDI));
  /* 107a5759 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a575d jne 0x107a578a */
  if (!C.zf) goto L_107a578a;
L_107a575f:;
  /* 107a575f push 0x107caa3c */
  push32((uint32_t)(0x107caa3cu));
  /* 107a5764 push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a5769 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a576b push 0 */
  push32((uint32_t)(0x0u));
  /* 107a576d push 0 */
  push32((uint32_t)(0x0u));
  /* 107a576f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5771 call 0x107a3070 */
  push32(0x107a5776u); f_107a3070();
  /* 107a5776 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5779 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a577c jne 0x107a577f */
  if (!C.zf) goto L_107a577f;
  /* 107a577e int3  */
  x86_unimpl("int3 @ 0x107a577e");
L_107a577f:;
  /* 107a577f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5783 jne 0x107a575f */
  if (!C.zf) goto L_107a575f;
  /* 107a5785 jmp 0x107a58b3 */
  goto L_107a58b3;
L_107a578a:;
  /* 107a578a push 9 */
  push32((uint32_t)(0x9u));
  /* 107a578c call 0x107a79b0 */
  push32(0x107a5791u); f_107a79b0();
  /* 107a5791 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5794 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5797 mov edx, dword ptr [0x107cf580] */
  EDX = (r32((uint32_t)(0x107cf580)));
  /* 107a579d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107a579f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107a57a6 jmp 0x107a57b1 */
  goto L_107a57b1;
L_107a57a8:;
  /* 107a57a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a57ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a57ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a57b1:;
  /* 107a57b1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a57b5 jge 0x107a57d5 */
  if ((C.sf==C.of)) goto L_107a57d5;
  /* 107a57b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a57ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a57bd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 107a57c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a57c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a57cb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 107a57d3 jmp 0x107a57a8 */
  goto L_107a57a8;
L_107a57d5:;
  /* 107a57d5 mov edx, dword ptr [0x107cf580] */
  EDX = (r32((uint32_t)(0x107cf580)));
  /* 107a57db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107a57de jmp 0x107a57e8 */
  goto L_107a57e8;
L_107a57e0:;
  /* 107a57e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a57e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a57e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107a57e8:;
  /* 107a57e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a57ec je 0x107a5891 */
  if (C.zf) goto L_107a5891;
  /* 107a57f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a57f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a57f8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a57fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a57ff jl 0x107a5867 */
  if ((C.sf!=C.of)) goto L_107a5867;
  /* 107a5801 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5804 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107a5807 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a580d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5810 jge 0x107a5867 */
  if ((C.sf==C.of)) goto L_107a5867;
  /* 107a5812 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5815 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107a5818 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a581e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5821 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 107a5825 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5828 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a582b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107a582e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a5834 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5837 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 107a583b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a583e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a5841 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a5846 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5849 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 107a584d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5850 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5853 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5856 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 107a5859 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a585e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5861 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 107a5865 jmp 0x107a588c */
  goto L_107a588c;
L_107a5867:;
  /* 107a5867 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a586a push edx */
  push32((uint32_t)(EDX));
  /* 107a586b push 0x107caa18 */
  push32((uint32_t)(0x107caa18u));
  /* 107a5870 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5872 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5874 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5876 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5878 call 0x107a3070 */
  push32(0x107a587du); f_107a3070();
  /* 107a587d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5880 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5883 jne 0x107a5886 */
  if (!C.zf) goto L_107a5886;
  /* 107a5885 int3  */
  x86_unimpl("int3 @ 0x107a5885");
L_107a5886:;
  /* 107a5886 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a588a jne 0x107a5867 */
  if (!C.zf) goto L_107a5867;
L_107a588c:;
  /* 107a588c jmp 0x107a57e0 */
  goto L_107a57e0;
L_107a5891:;
  /* 107a5891 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5894 mov edx, dword ptr [0x107cf588] */
  EDX = (r32((uint32_t)(0x107cf588)));
  /* 107a589a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 107a589d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a58a0 mov ecx, dword ptr [0x107cf57c] */
  ECX = (r32((uint32_t)(0x107cf57c)));
  /* 107a58a6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 107a58a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a58ab call 0x107a7a50 */
  push32(0x107a58b0u); f_107a7a50();
  /* 107a58b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a58b3:;
  /* 107a58b3 pop edi */
  EDI = (pop32());
  /* 107a58b4 pop esi */
  ESI = (pop32());
  /* 107a58b5 pop ebx */
  EBX = (pop32());
  /* 107a58b6 mov esp, ebp */
  ESP = (EBP);
  /* 107a58b8 pop ebp */
  EBP = (pop32());
  /* 107a58b9 ret  */
  ESPCHK(0x107a5750u, _esp0);
  ESP += 4; return;
}

/* FUN_100058c0 @ 0x107a58c0 (291 bytes, 95 insns) */
void f_107a58c0(void) {
  FTRACE(0x107a58c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a58c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a58c1 mov ebp, esp */
  EBP = (ESP);
  /* 107a58c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a58c6 push ebx */
  push32((uint32_t)(EBX));
  /* 107a58c7 push esi */
  push32((uint32_t)(ESI));
  /* 107a58c8 push edi */
  push32((uint32_t)(EDI));
  /* 107a58c9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107a58d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a58d4 je 0x107a58e2 */
  if (C.zf) goto L_107a58e2;
  /* 107a58d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a58da je 0x107a58e2 */
  if (C.zf) goto L_107a58e2;
  /* 107a58dc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a58e0 jne 0x107a5910 */
  if (!C.zf) goto L_107a5910;
L_107a58e2:;
  /* 107a58e2 push 0x107caa64 */
  push32((uint32_t)(0x107caa64u));
  /* 107a58e7 push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a58ec push 0 */
  push32((uint32_t)(0x0u));
  /* 107a58ee push 0 */
  push32((uint32_t)(0x0u));
  /* 107a58f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a58f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a58f4 call 0x107a3070 */
  push32(0x107a58f9u); f_107a3070();
  /* 107a58f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a58fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a58ff jne 0x107a5902 */
  if (!C.zf) goto L_107a5902;
  /* 107a5901 int3  */
  x86_unimpl("int3 @ 0x107a5901");
L_107a5902:;
  /* 107a5902 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5906 jne 0x107a58e2 */
  if (!C.zf) goto L_107a58e2;
  /* 107a5908 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a590b jmp 0x107a59dc */
  goto L_107a59dc;
L_107a5910:;
  /* 107a5910 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107a5917 jmp 0x107a5922 */
  goto L_107a5922;
L_107a5919:;
  /* 107a5919 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a591c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a591f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107a5922:;
  /* 107a5922 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5926 jge 0x107a59ac */
  if ((C.sf==C.of)) goto L_107a59ac;
  /* 107a592c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a592f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a5932 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5935 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107a5938 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 107a593c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a5940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5943 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5946 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 107a594a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a594d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a5950 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5953 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107a5956 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 107a595a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a595e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5961 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5964 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 107a5968 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a596b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a596e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5973 jne 0x107a5982 */
  if (!C.zf) goto L_107a5982;
  /* 107a5975 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5978 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a597b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5980 je 0x107a59a7 */
  if (C.zf) goto L_107a59a7;
L_107a5982:;
  /* 107a5982 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5986 je 0x107a59a7 */
  if (C.zf) goto L_107a59a7;
  /* 107a5988 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a598c jne 0x107a59a0 */
  if (!C.zf) goto L_107a59a0;
  /* 107a598e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5992 jne 0x107a59a7 */
  if (!C.zf) goto L_107a59a7;
  /* 107a5994 mov eax, dword ptr [0x107cda84] */
  EAX = (r32((uint32_t)(0x107cda84)));
  /* 107a5999 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 107a599c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a599e je 0x107a59a7 */
  if (C.zf) goto L_107a59a7;
L_107a59a0:;
  /* 107a59a0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_107a59a7:;
  /* 107a59a7 jmp 0x107a5919 */
  goto L_107a5919;
L_107a59ac:;
  /* 107a59ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a59af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a59b2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 107a59b5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a59b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a59bb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 107a59be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a59c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a59c4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 107a59c7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a59ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a59cd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 107a59d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a59d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107a59d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107a59dc:;
  /* 107a59dc pop edi */
  EDI = (pop32());
  /* 107a59dd pop esi */
  ESI = (pop32());
  /* 107a59de pop ebx */
  EBX = (pop32());
  /* 107a59df mov esp, ebp */
  ESP = (EBP);
  /* 107a59e1 pop ebp */
  EBP = (pop32());
  /* 107a59e2 ret  */
  ESPCHK(0x107a58c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059f0 @ 0x107a59f0 (697 bytes, 253 insns) */
void f_107a59f0(void) {
  FTRACE(0x107a59f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a59f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a59f1 mov ebp, esp */
  EBP = (ESP);
  /* 107a59f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a59f6 push ebx */
  push32((uint32_t)(EBX));
  /* 107a59f7 push esi */
  push32((uint32_t)(ESI));
  /* 107a59f8 push edi */
  push32((uint32_t)(EDI));
  /* 107a59f9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107a5a00 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a5a02 call 0x107a79b0 */
  push32(0x107a5a07u); f_107a79b0();
  /* 107a5a07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a5a0a:;
  /* 107a5a0a push 0x107cab5c */
  push32((uint32_t)(0x107cab5cu));
  /* 107a5a0f push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a5a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5a1c call 0x107a3070 */
  push32(0x107a5a21u); f_107a3070();
  /* 107a5a21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5a24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5a27 jne 0x107a5a2a */
  if (!C.zf) goto L_107a5a2a;
  /* 107a5a29 int3  */
  x86_unimpl("int3 @ 0x107a5a29");
L_107a5a2a:;
  /* 107a5a2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5a2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5a2e jne 0x107a5a0a */
  if (!C.zf) goto L_107a5a0a;
  /* 107a5a30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5a34 je 0x107a5a3e */
  if (C.zf) goto L_107a5a3e;
  /* 107a5a36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5a39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a5a3b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107a5a3e:;
  /* 107a5a3e mov eax, dword ptr [0x107cf580] */
  EAX = (r32((uint32_t)(0x107cf580)));
  /* 107a5a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a5a46 jmp 0x107a5a50 */
  goto L_107a5a50;
L_107a5a48:;
  /* 107a5a48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5a4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a5a4d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107a5a50:;
  /* 107a5a50 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5a54 je 0x107a5c72 */
  if (C.zf) goto L_107a5c72;
  /* 107a5a5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5a5d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5a60 je 0x107a5c72 */
  if (C.zf) goto L_107a5c72;
  /* 107a5a66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5a69 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107a5a6c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a5a72 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5a75 je 0x107a5aa4 */
  if (C.zf) goto L_107a5aa4;
  /* 107a5a77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5a7a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107a5a7d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a5a83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a5a85 je 0x107a5aa4 */
  if (C.zf) goto L_107a5aa4;
  /* 107a5a87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5a8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a5a8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a5a92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5a95 jne 0x107a5aa9 */
  if (!C.zf) goto L_107a5aa9;
  /* 107a5a97 mov ecx, dword ptr [0x107cda84] */
  ECX = (r32((uint32_t)(0x107cda84)));
  /* 107a5a9d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 107a5aa0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a5aa2 jne 0x107a5aa9 */
  if (!C.zf) goto L_107a5aa9;
L_107a5aa4:;
  /* 107a5aa4 jmp 0x107a5c6d */
  goto L_107a5c6d;
L_107a5aa9:;
  /* 107a5aa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5aac cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5ab0 je 0x107a5b22 */
  if (C.zf) goto L_107a5b22;
  /* 107a5ab2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ab4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a5ab6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5ab9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107a5abc push ecx */
  push32((uint32_t)(ECX));
  /* 107a5abd call 0x107a5560 */
  push32(0x107a5ac2u); f_107a5560();
  /* 107a5ac2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5ac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5ac7 jne 0x107a5af3 */
  if (!C.zf) goto L_107a5af3;
L_107a5ac9:;
  /* 107a5ac9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5acc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107a5acf push eax */
  push32((uint32_t)(EAX));
  /* 107a5ad0 push 0x107cab48 */
  push32((uint32_t)(0x107cab48u));
  /* 107a5ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5adb push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5add call 0x107a3070 */
  push32(0x107a5ae2u); f_107a3070();
  /* 107a5ae2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5ae5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5ae8 jne 0x107a5aeb */
  if (!C.zf) goto L_107a5aeb;
  /* 107a5aea int3  */
  x86_unimpl("int3 @ 0x107a5aea");
L_107a5aeb:;
  /* 107a5aeb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a5aed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a5aef jne 0x107a5ac9 */
  if (!C.zf) goto L_107a5ac9;
  /* 107a5af1 jmp 0x107a5b22 */
  goto L_107a5b22;
L_107a5af3:;
  /* 107a5af3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5af6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107a5af9 push eax */
  push32((uint32_t)(EAX));
  /* 107a5afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5afd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107a5b00 push edx */
  push32((uint32_t)(EDX));
  /* 107a5b01 push 0x107cab3c */
  push32((uint32_t)(0x107cab3cu));
  /* 107a5b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b0e call 0x107a3070 */
  push32(0x107a5b13u); f_107a3070();
  /* 107a5b13 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5b16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5b19 jne 0x107a5b1c */
  if (!C.zf) goto L_107a5b1c;
  /* 107a5b1b int3  */
  x86_unimpl("int3 @ 0x107a5b1b");
L_107a5b1c:;
  /* 107a5b1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5b1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5b20 jne 0x107a5af3 */
  if (!C.zf) goto L_107a5af3;
L_107a5b22:;
  /* 107a5b22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5b25 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107a5b28 push edx */
  push32((uint32_t)(EDX));
  /* 107a5b29 push 0x107cab34 */
  push32((uint32_t)(0x107cab34u));
  /* 107a5b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b30 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b36 call 0x107a3070 */
  push32(0x107a5b3bu); f_107a3070();
  /* 107a5b3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5b3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5b41 jne 0x107a5b44 */
  if (!C.zf) goto L_107a5b44;
  /* 107a5b43 int3  */
  x86_unimpl("int3 @ 0x107a5b43");
L_107a5b44:;
  /* 107a5b44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5b46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5b48 jne 0x107a5b22 */
  if (!C.zf) goto L_107a5b22;
  /* 107a5b4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5b4d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107a5b50 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a5b56 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5b59 jne 0x107a5bcc */
  if (!C.zf) goto L_107a5bcc;
L_107a5b5b:;
  /* 107a5b5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5b5e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a5b61 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5b62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5b65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a5b68 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107a5b6b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a5b70 push eax */
  push32((uint32_t)(EAX));
  /* 107a5b71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5b74 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5b77 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5b78 push 0x107cab00 */
  push32((uint32_t)(0x107cab00u));
  /* 107a5b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5b85 call 0x107a3070 */
  push32(0x107a5b8au); f_107a3070();
  /* 107a5b8a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5b8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5b90 jne 0x107a5b93 */
  if (!C.zf) goto L_107a5b93;
  /* 107a5b92 int3  */
  x86_unimpl("int3 @ 0x107a5b92");
L_107a5b93:;
  /* 107a5b93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a5b95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a5b97 jne 0x107a5b5b */
  if (!C.zf) goto L_107a5b5b;
  /* 107a5b99 cmp dword ptr [0x107d0ed8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d0ed8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5ba0 je 0x107a5bbb */
  if (C.zf) goto L_107a5bbb;
  /* 107a5ba2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5ba5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a5ba8 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5ba9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5bac add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5baf push edx */
  push32((uint32_t)(EDX));
  /* 107a5bb0 call dword ptr [0x107d0ed8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d0ed8))), 0x107a5bb6u);
  /* 107a5bb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5bb9 jmp 0x107a5bc7 */
  goto L_107a5bc7;
L_107a5bbb:;
  /* 107a5bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5bbe push eax */
  push32((uint32_t)(EAX));
  /* 107a5bbf call 0x107a5cb0 */
  push32(0x107a5bc4u); f_107a5cb0();
  /* 107a5bc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a5bc7:;
  /* 107a5bc7 jmp 0x107a5c6d */
  goto L_107a5c6d;
L_107a5bcc:;
  /* 107a5bcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5bcf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5bd3 jne 0x107a5c12 */
  if (!C.zf) goto L_107a5c12;
L_107a5bd5:;
  /* 107a5bd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5bd8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a5bdb push eax */
  push32((uint32_t)(EAX));
  /* 107a5bdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5bdf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5be2 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5be3 push 0x107caad8 */
  push32((uint32_t)(0x107caad8u));
  /* 107a5be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5bea push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5bec push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5bee push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5bf0 call 0x107a3070 */
  push32(0x107a5bf5u); f_107a3070();
  /* 107a5bf5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5bf8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5bfb jne 0x107a5bfe */
  if (!C.zf) goto L_107a5bfe;
  /* 107a5bfd int3  */
  x86_unimpl("int3 @ 0x107a5bfd");
L_107a5bfe:;
  /* 107a5bfe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a5c00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a5c02 jne 0x107a5bd5 */
  if (!C.zf) goto L_107a5bd5;
  /* 107a5c04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5c07 push eax */
  push32((uint32_t)(EAX));
  /* 107a5c08 call 0x107a5cb0 */
  push32(0x107a5c0du); f_107a5cb0();
  /* 107a5c0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5c10 jmp 0x107a5c6d */
  goto L_107a5c6d;
L_107a5c12:;
  /* 107a5c12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5c15 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107a5c18 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a5c1e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5c21 jne 0x107a5c6d */
  if (!C.zf) goto L_107a5c6d;
L_107a5c23:;
  /* 107a5c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5c26 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107a5c29 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5c2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5c2d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107a5c30 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107a5c33 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a5c38 push eax */
  push32((uint32_t)(EAX));
  /* 107a5c39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5c3c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5c3f push ecx */
  push32((uint32_t)(ECX));
  /* 107a5c40 push 0x107caaa4 */
  push32((uint32_t)(0x107caaa4u));
  /* 107a5c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5c4b push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5c4d call 0x107a3070 */
  push32(0x107a5c52u); f_107a3070();
  /* 107a5c52 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5c55 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5c58 jne 0x107a5c5b */
  if (!C.zf) goto L_107a5c5b;
  /* 107a5c5a int3  */
  x86_unimpl("int3 @ 0x107a5c5a");
L_107a5c5b:;
  /* 107a5c5b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a5c5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a5c5f jne 0x107a5c23 */
  if (!C.zf) goto L_107a5c23;
  /* 107a5c61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5c64 push eax */
  push32((uint32_t)(EAX));
  /* 107a5c65 call 0x107a5cb0 */
  push32(0x107a5c6au); f_107a5cb0();
  /* 107a5c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a5c6d:;
  /* 107a5c6d jmp 0x107a5a48 */
  goto L_107a5a48;
L_107a5c72:;
  /* 107a5c72 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a5c74 call 0x107a7a50 */
  push32(0x107a5c79u); f_107a7a50();
  /* 107a5c79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a5c7c:;
  /* 107a5c7c push 0x107caa8c */
  push32((uint32_t)(0x107caa8cu));
  /* 107a5c81 push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a5c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5c8e call 0x107a3070 */
  push32(0x107a5c93u); f_107a3070();
  /* 107a5c93 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5c96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5c99 jne 0x107a5c9c */
  if (!C.zf) goto L_107a5c9c;
  /* 107a5c9b int3  */
  x86_unimpl("int3 @ 0x107a5c9b");
L_107a5c9c:;
  /* 107a5c9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a5c9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a5ca0 jne 0x107a5c7c */
  if (!C.zf) goto L_107a5c7c;
  /* 107a5ca2 pop edi */
  EDI = (pop32());
  /* 107a5ca3 pop esi */
  ESI = (pop32());
  /* 107a5ca4 pop ebx */
  EBX = (pop32());
  /* 107a5ca5 mov esp, ebp */
  ESP = (EBP);
  /* 107a5ca7 pop ebp */
  EBP = (pop32());
  /* 107a5ca8 ret  */
  ESPCHK(0x107a59f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cb0 @ 0x107a5cb0 (276 bytes, 89 insns) */
void f_107a5cb0(void) {
  FTRACE(0x107a5cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a5cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a5cb1 mov ebp, esp */
  EBP = (ESP);
  /* 107a5cb3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a5cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 107a5cb7 push esi */
  push32((uint32_t)(ESI));
  /* 107a5cb8 push edi */
  push32((uint32_t)(EDI));
  /* 107a5cb9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 107a5cc0 jmp 0x107a5ccb */
  goto L_107a5ccb;
L_107a5cc2:;
  /* 107a5cc2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107a5cc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5cc8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_107a5ccb:;
  /* 107a5ccb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5cce cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5cd2 jge 0x107a5cdf */
  if ((C.sf==C.of)) goto L_107a5cdf;
  /* 107a5cd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5cd7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107a5cda mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 107a5cdd jmp 0x107a5ce6 */
  goto L_107a5ce6;
L_107a5cdf:;
  /* 107a5cdf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_107a5ce6:;
  /* 107a5ce6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107a5ce9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5cec jge 0x107a5d8c */
  if ((C.sf==C.of)) goto L_107a5d8c;
  /* 107a5cf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5cf5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5cf8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 107a5cfb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 107a5cfe cmp dword ptr [0x107cdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5d05 jle 0x107a5d23 */
  if ((C.zf||C.sf!=C.of)) goto L_107a5d23;
  /* 107a5d07 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 107a5d0c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a5d0f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a5d15 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5d16 call 0x107a9fc0 */
  push32(0x107a5d1bu); f_107a9fc0();
  /* 107a5d1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5d1e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 107a5d21 jmp 0x107a5d40 */
  goto L_107a5d40;
L_107a5d23:;
  /* 107a5d23 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a5d26 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a5d2c mov eax, dword ptr [0x107cdc98] */
  EAX = (r32((uint32_t)(0x107cdc98)));
  /* 107a5d31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a5d33 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 107a5d37 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 107a5d3d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_107a5d40:;
  /* 107a5d40 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5d44 je 0x107a5d54 */
  if (C.zf) goto L_107a5d54;
  /* 107a5d46 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a5d49 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a5d4f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 107a5d52 jmp 0x107a5d5b */
  goto L_107a5d5b;
L_107a5d54:;
  /* 107a5d54 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_107a5d5b:;
  /* 107a5d5b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107a5d5e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 107a5d61 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 107a5d65 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107a5d68 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a5d6e push edx */
  push32((uint32_t)(EDX));
  /* 107a5d6f push 0x107cab80 */
  push32((uint32_t)(0x107cab80u));
  /* 107a5d74 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107a5d77 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a5d7a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 107a5d7e push ecx */
  push32((uint32_t)(ECX));
  /* 107a5d7f call 0x107a9ec0 */
  push32(0x107a5d84u); f_107a9ec0();
  /* 107a5d84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5d87 jmp 0x107a5cc2 */
  goto L_107a5cc2;
L_107a5d8c:;
  /* 107a5d8c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107a5d8f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_107a5d94:;
  /* 107a5d94 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 107a5d97 push eax */
  push32((uint32_t)(EAX));
  /* 107a5d98 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 107a5d9b push ecx */
  push32((uint32_t)(ECX));
  /* 107a5d9c push 0x107cab70 */
  push32((uint32_t)(0x107cab70u));
  /* 107a5da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5da9 call 0x107a3070 */
  push32(0x107a5daeu); f_107a3070();
  /* 107a5dae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5db1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5db4 jne 0x107a5db7 */
  if (!C.zf) goto L_107a5db7;
  /* 107a5db6 int3  */
  x86_unimpl("int3 @ 0x107a5db6");
L_107a5db7:;
  /* 107a5db7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a5db9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a5dbb jne 0x107a5d94 */
  if (!C.zf) goto L_107a5d94;
  /* 107a5dbd pop edi */
  EDI = (pop32());
  /* 107a5dbe pop esi */
  ESI = (pop32());
  /* 107a5dbf pop ebx */
  EBX = (pop32());
  /* 107a5dc0 mov esp, ebp */
  ESP = (EBP);
  /* 107a5dc2 pop ebp */
  EBP = (pop32());
  /* 107a5dc3 ret  */
  ESPCHK(0x107a5cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x107a5dd0 (116 bytes, 46 insns) */
void f_107a5dd0(void) {
  FTRACE(0x107a5dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a5dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a5dd1 mov ebp, esp */
  EBP = (ESP);
  /* 107a5dd3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a5dd6 push ebx */
  push32((uint32_t)(EBX));
  /* 107a5dd7 push esi */
  push32((uint32_t)(ESI));
  /* 107a5dd8 push edi */
  push32((uint32_t)(EDI));
  /* 107a5dd9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 107a5ddc push eax */
  push32((uint32_t)(EAX));
  /* 107a5ddd call 0x107a5750 */
  push32(0x107a5de2u); f_107a5750();
  /* 107a5de2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5de5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5de9 jne 0x107a5e04 */
  if (!C.zf) goto L_107a5e04;
  /* 107a5deb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5def jne 0x107a5e04 */
  if (!C.zf) goto L_107a5e04;
  /* 107a5df1 mov ecx, dword ptr [0x107cda84] */
  ECX = (r32((uint32_t)(0x107cda84)));
  /* 107a5df7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 107a5dfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a5dfc je 0x107a5e3b */
  if (C.zf) goto L_107a5e3b;
  /* 107a5dfe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5e02 je 0x107a5e3b */
  if (C.zf) goto L_107a5e3b;
L_107a5e04:;
  /* 107a5e04 push 0x107cab88 */
  push32((uint32_t)(0x107cab88u));
  /* 107a5e09 push 0x107ca554 */
  push32((uint32_t)(0x107ca554u));
  /* 107a5e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5e16 call 0x107a3070 */
  push32(0x107a5e1bu); f_107a3070();
  /* 107a5e1b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5e1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5e21 jne 0x107a5e24 */
  if (!C.zf) goto L_107a5e24;
  /* 107a5e23 int3  */
  x86_unimpl("int3 @ 0x107a5e23");
L_107a5e24:;
  /* 107a5e24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a5e26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a5e28 jne 0x107a5e04 */
  if (!C.zf) goto L_107a5e04;
  /* 107a5e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5e2c call 0x107a59f0 */
  push32(0x107a5e31u); f_107a59f0();
  /* 107a5e31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5e34 mov eax, 1 */
  EAX = (0x1u);
  /* 107a5e39 jmp 0x107a5e3d */
  goto L_107a5e3d;
L_107a5e3b:;
  /* 107a5e3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107a5e3d:;
  /* 107a5e3d pop edi */
  EDI = (pop32());
  /* 107a5e3e pop esi */
  ESI = (pop32());
  /* 107a5e3f pop ebx */
  EBX = (pop32());
  /* 107a5e40 mov esp, ebp */
  ESP = (EBP);
  /* 107a5e42 pop ebp */
  EBP = (pop32());
  /* 107a5e43 ret  */
  ESPCHK(0x107a5dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e50 @ 0x107a5e50 (197 bytes, 79 insns) */
void f_107a5e50(void) {
  FTRACE(0x107a5e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a5e50 push ebp */
  push32((uint32_t)(EBP));
  /* 107a5e51 mov ebp, esp */
  EBP = (ESP);
  /* 107a5e53 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5e54 push ebx */
  push32((uint32_t)(EBX));
  /* 107a5e55 push esi */
  push32((uint32_t)(ESI));
  /* 107a5e56 push edi */
  push32((uint32_t)(EDI));
  /* 107a5e57 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5e5b jne 0x107a5e62 */
  if (!C.zf) goto L_107a5e62;
  /* 107a5e5d jmp 0x107a5f0e */
  goto L_107a5f0e;
L_107a5e62:;
  /* 107a5e62 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107a5e69 jmp 0x107a5e74 */
  goto L_107a5e74;
L_107a5e6b:;
  /* 107a5e6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5e6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5e71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a5e74:;
  /* 107a5e74 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5e78 jge 0x107a5ebe */
  if ((C.sf==C.of)) goto L_107a5ebe;
L_107a5e7a:;
  /* 107a5e7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5e7d mov edx, dword ptr [ecx*4 + 0x107cda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107cda94)));
  /* 107a5e84 push edx */
  push32((uint32_t)(EDX));
  /* 107a5e85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5e88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5e8b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 107a5e8f push edx */
  push32((uint32_t)(EDX));
  /* 107a5e90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5e93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5e96 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 107a5e9a push edx */
  push32((uint32_t)(EDX));
  /* 107a5e9b push 0x107cabe4 */
  push32((uint32_t)(0x107cabe4u));
  /* 107a5ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ea8 call 0x107a3070 */
  push32(0x107a5eadu); f_107a3070();
  /* 107a5ead add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5eb0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5eb3 jne 0x107a5eb6 */
  if (!C.zf) goto L_107a5eb6;
  /* 107a5eb5 int3  */
  x86_unimpl("int3 @ 0x107a5eb5");
L_107a5eb6:;
  /* 107a5eb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5eba jne 0x107a5e7a */
  if (!C.zf) goto L_107a5e7a;
  /* 107a5ebc jmp 0x107a5e6b */
  goto L_107a5e6b;
L_107a5ebe:;
  /* 107a5ebe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5ec1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 107a5ec4 push edx */
  push32((uint32_t)(EDX));
  /* 107a5ec5 push 0x107cabc0 */
  push32((uint32_t)(0x107cabc0u));
  /* 107a5eca push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ece push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ed2 call 0x107a3070 */
  push32(0x107a5ed7u); f_107a3070();
  /* 107a5ed7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5eda cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5edd jne 0x107a5ee0 */
  if (!C.zf) goto L_107a5ee0;
  /* 107a5edf int3  */
  x86_unimpl("int3 @ 0x107a5edf");
L_107a5ee0:;
  /* 107a5ee0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5ee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5ee4 jne 0x107a5ebe */
  if (!C.zf) goto L_107a5ebe;
L_107a5ee6:;
  /* 107a5ee6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a5ee9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 107a5eec push edx */
  push32((uint32_t)(EDX));
  /* 107a5eed push 0x107caba0 */
  push32((uint32_t)(0x107caba0u));
  /* 107a5ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a5efa call 0x107a3070 */
  push32(0x107a5effu); f_107a3070();
  /* 107a5eff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5f02 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5f05 jne 0x107a5f08 */
  if (!C.zf) goto L_107a5f08;
  /* 107a5f07 int3  */
  x86_unimpl("int3 @ 0x107a5f07");
L_107a5f08:;
  /* 107a5f08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a5f0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5f0c jne 0x107a5ee6 */
  if (!C.zf) goto L_107a5ee6;
L_107a5f0e:;
  /* 107a5f0e pop edi */
  EDI = (pop32());
  /* 107a5f0f pop esi */
  ESI = (pop32());
  /* 107a5f10 pop ebx */
  EBX = (pop32());
  /* 107a5f11 mov esp, ebp */
  ESP = (EBP);
  /* 107a5f13 pop ebp */
  EBP = (pop32());
  /* 107a5f14 ret  */
  ESPCHK(0x107a5e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f20 @ 0x107a5f20 (329 bytes, 102 insns) */
void f_107a5f20(void) {
  FTRACE(0x107a5f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a5f20 push ebp */
  push32((uint32_t)(EBP));
  /* 107a5f21 mov ebp, esp */
  EBP = (ESP);
  /* 107a5f23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a5f26 cmp dword ptr [0x107d1050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d1050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5f2d jne 0x107a5f34 */
  if (!C.zf) goto L_107a5f34;
  /* 107a5f2f call 0x107aa860 */
  push32(0x107a5f34u); f_107aa860();
L_107a5f34:;
  /* 107a5f34 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107a5f3b mov eax, dword ptr [0x107cf51c] */
  EAX = (r32((uint32_t)(0x107cf51c)));
  /* 107a5f40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a5f43:;
  /* 107a5f43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5f46 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107a5f49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a5f4b je 0x107a5f79 */
  if (C.zf) goto L_107a5f79;
  /* 107a5f4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5f50 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107a5f53 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5f56 je 0x107a5f61 */
  if (C.zf) goto L_107a5f61;
  /* 107a5f58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5f5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5f5e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107a5f61:;
  /* 107a5f61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5f64 push eax */
  push32((uint32_t)(EAX));
  /* 107a5f65 call 0x107a6de0 */
  push32(0x107a5f6au); f_107a6de0();
  /* 107a5f6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5f6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5f70 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107a5f74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a5f77 jmp 0x107a5f43 */
  goto L_107a5f43;
L_107a5f79:;
  /* 107a5f79 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 107a5f7b push 0x107cac04 */
  push32((uint32_t)(0x107cac04u));
  /* 107a5f80 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a5f82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a5f85 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 107a5f8c push ecx */
  push32((uint32_t)(ECX));
  /* 107a5f8d call 0x107a3fb0 */
  push32(0x107a5f92u); f_107a3fb0();
  /* 107a5f92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5f95 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a5f98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a5f9b mov dword ptr [0x107cf550], edx */
  w32((uint32_t)(0x107cf550), (EDX));
  /* 107a5fa1 cmp dword ptr [0x107cf550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5fa8 jne 0x107a5fb4 */
  if (!C.zf) goto L_107a5fb4;
  /* 107a5faa push 9 */
  push32((uint32_t)(0x9u));
  /* 107a5fac call 0x107a2f20 */
  push32(0x107a5fb1u); f_107a2f20();
  /* 107a5fb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a5fb4:;
  /* 107a5fb4 mov eax, dword ptr [0x107cf51c] */
  EAX = (r32((uint32_t)(0x107cf51c)));
  /* 107a5fb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a5fbc jmp 0x107a5fc7 */
  goto L_107a5fc7;
L_107a5fbe:;
  /* 107a5fbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5fc1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5fc4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107a5fc7:;
  /* 107a5fc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5fca movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107a5fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a5fcf je 0x107a6037 */
  if (C.zf) goto L_107a6037;
  /* 107a5fd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5fd4 push ecx */
  push32((uint32_t)(ECX));
  /* 107a5fd5 call 0x107a6de0 */
  push32(0x107a5fdau); f_107a6de0();
  /* 107a5fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5fdd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a5fe0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107a5fe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a5fe6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107a5fe9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a5fec je 0x107a6035 */
  if (C.zf) goto L_107a6035;
  /* 107a5fee push 0x79 */
  push32((uint32_t)(0x79u));
  /* 107a5ff0 push 0x107cac04 */
  push32((uint32_t)(0x107cac04u));
  /* 107a5ff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a5ff7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a5ffa push ecx */
  push32((uint32_t)(ECX));
  /* 107a5ffb call 0x107a3fb0 */
  push32(0x107a6000u); f_107a3fb0();
  /* 107a6000 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6003 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6006 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107a6008 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a600b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a600e jne 0x107a601a */
  if (!C.zf) goto L_107a601a;
  /* 107a6010 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a6012 call 0x107a2f20 */
  push32(0x107a6017u); f_107a2f20();
  /* 107a6017 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a601a:;
  /* 107a601a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a601d push ecx */
  push32((uint32_t)(ECX));
  /* 107a601e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6021 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a6023 push eax */
  push32((uint32_t)(EAX));
  /* 107a6024 call 0x107a6f60 */
  push32(0x107a6029u); f_107a6f60();
  /* 107a6029 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a602c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a602f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6032 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107a6035:;
  /* 107a6035 jmp 0x107a5fbe */
  goto L_107a5fbe;
L_107a6037:;
  /* 107a6037 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a6039 mov edx, dword ptr [0x107cf51c] */
  EDX = (r32((uint32_t)(0x107cf51c)));
  /* 107a603f push edx */
  push32((uint32_t)(EDX));
  /* 107a6040 call 0x107a4a40 */
  push32(0x107a6045u); f_107a4a40();
  /* 107a6045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6048 mov dword ptr [0x107cf51c], 0 */
  w32((uint32_t)(0x107cf51c), (0x0u));
  /* 107a6052 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6055 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107a605b mov dword ptr [0x107d1040], 1 */
  w32((uint32_t)(0x107d1040), (0x1u));
  /* 107a6065 mov esp, ebp */
  ESP = (EBP);
  /* 107a6067 pop ebp */
  EBP = (pop32());
  /* 107a6068 ret  */
  ESPCHK(0x107a5f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006070 @ 0x107a6070 (216 bytes, 69 insns) */
void f_107a6070(void) {
  FTRACE(0x107a6070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6070 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6071 mov ebp, esp */
  EBP = (ESP);
  /* 107a6073 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6076 cmp dword ptr [0x107d1050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d1050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a607d jne 0x107a6084 */
  if (!C.zf) goto L_107a6084;
  /* 107a607f call 0x107aa860 */
  push32(0x107a6084u); f_107aa860();
L_107a6084:;
  /* 107a6084 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 107a6089 push 0x107cf58c */
  push32((uint32_t)(0x107cf58cu));
  /* 107a608e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6090 call dword ptr [0x107d2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2308))), 0x107a6096u);
  /* 107a6096 mov dword ptr [0x107cf560], 0x107cf58c */
  w32((uint32_t)(0x107cf560), (0x107cf58cu));
  /* 107a60a0 mov eax, dword ptr [0x107d106c] */
  EAX = (r32((uint32_t)(0x107d106c)));
  /* 107a60a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107a60a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a60aa jne 0x107a60b7 */
  if (!C.zf) goto L_107a60b7;
  /* 107a60ac mov edx, dword ptr [0x107cf560] */
  EDX = (r32((uint32_t)(0x107cf560)));
  /* 107a60b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107a60b5 jmp 0x107a60bf */
  goto L_107a60bf;
L_107a60b7:;
  /* 107a60b7 mov eax, dword ptr [0x107d106c] */
  EAX = (r32((uint32_t)(0x107d106c)));
  /* 107a60bc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_107a60bf:;
  /* 107a60bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a60c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107a60c5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 107a60c8 push edx */
  push32((uint32_t)(EDX));
  /* 107a60c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 107a60cc push eax */
  push32((uint32_t)(EAX));
  /* 107a60cd push 0 */
  push32((uint32_t)(0x0u));
  /* 107a60cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107a60d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a60d4 push ecx */
  push32((uint32_t)(ECX));
  /* 107a60d5 call 0x107a6150 */
  push32(0x107a60dau); f_107a6150();
  /* 107a60da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a60dd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 107a60e2 push 0x107cac10 */
  push32((uint32_t)(0x107cac10u));
  /* 107a60e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a60e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a60ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a60ef lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 107a60f2 push ecx */
  push32((uint32_t)(ECX));
  /* 107a60f3 call 0x107a3fb0 */
  push32(0x107a60f8u); f_107a3fb0();
  /* 107a60f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a60fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a60fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6102 jne 0x107a610e */
  if (!C.zf) goto L_107a610e;
  /* 107a6104 push 8 */
  push32((uint32_t)(0x8u));
  /* 107a6106 call 0x107a2f20 */
  push32(0x107a610bu); f_107a2f20();
  /* 107a610b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a610e:;
  /* 107a610e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 107a6111 push edx */
  push32((uint32_t)(EDX));
  /* 107a6112 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 107a6115 push eax */
  push32((uint32_t)(EAX));
  /* 107a6116 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6119 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a611c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 107a611f push eax */
  push32((uint32_t)(EAX));
  /* 107a6120 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6123 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6124 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a6127 push edx */
  push32((uint32_t)(EDX));
  /* 107a6128 call 0x107a6150 */
  push32(0x107a612du); f_107a6150();
  /* 107a612d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6130 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6133 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6136 mov dword ptr [0x107cf544], eax */
  w32((uint32_t)(0x107cf544), (EAX));
  /* 107a613b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a613e mov dword ptr [0x107cf548], ecx */
  w32((uint32_t)(0x107cf548), (ECX));
  /* 107a6144 mov esp, ebp */
  ESP = (EBP);
  /* 107a6146 pop ebp */
  EBP = (pop32());
  /* 107a6147 ret  */
  ESPCHK(0x107a6070u, _esp0);
  ESP += 4; return;
}

/* FUN_10006150 @ 0x107a6150 (1060 bytes, 360 insns) */
void f_107a6150(void) {
  FTRACE(0x107a6150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6150 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6151 mov ebp, esp */
  EBP = (ESP);
  /* 107a6153 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6156 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a6159 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107a615f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a6162 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 107a6168 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a616b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a616e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6172 je 0x107a6185 */
  if (C.zf) goto L_107a6185;
  /* 107a6174 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6177 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a617a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107a617c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a617f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6182 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_107a6185:;
  /* 107a6185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6188 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107a618b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a618e jne 0x107a625d */
  if (!C.zf) goto L_107a625d;
L_107a6194:;
  /* 107a6194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6197 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a619a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a619d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a61a0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107a61a3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a61a6 je 0x107a6222 */
  if (C.zf) goto L_107a6222;
  /* 107a61a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a61ab movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107a61ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a61b0 je 0x107a6222 */
  if (C.zf) goto L_107a6222;
  /* 107a61b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a61b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a61b7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107a61b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a61bb mov al, byte ptr [edx + 0x107d0da1] */
  AL = (r8((uint32_t)(EDX + 0x107d0da1)));
  /* 107a61c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107a61c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a61c6 je 0x107a61f7 */
  if (C.zf) goto L_107a61f7;
  /* 107a61c8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a61cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a61cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a61d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a61d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107a61d5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a61d9 je 0x107a61f7 */
  if (C.zf) goto L_107a61f7;
  /* 107a61db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a61de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a61e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107a61e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107a61e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a61e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a61eb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107a61ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a61f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a61f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107a61f7:;
  /* 107a61f7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a61fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a61fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a61ff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a6202 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107a6204 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6208 je 0x107a621d */
  if (C.zf) goto L_107a621d;
  /* 107a620a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a620d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6210 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107a6212 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107a6214 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6217 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a621a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_107a621d:;
  /* 107a621d jmp 0x107a6194 */
  goto L_107a6194;
L_107a6222:;
  /* 107a6222 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a6225 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a6227 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a622a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a622d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107a622f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6233 je 0x107a6244 */
  if (C.zf) goto L_107a6244;
  /* 107a6235 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6238 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 107a623b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a623e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6241 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_107a6244:;
  /* 107a6244 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6247 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107a624a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a624d jne 0x107a6258 */
  if (!C.zf) goto L_107a6258;
  /* 107a624f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6252 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6255 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107a6258:;
  /* 107a6258 jmp 0x107a632c */
  goto L_107a632c;
L_107a625d:;
  /* 107a625d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a6260 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a6262 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6265 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a6268 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107a626a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a626e je 0x107a6283 */
  if (C.zf) goto L_107a6283;
  /* 107a6270 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6273 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6276 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107a6278 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107a627a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a627d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6280 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_107a6283:;
  /* 107a6283 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6286 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107a6288 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 107a628b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a628e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6291 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a6294 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6297 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a629d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a629f mov dl, byte ptr [ecx + 0x107d0da1] */
  DL = (r8((uint32_t)(ECX + 0x107d0da1)));
  /* 107a62a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107a62a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a62aa je 0x107a62db */
  if (C.zf) goto L_107a62db;
  /* 107a62ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a62af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a62b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a62b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a62b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107a62b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a62bd je 0x107a62d2 */
  if (C.zf) goto L_107a62d2;
  /* 107a62bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a62c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a62c5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107a62c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107a62c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a62cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a62cf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_107a62d2:;
  /* 107a62d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a62d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a62d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107a62db:;
  /* 107a62db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a62de and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a62e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a62e7 je 0x107a6307 */
  if (C.zf) goto L_107a6307;
  /* 107a62e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a62ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a62f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a62f3 je 0x107a6307 */
  if (C.zf) goto L_107a6307;
  /* 107a62f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a62f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a62fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6301 jne 0x107a625d */
  if (!C.zf) goto L_107a625d;
L_107a6307:;
  /* 107a6307 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a630a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a6310 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a6312 jne 0x107a631f */
  if (!C.zf) goto L_107a631f;
  /* 107a6314 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6317 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a631a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a631d jmp 0x107a632c */
  goto L_107a632c;
L_107a631f:;
  /* 107a631f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6323 je 0x107a632c */
  if (C.zf) goto L_107a632c;
  /* 107a6325 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6328 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_107a632c:;
  /* 107a632c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_107a6333:;
  /* 107a6333 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6336 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107a6339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a633b je 0x107a635e */
  if (C.zf) goto L_107a635e;
L_107a633d:;
  /* 107a633d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6340 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107a6343 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6346 je 0x107a6353 */
  if (C.zf) goto L_107a6353;
  /* 107a6348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a634b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107a634e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6351 jne 0x107a635e */
  if (!C.zf) goto L_107a635e;
L_107a6353:;
  /* 107a6353 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6356 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6359 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a635c jmp 0x107a633d */
  goto L_107a633d;
L_107a635e:;
  /* 107a635e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6361 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107a6364 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a6366 jne 0x107a636d */
  if (!C.zf) goto L_107a636d;
  /* 107a6368 jmp 0x107a654b */
  goto L_107a654b;
L_107a636d:;
  /* 107a636d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6371 je 0x107a6384 */
  if (C.zf) goto L_107a6384;
  /* 107a6373 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6376 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6379 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107a637b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a637e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6381 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_107a6384:;
  /* 107a6384 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a6387 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a6389 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a638c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a638f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_107a6391:;
  /* 107a6391 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 107a6398 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_107a639f:;
  /* 107a639f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a63a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107a63a5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a63a8 jne 0x107a63be */
  if (!C.zf) goto L_107a63be;
  /* 107a63aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a63ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a63b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a63b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a63b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a63b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107a63bc jmp 0x107a639f */
  goto L_107a639f;
L_107a63be:;
  /* 107a63be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a63c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107a63c4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a63c7 jne 0x107a641a */
  if (!C.zf) goto L_107a641a;
  /* 107a63c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a63cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a63ce mov ecx, 2 */
  ECX = (0x2u);
  /* 107a63d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107a63d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a63d7 jne 0x107a6412 */
  if (!C.zf) goto L_107a6412;
  /* 107a63d9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a63dd je 0x107a63ff */
  if (C.zf) goto L_107a63ff;
  /* 107a63df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a63e2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107a63e6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a63e9 jne 0x107a63f6 */
  if (!C.zf) goto L_107a63f6;
  /* 107a63eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a63ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a63f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a63f4 jmp 0x107a63fd */
  goto L_107a63fd;
L_107a63f6:;
  /* 107a63f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107a63fd:;
  /* 107a63fd jmp 0x107a6406 */
  goto L_107a6406;
L_107a63ff:;
  /* 107a63ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107a6406:;
  /* 107a6406 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a6408 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a640c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 107a640f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_107a6412:;
  /* 107a6412 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a6415 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107a6417 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_107a641a:;
  /* 107a641a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a641d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a6420 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6423 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107a6426 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a6428 je 0x107a644e */
  if (C.zf) goto L_107a644e;
  /* 107a642a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a642e je 0x107a643f */
  if (C.zf) goto L_107a643f;
  /* 107a6430 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6433 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 107a6436 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6439 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a643c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_107a643f:;
  /* 107a643f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a6442 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a6444 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6447 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a644a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107a644c jmp 0x107a641a */
  goto L_107a641a;
L_107a644e:;
  /* 107a644e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6451 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107a6454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a6456 je 0x107a6474 */
  if (C.zf) goto L_107a6474;
  /* 107a6458 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a645c jne 0x107a6479 */
  if (!C.zf) goto L_107a6479;
  /* 107a645e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6461 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107a6464 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6467 je 0x107a6474 */
  if (C.zf) goto L_107a6474;
  /* 107a6469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a646c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107a646f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6472 jne 0x107a6479 */
  if (!C.zf) goto L_107a6479;
L_107a6474:;
  /* 107a6474 jmp 0x107a6524 */
  goto L_107a6524;
L_107a6479:;
  /* 107a6479 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a647d je 0x107a6516 */
  if (C.zf) goto L_107a6516;
  /* 107a6483 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6487 je 0x107a64dd */
  if (C.zf) goto L_107a64dd;
  /* 107a6489 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a648c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a648e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107a6490 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a6492 mov cl, byte ptr [eax + 0x107d0da1] */
  CL = (r8((uint32_t)(EAX + 0x107d0da1)));
  /* 107a6498 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107a649b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a649d je 0x107a64c8 */
  if (C.zf) goto L_107a64c8;
  /* 107a649f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a64a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a64a5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107a64a7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 107a64a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a64ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a64af mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 107a64b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a64b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a64b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a64bb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a64be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a64c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a64c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a64c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107a64c8:;
  /* 107a64c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a64cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a64ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107a64d0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107a64d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a64d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a64d8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 107a64db jmp 0x107a6509 */
  goto L_107a6509;
L_107a64dd:;
  /* 107a64dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a64e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a64e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107a64e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a64e6 mov cl, byte ptr [eax + 0x107d0da1] */
  CL = (r8((uint32_t)(EAX + 0x107d0da1)));
  /* 107a64ec and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107a64ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a64f1 je 0x107a6509 */
  if (C.zf) goto L_107a6509;
  /* 107a64f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a64f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a64f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a64fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a64ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a6501 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6504 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a6507 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107a6509:;
  /* 107a6509 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a650c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a650e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6511 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a6514 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107a6516:;
  /* 107a6516 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6519 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a651c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a651f jmp 0x107a6391 */
  goto L_107a6391;
L_107a6524:;
  /* 107a6524 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6528 je 0x107a6539 */
  if (C.zf) goto L_107a6539;
  /* 107a652a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a652d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 107a6530 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6533 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6536 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_107a6539:;
  /* 107a6539 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a653c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a653e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6541 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107a6544 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107a6546 jmp 0x107a6333 */
  goto L_107a6333;
L_107a654b:;
  /* 107a654b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a654f je 0x107a6563 */
  if (C.zf) goto L_107a6563;
  /* 107a6551 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6554 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107a655a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a655d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6560 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_107a6563:;
  /* 107a6563 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a6566 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a6568 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a656b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a656e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107a6570 mov esp, ebp */
  ESP = (EBP);
  /* 107a6572 pop ebp */
  EBP = (pop32());
  /* 107a6573 ret  */
  ESPCHK(0x107a6150u, _esp0);
  ESP += 4; return;
}

/* FUN_10006580 @ 0x107a6580 (537 bytes, 173 insns) */
void f_107a6580(void) {
  FTRACE(0x107a6580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6580 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6581 mov ebp, esp */
  EBP = (ESP);
  /* 107a6583 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6586 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 107a658d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 107a6594 cmp dword ptr [0x107cf690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a659b jne 0x107a65da */
  if (!C.zf) goto L_107a65da;
  /* 107a659d call dword ptr [0x107d2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2338))), 0x107a65a3u);
  /* 107a65a3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107a65a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a65aa je 0x107a65b8 */
  if (C.zf) goto L_107a65b8;
  /* 107a65ac mov dword ptr [0x107cf690], 1 */
  w32((uint32_t)(0x107cf690), (0x1u));
  /* 107a65b6 jmp 0x107a65da */
  goto L_107a65da;
L_107a65b8:;
  /* 107a65b8 call dword ptr [0x107d2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2360))), 0x107a65beu);
  /* 107a65be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a65c1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a65c5 je 0x107a65d3 */
  if (C.zf) goto L_107a65d3;
  /* 107a65c7 mov dword ptr [0x107cf690], 2 */
  w32((uint32_t)(0x107cf690), (0x2u));
  /* 107a65d1 jmp 0x107a65da */
  goto L_107a65da;
L_107a65d3:;
  /* 107a65d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a65d5 jmp 0x107a6795 */
  goto L_107a6795;
L_107a65da:;
  /* 107a65da cmp dword ptr [0x107cf690], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf690))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a65e1 jne 0x107a66de */
  if (!C.zf) goto L_107a66de;
  /* 107a65e7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a65eb jne 0x107a6603 */
  if (!C.zf) goto L_107a6603;
  /* 107a65ed call dword ptr [0x107d2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2338))), 0x107a65f3u);
  /* 107a65f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107a65f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a65fa jne 0x107a6603 */
  if (!C.zf) goto L_107a6603;
  /* 107a65fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a65fe jmp 0x107a6795 */
  goto L_107a6795;
L_107a6603:;
  /* 107a6603 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a6606 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107a6609:;
  /* 107a6609 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a660c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a660e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 107a6611 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a6613 je 0x107a6635 */
  if (C.zf) goto L_107a6635;
  /* 107a6615 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6618 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a661b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a661e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6621 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a6623 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 107a6626 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a6628 jne 0x107a6633 */
  if (!C.zf) goto L_107a6633;
  /* 107a662a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a662d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6630 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107a6633:;
  /* 107a6633 jmp 0x107a6609 */
  goto L_107a6609;
L_107a6635:;
  /* 107a6635 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6638 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a663b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 107a663d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6640 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a6643 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6645 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6647 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6649 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a664b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a664e push edx */
  push32((uint32_t)(EDX));
  /* 107a664f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a6652 push eax */
  push32((uint32_t)(EAX));
  /* 107a6653 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6655 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6657 call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107a665du);
  /* 107a665d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107a6660 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6664 je 0x107a6684 */
  if (C.zf) goto L_107a6684;
  /* 107a6666 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 107a6668 push 0x107cac1c */
  push32((uint32_t)(0x107cac1cu));
  /* 107a666d push 2 */
  push32((uint32_t)(0x2u));
  /* 107a666f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a6672 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6673 call 0x107a3fb0 */
  push32(0x107a6678u); f_107a3fb0();
  /* 107a6678 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a667b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a667e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6682 jne 0x107a6695 */
  if (!C.zf) goto L_107a6695;
L_107a6684:;
  /* 107a6684 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a6687 push edx */
  push32((uint32_t)(EDX));
  /* 107a6688 call dword ptr [0x107d2358] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2358))), 0x107a668eu);
  /* 107a668e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a6690 jmp 0x107a6795 */
  goto L_107a6795;
L_107a6695:;
  /* 107a6695 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6697 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6699 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a669c push eax */
  push32((uint32_t)(EAX));
  /* 107a669d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a66a0 push ecx */
  push32((uint32_t)(ECX));
  /* 107a66a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a66a4 push edx */
  push32((uint32_t)(EDX));
  /* 107a66a5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a66a8 push eax */
  push32((uint32_t)(EAX));
  /* 107a66a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a66ab push 0 */
  push32((uint32_t)(0x0u));
  /* 107a66ad call dword ptr [0x107d235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d235c))), 0x107a66b3u);
  /* 107a66b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a66b5 jne 0x107a66cc */
  if (!C.zf) goto L_107a66cc;
  /* 107a66b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a66b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a66bc push ecx */
  push32((uint32_t)(ECX));
  /* 107a66bd call 0x107a4a40 */
  push32(0x107a66c2u); f_107a4a40();
  /* 107a66c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a66c5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_107a66cc:;
  /* 107a66cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a66cf push edx */
  push32((uint32_t)(EDX));
  /* 107a66d0 call dword ptr [0x107d2358] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2358))), 0x107a66d6u);
  /* 107a66d6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a66d9 jmp 0x107a6795 */
  goto L_107a6795;
L_107a66de:;
  /* 107a66de cmp dword ptr [0x107cf690], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107cf690))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a66e5 jne 0x107a6793 */
  if (!C.zf) goto L_107a6793;
  /* 107a66eb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a66ef jne 0x107a6707 */
  if (!C.zf) goto L_107a6707;
  /* 107a66f1 call dword ptr [0x107d2360] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2360))), 0x107a66f7u);
  /* 107a66f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a66fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a66fe jne 0x107a6707 */
  if (!C.zf) goto L_107a6707;
  /* 107a6700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a6702 jmp 0x107a6795 */
  goto L_107a6795;
L_107a6707:;
  /* 107a6707 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a670a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107a670d:;
  /* 107a670d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6710 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107a6713 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a6715 je 0x107a6735 */
  if (C.zf) goto L_107a6735;
  /* 107a6717 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a671a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a671d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a6720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6723 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107a6726 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a6728 jne 0x107a6733 */
  if (!C.zf) goto L_107a6733;
  /* 107a672a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a672d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6730 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107a6733:;
  /* 107a6733 jmp 0x107a670d */
  goto L_107a670d;
L_107a6735:;
  /* 107a6735 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6738 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a673b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a673e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107a6741 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 107a6746 push 0x107cac1c */
  push32((uint32_t)(0x107cac1cu));
  /* 107a674b push 2 */
  push32((uint32_t)(0x2u));
  /* 107a674d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a6750 push edx */
  push32((uint32_t)(EDX));
  /* 107a6751 call 0x107a3fb0 */
  push32(0x107a6756u); f_107a3fb0();
  /* 107a6756 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6759 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a675c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6760 jne 0x107a6770 */
  if (!C.zf) goto L_107a6770;
  /* 107a6762 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a6765 push eax */
  push32((uint32_t)(EAX));
  /* 107a6766 call dword ptr [0x107d2354] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2354))), 0x107a676cu);
  /* 107a676c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a676e jmp 0x107a6795 */
  goto L_107a6795;
L_107a6770:;
  /* 107a6770 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a6773 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6774 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a6777 push edx */
  push32((uint32_t)(EDX));
  /* 107a6778 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a677b push eax */
  push32((uint32_t)(EAX));
  /* 107a677c call 0x107aa890 */
  push32(0x107a6781u); f_107aa890();
  /* 107a6781 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6784 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a6787 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6788 call dword ptr [0x107d2354] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2354))), 0x107a678eu);
  /* 107a678e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6791 jmp 0x107a6795 */
  goto L_107a6795;
L_107a6793:;
  /* 107a6793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107a6795:;
  /* 107a6795 mov esp, ebp */
  ESP = (EBP);
  /* 107a6797 pop ebp */
  EBP = (pop32());
  /* 107a6798 ret  */
  ESPCHK(0x107a6580u, _esp0);
  ESP += 4; return;
}

/* FUN_100067a0 @ 0x107a67a0 (77 bytes, 25 insns) */
void f_107a67a0(void) {
  FTRACE(0x107a67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a67a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a67a1 mov ebp, esp */
  EBP = (ESP);
  /* 107a67a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a67a5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107a67aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a67ac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a67b0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 107a67b3 push eax */
  push32((uint32_t)(EAX));
  /* 107a67b4 call dword ptr [0x107d236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d236c))), 0x107a67bau);
  /* 107a67ba mov dword ptr [0x107d0ecc], eax */
  w32((uint32_t)(0x107d0ecc), (EAX));
  /* 107a67bf cmp dword ptr [0x107d0ecc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107d0ecc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a67c6 jne 0x107a67cc */
  if (!C.zf) goto L_107a67cc;
  /* 107a67c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a67ca jmp 0x107a67eb */
  goto L_107a67eb;
L_107a67cc:;
  /* 107a67cc call 0x107a8250 */
  push32(0x107a67d1u); f_107a8250();
  /* 107a67d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a67d3 jne 0x107a67e6 */
  if (!C.zf) goto L_107a67e6;
  /* 107a67d5 mov ecx, dword ptr [0x107d0ecc] */
  ECX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a67db push ecx */
  push32((uint32_t)(ECX));
  /* 107a67dc call dword ptr [0x107d2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2368))), 0x107a67e2u);
  /* 107a67e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a67e4 jmp 0x107a67eb */
  goto L_107a67eb;
L_107a67e6:;
  /* 107a67e6 mov eax, 1 */
  EAX = (0x1u);
L_107a67eb:;
  /* 107a67eb pop ebp */
  EBP = (pop32());
  /* 107a67ec ret  */
  ESPCHK(0x107a67a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067f0 @ 0x107a67f0 (156 bytes, 48 insns) */
void f_107a67f0(void) {
  FTRACE(0x107a67f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a67f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a67f1 mov ebp, esp */
  EBP = (ESP);
  /* 107a67f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a67f6 mov eax, dword ptr [0x107d0ec8] */
  EAX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a67fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a67fe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107a6805 jmp 0x107a6810 */
  goto L_107a6810;
L_107a6807:;
  /* 107a6807 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a680a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a680d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107a6810:;
  /* 107a6810 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6813 cmp edx, dword ptr [0x107d0ec4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x107d0ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6819 jge 0x107a6866 */
  if ((C.sf==C.of)) goto L_107a6866;
  /* 107a681b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 107a6820 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 107a6825 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6828 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107a682b push ecx */
  push32((uint32_t)(ECX));
  /* 107a682c call dword ptr [0x107d2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2374))), 0x107a6832u);
  /* 107a6832 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107a6837 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6839 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a683c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107a683f push eax */
  push32((uint32_t)(EAX));
  /* 107a6840 call dword ptr [0x107d2374] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2374))), 0x107a6846u);
  /* 107a6846 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6849 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107a684c push edx */
  push32((uint32_t)(EDX));
  /* 107a684d push 0 */
  push32((uint32_t)(0x0u));
  /* 107a684f mov eax, dword ptr [0x107d0ecc] */
  EAX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a6854 push eax */
  push32((uint32_t)(EAX));
  /* 107a6855 call dword ptr [0x107d2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2370))), 0x107a685bu);
  /* 107a685b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a685e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6861 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107a6864 jmp 0x107a6807 */
  goto L_107a6807;
L_107a6866:;
  /* 107a6866 mov edx, dword ptr [0x107d0ec8] */
  EDX = (r32((uint32_t)(0x107d0ec8)));
  /* 107a686c push edx */
  push32((uint32_t)(EDX));
  /* 107a686d push 0 */
  push32((uint32_t)(0x0u));
  /* 107a686f mov eax, dword ptr [0x107d0ecc] */
  EAX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a6874 push eax */
  push32((uint32_t)(EAX));
  /* 107a6875 call dword ptr [0x107d2370] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2370))), 0x107a687bu);
  /* 107a687b mov ecx, dword ptr [0x107d0ecc] */
  ECX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a6881 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6882 call dword ptr [0x107d2368] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2368))), 0x107a6888u);
  /* 107a6888 mov esp, ebp */
  ESP = (EBP);
  /* 107a688a pop ebp */
  EBP = (pop32());
  /* 107a688b ret  */
  ESPCHK(0x107a67f0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x107a6890 (73 bytes, 19 insns) */
void f_107a6890(void) {
  FTRACE(0x107a6890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6890 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6891 mov ebp, esp */
  EBP = (ESP);
  /* 107a6893 cmp dword ptr [0x107cf524], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf524))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a689a je 0x107a68ae */
  if (C.zf) goto L_107a68ae;
  /* 107a689c cmp dword ptr [0x107cf524], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf524))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a68a3 jne 0x107a68d7 */
  if (!C.zf) goto L_107a68d7;
  /* 107a68a5 cmp dword ptr [0x107cf528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a68ac jne 0x107a68d7 */
  if (!C.zf) goto L_107a68d7;
L_107a68ae:;
  /* 107a68ae push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 107a68b3 call 0x107a68e0 */
  push32(0x107a68b8u); f_107a68e0();
  /* 107a68b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a68bb cmp dword ptr [0x107cf694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a68c2 je 0x107a68ca */
  if (C.zf) goto L_107a68ca;
  /* 107a68c4 call dword ptr [0x107cf694] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf694))), 0x107a68cau);
L_107a68ca:;
  /* 107a68ca push 0xff */
  push32((uint32_t)(0xffu));
  /* 107a68cf call 0x107a68e0 */
  push32(0x107a68d4u); f_107a68e0();
  /* 107a68d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a68d7:;
  /* 107a68d7 pop ebp */
  EBP = (pop32());
  /* 107a68d8 ret  */
  ESPCHK(0x107a6890u, _esp0);
  ESP += 4; return;
}

/* FUN_100068e0 @ 0x107a68e0 (447 bytes, 131 insns) */
void f_107a68e0(void) {
  FTRACE(0x107a68e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a68e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a68e1 mov ebp, esp */
  EBP = (ESP);
  /* 107a68e3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a68e9 push ebx */
  push32((uint32_t)(EBX));
  /* 107a68ea push esi */
  push32((uint32_t)(ESI));
  /* 107a68eb push edi */
  push32((uint32_t)(EDI));
  /* 107a68ec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107a68f3 jmp 0x107a68fe */
  goto L_107a68fe;
L_107a68f5:;
  /* 107a68f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a68f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a68fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107a68fe:;
  /* 107a68fe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6902 jae 0x107a6917 */
  if (!C.cf) goto L_107a6917;
  /* 107a6904 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6907 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a690a cmp edx, dword ptr [ecx*8 + 0x107cdab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x107cdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6911 jne 0x107a6915 */
  if (!C.zf) goto L_107a6915;
  /* 107a6913 jmp 0x107a6917 */
  goto L_107a6917;
L_107a6915:;
  /* 107a6915 jmp 0x107a68f5 */
  goto L_107a68f5;
L_107a6917:;
  /* 107a6917 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a691a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a691d cmp ecx, dword ptr [eax*8 + 0x107cdab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x107cdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6924 jne 0x107a6a98 */
  if (!C.zf) goto L_107a6a98;
  /* 107a692a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6931 je 0x107a6954 */
  if (C.zf) goto L_107a6954;
  /* 107a6933 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6936 mov eax, dword ptr [edx*8 + 0x107cdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x107cdab4)));
  /* 107a693d push eax */
  push32((uint32_t)(EAX));
  /* 107a693e push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6940 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6942 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6944 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a6946 call 0x107a3070 */
  push32(0x107a694bu); f_107a3070();
  /* 107a694b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a694e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6951 jne 0x107a6954 */
  if (!C.zf) goto L_107a6954;
  /* 107a6953 int3  */
  x86_unimpl("int3 @ 0x107a6953");
L_107a6954:;
  /* 107a6954 cmp dword ptr [0x107cf524], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf524))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a695b je 0x107a696f */
  if (C.zf) goto L_107a696f;
  /* 107a695d cmp dword ptr [0x107cf524], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf524))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6964 jne 0x107a69a8 */
  if (!C.zf) goto L_107a69a8;
  /* 107a6966 cmp dword ptr [0x107cf528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107cf528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a696d jne 0x107a69a8 */
  if (!C.zf) goto L_107a69a8;
L_107a696f:;
  /* 107a696f push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6971 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 107a6974 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6975 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6978 mov eax, dword ptr [edx*8 + 0x107cdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x107cdab4)));
  /* 107a697f push eax */
  push32((uint32_t)(EAX));
  /* 107a6980 call 0x107a6de0 */
  push32(0x107a6985u); f_107a6de0();
  /* 107a6985 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6988 push eax */
  push32((uint32_t)(EAX));
  /* 107a6989 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a698c mov edx, dword ptr [ecx*8 + 0x107cdab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x107cdab4)));
  /* 107a6993 push edx */
  push32((uint32_t)(EDX));
  /* 107a6994 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 107a6996 call dword ptr [0x107d22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22ec))), 0x107a699cu);
  /* 107a699c push eax */
  push32((uint32_t)(EAX));
  /* 107a699d call dword ptr [0x107d22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22f0))), 0x107a69a3u);
  /* 107a69a3 jmp 0x107a6a98 */
  goto L_107a6a98;
L_107a69a8:;
  /* 107a69a8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a69af je 0x107a6a98 */
  if (C.zf) goto L_107a6a98;
  /* 107a69b5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 107a69ba lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 107a69c0 push eax */
  push32((uint32_t)(EAX));
  /* 107a69c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a69c3 call dword ptr [0x107d2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2308))), 0x107a69c9u);
  /* 107a69c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a69cb jne 0x107a69e1 */
  if (!C.zf) goto L_107a69e1;
  /* 107a69cd push 0x107ca484 */
  push32((uint32_t)(0x107ca484u));
  /* 107a69d2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 107a69d8 push ecx */
  push32((uint32_t)(ECX));
  /* 107a69d9 call 0x107a6f60 */
  push32(0x107a69deu); f_107a6f60();
  /* 107a69de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a69e1:;
  /* 107a69e1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 107a69e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107a69ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a69ed push eax */
  push32((uint32_t)(EAX));
  /* 107a69ee call 0x107a6de0 */
  push32(0x107a69f3u); f_107a6de0();
  /* 107a69f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a69f6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a69f9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a69fc jbe 0x107a6a2a */
  if ((C.cf||C.zf)) goto L_107a6a2a;
  /* 107a69fe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 107a6a04 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6a05 call 0x107a6de0 */
  push32(0x107a6a0au); f_107a6de0();
  /* 107a6a0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6a0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6a10 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 107a6a14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a6a17 push 3 */
  push32((uint32_t)(0x3u));
  /* 107a6a19 push 0x107ca480 */
  push32((uint32_t)(0x107ca480u));
  /* 107a6a1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6a21 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6a22 call 0x107a77d0 */
  push32(0x107a6a27u); f_107a77d0();
  /* 107a6a27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a6a2a:;
  /* 107a6a2a push 0x107caed8 */
  push32((uint32_t)(0x107caed8u));
  /* 107a6a2f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 107a6a35 push edx */
  push32((uint32_t)(EDX));
  /* 107a6a36 call 0x107a6f60 */
  push32(0x107a6a3bu); f_107a6f60();
  /* 107a6a3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6a3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6a41 push eax */
  push32((uint32_t)(EAX));
  /* 107a6a42 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 107a6a48 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6a49 call 0x107a6f70 */
  push32(0x107a6a4eu); f_107a6f70();
  /* 107a6a4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6a51 push 0x107ca3f8 */
  push32((uint32_t)(0x107ca3f8u));
  /* 107a6a56 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 107a6a5c push edx */
  push32((uint32_t)(EDX));
  /* 107a6a5d call 0x107a6f70 */
  push32(0x107a6a62u); f_107a6f70();
  /* 107a6a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6a65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6a68 mov ecx, dword ptr [eax*8 + 0x107cdab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x107cdab4)));
  /* 107a6a6f push ecx */
  push32((uint32_t)(ECX));
  /* 107a6a70 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 107a6a76 push edx */
  push32((uint32_t)(EDX));
  /* 107a6a77 call 0x107a6f70 */
  push32(0x107a6a7cu); f_107a6f70();
  /* 107a6a7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6a7f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 107a6a84 push 0x107caeb0 */
  push32((uint32_t)(0x107caeb0u));
  /* 107a6a89 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 107a6a8f push eax */
  push32((uint32_t)(EAX));
  /* 107a6a90 call 0x107a7710 */
  push32(0x107a6a95u); f_107a7710();
  /* 107a6a95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a6a98:;
  /* 107a6a98 pop edi */
  EDI = (pop32());
  /* 107a6a99 pop esi */
  ESI = (pop32());
  /* 107a6a9a pop ebx */
  EBX = (pop32());
  /* 107a6a9b mov esp, ebp */
  ESP = (EBP);
  /* 107a6a9d pop ebp */
  EBP = (pop32());
  /* 107a6a9e ret  */
  ESPCHK(0x107a68e0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x107a6aa0 (80 bytes, 27 insns) */
void f_107a6aa0(void) {
  FTRACE(0x107a6aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6aa1 mov ebp, esp */
  EBP = (ESP);
  /* 107a6aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6aa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107a6aab jmp 0x107a6ab6 */
  goto L_107a6ab6;
L_107a6aad:;
  /* 107a6aad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6ab0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6ab3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a6ab6:;
  /* 107a6ab6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6aba jae 0x107a6acf */
  if (!C.cf) goto L_107a6acf;
  /* 107a6abc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6abf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6ac2 cmp edx, dword ptr [ecx*8 + 0x107cdab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x107cdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6ac9 jne 0x107a6acd */
  if (!C.zf) goto L_107a6acd;
  /* 107a6acb jmp 0x107a6acf */
  goto L_107a6acf;
L_107a6acd:;
  /* 107a6acd jmp 0x107a6aad */
  goto L_107a6aad;
L_107a6acf:;
  /* 107a6acf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6ad2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6ad5 cmp ecx, dword ptr [eax*8 + 0x107cdab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x107cdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6adc jne 0x107a6aea */
  if (!C.zf) goto L_107a6aea;
  /* 107a6ade mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6ae1 mov eax, dword ptr [edx*8 + 0x107cdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x107cdab4)));
  /* 107a6ae8 jmp 0x107a6aec */
  goto L_107a6aec;
L_107a6aea:;
  /* 107a6aea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107a6aec:;
  /* 107a6aec mov esp, ebp */
  ESP = (EBP);
  /* 107a6aee pop ebp */
  EBP = (pop32());
  /* 107a6aef ret  */
  ESPCHK(0x107a6aa0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x107a6af0 (66 bytes, 28 insns) */
void f_107a6af0(void) {
  FTRACE(0x107a6af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6af0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6af1 mov ebp, esp */
  EBP = (ESP);
  /* 107a6af3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6af7 jne 0x107a6b17 */
  if (!C.zf) goto L_107a6b17;
  /* 107a6af9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6afd jge 0x107a6b17 */
  if ((C.sf==C.of)) goto L_107a6b17;
  /* 107a6aff push 1 */
  push32((uint32_t)(0x1u));
  /* 107a6b01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6b04 push eax */
  push32((uint32_t)(EAX));
  /* 107a6b05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6b08 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6b09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6b0c push edx */
  push32((uint32_t)(EDX));
  /* 107a6b0d call 0x107a6b40 */
  push32(0x107a6b12u); f_107a6b40();
  /* 107a6b12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6b15 jmp 0x107a6b2d */
  goto L_107a6b2d;
L_107a6b17:;
  /* 107a6b17 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6b19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6b1c push eax */
  push32((uint32_t)(EAX));
  /* 107a6b1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6b20 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6b21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6b24 push edx */
  push32((uint32_t)(EDX));
  /* 107a6b25 call 0x107a6b40 */
  push32(0x107a6b2au); f_107a6b40();
  /* 107a6b2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a6b2d:;
  /* 107a6b2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6b30 pop ebp */
  EBP = (pop32());
  /* 107a6b31 ret  */
  ESPCHK(0x107a6af0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x107a6b40 (194 bytes, 71 insns) */
void f_107a6b40(void) {
  FTRACE(0x107a6b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6b40 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6b41 mov ebp, esp */
  EBP = (ESP);
  /* 107a6b43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6b46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6b49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a6b4c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6b50 je 0x107a6b69 */
  if (C.zf) goto L_107a6b69;
  /* 107a6b52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6b55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 107a6b58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6b5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6b5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a6b61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6b64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107a6b66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107a6b69:;
  /* 107a6b69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6b6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107a6b6f:;
  /* 107a6b6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6b72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a6b74 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107a6b77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107a6b7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6b7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a6b7f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107a6b82 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107a6b85 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6b89 jbe 0x107a6ba1 */
  if ((C.cf||C.zf)) goto L_107a6ba1;
  /* 107a6b8b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6b8e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6b91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6b94 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107a6b96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6b99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6b9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a6b9f jmp 0x107a6bb5 */
  goto L_107a6bb5;
L_107a6ba1:;
  /* 107a6ba1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6ba4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6baa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107a6bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6baf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6bb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107a6bb5:;
  /* 107a6bb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6bb9 ja 0x107a6b6f */
  if ((!C.cf&&!C.zf)) goto L_107a6b6f;
  /* 107a6bbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6bbe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107a6bc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6bc4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6bc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a6bca:;
  /* 107a6bca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6bcd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107a6bcf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 107a6bd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6bd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6bd8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107a6bda mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107a6bdc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6bdf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 107a6be2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 107a6be4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6be7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6bea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a6bed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6bf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6bf3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a6bf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6bf9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6bfc jb 0x107a6bca */
  if (C.cf) goto L_107a6bca;
  /* 107a6bfe mov esp, ebp */
  ESP = (EBP);
  /* 107a6c00 pop ebp */
  EBP = (pop32());
  /* 107a6c01 ret  */
  ESPCHK(0x107a6b40u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x107a6c10 (63 bytes, 24 insns) */
void f_107a6c10(void) {
  FTRACE(0x107a6c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6c10 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6c11 mov ebp, esp */
  EBP = (ESP);
  /* 107a6c13 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6c14 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6c18 jne 0x107a6c29 */
  if (!C.zf) goto L_107a6c29;
  /* 107a6c1a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6c1e jge 0x107a6c29 */
  if ((C.sf==C.of)) goto L_107a6c29;
  /* 107a6c20 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107a6c27 jmp 0x107a6c30 */
  goto L_107a6c30;
L_107a6c29:;
  /* 107a6c29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107a6c30:;
  /* 107a6c30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6c33 push eax */
  push32((uint32_t)(EAX));
  /* 107a6c34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6c37 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6c38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6c3b push edx */
  push32((uint32_t)(EDX));
  /* 107a6c3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6c3f push eax */
  push32((uint32_t)(EAX));
  /* 107a6c40 call 0x107a6b40 */
  push32(0x107a6c45u); f_107a6b40();
  /* 107a6c45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6c48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6c4b mov esp, ebp */
  ESP = (EBP);
  /* 107a6c4d pop ebp */
  EBP = (pop32());
  /* 107a6c4e ret  */
  ESPCHK(0x107a6c10u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x107a6c50 (30 bytes, 14 insns) */
void f_107a6c50(void) {
  FTRACE(0x107a6c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6c50 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6c51 mov ebp, esp */
  EBP = (ESP);
  /* 107a6c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6c55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6c58 push eax */
  push32((uint32_t)(EAX));
  /* 107a6c59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6c5c push ecx */
  push32((uint32_t)(ECX));
  /* 107a6c5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6c60 push edx */
  push32((uint32_t)(EDX));
  /* 107a6c61 call 0x107a6b40 */
  push32(0x107a6c66u); f_107a6b40();
  /* 107a6c66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6c69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6c6c pop ebp */
  EBP = (pop32());
  /* 107a6c6d ret  */
  ESPCHK(0x107a6c50u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x107a6c70 (72 bytes, 28 insns) */
void f_107a6c70(void) {
  FTRACE(0x107a6c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6c70 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6c71 mov ebp, esp */
  EBP = (ESP);
  /* 107a6c73 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6c74 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6c78 jne 0x107a6c91 */
  if (!C.zf) goto L_107a6c91;
  /* 107a6c7a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6c7e jg 0x107a6c91 */
  if ((!C.zf&&C.sf==C.of)) goto L_107a6c91;
  /* 107a6c80 jl 0x107a6c88 */
  if ((C.sf!=C.of)) goto L_107a6c88;
  /* 107a6c82 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6c86 jae 0x107a6c91 */
  if (!C.cf) goto L_107a6c91;
L_107a6c88:;
  /* 107a6c88 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107a6c8f jmp 0x107a6c98 */
  goto L_107a6c98;
L_107a6c91:;
  /* 107a6c91 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107a6c98:;
  /* 107a6c98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6c9b push eax */
  push32((uint32_t)(EAX));
  /* 107a6c9c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a6c9f push ecx */
  push32((uint32_t)(ECX));
  /* 107a6ca0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6ca3 push edx */
  push32((uint32_t)(EDX));
  /* 107a6ca4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6ca7 push eax */
  push32((uint32_t)(EAX));
  /* 107a6ca8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6cab push ecx */
  push32((uint32_t)(ECX));
  /* 107a6cac call 0x107a6cc0 */
  push32(0x107a6cb1u); f_107a6cc0();
  /* 107a6cb1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6cb4 mov esp, ebp */
  ESP = (EBP);
  /* 107a6cb6 pop ebp */
  EBP = (pop32());
  /* 107a6cb7 ret  */
  ESPCHK(0x107a6c70u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x107a6cc0 (242 bytes, 91 insns) */
void f_107a6cc0(void) {
  FTRACE(0x107a6cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6cc1 mov ebp, esp */
  EBP = (ESP);
  /* 107a6cc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6cc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6cc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a6ccc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6cd0 je 0x107a6cf4 */
  if (C.zf) goto L_107a6cf4;
  /* 107a6cd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6cd5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 107a6cd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6cdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6cde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a6ce1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6ce4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107a6ce6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6ce9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6cec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107a6cee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107a6cf1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_107a6cf4:;
  /* 107a6cf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6cf7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107a6cfa:;
  /* 107a6cfa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a6cfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a6cff push ecx */
  push32((uint32_t)(ECX));
  /* 107a6d00 push eax */
  push32((uint32_t)(EAX));
  /* 107a6d01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6d04 push edx */
  push32((uint32_t)(EDX));
  /* 107a6d05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6d08 push eax */
  push32((uint32_t)(EAX));
  /* 107a6d09 call 0x107aac40 */
  push32(0x107a6d0eu); f_107aac40();
  /* 107a6d0e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a6d11 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a6d14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a6d16 push edx */
  push32((uint32_t)(EDX));
  /* 107a6d17 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6d18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6d1b push eax */
  push32((uint32_t)(EAX));
  /* 107a6d1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6d1f push ecx */
  push32((uint32_t)(ECX));
  /* 107a6d20 call 0x107aabd0 */
  push32(0x107a6d25u); f_107aabd0();
  /* 107a6d25 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107a6d28 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 107a6d2b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6d2f jbe 0x107a6d47 */
  if ((C.cf||C.zf)) goto L_107a6d47;
  /* 107a6d31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6d34 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6d37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6d3a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107a6d3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6d3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6d42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107a6d45 jmp 0x107a6d5b */
  goto L_107a6d5b;
L_107a6d47:;
  /* 107a6d47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a6d4a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6d4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6d50 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107a6d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6d55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6d58 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107a6d5b:;
  /* 107a6d5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6d5f ja 0x107a6cfa */
  if ((!C.cf&&!C.zf)) goto L_107a6cfa;
  /* 107a6d61 jb 0x107a6d69 */
  if (C.cf) goto L_107a6d69;
  /* 107a6d63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6d67 ja 0x107a6cfa */
  if ((!C.cf&&!C.zf)) goto L_107a6cfa;
L_107a6d69:;
  /* 107a6d69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6d6c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107a6d6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6d72 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6d75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a6d78:;
  /* 107a6d78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6d7b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107a6d7d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 107a6d80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6d83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6d86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107a6d88 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107a6d8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6d8d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 107a6d90 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 107a6d92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a6d95 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6d98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107a6d9b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6d9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6da1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a6da4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a6da7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6daa jb 0x107a6d78 */
  if (C.cf) goto L_107a6d78;
  /* 107a6dac mov esp, ebp */
  ESP = (EBP);
  /* 107a6dae pop ebp */
  EBP = (pop32());
  /* 107a6daf ret 0x14 */
  ESPCHK(0x107a6cc0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x107a6dc0 (31 bytes, 15 insns) */
void f_107a6dc0(void) {
  FTRACE(0x107a6dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6dc1 mov ebp, esp */
  EBP = (ESP);
  /* 107a6dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6dc5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a6dc8 push eax */
  push32((uint32_t)(EAX));
  /* 107a6dc9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6dcc push ecx */
  push32((uint32_t)(ECX));
  /* 107a6dcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6dd0 push edx */
  push32((uint32_t)(EDX));
  /* 107a6dd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6dd4 push eax */
  push32((uint32_t)(EAX));
  /* 107a6dd5 call 0x107a6cc0 */
  push32(0x107a6ddau); f_107a6cc0();
  /* 107a6dda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6ddd pop ebp */
  EBP = (pop32());
  /* 107a6dde ret  */
  ESPCHK(0x107a6dc0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x107a6de0 (123 bytes, 44 insns) */
void f_107a6de0(void) {
  FTRACE(0x107a6de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6de0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107a6de4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107a6dea je 0x107a6e00 */
  if (C.zf) goto L_107a6e00;
L_107a6dec:;
  /* 107a6dec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 107a6dee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 107a6def test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107a6df1 je 0x107a6e33 */
  if (C.zf) goto L_107a6e33;
  /* 107a6df3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107a6df9 jne 0x107a6dec */
  if (!C.zf) goto L_107a6dec;
  /* 107a6dfb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_107a6e00:;
  /* 107a6e00 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 107a6e02 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 107a6e07 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6e09 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a6e0c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a6e0e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6e11 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 107a6e16 je 0x107a6e00 */
  if (C.zf) goto L_107a6e00;
  /* 107a6e18 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 107a6e1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107a6e1d je 0x107a6e51 */
  if (C.zf) goto L_107a6e51;
  /* 107a6e1f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 107a6e21 je 0x107a6e47 */
  if (C.zf) goto L_107a6e47;
  /* 107a6e23 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 107a6e28 je 0x107a6e3d */
  if (C.zf) goto L_107a6e3d;
  /* 107a6e2a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 107a6e2f je 0x107a6e33 */
  if (C.zf) goto L_107a6e33;
  /* 107a6e31 jmp 0x107a6e00 */
  goto L_107a6e00;
L_107a6e33:;
  /* 107a6e33 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 107a6e36 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107a6e3a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6e3c ret  */
  ESPCHK(0x107a6de0u, _esp0);
  ESP += 4; return;
L_107a6e3d:;
  /* 107a6e3d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 107a6e40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107a6e44 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6e46 ret  */
  ESPCHK(0x107a6de0u, _esp0);
  ESP += 4; return;
L_107a6e47:;
  /* 107a6e47 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 107a6e4a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107a6e4e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6e50 ret  */
  ESPCHK(0x107a6de0u, _esp0);
  ESP += 4; return;
L_107a6e51:;
  /* 107a6e51 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 107a6e54 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107a6e58 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6e5a ret  */
  ESPCHK(0x107a6de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e60 @ 0x107a6e60 (249 bytes, 93 insns) */
void f_107a6e60(void) {
  FTRACE(0x107a6e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6e60 push ebp */
  push32((uint32_t)(EBP));
  /* 107a6e61 mov ebp, esp */
  EBP = (ESP);
  /* 107a6e63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6e66 push ebx */
  push32((uint32_t)(EBX));
  /* 107a6e67 push esi */
  push32((uint32_t)(ESI));
  /* 107a6e68 push edi */
  push32((uint32_t)(EDI));
  /* 107a6e69 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 107a6e6c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107a6e6f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 107a6e72 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_107a6e75:;
  /* 107a6e75 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6e79 jne 0x107a6e99 */
  if (!C.zf) goto L_107a6e99;
  /* 107a6e7b push 0x107caf10 */
  push32((uint32_t)(0x107caf10u));
  /* 107a6e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6e82 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 107a6e84 push 0x107caf04 */
  push32((uint32_t)(0x107caf04u));
  /* 107a6e89 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a6e8b call 0x107a3070 */
  push32(0x107a6e90u); f_107a3070();
  /* 107a6e90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6e93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6e96 jne 0x107a6e99 */
  if (!C.zf) goto L_107a6e99;
  /* 107a6e98 int3  */
  x86_unimpl("int3 @ 0x107a6e98");
L_107a6e99:;
  /* 107a6e99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a6e9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a6e9d jne 0x107a6e75 */
  if (!C.zf) goto L_107a6e75;
L_107a6e9f:;
  /* 107a6e9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6ea3 jne 0x107a6ec3 */
  if (!C.zf) goto L_107a6ec3;
  /* 107a6ea5 push 0x107caef4 */
  push32((uint32_t)(0x107caef4u));
  /* 107a6eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6eac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 107a6eae push 0x107caf04 */
  push32((uint32_t)(0x107caf04u));
  /* 107a6eb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a6eb5 call 0x107a3070 */
  push32(0x107a6ebau); f_107a3070();
  /* 107a6eba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6ebd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6ec0 jne 0x107a6ec3 */
  if (!C.zf) goto L_107a6ec3;
  /* 107a6ec2 int3  */
  x86_unimpl("int3 @ 0x107a6ec2");
L_107a6ec3:;
  /* 107a6ec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a6ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a6ec7 jne 0x107a6e9f */
  if (!C.zf) goto L_107a6e9f;
  /* 107a6ec9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6ecc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 107a6ed3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6ed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6ed9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107a6edc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6edf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a6ee2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107a6ee4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6ee7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a6eea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 107a6eed mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107a6ef0 push edx */
  push32((uint32_t)(EDX));
  /* 107a6ef1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a6ef4 push eax */
  push32((uint32_t)(EAX));
  /* 107a6ef5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6ef8 push ecx */
  push32((uint32_t)(ECX));
  /* 107a6ef9 call 0x107aaf40 */
  push32(0x107a6efeu); f_107aaf40();
  /* 107a6efe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6f01 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107a6f04 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6f07 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a6f0a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a6f0d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6f10 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107a6f13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6f16 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a6f1a jl 0x107a6f3e */
  if ((C.sf!=C.of)) goto L_107a6f3e;
  /* 107a6f1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6f1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a6f21 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 107a6f24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a6f26 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a6f2c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 107a6f2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6f32 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a6f34 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6f37 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6f3a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107a6f3c jmp 0x107a6f4f */
  goto L_107a6f4f;
L_107a6f3e:;
  /* 107a6f3e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a6f41 push eax */
  push32((uint32_t)(EAX));
  /* 107a6f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a6f44 call 0x107aacc0 */
  push32(0x107a6f49u); f_107aacc0();
  /* 107a6f49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6f4c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_107a6f4f:;
  /* 107a6f4f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a6f52 pop edi */
  EDI = (pop32());
  /* 107a6f53 pop esi */
  ESI = (pop32());
  /* 107a6f54 pop ebx */
  EBX = (pop32());
  /* 107a6f55 mov esp, ebp */
  ESP = (EBP);
  /* 107a6f57 pop ebp */
  EBP = (pop32());
  /* 107a6f58 ret  */
  ESPCHK(0x107a6e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f60 @ 0x107a6f60 (7 bytes, 3 insns) */
void f_107a6f60(void) {
  FTRACE(0x107a6f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6f60 push edi */
  push32((uint32_t)(EDI));
  /* 107a6f61 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 107a6f65 jmp 0x107a6fd1 */
  jmp_ind(0x107a6fd1u); return;
}

/* FUN_10006f70 @ 0x107a6f70 (224 bytes, 84 insns) */
void f_107a6f70(void) {
  FTRACE(0x107a6f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a6f70 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107a6f74 push edi */
  push32((uint32_t)(EDI));
  /* 107a6f75 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107a6f7b je 0x107a6f8c */
  if (C.zf) goto L_107a6f8c;
L_107a6f7d:;
  /* 107a6f7d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 107a6f7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 107a6f80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107a6f82 je 0x107a6fbf */
  if (C.zf) goto L_107a6fbf;
  /* 107a6f84 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107a6f8a jne 0x107a6f7d */
  if (!C.zf) goto L_107a6f7d;
L_107a6f8c:;
  /* 107a6f8c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 107a6f8e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 107a6f93 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6f95 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a6f98 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a6f9a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6f9d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 107a6fa2 je 0x107a6f8c */
  if (C.zf) goto L_107a6f8c;
  /* 107a6fa4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 107a6fa7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107a6fa9 je 0x107a6fce */
  if (C.zf) goto L_107a6fce;
  /* 107a6fab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 107a6fad je 0x107a6fc9 */
  if (C.zf) goto L_107a6fc9;
  /* 107a6faf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 107a6fb4 je 0x107a6fc4 */
  if (C.zf) goto L_107a6fc4;
  /* 107a6fb6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 107a6fbb je 0x107a6fbf */
  if (C.zf) goto L_107a6fbf;
  /* 107a6fbd jmp 0x107a6f8c */
  goto L_107a6f8c;
L_107a6fbf:;
  /* 107a6fbf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 107a6fc2 jmp 0x107a6fd1 */
  goto L_107a6fd1;
L_107a6fc4:;
  /* 107a6fc4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 107a6fc7 jmp 0x107a6fd1 */
  goto L_107a6fd1;
L_107a6fc9:;
  /* 107a6fc9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 107a6fcc jmp 0x107a6fd1 */
  goto L_107a6fd1;
L_107a6fce:;
  /* 107a6fce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_107a6fd1:;
  /* 107a6fd1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 107a6fd5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107a6fdb je 0x107a6ff6 */
  if (C.zf) goto L_107a6ff6;
L_107a6fdd:;
  /* 107a6fdd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107a6fdf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 107a6fe0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 107a6fe2 je 0x107a7048 */
  if (C.zf) goto L_107a7048;
  /* 107a6fe4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 107a6fe6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107a6fe7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 107a6fed jne 0x107a6fdd */
  if (!C.zf) goto L_107a6fdd;
  /* 107a6fef jmp 0x107a6ff6 */
  goto L_107a6ff6;
L_107a6ff1:;
  /* 107a6ff1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107a6ff3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_107a6ff6:;
  /* 107a6ff6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 107a6ffb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 107a6ffd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a6fff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a7002 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a7004 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a7006 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7009 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 107a700e je 0x107a6ff1 */
  if (C.zf) goto L_107a6ff1;
  /* 107a7010 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 107a7012 je 0x107a7048 */
  if (C.zf) goto L_107a7048;
  /* 107a7014 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 107a7016 je 0x107a703f */
  if (C.zf) goto L_107a703f;
  /* 107a7018 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 107a701e je 0x107a7032 */
  if (C.zf) goto L_107a7032;
  /* 107a7020 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 107a7026 je 0x107a702a */
  if (C.zf) goto L_107a702a;
  /* 107a7028 jmp 0x107a6ff1 */
  goto L_107a6ff1;
L_107a702a:;
  /* 107a702a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107a702c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107a7030 pop edi */
  EDI = (pop32());
  /* 107a7031 ret  */
  ESPCHK(0x107a6f70u, _esp0);
  ESP += 4; return;
L_107a7032:;
  /* 107a7032 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 107a7035 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107a7039 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 107a703d pop edi */
  EDI = (pop32());
  /* 107a703e ret  */
  ESPCHK(0x107a6f70u, _esp0);
  ESP += 4; return;
L_107a703f:;
  /* 107a703f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 107a7042 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107a7046 pop edi */
  EDI = (pop32());
  /* 107a7047 ret  */
  ESPCHK(0x107a6f70u, _esp0);
  ESP += 4; return;
L_107a7048:;
  /* 107a7048 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 107a704a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107a704e pop edi */
  EDI = (pop32());
  /* 107a704f ret  */
  ESPCHK(0x107a6f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007050 @ 0x107a7050 (243 bytes, 91 insns) */
void f_107a7050(void) {
  FTRACE(0x107a7050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7050 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7051 mov ebp, esp */
  EBP = (ESP);
  /* 107a7053 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7056 push ebx */
  push32((uint32_t)(EBX));
  /* 107a7057 push esi */
  push32((uint32_t)(ESI));
  /* 107a7058 push edi */
  push32((uint32_t)(EDI));
  /* 107a7059 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 107a705c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107a705f:;
  /* 107a705f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7063 jne 0x107a7083 */
  if (!C.zf) goto L_107a7083;
  /* 107a7065 push 0x107caf10 */
  push32((uint32_t)(0x107caf10u));
  /* 107a706a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a706c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 107a706e push 0x107caf20 */
  push32((uint32_t)(0x107caf20u));
  /* 107a7073 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a7075 call 0x107a3070 */
  push32(0x107a707au); f_107a3070();
  /* 107a707a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a707d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7080 jne 0x107a7083 */
  if (!C.zf) goto L_107a7083;
  /* 107a7082 int3  */
  x86_unimpl("int3 @ 0x107a7082");
L_107a7083:;
  /* 107a7083 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a7085 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a7087 jne 0x107a705f */
  if (!C.zf) goto L_107a705f;
L_107a7089:;
  /* 107a7089 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a708d jne 0x107a70ad */
  if (!C.zf) goto L_107a70ad;
  /* 107a708f push 0x107caef4 */
  push32((uint32_t)(0x107caef4u));
  /* 107a7094 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a7096 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 107a7098 push 0x107caf20 */
  push32((uint32_t)(0x107caf20u));
  /* 107a709d push 2 */
  push32((uint32_t)(0x2u));
  /* 107a709f call 0x107a3070 */
  push32(0x107a70a4u); f_107a3070();
  /* 107a70a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a70a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a70aa jne 0x107a70ad */
  if (!C.zf) goto L_107a70ad;
  /* 107a70ac int3  */
  x86_unimpl("int3 @ 0x107a70ac");
L_107a70ad:;
  /* 107a70ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a70af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a70b1 jne 0x107a7089 */
  if (!C.zf) goto L_107a7089;
  /* 107a70b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a70b6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 107a70bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a70c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a70c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107a70c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a70c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a70cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107a70ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a70d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a70d4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 107a70d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107a70da push ecx */
  push32((uint32_t)(ECX));
  /* 107a70db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a70de push edx */
  push32((uint32_t)(EDX));
  /* 107a70df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a70e2 push eax */
  push32((uint32_t)(EAX));
  /* 107a70e3 call 0x107aaf40 */
  push32(0x107a70e8u); f_107aaf40();
  /* 107a70e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a70eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107a70ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a70f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a70f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a70f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a70fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107a70fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a7100 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7104 jl 0x107a7128 */
  if ((C.sf!=C.of)) goto L_107a7128;
  /* 107a7106 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a7109 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a710b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107a710e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107a7110 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107a7116 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107a7119 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a711c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a711e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7121 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a7124 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107a7126 jmp 0x107a7139 */
  goto L_107a7139;
L_107a7128:;
  /* 107a7128 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107a712b push edx */
  push32((uint32_t)(EDX));
  /* 107a712c push 0 */
  push32((uint32_t)(0x0u));
  /* 107a712e call 0x107aacc0 */
  push32(0x107a7133u); f_107aacc0();
  /* 107a7133 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7136 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_107a7139:;
  /* 107a7139 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107a713c pop edi */
  EDI = (pop32());
  /* 107a713d pop esi */
  ESI = (pop32());
  /* 107a713e pop ebx */
  EBX = (pop32());
  /* 107a713f mov esp, ebp */
  ESP = (EBP);
  /* 107a7141 pop ebp */
  EBP = (pop32());
  /* 107a7142 ret  */
  ESPCHK(0x107a7050u, _esp0);
  ESP += 4; return;
}

/* FUN_10007150 @ 0x107a7150 (47 bytes, 17 insns) */
void f_107a7150(void) {
  FTRACE(0x107a7150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7150 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7151 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7156 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 107a715a jb 0x107a7170 */
  if (C.cf) goto L_107a7170;
L_107a715c:;
  /* 107a715c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7162 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7167 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 107a7169 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a716e jae 0x107a715c */
  if (!C.cf) goto L_107a715c;
L_107a7170:;
  /* 107a7170 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7172 mov eax, esp */
  EAX = (ESP);
  /* 107a7174 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 107a7176 mov esp, ecx */
  ESP = (ECX);
  /* 107a7178 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a717a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a717d push eax */
  push32((uint32_t)(EAX));
  /* 107a717e ret  */
  ESPCHK(0x107a7150u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x107a7180 (507 bytes, 151 insns) [1 switch table(s)] */
void f_107a7180(void) {
  FTRACE(0x107a7180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7180 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7181 mov ebp, esp */
  EBP = (ESP);
  /* 107a7183 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7186 push esi */
  push32((uint32_t)(ESI));
  /* 107a7187 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a718b je 0x107a7193 */
  if (C.zf) goto L_107a7193;
  /* 107a718d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7191 jne 0x107a7198 */
  if (!C.zf) goto L_107a7198;
L_107a7193:;
  /* 107a7193 jmp 0x107a7368 */
  goto L_107a7368;
L_107a7198:;
  /* 107a7198 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a719c je 0x107a71b4 */
  if (C.zf) goto L_107a71b4;
  /* 107a719e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a71a2 je 0x107a71b4 */
  if (C.zf) goto L_107a71b4;
  /* 107a71a4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a71a8 je 0x107a71b4 */
  if (C.zf) goto L_107a71b4;
  /* 107a71aa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a71ae jne 0x107a7291 */
  if (!C.zf) goto L_107a7291;
L_107a71b4:;
  /* 107a71b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a71b6 call 0x107a79b0 */
  push32(0x107a71bbu); f_107a79b0();
  /* 107a71bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a71be cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a71c2 je 0x107a71ca */
  if (C.zf) goto L_107a71ca;
  /* 107a71c4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a71c8 jne 0x107a720f */
  if (!C.zf) goto L_107a720f;
L_107a71ca:;
  /* 107a71ca cmp dword ptr [0x107cf6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a71d1 jne 0x107a720f */
  if (!C.zf) goto L_107a720f;
  /* 107a71d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a71d5 push 0x107a73b0 */
  push32((uint32_t)(0x107a73b0u));
  /* 107a71da call dword ptr [0x107d2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2378))), 0x107a71e0u);
  /* 107a71e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a71e3 jne 0x107a71f1 */
  if (!C.zf) goto L_107a71f1;
  /* 107a71e5 mov dword ptr [0x107cf6a8], 1 */
  w32((uint32_t)(0x107cf6a8), (0x1u));
  /* 107a71ef jmp 0x107a720f */
  goto L_107a720f;
L_107a71f1:;
  /* 107a71f1 call dword ptr [0x107d2330] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2330))), 0x107a71f7u);
  /* 107a71f7 mov esi, eax */
  ESI = (EAX);
  /* 107a71f9 call 0x107abe90 */
  push32(0x107a71feu); f_107abe90();
  /* 107a71fe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 107a7200 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a7202 call 0x107a7a50 */
  push32(0x107a7207u); f_107a7a50();
  /* 107a7207 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a720a jmp 0x107a7368 */
  goto L_107a7368;
L_107a720f:;
  /* 107a720f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7212 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107a7215 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7218 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a721b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107a721e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7222 ja 0x107a7282 */
  if ((!C.cf&&!C.zf)) goto L_107a7282;
  /* 107a7224 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7227 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a7229 mov dl, byte ptr [eax + 0x107a738f] */
  DL = (r8((uint32_t)(EAX + 0x107a738f)));
  /* 107a722f jmp dword ptr [edx*4 + 0x107a737b] */
  switch (EDX) {
    case 0: goto L_107a7236;
    case 1: goto L_107a7270;
    case 2: goto L_107a724a;
    case 3: goto L_107a725d;
    case 4: goto L_107a7282;
    default: x86_unimpl("switch@0x107a722f out of table"); return;
  }
L_107a7236:;
  /* 107a7236 mov ecx, dword ptr [0x107cf698] */
  ECX = (r32((uint32_t)(0x107cf698)));
  /* 107a723c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107a723f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7242 mov dword ptr [0x107cf698], edx */
  w32((uint32_t)(0x107cf698), (EDX));
  /* 107a7248 jmp 0x107a7282 */
  goto L_107a7282;
L_107a724a:;
  /* 107a724a mov eax, dword ptr [0x107cf69c] */
  EAX = (r32((uint32_t)(0x107cf69c)));
  /* 107a724f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a7252 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7255 mov dword ptr [0x107cf69c], ecx */
  w32((uint32_t)(0x107cf69c), (ECX));
  /* 107a725b jmp 0x107a7282 */
  goto L_107a7282;
L_107a725d:;
  /* 107a725d mov edx, dword ptr [0x107cf6a0] */
  EDX = (r32((uint32_t)(0x107cf6a0)));
  /* 107a7263 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107a7266 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7269 mov dword ptr [0x107cf6a0], eax */
  w32((uint32_t)(0x107cf6a0), (EAX));
  /* 107a726e jmp 0x107a7282 */
  goto L_107a7282;
L_107a7270:;
  /* 107a7270 mov ecx, dword ptr [0x107cf6a4] */
  ECX = (r32((uint32_t)(0x107cf6a4)));
  /* 107a7276 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107a7279 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a727c mov dword ptr [0x107cf6a4], edx */
  w32((uint32_t)(0x107cf6a4), (EDX));
L_107a7282:;
  /* 107a7282 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a7284 call 0x107a7a50 */
  push32(0x107a7289u); f_107a7a50();
  /* 107a7289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a728c jmp 0x107a7363 */
  goto L_107a7363;
L_107a7291:;
  /* 107a7291 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7295 je 0x107a72a8 */
  if (C.zf) goto L_107a72a8;
  /* 107a7297 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a729b je 0x107a72a8 */
  if (C.zf) goto L_107a72a8;
  /* 107a729d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a72a1 je 0x107a72a8 */
  if (C.zf) goto L_107a72a8;
  /* 107a72a3 jmp 0x107a7368 */
  goto L_107a7368;
L_107a72a8:;
  /* 107a72a8 call 0x107a39f0 */
  push32(0x107a72adu); f_107a39f0();
  /* 107a72ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a72b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a72b3 cmp dword ptr [eax + 0x50], 0x107cdc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x107cdc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a72ba jne 0x107a7305 */
  if (!C.zf) goto L_107a7305;
  /* 107a72bc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 107a72c1 push 0x107caf2c */
  push32((uint32_t)(0x107caf2cu));
  /* 107a72c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a72c8 mov ecx, dword ptr [0x107cdc80] */
  ECX = (r32((uint32_t)(0x107cdc80)));
  /* 107a72ce push ecx */
  push32((uint32_t)(ECX));
  /* 107a72cf call 0x107a3fb0 */
  push32(0x107a72d4u); f_107a3fb0();
  /* 107a72d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a72d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a72da mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 107a72dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a72e0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a72e4 je 0x107a7303 */
  if (C.zf) goto L_107a7303;
  /* 107a72e6 mov ecx, dword ptr [0x107cdc80] */
  ECX = (r32((uint32_t)(0x107cdc80)));
  /* 107a72ec push ecx */
  push32((uint32_t)(ECX));
  /* 107a72ed push 0x107cdc00 */
  push32((uint32_t)(0x107cdc00u));
  /* 107a72f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a72f5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 107a72f8 push eax */
  push32((uint32_t)(EAX));
  /* 107a72f9 call 0x107aa890 */
  push32(0x107a72feu); f_107aa890();
  /* 107a72fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7301 jmp 0x107a7305 */
  goto L_107a7305;
L_107a7303:;
  /* 107a7303 jmp 0x107a7368 */
  goto L_107a7368;
L_107a7305:;
  /* 107a7305 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7308 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107a730b push edx */
  push32((uint32_t)(EDX));
  /* 107a730c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a730f push eax */
  push32((uint32_t)(EAX));
  /* 107a7310 call 0x107a7690 */
  push32(0x107a7315u); f_107a7690();
  /* 107a7315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7318 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a731b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a731f jne 0x107a7323 */
  if (!C.zf) goto L_107a7323;
  /* 107a7321 jmp 0x107a7368 */
  goto L_107a7368;
L_107a7323:;
  /* 107a7323 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7326 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107a7329 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107a732c:;
  /* 107a732c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a732f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a7332 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7335 jne 0x107a7363 */
  if (!C.zf) goto L_107a7363;
  /* 107a7337 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a733a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a733d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107a7340 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7343 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7346 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107a7349 mov edx, dword ptr [0x107cdc84] */
  EDX = (r32((uint32_t)(0x107cdc84)));
  /* 107a734f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a7352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7355 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 107a7358 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a735a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a735d jb 0x107a7361 */
  if (C.cf) goto L_107a7361;
  /* 107a735f jmp 0x107a7363 */
  goto L_107a7363;
L_107a7361:;
  /* 107a7361 jmp 0x107a732c */
  goto L_107a732c;
L_107a7363:;
  /* 107a7363 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a7366 jmp 0x107a7376 */
  goto L_107a7376;
L_107a7368:;
  /* 107a7368 call 0x107abe80 */
  push32(0x107a736du); f_107abe80();
  /* 107a736d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 107a7373 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107a7376:;
  /* 107a7376 pop esi */
  ESI = (pop32());
  /* 107a7377 mov esp, ebp */
  ESP = (EBP);
  /* 107a7379 pop ebp */
  EBP = (pop32());
  /* 107a737a ret  */
  ESPCHK(0x107a7180u, _esp0);
  ESP += 4; return;
}

/* FUN_100073b0 @ 0x107a73b0 (146 bytes, 45 insns) */
void f_107a73b0(void) {
  FTRACE(0x107a73b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a73b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a73b1 mov ebp, esp */
  EBP = (ESP);
  /* 107a73b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a73b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a73b8 call 0x107a79b0 */
  push32(0x107a73bdu); f_107a79b0();
  /* 107a73bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a73c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a73c4 jne 0x107a73de */
  if (!C.zf) goto L_107a73de;
  /* 107a73c6 mov dword ptr [ebp - 8], 0x107cf698 */
  w32((uint32_t)(EBP + -0x8), (0x107cf698u));
  /* 107a73cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a73d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107a73d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107a73d5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 107a73dc jmp 0x107a73f4 */
  goto L_107a73f4;
L_107a73de:;
  /* 107a73de mov dword ptr [ebp - 8], 0x107cf69c */
  w32((uint32_t)(EBP + -0x8), (0x107cf69cu));
  /* 107a73e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a73e8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a73ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a73ed mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_107a73f4:;
  /* 107a73f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a73f8 jne 0x107a7408 */
  if (!C.zf) goto L_107a7408;
  /* 107a73fa push 1 */
  push32((uint32_t)(0x1u));
  /* 107a73fc call 0x107a7a50 */
  push32(0x107a7401u); f_107a7a50();
  /* 107a7401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7404 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a7406 jmp 0x107a743c */
  goto L_107a743c;
L_107a7408:;
  /* 107a7408 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a740c je 0x107a742d */
  if (C.zf) goto L_107a742d;
  /* 107a740e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7411 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 107a7417 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a7419 call 0x107a7a50 */
  push32(0x107a741eu); f_107a7a50();
  /* 107a741e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7421 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7424 push edx */
  push32((uint32_t)(EDX));
  /* 107a7425 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x107a7428u);
  /* 107a7428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a742b jmp 0x107a7437 */
  goto L_107a7437;
L_107a742d:;
  /* 107a742d push 1 */
  push32((uint32_t)(0x1u));
  /* 107a742f call 0x107a7a50 */
  push32(0x107a7434u); f_107a7a50();
  /* 107a7434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a7437:;
  /* 107a7437 mov eax, 1 */
  EAX = (0x1u);
L_107a743c:;
  /* 107a743c mov esp, ebp */
  ESP = (EBP);
  /* 107a743e pop ebp */
  EBP = (pop32());
  /* 107a743f ret 4 */
  ESPCHK(0x107a73b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007450 @ 0x107a7450 (522 bytes, 162 insns) [1 switch table(s)] */
void f_107a7450(void) {
  FTRACE(0x107a7450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7450 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7451 mov ebp, esp */
  EBP = (ESP);
  /* 107a7453 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7456 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107a745d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7460 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107a7463 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a7466 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7469 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107a746c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7470 ja 0x107a751e */
  if ((!C.cf&&!C.zf)) goto L_107a751e;
  /* 107a7476 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107a7479 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a747b mov dl, byte ptr [eax + 0x107a7672] */
  DL = (r8((uint32_t)(EAX + 0x107a7672)));
  /* 107a7481 jmp dword ptr [edx*4 + 0x107a765a] */
  switch (EDX) {
    case 0: goto L_107a7488;
    case 1: goto L_107a74f3;
    case 2: goto L_107a74d9;
    case 3: goto L_107a74a5;
    case 4: goto L_107a74bf;
    case 5: goto L_107a751e;
    default: x86_unimpl("switch@0x107a7481 out of table"); return;
  }
L_107a7488:;
  /* 107a7488 mov dword ptr [ebp - 0x18], 0x107cf698 */
  w32((uint32_t)(EBP + -0x18), (0x107cf698u));
  /* 107a748f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a7492 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a7494 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107a7497 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a749a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a749d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a74a0 jmp 0x107a7526 */
  goto L_107a7526;
L_107a74a5:;
  /* 107a74a5 mov dword ptr [ebp - 0x18], 0x107cf69c */
  w32((uint32_t)(EBP + -0x18), (0x107cf69cu));
  /* 107a74ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a74af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a74b1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107a74b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a74b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a74ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a74bd jmp 0x107a7526 */
  goto L_107a7526;
L_107a74bf:;
  /* 107a74bf mov dword ptr [ebp - 0x18], 0x107cf6a0 */
  w32((uint32_t)(EBP + -0x18), (0x107cf6a0u));
  /* 107a74c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a74c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a74cb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107a74ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a74d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a74d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a74d7 jmp 0x107a7526 */
  goto L_107a7526;
L_107a74d9:;
  /* 107a74d9 mov dword ptr [ebp - 0x18], 0x107cf6a4 */
  w32((uint32_t)(EBP + -0x18), (0x107cf6a4u));
  /* 107a74e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a74e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a74e5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107a74e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a74eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a74ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107a74f1 jmp 0x107a7526 */
  goto L_107a7526;
L_107a74f3:;
  /* 107a74f3 call 0x107a39f0 */
  push32(0x107a74f8u); f_107a39f0();
  /* 107a74f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a74fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a74fe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107a7501 push edx */
  push32((uint32_t)(EDX));
  /* 107a7502 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7505 push eax */
  push32((uint32_t)(EAX));
  /* 107a7506 call 0x107a7690 */
  push32(0x107a750bu); f_107a7690();
  /* 107a750b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a750e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7511 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107a7514 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a7517 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a7519 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107a751c jmp 0x107a7526 */
  goto L_107a7526;
L_107a751e:;
  /* 107a751e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a7521 jmp 0x107a7656 */
  goto L_107a7656;
L_107a7526:;
  /* 107a7526 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a752a je 0x107a7536 */
  if (C.zf) goto L_107a7536;
  /* 107a752c push 1 */
  push32((uint32_t)(0x1u));
  /* 107a752e call 0x107a79b0 */
  push32(0x107a7533u); f_107a79b0();
  /* 107a7533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a7536:;
  /* 107a7536 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a753a jne 0x107a7553 */
  if (!C.zf) goto L_107a7553;
  /* 107a753c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7540 je 0x107a754c */
  if (C.zf) goto L_107a754c;
  /* 107a7542 push 1 */
  push32((uint32_t)(0x1u));
  /* 107a7544 call 0x107a7a50 */
  push32(0x107a7549u); f_107a7a50();
  /* 107a7549 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a754c:;
  /* 107a754c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a754e jmp 0x107a7656 */
  goto L_107a7656;
L_107a7553:;
  /* 107a7553 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7557 jne 0x107a7570 */
  if (!C.zf) goto L_107a7570;
  /* 107a7559 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a755d je 0x107a7569 */
  if (C.zf) goto L_107a7569;
  /* 107a755f push 1 */
  push32((uint32_t)(0x1u));
  /* 107a7561 call 0x107a7a50 */
  push32(0x107a7566u); f_107a7a50();
  /* 107a7566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a7569:;
  /* 107a7569 push 3 */
  push32((uint32_t)(0x3u));
  /* 107a756b call 0x107a3770 */
  push32(0x107a7570u); f_107a3770();
L_107a7570:;
  /* 107a7570 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7574 je 0x107a7582 */
  if (C.zf) goto L_107a7582;
  /* 107a7576 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a757a je 0x107a7582 */
  if (C.zf) goto L_107a7582;
  /* 107a757c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7580 jne 0x107a75ae */
  if (!C.zf) goto L_107a75ae;
L_107a7582:;
  /* 107a7582 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7585 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 107a7588 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107a758b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a758e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 107a7595 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7599 jne 0x107a75ae */
  if (!C.zf) goto L_107a75ae;
  /* 107a759b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a759e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 107a75a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107a75a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a75a7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_107a75ae:;
  /* 107a75ae cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a75b2 jne 0x107a75f0 */
  if (!C.zf) goto L_107a75f0;
  /* 107a75b4 mov eax, dword ptr [0x107cdc78] */
  EAX = (r32((uint32_t)(0x107cdc78)));
  /* 107a75b9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107a75bc jmp 0x107a75c7 */
  goto L_107a75c7;
L_107a75be:;
  /* 107a75be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a75c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a75c4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107a75c7:;
  /* 107a75c7 mov edx, dword ptr [0x107cdc78] */
  EDX = (r32((uint32_t)(0x107cdc78)));
  /* 107a75cd add edx, dword ptr [0x107cdc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x107cdc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a75d3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a75d6 jge 0x107a75ee */
  if ((C.sf==C.of)) goto L_107a75ee;
  /* 107a75d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a75db imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a75de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a75e1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107a75e4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 107a75ec jmp 0x107a75be */
  goto L_107a75be;
L_107a75ee:;
  /* 107a75ee jmp 0x107a75f9 */
  goto L_107a75f9;
L_107a75f0:;
  /* 107a75f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a75f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_107a75f9:;
  /* 107a75f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a75fd je 0x107a7609 */
  if (C.zf) goto L_107a7609;
  /* 107a75ff push 1 */
  push32((uint32_t)(0x1u));
  /* 107a7601 call 0x107a7a50 */
  push32(0x107a7606u); f_107a7a50();
  /* 107a7606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a7609:;
  /* 107a7609 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a760d jne 0x107a7620 */
  if (!C.zf) goto L_107a7620;
  /* 107a760f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7612 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 107a7615 push edx */
  push32((uint32_t)(EDX));
  /* 107a7616 push 8 */
  push32((uint32_t)(0x8u));
  /* 107a7618 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x107a761bu);
  /* 107a761b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a761e jmp 0x107a762a */
  goto L_107a762a;
L_107a7620:;
  /* 107a7620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7623 push eax */
  push32((uint32_t)(EAX));
  /* 107a7624 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x107a7627u);
  /* 107a7627 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a762a:;
  /* 107a762a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a762e je 0x107a763c */
  if (C.zf) goto L_107a763c;
  /* 107a7630 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7634 je 0x107a763c */
  if (C.zf) goto L_107a763c;
  /* 107a7636 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a763a jne 0x107a7654 */
  if (!C.zf) goto L_107a7654;
L_107a763c:;
  /* 107a763c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a763f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a7642 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 107a7645 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7649 jne 0x107a7654 */
  if (!C.zf) goto L_107a7654;
  /* 107a764b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a764e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7651 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_107a7654:;
  /* 107a7654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107a7656:;
  /* 107a7656 mov esp, ebp */
  ESP = (EBP);
  /* 107a7658 pop ebp */
  EBP = (pop32());
  /* 107a7659 ret  */
  ESPCHK(0x107a7450u, _esp0);
  ESP += 4; return;
}

/* FUN_10007690 @ 0x107a7690 (91 bytes, 35 insns) */
void f_107a7690(void) {
  FTRACE(0x107a7690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7690 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7691 mov ebp, esp */
  EBP = (ESP);
  /* 107a7693 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7694 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7697 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a769a:;
  /* 107a769a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a769d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107a76a0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a76a3 je 0x107a76c3 */
  if (C.zf) goto L_107a76c3;
  /* 107a76a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a76a8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a76ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a76ae mov ecx, dword ptr [0x107cdc84] */
  ECX = (r32((uint32_t)(0x107cdc84)));
  /* 107a76b4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a76b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a76ba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a76bc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a76bf jae 0x107a76c3 */
  if (!C.cf) goto L_107a76c3;
  /* 107a76c1 jmp 0x107a769a */
  goto L_107a769a;
L_107a76c3:;
  /* 107a76c3 mov eax, dword ptr [0x107cdc84] */
  EAX = (r32((uint32_t)(0x107cdc84)));
  /* 107a76c8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a76cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a76ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a76d0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a76d3 jae 0x107a76e5 */
  if (!C.cf) goto L_107a76e5;
  /* 107a76d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a76d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107a76db cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a76de jne 0x107a76e5 */
  if (!C.zf) goto L_107a76e5;
  /* 107a76e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a76e3 jmp 0x107a76e7 */
  goto L_107a76e7;
L_107a76e5:;
  /* 107a76e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107a76e7:;
  /* 107a76e7 mov esp, ebp */
  ESP = (EBP);
  /* 107a76e9 pop ebp */
  EBP = (pop32());
  /* 107a76ea ret  */
  ESPCHK(0x107a7690u, _esp0);
  ESP += 4; return;
}

/* FUN_100076f0 @ 0x107a76f0 (13 bytes, 6 insns) */
void f_107a76f0(void) {
  FTRACE(0x107a76f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a76f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a76f1 mov ebp, esp */
  EBP = (ESP);
  /* 107a76f3 call 0x107a39f0 */
  push32(0x107a76f8u); f_107a39f0();
  /* 107a76f8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a76fb pop ebp */
  EBP = (pop32());
  /* 107a76fc ret  */
  ESPCHK(0x107a76f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007700 @ 0x107a7700 (13 bytes, 6 insns) */
void f_107a7700(void) {
  FTRACE(0x107a7700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7700 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7701 mov ebp, esp */
  EBP = (ESP);
  /* 107a7703 call 0x107a39f0 */
  push32(0x107a7708u); f_107a39f0();
  /* 107a7708 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a770b pop ebp */
  EBP = (pop32());
  /* 107a770c ret  */
  ESPCHK(0x107a7700u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x107a7710 (187 bytes, 54 insns) */
void f_107a7710(void) {
  FTRACE(0x107a7710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7710 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7711 mov ebp, esp */
  EBP = (ESP);
  /* 107a7713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7716 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107a771d cmp dword ptr [0x107cf6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7724 jne 0x107a7783 */
  if (!C.zf) goto L_107a7783;
  /* 107a7726 push 0x107ca358 */
  push32((uint32_t)(0x107ca358u));
  /* 107a772b call dword ptr [0x107d2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2300))), 0x107a7731u);
  /* 107a7731 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a7734 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7738 je 0x107a7757 */
  if (C.zf) goto L_107a7757;
  /* 107a773a push 0x107caf5c */
  push32((uint32_t)(0x107caf5cu));
  /* 107a773f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7742 push eax */
  push32((uint32_t)(EAX));
  /* 107a7743 call dword ptr [0x107d22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22fc))), 0x107a7749u);
  /* 107a7749 mov dword ptr [0x107cf6ac], eax */
  w32((uint32_t)(0x107cf6ac), (EAX));
  /* 107a774e cmp dword ptr [0x107cf6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7755 jne 0x107a775b */
  if (!C.zf) goto L_107a775b;
L_107a7757:;
  /* 107a7757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a7759 jmp 0x107a77c7 */
  goto L_107a77c7;
L_107a775b:;
  /* 107a775b push 0x107caf4c */
  push32((uint32_t)(0x107caf4cu));
  /* 107a7760 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7763 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7764 call dword ptr [0x107d22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22fc))), 0x107a776au);
  /* 107a776a mov dword ptr [0x107cf6b0], eax */
  w32((uint32_t)(0x107cf6b0), (EAX));
  /* 107a776f push 0x107caf38 */
  push32((uint32_t)(0x107caf38u));
  /* 107a7774 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7777 push edx */
  push32((uint32_t)(EDX));
  /* 107a7778 call dword ptr [0x107d22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d22fc))), 0x107a777eu);
  /* 107a777e mov dword ptr [0x107cf6b4], eax */
  w32((uint32_t)(0x107cf6b4), (EAX));
L_107a7783:;
  /* 107a7783 cmp dword ptr [0x107cf6b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf6b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a778a je 0x107a7795 */
  if (C.zf) goto L_107a7795;
  /* 107a778c call dword ptr [0x107cf6b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf6b0))), 0x107a7792u);
  /* 107a7792 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a7795:;
  /* 107a7795 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7799 je 0x107a77b1 */
  if (C.zf) goto L_107a77b1;
  /* 107a779b cmp dword ptr [0x107cf6b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107cf6b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a77a2 je 0x107a77b1 */
  if (C.zf) goto L_107a77b1;
  /* 107a77a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a77a7 push eax */
  push32((uint32_t)(EAX));
  /* 107a77a8 call dword ptr [0x107cf6b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf6b4))), 0x107a77aeu);
  /* 107a77ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a77b1:;
  /* 107a77b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107a77b4 push ecx */
  push32((uint32_t)(ECX));
  /* 107a77b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a77b8 push edx */
  push32((uint32_t)(EDX));
  /* 107a77b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a77bc push eax */
  push32((uint32_t)(EAX));
  /* 107a77bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a77c0 push ecx */
  push32((uint32_t)(ECX));
  /* 107a77c1 call dword ptr [0x107cf6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x107cf6ac))), 0x107a77c7u);
L_107a77c7:;
  /* 107a77c7 mov esp, ebp */
  ESP = (EBP);
  /* 107a77c9 pop ebp */
  EBP = (pop32());
  /* 107a77ca ret  */
  ESPCHK(0x107a7710u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x107a77d0 (254 bytes, 109 insns) */
void f_107a77d0(void) {
  FTRACE(0x107a77d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a77d0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 107a77d4 push edi */
  push32((uint32_t)(EDI));
  /* 107a77d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107a77d7 je 0x107a7853 */
  if (C.zf) goto L_107a7853;
  /* 107a77d9 push esi */
  push32((uint32_t)(ESI));
  /* 107a77da push ebx */
  push32((uint32_t)(EBX));
  /* 107a77db mov ebx, ecx */
  EBX = (ECX);
  /* 107a77dd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 107a77e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 107a77e7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 107a77eb jne 0x107a77f4 */
  if (!C.zf) goto L_107a77f4;
  /* 107a77ed shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107a77f0 jne 0x107a7861 */
  if (!C.zf) goto L_107a7861;
  /* 107a77f2 jmp 0x107a7815 */
  goto L_107a7815;
L_107a77f4:;
  /* 107a77f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107a77f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107a77f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107a77f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107a77fa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107a77fb je 0x107a7822 */
  if (C.zf) goto L_107a7822;
  /* 107a77fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107a77ff je 0x107a782a */
  if (C.zf) goto L_107a782a;
  /* 107a7801 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 107a7807 jne 0x107a77f4 */
  if (!C.zf) goto L_107a77f4;
  /* 107a7809 mov ebx, ecx */
  EBX = (ECX);
  /* 107a780b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107a780e jne 0x107a7861 */
  if (!C.zf) goto L_107a7861;
L_107a7810:;
  /* 107a7810 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 107a7813 je 0x107a7822 */
  if (C.zf) goto L_107a7822;
L_107a7815:;
  /* 107a7815 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107a7817 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107a7818 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107a781a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107a781b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107a781d je 0x107a784e */
  if (C.zf) goto L_107a784e;
  /* 107a781f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 107a7820 jne 0x107a7815 */
  if (!C.zf) goto L_107a7815;
L_107a7822:;
  /* 107a7822 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 107a7826 pop ebx */
  EBX = (pop32());
  /* 107a7827 pop esi */
  ESI = (pop32());
  /* 107a7828 pop edi */
  EDI = (pop32());
  /* 107a7829 ret  */
  ESPCHK(0x107a77d0u, _esp0);
  ESP += 4; return;
L_107a782a:;
  /* 107a782a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107a7830 je 0x107a7844 */
  if (C.zf) goto L_107a7844;
L_107a7832:;
  /* 107a7832 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107a7834 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107a7835 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107a7836 je 0x107a78c6 */
  if (C.zf) goto L_107a78c6;
  /* 107a783c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107a7842 jne 0x107a7832 */
  if (!C.zf) goto L_107a7832;
L_107a7844:;
  /* 107a7844 mov ebx, ecx */
  EBX = (ECX);
  /* 107a7846 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107a7849 jne 0x107a78b7 */
  if (!C.zf) goto L_107a78b7;
L_107a784b:;
  /* 107a784b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107a784d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_107a784e:;
  /* 107a784e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 107a784f jne 0x107a784b */
  if (!C.zf) goto L_107a784b;
  /* 107a7851 pop ebx */
  EBX = (pop32());
  /* 107a7852 pop esi */
  ESI = (pop32());
L_107a7853:;
  /* 107a7853 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107a7857 pop edi */
  EDI = (pop32());
  /* 107a7858 ret  */
  ESPCHK(0x107a77d0u, _esp0);
  ESP += 4; return;
L_107a7859:;
  /* 107a7859 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107a785b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107a785e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107a785f je 0x107a7810 */
  if (C.zf) goto L_107a7810;
L_107a7861:;
  /* 107a7861 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 107a7866 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 107a7868 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a786a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a786d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107a786f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 107a7871 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7874 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 107a7879 je 0x107a7859 */
  if (C.zf) goto L_107a7859;
  /* 107a787b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 107a787d je 0x107a78ab */
  if (C.zf) goto L_107a78ab;
  /* 107a787f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 107a7881 je 0x107a78a1 */
  if (C.zf) goto L_107a78a1;
  /* 107a7883 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 107a7889 je 0x107a7897 */
  if (C.zf) goto L_107a7897;
  /* 107a788b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 107a7891 jne 0x107a7859 */
  if (!C.zf) goto L_107a7859;
  /* 107a7893 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107a7895 jmp 0x107a78af */
  goto L_107a78af;
L_107a7897:;
  /* 107a7897 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a789d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107a789f jmp 0x107a78af */
  goto L_107a78af;
L_107a78a1:;
  /* 107a78a1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107a78a7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107a78a9 jmp 0x107a78af */
  goto L_107a78af;
L_107a78ab:;
  /* 107a78ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107a78ad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_107a78af:;
  /* 107a78af add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107a78b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a78b4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107a78b5 je 0x107a78c1 */
  if (C.zf) goto L_107a78c1;
L_107a78b7:;
  /* 107a78b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107a78b9:;
  /* 107a78b9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 107a78bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107a78be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107a78bf jne 0x107a78b9 */
  if (!C.zf) goto L_107a78b9;
L_107a78c1:;
  /* 107a78c1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 107a78c4 jne 0x107a784b */
  if (!C.zf) goto L_107a784b;
L_107a78c6:;
  /* 107a78c6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 107a78ca pop ebx */
  EBX = (pop32());
  /* 107a78cb pop esi */
  ESI = (pop32());
  /* 107a78cc pop edi */
  EDI = (pop32());
  /* 107a78cd ret  */
  ESPCHK(0x107a77d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078d0 @ 0x107a78d0 (55 bytes, 16 insns) */
void f_107a78d0(void) {
  FTRACE(0x107a78d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a78d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a78d1 mov ebp, esp */
  EBP = (ESP);
  /* 107a78d3 mov eax, dword ptr [0x107cdb84] */
  EAX = (r32((uint32_t)(0x107cdb84)));
  /* 107a78d8 push eax */
  push32((uint32_t)(EAX));
  /* 107a78d9 call dword ptr [0x107d2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2364))), 0x107a78dfu);
  /* 107a78df mov ecx, dword ptr [0x107cdb74] */
  ECX = (r32((uint32_t)(0x107cdb74)));
  /* 107a78e5 push ecx */
  push32((uint32_t)(ECX));
  /* 107a78e6 call dword ptr [0x107d2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2364))), 0x107a78ecu);
  /* 107a78ec mov edx, dword ptr [0x107cdb64] */
  EDX = (r32((uint32_t)(0x107cdb64)));
  /* 107a78f2 push edx */
  push32((uint32_t)(EDX));
  /* 107a78f3 call dword ptr [0x107d2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2364))), 0x107a78f9u);
  /* 107a78f9 mov eax, dword ptr [0x107cdb44] */
  EAX = (r32((uint32_t)(0x107cdb44)));
  /* 107a78fe push eax */
  push32((uint32_t)(EAX));
  /* 107a78ff call dword ptr [0x107d2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2364))), 0x107a7905u);
  /* 107a7905 pop ebp */
  EBP = (pop32());
  /* 107a7906 ret  */
  ESPCHK(0x107a78d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007910 @ 0x107a7910 (159 bytes, 47 insns) */
void f_107a7910(void) {
  FTRACE(0x107a7910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7910 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7911 mov ebp, esp */
  EBP = (ESP);
  /* 107a7913 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107a791b jmp 0x107a7926 */
  goto L_107a7926;
L_107a791d:;
  /* 107a791d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7923 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a7926:;
  /* 107a7926 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a792a jge 0x107a7979 */
  if ((C.sf==C.of)) goto L_107a7979;
  /* 107a792c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a792f cmp dword ptr [ecx*4 + 0x107cdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x107cdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7937 je 0x107a7977 */
  if (C.zf) goto L_107a7977;
  /* 107a7939 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a793d je 0x107a7977 */
  if (C.zf) goto L_107a7977;
  /* 107a793f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7943 je 0x107a7977 */
  if (C.zf) goto L_107a7977;
  /* 107a7945 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7949 je 0x107a7977 */
  if (C.zf) goto L_107a7977;
  /* 107a794b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a794f je 0x107a7977 */
  if (C.zf) goto L_107a7977;
  /* 107a7951 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7954 mov eax, dword ptr [edx*4 + 0x107cdb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x107cdb40)));
  /* 107a795b push eax */
  push32((uint32_t)(EAX));
  /* 107a795c call dword ptr [0x107d2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2344))), 0x107a7962u);
  /* 107a7962 push 2 */
  push32((uint32_t)(0x2u));
  /* 107a7964 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7967 mov edx, dword ptr [ecx*4 + 0x107cdb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x107cdb40)));
  /* 107a796e push edx */
  push32((uint32_t)(EDX));
  /* 107a796f call 0x107a4a40 */
  push32(0x107a7974u); f_107a4a40();
  /* 107a7974 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a7977:;
  /* 107a7977 jmp 0x107a791d */
  goto L_107a791d;
L_107a7979:;
  /* 107a7979 mov eax, dword ptr [0x107cdb64] */
  EAX = (r32((uint32_t)(0x107cdb64)));
  /* 107a797e push eax */
  push32((uint32_t)(EAX));
  /* 107a797f call dword ptr [0x107d2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2344))), 0x107a7985u);
  /* 107a7985 mov ecx, dword ptr [0x107cdb74] */
  ECX = (r32((uint32_t)(0x107cdb74)));
  /* 107a798b push ecx */
  push32((uint32_t)(ECX));
  /* 107a798c call dword ptr [0x107d2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2344))), 0x107a7992u);
  /* 107a7992 mov edx, dword ptr [0x107cdb84] */
  EDX = (r32((uint32_t)(0x107cdb84)));
  /* 107a7998 push edx */
  push32((uint32_t)(EDX));
  /* 107a7999 call dword ptr [0x107d2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2344))), 0x107a799fu);
  /* 107a799f mov eax, dword ptr [0x107cdb44] */
  EAX = (r32((uint32_t)(0x107cdb44)));
  /* 107a79a4 push eax */
  push32((uint32_t)(EAX));
  /* 107a79a5 call dword ptr [0x107d2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2344))), 0x107a79abu);
  /* 107a79ab mov esp, ebp */
  ESP = (EBP);
  /* 107a79ad pop ebp */
  EBP = (pop32());
  /* 107a79ae ret  */
  ESPCHK(0x107a7910u, _esp0);
  ESP += 4; return;
}

/* FUN_100079b0 @ 0x107a79b0 (151 bytes, 46 insns) */
void f_107a79b0(void) {
  FTRACE(0x107a79b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a79b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a79b1 mov ebp, esp */
  EBP = (ESP);
  /* 107a79b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a79b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a79b7 cmp dword ptr [eax*4 + 0x107cdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x107cdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a79bf jne 0x107a7a32 */
  if (!C.zf) goto L_107a7a32;
  /* 107a79c1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 107a79c6 push 0x107caf68 */
  push32((uint32_t)(0x107caf68u));
  /* 107a79cb push 2 */
  push32((uint32_t)(0x2u));
  /* 107a79cd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 107a79cf call 0x107a3fb0 */
  push32(0x107a79d4u); f_107a3fb0();
  /* 107a79d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a79d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a79da cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a79de jne 0x107a79ea */
  if (!C.zf) goto L_107a79ea;
  /* 107a79e0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107a79e2 call 0x107a2f20 */
  push32(0x107a79e7u); f_107a2f20();
  /* 107a79e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a79ea:;
  /* 107a79ea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107a79ec call 0x107a79b0 */
  push32(0x107a79f1u); f_107a79b0();
  /* 107a79f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a79f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a79f7 cmp dword ptr [ecx*4 + 0x107cdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x107cdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a79ff jne 0x107a7a1a */
  if (!C.zf) goto L_107a7a1a;
  /* 107a7a01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7a04 push edx */
  push32((uint32_t)(EDX));
  /* 107a7a05 call dword ptr [0x107d2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2364))), 0x107a7a0bu);
  /* 107a7a0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7a0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7a11 mov dword ptr [eax*4 + 0x107cdb40], ecx */
  w32((uint32_t)(EAX*4 + 0x107cdb40), (ECX));
  /* 107a7a18 jmp 0x107a7a28 */
  goto L_107a7a28;
L_107a7a1a:;
  /* 107a7a1a push 2 */
  push32((uint32_t)(0x2u));
  /* 107a7a1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7a1f push edx */
  push32((uint32_t)(EDX));
  /* 107a7a20 call 0x107a4a40 */
  push32(0x107a7a25u); f_107a4a40();
  /* 107a7a25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a7a28:;
  /* 107a7a28 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107a7a2a call 0x107a7a50 */
  push32(0x107a7a2fu); f_107a7a50();
  /* 107a7a2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a7a32:;
  /* 107a7a32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7a35 mov ecx, dword ptr [eax*4 + 0x107cdb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x107cdb40)));
  /* 107a7a3c push ecx */
  push32((uint32_t)(ECX));
  /* 107a7a3d call dword ptr [0x107d237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d237c))), 0x107a7a43u);
  /* 107a7a43 mov esp, ebp */
  ESP = (EBP);
  /* 107a7a45 pop ebp */
  EBP = (pop32());
  /* 107a7a46 ret  */
  ESPCHK(0x107a79b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a50 @ 0x107a7a50 (22 bytes, 8 insns) */
void f_107a7a50(void) {
  FTRACE(0x107a7a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7a50 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7a51 mov ebp, esp */
  EBP = (ESP);
  /* 107a7a53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7a56 mov ecx, dword ptr [eax*4 + 0x107cdb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x107cdb40)));
  /* 107a7a5d push ecx */
  push32((uint32_t)(ECX));
  /* 107a7a5e call dword ptr [0x107d2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2380))), 0x107a7a64u);
  /* 107a7a64 pop ebp */
  EBP = (pop32());
  /* 107a7a65 ret  */
  ESPCHK(0x107a7a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a70 @ 0x107a7a70 (26 bytes, 10 insns) */
void f_107a7a70(void) {
  FTRACE(0x107a7a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7a70 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7a71 mov ebp, esp */
  EBP = (ESP);
  /* 107a7a73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7a76 push eax */
  push32((uint32_t)(EAX));
  /* 107a7a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 107a7a79 call dword ptr [0x107d2384] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2384))), 0x107a7a7fu);
  /* 107a7a7f push 0xff */
  push32((uint32_t)(0xffu));
  /* 107a7a84 call dword ptr [0x107d230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d230c))), 0x107a7a8au);
  /* 107a7a8a pop ebp */
  EBP = (pop32());
  /* 107a7a8b ret  */
  ESPCHK(0x107a7a70u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x107a7a90 (446 bytes, 130 insns) */
void f_107a7a90(void) {
  FTRACE(0x107a7a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7a90 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7a91 mov ebp, esp */
  EBP = (ESP);
  /* 107a7a93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7a96 call 0x107a39f0 */
  push32(0x107a7a9bu); f_107a39f0();
  /* 107a7a9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a7a9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7aa1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 107a7aa4 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7aa8 push edx */
  push32((uint32_t)(EDX));
  /* 107a7aa9 call 0x107a7c50 */
  push32(0x107a7aaeu); f_107a7c50();
  /* 107a7aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7ab1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107a7ab4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7ab8 je 0x107a7ac3 */
  if (C.zf) goto L_107a7ac3;
  /* 107a7aba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7abd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7ac1 jne 0x107a7ad2 */
  if (!C.zf) goto L_107a7ad2;
L_107a7ac3:;
  /* 107a7ac3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7ac7 call dword ptr [0x107d2388] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2388))), 0x107a7acdu);
  /* 107a7acd jmp 0x107a7c4a */
  goto L_107a7c4a;
L_107a7ad2:;
  /* 107a7ad2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7ad5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7ad9 jne 0x107a7aef */
  if (!C.zf) goto L_107a7aef;
  /* 107a7adb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7ade mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 107a7ae5 mov eax, 1 */
  EAX = (0x1u);
  /* 107a7aea jmp 0x107a7c4a */
  goto L_107a7c4a;
L_107a7aef:;
  /* 107a7aef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7af2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7af6 jne 0x107a7b00 */
  if (!C.zf) goto L_107a7b00;
  /* 107a7af8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107a7afb jmp 0x107a7c4a */
  goto L_107a7c4a;
L_107a7b00:;
  /* 107a7b00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7b03 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107a7b06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a7b09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7b0c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 107a7b0f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107a7b12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7b15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7b18 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 107a7b1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7b1e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7b22 jne 0x107a7c27 */
  if (!C.zf) goto L_107a7c27;
  /* 107a7b28 mov eax, dword ptr [0x107cdc78] */
  EAX = (r32((uint32_t)(0x107cdc78)));
  /* 107a7b2d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107a7b30 jmp 0x107a7b3b */
  goto L_107a7b3b;
L_107a7b32:;
  /* 107a7b32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a7b35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7b38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_107a7b3b:;
  /* 107a7b3b mov edx, dword ptr [0x107cdc78] */
  EDX = (r32((uint32_t)(0x107cdc78)));
  /* 107a7b41 add edx, dword ptr [0x107cdc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x107cdc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7b47 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7b4a jge 0x107a7b62 */
  if ((C.sf==C.of)) goto L_107a7b62;
  /* 107a7b4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107a7b4f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a7b52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7b55 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107a7b58 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 107a7b60 jmp 0x107a7b32 */
  goto L_107a7b32;
L_107a7b62:;
  /* 107a7b62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7b65 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 107a7b68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107a7b6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7b6e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7b74 jne 0x107a7b85 */
  if (!C.zf) goto L_107a7b85;
  /* 107a7b76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7b79 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 107a7b80 jmp 0x107a7c0d */
  goto L_107a7c0d;
L_107a7b85:;
  /* 107a7b85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7b88 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7b8e jne 0x107a7b9c */
  if (!C.zf) goto L_107a7b9c;
  /* 107a7b90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7b93 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 107a7b9a jmp 0x107a7c0d */
  goto L_107a7c0d;
L_107a7b9c:;
  /* 107a7b9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7b9f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7ba5 jne 0x107a7bb3 */
  if (!C.zf) goto L_107a7bb3;
  /* 107a7ba7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7baa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 107a7bb1 jmp 0x107a7c0d */
  goto L_107a7c0d;
L_107a7bb3:;
  /* 107a7bb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7bb6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7bbc jne 0x107a7bca */
  if (!C.zf) goto L_107a7bca;
  /* 107a7bbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7bc1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 107a7bc8 jmp 0x107a7c0d */
  goto L_107a7c0d;
L_107a7bca:;
  /* 107a7bca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7bcd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7bd3 jne 0x107a7be1 */
  if (!C.zf) goto L_107a7be1;
  /* 107a7bd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7bd8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 107a7bdf jmp 0x107a7c0d */
  goto L_107a7c0d;
L_107a7be1:;
  /* 107a7be1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7be4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7bea jne 0x107a7bf8 */
  if (!C.zf) goto L_107a7bf8;
  /* 107a7bec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7bef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 107a7bf6 jmp 0x107a7c0d */
  goto L_107a7c0d;
L_107a7bf8:;
  /* 107a7bf8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7bfb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7c01 jne 0x107a7c0d */
  if (!C.zf) goto L_107a7c0d;
  /* 107a7c03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7c06 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_107a7c0d:;
  /* 107a7c0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7c10 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 107a7c13 push edx */
  push32((uint32_t)(EDX));
  /* 107a7c14 push 8 */
  push32((uint32_t)(0x8u));
  /* 107a7c16 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x107a7c19u);
  /* 107a7c19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7c1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7c1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107a7c22 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 107a7c25 jmp 0x107a7c3e */
  goto L_107a7c3e;
L_107a7c27:;
  /* 107a7c27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7c2a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 107a7c31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107a7c34 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107a7c37 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7c38 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x107a7c3bu);
  /* 107a7c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107a7c3e:;
  /* 107a7c3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7c41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107a7c44 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 107a7c47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107a7c4a:;
  /* 107a7c4a mov esp, ebp */
  ESP = (EBP);
  /* 107a7c4c pop ebp */
  EBP = (pop32());
  /* 107a7c4d ret  */
  ESPCHK(0x107a7a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c50 @ 0x107a7c50 (89 bytes, 35 insns) */
void f_107a7c50(void) {
  FTRACE(0x107a7c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7c50 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7c51 mov ebp, esp */
  EBP = (ESP);
  /* 107a7c53 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7c54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7c57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107a7c5a:;
  /* 107a7c5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7c5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107a7c5f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7c62 je 0x107a7c82 */
  if (C.zf) goto L_107a7c82;
  /* 107a7c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7c67 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7c6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a7c6d mov ecx, dword ptr [0x107cdc84] */
  ECX = (r32((uint32_t)(0x107cdc84)));
  /* 107a7c73 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a7c76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7c79 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7c7b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7c7e jae 0x107a7c82 */
  if (!C.cf) goto L_107a7c82;
  /* 107a7c80 jmp 0x107a7c5a */
  goto L_107a7c5a;
L_107a7c82:;
  /* 107a7c82 mov eax, dword ptr [0x107cdc84] */
  EAX = (r32((uint32_t)(0x107cdc84)));
  /* 107a7c87 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107a7c8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7c8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7c8f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7c92 jae 0x107a7c9e */
  if (!C.cf) goto L_107a7c9e;
  /* 107a7c94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7c97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107a7c99 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7c9c je 0x107a7ca2 */
  if (C.zf) goto L_107a7ca2;
L_107a7c9e:;
  /* 107a7c9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a7ca0 jmp 0x107a7ca5 */
  goto L_107a7ca5;
L_107a7ca2:;
  /* 107a7ca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107a7ca5:;
  /* 107a7ca5 mov esp, ebp */
  ESP = (EBP);
  /* 107a7ca7 pop ebp */
  EBP = (pop32());
  /* 107a7ca8 ret  */
  ESPCHK(0x107a7c50u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x107a7cb0 (48 bytes, 17 insns) */
void f_107a7cb0(void) {
  FTRACE(0x107a7cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7cb1 mov ebp, esp */
  EBP = (ESP);
  /* 107a7cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7cb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a7cb6 call 0x107a79b0 */
  push32(0x107a7cbbu); f_107a79b0();
  /* 107a7cbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7cbe mov eax, dword ptr [0x107cf71c] */
  EAX = (r32((uint32_t)(0x107cf71c)));
  /* 107a7cc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a7cc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7cc9 mov dword ptr [0x107cf71c], ecx */
  w32((uint32_t)(0x107cf71c), (ECX));
  /* 107a7ccf push 9 */
  push32((uint32_t)(0x9u));
  /* 107a7cd1 call 0x107a7a50 */
  push32(0x107a7cd6u); f_107a7a50();
  /* 107a7cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7cd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7cdc mov esp, ebp */
  ESP = (EBP);
  /* 107a7cde pop ebp */
  EBP = (pop32());
  /* 107a7cdf ret  */
  ESPCHK(0x107a7cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x107a7ce0 (10 bytes, 5 insns) */
void f_107a7ce0(void) {
  FTRACE(0x107a7ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7ce1 mov ebp, esp */
  EBP = (ESP);
  /* 107a7ce3 mov eax, dword ptr [0x107cf71c] */
  EAX = (r32((uint32_t)(0x107cf71c)));
  /* 107a7ce8 pop ebp */
  EBP = (pop32());
  /* 107a7ce9 ret  */
  ESPCHK(0x107a7ce0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x107a7cf0 (45 bytes, 19 insns) */
void f_107a7cf0(void) {
  FTRACE(0x107a7cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7cf1 mov ebp, esp */
  EBP = (ESP);
  /* 107a7cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7cf4 mov eax, dword ptr [0x107cf71c] */
  EAX = (r32((uint32_t)(0x107cf71c)));
  /* 107a7cf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a7cfc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7d00 je 0x107a7d10 */
  if (C.zf) goto L_107a7d10;
  /* 107a7d02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7d05 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7d06 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x107a7d09u);
  /* 107a7d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7d0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a7d0e jne 0x107a7d14 */
  if (!C.zf) goto L_107a7d14;
L_107a7d10:;
  /* 107a7d10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a7d12 jmp 0x107a7d19 */
  goto L_107a7d19;
L_107a7d14:;
  /* 107a7d14 mov eax, 1 */
  EAX = (0x1u);
L_107a7d19:;
  /* 107a7d19 mov esp, ebp */
  ESP = (EBP);
  /* 107a7d1b pop ebp */
  EBP = (pop32());
  /* 107a7d1c ret  */
  ESPCHK(0x107a7cf0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x107a7d20 (88 bytes, 40 insns) */
void f_107a7d20(void) {
  FTRACE(0x107a7d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7d20 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 107a7d24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107a7d28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a7d2a je 0x107a7d73 */
  if (C.zf) goto L_107a7d73;
  /* 107a7d2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a7d2e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 107a7d32 push edi */
  push32((uint32_t)(EDI));
  /* 107a7d33 mov edi, ecx */
  EDI = (ECX);
  /* 107a7d35 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7d38 jb 0x107a7d67 */
  if (C.cf) goto L_107a7d67;
  /* 107a7d3a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107a7d3c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 107a7d3f je 0x107a7d49 */
  if (C.zf) goto L_107a7d49;
  /* 107a7d41 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_107a7d43:;
  /* 107a7d43 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107a7d45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107a7d46 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107a7d47 jne 0x107a7d43 */
  if (!C.zf) goto L_107a7d43;
L_107a7d49:;
  /* 107a7d49 mov ecx, eax */
  ECX = (EAX);
  /* 107a7d4b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 107a7d4e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7d50 mov ecx, eax */
  ECX = (EAX);
  /* 107a7d52 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107a7d55 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7d57 mov ecx, edx */
  ECX = (EDX);
  /* 107a7d59 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107a7d5c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107a7d5f je 0x107a7d67 */
  if (C.zf) goto L_107a7d67;
  /* 107a7d61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107a7d63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107a7d65 je 0x107a7d6d */
  if (C.zf) goto L_107a7d6d;
L_107a7d67:;
  /* 107a7d67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107a7d69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107a7d6a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 107a7d6b jne 0x107a7d67 */
  if (!C.zf) goto L_107a7d67;
L_107a7d6d:;
  /* 107a7d6d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107a7d71 pop edi */
  EDI = (pop32());
  /* 107a7d72 ret  */
  ESPCHK(0x107a7d20u, _esp0);
  ESP += 4; return;
L_107a7d73:;
  /* 107a7d73 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 107a7d77 ret  */
  ESPCHK(0x107a7d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d80 @ 0x107a7d80 (23 bytes, 10 insns) */
void f_107a7d80(void) {
  FTRACE(0x107a7d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7d80 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7d81 mov ebp, esp */
  EBP = (ESP);
  /* 107a7d83 mov eax, dword ptr [0x107cf718] */
  EAX = (r32((uint32_t)(0x107cf718)));
  /* 107a7d88 push eax */
  push32((uint32_t)(EAX));
  /* 107a7d89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7d8c push ecx */
  push32((uint32_t)(ECX));
  /* 107a7d8d call 0x107a7da0 */
  push32(0x107a7d92u); f_107a7da0();
  /* 107a7d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7d95 pop ebp */
  EBP = (pop32());
  /* 107a7d96 ret  */
  ESPCHK(0x107a7d80u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x107a7da0 (87 bytes, 34 insns) */
void f_107a7da0(void) {
  FTRACE(0x107a7da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7da0 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7da1 mov ebp, esp */
  EBP = (ESP);
  /* 107a7da3 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7da4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7da8 jbe 0x107a7dae */
  if ((C.cf||C.zf)) goto L_107a7dae;
  /* 107a7daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a7dac jmp 0x107a7df3 */
  goto L_107a7df3;
L_107a7dae:;
  /* 107a7dae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7db2 ja 0x107a7dc5 */
  if ((!C.cf&&!C.zf)) goto L_107a7dc5;
  /* 107a7db4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7db7 push eax */
  push32((uint32_t)(EAX));
  /* 107a7db8 call 0x107a7e00 */
  push32(0x107a7dbdu); f_107a7e00();
  /* 107a7dbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7dc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a7dc3 jmp 0x107a7dcc */
  goto L_107a7dcc;
L_107a7dc5:;
  /* 107a7dc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107a7dcc:;
  /* 107a7dcc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7dd0 jne 0x107a7dd8 */
  if (!C.zf) goto L_107a7dd8;
  /* 107a7dd2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7dd6 jne 0x107a7ddd */
  if (!C.zf) goto L_107a7ddd;
L_107a7dd8:;
  /* 107a7dd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7ddb jmp 0x107a7df3 */
  goto L_107a7df3;
L_107a7ddd:;
  /* 107a7ddd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7de0 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7de1 call 0x107a7cf0 */
  push32(0x107a7de6u); f_107a7cf0();
  /* 107a7de6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7de9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a7deb jne 0x107a7df1 */
  if (!C.zf) goto L_107a7df1;
  /* 107a7ded xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a7def jmp 0x107a7df3 */
  goto L_107a7df3;
L_107a7df1:;
  /* 107a7df1 jmp 0x107a7dae */
  goto L_107a7dae;
L_107a7df3:;
  /* 107a7df3 mov esp, ebp */
  ESP = (EBP);
  /* 107a7df5 pop ebp */
  EBP = (pop32());
  /* 107a7df6 ret  */
  ESPCHK(0x107a7da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x107a7e00 (109 bytes, 37 insns) */
void f_107a7e00(void) {
  FTRACE(0x107a7e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7e00 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7e01 mov ebp, esp */
  EBP = (ESP);
  /* 107a7e03 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7e04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7e07 cmp eax, dword ptr [0x107cdc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107cdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7e0d ja 0x107a7e3d */
  if ((!C.cf&&!C.zf)) goto L_107a7e3d;
  /* 107a7e0f push 9 */
  push32((uint32_t)(0x9u));
  /* 107a7e11 call 0x107a79b0 */
  push32(0x107a7e16u); f_107a79b0();
  /* 107a7e16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7e19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7e1c push ecx */
  push32((uint32_t)(ECX));
  /* 107a7e1d call 0x107a8940 */
  push32(0x107a7e22u); f_107a8940();
  /* 107a7e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7e25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107a7e28 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a7e2a call 0x107a7a50 */
  push32(0x107a7e2fu); f_107a7a50();
  /* 107a7e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7e32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7e36 je 0x107a7e3d */
  if (C.zf) goto L_107a7e3d;
  /* 107a7e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7e3b jmp 0x107a7e69 */
  goto L_107a7e69;
L_107a7e3d:;
  /* 107a7e3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7e41 jne 0x107a7e4a */
  if (!C.zf) goto L_107a7e4a;
  /* 107a7e43 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_107a7e4a:;
  /* 107a7e4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7e4d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7e50 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 107a7e53 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107a7e56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7e59 push eax */
  push32((uint32_t)(EAX));
  /* 107a7e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 107a7e5c mov ecx, dword ptr [0x107d0ecc] */
  ECX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a7e62 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7e63 call dword ptr [0x107d238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d238c))), 0x107a7e69u);
L_107a7e69:;
  /* 107a7e69 mov esp, ebp */
  ESP = (EBP);
  /* 107a7e6b pop ebp */
  EBP = (pop32());
  /* 107a7e6c ret  */
  ESPCHK(0x107a7e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e70 @ 0x107a7e70 (10 bytes, 5 insns) */
void f_107a7e70(void) {
  FTRACE(0x107a7e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7e70 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7e71 mov ebp, esp */
  EBP = (ESP);
  /* 107a7e73 mov eax, 1 */
  EAX = (0x1u);
  /* 107a7e78 pop ebp */
  EBP = (pop32());
  /* 107a7e79 ret  */
  ESPCHK(0x107a7e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x107a7e80 (173 bytes, 59 insns) */
void f_107a7e80(void) {
  FTRACE(0x107a7e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107a7e80 push ebp */
  push32((uint32_t)(EBP));
  /* 107a7e81 mov ebp, esp */
  EBP = (ESP);
  /* 107a7e83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107a7e86 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7e8a jbe 0x107a7e93 */
  if ((C.cf||C.zf)) goto L_107a7e93;
  /* 107a7e8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107a7e8e jmp 0x107a7f29 */
  goto L_107a7f29;
L_107a7e93:;
  /* 107a7e93 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a7e95 call 0x107a79b0 */
  push32(0x107a7e9au); f_107a79b0();
  /* 107a7e9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7e9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7ea0 push eax */
  push32((uint32_t)(EAX));
  /* 107a7ea1 call 0x107a82b0 */
  push32(0x107a7ea6u); f_107a82b0();
  /* 107a7ea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7ea9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107a7eac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7eb0 je 0x107a7ef1 */
  if (C.zf) goto L_107a7ef1;
  /* 107a7eb2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107a7eb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7ebc cmp ecx, dword ptr [0x107cdc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107cdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7ec2 ja 0x107a7ee2 */
  if ((!C.cf&&!C.zf)) goto L_107a7ee2;
  /* 107a7ec4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7ec7 push edx */
  push32((uint32_t)(EDX));
  /* 107a7ec8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7ecb push eax */
  push32((uint32_t)(EAX));
  /* 107a7ecc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107a7ecf push ecx */
  push32((uint32_t)(ECX));
  /* 107a7ed0 call 0x107a9180 */
  push32(0x107a7ed5u); f_107a9180();
  /* 107a7ed5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107a7eda je 0x107a7ee2 */
  if (C.zf) goto L_107a7ee2;
  /* 107a7edc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7edf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107a7ee2:;
  /* 107a7ee2 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a7ee4 call 0x107a7a50 */
  push32(0x107a7ee9u); f_107a7a50();
  /* 107a7ee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7eec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107a7eef jmp 0x107a7f29 */
  goto L_107a7f29;
L_107a7ef1:;
  /* 107a7ef1 push 9 */
  push32((uint32_t)(0x9u));
  /* 107a7ef3 call 0x107a7a50 */
  push32(0x107a7ef8u); f_107a7a50();
  /* 107a7ef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7efb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107a7eff jne 0x107a7f08 */
  if (!C.zf) goto L_107a7f08;
  /* 107a7f01 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_107a7f08:;
  /* 107a7f08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7f0b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107a7f0e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 107a7f10 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 107a7f13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107a7f16 push ecx */
  push32((uint32_t)(ECX));
  /* 107a7f17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107a7f1a push edx */
  push32((uint32_t)(EDX));
  /* 107a7f1b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 107a7f1d mov eax, dword ptr [0x107d0ecc] */
  EAX = (r32((uint32_t)(0x107d0ecc)));
  /* 107a7f22 push eax */
  push32((uint32_t)(EAX));
  /* 107a7f23 call dword ptr [0x107d2334] */
  call_ind((uint32_t)(r32((uint32_t)(0x107d2334))), 0x107a7f29u);
L_107a7f29:;
  /* 107a7f29 mov esp, ebp */
  ESP = (EBP);
  /* 107a7f2b pop ebp */
  EBP = (pop32());
  /* 107a7f2c ret  */
  ESPCHK(0x107a7e80u, _esp0);
  ESP += 4; return;
}

