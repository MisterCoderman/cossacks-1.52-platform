#include "recomp.h"

/* thunk_FUN_10006c50 @ 0x125a1005 (5 bytes, 1 insns) */
void f_125a1005(void) {
  FTRACE(0x125a1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a1005 jmp 0x125a6c50 */
  f_125a6c50(); return;
}

/* OnInit @ 0x125a100a (5 bytes, 1 insns) */
void f_125a100a(void) {
  FTRACE(0x125a100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a100a jmp 0x125a10a0 */
  f_125a10a0(); return;
}

/* thunk_FUN_10006ca0 @ 0x125a100f (5 bytes, 1 insns) */
void f_125a100f(void) {
  FTRACE(0x125a100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a100f jmp 0x125a6ca0 */
  f_125a6ca0(); return;
}

/* thunk_FUN_10001040 @ 0x125a1014 (5 bytes, 1 insns) */
void f_125a1014(void) {
  FTRACE(0x125a1014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a1014 jmp 0x125a1040 */
  f_125a1040(); return;
}

/* ProcessScenary @ 0x125a1019 (5 bytes, 1 insns) */
void f_125a1019(void) {
  FTRACE(0x125a1019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a1019 jmp 0x125a2280 */
  f_125a2280(); return;
}

/* FUN_10001040 @ 0x125a1040 (67 bytes, 26 insns) */
void f_125a1040(void) {
  FTRACE(0x125a1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a1040 push ebp */
  push32((uint32_t)(EBP));
  /* 125a1041 mov ebp, esp */
  EBP = (ESP);
  /* 125a1043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a1046 push ebx */
  push32((uint32_t)(EBX));
  /* 125a1047 push esi */
  push32((uint32_t)(ESI));
  /* 125a1048 push edi */
  push32((uint32_t)(EDI));
  /* 125a1049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 125a104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 125a1051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 125a1056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125a1058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1062 je 0x125a1066 */
  if (C.zf) goto L_125a1066;
  /* 125a1064 jmp 0x125a106b */
  goto L_125a106b;
L_125a1066:;
  /* 125a1066 call 0x125a100a */
  push32(0x125a106bu); f_125a100a();
L_125a106b:;
  /* 125a106b mov eax, 1 */
  EAX = (0x1u);
  /* 125a1070 pop edi */
  EDI = (pop32());
  /* 125a1071 pop esi */
  ESI = (pop32());
  /* 125a1072 pop ebx */
  EBX = (pop32());
  /* 125a1073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1078 call 0x125a6e00 */
  push32(0x125a107du); f_125a6e00();
  /* 125a107d mov esp, ebp */
  ESP = (EBP);
  /* 125a107f pop ebp */
  EBP = (pop32());
  /* 125a1080 ret 0xc */
  ESPCHK(0x125a1040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x125a10a0 (3650 bytes, 943 insns) */
void f_125a10a0(void) {
  FTRACE(0x125a10a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a10a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a10a1 mov ebp, esp */
  EBP = (ESP);
  /* 125a10a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a10a6 push ebx */
  push32((uint32_t)(EBX));
  /* 125a10a7 push esi */
  push32((uint32_t)(ESI));
  /* 125a10a8 push edi */
  push32((uint32_t)(EDI));
  /* 125a10a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 125a10ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 125a10b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 125a10b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125a10b8 mov esi, esp */
  ESI = (ESP);
  /* 125a10ba push 0x125ce798 */
  push32((uint32_t)(0x125ce798u));
  /* 125a10bf push 0x125d3630 */
  push32((uint32_t)(0x125d3630u));
  /* 125a10c4 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a10cau);
  /* 125a10ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a10cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a10cf call 0x125a6e00 */
  push32(0x125a10d4u); f_125a6e00();
  /* 125a10d4 mov esi, esp */
  ESI = (ESP);
  /* 125a10d6 push 0x125ce780 */
  push32((uint32_t)(0x125ce780u));
  /* 125a10db push 0x125d3638 */
  push32((uint32_t)(0x125d3638u));
  /* 125a10e0 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a10e6u);
  /* 125a10e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a10e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a10eb call 0x125a6e00 */
  push32(0x125a10f0u); f_125a6e00();
  /* 125a10f0 mov esi, esp */
  ESI = (ESP);
  /* 125a10f2 push 0x125ce774 */
  push32((uint32_t)(0x125ce774u));
  /* 125a10f7 push 0x125d33e8 */
  push32((uint32_t)(0x125d33e8u));
  /* 125a10fc call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a1102u);
  /* 125a1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1107 call 0x125a6e00 */
  push32(0x125a110cu); f_125a6e00();
  /* 125a110c mov esi, esp */
  ESI = (ESP);
  /* 125a110e push 0x125ce768 */
  push32((uint32_t)(0x125ce768u));
  /* 125a1113 push 0x125d33e0 */
  push32((uint32_t)(0x125d33e0u));
  /* 125a1118 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a111eu);
  /* 125a111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1123 call 0x125a6e00 */
  push32(0x125a1128u); f_125a6e00();
  /* 125a1128 mov esi, esp */
  ESI = (ESP);
  /* 125a112a push 0x125ce750 */
  push32((uint32_t)(0x125ce750u));
  /* 125a112f push 0x125d3788 */
  push32((uint32_t)(0x125d3788u));
  /* 125a1134 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a113au);
  /* 125a113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a113f call 0x125a6e00 */
  push32(0x125a1144u); f_125a6e00();
  /* 125a1144 mov esi, esp */
  ESI = (ESP);
  /* 125a1146 push 0x125ce73c */
  push32((uint32_t)(0x125ce73cu));
  /* 125a114b push 0x125d3798 */
  push32((uint32_t)(0x125d3798u));
  /* 125a1150 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a1156u);
  /* 125a1156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a115b call 0x125a6e00 */
  push32(0x125a1160u); f_125a6e00();
  /* 125a1160 mov esi, esp */
  ESI = (ESP);
  /* 125a1162 push 0x125ce724 */
  push32((uint32_t)(0x125ce724u));
  /* 125a1167 push 0x125d3770 */
  push32((uint32_t)(0x125d3770u));
  /* 125a116c call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a1172u);
  /* 125a1172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1177 call 0x125a6e00 */
  push32(0x125a117cu); f_125a6e00();
  /* 125a117c mov esi, esp */
  ESI = (ESP);
  /* 125a117e push 0x125ce714 */
  push32((uint32_t)(0x125ce714u));
  /* 125a1183 push 0x125d3780 */
  push32((uint32_t)(0x125d3780u));
  /* 125a1188 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a118eu);
  /* 125a118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1193 call 0x125a6e00 */
  push32(0x125a1198u); f_125a6e00();
  /* 125a1198 mov esi, esp */
  ESI = (ESP);
  /* 125a119a push 0x125ce704 */
  push32((uint32_t)(0x125ce704u));
  /* 125a119f push 0x125d37d0 */
  push32((uint32_t)(0x125d37d0u));
  /* 125a11a4 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a11aau);
  /* 125a11aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a11ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a11af call 0x125a6e00 */
  push32(0x125a11b4u); f_125a6e00();
  /* 125a11b4 mov esi, esp */
  ESI = (ESP);
  /* 125a11b6 push 0x125ce6f4 */
  push32((uint32_t)(0x125ce6f4u));
  /* 125a11bb push 0x125d37e8 */
  push32((uint32_t)(0x125d37e8u));
  /* 125a11c0 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a11c6u);
  /* 125a11c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a11c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a11cb call 0x125a6e00 */
  push32(0x125a11d0u); f_125a6e00();
  /* 125a11d0 mov esi, esp */
  ESI = (ESP);
  /* 125a11d2 push 0x125ce6e4 */
  push32((uint32_t)(0x125ce6e4u));
  /* 125a11d7 push 0x125d37b0 */
  push32((uint32_t)(0x125d37b0u));
  /* 125a11dc call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a11e2u);
  /* 125a11e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a11e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a11e7 call 0x125a6e00 */
  push32(0x125a11ecu); f_125a6e00();
  /* 125a11ec mov esi, esp */
  ESI = (ESP);
  /* 125a11ee push 0x125ce6cc */
  push32((uint32_t)(0x125ce6ccu));
  /* 125a11f3 push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a11f8 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a11feu);
  /* 125a11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1203 call 0x125a6e00 */
  push32(0x125a1208u); f_125a6e00();
  /* 125a1208 mov esi, esp */
  ESI = (ESP);
  /* 125a120a push 0x125ce6b0 */
  push32((uint32_t)(0x125ce6b0u));
  /* 125a120f push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a1214 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a121au);
  /* 125a121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a121f call 0x125a6e00 */
  push32(0x125a1224u); f_125a6e00();
  /* 125a1224 mov esi, esp */
  ESI = (ESP);
  /* 125a1226 push 0x125ce6a0 */
  push32((uint32_t)(0x125ce6a0u));
  /* 125a122b push 0x125d3778 */
  push32((uint32_t)(0x125d3778u));
  /* 125a1230 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a1236u);
  /* 125a1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a123b call 0x125a6e00 */
  push32(0x125a1240u); f_125a6e00();
  /* 125a1240 mov esi, esp */
  ESI = (ESP);
  /* 125a1242 push 0x125ce688 */
  push32((uint32_t)(0x125ce688u));
  /* 125a1247 push 0x125d37c8 */
  push32((uint32_t)(0x125d37c8u));
  /* 125a124c call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a1252u);
  /* 125a1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1257 call 0x125a6e00 */
  push32(0x125a125cu); f_125a6e00();
  /* 125a125c mov esi, esp */
  ESI = (ESP);
  /* 125a125e push 0x125ce678 */
  push32((uint32_t)(0x125ce678u));
  /* 125a1263 push 0x125d37e0 */
  push32((uint32_t)(0x125d37e0u));
  /* 125a1268 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a126eu);
  /* 125a126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1273 call 0x125a6e00 */
  push32(0x125a1278u); f_125a6e00();
  /* 125a1278 mov esi, esp */
  ESI = (ESP);
  /* 125a127a push 0x125ce660 */
  push32((uint32_t)(0x125ce660u));
  /* 125a127f push 0x125d37a8 */
  push32((uint32_t)(0x125d37a8u));
  /* 125a1284 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a128au);
  /* 125a128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a128f call 0x125a6e00 */
  push32(0x125a1294u); f_125a6e00();
  /* 125a1294 mov esi, esp */
  ESI = (ESP);
  /* 125a1296 push 0x125ce648 */
  push32((uint32_t)(0x125ce648u));
  /* 125a129b push 0x125d3758 */
  push32((uint32_t)(0x125d3758u));
  /* 125a12a0 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a12a6u);
  /* 125a12a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a12a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a12ab call 0x125a6e00 */
  push32(0x125a12b0u); f_125a6e00();
  /* 125a12b0 mov esi, esp */
  ESI = (ESP);
  /* 125a12b2 push 0x125ce638 */
  push32((uint32_t)(0x125ce638u));
  /* 125a12b7 push 0x125d37c0 */
  push32((uint32_t)(0x125d37c0u));
  /* 125a12bc call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a12c2u);
  /* 125a12c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a12c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a12c7 call 0x125a6e00 */
  push32(0x125a12ccu); f_125a6e00();
  /* 125a12cc mov esi, esp */
  ESI = (ESP);
  /* 125a12ce push 0x125ce628 */
  push32((uint32_t)(0x125ce628u));
  /* 125a12d3 push 0x125d3760 */
  push32((uint32_t)(0x125d3760u));
  /* 125a12d8 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a12deu);
  /* 125a12de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a12e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a12e3 call 0x125a6e00 */
  push32(0x125a12e8u); f_125a6e00();
  /* 125a12e8 mov esi, esp */
  ESI = (ESP);
  /* 125a12ea push 0x125ce618 */
  push32((uint32_t)(0x125ce618u));
  /* 125a12ef push 0x125d3748 */
  push32((uint32_t)(0x125d3748u));
  /* 125a12f4 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a12fau);
  /* 125a12fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a12fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a12ff call 0x125a6e00 */
  push32(0x125a1304u); f_125a6e00();
  /* 125a1304 mov esi, esp */
  ESI = (ESP);
  /* 125a1306 push 0x125ce5f8 */
  push32((uint32_t)(0x125ce5f8u));
  /* 125a130b push 0x125d37d8 */
  push32((uint32_t)(0x125d37d8u));
  /* 125a1310 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a1316u);
  /* 125a1316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a131b call 0x125a6e00 */
  push32(0x125a1320u); f_125a6e00();
  /* 125a1320 mov esi, esp */
  ESI = (ESP);
  /* 125a1322 push 0x125ce5e4 */
  push32((uint32_t)(0x125ce5e4u));
  /* 125a1327 push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a132c call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a1332u);
  /* 125a1332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1337 call 0x125a6e00 */
  push32(0x125a133cu); f_125a6e00();
  /* 125a133c mov esi, esp */
  ESI = (ESP);
  /* 125a133e push 0x125ce5c8 */
  push32((uint32_t)(0x125ce5c8u));
  /* 125a1343 push 0x125d37b8 */
  push32((uint32_t)(0x125d37b8u));
  /* 125a1348 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a134eu);
  /* 125a134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1353 call 0x125a6e00 */
  push32(0x125a1358u); f_125a6e00();
  /* 125a1358 mov esi, esp */
  ESI = (ESP);
  /* 125a135a push 0x125ce5b0 */
  push32((uint32_t)(0x125ce5b0u));
  /* 125a135f push 0x125d3750 */
  push32((uint32_t)(0x125d3750u));
  /* 125a1364 call dword ptr [0x125d64c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c4))), 0x125a136au);
  /* 125a136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a136f call 0x125a6e00 */
  push32(0x125a1374u); f_125a6e00();
  /* 125a1374 mov esi, esp */
  ESI = (ESP);
  /* 125a1376 push 0x125ce5a8 */
  push32((uint32_t)(0x125ce5a8u));
  /* 125a137b push 0x125d3530 */
  push32((uint32_t)(0x125d3530u));
  /* 125a1380 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a1386u);
  /* 125a1386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a138b call 0x125a6e00 */
  push32(0x125a1390u); f_125a6e00();
  /* 125a1390 mov esi, esp */
  ESI = (ESP);
  /* 125a1392 push 0x125ce5a0 */
  push32((uint32_t)(0x125ce5a0u));
  /* 125a1397 push 0x125d3540 */
  push32((uint32_t)(0x125d3540u));
  /* 125a139c call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a13a2u);
  /* 125a13a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a13a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a13a7 call 0x125a6e00 */
  push32(0x125a13acu); f_125a6e00();
  /* 125a13ac mov esi, esp */
  ESI = (ESP);
  /* 125a13ae push 0x125ce598 */
  push32((uint32_t)(0x125ce598u));
  /* 125a13b3 push 0x125d3538 */
  push32((uint32_t)(0x125d3538u));
  /* 125a13b8 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a13beu);
  /* 125a13be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a13c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a13c3 call 0x125a6e00 */
  push32(0x125a13c8u); f_125a6e00();
  /* 125a13c8 mov esi, esp */
  ESI = (ESP);
  /* 125a13ca push 0x125ce590 */
  push32((uint32_t)(0x125ce590u));
  /* 125a13cf push 0x125d3550 */
  push32((uint32_t)(0x125d3550u));
  /* 125a13d4 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a13dau);
  /* 125a13da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a13dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a13df call 0x125a6e00 */
  push32(0x125a13e4u); f_125a6e00();
  /* 125a13e4 mov esi, esp */
  ESI = (ESP);
  /* 125a13e6 push 0x125ce588 */
  push32((uint32_t)(0x125ce588u));
  /* 125a13eb push 0x125d3548 */
  push32((uint32_t)(0x125d3548u));
  /* 125a13f0 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a13f6u);
  /* 125a13f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a13f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a13fb call 0x125a6e00 */
  push32(0x125a1400u); f_125a6e00();
  /* 125a1400 mov esi, esp */
  ESI = (ESP);
  /* 125a1402 push 0x125ce580 */
  push32((uint32_t)(0x125ce580u));
  /* 125a1407 push 0x125d3560 */
  push32((uint32_t)(0x125d3560u));
  /* 125a140c call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a1412u);
  /* 125a1412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1417 call 0x125a6e00 */
  push32(0x125a141cu); f_125a6e00();
  /* 125a141c mov esi, esp */
  ESI = (ESP);
  /* 125a141e push 0x125ce578 */
  push32((uint32_t)(0x125ce578u));
  /* 125a1423 push 0x125d3558 */
  push32((uint32_t)(0x125d3558u));
  /* 125a1428 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a142eu);
  /* 125a142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1433 call 0x125a6e00 */
  push32(0x125a1438u); f_125a6e00();
  /* 125a1438 mov esi, esp */
  ESI = (ESP);
  /* 125a143a push 0x125ce570 */
  push32((uint32_t)(0x125ce570u));
  /* 125a143f push 0x125d3570 */
  push32((uint32_t)(0x125d3570u));
  /* 125a1444 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a144au);
  /* 125a144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a144f call 0x125a6e00 */
  push32(0x125a1454u); f_125a6e00();
  /* 125a1454 mov esi, esp */
  ESI = (ESP);
  /* 125a1456 push 0x125ce568 */
  push32((uint32_t)(0x125ce568u));
  /* 125a145b push 0x125d3568 */
  push32((uint32_t)(0x125d3568u));
  /* 125a1460 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a1466u);
  /* 125a1466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a146b call 0x125a6e00 */
  push32(0x125a1470u); f_125a6e00();
  /* 125a1470 mov esi, esp */
  ESI = (ESP);
  /* 125a1472 push 0x125ce55c */
  push32((uint32_t)(0x125ce55cu));
  /* 125a1477 push 0x125d3678 */
  push32((uint32_t)(0x125d3678u));
  /* 125a147c call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a1482u);
  /* 125a1482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1487 call 0x125a6e00 */
  push32(0x125a148cu); f_125a6e00();
  /* 125a148c mov esi, esp */
  ESI = (ESP);
  /* 125a148e push 0x125ce550 */
  push32((uint32_t)(0x125ce550u));
  /* 125a1493 push 0x125d36d8 */
  push32((uint32_t)(0x125d36d8u));
  /* 125a1498 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a149eu);
  /* 125a149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a14a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a14a3 call 0x125a6e00 */
  push32(0x125a14a8u); f_125a6e00();
  /* 125a14a8 mov esi, esp */
  ESI = (ESP);
  /* 125a14aa push 0x125ce544 */
  push32((uint32_t)(0x125ce544u));
  /* 125a14af push 0x125d36e0 */
  push32((uint32_t)(0x125d36e0u));
  /* 125a14b4 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a14bau);
  /* 125a14ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a14bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a14bf call 0x125a6e00 */
  push32(0x125a14c4u); f_125a6e00();
  /* 125a14c4 mov esi, esp */
  ESI = (ESP);
  /* 125a14c6 push 0x125ce538 */
  push32((uint32_t)(0x125ce538u));
  /* 125a14cb push 0x125d36c0 */
  push32((uint32_t)(0x125d36c0u));
  /* 125a14d0 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a14d6u);
  /* 125a14d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a14d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a14db call 0x125a6e00 */
  push32(0x125a14e0u); f_125a6e00();
  /* 125a14e0 mov esi, esp */
  ESI = (ESP);
  /* 125a14e2 push 0x125ce52c */
  push32((uint32_t)(0x125ce52cu));
  /* 125a14e7 push 0x125d36d0 */
  push32((uint32_t)(0x125d36d0u));
  /* 125a14ec call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a14f2u);
  /* 125a14f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a14f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a14f7 call 0x125a6e00 */
  push32(0x125a14fcu); f_125a6e00();
  /* 125a14fc mov esi, esp */
  ESI = (ESP);
  /* 125a14fe push 0x125ce520 */
  push32((uint32_t)(0x125ce520u));
  /* 125a1503 push 0x125d36a8 */
  push32((uint32_t)(0x125d36a8u));
  /* 125a1508 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a150eu);
  /* 125a150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1513 call 0x125a6e00 */
  push32(0x125a1518u); f_125a6e00();
  /* 125a1518 mov esi, esp */
  ESI = (ESP);
  /* 125a151a push 0x125ce514 */
  push32((uint32_t)(0x125ce514u));
  /* 125a151f push 0x125d36b8 */
  push32((uint32_t)(0x125d36b8u));
  /* 125a1524 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a152au);
  /* 125a152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a152f call 0x125a6e00 */
  push32(0x125a1534u); f_125a6e00();
  /* 125a1534 mov esi, esp */
  ESI = (ESP);
  /* 125a1536 push 0x125ce508 */
  push32((uint32_t)(0x125ce508u));
  /* 125a153b push 0x125d3688 */
  push32((uint32_t)(0x125d3688u));
  /* 125a1540 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a1546u);
  /* 125a1546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a154b call 0x125a6e00 */
  push32(0x125a1550u); f_125a6e00();
  /* 125a1550 mov esi, esp */
  ESI = (ESP);
  /* 125a1552 push 0x125ce4fc */
  push32((uint32_t)(0x125ce4fcu));
  /* 125a1557 push 0x125d3698 */
  push32((uint32_t)(0x125d3698u));
  /* 125a155c call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a1562u);
  /* 125a1562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1567 call 0x125a6e00 */
  push32(0x125a156cu); f_125a6e00();
  /* 125a156c mov esi, esp */
  ESI = (ESP);
  /* 125a156e push 0x125ce4f0 */
  push32((uint32_t)(0x125ce4f0u));
  /* 125a1573 push 0x125d36f0 */
  push32((uint32_t)(0x125d36f0u));
  /* 125a1578 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a157eu);
  /* 125a157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1583 call 0x125a6e00 */
  push32(0x125a1588u); f_125a6e00();
  /* 125a1588 mov esi, esp */
  ESI = (ESP);
  /* 125a158a push 0x125ce4e4 */
  push32((uint32_t)(0x125ce4e4u));
  /* 125a158f push 0x125d36c8 */
  push32((uint32_t)(0x125d36c8u));
  /* 125a1594 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a159au);
  /* 125a159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a159f call 0x125a6e00 */
  push32(0x125a15a4u); f_125a6e00();
  /* 125a15a4 mov esi, esp */
  ESI = (ESP);
  /* 125a15a6 push 0x125ce4d8 */
  push32((uint32_t)(0x125ce4d8u));
  /* 125a15ab push 0x125d36a0 */
  push32((uint32_t)(0x125d36a0u));
  /* 125a15b0 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a15b6u);
  /* 125a15b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a15b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a15bb call 0x125a6e00 */
  push32(0x125a15c0u); f_125a6e00();
  /* 125a15c0 mov esi, esp */
  ESI = (ESP);
  /* 125a15c2 push 0x125ce4cc */
  push32((uint32_t)(0x125ce4ccu));
  /* 125a15c7 push 0x125d36b0 */
  push32((uint32_t)(0x125d36b0u));
  /* 125a15cc call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a15d2u);
  /* 125a15d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a15d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a15d7 call 0x125a6e00 */
  push32(0x125a15dcu); f_125a6e00();
  /* 125a15dc mov esi, esp */
  ESI = (ESP);
  /* 125a15de push 0x125ce4c0 */
  push32((uint32_t)(0x125ce4c0u));
  /* 125a15e3 push 0x125d3680 */
  push32((uint32_t)(0x125d3680u));
  /* 125a15e8 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a15eeu);
  /* 125a15ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a15f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a15f3 call 0x125a6e00 */
  push32(0x125a15f8u); f_125a6e00();
  /* 125a15f8 mov esi, esp */
  ESI = (ESP);
  /* 125a15fa push 0x125ce4b4 */
  push32((uint32_t)(0x125ce4b4u));
  /* 125a15ff push 0x125d3690 */
  push32((uint32_t)(0x125d3690u));
  /* 125a1604 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a160au);
  /* 125a160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a160f call 0x125a6e00 */
  push32(0x125a1614u); f_125a6e00();
  /* 125a1614 mov esi, esp */
  ESI = (ESP);
  /* 125a1616 push 0x125ce4a8 */
  push32((uint32_t)(0x125ce4a8u));
  /* 125a161b push 0x125d36e8 */
  push32((uint32_t)(0x125d36e8u));
  /* 125a1620 call dword ptr [0x125d64d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d4))), 0x125a1626u);
  /* 125a1626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a162b call 0x125a6e00 */
  push32(0x125a1630u); f_125a6e00();
  /* 125a1630 mov esi, esp */
  ESI = (ESP);
  /* 125a1632 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a1634 push 0x125d36f8 */
  push32((uint32_t)(0x125d36f8u));
  /* 125a1639 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a163fu);
  /* 125a163f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1642 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1644 call 0x125a6e00 */
  push32(0x125a1649u); f_125a6e00();
  /* 125a1649 mov esi, esp */
  ESI = (ESP);
  /* 125a164b push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a164d push 0x125d3730 */
  push32((uint32_t)(0x125d3730u));
  /* 125a1652 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a1658u);
  /* 125a1658 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a165b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a165d call 0x125a6e00 */
  push32(0x125a1662u); f_125a6e00();
  /* 125a1662 mov esi, esp */
  ESI = (ESP);
  /* 125a1664 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a1666 push 0x125d3738 */
  push32((uint32_t)(0x125d3738u));
  /* 125a166b call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a1671u);
  /* 125a1671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1674 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1676 call 0x125a6e00 */
  push32(0x125a167bu); f_125a6e00();
  /* 125a167b mov esi, esp */
  ESI = (ESP);
  /* 125a167d push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a167f push 0x125d3720 */
  push32((uint32_t)(0x125d3720u));
  /* 125a1684 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a168au);
  /* 125a168a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a168d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a168f call 0x125a6e00 */
  push32(0x125a1694u); f_125a6e00();
  /* 125a1694 mov esi, esp */
  ESI = (ESP);
  /* 125a1696 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a1698 push 0x125d3728 */
  push32((uint32_t)(0x125d3728u));
  /* 125a169d call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a16a3u);
  /* 125a16a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a16a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a16a8 call 0x125a6e00 */
  push32(0x125a16adu); f_125a6e00();
  /* 125a16ad mov esi, esp */
  ESI = (ESP);
  /* 125a16af push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a16b1 push 0x125d3710 */
  push32((uint32_t)(0x125d3710u));
  /* 125a16b6 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a16bcu);
  /* 125a16bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a16bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a16c1 call 0x125a6e00 */
  push32(0x125a16c6u); f_125a6e00();
  /* 125a16c6 mov esi, esp */
  ESI = (ESP);
  /* 125a16c8 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a16ca push 0x125d3718 */
  push32((uint32_t)(0x125d3718u));
  /* 125a16cf call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a16d5u);
  /* 125a16d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a16d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a16da call 0x125a6e00 */
  push32(0x125a16dfu); f_125a6e00();
  /* 125a16df mov esi, esp */
  ESI = (ESP);
  /* 125a16e1 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a16e3 push 0x125d3700 */
  push32((uint32_t)(0x125d3700u));
  /* 125a16e8 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a16eeu);
  /* 125a16ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a16f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a16f3 call 0x125a6e00 */
  push32(0x125a16f8u); f_125a6e00();
  /* 125a16f8 mov esi, esp */
  ESI = (ESP);
  /* 125a16fa push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a16fc push 0x125d3708 */
  push32((uint32_t)(0x125d3708u));
  /* 125a1701 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a1707u);
  /* 125a1707 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a170a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a170c call 0x125a6e00 */
  push32(0x125a1711u); f_125a6e00();
  /* 125a1711 mov esi, esp */
  ESI = (ESP);
  /* 125a1713 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a1715 push 0x125d3740 */
  push32((uint32_t)(0x125d3740u));
  /* 125a171a call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a1720u);
  /* 125a1720 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1723 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1725 call 0x125a6e00 */
  push32(0x125a172au); f_125a6e00();
  /* 125a172a mov esi, esp */
  ESI = (ESP);
  /* 125a172c push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a172e push 0x125d34f0 */
  push32((uint32_t)(0x125d34f0u));
  /* 125a1733 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a1739u);
  /* 125a1739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a173c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a173e call 0x125a6e00 */
  push32(0x125a1743u); f_125a6e00();
  /* 125a1743 mov esi, esp */
  ESI = (ESP);
  /* 125a1745 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a1747 push 0x125d34e8 */
  push32((uint32_t)(0x125d34e8u));
  /* 125a174c call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a1752u);
  /* 125a1752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1755 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1757 call 0x125a6e00 */
  push32(0x125a175cu); f_125a6e00();
  /* 125a175c mov esi, esp */
  ESI = (ESP);
  /* 125a175e push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a1760 push 0x125d34e0 */
  push32((uint32_t)(0x125d34e0u));
  /* 125a1765 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a176bu);
  /* 125a176b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a176e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1770 call 0x125a6e00 */
  push32(0x125a1775u); f_125a6e00();
  /* 125a1775 mov esi, esp */
  ESI = (ESP);
  /* 125a1777 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a1779 push 0x125d34d8 */
  push32((uint32_t)(0x125d34d8u));
  /* 125a177e call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a1784u);
  /* 125a1784 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1787 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1789 call 0x125a6e00 */
  push32(0x125a178eu); f_125a6e00();
  /* 125a178e mov esi, esp */
  ESI = (ESP);
  /* 125a1790 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a1792 push 0x125d3528 */
  push32((uint32_t)(0x125d3528u));
  /* 125a1797 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a179du);
  /* 125a179d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a17a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a17a2 call 0x125a6e00 */
  push32(0x125a17a7u); f_125a6e00();
  /* 125a17a7 mov esi, esp */
  ESI = (ESP);
  /* 125a17a9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a17ab push 0x125d3520 */
  push32((uint32_t)(0x125d3520u));
  /* 125a17b0 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a17b6u);
  /* 125a17b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a17b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a17bb call 0x125a6e00 */
  push32(0x125a17c0u); f_125a6e00();
  /* 125a17c0 mov esi, esp */
  ESI = (ESP);
  /* 125a17c2 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a17c4 push 0x125d3510 */
  push32((uint32_t)(0x125d3510u));
  /* 125a17c9 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a17cfu);
  /* 125a17cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a17d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a17d4 call 0x125a6e00 */
  push32(0x125a17d9u); f_125a6e00();
  /* 125a17d9 mov esi, esp */
  ESI = (ESP);
  /* 125a17db push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a17dd push 0x125d3500 */
  push32((uint32_t)(0x125d3500u));
  /* 125a17e2 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a17e8u);
  /* 125a17e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a17eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a17ed call 0x125a6e00 */
  push32(0x125a17f2u); f_125a6e00();
  /* 125a17f2 mov esi, esp */
  ESI = (ESP);
  /* 125a17f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a17f6 push 0x125d34d0 */
  push32((uint32_t)(0x125d34d0u));
  /* 125a17fb call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a1801u);
  /* 125a1801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1804 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1806 call 0x125a6e00 */
  push32(0x125a180bu); f_125a6e00();
  /* 125a180b mov esi, esp */
  ESI = (ESP);
  /* 125a180d push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a180f push 0x125d34c0 */
  push32((uint32_t)(0x125d34c0u));
  /* 125a1814 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a181au);
  /* 125a181a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a181d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a181f call 0x125a6e00 */
  push32(0x125a1824u); f_125a6e00();
  /* 125a1824 mov esi, esp */
  ESI = (ESP);
  /* 125a1826 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a1828 push 0x125d3518 */
  push32((uint32_t)(0x125d3518u));
  /* 125a182d call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a1833u);
  /* 125a1833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1836 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1838 call 0x125a6e00 */
  push32(0x125a183du); f_125a6e00();
  /* 125a183d mov esi, esp */
  ESI = (ESP);
  /* 125a183f push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a1841 push 0x125d3508 */
  push32((uint32_t)(0x125d3508u));
  /* 125a1846 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a184cu);
  /* 125a184c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a184f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1851 call 0x125a6e00 */
  push32(0x125a1856u); f_125a6e00();
  /* 125a1856 mov esi, esp */
  ESI = (ESP);
  /* 125a1858 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a185a push 0x125d34f8 */
  push32((uint32_t)(0x125d34f8u));
  /* 125a185f call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a1865u);
  /* 125a1865 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1868 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a186a call 0x125a6e00 */
  push32(0x125a186fu); f_125a6e00();
  /* 125a186f mov esi, esp */
  ESI = (ESP);
  /* 125a1871 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a1873 push 0x125d34c8 */
  push32((uint32_t)(0x125d34c8u));
  /* 125a1878 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a187eu);
  /* 125a187e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1883 call 0x125a6e00 */
  push32(0x125a1888u); f_125a6e00();
  /* 125a1888 mov esi, esp */
  ESI = (ESP);
  /* 125a188a push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a188c push 0x125d34b8 */
  push32((uint32_t)(0x125d34b8u));
  /* 125a1891 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a1897u);
  /* 125a1897 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a189a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a189c call 0x125a6e00 */
  push32(0x125a18a1u); f_125a6e00();
  /* 125a18a1 mov esi, esp */
  ESI = (ESP);
  /* 125a18a3 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a18a5 push 0x125d34b0 */
  push32((uint32_t)(0x125d34b0u));
  /* 125a18aa call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a18b0u);
  /* 125a18b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a18b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a18b5 call 0x125a6e00 */
  push32(0x125a18bau); f_125a6e00();
  /* 125a18ba mov esi, esp */
  ESI = (ESP);
  /* 125a18bc push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a18be push 0x125d34a8 */
  push32((uint32_t)(0x125d34a8u));
  /* 125a18c3 call dword ptr [0x125d64d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d8))), 0x125a18c9u);
  /* 125a18c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a18cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a18ce call 0x125a6e00 */
  push32(0x125a18d3u); f_125a6e00();
  /* 125a18d3 mov esi, esp */
  ESI = (ESP);
  /* 125a18d5 push 0x125ce4a0 */
  push32((uint32_t)(0x125ce4a0u));
  /* 125a18da push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a18df call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a18e5u);
  /* 125a18e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a18e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a18ea call 0x125a6e00 */
  push32(0x125a18efu); f_125a6e00();
  /* 125a18ef mov esi, esp */
  ESI = (ESP);
  /* 125a18f1 push 0x125ce498 */
  push32((uint32_t)(0x125ce498u));
  /* 125a18f6 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a18fb call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a1901u);
  /* 125a1901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1904 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1906 call 0x125a6e00 */
  push32(0x125a190bu); f_125a6e00();
  /* 125a190b mov esi, esp */
  ESI = (ESP);
  /* 125a190d push 0x125ce490 */
  push32((uint32_t)(0x125ce490u));
  /* 125a1912 push 0x125d35f8 */
  push32((uint32_t)(0x125d35f8u));
  /* 125a1917 call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a191du);
  /* 125a191d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1920 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1922 call 0x125a6e00 */
  push32(0x125a1927u); f_125a6e00();
  /* 125a1927 mov esi, esp */
  ESI = (ESP);
  /* 125a1929 push 0x125ce488 */
  push32((uint32_t)(0x125ce488u));
  /* 125a192e push 0x125d3600 */
  push32((uint32_t)(0x125d3600u));
  /* 125a1933 call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a1939u);
  /* 125a1939 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a193c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a193e call 0x125a6e00 */
  push32(0x125a1943u); f_125a6e00();
  /* 125a1943 mov esi, esp */
  ESI = (ESP);
  /* 125a1945 push 0x125ce480 */
  push32((uint32_t)(0x125ce480u));
  /* 125a194a push 0x125d3608 */
  push32((uint32_t)(0x125d3608u));
  /* 125a194f call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a1955u);
  /* 125a1955 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1958 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a195a call 0x125a6e00 */
  push32(0x125a195fu); f_125a6e00();
  /* 125a195f mov esi, esp */
  ESI = (ESP);
  /* 125a1961 push 0x125ce478 */
  push32((uint32_t)(0x125ce478u));
  /* 125a1966 push 0x125d3610 */
  push32((uint32_t)(0x125d3610u));
  /* 125a196b call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a1971u);
  /* 125a1971 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1974 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1976 call 0x125a6e00 */
  push32(0x125a197bu); f_125a6e00();
  /* 125a197b mov esi, esp */
  ESI = (ESP);
  /* 125a197d push 0x125ce470 */
  push32((uint32_t)(0x125ce470u));
  /* 125a1982 push 0x125d3618 */
  push32((uint32_t)(0x125d3618u));
  /* 125a1987 call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a198du);
  /* 125a198d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1990 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1992 call 0x125a6e00 */
  push32(0x125a1997u); f_125a6e00();
  /* 125a1997 mov esi, esp */
  ESI = (ESP);
  /* 125a1999 push 0x125ce468 */
  push32((uint32_t)(0x125ce468u));
  /* 125a199e push 0x125d3620 */
  push32((uint32_t)(0x125d3620u));
  /* 125a19a3 call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a19a9u);
  /* 125a19a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a19ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a19ae call 0x125a6e00 */
  push32(0x125a19b3u); f_125a6e00();
  /* 125a19b3 mov esi, esp */
  ESI = (ESP);
  /* 125a19b5 push 0x125ce460 */
  push32((uint32_t)(0x125ce460u));
  /* 125a19ba push 0x125d3628 */
  push32((uint32_t)(0x125d3628u));
  /* 125a19bf call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a19c5u);
  /* 125a19c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a19c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a19ca call 0x125a6e00 */
  push32(0x125a19cfu); f_125a6e00();
  /* 125a19cf mov esi, esp */
  ESI = (ESP);
  /* 125a19d1 push 0x125ce458 */
  push32((uint32_t)(0x125ce458u));
  /* 125a19d6 push 0x125d3580 */
  push32((uint32_t)(0x125d3580u));
  /* 125a19db call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a19e1u);
  /* 125a19e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a19e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a19e6 call 0x125a6e00 */
  push32(0x125a19ebu); f_125a6e00();
  /* 125a19eb mov esi, esp */
  ESI = (ESP);
  /* 125a19ed push 0x125ce450 */
  push32((uint32_t)(0x125ce450u));
  /* 125a19f2 push 0x125d3578 */
  push32((uint32_t)(0x125d3578u));
  /* 125a19f7 call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a19fdu);
  /* 125a19fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1a00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1a02 call 0x125a6e00 */
  push32(0x125a1a07u); f_125a6e00();
  /* 125a1a07 mov esi, esp */
  ESI = (ESP);
  /* 125a1a09 push 0x125ce448 */
  push32((uint32_t)(0x125ce448u));
  /* 125a1a0e push 0x125d3590 */
  push32((uint32_t)(0x125d3590u));
  /* 125a1a13 call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a1a19u);
  /* 125a1a19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1a1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1a1e call 0x125a6e00 */
  push32(0x125a1a23u); f_125a6e00();
  /* 125a1a23 mov esi, esp */
  ESI = (ESP);
  /* 125a1a25 push 0x125ce440 */
  push32((uint32_t)(0x125ce440u));
  /* 125a1a2a push 0x125d3588 */
  push32((uint32_t)(0x125d3588u));
  /* 125a1a2f call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a1a35u);
  /* 125a1a35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1a38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1a3a call 0x125a6e00 */
  push32(0x125a1a3fu); f_125a6e00();
  /* 125a1a3f mov esi, esp */
  ESI = (ESP);
  /* 125a1a41 push 0x125ce438 */
  push32((uint32_t)(0x125ce438u));
  /* 125a1a46 push 0x125d35a0 */
  push32((uint32_t)(0x125d35a0u));
  /* 125a1a4b call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a1a51u);
  /* 125a1a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1a54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1a56 call 0x125a6e00 */
  push32(0x125a1a5bu); f_125a6e00();
  /* 125a1a5b mov esi, esp */
  ESI = (ESP);
  /* 125a1a5d push 0x125ce430 */
  push32((uint32_t)(0x125ce430u));
  /* 125a1a62 push 0x125d3598 */
  push32((uint32_t)(0x125d3598u));
  /* 125a1a67 call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a1a6du);
  /* 125a1a6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1a70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1a72 call 0x125a6e00 */
  push32(0x125a1a77u); f_125a6e00();
  /* 125a1a77 mov esi, esp */
  ESI = (ESP);
  /* 125a1a79 push 0x125ce428 */
  push32((uint32_t)(0x125ce428u));
  /* 125a1a7e push 0x125d35b0 */
  push32((uint32_t)(0x125d35b0u));
  /* 125a1a83 call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a1a89u);
  /* 125a1a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1a8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1a8e call 0x125a6e00 */
  push32(0x125a1a93u); f_125a6e00();
  /* 125a1a93 mov esi, esp */
  ESI = (ESP);
  /* 125a1a95 push 0x125ce420 */
  push32((uint32_t)(0x125ce420u));
  /* 125a1a9a push 0x125d35a8 */
  push32((uint32_t)(0x125d35a8u));
  /* 125a1a9f call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a1aa5u);
  /* 125a1aa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1aa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1aaa call 0x125a6e00 */
  push32(0x125a1aafu); f_125a6e00();
  /* 125a1aaf mov esi, esp */
  ESI = (ESP);
  /* 125a1ab1 push 0x125ce418 */
  push32((uint32_t)(0x125ce418u));
  /* 125a1ab6 push 0x125d35c8 */
  push32((uint32_t)(0x125d35c8u));
  /* 125a1abb call dword ptr [0x125d64d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64d0))), 0x125a1ac1u);
  /* 125a1ac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1ac4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1ac6 call 0x125a6e00 */
  push32(0x125a1acbu); f_125a6e00();
  /* 125a1acb mov esi, esp */
  ESI = (ESP);
  /* 125a1acd push 0x125ce410 */
  push32((uint32_t)(0x125ce410u));
  /* 125a1ad2 push 0x125d35b8 */
  push32((uint32_t)(0x125d35b8u));
  /* 125a1ad7 call dword ptr [0x125d64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e0))), 0x125a1addu);
  /* 125a1add add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1ae0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1ae2 call 0x125a6e00 */
  push32(0x125a1ae7u); f_125a6e00();
  /* 125a1ae7 mov esi, esp */
  ESI = (ESP);
  /* 125a1ae9 push 0x125ce404 */
  push32((uint32_t)(0x125ce404u));
  /* 125a1aee push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a1af3 call dword ptr [0x125d64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e0))), 0x125a1af9u);
  /* 125a1af9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1afc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1afe call 0x125a6e00 */
  push32(0x125a1b03u); f_125a6e00();
  /* 125a1b03 mov esi, esp */
  ESI = (ESP);
  /* 125a1b05 push 0x125ce3f8 */
  push32((uint32_t)(0x125ce3f8u));
  /* 125a1b0a push 0x125d35d0 */
  push32((uint32_t)(0x125d35d0u));
  /* 125a1b0f call dword ptr [0x125d64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e0))), 0x125a1b15u);
  /* 125a1b15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1b18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1b1a call 0x125a6e00 */
  push32(0x125a1b1fu); f_125a6e00();
  /* 125a1b1f mov esi, esp */
  ESI = (ESP);
  /* 125a1b21 push 0x125ce3ec */
  push32((uint32_t)(0x125ce3ecu));
  /* 125a1b26 push 0x125d35d8 */
  push32((uint32_t)(0x125d35d8u));
  /* 125a1b2b call dword ptr [0x125d64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e0))), 0x125a1b31u);
  /* 125a1b31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1b34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1b36 call 0x125a6e00 */
  push32(0x125a1b3bu); f_125a6e00();
  /* 125a1b3b mov esi, esp */
  ESI = (ESP);
  /* 125a1b3d push 0x125ce3e0 */
  push32((uint32_t)(0x125ce3e0u));
  /* 125a1b42 push 0x125d35e0 */
  push32((uint32_t)(0x125d35e0u));
  /* 125a1b47 call dword ptr [0x125d64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e0))), 0x125a1b4du);
  /* 125a1b4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1b50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1b52 call 0x125a6e00 */
  push32(0x125a1b57u); f_125a6e00();
  /* 125a1b57 mov esi, esp */
  ESI = (ESP);
  /* 125a1b59 push 0x125ce3c4 */
  push32((uint32_t)(0x125ce3c4u));
  /* 125a1b5e push 0x125d3448 */
  push32((uint32_t)(0x125d3448u));
  /* 125a1b63 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1b69u);
  /* 125a1b69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1b6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1b6e call 0x125a6e00 */
  push32(0x125a1b73u); f_125a6e00();
  /* 125a1b73 mov esi, esp */
  ESI = (ESP);
  /* 125a1b75 push 0x125ce3a4 */
  push32((uint32_t)(0x125ce3a4u));
  /* 125a1b7a push 0x125d3460 */
  push32((uint32_t)(0x125d3460u));
  /* 125a1b7f call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1b85u);
  /* 125a1b85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1b88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1b8a call 0x125a6e00 */
  push32(0x125a1b8fu); f_125a6e00();
  /* 125a1b8f mov esi, esp */
  ESI = (ESP);
  /* 125a1b91 push 0x125ce384 */
  push32((uint32_t)(0x125ce384u));
  /* 125a1b96 push 0x125d3640 */
  push32((uint32_t)(0x125d3640u));
  /* 125a1b9b call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1ba1u);
  /* 125a1ba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1ba4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1ba6 call 0x125a6e00 */
  push32(0x125a1babu); f_125a6e00();
  /* 125a1bab mov esi, esp */
  ESI = (ESP);
  /* 125a1bad push 0x125ce364 */
  push32((uint32_t)(0x125ce364u));
  /* 125a1bb2 push 0x125d3648 */
  push32((uint32_t)(0x125d3648u));
  /* 125a1bb7 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1bbdu);
  /* 125a1bbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1bc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1bc2 call 0x125a6e00 */
  push32(0x125a1bc7u); f_125a6e00();
  /* 125a1bc7 mov esi, esp */
  ESI = (ESP);
  /* 125a1bc9 push 0x125ce344 */
  push32((uint32_t)(0x125ce344u));
  /* 125a1bce push 0x125d3650 */
  push32((uint32_t)(0x125d3650u));
  /* 125a1bd3 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1bd9u);
  /* 125a1bd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1bdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1bde call 0x125a6e00 */
  push32(0x125a1be3u); f_125a6e00();
  /* 125a1be3 mov esi, esp */
  ESI = (ESP);
  /* 125a1be5 push 0x125ce328 */
  push32((uint32_t)(0x125ce328u));
  /* 125a1bea push 0x125d3478 */
  push32((uint32_t)(0x125d3478u));
  /* 125a1bef call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1bf5u);
  /* 125a1bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1bf8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1bfa call 0x125a6e00 */
  push32(0x125a1bffu); f_125a6e00();
  /* 125a1bff mov esi, esp */
  ESI = (ESP);
  /* 125a1c01 push 0x125ce308 */
  push32((uint32_t)(0x125ce308u));
  /* 125a1c06 push 0x125d3488 */
  push32((uint32_t)(0x125d3488u));
  /* 125a1c0b call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1c11u);
  /* 125a1c11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1c14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1c16 call 0x125a6e00 */
  push32(0x125a1c1bu); f_125a6e00();
  /* 125a1c1b mov esi, esp */
  ESI = (ESP);
  /* 125a1c1d push 0x125ce2e8 */
  push32((uint32_t)(0x125ce2e8u));
  /* 125a1c22 push 0x125d3658 */
  push32((uint32_t)(0x125d3658u));
  /* 125a1c27 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1c2du);
  /* 125a1c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1c30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1c32 call 0x125a6e00 */
  push32(0x125a1c37u); f_125a6e00();
  /* 125a1c37 mov esi, esp */
  ESI = (ESP);
  /* 125a1c39 push 0x125ce2c8 */
  push32((uint32_t)(0x125ce2c8u));
  /* 125a1c3e push 0x125d3660 */
  push32((uint32_t)(0x125d3660u));
  /* 125a1c43 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1c49u);
  /* 125a1c49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1c4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1c4e call 0x125a6e00 */
  push32(0x125a1c53u); f_125a6e00();
  /* 125a1c53 mov esi, esp */
  ESI = (ESP);
  /* 125a1c55 push 0x125ce2a8 */
  push32((uint32_t)(0x125ce2a8u));
  /* 125a1c5a push 0x125d3668 */
  push32((uint32_t)(0x125d3668u));
  /* 125a1c5f call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1c65u);
  /* 125a1c65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1c68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1c6a call 0x125a6e00 */
  push32(0x125a1c6fu); f_125a6e00();
  /* 125a1c6f mov esi, esp */
  ESI = (ESP);
  /* 125a1c71 push 0x125ce288 */
  push32((uint32_t)(0x125ce288u));
  /* 125a1c76 push 0x125d3490 */
  push32((uint32_t)(0x125d3490u));
  /* 125a1c7b call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1c81u);
  /* 125a1c81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1c84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1c86 call 0x125a6e00 */
  push32(0x125a1c8bu); f_125a6e00();
  /* 125a1c8b mov esi, esp */
  ESI = (ESP);
  /* 125a1c8d push 0x125ce264 */
  push32((uint32_t)(0x125ce264u));
  /* 125a1c92 push 0x125d3498 */
  push32((uint32_t)(0x125d3498u));
  /* 125a1c97 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1c9du);
  /* 125a1c9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1ca0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1ca2 call 0x125a6e00 */
  push32(0x125a1ca7u); f_125a6e00();
  /* 125a1ca7 mov esi, esp */
  ESI = (ESP);
  /* 125a1ca9 push 0x125ce240 */
  push32((uint32_t)(0x125ce240u));
  /* 125a1cae push 0x125d3670 */
  push32((uint32_t)(0x125d3670u));
  /* 125a1cb3 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1cb9u);
  /* 125a1cb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1cbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1cbe call 0x125a6e00 */
  push32(0x125a1cc3u); f_125a6e00();
  /* 125a1cc3 mov esi, esp */
  ESI = (ESP);
  /* 125a1cc5 push 0x125ce220 */
  push32((uint32_t)(0x125ce220u));
  /* 125a1cca push 0x125d34a0 */
  push32((uint32_t)(0x125d34a0u));
  /* 125a1ccf call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1cd5u);
  /* 125a1cd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1cd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1cda call 0x125a6e00 */
  push32(0x125a1cdfu); f_125a6e00();
  /* 125a1cdf mov esi, esp */
  ESI = (ESP);
  /* 125a1ce1 push 0x125ce1fc */
  push32((uint32_t)(0x125ce1fcu));
  /* 125a1ce6 push 0x125d3458 */
  push32((uint32_t)(0x125d3458u));
  /* 125a1ceb call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1cf1u);
  /* 125a1cf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1cf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1cf6 call 0x125a6e00 */
  push32(0x125a1cfbu); f_125a6e00();
  /* 125a1cfb mov esi, esp */
  ESI = (ESP);
  /* 125a1cfd push 0x125ce1d8 */
  push32((uint32_t)(0x125ce1d8u));
  /* 125a1d02 push 0x125d3470 */
  push32((uint32_t)(0x125d3470u));
  /* 125a1d07 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1d0du);
  /* 125a1d0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1d10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1d12 call 0x125a6e00 */
  push32(0x125a1d17u); f_125a6e00();
  /* 125a1d17 mov esi, esp */
  ESI = (ESP);
  /* 125a1d19 push 0x125ce1b4 */
  push32((uint32_t)(0x125ce1b4u));
  /* 125a1d1e push 0x125d3480 */
  push32((uint32_t)(0x125d3480u));
  /* 125a1d23 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1d29u);
  /* 125a1d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1d2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1d2e call 0x125a6e00 */
  push32(0x125a1d33u); f_125a6e00();
  /* 125a1d33 mov esi, esp */
  ESI = (ESP);
  /* 125a1d35 push 0x125ce190 */
  push32((uint32_t)(0x125ce190u));
  /* 125a1d3a push 0x125d33f0 */
  push32((uint32_t)(0x125d33f0u));
  /* 125a1d3f call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1d45u);
  /* 125a1d45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1d48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1d4a call 0x125a6e00 */
  push32(0x125a1d4fu); f_125a6e00();
  /* 125a1d4f mov esi, esp */
  ESI = (ESP);
  /* 125a1d51 push 0x125ce16c */
  push32((uint32_t)(0x125ce16cu));
  /* 125a1d56 push 0x125d33f8 */
  push32((uint32_t)(0x125d33f8u));
  /* 125a1d5b call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1d61u);
  /* 125a1d61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1d64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1d66 call 0x125a6e00 */
  push32(0x125a1d6bu); f_125a6e00();
  /* 125a1d6b mov esi, esp */
  ESI = (ESP);
  /* 125a1d6d push 0x125ce14c */
  push32((uint32_t)(0x125ce14cu));
  /* 125a1d72 push 0x125d3400 */
  push32((uint32_t)(0x125d3400u));
  /* 125a1d77 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1d7du);
  /* 125a1d7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1d80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1d82 call 0x125a6e00 */
  push32(0x125a1d87u); f_125a6e00();
  /* 125a1d87 mov esi, esp */
  ESI = (ESP);
  /* 125a1d89 push 0x125ce12c */
  push32((uint32_t)(0x125ce12cu));
  /* 125a1d8e push 0x125d3408 */
  push32((uint32_t)(0x125d3408u));
  /* 125a1d93 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1d99u);
  /* 125a1d99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1d9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1d9e call 0x125a6e00 */
  push32(0x125a1da3u); f_125a6e00();
  /* 125a1da3 mov esi, esp */
  ESI = (ESP);
  /* 125a1da5 push 0x125ce10c */
  push32((uint32_t)(0x125ce10cu));
  /* 125a1daa push 0x125d3410 */
  push32((uint32_t)(0x125d3410u));
  /* 125a1daf call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1db5u);
  /* 125a1db5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1db8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1dba call 0x125a6e00 */
  push32(0x125a1dbfu); f_125a6e00();
  /* 125a1dbf mov esi, esp */
  ESI = (ESP);
  /* 125a1dc1 push 0x125ce0ec */
  push32((uint32_t)(0x125ce0ecu));
  /* 125a1dc6 push 0x125d3420 */
  push32((uint32_t)(0x125d3420u));
  /* 125a1dcb call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1dd1u);
  /* 125a1dd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1dd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1dd6 call 0x125a6e00 */
  push32(0x125a1ddbu); f_125a6e00();
  /* 125a1ddb mov esi, esp */
  ESI = (ESP);
  /* 125a1ddd push 0x125ce0cc */
  push32((uint32_t)(0x125ce0ccu));
  /* 125a1de2 push 0x125d3430 */
  push32((uint32_t)(0x125d3430u));
  /* 125a1de7 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1dedu);
  /* 125a1ded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1df0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1df2 call 0x125a6e00 */
  push32(0x125a1df7u); f_125a6e00();
  /* 125a1df7 mov esi, esp */
  ESI = (ESP);
  /* 125a1df9 push 0x125ce0ac */
  push32((uint32_t)(0x125ce0acu));
  /* 125a1dfe push 0x125d3440 */
  push32((uint32_t)(0x125d3440u));
  /* 125a1e03 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1e09u);
  /* 125a1e09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1e0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1e0e call 0x125a6e00 */
  push32(0x125a1e13u); f_125a6e00();
  /* 125a1e13 mov esi, esp */
  ESI = (ESP);
  /* 125a1e15 push 0x125ce08c */
  push32((uint32_t)(0x125ce08cu));
  /* 125a1e1a push 0x125d3450 */
  push32((uint32_t)(0x125d3450u));
  /* 125a1e1f call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1e25u);
  /* 125a1e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1e28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1e2a call 0x125a6e00 */
  push32(0x125a1e2fu); f_125a6e00();
  /* 125a1e2f mov esi, esp */
  ESI = (ESP);
  /* 125a1e31 push 0x125ce06c */
  push32((uint32_t)(0x125ce06cu));
  /* 125a1e36 push 0x125d3468 */
  push32((uint32_t)(0x125d3468u));
  /* 125a1e3b call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1e41u);
  /* 125a1e41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1e44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1e46 call 0x125a6e00 */
  push32(0x125a1e4bu); f_125a6e00();
  /* 125a1e4b mov esi, esp */
  ESI = (ESP);
  /* 125a1e4d push 0x125ce054 */
  push32((uint32_t)(0x125ce054u));
  /* 125a1e52 push 0x125d3418 */
  push32((uint32_t)(0x125d3418u));
  /* 125a1e57 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1e5du);
  /* 125a1e5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1e60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1e62 call 0x125a6e00 */
  push32(0x125a1e67u); f_125a6e00();
  /* 125a1e67 mov esi, esp */
  ESI = (ESP);
  /* 125a1e69 push 0x125ce03c */
  push32((uint32_t)(0x125ce03cu));
  /* 125a1e6e push 0x125d3428 */
  push32((uint32_t)(0x125d3428u));
  /* 125a1e73 call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1e79u);
  /* 125a1e79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1e7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1e7e call 0x125a6e00 */
  push32(0x125a1e83u); f_125a6e00();
  /* 125a1e83 mov esi, esp */
  ESI = (ESP);
  /* 125a1e85 push 0x125ce030 */
  push32((uint32_t)(0x125ce030u));
  /* 125a1e8a push 0x125d3438 */
  push32((uint32_t)(0x125d3438u));
  /* 125a1e8f call dword ptr [0x125d64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64e4))), 0x125a1e95u);
  /* 125a1e95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1e98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1e9a call 0x125a6e00 */
  push32(0x125a1e9fu); f_125a6e00();
  /* 125a1e9f mov esi, esp */
  ESI = (ESP);
  /* 125a1ea1 push 0x125ce028 */
  push32((uint32_t)(0x125ce028u));
  /* 125a1ea6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a1ea8 call dword ptr [0x125d64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64dc))), 0x125a1eaeu);
  /* 125a1eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1eb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1eb3 call 0x125a6e00 */
  push32(0x125a1eb8u); f_125a6e00();
  /* 125a1eb8 mov esi, esp */
  ESI = (ESP);
  /* 125a1eba push 0x125ce01c */
  push32((uint32_t)(0x125ce01cu));
  /* 125a1ebf push 7 */
  push32((uint32_t)(0x7u));
  /* 125a1ec1 call dword ptr [0x125d64dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64dc))), 0x125a1ec7u);
  /* 125a1ec7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1eca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1ecc call 0x125a6e00 */
  push32(0x125a1ed1u); f_125a6e00();
  /* 125a1ed1 pop edi */
  EDI = (pop32());
  /* 125a1ed2 pop esi */
  ESI = (pop32());
  /* 125a1ed3 pop ebx */
  EBX = (pop32());
  /* 125a1ed4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a1ed7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a1ed9 call 0x125a6e00 */
  push32(0x125a1edeu); f_125a6e00();
  /* 125a1ede mov esp, ebp */
  ESP = (EBP);
  /* 125a1ee0 pop ebp */
  EBP = (pop32());
  /* 125a1ee1 ret  */
  ESPCHK(0x125a10a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002280 @ 0x125a2280 (15108 bytes, 4395 insns) */
void f_125a2280(void) {
  FTRACE(0x125a2280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a2280 push ebp */
  push32((uint32_t)(EBP));
  /* 125a2281 mov ebp, esp */
  EBP = (ESP);
  /* 125a2283 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a2286 push ebx */
  push32((uint32_t)(EBX));
  /* 125a2287 push esi */
  push32((uint32_t)(ESI));
  /* 125a2288 push edi */
  push32((uint32_t)(EDI));
  /* 125a2289 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 125a228c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 125a2291 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 125a2296 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125a2298 mov esi, esp */
  ESI = (ESP);
  /* 125a229a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 125a229c call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a22a2u);
  /* 125a22a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a22a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a22a7 call 0x125a6e00 */
  push32(0x125a22acu); f_125a6e00();
  /* 125a22ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a22b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a22b3 je 0x125a2968 */
  if (C.zf) goto L_125a2968;
  /* 125a22b9 mov esi, esp */
  ESI = (ESP);
  /* 125a22bb push 0 */
  push32((uint32_t)(0x0u));
  /* 125a22bd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 125a22bf call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a22c5u);
  /* 125a22c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a22c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a22ca call 0x125a6e00 */
  push32(0x125a22cfu); f_125a6e00();
  /* 125a22cf mov esi, esp */
  ESI = (ESP);
  /* 125a22d1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 125a22d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 125a22d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a22da call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a22e0u);
  /* 125a22e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a22e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a22e5 call 0x125a6e00 */
  push32(0x125a22eau); f_125a6e00();
  /* 125a22ea mov esi, esp */
  ESI = (ESP);
  /* 125a22ec push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 125a22f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a22f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a22f5 call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a22fbu);
  /* 125a22fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a22fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2300 call 0x125a6e00 */
  push32(0x125a2305u); f_125a6e00();
  /* 125a2305 mov esi, esp */
  ESI = (ESP);
  /* 125a2307 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 125a230c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a230e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2310 call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a2316u);
  /* 125a2316 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a231b call 0x125a6e00 */
  push32(0x125a2320u); f_125a6e00();
  /* 125a2320 mov esi, esp */
  ESI = (ESP);
  /* 125a2322 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 125a2327 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a2329 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a232b call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a2331u);
  /* 125a2331 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2334 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2336 call 0x125a6e00 */
  push32(0x125a233bu); f_125a6e00();
  /* 125a233b mov esi, esp */
  ESI = (ESP);
  /* 125a233d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 125a2342 push 5 */
  push32((uint32_t)(0x5u));
  /* 125a2344 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2346 call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a234cu);
  /* 125a234c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a234f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2351 call 0x125a6e00 */
  push32(0x125a2356u); f_125a6e00();
  /* 125a2356 mov esi, esp */
  ESI = (ESP);
  /* 125a2358 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 125a235d push 4 */
  push32((uint32_t)(0x4u));
  /* 125a235f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2361 call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a2367u);
  /* 125a2367 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a236a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a236c call 0x125a6e00 */
  push32(0x125a2371u); f_125a6e00();
  /* 125a2371 mov esi, esp */
  ESI = (ESP);
  /* 125a2373 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 125a2378 push 3 */
  push32((uint32_t)(0x3u));
  /* 125a237a push 1 */
  push32((uint32_t)(0x1u));
  /* 125a237c call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a2382u);
  /* 125a2382 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2385 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2387 call 0x125a6e00 */
  push32(0x125a238cu); f_125a6e00();
  /* 125a238c mov esi, esp */
  ESI = (ESP);
  /* 125a238e push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 125a2393 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2395 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2397 call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a239du);
  /* 125a239d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a23a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a23a2 call 0x125a6e00 */
  push32(0x125a23a7u); f_125a6e00();
  /* 125a23a7 mov esi, esp */
  ESI = (ESP);
  /* 125a23a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a23ab push 0 */
  push32((uint32_t)(0x0u));
  /* 125a23ad push 1 */
  push32((uint32_t)(0x1u));
  /* 125a23af call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a23b5u);
  /* 125a23b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a23b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a23ba call 0x125a6e00 */
  push32(0x125a23bfu); f_125a6e00();
  /* 125a23bf mov esi, esp */
  ESI = (ESP);
  /* 125a23c1 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 125a23c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a23c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a23ca call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a23d0u);
  /* 125a23d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a23d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a23d5 call 0x125a6e00 */
  push32(0x125a23dau); f_125a6e00();
  /* 125a23da mov esi, esp */
  ESI = (ESP);
  /* 125a23dc push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 125a23e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 125a23e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a23e5 call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a23ebu);
  /* 125a23eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a23ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a23f0 call 0x125a6e00 */
  push32(0x125a23f5u); f_125a6e00();
  /* 125a23f5 mov esi, esp */
  ESI = (ESP);
  /* 125a23f7 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 125a23fc push 4 */
  push32((uint32_t)(0x4u));
  /* 125a23fe push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2400 call dword ptr [0x125d6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6450))), 0x125a2406u);
  /* 125a2406 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a240b call 0x125a6e00 */
  push32(0x125a2410u); f_125a6e00();
  /* 125a2410 mov esi, esp */
  ESI = (ESP);
  /* 125a2412 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2414 push 0x125d3540 */
  push32((uint32_t)(0x125d3540u));
  /* 125a2419 call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a241fu);
  /* 125a241f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2422 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2424 call 0x125a6e00 */
  push32(0x125a2429u); f_125a6e00();
  /* 125a2429 mov esi, esp */
  ESI = (ESP);
  /* 125a242b push 1 */
  push32((uint32_t)(0x1u));
  /* 125a242d push 0x125d3538 */
  push32((uint32_t)(0x125d3538u));
  /* 125a2432 call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a2438u);
  /* 125a2438 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a243b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a243d call 0x125a6e00 */
  push32(0x125a2442u); f_125a6e00();
  /* 125a2442 mov esi, esp */
  ESI = (ESP);
  /* 125a2444 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2446 push 0x125d3550 */
  push32((uint32_t)(0x125d3550u));
  /* 125a244b call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a2451u);
  /* 125a2451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2454 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2456 call 0x125a6e00 */
  push32(0x125a245bu); f_125a6e00();
  /* 125a245b mov esi, esp */
  ESI = (ESP);
  /* 125a245d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a245f push 0x125d3548 */
  push32((uint32_t)(0x125d3548u));
  /* 125a2464 call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a246au);
  /* 125a246a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a246d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a246f call 0x125a6e00 */
  push32(0x125a2474u); f_125a6e00();
  /* 125a2474 mov esi, esp */
  ESI = (ESP);
  /* 125a2476 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2478 push 0x125d3568 */
  push32((uint32_t)(0x125d3568u));
  /* 125a247d call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a2483u);
  /* 125a2483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2486 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2488 call 0x125a6e00 */
  push32(0x125a248du); f_125a6e00();
  /* 125a248d mov esi, esp */
  ESI = (ESP);
  /* 125a248f push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2491 push 0x125d3558 */
  push32((uint32_t)(0x125d3558u));
  /* 125a2496 call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a249cu);
  /* 125a249c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a249f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a24a1 call 0x125a6e00 */
  push32(0x125a24a6u); f_125a6e00();
  /* 125a24a6 mov esi, esp */
  ESI = (ESP);
  /* 125a24a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a24aa push 0x125d3560 */
  push32((uint32_t)(0x125d3560u));
  /* 125a24af call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a24b5u);
  /* 125a24b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a24b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a24ba call 0x125a6e00 */
  push32(0x125a24bfu); f_125a6e00();
  /* 125a24bf mov esi, esp */
  ESI = (ESP);
  /* 125a24c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a24c3 push 0x125d3570 */
  push32((uint32_t)(0x125d3570u));
  /* 125a24c8 call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a24ceu);
  /* 125a24ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a24d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a24d3 call 0x125a6e00 */
  push32(0x125a24d8u); f_125a6e00();
  /* 125a24d8 mov esi, esp */
  ESI = (ESP);
  /* 125a24da push 1 */
  push32((uint32_t)(0x1u));
  /* 125a24dc push 0x125d36e0 */
  push32((uint32_t)(0x125d36e0u));
  /* 125a24e1 call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a24e7u);
  /* 125a24e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a24ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a24ec call 0x125a6e00 */
  push32(0x125a24f1u); f_125a6e00();
  /* 125a24f1 mov esi, esp */
  ESI = (ESP);
  /* 125a24f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a24f5 push 0x125d36a0 */
  push32((uint32_t)(0x125d36a0u));
  /* 125a24fa call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a2500u);
  /* 125a2500 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2503 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2505 call 0x125a6e00 */
  push32(0x125a250au); f_125a6e00();
  /* 125a250a mov esi, esp */
  ESI = (ESP);
  /* 125a250c push 1 */
  push32((uint32_t)(0x1u));
  /* 125a250e push 0x125d36a8 */
  push32((uint32_t)(0x125d36a8u));
  /* 125a2513 call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a2519u);
  /* 125a2519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a251c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a251e call 0x125a6e00 */
  push32(0x125a2523u); f_125a6e00();
  /* 125a2523 mov esi, esp */
  ESI = (ESP);
  /* 125a2525 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2527 push 0x125d36b8 */
  push32((uint32_t)(0x125d36b8u));
  /* 125a252c call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a2532u);
  /* 125a2532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2535 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2537 call 0x125a6e00 */
  push32(0x125a253cu); f_125a6e00();
  /* 125a253c mov esi, esp */
  ESI = (ESP);
  /* 125a253e push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2540 push 0x125d36b0 */
  push32((uint32_t)(0x125d36b0u));
  /* 125a2545 call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a254bu);
  /* 125a254b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a254e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2550 call 0x125a6e00 */
  push32(0x125a2555u); f_125a6e00();
  /* 125a2555 mov esi, esp */
  ESI = (ESP);
  /* 125a2557 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2559 call dword ptr [0x125d644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d644c))), 0x125a255fu);
  /* 125a255f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2562 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2564 call 0x125a6e00 */
  push32(0x125a2569u); f_125a6e00();
  /* 125a2569 mov esi, esp */
  ESI = (ESP);
  /* 125a256b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a256d push 0x125d3638 */
  push32((uint32_t)(0x125d3638u));
  /* 125a2572 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2574 call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a257au);
  /* 125a257a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a257d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a257f call 0x125a6e00 */
  push32(0x125a2584u); f_125a6e00();
  /* 125a2584 mov esi, esp */
  ESI = (ESP);
  /* 125a2586 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2588 push 0x125d33e0 */
  push32((uint32_t)(0x125d33e0u));
  /* 125a258d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a258f call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a2595u);
  /* 125a2595 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2598 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a259a call 0x125a6e00 */
  push32(0x125a259fu); f_125a6e00();
  /* 125a259f mov esi, esp */
  ESI = (ESP);
  /* 125a25a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a25a3 push 0x125d3780 */
  push32((uint32_t)(0x125d3780u));
  /* 125a25a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a25aa call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a25b0u);
  /* 125a25b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a25b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a25b5 call 0x125a6e00 */
  push32(0x125a25bau); f_125a6e00();
  /* 125a25ba mov esi, esp */
  ESI = (ESP);
  /* 125a25bc push 0 */
  push32((uint32_t)(0x0u));
  /* 125a25be push 0x125d37b0 */
  push32((uint32_t)(0x125d37b0u));
  /* 125a25c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a25c5 call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a25cbu);
  /* 125a25cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a25ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a25d0 call 0x125a6e00 */
  push32(0x125a25d5u); f_125a6e00();
  /* 125a25d5 mov esi, esp */
  ESI = (ESP);
  /* 125a25d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a25d9 push 0x125d3748 */
  push32((uint32_t)(0x125d3748u));
  /* 125a25de push 0 */
  push32((uint32_t)(0x0u));
  /* 125a25e0 call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a25e6u);
  /* 125a25e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a25e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a25eb call 0x125a6e00 */
  push32(0x125a25f0u); f_125a6e00();
  /* 125a25f0 mov esi, esp */
  ESI = (ESP);
  /* 125a25f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a25f4 push 0x125d37d8 */
  push32((uint32_t)(0x125d37d8u));
  /* 125a25f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a25fb call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a2601u);
  /* 125a2601 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2604 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2606 call 0x125a6e00 */
  push32(0x125a260bu); f_125a6e00();
  /* 125a260b mov esi, esp */
  ESI = (ESP);
  /* 125a260d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a260f push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a2614 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2616 call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a261cu);
  /* 125a261c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a261f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2621 call 0x125a6e00 */
  push32(0x125a2626u); f_125a6e00();
  /* 125a2626 mov esi, esp */
  ESI = (ESP);
  /* 125a2628 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a262a push 0x125d37b8 */
  push32((uint32_t)(0x125d37b8u));
  /* 125a262f push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2631 call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a2637u);
  /* 125a2637 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a263a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a263c call 0x125a6e00 */
  push32(0x125a2641u); f_125a6e00();
  /* 125a2641 mov esi, esp */
  ESI = (ESP);
  /* 125a2643 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2645 push 0x125d3750 */
  push32((uint32_t)(0x125d3750u));
  /* 125a264a push 1 */
  push32((uint32_t)(0x1u));
  /* 125a264c call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a2652u);
  /* 125a2652 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2657 call 0x125a6e00 */
  push32(0x125a265cu); f_125a6e00();
  /* 125a265c mov esi, esp */
  ESI = (ESP);
  /* 125a265e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2660 push 0x125d37c8 */
  push32((uint32_t)(0x125d37c8u));
  /* 125a2665 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2667 call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a266du);
  /* 125a266d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2670 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2672 call 0x125a6e00 */
  push32(0x125a2677u); f_125a6e00();
  /* 125a2677 mov esi, esp */
  ESI = (ESP);
  /* 125a2679 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a267b push 0x125d3778 */
  push32((uint32_t)(0x125d3778u));
  /* 125a2680 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2682 call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a2688u);
  /* 125a2688 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a268b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a268d call 0x125a6e00 */
  push32(0x125a2692u); f_125a6e00();
  /* 125a2692 mov esi, esp */
  ESI = (ESP);
  /* 125a2694 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2696 push 0x125d37a8 */
  push32((uint32_t)(0x125d37a8u));
  /* 125a269b push 1 */
  push32((uint32_t)(0x1u));
  /* 125a269d call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a26a3u);
  /* 125a26a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a26a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a26a8 call 0x125a6e00 */
  push32(0x125a26adu); f_125a6e00();
  /* 125a26ad mov esi, esp */
  ESI = (ESP);
  /* 125a26af push 0 */
  push32((uint32_t)(0x0u));
  /* 125a26b1 push 0x125d36f0 */
  push32((uint32_t)(0x125d36f0u));
  /* 125a26b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a26b8 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a26beu);
  /* 125a26be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a26c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a26c3 call 0x125a6e00 */
  push32(0x125a26c8u); f_125a6e00();
  /* 125a26c8 mov esi, esp */
  ESI = (ESP);
  /* 125a26ca push 1 */
  push32((uint32_t)(0x1u));
  /* 125a26cc push 0x125d3570 */
  push32((uint32_t)(0x125d3570u));
  /* 125a26d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a26d3 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a26d9u);
  /* 125a26d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a26dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a26de call 0x125a6e00 */
  push32(0x125a26e3u); f_125a6e00();
  /* 125a26e3 mov esi, esp */
  ESI = (ESP);
  /* 125a26e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a26e7 push 0x125d36d0 */
  push32((uint32_t)(0x125d36d0u));
  /* 125a26ec push 1 */
  push32((uint32_t)(0x1u));
  /* 125a26ee call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a26f4u);
  /* 125a26f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a26f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a26f9 call 0x125a6e00 */
  push32(0x125a26feu); f_125a6e00();
  /* 125a26fe mov esi, esp */
  ESI = (ESP);
  /* 125a2700 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2702 call dword ptr [0x125d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6458))), 0x125a2708u);
  /* 125a2708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a270b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a270d call 0x125a6e00 */
  push32(0x125a2712u); f_125a6e00();
  /* 125a2712 mov esi, esp */
  ESI = (ESP);
  /* 125a2714 push 0x125d3640 */
  push32((uint32_t)(0x125d3640u));
  /* 125a2719 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a271b call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a2721u);
  /* 125a2721 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2724 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2726 call 0x125a6e00 */
  push32(0x125a272bu); f_125a6e00();
  /* 125a272b mov esi, esp */
  ESI = (ESP);
  /* 125a272d push 0x125d3648 */
  push32((uint32_t)(0x125d3648u));
  /* 125a2732 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2734 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a273au);
  /* 125a273a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a273d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a273f call 0x125a6e00 */
  push32(0x125a2744u); f_125a6e00();
  /* 125a2744 mov esi, esp */
  ESI = (ESP);
  /* 125a2746 push 0x125d3650 */
  push32((uint32_t)(0x125d3650u));
  /* 125a274b push 1 */
  push32((uint32_t)(0x1u));
  /* 125a274d call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a2753u);
  /* 125a2753 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2756 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2758 call 0x125a6e00 */
  push32(0x125a275du); f_125a6e00();
  /* 125a275d mov esi, esp */
  ESI = (ESP);
  /* 125a275f push 0x125d3658 */
  push32((uint32_t)(0x125d3658u));
  /* 125a2764 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2766 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a276cu);
  /* 125a276c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a276f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2771 call 0x125a6e00 */
  push32(0x125a2776u); f_125a6e00();
  /* 125a2776 mov esi, esp */
  ESI = (ESP);
  /* 125a2778 push 0x125d3660 */
  push32((uint32_t)(0x125d3660u));
  /* 125a277d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a277f call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a2785u);
  /* 125a2785 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2788 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a278a call 0x125a6e00 */
  push32(0x125a278fu); f_125a6e00();
  /* 125a278f mov esi, esp */
  ESI = (ESP);
  /* 125a2791 push 0x125d3668 */
  push32((uint32_t)(0x125d3668u));
  /* 125a2796 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2798 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a279eu);
  /* 125a279e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a27a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a27a3 call 0x125a6e00 */
  push32(0x125a27a8u); f_125a6e00();
  /* 125a27a8 mov esi, esp */
  ESI = (ESP);
  /* 125a27aa push 0x125d3670 */
  push32((uint32_t)(0x125d3670u));
  /* 125a27af push 1 */
  push32((uint32_t)(0x1u));
  /* 125a27b1 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a27b7u);
  /* 125a27b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a27ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a27bc call 0x125a6e00 */
  push32(0x125a27c1u); f_125a6e00();
  /* 125a27c1 mov esi, esp */
  ESI = (ESP);
  /* 125a27c3 push 0x125d33f0 */
  push32((uint32_t)(0x125d33f0u));
  /* 125a27c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a27ca call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a27d0u);
  /* 125a27d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a27d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a27d5 call 0x125a6e00 */
  push32(0x125a27dau); f_125a6e00();
  /* 125a27da mov esi, esp */
  ESI = (ESP);
  /* 125a27dc push 0x125d33f8 */
  push32((uint32_t)(0x125d33f8u));
  /* 125a27e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a27e3 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a27e9u);
  /* 125a27e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a27ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a27ee call 0x125a6e00 */
  push32(0x125a27f3u); f_125a6e00();
  /* 125a27f3 mov esi, esp */
  ESI = (ESP);
  /* 125a27f5 push 0x125d3400 */
  push32((uint32_t)(0x125d3400u));
  /* 125a27fa push 1 */
  push32((uint32_t)(0x1u));
  /* 125a27fc call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a2802u);
  /* 125a2802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2805 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2807 call 0x125a6e00 */
  push32(0x125a280cu); f_125a6e00();
  /* 125a280c mov esi, esp */
  ESI = (ESP);
  /* 125a280e push 0x125d3408 */
  push32((uint32_t)(0x125d3408u));
  /* 125a2813 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2815 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a281bu);
  /* 125a281b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a281e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2820 call 0x125a6e00 */
  push32(0x125a2825u); f_125a6e00();
  /* 125a2825 mov esi, esp */
  ESI = (ESP);
  /* 125a2827 push 0x125d3410 */
  push32((uint32_t)(0x125d3410u));
  /* 125a282c push 1 */
  push32((uint32_t)(0x1u));
  /* 125a282e call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a2834u);
  /* 125a2834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2837 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2839 call 0x125a6e00 */
  push32(0x125a283eu); f_125a6e00();
  /* 125a283e mov esi, esp */
  ESI = (ESP);
  /* 125a2840 push 0x125d3420 */
  push32((uint32_t)(0x125d3420u));
  /* 125a2845 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2847 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a284du);
  /* 125a284d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2850 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2852 call 0x125a6e00 */
  push32(0x125a2857u); f_125a6e00();
  /* 125a2857 mov esi, esp */
  ESI = (ESP);
  /* 125a2859 push 0x125d3430 */
  push32((uint32_t)(0x125d3430u));
  /* 125a285e push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2860 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a2866u);
  /* 125a2866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a286b call 0x125a6e00 */
  push32(0x125a2870u); f_125a6e00();
  /* 125a2870 mov esi, esp */
  ESI = (ESP);
  /* 125a2872 push 0x125d3440 */
  push32((uint32_t)(0x125d3440u));
  /* 125a2877 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2879 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a287fu);
  /* 125a287f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2882 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2884 call 0x125a6e00 */
  push32(0x125a2889u); f_125a6e00();
  /* 125a2889 mov esi, esp */
  ESI = (ESP);
  /* 125a288b push 0x125d3450 */
  push32((uint32_t)(0x125d3450u));
  /* 125a2890 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2892 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a2898u);
  /* 125a2898 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a289b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a289d call 0x125a6e00 */
  push32(0x125a28a2u); f_125a6e00();
  /* 125a28a2 mov esi, esp */
  ESI = (ESP);
  /* 125a28a4 push 0x125d3468 */
  push32((uint32_t)(0x125d3468u));
  /* 125a28a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a28ab call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a28b1u);
  /* 125a28b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a28b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a28b6 call 0x125a6e00 */
  push32(0x125a28bbu); f_125a6e00();
  /* 125a28bb mov esi, esp */
  ESI = (ESP);
  /* 125a28bd push 0x125d3418 */
  push32((uint32_t)(0x125d3418u));
  /* 125a28c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a28c4 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a28cau);
  /* 125a28ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a28cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a28cf call 0x125a6e00 */
  push32(0x125a28d4u); f_125a6e00();
  /* 125a28d4 mov esi, esp */
  ESI = (ESP);
  /* 125a28d6 push 0x125d3428 */
  push32((uint32_t)(0x125d3428u));
  /* 125a28db push 0 */
  push32((uint32_t)(0x0u));
  /* 125a28dd call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a28e3u);
  /* 125a28e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a28e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a28e8 call 0x125a6e00 */
  push32(0x125a28edu); f_125a6e00();
  /* 125a28ed mov esi, esp */
  ESI = (ESP);
  /* 125a28ef push 0x125d3438 */
  push32((uint32_t)(0x125d3438u));
  /* 125a28f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a28f6 call dword ptr [0x125d6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6468))), 0x125a28fcu);
  /* 125a28fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a28ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2901 call 0x125a6e00 */
  push32(0x125a2906u); f_125a6e00();
  /* 125a2906 mov esi, esp */
  ESI = (ESP);
  /* 125a2908 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 125a290d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a290f call dword ptr [0x125d646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d646c))), 0x125a2915u);
  /* 125a2915 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2918 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a291a call 0x125a6e00 */
  push32(0x125a291fu); f_125a6e00();
  /* 125a291f mov esi, esp */
  ESI = (ESP);
  /* 125a2921 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 125a2926 push 7 */
  push32((uint32_t)(0x7u));
  /* 125a2928 call dword ptr [0x125d646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d646c))), 0x125a292eu);
  /* 125a292e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2931 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2933 call 0x125a6e00 */
  push32(0x125a2938u); f_125a6e00();
  /* 125a2938 mov esi, esp */
  ESI = (ESP);
  /* 125a293a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 125a293f push 0xd */
  push32((uint32_t)(0xdu));
  /* 125a2941 call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a2947u);
  /* 125a2947 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a294a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a294c call 0x125a6e00 */
  push32(0x125a2951u); f_125a6e00();
  /* 125a2951 mov esi, esp */
  ESI = (ESP);
  /* 125a2953 push 0x125ce828 */
  push32((uint32_t)(0x125ce828u));
  /* 125a2958 call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a295eu);
  /* 125a295e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2963 call 0x125a6e00 */
  push32(0x125a2968u); f_125a6e00();
L_125a2968:;
  /* 125a2968 mov esi, esp */
  ESI = (ESP);
  /* 125a296a push 0x61 */
  push32((uint32_t)(0x61u));
  /* 125a296c call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2972u);
  /* 125a2972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2975 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2977 call 0x125a6e00 */
  push32(0x125a297cu); f_125a6e00();
  /* 125a297c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2983 je 0x125a29fe */
  if (C.zf) goto L_125a29fe;
  /* 125a2985 mov esi, esp */
  ESI = (ESP);
  /* 125a2987 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a2989 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a298fu);
  /* 125a298f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2992 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2994 call 0x125a6e00 */
  push32(0x125a2999u); f_125a6e00();
  /* 125a2999 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a299e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a29a0 je 0x125a29fe */
  if (C.zf) goto L_125a29fe;
  /* 125a29a2 mov esi, esp */
  ESI = (ESP);
  /* 125a29a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a29a6 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 125a29a8 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a29aeu);
  /* 125a29ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a29b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a29b3 call 0x125a6e00 */
  push32(0x125a29b8u); f_125a6e00();
  /* 125a29b8 mov esi, esp */
  ESI = (ESP);
  /* 125a29ba push 0 */
  push32((uint32_t)(0x0u));
  /* 125a29bc push 0x125d3678 */
  push32((uint32_t)(0x125d3678u));
  /* 125a29c1 call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a29c7u);
  /* 125a29c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a29ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a29cc call 0x125a6e00 */
  push32(0x125a29d1u); f_125a6e00();
  /* 125a29d1 mov esi, esp */
  ESI = (ESP);
  /* 125a29d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a29d5 push 0x125d36d8 */
  push32((uint32_t)(0x125d36d8u));
  /* 125a29da call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a29e0u);
  /* 125a29e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a29e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a29e5 call 0x125a6e00 */
  push32(0x125a29eau); f_125a6e00();
  /* 125a29ea mov esi, esp */
  ESI = (ESP);
  /* 125a29ec push 1 */
  push32((uint32_t)(0x1u));
  /* 125a29ee call dword ptr [0x125d6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6470))), 0x125a29f4u);
  /* 125a29f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a29f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a29f9 call 0x125a6e00 */
  push32(0x125a29feu); f_125a6e00();
L_125a29fe:;
  /* 125a29fe mov esi, esp */
  ESI = (ESP);
  /* 125a2a00 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 125a2a02 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2a08u);
  /* 125a2a08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2a0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2a0d call 0x125a6e00 */
  push32(0x125a2a12u); f_125a6e00();
  /* 125a2a12 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2a19 je 0x125a2a86 */
  if (C.zf) goto L_125a2a86;
  /* 125a2a1b mov esi, esp */
  ESI = (ESP);
  /* 125a2a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2a1f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 125a2a21 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2a27u);
  /* 125a2a27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2a2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2a2c call 0x125a6e00 */
  push32(0x125a2a31u); f_125a6e00();
  /* 125a2a31 mov esi, esp */
  ESI = (ESP);
  /* 125a2a33 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2a39 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2a3b push 0x125ce81c */
  push32((uint32_t)(0x125ce81cu));
  /* 125a2a40 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2a42 call dword ptr [0x125d6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6480))), 0x125a2a48u);
  /* 125a2a48 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2a4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2a4d call 0x125a6e00 */
  push32(0x125a2a52u); f_125a6e00();
  /* 125a2a52 mov esi, esp */
  ESI = (ESP);
  /* 125a2a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2a56 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 125a2a5b push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2a5d call dword ptr [0x125d6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6484))), 0x125a2a63u);
  /* 125a2a63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2a66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2a68 call 0x125a6e00 */
  push32(0x125a2a6du); f_125a6e00();
  /* 125a2a6d mov esi, esp */
  ESI = (ESP);
  /* 125a2a6f push 0x4b0 */
  push32((uint32_t)(0x4b0u));
  /* 125a2a74 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a2a76 call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a2a7cu);
  /* 125a2a7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2a7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2a81 call 0x125a6e00 */
  push32(0x125a2a86u); f_125a6e00();
L_125a2a86:;
  /* 125a2a86 mov esi, esp */
  ESI = (ESP);
  /* 125a2a88 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 125a2a8a call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2a90u);
  /* 125a2a90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2a93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2a95 call 0x125a6e00 */
  push32(0x125a2a9au); f_125a6e00();
  /* 125a2a9a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2aa1 je 0x125a2b01 */
  if (C.zf) goto L_125a2b01;
  /* 125a2aa3 mov esi, esp */
  ESI = (ESP);
  /* 125a2aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2aa7 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 125a2aa9 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2aafu);
  /* 125a2aaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2ab2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2ab4 call 0x125a6e00 */
  push32(0x125a2ab9u); f_125a6e00();
  /* 125a2ab9 mov esi, esp */
  ESI = (ESP);
  /* 125a2abb push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 125a2ac0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2ac2 call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a2ac8u);
  /* 125a2ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2acb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2acd call 0x125a6e00 */
  push32(0x125a2ad2u); f_125a6e00();
  /* 125a2ad2 mov esi, esp */
  ESI = (ESP);
  /* 125a2ad4 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 125a2ad9 push 5 */
  push32((uint32_t)(0x5u));
  /* 125a2adb call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a2ae1u);
  /* 125a2ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2ae4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2ae6 call 0x125a6e00 */
  push32(0x125a2aebu); f_125a6e00();
  /* 125a2aeb mov esi, esp */
  ESI = (ESP);
  /* 125a2aed push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2aef push 0x5a */
  push32((uint32_t)(0x5au));
  /* 125a2af1 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2af7u);
  /* 125a2af7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2afa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2afc call 0x125a6e00 */
  push32(0x125a2b01u); f_125a6e00();
L_125a2b01:;
  /* 125a2b01 mov esi, esp */
  ESI = (ESP);
  /* 125a2b03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 125a2b05 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2b0bu);
  /* 125a2b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2b0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2b10 call 0x125a6e00 */
  push32(0x125a2b15u); f_125a6e00();
  /* 125a2b15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2b1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2b1c je 0x125a2c44 */
  if (C.zf) goto L_125a2c44;
  /* 125a2b22 mov esi, esp */
  ESI = (ESP);
  /* 125a2b24 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 125a2b26 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2b2cu);
  /* 125a2b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2b2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2b31 call 0x125a6e00 */
  push32(0x125a2b36u); f_125a6e00();
  /* 125a2b36 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2b3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2b3d jne 0x125a2c44 */
  if (!C.zf) goto L_125a2c44;
  /* 125a2b43 mov esi, esp */
  ESI = (ESP);
  /* 125a2b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2b47 push 0x125d35f8 */
  push32((uint32_t)(0x125d35f8u));
  /* 125a2b4c call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a2b52u);
  /* 125a2b52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2b55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2b57 call 0x125a6e00 */
  push32(0x125a2b5cu); f_125a6e00();
  /* 125a2b5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2b5e jne 0x125a2c44 */
  if (!C.zf) goto L_125a2c44;
  /* 125a2b64 mov esi, esp */
  ESI = (ESP);
  /* 125a2b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2b68 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 125a2b6a call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2b70u);
  /* 125a2b70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2b73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2b75 call 0x125a6e00 */
  push32(0x125a2b7au); f_125a6e00();
  /* 125a2b7a mov esi, esp */
  ESI = (ESP);
  /* 125a2b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2b7e push 0x125d3600 */
  push32((uint32_t)(0x125d3600u));
  /* 125a2b83 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2b85 push 0x125d37c0 */
  push32((uint32_t)(0x125d37c0u));
  /* 125a2b8a push 0x125d35b8 */
  push32((uint32_t)(0x125d35b8u));
  /* 125a2b8f push 0x125d3728 */
  push32((uint32_t)(0x125d3728u));
  /* 125a2b94 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a2b9au);
  /* 125a2b9a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2b9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2b9f call 0x125a6e00 */
  push32(0x125a2ba4u); f_125a6e00();
  /* 125a2ba4 mov esi, esp */
  ESI = (ESP);
  /* 125a2ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2ba8 push 0x125d3600 */
  push32((uint32_t)(0x125d3600u));
  /* 125a2bad push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2baf push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a2bb4 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a2bb9 push 0x125d3710 */
  push32((uint32_t)(0x125d3710u));
  /* 125a2bbe call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a2bc4u);
  /* 125a2bc4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2bc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2bc9 call 0x125a6e00 */
  push32(0x125a2bceu); f_125a6e00();
  /* 125a2bce mov esi, esp */
  ESI = (ESP);
  /* 125a2bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2bd2 push 0x125d3728 */
  push32((uint32_t)(0x125d3728u));
  /* 125a2bd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2bd9 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a2bdfu);
  /* 125a2bdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2be2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2be4 call 0x125a6e00 */
  push32(0x125a2be9u); f_125a6e00();
  /* 125a2be9 mov esi, esp */
  ESI = (ESP);
  /* 125a2beb push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2bed push 0x125d3710 */
  push32((uint32_t)(0x125d3710u));
  /* 125a2bf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2bf4 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a2bfau);
  /* 125a2bfa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2bfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2bff call 0x125a6e00 */
  push32(0x125a2c04u); f_125a6e00();
  /* 125a2c04 mov esi, esp */
  ESI = (ESP);
  /* 125a2c06 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2c08 call dword ptr [0x125d644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d644c))), 0x125a2c0eu);
  /* 125a2c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2c11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2c13 call 0x125a6e00 */
  push32(0x125a2c18u); f_125a6e00();
  /* 125a2c18 mov esi, esp */
  ESI = (ESP);
  /* 125a2c1a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 125a2c1c push 3 */
  push32((uint32_t)(0x3u));
  /* 125a2c1e call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a2c24u);
  /* 125a2c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2c27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2c29 call 0x125a6e00 */
  push32(0x125a2c2eu); f_125a6e00();
  /* 125a2c2e mov esi, esp */
  ESI = (ESP);
  /* 125a2c30 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2c32 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 125a2c34 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2c3au);
  /* 125a2c3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2c3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2c3f call 0x125a6e00 */
  push32(0x125a2c44u); f_125a6e00();
L_125a2c44:;
  /* 125a2c44 mov esi, esp */
  ESI = (ESP);
  /* 125a2c46 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 125a2c48 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2c4eu);
  /* 125a2c4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2c51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2c53 call 0x125a6e00 */
  push32(0x125a2c58u); f_125a6e00();
  /* 125a2c58 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2c5f je 0x125a2da9 */
  if (C.zf) goto L_125a2da9;
  /* 125a2c65 mov esi, esp */
  ESI = (ESP);
  /* 125a2c67 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 125a2c69 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2c6fu);
  /* 125a2c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2c72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2c74 call 0x125a6e00 */
  push32(0x125a2c79u); f_125a6e00();
  /* 125a2c79 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2c7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2c80 jne 0x125a2da9 */
  if (!C.zf) goto L_125a2da9;
  /* 125a2c86 mov esi, esp */
  ESI = (ESP);
  /* 125a2c88 push 3 */
  push32((uint32_t)(0x3u));
  /* 125a2c8a call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a2c90u);
  /* 125a2c90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2c93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2c95 call 0x125a6e00 */
  push32(0x125a2c9au); f_125a6e00();
  /* 125a2c9a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2c9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2ca1 je 0x125a2da9 */
  if (C.zf) goto L_125a2da9;
  /* 125a2ca7 mov esi, esp */
  ESI = (ESP);
  /* 125a2ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2cab push 0x59 */
  push32((uint32_t)(0x59u));
  /* 125a2cad call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2cb3u);
  /* 125a2cb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2cb8 call 0x125a6e00 */
  push32(0x125a2cbdu); f_125a6e00();
  /* 125a2cbd mov esi, esp */
  ESI = (ESP);
  /* 125a2cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2cc1 push 0x125d3728 */
  push32((uint32_t)(0x125d3728u));
  /* 125a2cc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2cc8 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a2cceu);
  /* 125a2cce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2cd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2cd3 call 0x125a6e00 */
  push32(0x125a2cd8u); f_125a6e00();
  /* 125a2cd8 mov esi, esp */
  ESI = (ESP);
  /* 125a2cda push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2cdc push 0x125d3710 */
  push32((uint32_t)(0x125d3710u));
  /* 125a2ce1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2ce3 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a2ce9u);
  /* 125a2ce9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2cec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2cee call 0x125a6e00 */
  push32(0x125a2cf3u); f_125a6e00();
  /* 125a2cf3 mov esi, esp */
  ESI = (ESP);
  /* 125a2cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2cf7 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 125a2cf9 push 0x125d3580 */
  push32((uint32_t)(0x125d3580u));
  /* 125a2cfe push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2d00 call dword ptr [0x125d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6490))), 0x125a2d06u);
  /* 125a2d06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2d09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2d0b call 0x125a6e00 */
  push32(0x125a2d10u); f_125a6e00();
  /* 125a2d10 mov esi, esp */
  ESI = (ESP);
  /* 125a2d12 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a2d14 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 125a2d16 push 0x125d3578 */
  push32((uint32_t)(0x125d3578u));
  /* 125a2d1b push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2d1d call dword ptr [0x125d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6490))), 0x125a2d23u);
  /* 125a2d23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2d26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2d28 call 0x125a6e00 */
  push32(0x125a2d2du); f_125a6e00();
  /* 125a2d2d mov esi, esp */
  ESI = (ESP);
  /* 125a2d2f push 2 */
  push32((uint32_t)(0x2u));
  /* 125a2d31 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 125a2d33 push 0x125d3590 */
  push32((uint32_t)(0x125d3590u));
  /* 125a2d38 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2d3a call dword ptr [0x125d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6490))), 0x125a2d40u);
  /* 125a2d40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2d43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2d45 call 0x125a6e00 */
  push32(0x125a2d4au); f_125a6e00();
  /* 125a2d4a mov esi, esp */
  ESI = (ESP);
  /* 125a2d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 125a2d4e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 125a2d50 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a2d55 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2d57 call dword ptr [0x125d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6490))), 0x125a2d5du);
  /* 125a2d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2d60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2d62 call 0x125a6e00 */
  push32(0x125a2d67u); f_125a6e00();
  /* 125a2d67 mov esi, esp */
  ESI = (ESP);
  /* 125a2d69 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2d6b push 0x58 */
  push32((uint32_t)(0x58u));
  /* 125a2d6d call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2d73u);
  /* 125a2d73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2d76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2d78 call 0x125a6e00 */
  push32(0x125a2d7du); f_125a6e00();
  /* 125a2d7d mov esi, esp */
  ESI = (ESP);
  /* 125a2d7f push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2d81 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 125a2d83 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2d89u);
  /* 125a2d89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2d8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2d8e call 0x125a6e00 */
  push32(0x125a2d93u); f_125a6e00();
  /* 125a2d93 mov esi, esp */
  ESI = (ESP);
  /* 125a2d95 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2d97 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 125a2d99 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2d9fu);
  /* 125a2d9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2da2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2da4 call 0x125a6e00 */
  push32(0x125a2da9u); f_125a6e00();
L_125a2da9:;
  /* 125a2da9 mov esi, esp */
  ESI = (ESP);
  /* 125a2dab push 0x58 */
  push32((uint32_t)(0x58u));
  /* 125a2dad call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2db3u);
  /* 125a2db3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2db6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2db8 call 0x125a6e00 */
  push32(0x125a2dbdu); f_125a6e00();
  /* 125a2dbd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2dc4 je 0x125a2e4c */
  if (C.zf) goto L_125a2e4c;
  /* 125a2dca mov esi, esp */
  ESI = (ESP);
  /* 125a2dcc push 0x59 */
  push32((uint32_t)(0x59u));
  /* 125a2dce call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2dd4u);
  /* 125a2dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2dd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2dd9 call 0x125a6e00 */
  push32(0x125a2ddeu); f_125a6e00();
  /* 125a2dde and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2de3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2de5 jne 0x125a2e4c */
  if (!C.zf) goto L_125a2e4c;
  /* 125a2de7 mov esi, esp */
  ESI = (ESP);
  /* 125a2de9 push 0x125d3728 */
  push32((uint32_t)(0x125d3728u));
  /* 125a2dee push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a2df3 call dword ptr [0x125d6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6488))), 0x125a2df9u);
  /* 125a2df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2dfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2dfe call 0x125a6e00 */
  push32(0x125a2e03u); f_125a6e00();
  /* 125a2e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2e05 jle 0x125a2e4c */
  if ((C.zf||C.sf!=C.of)) goto L_125a2e4c;
  /* 125a2e07 mov esi, esp */
  ESI = (ESP);
  /* 125a2e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2e0b push 0x58 */
  push32((uint32_t)(0x58u));
  /* 125a2e0d call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2e13u);
  /* 125a2e13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2e16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2e18 call 0x125a6e00 */
  push32(0x125a2e1du); f_125a6e00();
  /* 125a2e1d mov esi, esp */
  ESI = (ESP);
  /* 125a2e1f push 0x4b0 */
  push32((uint32_t)(0x4b0u));
  /* 125a2e24 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a2e26 call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a2e2cu);
  /* 125a2e2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2e2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2e31 call 0x125a6e00 */
  push32(0x125a2e36u); f_125a6e00();
  /* 125a2e36 mov esi, esp */
  ESI = (ESP);
  /* 125a2e38 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2e3a push 0x57 */
  push32((uint32_t)(0x57u));
  /* 125a2e3c call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2e42u);
  /* 125a2e42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2e45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2e47 call 0x125a6e00 */
  push32(0x125a2e4cu); f_125a6e00();
L_125a2e4c:;
  /* 125a2e4c mov esi, esp */
  ESI = (ESP);
  /* 125a2e4e push 0x55 */
  push32((uint32_t)(0x55u));
  /* 125a2e50 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2e56u);
  /* 125a2e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2e59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2e5b call 0x125a6e00 */
  push32(0x125a2e60u); f_125a6e00();
  /* 125a2e60 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2e65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2e67 je 0x125a2f7f */
  if (C.zf) goto L_125a2f7f;
  /* 125a2e6d mov esi, esp */
  ESI = (ESP);
  /* 125a2e6f push 0x59 */
  push32((uint32_t)(0x59u));
  /* 125a2e71 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2e77u);
  /* 125a2e77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2e7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2e7c call 0x125a6e00 */
  push32(0x125a2e81u); f_125a6e00();
  /* 125a2e81 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2e86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2e88 jne 0x125a2f7f */
  if (!C.zf) goto L_125a2f7f;
  /* 125a2e8e mov esi, esp */
  ESI = (ESP);
  /* 125a2e90 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 125a2e92 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2e98u);
  /* 125a2e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2e9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2e9d call 0x125a6e00 */
  push32(0x125a2ea2u); f_125a6e00();
  /* 125a2ea2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2ea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2ea9 je 0x125a2f7f */
  if (C.zf) goto L_125a2f7f;
  /* 125a2eaf push 0x125d3728 */
  push32((uint32_t)(0x125d3728u));
  /* 125a2eb4 call 0x125a1005 */
  push32(0x125a2eb9u); f_125a1005();
  /* 125a2eb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2ebc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2ebe je 0x125a2ed5 */
  if (C.zf) goto L_125a2ed5;
  /* 125a2ec0 push 0x125d3710 */
  push32((uint32_t)(0x125d3710u));
  /* 125a2ec5 call 0x125a1005 */
  push32(0x125a2ecau); f_125a1005();
  /* 125a2eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2ecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2ecf jne 0x125a2f7f */
  if (!C.zf) goto L_125a2f7f;
L_125a2ed5:;
  /* 125a2ed5 mov esi, esp */
  ESI = (ESP);
  /* 125a2ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2ed9 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 125a2edb call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2ee1u);
  /* 125a2ee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2ee4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2ee6 call 0x125a6e00 */
  push32(0x125a2eebu); f_125a6e00();
  /* 125a2eeb mov esi, esp */
  ESI = (ESP);
  /* 125a2eed push 0x125ce814 */
  push32((uint32_t)(0x125ce814u));
  /* 125a2ef2 call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a2ef8u);
  /* 125a2ef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2efb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2efd call 0x125a6e00 */
  push32(0x125a2f02u); f_125a6e00();
  /* 125a2f02 mov esi, esp */
  ESI = (ESP);
  /* 125a2f04 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 125a2f09 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2f0b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2f0d call dword ptr [0x125d6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6498))), 0x125a2f13u);
  /* 125a2f13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2f16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2f18 call 0x125a6e00 */
  push32(0x125a2f1du); f_125a6e00();
  /* 125a2f1d mov esi, esp */
  ESI = (ESP);
  /* 125a2f1f push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 125a2f24 push 5 */
  push32((uint32_t)(0x5u));
  /* 125a2f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2f28 call dword ptr [0x125d6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6498))), 0x125a2f2eu);
  /* 125a2f2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2f31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2f33 call 0x125a6e00 */
  push32(0x125a2f38u); f_125a6e00();
  /* 125a2f38 mov esi, esp */
  ESI = (ESP);
  /* 125a2f3a push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 125a2f3f push 4 */
  push32((uint32_t)(0x4u));
  /* 125a2f41 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a2f43 call dword ptr [0x125d6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6498))), 0x125a2f49u);
  /* 125a2f49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2f4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2f4e call 0x125a6e00 */
  push32(0x125a2f53u); f_125a6e00();
  /* 125a2f53 mov esi, esp */
  ESI = (ESP);
  /* 125a2f55 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 125a2f57 push 6 */
  push32((uint32_t)(0x6u));
  /* 125a2f59 call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a2f5fu);
  /* 125a2f5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2f62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2f64 call 0x125a6e00 */
  push32(0x125a2f69u); f_125a6e00();
  /* 125a2f69 mov esi, esp */
  ESI = (ESP);
  /* 125a2f6b push 1 */
  push32((uint32_t)(0x1u));
  /* 125a2f6d push 0x57 */
  push32((uint32_t)(0x57u));
  /* 125a2f6f call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a2f75u);
  /* 125a2f75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2f78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2f7a call 0x125a6e00 */
  push32(0x125a2f7fu); f_125a6e00();
L_125a2f7f:;
  /* 125a2f7f mov esi, esp */
  ESI = (ESP);
  /* 125a2f81 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 125a2f83 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2f89u);
  /* 125a2f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2f8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2f8e call 0x125a6e00 */
  push32(0x125a2f93u); f_125a6e00();
  /* 125a2f93 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2f9a je 0x125a30a9 */
  if (C.zf) goto L_125a30a9;
  /* 125a2fa0 mov esi, esp */
  ESI = (ESP);
  /* 125a2fa2 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 125a2fa4 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2faau);
  /* 125a2faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2fad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2faf call 0x125a6e00 */
  push32(0x125a2fb4u); f_125a6e00();
  /* 125a2fb4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2fb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2fbb je 0x125a2fde */
  if (C.zf) goto L_125a2fde;
  /* 125a2fbd mov esi, esp */
  ESI = (ESP);
  /* 125a2fbf push 0x55 */
  push32((uint32_t)(0x55u));
  /* 125a2fc1 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a2fc7u);
  /* 125a2fc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2fca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2fcc call 0x125a6e00 */
  push32(0x125a2fd1u); f_125a6e00();
  /* 125a2fd1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2fd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2fd8 jne 0x125a30a9 */
  if (!C.zf) goto L_125a30a9;
L_125a2fde:;
  /* 125a2fde mov esi, esp */
  ESI = (ESP);
  /* 125a2fe0 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a2fe2 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a2fe8u);
  /* 125a2fe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a2feb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a2fed call 0x125a6e00 */
  push32(0x125a2ff2u); f_125a6e00();
  /* 125a2ff2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a2ff7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a2ff9 jne 0x125a301c */
  if (!C.zf) goto L_125a301c;
  /* 125a2ffb mov esi, esp */
  ESI = (ESP);
  /* 125a2ffd push 6 */
  push32((uint32_t)(0x6u));
  /* 125a2fff call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a3005u);
  /* 125a3005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3008 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a300a call 0x125a6e00 */
  push32(0x125a300fu); f_125a6e00();
  /* 125a300f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3014 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3016 je 0x125a30a9 */
  if (C.zf) goto L_125a30a9;
L_125a301c:;
  /* 125a301c mov esi, esp */
  ESI = (ESP);
  /* 125a301e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3020 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 125a3022 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3028u);
  /* 125a3028 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a302b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a302d call 0x125a6e00 */
  push32(0x125a3032u); f_125a6e00();
  /* 125a3032 mov esi, esp */
  ESI = (ESP);
  /* 125a3034 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3036 push 0x125d3728 */
  push32((uint32_t)(0x125d3728u));
  /* 125a303b call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a3041u);
  /* 125a3041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3044 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3046 call 0x125a6e00 */
  push32(0x125a304bu); f_125a6e00();
  /* 125a304b mov esi, esp */
  ESI = (ESP);
  /* 125a304d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a304f push 0x125d3710 */
  push32((uint32_t)(0x125d3710u));
  /* 125a3054 call dword ptr [0x125d6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6454))), 0x125a305au);
  /* 125a305a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a305d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a305f call 0x125a6e00 */
  push32(0x125a3064u); f_125a6e00();
  /* 125a3064 mov esi, esp */
  ESI = (ESP);
  /* 125a3066 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 125a306b push 1 */
  push32((uint32_t)(0x1u));
  /* 125a306d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a306f call dword ptr [0x125d6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6498))), 0x125a3075u);
  /* 125a3075 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3078 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a307a call 0x125a6e00 */
  push32(0x125a307fu); f_125a6e00();
  /* 125a307f mov esi, esp */
  ESI = (ESP);
  /* 125a3081 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3083 call dword ptr [0x125d649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d649c))), 0x125a3089u);
  /* 125a3089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a308c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a308e call 0x125a6e00 */
  push32(0x125a3093u); f_125a6e00();
  /* 125a3093 mov esi, esp */
  ESI = (ESP);
  /* 125a3095 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3097 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 125a3099 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a309fu);
  /* 125a309f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a30a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a30a4 call 0x125a6e00 */
  push32(0x125a30a9u); f_125a6e00();
L_125a30a9:;
  /* 125a30a9 mov esi, esp */
  ESI = (ESP);
  /* 125a30ab push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125a30ad call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a30b3u);
  /* 125a30b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a30b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a30b8 call 0x125a6e00 */
  push32(0x125a30bdu); f_125a6e00();
  /* 125a30bd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a30c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a30c4 je 0x125a3125 */
  if (C.zf) goto L_125a3125;
  /* 125a30c6 mov esi, esp */
  ESI = (ESP);
  /* 125a30c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a30ca push 0x125d35f8 */
  push32((uint32_t)(0x125d35f8u));
  /* 125a30cf call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a30d5u);
  /* 125a30d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a30d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a30da call 0x125a6e00 */
  push32(0x125a30dfu); f_125a6e00();
  /* 125a30df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a30e1 jle 0x125a3125 */
  if ((C.zf||C.sf!=C.of)) goto L_125a3125;
  /* 125a30e3 mov esi, esp */
  ESI = (ESP);
  /* 125a30e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a30e7 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125a30e9 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a30efu);
  /* 125a30ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a30f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a30f4 call 0x125a6e00 */
  push32(0x125a30f9u); f_125a6e00();
  /* 125a30f9 mov esi, esp */
  ESI = (ESP);
  /* 125a30fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 125a30fd push 6 */
  push32((uint32_t)(0x6u));
  /* 125a30ff call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a3105u);
  /* 125a3105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3108 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a310a call 0x125a6e00 */
  push32(0x125a310fu); f_125a6e00();
  /* 125a310f mov esi, esp */
  ESI = (ESP);
  /* 125a3111 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3113 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 125a3115 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a311bu);
  /* 125a311b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a311e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3120 call 0x125a6e00 */
  push32(0x125a3125u); f_125a6e00();
L_125a3125:;
  /* 125a3125 mov esi, esp */
  ESI = (ESP);
  /* 125a3127 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 125a3129 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a312fu);
  /* 125a312f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3132 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3134 call 0x125a6e00 */
  push32(0x125a3139u); f_125a6e00();
  /* 125a3139 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a313e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3140 je 0x125a32bd */
  if (C.zf) goto L_125a32bd;
  /* 125a3146 mov esi, esp */
  ESI = (ESP);
  /* 125a3148 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 125a314a call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3150u);
  /* 125a3150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3153 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3155 call 0x125a6e00 */
  push32(0x125a315au); f_125a6e00();
  /* 125a315a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a315f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3161 je 0x125a3184 */
  if (C.zf) goto L_125a3184;
  /* 125a3163 mov esi, esp */
  ESI = (ESP);
  /* 125a3165 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125a3167 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a316du);
  /* 125a316d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3170 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3172 call 0x125a6e00 */
  push32(0x125a3177u); f_125a6e00();
  /* 125a3177 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a317c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a317e jne 0x125a32bd */
  if (!C.zf) goto L_125a32bd;
L_125a3184:;
  /* 125a3184 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3186 push 0x125d3798 */
  push32((uint32_t)(0x125d3798u));
  /* 125a318b call 0x125a100f */
  push32(0x125a3190u); f_125a100f();
  /* 125a3190 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3193 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3196 jg 0x125a31b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_125a31b0;
  /* 125a3198 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a319a push 0x125d3770 */
  push32((uint32_t)(0x125d3770u));
  /* 125a319f call 0x125a100f */
  push32(0x125a31a4u); f_125a100f();
  /* 125a31a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a31a7 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a31aa jle 0x125a3239 */
  if ((C.zf||C.sf!=C.of)) goto L_125a3239;
L_125a31b0:;
  /* 125a31b0 mov esi, esp */
  ESI = (ESP);
  /* 125a31b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a31b4 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 125a31b6 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a31bcu);
  /* 125a31bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a31bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a31c1 call 0x125a6e00 */
  push32(0x125a31c6u); f_125a6e00();
  /* 125a31c6 mov esi, esp */
  ESI = (ESP);
  /* 125a31c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a31ca push 0x50 */
  push32((uint32_t)(0x50u));
  /* 125a31cc call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a31d2u);
  /* 125a31d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a31d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a31d7 call 0x125a6e00 */
  push32(0x125a31dcu); f_125a6e00();
  /* 125a31dc mov esi, esp */
  ESI = (ESP);
  /* 125a31de push 1 */
  push32((uint32_t)(0x1u));
  /* 125a31e0 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 125a31e2 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a31e8u);
  /* 125a31e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a31eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a31ed call 0x125a6e00 */
  push32(0x125a31f2u); f_125a6e00();
  /* 125a31f2 mov esi, esp */
  ESI = (ESP);
  /* 125a31f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a31f6 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 125a31f8 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a31feu);
  /* 125a31fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3203 call 0x125a6e00 */
  push32(0x125a3208u); f_125a6e00();
  /* 125a3208 mov esi, esp */
  ESI = (ESP);
  /* 125a320a push 1 */
  push32((uint32_t)(0x1u));
  /* 125a320c push 0x4a */
  push32((uint32_t)(0x4au));
  /* 125a320e call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3214u);
  /* 125a3214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3217 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3219 call 0x125a6e00 */
  push32(0x125a321eu); f_125a6e00();
  /* 125a321e mov esi, esp */
  ESI = (ESP);
  /* 125a3220 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3222 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 125a3224 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a322au);
  /* 125a322a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a322d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a322f call 0x125a6e00 */
  push32(0x125a3234u); f_125a6e00();
  /* 125a3234 jmp 0x125a32bd */
  goto L_125a32bd;
L_125a3239:;
  /* 125a3239 mov esi, esp */
  ESI = (ESP);
  /* 125a323b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a323d push 0x31 */
  push32((uint32_t)(0x31u));
  /* 125a323f call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3245u);
  /* 125a3245 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3248 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a324a call 0x125a6e00 */
  push32(0x125a324fu); f_125a6e00();
  /* 125a324f mov esi, esp */
  ESI = (ESP);
  /* 125a3251 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3253 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 125a3255 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a325bu);
  /* 125a325b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a325e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3260 call 0x125a6e00 */
  push32(0x125a3265u); f_125a6e00();
  /* 125a3265 mov esi, esp */
  ESI = (ESP);
  /* 125a3267 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3269 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 125a326b call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3271u);
  /* 125a3271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3274 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3276 call 0x125a6e00 */
  push32(0x125a327bu); f_125a6e00();
  /* 125a327b mov esi, esp */
  ESI = (ESP);
  /* 125a327d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a327f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 125a3281 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3287u);
  /* 125a3287 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a328a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a328c call 0x125a6e00 */
  push32(0x125a3291u); f_125a6e00();
  /* 125a3291 mov esi, esp */
  ESI = (ESP);
  /* 125a3293 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3295 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 125a3297 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a329du);
  /* 125a329d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a32a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a32a2 call 0x125a6e00 */
  push32(0x125a32a7u); f_125a6e00();
  /* 125a32a7 mov esi, esp */
  ESI = (ESP);
  /* 125a32a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a32ab push 0x53 */
  push32((uint32_t)(0x53u));
  /* 125a32ad call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a32b3u);
  /* 125a32b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a32b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a32b8 call 0x125a6e00 */
  push32(0x125a32bdu); f_125a6e00();
L_125a32bd:;
  /* 125a32bd mov esi, esp */
  ESI = (ESP);
  /* 125a32bf push 0x60 */
  push32((uint32_t)(0x60u));
  /* 125a32c1 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a32c7u);
  /* 125a32c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a32ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a32cc call 0x125a6e00 */
  push32(0x125a32d1u); f_125a6e00();
  /* 125a32d1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a32d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a32d8 je 0x125a33f6 */
  if (C.zf) goto L_125a33f6;
  /* 125a32de mov esi, esp */
  ESI = (ESP);
  /* 125a32e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a32e2 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a32e8u);
  /* 125a32e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a32eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a32ed call 0x125a6e00 */
  push32(0x125a32f2u); f_125a6e00();
  /* 125a32f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a32f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a32f9 je 0x125a33f6 */
  if (C.zf) goto L_125a33f6;
  /* 125a32ff mov esi, esp */
  ESI = (ESP);
  /* 125a3301 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3303 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a3309u);
  /* 125a3309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a330c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a330e call 0x125a6e00 */
  push32(0x125a3313u); f_125a6e00();
  /* 125a3313 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a331a je 0x125a33f6 */
  if (C.zf) goto L_125a33f6;
  /* 125a3320 mov esi, esp */
  ESI = (ESP);
  /* 125a3322 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 125a3324 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a332au);
  /* 125a332a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a332d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a332f call 0x125a6e00 */
  push32(0x125a3334u); f_125a6e00();
  /* 125a3334 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a333b je 0x125a33f6 */
  if (C.zf) goto L_125a33f6;
  /* 125a3341 mov esi, esp */
  ESI = (ESP);
  /* 125a3343 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3345 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a334a call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a3350u);
  /* 125a3350 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3353 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3355 call 0x125a6e00 */
  push32(0x125a335au); f_125a6e00();
  /* 125a335a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a335c jne 0x125a33f6 */
  if (!C.zf) goto L_125a33f6;
  /* 125a3362 mov esi, esp */
  ESI = (ESP);
  /* 125a3364 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3366 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 125a3368 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a336eu);
  /* 125a336e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3371 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3373 call 0x125a6e00 */
  push32(0x125a3378u); f_125a6e00();
  /* 125a3378 mov esi, esp */
  ESI = (ESP);
  /* 125a337a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a337c push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a3381 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3383 push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a3388 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a338d push 0x125d36f8 */
  push32((uint32_t)(0x125d36f8u));
  /* 125a3392 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3398u);
  /* 125a3398 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a339b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a339d call 0x125a6e00 */
  push32(0x125a33a2u); f_125a6e00();
  /* 125a33a2 mov esi, esp */
  ESI = (ESP);
  /* 125a33a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a33a6 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a33ab push 1 */
  push32((uint32_t)(0x1u));
  /* 125a33ad push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a33b2 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a33b7 push 0x125d3730 */
  push32((uint32_t)(0x125d3730u));
  /* 125a33bc call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a33c2u);
  /* 125a33c2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a33c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a33c7 call 0x125a6e00 */
  push32(0x125a33ccu); f_125a6e00();
  /* 125a33cc mov esi, esp */
  ESI = (ESP);
  /* 125a33ce push 0 */
  push32((uint32_t)(0x0u));
  /* 125a33d0 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a33d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a33d7 push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a33dc push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a33e1 push 0x125d3510 */
  push32((uint32_t)(0x125d3510u));
  /* 125a33e6 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a33ecu);
  /* 125a33ec add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a33ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a33f1 call 0x125a6e00 */
  push32(0x125a33f6u); f_125a6e00();
L_125a33f6:;
  /* 125a33f6 mov esi, esp */
  ESI = (ESP);
  /* 125a33f8 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 125a33fa call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3400u);
  /* 125a3400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3403 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3405 call 0x125a6e00 */
  push32(0x125a340au); f_125a6e00();
  /* 125a340a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a340f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3411 je 0x125a352f */
  if (C.zf) goto L_125a352f;
  /* 125a3417 mov esi, esp */
  ESI = (ESP);
  /* 125a3419 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a341b call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a3421u);
  /* 125a3421 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3424 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3426 call 0x125a6e00 */
  push32(0x125a342bu); f_125a6e00();
  /* 125a342b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3432 je 0x125a352f */
  if (C.zf) goto L_125a352f;
  /* 125a3438 mov esi, esp */
  ESI = (ESP);
  /* 125a343a push 1 */
  push32((uint32_t)(0x1u));
  /* 125a343c call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a3442u);
  /* 125a3442 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3445 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3447 call 0x125a6e00 */
  push32(0x125a344cu); f_125a6e00();
  /* 125a344c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3453 je 0x125a352f */
  if (C.zf) goto L_125a352f;
  /* 125a3459 mov esi, esp */
  ESI = (ESP);
  /* 125a345b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a345d push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a3462 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a3468u);
  /* 125a3468 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a346b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a346d call 0x125a6e00 */
  push32(0x125a3472u); f_125a6e00();
  /* 125a3472 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3474 jne 0x125a352f */
  if (!C.zf) goto L_125a352f;
  /* 125a347a mov esi, esp */
  ESI = (ESP);
  /* 125a347c push 0x34 */
  push32((uint32_t)(0x34u));
  /* 125a347e call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3484u);
  /* 125a3484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3487 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3489 call 0x125a6e00 */
  push32(0x125a348eu); f_125a6e00();
  /* 125a348e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3495 je 0x125a352f */
  if (C.zf) goto L_125a352f;
  /* 125a349b mov esi, esp */
  ESI = (ESP);
  /* 125a349d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a349f push 0x37 */
  push32((uint32_t)(0x37u));
  /* 125a34a1 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a34a7u);
  /* 125a34a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a34aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a34ac call 0x125a6e00 */
  push32(0x125a34b1u); f_125a6e00();
  /* 125a34b1 mov esi, esp */
  ESI = (ESP);
  /* 125a34b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a34b5 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a34ba push 1 */
  push32((uint32_t)(0x1u));
  /* 125a34bc push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a34c1 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a34c6 push 0x125d3738 */
  push32((uint32_t)(0x125d3738u));
  /* 125a34cb call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a34d1u);
  /* 125a34d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a34d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a34d6 call 0x125a6e00 */
  push32(0x125a34dbu); f_125a6e00();
  /* 125a34db mov esi, esp */
  ESI = (ESP);
  /* 125a34dd push 0 */
  push32((uint32_t)(0x0u));
  /* 125a34df push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a34e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a34e6 push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a34eb push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a34f0 push 0x125d3720 */
  push32((uint32_t)(0x125d3720u));
  /* 125a34f5 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a34fbu);
  /* 125a34fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a34fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3500 call 0x125a6e00 */
  push32(0x125a3505u); f_125a6e00();
  /* 125a3505 mov esi, esp */
  ESI = (ESP);
  /* 125a3507 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3509 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a350e push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3510 push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a3515 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a351a push 0x125d3500 */
  push32((uint32_t)(0x125d3500u));
  /* 125a351f call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3525u);
  /* 125a3525 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3528 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a352a call 0x125a6e00 */
  push32(0x125a352fu); f_125a6e00();
L_125a352f:;
  /* 125a352f mov esi, esp */
  ESI = (ESP);
  /* 125a3531 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 125a3533 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3539u);
  /* 125a3539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a353c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a353e call 0x125a6e00 */
  push32(0x125a3543u); f_125a6e00();
  /* 125a3543 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a354a je 0x125a367e */
  if (C.zf) goto L_125a367e;
  /* 125a3550 mov esi, esp */
  ESI = (ESP);
  /* 125a3552 push 6 */
  push32((uint32_t)(0x6u));
  /* 125a3554 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a355au);
  /* 125a355a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a355d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a355f call 0x125a6e00 */
  push32(0x125a3564u); f_125a6e00();
  /* 125a3564 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a356b je 0x125a367e */
  if (C.zf) goto L_125a367e;
  /* 125a3571 mov esi, esp */
  ESI = (ESP);
  /* 125a3573 push 5 */
  push32((uint32_t)(0x5u));
  /* 125a3575 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a357bu);
  /* 125a357b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a357e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3580 call 0x125a6e00 */
  push32(0x125a3585u); f_125a6e00();
  /* 125a3585 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a358a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a358c je 0x125a367e */
  if (C.zf) goto L_125a367e;
  /* 125a3592 mov esi, esp */
  ESI = (ESP);
  /* 125a3594 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 125a3596 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a359cu);
  /* 125a359c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a359f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a35a1 call 0x125a6e00 */
  push32(0x125a35a6u); f_125a6e00();
  /* 125a35a6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a35ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a35ad je 0x125a367e */
  if (C.zf) goto L_125a367e;
  /* 125a35b3 mov esi, esp */
  ESI = (ESP);
  /* 125a35b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a35b7 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a35bc call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a35c2u);
  /* 125a35c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a35c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a35c7 call 0x125a6e00 */
  push32(0x125a35ccu); f_125a6e00();
  /* 125a35cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a35ce jne 0x125a367e */
  if (!C.zf) goto L_125a367e;
  /* 125a35d4 mov esi, esp */
  ESI = (ESP);
  /* 125a35d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a35d8 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 125a35da call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a35e0u);
  /* 125a35e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a35e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a35e5 call 0x125a6e00 */
  push32(0x125a35eau); f_125a6e00();
  /* 125a35ea mov esi, esp */
  ESI = (ESP);
  /* 125a35ec push 0 */
  push32((uint32_t)(0x0u));
  /* 125a35ee push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a35f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a35f5 push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a35fa push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a35ff push 0x125d3710 */
  push32((uint32_t)(0x125d3710u));
  /* 125a3604 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a360au);
  /* 125a360a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a360d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a360f call 0x125a6e00 */
  push32(0x125a3614u); f_125a6e00();
  /* 125a3614 mov esi, esp */
  ESI = (ESP);
  /* 125a3616 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3618 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a361d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a361f push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a3624 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3629 push 0x125d3718 */
  push32((uint32_t)(0x125d3718u));
  /* 125a362e call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3634u);
  /* 125a3634 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3637 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3639 call 0x125a6e00 */
  push32(0x125a363eu); f_125a6e00();
  /* 125a363e mov esi, esp */
  ESI = (ESP);
  /* 125a3640 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3642 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a3647 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3649 push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a364e push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3653 push 0x125d34d0 */
  push32((uint32_t)(0x125d34d0u));
  /* 125a3658 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a365eu);
  /* 125a365e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3663 call 0x125a6e00 */
  push32(0x125a3668u); f_125a6e00();
  /* 125a3668 mov esi, esp */
  ESI = (ESP);
  /* 125a366a push 1 */
  push32((uint32_t)(0x1u));
  /* 125a366c push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125a366e call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3674u);
  /* 125a3674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3677 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3679 call 0x125a6e00 */
  push32(0x125a367eu); f_125a6e00();
L_125a367e:;
  /* 125a367e mov esi, esp */
  ESI = (ESP);
  /* 125a3680 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 125a3682 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3688u);
  /* 125a3688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a368b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a368d call 0x125a6e00 */
  push32(0x125a3692u); f_125a6e00();
  /* 125a3692 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3699 je 0x125a37cd */
  if (C.zf) goto L_125a37cd;
  /* 125a369f mov esi, esp */
  ESI = (ESP);
  /* 125a36a1 push 6 */
  push32((uint32_t)(0x6u));
  /* 125a36a3 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a36a9u);
  /* 125a36a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a36ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a36ae call 0x125a6e00 */
  push32(0x125a36b3u); f_125a6e00();
  /* 125a36b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a36b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a36ba je 0x125a37cd */
  if (C.zf) goto L_125a37cd;
  /* 125a36c0 mov esi, esp */
  ESI = (ESP);
  /* 125a36c2 push 5 */
  push32((uint32_t)(0x5u));
  /* 125a36c4 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a36cau);
  /* 125a36ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a36cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a36cf call 0x125a6e00 */
  push32(0x125a36d4u); f_125a6e00();
  /* 125a36d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a36d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a36db je 0x125a37cd */
  if (C.zf) goto L_125a37cd;
  /* 125a36e1 mov esi, esp */
  ESI = (ESP);
  /* 125a36e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a36e5 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a36ea call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a36f0u);
  /* 125a36f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a36f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a36f5 call 0x125a6e00 */
  push32(0x125a36fau); f_125a6e00();
  /* 125a36fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a36fc jne 0x125a37cd */
  if (!C.zf) goto L_125a37cd;
  /* 125a3702 mov esi, esp */
  ESI = (ESP);
  /* 125a3704 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 125a3706 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a370cu);
  /* 125a370c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a370f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3711 call 0x125a6e00 */
  push32(0x125a3716u); f_125a6e00();
  /* 125a3716 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a371b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a371d je 0x125a37cd */
  if (C.zf) goto L_125a37cd;
  /* 125a3723 mov esi, esp */
  ESI = (ESP);
  /* 125a3725 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3727 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 125a3729 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a372fu);
  /* 125a372f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3732 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3734 call 0x125a6e00 */
  push32(0x125a3739u); f_125a6e00();
  /* 125a3739 mov esi, esp */
  ESI = (ESP);
  /* 125a373b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a373d push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a3742 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3744 push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a3749 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a374e push 0x125d3700 */
  push32((uint32_t)(0x125d3700u));
  /* 125a3753 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3759u);
  /* 125a3759 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a375c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a375e call 0x125a6e00 */
  push32(0x125a3763u); f_125a6e00();
  /* 125a3763 mov esi, esp */
  ESI = (ESP);
  /* 125a3765 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3767 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a376c push 1 */
  push32((uint32_t)(0x1u));
  /* 125a376e push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a3773 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3778 push 0x125d3708 */
  push32((uint32_t)(0x125d3708u));
  /* 125a377d call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3783u);
  /* 125a3783 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3786 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3788 call 0x125a6e00 */
  push32(0x125a378du); f_125a6e00();
  /* 125a378d mov esi, esp */
  ESI = (ESP);
  /* 125a378f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3791 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a3796 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3798 push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a379d push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a37a2 push 0x125d34c0 */
  push32((uint32_t)(0x125d34c0u));
  /* 125a37a7 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a37adu);
  /* 125a37ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a37b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a37b2 call 0x125a6e00 */
  push32(0x125a37b7u); f_125a6e00();
  /* 125a37b7 mov esi, esp */
  ESI = (ESP);
  /* 125a37b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a37bb push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125a37bd call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a37c3u);
  /* 125a37c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a37c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a37c8 call 0x125a6e00 */
  push32(0x125a37cdu); f_125a6e00();
L_125a37cd:;
  /* 125a37cd mov esi, esp */
  ESI = (ESP);
  /* 125a37cf push 0x53 */
  push32((uint32_t)(0x53u));
  /* 125a37d1 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a37d7u);
  /* 125a37d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a37da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a37dc call 0x125a6e00 */
  push32(0x125a37e1u); f_125a6e00();
  /* 125a37e1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a37e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a37e8 je 0x125a3850 */
  if (C.zf) goto L_125a3850;
  /* 125a37ea mov esi, esp */
  ESI = (ESP);
  /* 125a37ec push 0x60 */
  push32((uint32_t)(0x60u));
  /* 125a37ee call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a37f4u);
  /* 125a37f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a37f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a37f9 call 0x125a6e00 */
  push32(0x125a37feu); f_125a6e00();
  /* 125a37fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3805 je 0x125a3824 */
  if (C.zf) goto L_125a3824;
  /* 125a3807 mov esi, esp */
  ESI = (ESP);
  /* 125a3809 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 125a380b call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3811u);
  /* 125a3811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3816 call 0x125a6e00 */
  push32(0x125a381bu); f_125a6e00();
  /* 125a381b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3822 jne 0x125a3850 */
  if (!C.zf) goto L_125a3850;
L_125a3824:;
  /* 125a3824 mov esi, esp */
  ESI = (ESP);
  /* 125a3826 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3828 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 125a382a call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3830u);
  /* 125a3830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3833 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3835 call 0x125a6e00 */
  push32(0x125a383au); f_125a6e00();
  /* 125a383a mov esi, esp */
  ESI = (ESP);
  /* 125a383c push 1 */
  push32((uint32_t)(0x1u));
  /* 125a383e push 0x62 */
  push32((uint32_t)(0x62u));
  /* 125a3840 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3846u);
  /* 125a3846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a384b call 0x125a6e00 */
  push32(0x125a3850u); f_125a6e00();
L_125a3850:;
  /* 125a3850 mov esi, esp */
  ESI = (ESP);
  /* 125a3852 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 125a3854 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a385au);
  /* 125a385a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a385d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a385f call 0x125a6e00 */
  push32(0x125a3864u); f_125a6e00();
  /* 125a3864 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a386b je 0x125a38af */
  if (C.zf) goto L_125a38af;
  /* 125a386d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a386f push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a3874 call 0x125a100f */
  push32(0x125a3879u); f_125a100f();
  /* 125a3879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a387c mov esi, eax */
  ESI = (EAX);
  /* 125a387e push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3880 push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a3885 call 0x125a100f */
  push32(0x125a388au); f_125a100f();
  /* 125a388a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a388d add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125a388f cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3895 jle 0x125a38af */
  if ((C.zf||C.sf!=C.of)) goto L_125a38af;
  /* 125a3897 mov esi, esp */
  ESI = (ESP);
  /* 125a3899 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a389b push 0x34 */
  push32((uint32_t)(0x34u));
  /* 125a389d call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a38a3u);
  /* 125a38a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a38a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a38a8 call 0x125a6e00 */
  push32(0x125a38adu); f_125a6e00();
  /* 125a38ad jmp 0x125a38c5 */
  goto L_125a38c5;
L_125a38af:;
  /* 125a38af mov esi, esp */
  ESI = (ESP);
  /* 125a38b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a38b3 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 125a38b5 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a38bbu);
  /* 125a38bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a38be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a38c0 call 0x125a6e00 */
  push32(0x125a38c5u); f_125a6e00();
L_125a38c5:;
  /* 125a38c5 mov esi, esp */
  ESI = (ESP);
  /* 125a38c7 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 125a38c9 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a38cfu);
  /* 125a38cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a38d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a38d4 call 0x125a6e00 */
  push32(0x125a38d9u); f_125a6e00();
  /* 125a38d9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a38de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a38e0 je 0x125a3920 */
  if (C.zf) goto L_125a3920;
  /* 125a38e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a38e4 push 0x125d3798 */
  push32((uint32_t)(0x125d3798u));
  /* 125a38e9 call 0x125a100f */
  push32(0x125a38eeu); f_125a100f();
  /* 125a38ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a38f1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a38f4 jg 0x125a390a */
  if ((!C.zf&&C.sf==C.of)) goto L_125a390a;
  /* 125a38f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a38f8 push 0x125d3770 */
  push32((uint32_t)(0x125d3770u));
  /* 125a38fd call 0x125a100f */
  push32(0x125a3902u); f_125a100f();
  /* 125a3902 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3905 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3908 jle 0x125a3920 */
  if ((C.zf||C.sf!=C.of)) goto L_125a3920;
L_125a390a:;
  /* 125a390a mov esi, esp */
  ESI = (ESP);
  /* 125a390c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a390e push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 125a3910 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3916u);
  /* 125a3916 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3919 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a391b call 0x125a6e00 */
  push32(0x125a3920u); f_125a6e00();
L_125a3920:;
  /* 125a3920 mov esi, esp */
  ESI = (ESP);
  /* 125a3922 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 125a3924 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a392au);
  /* 125a392a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a392d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a392f call 0x125a6e00 */
  push32(0x125a3934u); f_125a6e00();
  /* 125a3934 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3939 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a393b je 0x125a3aa4 */
  if (C.zf) goto L_125a3aa4;
  /* 125a3941 mov esi, esp */
  ESI = (ESP);
  /* 125a3943 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 125a3945 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a394bu);
  /* 125a394b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a394e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3950 call 0x125a6e00 */
  push32(0x125a3955u); f_125a6e00();
  /* 125a3955 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a395a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a395c jne 0x125a3aa4 */
  if (!C.zf) goto L_125a3aa4;
  /* 125a3962 mov esi, esp */
  ESI = (ESP);
  /* 125a3964 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a3966 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a396cu);
  /* 125a396c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a396f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3971 call 0x125a6e00 */
  push32(0x125a3976u); f_125a6e00();
  /* 125a3976 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a397b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a397d je 0x125a3aa4 */
  if (C.zf) goto L_125a3aa4;
  /* 125a3983 mov esi, esp */
  ESI = (ESP);
  /* 125a3985 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3987 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a398du);
  /* 125a398d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3990 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3992 call 0x125a6e00 */
  push32(0x125a3997u); f_125a6e00();
  /* 125a3997 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a399c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a399e je 0x125a3aa4 */
  if (C.zf) goto L_125a3aa4;
  /* 125a39a4 mov esi, esp */
  ESI = (ESP);
  /* 125a39a6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 125a39a8 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a39aeu);
  /* 125a39ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a39b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a39b3 call 0x125a6e00 */
  push32(0x125a39b8u); f_125a6e00();
  /* 125a39b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a39bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a39bf je 0x125a3aa4 */
  if (C.zf) goto L_125a3aa4;
  /* 125a39c5 mov esi, esp */
  ESI = (ESP);
  /* 125a39c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a39c9 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a39ce call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a39d4u);
  /* 125a39d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a39d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a39d9 call 0x125a6e00 */
  push32(0x125a39deu); f_125a6e00();
  /* 125a39de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a39e0 jne 0x125a3aa4 */
  if (!C.zf) goto L_125a3aa4;
  /* 125a39e6 mov esi, esp */
  ESI = (ESP);
  /* 125a39e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a39ea push 0x50 */
  push32((uint32_t)(0x50u));
  /* 125a39ec call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a39f2u);
  /* 125a39f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a39f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a39f7 call 0x125a6e00 */
  push32(0x125a39fcu); f_125a6e00();
  /* 125a39fc mov esi, esp */
  ESI = (ESP);
  /* 125a39fe push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3a00 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a3a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3a07 push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a3a0c push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3a11 push 0x125d36f8 */
  push32((uint32_t)(0x125d36f8u));
  /* 125a3a16 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3a1cu);
  /* 125a3a1c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3a1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3a21 call 0x125a6e00 */
  push32(0x125a3a26u); f_125a6e00();
  /* 125a3a26 mov esi, esp */
  ESI = (ESP);
  /* 125a3a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3a2a push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a3a2f push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3a31 push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a3a36 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3a3b push 0x125d3730 */
  push32((uint32_t)(0x125d3730u));
  /* 125a3a40 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3a46u);
  /* 125a3a46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3a49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3a4b call 0x125a6e00 */
  push32(0x125a3a50u); f_125a6e00();
  /* 125a3a50 mov esi, esp */
  ESI = (ESP);
  /* 125a3a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3a54 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a3a59 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3a5b push 0x125d37c8 */
  push32((uint32_t)(0x125d37c8u));
  /* 125a3a60 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3a65 push 0x125d3728 */
  push32((uint32_t)(0x125d3728u));
  /* 125a3a6a call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3a70u);
  /* 125a3a70 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3a73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3a75 call 0x125a6e00 */
  push32(0x125a3a7au); f_125a6e00();
  /* 125a3a7a mov esi, esp */
  ESI = (ESP);
  /* 125a3a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3a7e push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a3a83 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3a85 push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a3a8a push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3a8f push 0x125d3518 */
  push32((uint32_t)(0x125d3518u));
  /* 125a3a94 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3a9au);
  /* 125a3a9a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3a9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3a9f call 0x125a6e00 */
  push32(0x125a3aa4u); f_125a6e00();
L_125a3aa4:;
  /* 125a3aa4 mov esi, esp */
  ESI = (ESP);
  /* 125a3aa6 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 125a3aa8 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3aaeu);
  /* 125a3aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3ab3 call 0x125a6e00 */
  push32(0x125a3ab8u); f_125a6e00();
  /* 125a3ab8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3abf je 0x125a3bfe */
  if (C.zf) goto L_125a3bfe;
  /* 125a3ac5 mov esi, esp */
  ESI = (ESP);
  /* 125a3ac7 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 125a3ac9 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3acfu);
  /* 125a3acf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3ad2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3ad4 call 0x125a6e00 */
  push32(0x125a3ad9u); f_125a6e00();
  /* 125a3ad9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3ade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3ae0 jne 0x125a3bfe */
  if (!C.zf) goto L_125a3bfe;
  /* 125a3ae6 mov esi, esp */
  ESI = (ESP);
  /* 125a3ae8 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a3aea call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a3af0u);
  /* 125a3af0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3af3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3af5 call 0x125a6e00 */
  push32(0x125a3afau); f_125a6e00();
  /* 125a3afa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3b01 je 0x125a3bfe */
  if (C.zf) goto L_125a3bfe;
  /* 125a3b07 mov esi, esp */
  ESI = (ESP);
  /* 125a3b09 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3b0b call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a3b11u);
  /* 125a3b11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3b14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3b16 call 0x125a6e00 */
  push32(0x125a3b1bu); f_125a6e00();
  /* 125a3b1b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3b20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3b22 je 0x125a3bfe */
  if (C.zf) goto L_125a3bfe;
  /* 125a3b28 mov esi, esp */
  ESI = (ESP);
  /* 125a3b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3b2c push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a3b31 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a3b37u);
  /* 125a3b37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3b3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3b3c call 0x125a6e00 */
  push32(0x125a3b41u); f_125a6e00();
  /* 125a3b41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3b43 jne 0x125a3bfe */
  if (!C.zf) goto L_125a3bfe;
  /* 125a3b49 mov esi, esp */
  ESI = (ESP);
  /* 125a3b4b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 125a3b4d call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3b53u);
  /* 125a3b53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3b56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3b58 call 0x125a6e00 */
  push32(0x125a3b5du); f_125a6e00();
  /* 125a3b5d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3b64 je 0x125a3bfe */
  if (C.zf) goto L_125a3bfe;
  /* 125a3b6a mov esi, esp */
  ESI = (ESP);
  /* 125a3b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3b6e push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 125a3b70 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3b76u);
  /* 125a3b76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3b79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3b7b call 0x125a6e00 */
  push32(0x125a3b80u); f_125a6e00();
  /* 125a3b80 mov esi, esp */
  ESI = (ESP);
  /* 125a3b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3b84 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a3b89 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3b8b push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a3b90 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3b95 push 0x125d3738 */
  push32((uint32_t)(0x125d3738u));
  /* 125a3b9a call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3ba0u);
  /* 125a3ba0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3ba3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3ba5 call 0x125a6e00 */
  push32(0x125a3baau); f_125a6e00();
  /* 125a3baa mov esi, esp */
  ESI = (ESP);
  /* 125a3bac push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3bae push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a3bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3bb5 push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a3bba push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3bbf push 0x125d3720 */
  push32((uint32_t)(0x125d3720u));
  /* 125a3bc4 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3bcau);
  /* 125a3bca add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3bcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3bcf call 0x125a6e00 */
  push32(0x125a3bd4u); f_125a6e00();
  /* 125a3bd4 mov esi, esp */
  ESI = (ESP);
  /* 125a3bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3bd8 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a3bdd push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3bdf push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a3be4 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3be9 push 0x125d3508 */
  push32((uint32_t)(0x125d3508u));
  /* 125a3bee call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3bf4u);
  /* 125a3bf4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3bf9 call 0x125a6e00 */
  push32(0x125a3bfeu); f_125a6e00();
L_125a3bfe:;
  /* 125a3bfe mov esi, esp */
  ESI = (ESP);
  /* 125a3c00 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 125a3c02 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3c08u);
  /* 125a3c08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3c0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3c0d call 0x125a6e00 */
  push32(0x125a3c12u); f_125a6e00();
  /* 125a3c12 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3c19 je 0x125a3d98 */
  if (C.zf) goto L_125a3d98;
  /* 125a3c1f mov esi, esp */
  ESI = (ESP);
  /* 125a3c21 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 125a3c23 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3c29u);
  /* 125a3c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3c2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3c2e call 0x125a6e00 */
  push32(0x125a3c33u); f_125a6e00();
  /* 125a3c33 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3c38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3c3a jne 0x125a3d98 */
  if (!C.zf) goto L_125a3d98;
  /* 125a3c40 mov esi, esp */
  ESI = (ESP);
  /* 125a3c42 push 6 */
  push32((uint32_t)(0x6u));
  /* 125a3c44 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a3c4au);
  /* 125a3c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3c4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3c4f call 0x125a6e00 */
  push32(0x125a3c54u); f_125a6e00();
  /* 125a3c54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3c5b je 0x125a3d98 */
  if (C.zf) goto L_125a3d98;
  /* 125a3c61 mov esi, esp */
  ESI = (ESP);
  /* 125a3c63 push 5 */
  push32((uint32_t)(0x5u));
  /* 125a3c65 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a3c6bu);
  /* 125a3c6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3c70 call 0x125a6e00 */
  push32(0x125a3c75u); f_125a6e00();
  /* 125a3c75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3c7c je 0x125a3d98 */
  if (C.zf) goto L_125a3d98;
  /* 125a3c82 mov esi, esp */
  ESI = (ESP);
  /* 125a3c84 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 125a3c86 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3c8cu);
  /* 125a3c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3c8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3c91 call 0x125a6e00 */
  push32(0x125a3c96u); f_125a6e00();
  /* 125a3c96 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3c9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3c9d je 0x125a3d98 */
  if (C.zf) goto L_125a3d98;
  /* 125a3ca3 mov esi, esp */
  ESI = (ESP);
  /* 125a3ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3ca7 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a3cac call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a3cb2u);
  /* 125a3cb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3cb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3cb7 call 0x125a6e00 */
  push32(0x125a3cbcu); f_125a6e00();
  /* 125a3cbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3cbe jne 0x125a3d98 */
  if (!C.zf) goto L_125a3d98;
  /* 125a3cc4 mov esi, esp */
  ESI = (ESP);
  /* 125a3cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3cc8 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 125a3cca call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3cd0u);
  /* 125a3cd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3cd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3cd5 call 0x125a6e00 */
  push32(0x125a3cdau); f_125a6e00();
  /* 125a3cda mov esi, esp */
  ESI = (ESP);
  /* 125a3cdc push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3cde push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a3ce3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3ce5 push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a3cea push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3cef push 0x125d3710 */
  push32((uint32_t)(0x125d3710u));
  /* 125a3cf4 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3cfau);
  /* 125a3cfa add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3cfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3cff call 0x125a6e00 */
  push32(0x125a3d04u); f_125a6e00();
  /* 125a3d04 mov esi, esp */
  ESI = (ESP);
  /* 125a3d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3d08 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a3d0d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3d0f push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a3d14 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3d19 push 0x125d3718 */
  push32((uint32_t)(0x125d3718u));
  /* 125a3d1e call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3d24u);
  /* 125a3d24 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3d27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3d29 call 0x125a6e00 */
  push32(0x125a3d2eu); f_125a6e00();
  /* 125a3d2e mov esi, esp */
  ESI = (ESP);
  /* 125a3d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3d32 push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a3d37 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3d39 push 0x125d37c8 */
  push32((uint32_t)(0x125d37c8u));
  /* 125a3d3e push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3d43 push 0x125d3740 */
  push32((uint32_t)(0x125d3740u));
  /* 125a3d48 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3d4eu);
  /* 125a3d4e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3d53 call 0x125a6e00 */
  push32(0x125a3d58u); f_125a6e00();
  /* 125a3d58 mov esi, esp */
  ESI = (ESP);
  /* 125a3d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3d5c push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a3d61 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3d63 push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a3d68 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3d6d push 0x125d34f8 */
  push32((uint32_t)(0x125d34f8u));
  /* 125a3d72 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3d78u);
  /* 125a3d78 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3d7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3d7d call 0x125a6e00 */
  push32(0x125a3d82u); f_125a6e00();
  /* 125a3d82 mov esi, esp */
  ESI = (ESP);
  /* 125a3d84 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3d86 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125a3d88 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3d8eu);
  /* 125a3d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3d91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3d93 call 0x125a6e00 */
  push32(0x125a3d98u); f_125a6e00();
L_125a3d98:;
  /* 125a3d98 mov esi, esp */
  ESI = (ESP);
  /* 125a3d9a push 0x4a */
  push32((uint32_t)(0x4au));
  /* 125a3d9c call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3da2u);
  /* 125a3da2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3da5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3da7 call 0x125a6e00 */
  push32(0x125a3dacu); f_125a6e00();
  /* 125a3dac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3db1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3db3 je 0x125a3f08 */
  if (C.zf) goto L_125a3f08;
  /* 125a3db9 mov esi, esp */
  ESI = (ESP);
  /* 125a3dbb push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 125a3dbd call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3dc3u);
  /* 125a3dc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3dc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3dc8 call 0x125a6e00 */
  push32(0x125a3dcdu); f_125a6e00();
  /* 125a3dcd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3dd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3dd4 jne 0x125a3f08 */
  if (!C.zf) goto L_125a3f08;
  /* 125a3dda mov esi, esp */
  ESI = (ESP);
  /* 125a3ddc push 6 */
  push32((uint32_t)(0x6u));
  /* 125a3dde call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a3de4u);
  /* 125a3de4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3de7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3de9 call 0x125a6e00 */
  push32(0x125a3deeu); f_125a6e00();
  /* 125a3dee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3df3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3df5 je 0x125a3f08 */
  if (C.zf) goto L_125a3f08;
  /* 125a3dfb mov esi, esp */
  ESI = (ESP);
  /* 125a3dfd push 5 */
  push32((uint32_t)(0x5u));
  /* 125a3dff call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a3e05u);
  /* 125a3e05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3e08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3e0a call 0x125a6e00 */
  push32(0x125a3e0fu); f_125a6e00();
  /* 125a3e0f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3e14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3e16 je 0x125a3f08 */
  if (C.zf) goto L_125a3f08;
  /* 125a3e1c mov esi, esp */
  ESI = (ESP);
  /* 125a3e1e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3e20 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a3e25 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a3e2bu);
  /* 125a3e2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3e2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3e30 call 0x125a6e00 */
  push32(0x125a3e35u); f_125a6e00();
  /* 125a3e35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3e37 jne 0x125a3f08 */
  if (!C.zf) goto L_125a3f08;
  /* 125a3e3d mov esi, esp */
  ESI = (ESP);
  /* 125a3e3f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 125a3e41 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3e47u);
  /* 125a3e47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3e4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3e4c call 0x125a6e00 */
  push32(0x125a3e51u); f_125a6e00();
  /* 125a3e51 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3e56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3e58 je 0x125a3f08 */
  if (C.zf) goto L_125a3f08;
  /* 125a3e5e mov esi, esp */
  ESI = (ESP);
  /* 125a3e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3e62 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 125a3e64 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3e6au);
  /* 125a3e6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3e6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3e6f call 0x125a6e00 */
  push32(0x125a3e74u); f_125a6e00();
  /* 125a3e74 mov esi, esp */
  ESI = (ESP);
  /* 125a3e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3e78 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a3e7d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3e7f push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a3e84 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3e89 push 0x125d3700 */
  push32((uint32_t)(0x125d3700u));
  /* 125a3e8e call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3e94u);
  /* 125a3e94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3e97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3e99 call 0x125a6e00 */
  push32(0x125a3e9eu); f_125a6e00();
  /* 125a3e9e mov esi, esp */
  ESI = (ESP);
  /* 125a3ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3ea2 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a3ea7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3ea9 push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a3eae push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3eb3 push 0x125d3708 */
  push32((uint32_t)(0x125d3708u));
  /* 125a3eb8 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3ebeu);
  /* 125a3ebe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3ec1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3ec3 call 0x125a6e00 */
  push32(0x125a3ec8u); f_125a6e00();
  /* 125a3ec8 mov esi, esp */
  ESI = (ESP);
  /* 125a3eca push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3ecc push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a3ed1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3ed3 push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a3ed8 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a3edd push 0x125d34c8 */
  push32((uint32_t)(0x125d34c8u));
  /* 125a3ee2 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a3ee8u);
  /* 125a3ee8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3eeb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3eed call 0x125a6e00 */
  push32(0x125a3ef2u); f_125a6e00();
  /* 125a3ef2 mov esi, esp */
  ESI = (ESP);
  /* 125a3ef4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3ef6 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 125a3ef8 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3efeu);
  /* 125a3efe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3f01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3f03 call 0x125a6e00 */
  push32(0x125a3f08u); f_125a6e00();
L_125a3f08:;
  /* 125a3f08 mov esi, esp */
  ESI = (ESP);
  /* 125a3f0a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 125a3f0c call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3f12u);
  /* 125a3f12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3f15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3f17 call 0x125a6e00 */
  push32(0x125a3f1cu); f_125a6e00();
  /* 125a3f1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3f21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3f23 je 0x125a3f8b */
  if (C.zf) goto L_125a3f8b;
  /* 125a3f25 mov esi, esp */
  ESI = (ESP);
  /* 125a3f27 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 125a3f29 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3f2fu);
  /* 125a3f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3f32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3f34 call 0x125a6e00 */
  push32(0x125a3f39u); f_125a6e00();
  /* 125a3f39 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3f3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3f40 je 0x125a3f5f */
  if (C.zf) goto L_125a3f5f;
  /* 125a3f42 mov esi, esp */
  ESI = (ESP);
  /* 125a3f44 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 125a3f46 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3f4cu);
  /* 125a3f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3f4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3f51 call 0x125a6e00 */
  push32(0x125a3f56u); f_125a6e00();
  /* 125a3f56 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3f5d jne 0x125a3f8b */
  if (!C.zf) goto L_125a3f8b;
L_125a3f5f:;
  /* 125a3f5f mov esi, esp */
  ESI = (ESP);
  /* 125a3f61 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3f63 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 125a3f65 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3f6bu);
  /* 125a3f6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3f6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3f70 call 0x125a6e00 */
  push32(0x125a3f75u); f_125a6e00();
  /* 125a3f75 mov esi, esp */
  ESI = (ESP);
  /* 125a3f77 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3f79 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 125a3f7b call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3f81u);
  /* 125a3f81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3f84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3f86 call 0x125a6e00 */
  push32(0x125a3f8bu); f_125a6e00();
L_125a3f8b:;
  /* 125a3f8b mov esi, esp */
  ESI = (ESP);
  /* 125a3f8d push 0x33 */
  push32((uint32_t)(0x33u));
  /* 125a3f8f call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a3f95u);
  /* 125a3f95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3f98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3f9a call 0x125a6e00 */
  push32(0x125a3f9fu); f_125a6e00();
  /* 125a3f9f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a3fa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a3fa6 je 0x125a3ffb */
  if (C.zf) goto L_125a3ffb;
  /* 125a3fa8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3faa push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a3faf call 0x125a100f */
  push32(0x125a3fb4u); f_125a100f();
  /* 125a3fb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3fb7 mov esi, eax */
  ESI = (EAX);
  /* 125a3fb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3fbb push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a3fc0 call 0x125a100f */
  push32(0x125a3fc5u); f_125a100f();
  /* 125a3fc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3fc8 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3fca push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3fcc push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a3fd1 call 0x125a100f */
  push32(0x125a3fd6u); f_125a100f();
  /* 125a3fd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3fd9 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3fdb cmp esi, 0x708 */
  { uint32_t _a=(ESI),_b=(0x708u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3fe1 jle 0x125a3ffb */
  if ((C.zf||C.sf!=C.of)) goto L_125a3ffb;
  /* 125a3fe3 mov esi, esp */
  ESI = (ESP);
  /* 125a3fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a3fe7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 125a3fe9 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a3fefu);
  /* 125a3fef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a3ff2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a3ff4 call 0x125a6e00 */
  push32(0x125a3ff9u); f_125a6e00();
  /* 125a3ff9 jmp 0x125a4011 */
  goto L_125a4011;
L_125a3ffb:;
  /* 125a3ffb mov esi, esp */
  ESI = (ESP);
  /* 125a3ffd push 1 */
  push32((uint32_t)(0x1u));
  /* 125a3fff push 0x32 */
  push32((uint32_t)(0x32u));
  /* 125a4001 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4007u);
  /* 125a4007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a400a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a400c call 0x125a6e00 */
  push32(0x125a4011u); f_125a6e00();
L_125a4011:;
  /* 125a4011 mov esi, esp */
  ESI = (ESP);
  /* 125a4013 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 125a4015 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a401bu);
  /* 125a401b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a401e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4020 call 0x125a6e00 */
  push32(0x125a4025u); f_125a6e00();
  /* 125a4025 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a402a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a402c je 0x125a412b */
  if (C.zf) goto L_125a412b;
  /* 125a4032 mov esi, esp */
  ESI = (ESP);
  /* 125a4034 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4036 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a403b call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4041u);
  /* 125a4041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4044 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4046 call 0x125a6e00 */
  push32(0x125a404bu); f_125a6e00();
  /* 125a404b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a404d jne 0x125a412b */
  if (!C.zf) goto L_125a412b;
  /* 125a4053 mov esi, esp */
  ESI = (ESP);
  /* 125a4055 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4057 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a405c call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4062u);
  /* 125a4062 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4065 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4067 call 0x125a6e00 */
  push32(0x125a406cu); f_125a6e00();
  /* 125a406c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a406e jle 0x125a412b */
  if ((C.zf||C.sf!=C.of)) goto L_125a412b;
  /* 125a4074 mov esi, esp */
  ESI = (ESP);
  /* 125a4076 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4078 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 125a407a call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4080u);
  /* 125a4080 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4083 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4085 call 0x125a6e00 */
  push32(0x125a408au); f_125a6e00();
  /* 125a408a mov esi, esp */
  ESI = (ESP);
  /* 125a408c push 1 */
  push32((uint32_t)(0x1u));
  /* 125a408e push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 125a4090 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4096u);
  /* 125a4096 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4099 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a409b call 0x125a6e00 */
  push32(0x125a40a0u); f_125a6e00();
  /* 125a40a0 mov esi, esp */
  ESI = (ESP);
  /* 125a40a2 push 0x125ce80c */
  push32((uint32_t)(0x125ce80cu));
  /* 125a40a7 call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a40adu);
  /* 125a40ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a40b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a40b2 call 0x125a6e00 */
  push32(0x125a40b7u); f_125a6e00();
  /* 125a40b7 mov esi, esp */
  ESI = (ESP);
  /* 125a40b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a40bb call dword ptr [0x125d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6494))), 0x125a40c1u);
  /* 125a40c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a40c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a40c6 call 0x125a6e00 */
  push32(0x125a40cbu); f_125a6e00();
  /* 125a40cb mov esi, esp */
  ESI = (ESP);
  /* 125a40cd push 0 */
  push32((uint32_t)(0x0u));
  /* 125a40cf call dword ptr [0x125d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6494))), 0x125a40d5u);
  /* 125a40d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a40d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a40da call 0x125a6e00 */
  push32(0x125a40dfu); f_125a6e00();
  /* 125a40df mov esi, esp */
  ESI = (ESP);
  /* 125a40e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a40e3 push 0x125d3688 */
  push32((uint32_t)(0x125d3688u));
  /* 125a40e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a40ea call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a40f0u);
  /* 125a40f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a40f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a40f5 call 0x125a6e00 */
  push32(0x125a40fau); f_125a6e00();
  /* 125a40fa mov esi, esp */
  ESI = (ESP);
  /* 125a40fc push 1 */
  push32((uint32_t)(0x1u));
  /* 125a40fe push 0x125d3698 */
  push32((uint32_t)(0x125d3698u));
  /* 125a4103 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4105 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a410bu);
  /* 125a410b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a410e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4110 call 0x125a6e00 */
  push32(0x125a4115u); f_125a6e00();
  /* 125a4115 mov esi, esp */
  ESI = (ESP);
  /* 125a4117 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4119 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a411b call dword ptr [0x125d64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a4))), 0x125a4121u);
  /* 125a4121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4124 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4126 call 0x125a6e00 */
  push32(0x125a412bu); f_125a6e00();
L_125a412b:;
  /* 125a412b mov esi, esp */
  ESI = (ESP);
  /* 125a412d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 125a412f call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4135u);
  /* 125a4135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4138 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a413a call 0x125a6e00 */
  push32(0x125a413fu); f_125a6e00();
  /* 125a413f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4146 je 0x125a4266 */
  if (C.zf) goto L_125a4266;
  /* 125a414c mov esi, esp */
  ESI = (ESP);
  /* 125a414e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 125a4150 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4156u);
  /* 125a4156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a415b call 0x125a6e00 */
  push32(0x125a4160u); f_125a6e00();
  /* 125a4160 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4165 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4167 jne 0x125a4266 */
  if (!C.zf) goto L_125a4266;
  /* 125a416d mov esi, esp */
  ESI = (ESP);
  /* 125a416f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4171 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a4176 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a417cu);
  /* 125a417c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a417f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4181 call 0x125a6e00 */
  push32(0x125a4186u); f_125a6e00();
  /* 125a4186 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4188 jge 0x125a4266 */
  if ((C.sf==C.of)) goto L_125a4266;
  /* 125a418e mov esi, esp */
  ESI = (ESP);
  /* 125a4190 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4192 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a4197 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a419du);
  /* 125a419d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a41a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a41a2 call 0x125a6e00 */
  push32(0x125a41a7u); f_125a6e00();
  /* 125a41a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a41a9 jle 0x125a4266 */
  if ((C.zf||C.sf!=C.of)) goto L_125a4266;
  /* 125a41af mov esi, esp */
  ESI = (ESP);
  /* 125a41b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a41b3 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 125a41b5 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a41bbu);
  /* 125a41bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a41be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a41c0 call 0x125a6e00 */
  push32(0x125a41c5u); f_125a6e00();
  /* 125a41c5 mov esi, esp */
  ESI = (ESP);
  /* 125a41c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a41c9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 125a41cb call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a41d1u);
  /* 125a41d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a41d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a41d6 call 0x125a6e00 */
  push32(0x125a41dbu); f_125a6e00();
  /* 125a41db mov esi, esp */
  ESI = (ESP);
  /* 125a41dd push 0x125ce800 */
  push32((uint32_t)(0x125ce800u));
  /* 125a41e2 call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a41e8u);
  /* 125a41e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a41eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a41ed call 0x125a6e00 */
  push32(0x125a41f2u); f_125a6e00();
  /* 125a41f2 mov esi, esp */
  ESI = (ESP);
  /* 125a41f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a41f6 call dword ptr [0x125d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6494))), 0x125a41fcu);
  /* 125a41fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a41ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4201 call 0x125a6e00 */
  push32(0x125a4206u); f_125a6e00();
  /* 125a4206 mov esi, esp */
  ESI = (ESP);
  /* 125a4208 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a420a call dword ptr [0x125d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6494))), 0x125a4210u);
  /* 125a4210 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4213 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4215 call 0x125a6e00 */
  push32(0x125a421au); f_125a6e00();
  /* 125a421a mov esi, esp */
  ESI = (ESP);
  /* 125a421c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a421e push 0x125d3688 */
  push32((uint32_t)(0x125d3688u));
  /* 125a4223 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4225 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a422bu);
  /* 125a422b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a422e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4230 call 0x125a6e00 */
  push32(0x125a4235u); f_125a6e00();
  /* 125a4235 mov esi, esp */
  ESI = (ESP);
  /* 125a4237 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4239 push 0x125d3698 */
  push32((uint32_t)(0x125d3698u));
  /* 125a423e push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4240 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a4246u);
  /* 125a4246 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4249 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a424b call 0x125a6e00 */
  push32(0x125a4250u); f_125a6e00();
  /* 125a4250 mov esi, esp */
  ESI = (ESP);
  /* 125a4252 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4254 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4256 call dword ptr [0x125d64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a4))), 0x125a425cu);
  /* 125a425c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a425f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4261 call 0x125a6e00 */
  push32(0x125a4266u); f_125a6e00();
L_125a4266:;
  /* 125a4266 mov esi, esp */
  ESI = (ESP);
  /* 125a4268 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 125a426a call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4270u);
  /* 125a4270 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4273 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4275 call 0x125a6e00 */
  push32(0x125a427au); f_125a6e00();
  /* 125a427a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a427f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4281 je 0x125a42fb */
  if (C.zf) goto L_125a42fb;
  /* 125a4283 mov esi, esp */
  ESI = (ESP);
  /* 125a4285 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4287 push 0x125d3620 */
  push32((uint32_t)(0x125d3620u));
  /* 125a428c call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4292u);
  /* 125a4292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4295 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4297 call 0x125a6e00 */
  push32(0x125a429cu); f_125a6e00();
  /* 125a429c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a429e jle 0x125a42fb */
  if ((C.zf||C.sf!=C.of)) goto L_125a42fb;
  /* 125a42a0 mov esi, esp */
  ESI = (ESP);
  /* 125a42a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a42a4 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 125a42a6 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a42acu);
  /* 125a42ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a42af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a42b1 call 0x125a6e00 */
  push32(0x125a42b6u); f_125a6e00();
  /* 125a42b6 mov esi, esp */
  ESI = (ESP);
  /* 125a42b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a42ba push 0x4d */
  push32((uint32_t)(0x4du));
  /* 125a42bc call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a42c2u);
  /* 125a42c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a42c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a42c7 call 0x125a6e00 */
  push32(0x125a42ccu); f_125a6e00();
  /* 125a42cc mov esi, esp */
  ESI = (ESP);
  /* 125a42ce push 0 */
  push32((uint32_t)(0x0u));
  /* 125a42d0 push 0x125d36f0 */
  push32((uint32_t)(0x125d36f0u));
  /* 125a42d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a42d7 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a42ddu);
  /* 125a42dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a42e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a42e2 call 0x125a6e00 */
  push32(0x125a42e7u); f_125a6e00();
  /* 125a42e7 mov esi, esp */
  ESI = (ESP);
  /* 125a42e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a42eb call dword ptr [0x125d64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a8))), 0x125a42f1u);
  /* 125a42f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a42f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a42f6 call 0x125a6e00 */
  push32(0x125a42fbu); f_125a6e00();
L_125a42fb:;
  /* 125a42fb mov esi, esp */
  ESI = (ESP);
  /* 125a42fd push 0x4d */
  push32((uint32_t)(0x4du));
  /* 125a42ff call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4305u);
  /* 125a4305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4308 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a430a call 0x125a6e00 */
  push32(0x125a430fu); f_125a6e00();
  /* 125a430f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4314 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4316 je 0x125a43b1 */
  if (C.zf) goto L_125a43b1;
  /* 125a431c mov esi, esp */
  ESI = (ESP);
  /* 125a431e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 125a4320 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4326u);
  /* 125a4326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4329 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a432b call 0x125a6e00 */
  push32(0x125a4330u); f_125a6e00();
  /* 125a4330 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4337 jne 0x125a43b1 */
  if (!C.zf) goto L_125a43b1;
  /* 125a4339 mov esi, esp */
  ESI = (ESP);
  /* 125a433b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a433d push 0x125d3620 */
  push32((uint32_t)(0x125d3620u));
  /* 125a4342 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4348u);
  /* 125a4348 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a434b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a434d call 0x125a6e00 */
  push32(0x125a4352u); f_125a6e00();
  /* 125a4352 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4354 jne 0x125a43b1 */
  if (!C.zf) goto L_125a43b1;
  /* 125a4356 mov esi, esp */
  ESI = (ESP);
  /* 125a4358 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a435a push 0x4d */
  push32((uint32_t)(0x4du));
  /* 125a435c call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4362u);
  /* 125a4362 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4365 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4367 call 0x125a6e00 */
  push32(0x125a436cu); f_125a6e00();
  /* 125a436c mov esi, esp */
  ESI = (ESP);
  /* 125a436e push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4370 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 125a4372 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4378u);
  /* 125a4378 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a437b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a437d call 0x125a6e00 */
  push32(0x125a4382u); f_125a6e00();
  /* 125a4382 mov esi, esp */
  ESI = (ESP);
  /* 125a4384 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4386 push 0x125d36f0 */
  push32((uint32_t)(0x125d36f0u));
  /* 125a438b push 1 */
  push32((uint32_t)(0x1u));
  /* 125a438d call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a4393u);
  /* 125a4393 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4396 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4398 call 0x125a6e00 */
  push32(0x125a439du); f_125a6e00();
  /* 125a439d mov esi, esp */
  ESI = (ESP);
  /* 125a439f push 1 */
  push32((uint32_t)(0x1u));
  /* 125a43a1 call dword ptr [0x125d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6458))), 0x125a43a7u);
  /* 125a43a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a43aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a43ac call 0x125a6e00 */
  push32(0x125a43b1u); f_125a6e00();
L_125a43b1:;
  /* 125a43b1 mov esi, esp */
  ESI = (ESP);
  /* 125a43b3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 125a43b5 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a43bbu);
  /* 125a43bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a43be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a43c0 call 0x125a6e00 */
  push32(0x125a43c5u); f_125a6e00();
  /* 125a43c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a43ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a43cc je 0x125a4581 */
  if (C.zf) goto L_125a4581;
  /* 125a43d2 mov esi, esp */
  ESI = (ESP);
  /* 125a43d4 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 125a43d6 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a43dcu);
  /* 125a43dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a43df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a43e1 call 0x125a6e00 */
  push32(0x125a43e6u); f_125a6e00();
  /* 125a43e6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a43eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a43ed jne 0x125a4581 */
  if (!C.zf) goto L_125a4581;
  /* 125a43f3 mov esi, esp */
  ESI = (ESP);
  /* 125a43f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a43f7 push 0x125d3618 */
  push32((uint32_t)(0x125d3618u));
  /* 125a43fc call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4402u);
  /* 125a4402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4407 call 0x125a6e00 */
  push32(0x125a440cu); f_125a6e00();
  /* 125a440c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a440e jne 0x125a4581 */
  if (!C.zf) goto L_125a4581;
  /* 125a4414 mov esi, esp */
  ESI = (ESP);
  /* 125a4416 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4418 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 125a441a call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4420u);
  /* 125a4420 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4423 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4425 call 0x125a6e00 */
  push32(0x125a442au); f_125a6e00();
  /* 125a442a mov esi, esp */
  ESI = (ESP);
  /* 125a442c push 1 */
  push32((uint32_t)(0x1u));
  /* 125a442e push 0x48 */
  push32((uint32_t)(0x48u));
  /* 125a4430 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4436u);
  /* 125a4436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4439 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a443b call 0x125a6e00 */
  push32(0x125a4440u); f_125a6e00();
  /* 125a4440 mov esi, esp */
  ESI = (ESP);
  /* 125a4442 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4444 push 0x125d3618 */
  push32((uint32_t)(0x125d3618u));
  /* 125a4449 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a444b push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a4450 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a4455 push 0x125d34f0 */
  push32((uint32_t)(0x125d34f0u));
  /* 125a445a call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a4460u);
  /* 125a4460 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4463 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4465 call 0x125a6e00 */
  push32(0x125a446au); f_125a6e00();
  /* 125a446a mov esi, esp */
  ESI = (ESP);
  /* 125a446c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a446e push 0x125d3618 */
  push32((uint32_t)(0x125d3618u));
  /* 125a4473 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4475 push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a447a push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a447f push 0x125d34e8 */
  push32((uint32_t)(0x125d34e8u));
  /* 125a4484 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a448au);
  /* 125a448a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a448d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a448f call 0x125a6e00 */
  push32(0x125a4494u); f_125a6e00();
  /* 125a4494 mov esi, esp */
  ESI = (ESP);
  /* 125a4496 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4498 push 0x125d3618 */
  push32((uint32_t)(0x125d3618u));
  /* 125a449d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a449f push 0x125d37c8 */
  push32((uint32_t)(0x125d37c8u));
  /* 125a44a4 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a44a9 push 0x125d34e0 */
  push32((uint32_t)(0x125d34e0u));
  /* 125a44ae call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a44b4u);
  /* 125a44b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a44b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a44b9 call 0x125a6e00 */
  push32(0x125a44beu); f_125a6e00();
  /* 125a44be mov esi, esp */
  ESI = (ESP);
  /* 125a44c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a44c2 push 0x125d3618 */
  push32((uint32_t)(0x125d3618u));
  /* 125a44c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a44c9 push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a44ce push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a44d3 push 0x125d34b8 */
  push32((uint32_t)(0x125d34b8u));
  /* 125a44d8 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a44deu);
  /* 125a44de add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a44e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a44e3 call 0x125a6e00 */
  push32(0x125a44e8u); f_125a6e00();
  /* 125a44e8 mov esi, esp */
  ESI = (ESP);
  /* 125a44ea push 0 */
  push32((uint32_t)(0x0u));
  /* 125a44ec push 0x125d34f0 */
  push32((uint32_t)(0x125d34f0u));
  /* 125a44f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a44f3 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a44f9u);
  /* 125a44f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a44fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a44fe call 0x125a6e00 */
  push32(0x125a4503u); f_125a6e00();
  /* 125a4503 mov esi, esp */
  ESI = (ESP);
  /* 125a4505 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4507 push 0x125d34e8 */
  push32((uint32_t)(0x125d34e8u));
  /* 125a450c push 1 */
  push32((uint32_t)(0x1u));
  /* 125a450e call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a4514u);
  /* 125a4514 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4517 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4519 call 0x125a6e00 */
  push32(0x125a451eu); f_125a6e00();
  /* 125a451e mov esi, esp */
  ESI = (ESP);
  /* 125a4520 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4522 push 0x125d34e0 */
  push32((uint32_t)(0x125d34e0u));
  /* 125a4527 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4529 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a452fu);
  /* 125a452f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4532 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4534 call 0x125a6e00 */
  push32(0x125a4539u); f_125a6e00();
  /* 125a4539 mov esi, esp */
  ESI = (ESP);
  /* 125a453b push 1 */
  push32((uint32_t)(0x1u));
  /* 125a453d push 0x125d34b8 */
  push32((uint32_t)(0x125d34b8u));
  /* 125a4542 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4544 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a454au);
  /* 125a454a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a454d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a454f call 0x125a6e00 */
  push32(0x125a4554u); f_125a6e00();
  /* 125a4554 mov esi, esp */
  ESI = (ESP);
  /* 125a4556 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4558 call dword ptr [0x125d644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d644c))), 0x125a455eu);
  /* 125a455e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4561 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4563 call 0x125a6e00 */
  push32(0x125a4568u); f_125a6e00();
  /* 125a4568 mov esi, esp */
  ESI = (ESP);
  /* 125a456a push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 125a456f push 0xa */
  push32((uint32_t)(0xau));
  /* 125a4571 call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a4577u);
  /* 125a4577 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a457a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a457c call 0x125a6e00 */
  push32(0x125a4581u); f_125a6e00();
L_125a4581:;
  /* 125a4581 mov esi, esp */
  ESI = (ESP);
  /* 125a4583 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 125a4585 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a458bu);
  /* 125a458b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a458e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4590 call 0x125a6e00 */
  push32(0x125a4595u); f_125a6e00();
  /* 125a4595 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a459a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a459c je 0x125a4637 */
  if (C.zf) goto L_125a4637;
  /* 125a45a2 mov esi, esp */
  ESI = (ESP);
  /* 125a45a4 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 125a45a6 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a45acu);
  /* 125a45ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a45af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a45b1 call 0x125a6e00 */
  push32(0x125a45b6u); f_125a6e00();
  /* 125a45b6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a45bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a45bd jne 0x125a4637 */
  if (!C.zf) goto L_125a4637;
  /* 125a45bf mov esi, esp */
  ESI = (ESP);
  /* 125a45c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a45c3 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a45c8 push 0x125d34f0 */
  push32((uint32_t)(0x125d34f0u));
  /* 125a45cd call dword ptr [0x125d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a0))), 0x125a45d3u);
  /* 125a45d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a45d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a45d8 call 0x125a6e00 */
  push32(0x125a45ddu); f_125a6e00();
  /* 125a45dd mov esi, esp */
  ESI = (ESP);
  /* 125a45df push 0 */
  push32((uint32_t)(0x0u));
  /* 125a45e1 push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a45e6 push 0x125d34e8 */
  push32((uint32_t)(0x125d34e8u));
  /* 125a45eb call dword ptr [0x125d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a0))), 0x125a45f1u);
  /* 125a45f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a45f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a45f6 call 0x125a6e00 */
  push32(0x125a45fbu); f_125a6e00();
  /* 125a45fb mov esi, esp */
  ESI = (ESP);
  /* 125a45fd push 0 */
  push32((uint32_t)(0x0u));
  /* 125a45ff push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a4604 push 0x125d34e0 */
  push32((uint32_t)(0x125d34e0u));
  /* 125a4609 call dword ptr [0x125d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a0))), 0x125a460fu);
  /* 125a460f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4612 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4614 call 0x125a6e00 */
  push32(0x125a4619u); f_125a6e00();
  /* 125a4619 mov esi, esp */
  ESI = (ESP);
  /* 125a461b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a461d push 0x125d35f0 */
  push32((uint32_t)(0x125d35f0u));
  /* 125a4622 push 0x125d34b8 */
  push32((uint32_t)(0x125d34b8u));
  /* 125a4627 call dword ptr [0x125d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a0))), 0x125a462du);
  /* 125a462d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4630 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4632 call 0x125a6e00 */
  push32(0x125a4637u); f_125a6e00();
L_125a4637:;
  /* 125a4637 mov esi, esp */
  ESI = (ESP);
  /* 125a4639 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 125a463b call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4641u);
  /* 125a4641 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4644 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4646 call 0x125a6e00 */
  push32(0x125a464bu); f_125a6e00();
  /* 125a464b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4650 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4652 je 0x125a46d3 */
  if (C.zf) goto L_125a46d3;
  /* 125a4654 mov esi, esp */
  ESI = (ESP);
  /* 125a4656 push 0xa */
  push32((uint32_t)(0xau));
  /* 125a4658 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a465eu);
  /* 125a465e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4663 call 0x125a6e00 */
  push32(0x125a4668u); f_125a6e00();
  /* 125a4668 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a466d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a466f je 0x125a46d3 */
  if (C.zf) goto L_125a46d3;
  /* 125a4671 push 0x125d34f0 */
  push32((uint32_t)(0x125d34f0u));
  /* 125a4676 call 0x125a1005 */
  push32(0x125a467bu); f_125a1005();
  /* 125a467b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a467e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4681 jge 0x125a46d3 */
  if ((C.sf==C.of)) goto L_125a46d3;
  /* 125a4683 push 0x125d34e8 */
  push32((uint32_t)(0x125d34e8u));
  /* 125a4688 call 0x125a1005 */
  push32(0x125a468du); f_125a1005();
  /* 125a468d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4690 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4693 jge 0x125a46d3 */
  if ((C.sf==C.of)) goto L_125a46d3;
  /* 125a4695 push 0x125d34e0 */
  push32((uint32_t)(0x125d34e0u));
  /* 125a469a call 0x125a1005 */
  push32(0x125a469fu); f_125a1005();
  /* 125a469f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a46a2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a46a5 jge 0x125a46d3 */
  if ((C.sf==C.of)) goto L_125a46d3;
  /* 125a46a7 mov esi, esp */
  ESI = (ESP);
  /* 125a46a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a46ab push 0x48 */
  push32((uint32_t)(0x48u));
  /* 125a46ad call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a46b3u);
  /* 125a46b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a46b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a46b8 call 0x125a6e00 */
  push32(0x125a46bdu); f_125a6e00();
  /* 125a46bd mov esi, esp */
  ESI = (ESP);
  /* 125a46bf push 1 */
  push32((uint32_t)(0x1u));
  /* 125a46c1 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 125a46c3 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a46c9u);
  /* 125a46c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a46cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a46ce call 0x125a6e00 */
  push32(0x125a46d3u); f_125a6e00();
L_125a46d3:;
  /* 125a46d3 mov esi, esp */
  ESI = (ESP);
  /* 125a46d5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 125a46d7 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a46ddu);
  /* 125a46dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a46e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a46e2 call 0x125a6e00 */
  push32(0x125a46e7u); f_125a6e00();
  /* 125a46e7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a46ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a46ee je 0x125a47d2 */
  if (C.zf) goto L_125a47d2;
  /* 125a46f4 mov esi, esp */
  ESI = (ESP);
  /* 125a46f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a46f8 push 0x125d35f8 */
  push32((uint32_t)(0x125d35f8u));
  /* 125a46fd call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4703u);
  /* 125a4703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4706 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4708 call 0x125a6e00 */
  push32(0x125a470du); f_125a6e00();
  /* 125a470d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a470f jne 0x125a47d2 */
  if (!C.zf) goto L_125a47d2;
  /* 125a4715 mov esi, esp */
  ESI = (ESP);
  /* 125a4717 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4719 push 0x125d35f8 */
  push32((uint32_t)(0x125d35f8u));
  /* 125a471e call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4724u);
  /* 125a4724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4727 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4729 call 0x125a6e00 */
  push32(0x125a472eu); f_125a6e00();
  /* 125a472e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4730 jle 0x125a47d2 */
  if ((C.zf||C.sf!=C.of)) goto L_125a47d2;
  /* 125a4736 mov esi, esp */
  ESI = (ESP);
  /* 125a4738 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a473a push 0x47 */
  push32((uint32_t)(0x47u));
  /* 125a473c call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4742u);
  /* 125a4742 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4745 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4747 call 0x125a6e00 */
  push32(0x125a474cu); f_125a6e00();
  /* 125a474c mov esi, esp */
  ESI = (ESP);
  /* 125a474e push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4750 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 125a4752 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4758u);
  /* 125a4758 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a475b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a475d call 0x125a6e00 */
  push32(0x125a4762u); f_125a6e00();
  /* 125a4762 mov esi, esp */
  ESI = (ESP);
  /* 125a4764 push 0x125ce7f8 */
  push32((uint32_t)(0x125ce7f8u));
  /* 125a4769 call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a476fu);
  /* 125a476f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4772 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4774 call 0x125a6e00 */
  push32(0x125a4779u); f_125a6e00();
  /* 125a4779 mov esi, esp */
  ESI = (ESP);
  /* 125a477b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a477d call dword ptr [0x125d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6494))), 0x125a4783u);
  /* 125a4783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4786 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4788 call 0x125a6e00 */
  push32(0x125a478du); f_125a6e00();
  /* 125a478d mov esi, esp */
  ESI = (ESP);
  /* 125a478f push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4791 call dword ptr [0x125d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6494))), 0x125a4797u);
  /* 125a4797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a479a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a479c call 0x125a6e00 */
  push32(0x125a47a1u); f_125a6e00();
  /* 125a47a1 mov esi, esp */
  ESI = (ESP);
  /* 125a47a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a47a5 push 0x125d36c8 */
  push32((uint32_t)(0x125d36c8u));
  /* 125a47aa push 1 */
  push32((uint32_t)(0x1u));
  /* 125a47ac call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a47b2u);
  /* 125a47b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a47b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a47b7 call 0x125a6e00 */
  push32(0x125a47bcu); f_125a6e00();
  /* 125a47bc mov esi, esp */
  ESI = (ESP);
  /* 125a47be push 0 */
  push32((uint32_t)(0x0u));
  /* 125a47c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a47c2 call dword ptr [0x125d64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a4))), 0x125a47c8u);
  /* 125a47c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a47cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a47cd call 0x125a6e00 */
  push32(0x125a47d2u); f_125a6e00();
L_125a47d2:;
  /* 125a47d2 mov esi, esp */
  ESI = (ESP);
  /* 125a47d4 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 125a47d6 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a47dcu);
  /* 125a47dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a47df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a47e1 call 0x125a6e00 */
  push32(0x125a47e6u); f_125a6e00();
  /* 125a47e6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a47eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a47ed je 0x125a48f2 */
  if (C.zf) goto L_125a48f2;
  /* 125a47f3 mov esi, esp */
  ESI = (ESP);
  /* 125a47f5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 125a47f7 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a47fdu);
  /* 125a47fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4800 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4802 call 0x125a6e00 */
  push32(0x125a4807u); f_125a6e00();
  /* 125a4807 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a480c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a480e jne 0x125a48f2 */
  if (!C.zf) goto L_125a48f2;
  /* 125a4814 mov esi, esp */
  ESI = (ESP);
  /* 125a4816 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4818 push 0x125d35f8 */
  push32((uint32_t)(0x125d35f8u));
  /* 125a481d call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4823u);
  /* 125a4823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4826 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4828 call 0x125a6e00 */
  push32(0x125a482du); f_125a6e00();
  /* 125a482d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a482f jne 0x125a48f2 */
  if (!C.zf) goto L_125a48f2;
  /* 125a4835 mov esi, esp */
  ESI = (ESP);
  /* 125a4837 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4839 push 0x125d35f8 */
  push32((uint32_t)(0x125d35f8u));
  /* 125a483e call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4844u);
  /* 125a4844 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4847 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4849 call 0x125a6e00 */
  push32(0x125a484eu); f_125a6e00();
  /* 125a484e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4850 jle 0x125a48f2 */
  if ((C.zf||C.sf!=C.of)) goto L_125a48f2;
  /* 125a4856 mov esi, esp */
  ESI = (ESP);
  /* 125a4858 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a485a push 0x46 */
  push32((uint32_t)(0x46u));
  /* 125a485c call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4862u);
  /* 125a4862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4867 call 0x125a6e00 */
  push32(0x125a486cu); f_125a6e00();
  /* 125a486c mov esi, esp */
  ESI = (ESP);
  /* 125a486e push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4870 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 125a4872 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4878u);
  /* 125a4878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a487b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a487d call 0x125a6e00 */
  push32(0x125a4882u); f_125a6e00();
  /* 125a4882 mov esi, esp */
  ESI = (ESP);
  /* 125a4884 push 0x125ce7ec */
  push32((uint32_t)(0x125ce7ecu));
  /* 125a4889 call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a488fu);
  /* 125a488f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4892 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4894 call 0x125a6e00 */
  push32(0x125a4899u); f_125a6e00();
  /* 125a4899 mov esi, esp */
  ESI = (ESP);
  /* 125a489b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a489d call dword ptr [0x125d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6494))), 0x125a48a3u);
  /* 125a48a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a48a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a48a8 call 0x125a6e00 */
  push32(0x125a48adu); f_125a6e00();
  /* 125a48ad mov esi, esp */
  ESI = (ESP);
  /* 125a48af push 1 */
  push32((uint32_t)(0x1u));
  /* 125a48b1 call dword ptr [0x125d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6494))), 0x125a48b7u);
  /* 125a48b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a48ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a48bc call 0x125a6e00 */
  push32(0x125a48c1u); f_125a6e00();
  /* 125a48c1 mov esi, esp */
  ESI = (ESP);
  /* 125a48c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a48c5 push 0x125d36c8 */
  push32((uint32_t)(0x125d36c8u));
  /* 125a48ca push 0 */
  push32((uint32_t)(0x0u));
  /* 125a48cc call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a48d2u);
  /* 125a48d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a48d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a48d7 call 0x125a6e00 */
  push32(0x125a48dcu); f_125a6e00();
  /* 125a48dc mov esi, esp */
  ESI = (ESP);
  /* 125a48de push 1 */
  push32((uint32_t)(0x1u));
  /* 125a48e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a48e2 call dword ptr [0x125d64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a4))), 0x125a48e8u);
  /* 125a48e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a48eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a48ed call 0x125a6e00 */
  push32(0x125a48f2u); f_125a6e00();
L_125a48f2:;
  /* 125a48f2 mov esi, esp */
  ESI = (ESP);
  /* 125a48f4 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 125a48f6 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a48fcu);
  /* 125a48fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a48ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4901 call 0x125a6e00 */
  push32(0x125a4906u); f_125a6e00();
  /* 125a4906 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a490b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a490d je 0x125a4987 */
  if (C.zf) goto L_125a4987;
  /* 125a490f mov esi, esp */
  ESI = (ESP);
  /* 125a4911 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4913 push 0x125d3628 */
  push32((uint32_t)(0x125d3628u));
  /* 125a4918 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a491eu);
  /* 125a491e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4921 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4923 call 0x125a6e00 */
  push32(0x125a4928u); f_125a6e00();
  /* 125a4928 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a492a jle 0x125a4987 */
  if ((C.zf||C.sf!=C.of)) goto L_125a4987;
  /* 125a492c mov esi, esp */
  ESI = (ESP);
  /* 125a492e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4930 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 125a4932 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4938u);
  /* 125a4938 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a493b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a493d call 0x125a6e00 */
  push32(0x125a4942u); f_125a6e00();
  /* 125a4942 mov esi, esp */
  ESI = (ESP);
  /* 125a4944 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4946 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 125a4948 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a494eu);
  /* 125a494e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4951 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4953 call 0x125a6e00 */
  push32(0x125a4958u); f_125a6e00();
  /* 125a4958 mov esi, esp */
  ESI = (ESP);
  /* 125a495a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a495c push 0x125d3570 */
  push32((uint32_t)(0x125d3570u));
  /* 125a4961 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4963 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a4969u);
  /* 125a4969 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a496c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a496e call 0x125a6e00 */
  push32(0x125a4973u); f_125a6e00();
  /* 125a4973 mov esi, esp */
  ESI = (ESP);
  /* 125a4975 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4977 call dword ptr [0x125d64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a8))), 0x125a497du);
  /* 125a497d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4980 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4982 call 0x125a6e00 */
  push32(0x125a4987u); f_125a6e00();
L_125a4987:;
  /* 125a4987 mov esi, esp */
  ESI = (ESP);
  /* 125a4989 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 125a498b call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4991u);
  /* 125a4991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4994 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4996 call 0x125a6e00 */
  push32(0x125a499bu); f_125a6e00();
  /* 125a499b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a49a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a49a2 je 0x125a4a3d */
  if (C.zf) goto L_125a4a3d;
  /* 125a49a8 mov esi, esp */
  ESI = (ESP);
  /* 125a49aa push 0x45 */
  push32((uint32_t)(0x45u));
  /* 125a49ac call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a49b2u);
  /* 125a49b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a49b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a49b7 call 0x125a6e00 */
  push32(0x125a49bcu); f_125a6e00();
  /* 125a49bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a49c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a49c3 jne 0x125a4a3d */
  if (!C.zf) goto L_125a4a3d;
  /* 125a49c5 mov esi, esp */
  ESI = (ESP);
  /* 125a49c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a49c9 push 0x125d3628 */
  push32((uint32_t)(0x125d3628u));
  /* 125a49ce call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a49d4u);
  /* 125a49d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a49d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a49d9 call 0x125a6e00 */
  push32(0x125a49deu); f_125a6e00();
  /* 125a49de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a49e0 jne 0x125a4a3d */
  if (!C.zf) goto L_125a4a3d;
  /* 125a49e2 mov esi, esp */
  ESI = (ESP);
  /* 125a49e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a49e6 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 125a49e8 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a49eeu);
  /* 125a49ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a49f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a49f3 call 0x125a6e00 */
  push32(0x125a49f8u); f_125a6e00();
  /* 125a49f8 mov esi, esp */
  ESI = (ESP);
  /* 125a49fa push 1 */
  push32((uint32_t)(0x1u));
  /* 125a49fc push 0x45 */
  push32((uint32_t)(0x45u));
  /* 125a49fe call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4a04u);
  /* 125a4a04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4a09 call 0x125a6e00 */
  push32(0x125a4a0eu); f_125a6e00();
  /* 125a4a0e mov esi, esp */
  ESI = (ESP);
  /* 125a4a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4a12 push 0x125d3570 */
  push32((uint32_t)(0x125d3570u));
  /* 125a4a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4a19 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a4a1fu);
  /* 125a4a1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4a24 call 0x125a6e00 */
  push32(0x125a4a29u); f_125a6e00();
  /* 125a4a29 mov esi, esp */
  ESI = (ESP);
  /* 125a4a2b push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4a2d call dword ptr [0x125d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6458))), 0x125a4a33u);
  /* 125a4a33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4a36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4a38 call 0x125a6e00 */
  push32(0x125a4a3du); f_125a6e00();
L_125a4a3d:;
  /* 125a4a3d mov esi, esp */
  ESI = (ESP);
  /* 125a4a3f push 0x43 */
  push32((uint32_t)(0x43u));
  /* 125a4a41 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4a47u);
  /* 125a4a47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4a4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4a4c call 0x125a6e00 */
  push32(0x125a4a51u); f_125a6e00();
  /* 125a4a51 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4a56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4a58 je 0x125a4c0d */
  if (C.zf) goto L_125a4c0d;
  /* 125a4a5e mov esi, esp */
  ESI = (ESP);
  /* 125a4a60 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 125a4a62 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4a68u);
  /* 125a4a68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4a6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4a6d call 0x125a6e00 */
  push32(0x125a4a72u); f_125a6e00();
  /* 125a4a72 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4a79 jne 0x125a4c0d */
  if (!C.zf) goto L_125a4c0d;
  /* 125a4a7f mov esi, esp */
  ESI = (ESP);
  /* 125a4a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4a83 push 0x125d3610 */
  push32((uint32_t)(0x125d3610u));
  /* 125a4a88 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4a8eu);
  /* 125a4a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4a91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4a93 call 0x125a6e00 */
  push32(0x125a4a98u); f_125a6e00();
  /* 125a4a98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4a9a jne 0x125a4c0d */
  if (!C.zf) goto L_125a4c0d;
  /* 125a4aa0 mov esi, esp */
  ESI = (ESP);
  /* 125a4aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4aa4 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 125a4aa6 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4aacu);
  /* 125a4aac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4aaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4ab1 call 0x125a6e00 */
  push32(0x125a4ab6u); f_125a6e00();
  /* 125a4ab6 mov esi, esp */
  ESI = (ESP);
  /* 125a4ab8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4aba push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125a4abc call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4ac2u);
  /* 125a4ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4ac5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4ac7 call 0x125a6e00 */
  push32(0x125a4accu); f_125a6e00();
  /* 125a4acc mov esi, esp */
  ESI = (ESP);
  /* 125a4ace push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4ad0 push 0x125d3610 */
  push32((uint32_t)(0x125d3610u));
  /* 125a4ad5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4ad7 push 0x125d3790 */
  push32((uint32_t)(0x125d3790u));
  /* 125a4adc push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a4ae1 push 0x125d34d8 */
  push32((uint32_t)(0x125d34d8u));
  /* 125a4ae6 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a4aecu);
  /* 125a4aec add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4aef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4af1 call 0x125a6e00 */
  push32(0x125a4af6u); f_125a6e00();
  /* 125a4af6 mov esi, esp */
  ESI = (ESP);
  /* 125a4af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4afa push 0x125d3610 */
  push32((uint32_t)(0x125d3610u));
  /* 125a4aff push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4b01 push 0x125d3768 */
  push32((uint32_t)(0x125d3768u));
  /* 125a4b06 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a4b0b push 0x125d3528 */
  push32((uint32_t)(0x125d3528u));
  /* 125a4b10 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a4b16u);
  /* 125a4b16 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4b19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4b1b call 0x125a6e00 */
  push32(0x125a4b20u); f_125a6e00();
  /* 125a4b20 mov esi, esp */
  ESI = (ESP);
  /* 125a4b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4b24 push 0x125d3610 */
  push32((uint32_t)(0x125d3610u));
  /* 125a4b29 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4b2b push 0x125d37c8 */
  push32((uint32_t)(0x125d37c8u));
  /* 125a4b30 push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a4b35 push 0x125d3520 */
  push32((uint32_t)(0x125d3520u));
  /* 125a4b3a call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a4b40u);
  /* 125a4b40 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4b43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4b45 call 0x125a6e00 */
  push32(0x125a4b4au); f_125a6e00();
  /* 125a4b4a mov esi, esp */
  ESI = (ESP);
  /* 125a4b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4b4e push 0x125d3610 */
  push32((uint32_t)(0x125d3610u));
  /* 125a4b53 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4b55 push 0x125d37a0 */
  push32((uint32_t)(0x125d37a0u));
  /* 125a4b5a push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a4b5f push 0x125d34b0 */
  push32((uint32_t)(0x125d34b0u));
  /* 125a4b64 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a4b6au);
  /* 125a4b6a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4b6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4b6f call 0x125a6e00 */
  push32(0x125a4b74u); f_125a6e00();
  /* 125a4b74 mov esi, esp */
  ESI = (ESP);
  /* 125a4b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4b78 push 0x125d34d8 */
  push32((uint32_t)(0x125d34d8u));
  /* 125a4b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4b7f call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a4b85u);
  /* 125a4b85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4b88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4b8a call 0x125a6e00 */
  push32(0x125a4b8fu); f_125a6e00();
  /* 125a4b8f mov esi, esp */
  ESI = (ESP);
  /* 125a4b91 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4b93 push 0x125d3528 */
  push32((uint32_t)(0x125d3528u));
  /* 125a4b98 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4b9a call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a4ba0u);
  /* 125a4ba0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4ba3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4ba5 call 0x125a6e00 */
  push32(0x125a4baau); f_125a6e00();
  /* 125a4baa mov esi, esp */
  ESI = (ESP);
  /* 125a4bac push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4bae push 0x125d3520 */
  push32((uint32_t)(0x125d3520u));
  /* 125a4bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4bb5 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a4bbbu);
  /* 125a4bbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4bbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4bc0 call 0x125a6e00 */
  push32(0x125a4bc5u); f_125a6e00();
  /* 125a4bc5 mov esi, esp */
  ESI = (ESP);
  /* 125a4bc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4bc9 push 0x125d34b0 */
  push32((uint32_t)(0x125d34b0u));
  /* 125a4bce push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4bd0 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a4bd6u);
  /* 125a4bd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4bd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4bdb call 0x125a6e00 */
  push32(0x125a4be0u); f_125a6e00();
  /* 125a4be0 mov esi, esp */
  ESI = (ESP);
  /* 125a4be2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4be4 call dword ptr [0x125d644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d644c))), 0x125a4beau);
  /* 125a4bea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4bed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4bef call 0x125a6e00 */
  push32(0x125a4bf4u); f_125a6e00();
  /* 125a4bf4 mov esi, esp */
  ESI = (ESP);
  /* 125a4bf6 push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 125a4bfb push 0xb */
  push32((uint32_t)(0xbu));
  /* 125a4bfd call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a4c03u);
  /* 125a4c03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4c06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4c08 call 0x125a6e00 */
  push32(0x125a4c0du); f_125a6e00();
L_125a4c0d:;
  /* 125a4c0d mov esi, esp */
  ESI = (ESP);
  /* 125a4c0f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 125a4c11 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4c17u);
  /* 125a4c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4c1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4c1c call 0x125a6e00 */
  push32(0x125a4c21u); f_125a6e00();
  /* 125a4c21 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4c26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4c28 je 0x125a4cc3 */
  if (C.zf) goto L_125a4cc3;
  /* 125a4c2e mov esi, esp */
  ESI = (ESP);
  /* 125a4c30 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 125a4c32 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4c38u);
  /* 125a4c38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4c3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4c3d call 0x125a6e00 */
  push32(0x125a4c42u); f_125a6e00();
  /* 125a4c42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4c47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4c49 jne 0x125a4cc3 */
  if (!C.zf) goto L_125a4cc3;
  /* 125a4c4b mov esi, esp */
  ESI = (ESP);
  /* 125a4c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4c4f push 0x125d35f8 */
  push32((uint32_t)(0x125d35f8u));
  /* 125a4c54 push 0x125d34d8 */
  push32((uint32_t)(0x125d34d8u));
  /* 125a4c59 call dword ptr [0x125d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a0))), 0x125a4c5fu);
  /* 125a4c5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4c62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4c64 call 0x125a6e00 */
  push32(0x125a4c69u); f_125a6e00();
  /* 125a4c69 mov esi, esp */
  ESI = (ESP);
  /* 125a4c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4c6d push 0x125d35f8 */
  push32((uint32_t)(0x125d35f8u));
  /* 125a4c72 push 0x125d3528 */
  push32((uint32_t)(0x125d3528u));
  /* 125a4c77 call dword ptr [0x125d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a0))), 0x125a4c7du);
  /* 125a4c7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4c80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4c82 call 0x125a6e00 */
  push32(0x125a4c87u); f_125a6e00();
  /* 125a4c87 mov esi, esp */
  ESI = (ESP);
  /* 125a4c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4c8b push 0x125d35f8 */
  push32((uint32_t)(0x125d35f8u));
  /* 125a4c90 push 0x125d3520 */
  push32((uint32_t)(0x125d3520u));
  /* 125a4c95 call dword ptr [0x125d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a0))), 0x125a4c9bu);
  /* 125a4c9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4c9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4ca0 call 0x125a6e00 */
  push32(0x125a4ca5u); f_125a6e00();
  /* 125a4ca5 mov esi, esp */
  ESI = (ESP);
  /* 125a4ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4ca9 push 0x125d35f8 */
  push32((uint32_t)(0x125d35f8u));
  /* 125a4cae push 0x125d34b0 */
  push32((uint32_t)(0x125d34b0u));
  /* 125a4cb3 call dword ptr [0x125d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a0))), 0x125a4cb9u);
  /* 125a4cb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4cbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4cbe call 0x125a6e00 */
  push32(0x125a4cc3u); f_125a6e00();
L_125a4cc3:;
  /* 125a4cc3 mov esi, esp */
  ESI = (ESP);
  /* 125a4cc5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125a4cc7 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4ccdu);
  /* 125a4ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4cd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4cd2 call 0x125a6e00 */
  push32(0x125a4cd7u); f_125a6e00();
  /* 125a4cd7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4cdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4cde je 0x125a4d5c */
  if (C.zf) goto L_125a4d5c;
  /* 125a4ce0 mov esi, esp */
  ESI = (ESP);
  /* 125a4ce2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125a4ce4 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a4ceau);
  /* 125a4cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4ced cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4cef call 0x125a6e00 */
  push32(0x125a4cf4u); f_125a6e00();
  /* 125a4cf4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4cfb je 0x125a4d5c */
  if (C.zf) goto L_125a4d5c;
  /* 125a4cfd push 0x125d34d8 */
  push32((uint32_t)(0x125d34d8u));
  /* 125a4d02 call 0x125a1005 */
  push32(0x125a4d07u); f_125a1005();
  /* 125a4d07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4d0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4d0c jne 0x125a4d5c */
  if (!C.zf) goto L_125a4d5c;
  /* 125a4d0e push 0x125d3528 */
  push32((uint32_t)(0x125d3528u));
  /* 125a4d13 call 0x125a1005 */
  push32(0x125a4d18u); f_125a1005();
  /* 125a4d18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4d1d jne 0x125a4d5c */
  if (!C.zf) goto L_125a4d5c;
  /* 125a4d1f push 0x125d3520 */
  push32((uint32_t)(0x125d3520u));
  /* 125a4d24 call 0x125a1005 */
  push32(0x125a4d29u); f_125a1005();
  /* 125a4d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4d2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4d2e jne 0x125a4d5c */
  if (!C.zf) goto L_125a4d5c;
  /* 125a4d30 mov esi, esp */
  ESI = (ESP);
  /* 125a4d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4d34 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 125a4d36 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4d3cu);
  /* 125a4d3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4d3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4d41 call 0x125a6e00 */
  push32(0x125a4d46u); f_125a6e00();
  /* 125a4d46 mov esi, esp */
  ESI = (ESP);
  /* 125a4d48 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4d4a push 0x43 */
  push32((uint32_t)(0x43u));
  /* 125a4d4c call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4d52u);
  /* 125a4d52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4d55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4d57 call 0x125a6e00 */
  push32(0x125a4d5cu); f_125a6e00();
L_125a4d5c:;
  /* 125a4d5c mov esi, esp */
  ESI = (ESP);
  /* 125a4d5e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 125a4d60 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4d66u);
  /* 125a4d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4d69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4d6b call 0x125a6e00 */
  push32(0x125a4d70u); f_125a6e00();
  /* 125a4d70 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4d77 je 0x125a4e0b */
  if (C.zf) goto L_125a4e0b;
  /* 125a4d7d mov esi, esp */
  ESI = (ESP);
  /* 125a4d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4d81 push 0x125d3598 */
  push32((uint32_t)(0x125d3598u));
  /* 125a4d86 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4d8cu);
  /* 125a4d8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4d8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4d91 call 0x125a6e00 */
  push32(0x125a4d96u); f_125a6e00();
  /* 125a4d96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4d98 jle 0x125a4e0b */
  if ((C.zf||C.sf!=C.of)) goto L_125a4e0b;
  /* 125a4d9a mov esi, esp */
  ESI = (ESP);
  /* 125a4d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4d9e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 125a4da0 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4da6u);
  /* 125a4da6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4da9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4dab call 0x125a6e00 */
  push32(0x125a4db0u); f_125a6e00();
  /* 125a4db0 mov esi, esp */
  ESI = (ESP);
  /* 125a4db2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4db4 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 125a4db6 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4dbcu);
  /* 125a4dbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4dbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4dc1 call 0x125a6e00 */
  push32(0x125a4dc6u); f_125a6e00();
  /* 125a4dc6 mov esi, esp */
  ESI = (ESP);
  /* 125a4dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4dca push 0x125d36d0 */
  push32((uint32_t)(0x125d36d0u));
  /* 125a4dcf push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4dd1 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a4dd7u);
  /* 125a4dd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4dda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4ddc call 0x125a6e00 */
  push32(0x125a4de1u); f_125a6e00();
  /* 125a4de1 mov esi, esp */
  ESI = (ESP);
  /* 125a4de3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4de5 call dword ptr [0x125d64a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a8))), 0x125a4debu);
  /* 125a4deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4dee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4df0 call 0x125a6e00 */
  push32(0x125a4df5u); f_125a6e00();
  /* 125a4df5 mov esi, esp */
  ESI = (ESP);
  /* 125a4df7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4df9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 125a4dfb call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4e01u);
  /* 125a4e01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4e04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4e06 call 0x125a6e00 */
  push32(0x125a4e0bu); f_125a6e00();
L_125a4e0b:;
  /* 125a4e0b mov esi, esp */
  ESI = (ESP);
  /* 125a4e0d push 0x1d */
  push32((uint32_t)(0x1du));
  /* 125a4e0f call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4e15u);
  /* 125a4e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4e18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4e1a call 0x125a6e00 */
  push32(0x125a4e1fu); f_125a6e00();
  /* 125a4e1f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4e24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4e26 je 0x125a4edb */
  if (C.zf) goto L_125a4edb;
  /* 125a4e2c mov esi, esp */
  ESI = (ESP);
  /* 125a4e2e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 125a4e30 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4e36u);
  /* 125a4e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4e39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4e3b call 0x125a6e00 */
  push32(0x125a4e40u); f_125a6e00();
  /* 125a4e40 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4e45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4e47 jne 0x125a4edb */
  if (!C.zf) goto L_125a4edb;
  /* 125a4e4d mov esi, esp */
  ESI = (ESP);
  /* 125a4e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4e51 push 0x125d3598 */
  push32((uint32_t)(0x125d3598u));
  /* 125a4e56 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a4e5cu);
  /* 125a4e5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4e5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4e61 call 0x125a6e00 */
  push32(0x125a4e66u); f_125a6e00();
  /* 125a4e66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4e68 jne 0x125a4edb */
  if (!C.zf) goto L_125a4edb;
  /* 125a4e6a mov esi, esp */
  ESI = (ESP);
  /* 125a4e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4e6e push 0x1d */
  push32((uint32_t)(0x1du));
  /* 125a4e70 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4e76u);
  /* 125a4e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4e79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4e7b call 0x125a6e00 */
  push32(0x125a4e80u); f_125a6e00();
  /* 125a4e80 mov esi, esp */
  ESI = (ESP);
  /* 125a4e82 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4e84 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 125a4e86 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4e8cu);
  /* 125a4e8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4e8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4e91 call 0x125a6e00 */
  push32(0x125a4e96u); f_125a6e00();
  /* 125a4e96 mov esi, esp */
  ESI = (ESP);
  /* 125a4e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4e9a push 0x125d36d0 */
  push32((uint32_t)(0x125d36d0u));
  /* 125a4e9f push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4ea1 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a4ea7u);
  /* 125a4ea7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4eaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4eac call 0x125a6e00 */
  push32(0x125a4eb1u); f_125a6e00();
  /* 125a4eb1 mov esi, esp */
  ESI = (ESP);
  /* 125a4eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4eb5 call dword ptr [0x125d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6458))), 0x125a4ebbu);
  /* 125a4ebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4ebe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4ec0 call 0x125a6e00 */
  push32(0x125a4ec5u); f_125a6e00();
  /* 125a4ec5 mov esi, esp */
  ESI = (ESP);
  /* 125a4ec7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4ec9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 125a4ecb call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4ed1u);
  /* 125a4ed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4ed4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4ed6 call 0x125a6e00 */
  push32(0x125a4edbu); f_125a6e00();
L_125a4edb:;
  /* 125a4edb mov esi, esp */
  ESI = (ESP);
  /* 125a4edd push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 125a4edf call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4ee5u);
  /* 125a4ee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4ee8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4eea call 0x125a6e00 */
  push32(0x125a4eefu); f_125a6e00();
  /* 125a4eef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4ef6 je 0x125a4f6a */
  if (C.zf) goto L_125a4f6a;
  /* 125a4ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4efa push 0x125d37d0 */
  push32((uint32_t)(0x125d37d0u));
  /* 125a4eff call 0x125a100f */
  push32(0x125a4f04u); f_125a100f();
  /* 125a4f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4f07 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4f0a jne 0x125a4f6a */
  if (!C.zf) goto L_125a4f6a;
  /* 125a4f0c mov esi, esp */
  ESI = (ESP);
  /* 125a4f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4f10 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 125a4f12 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4f18u);
  /* 125a4f18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4f1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4f1d call 0x125a6e00 */
  push32(0x125a4f22u); f_125a6e00();
  /* 125a4f22 mov esi, esp */
  ESI = (ESP);
  /* 125a4f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4f26 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 125a4f28 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4f2eu);
  /* 125a4f2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4f31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4f33 call 0x125a6e00 */
  push32(0x125a4f38u); f_125a6e00();
  /* 125a4f38 mov esi, esp */
  ESI = (ESP);
  /* 125a4f3a push 0x125ce7e4 */
  push32((uint32_t)(0x125ce7e4u));
  /* 125a4f3f call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a4f45u);
  /* 125a4f45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4f48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4f4a call 0x125a6e00 */
  push32(0x125a4f4fu); f_125a6e00();
  /* 125a4f4f mov esi, esp */
  ESI = (ESP);
  /* 125a4f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4f53 push 0x125d37d0 */
  push32((uint32_t)(0x125d37d0u));
  /* 125a4f58 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4f5a call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a4f60u);
  /* 125a4f60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4f63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4f65 call 0x125a6e00 */
  push32(0x125a4f6au); f_125a6e00();
L_125a4f6a:;
  /* 125a4f6a mov esi, esp */
  ESI = (ESP);
  /* 125a4f6c push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 125a4f6e call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4f74u);
  /* 125a4f74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4f77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4f79 call 0x125a6e00 */
  push32(0x125a4f7eu); f_125a6e00();
  /* 125a4f7e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4f83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4f85 je 0x125a4fff */
  if (C.zf) goto L_125a4fff;
  /* 125a4f87 mov esi, esp */
  ESI = (ESP);
  /* 125a4f89 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 125a4f8b call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a4f91u);
  /* 125a4f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4f94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4f96 call 0x125a6e00 */
  push32(0x125a4f9bu); f_125a6e00();
  /* 125a4f9b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a4fa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a4fa2 jne 0x125a4fff */
  if (!C.zf) goto L_125a4fff;
  /* 125a4fa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4fa6 push 0x125d37d0 */
  push32((uint32_t)(0x125d37d0u));
  /* 125a4fab call 0x125a100f */
  push32(0x125a4fb0u); f_125a100f();
  /* 125a4fb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4fb3 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4fb6 jge 0x125a4fff */
  if ((C.sf==C.of)) goto L_125a4fff;
  /* 125a4fb8 mov esi, esp */
  ESI = (ESP);
  /* 125a4fba push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4fbc push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 125a4fbe call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4fc4u);
  /* 125a4fc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4fc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4fc9 call 0x125a6e00 */
  push32(0x125a4fceu); f_125a6e00();
  /* 125a4fce mov esi, esp */
  ESI = (ESP);
  /* 125a4fd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4fd2 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 125a4fd4 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a4fdau);
  /* 125a4fda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4fdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4fdf call 0x125a6e00 */
  push32(0x125a4fe4u); f_125a6e00();
  /* 125a4fe4 mov esi, esp */
  ESI = (ESP);
  /* 125a4fe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a4fe8 push 0x125d37d0 */
  push32((uint32_t)(0x125d37d0u));
  /* 125a4fed push 0 */
  push32((uint32_t)(0x0u));
  /* 125a4fef call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a4ff5u);
  /* 125a4ff5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a4ff8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a4ffa call 0x125a6e00 */
  push32(0x125a4fffu); f_125a6e00();
L_125a4fff:;
  /* 125a4fff mov esi, esp */
  ESI = (ESP);
  /* 125a5001 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 125a5003 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5009u);
  /* 125a5009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a500c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a500e call 0x125a6e00 */
  push32(0x125a5013u); f_125a6e00();
  /* 125a5013 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a501a je 0x125a508e */
  if (C.zf) goto L_125a508e;
  /* 125a501c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a501e push 0x125d37e8 */
  push32((uint32_t)(0x125d37e8u));
  /* 125a5023 call 0x125a100f */
  push32(0x125a5028u); f_125a100f();
  /* 125a5028 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a502b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a502e jne 0x125a508e */
  if (!C.zf) goto L_125a508e;
  /* 125a5030 mov esi, esp */
  ESI = (ESP);
  /* 125a5032 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5034 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 125a5036 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a503cu);
  /* 125a503c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a503f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5041 call 0x125a6e00 */
  push32(0x125a5046u); f_125a6e00();
  /* 125a5046 mov esi, esp */
  ESI = (ESP);
  /* 125a5048 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a504a push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 125a504c call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5052u);
  /* 125a5052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5055 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5057 call 0x125a6e00 */
  push32(0x125a505cu); f_125a6e00();
  /* 125a505c mov esi, esp */
  ESI = (ESP);
  /* 125a505e push 0x125ce7dc */
  push32((uint32_t)(0x125ce7dcu));
  /* 125a5063 call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a5069u);
  /* 125a5069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a506c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a506e call 0x125a6e00 */
  push32(0x125a5073u); f_125a6e00();
  /* 125a5073 mov esi, esp */
  ESI = (ESP);
  /* 125a5075 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5077 push 0x125d37e8 */
  push32((uint32_t)(0x125d37e8u));
  /* 125a507c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a507e call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a5084u);
  /* 125a5084 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5087 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5089 call 0x125a6e00 */
  push32(0x125a508eu); f_125a6e00();
L_125a508e:;
  /* 125a508e mov esi, esp */
  ESI = (ESP);
  /* 125a5090 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 125a5092 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5098u);
  /* 125a5098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a509b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a509d call 0x125a6e00 */
  push32(0x125a50a2u); f_125a6e00();
  /* 125a50a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a50a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a50a9 je 0x125a5123 */
  if (C.zf) goto L_125a5123;
  /* 125a50ab mov esi, esp */
  ESI = (ESP);
  /* 125a50ad push 0x2d */
  push32((uint32_t)(0x2du));
  /* 125a50af call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a50b5u);
  /* 125a50b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a50b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a50ba call 0x125a6e00 */
  push32(0x125a50bfu); f_125a6e00();
  /* 125a50bf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a50c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a50c6 jne 0x125a5123 */
  if (!C.zf) goto L_125a5123;
  /* 125a50c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a50ca push 0x125d37e8 */
  push32((uint32_t)(0x125d37e8u));
  /* 125a50cf call 0x125a100f */
  push32(0x125a50d4u); f_125a100f();
  /* 125a50d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a50d7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a50da jge 0x125a5123 */
  if ((C.sf==C.of)) goto L_125a5123;
  /* 125a50dc mov esi, esp */
  ESI = (ESP);
  /* 125a50de push 0 */
  push32((uint32_t)(0x0u));
  /* 125a50e0 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 125a50e2 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a50e8u);
  /* 125a50e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a50eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a50ed call 0x125a6e00 */
  push32(0x125a50f2u); f_125a6e00();
  /* 125a50f2 mov esi, esp */
  ESI = (ESP);
  /* 125a50f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a50f6 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 125a50f8 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a50feu);
  /* 125a50fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5101 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5103 call 0x125a6e00 */
  push32(0x125a5108u); f_125a6e00();
  /* 125a5108 mov esi, esp */
  ESI = (ESP);
  /* 125a510a push 1 */
  push32((uint32_t)(0x1u));
  /* 125a510c push 0x125d37e8 */
  push32((uint32_t)(0x125d37e8u));
  /* 125a5111 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5113 call dword ptr [0x125d645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d645c))), 0x125a5119u);
  /* 125a5119 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a511c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a511e call 0x125a6e00 */
  push32(0x125a5123u); f_125a6e00();
L_125a5123:;
  /* 125a5123 mov esi, esp */
  ESI = (ESP);
  /* 125a5125 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 125a5127 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a512du);
  /* 125a512d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5130 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5132 call 0x125a6e00 */
  push32(0x125a5137u); f_125a6e00();
  /* 125a5137 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a513c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a513e je 0x125a51bf */
  if (C.zf) goto L_125a51bf;
  /* 125a5140 mov esi, esp */
  ESI = (ESP);
  /* 125a5142 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125a5144 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a514au);
  /* 125a514a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a514d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a514f call 0x125a6e00 */
  push32(0x125a5154u); f_125a6e00();
  /* 125a5154 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a515b je 0x125a51bf */
  if (C.zf) goto L_125a51bf;
  /* 125a515d mov esi, esp */
  ESI = (ESP);
  /* 125a515f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5161 push 0x125d3588 */
  push32((uint32_t)(0x125d3588u));
  /* 125a5166 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a516cu);
  /* 125a516c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a516f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5171 call 0x125a6e00 */
  push32(0x125a5176u); f_125a6e00();
  /* 125a5176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5178 jle 0x125a51bf */
  if ((C.zf||C.sf!=C.of)) goto L_125a51bf;
  /* 125a517a mov esi, esp */
  ESI = (ESP);
  /* 125a517c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a517e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 125a5180 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5186u);
  /* 125a5186 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5189 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a518b call 0x125a6e00 */
  push32(0x125a5190u); f_125a6e00();
  /* 125a5190 mov esi, esp */
  ESI = (ESP);
  /* 125a5192 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5194 push 0x125d3690 */
  push32((uint32_t)(0x125d3690u));
  /* 125a5199 push 7 */
  push32((uint32_t)(0x7u));
  /* 125a519b call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a51a1u);
  /* 125a51a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a51a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a51a6 call 0x125a6e00 */
  push32(0x125a51abu); f_125a6e00();
  /* 125a51ab mov esi, esp */
  ESI = (ESP);
  /* 125a51ad push 7 */
  push32((uint32_t)(0x7u));
  /* 125a51af call dword ptr [0x125d6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6458))), 0x125a51b5u);
  /* 125a51b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a51b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a51ba call 0x125a6e00 */
  push32(0x125a51bfu); f_125a6e00();
L_125a51bf:;
  /* 125a51bf mov esi, esp */
  ESI = (ESP);
  /* 125a51c1 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 125a51c3 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a51c9u);
  /* 125a51c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a51cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a51ce call 0x125a6e00 */
  push32(0x125a51d3u); f_125a6e00();
  /* 125a51d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a51d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a51da je 0x125a52b2 */
  if (C.zf) goto L_125a52b2;
  /* 125a51e0 mov esi, esp */
  ESI = (ESP);
  /* 125a51e2 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125a51e4 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a51eau);
  /* 125a51ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a51ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a51ef call 0x125a6e00 */
  push32(0x125a51f4u); f_125a6e00();
  /* 125a51f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a51f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a51fb je 0x125a52b2 */
  if (C.zf) goto L_125a52b2;
  /* 125a5201 mov esi, esp */
  ESI = (ESP);
  /* 125a5203 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5205 push 0x125d3588 */
  push32((uint32_t)(0x125d3588u));
  /* 125a520a call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a5210u);
  /* 125a5210 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5213 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5215 call 0x125a6e00 */
  push32(0x125a521au); f_125a6e00();
  /* 125a521a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a521c jle 0x125a52b2 */
  if ((C.zf||C.sf!=C.of)) goto L_125a52b2;
  /* 125a5222 mov esi, esp */
  ESI = (ESP);
  /* 125a5224 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5226 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 125a5228 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a522eu);
  /* 125a522e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5231 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5233 call 0x125a6e00 */
  push32(0x125a5238u); f_125a6e00();
  /* 125a5238 mov esi, esp */
  ESI = (ESP);
  /* 125a523a push 1 */
  push32((uint32_t)(0x1u));
  /* 125a523c push 0x26 */
  push32((uint32_t)(0x26u));
  /* 125a523e call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5244u);
  /* 125a5244 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5247 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5249 call 0x125a6e00 */
  push32(0x125a524eu); f_125a6e00();
  /* 125a524e mov esi, esp */
  ESI = (ESP);
  /* 125a5250 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5252 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125a5254 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a525au);
  /* 125a525a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a525d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a525f call 0x125a6e00 */
  push32(0x125a5264u); f_125a6e00();
  /* 125a5264 mov esi, esp */
  ESI = (ESP);
  /* 125a5266 push 0x125ce7d4 */
  push32((uint32_t)(0x125ce7d4u));
  /* 125a526b call dword ptr [0x125d64b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64b0))), 0x125a5271u);
  /* 125a5271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5274 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5276 call 0x125a6e00 */
  push32(0x125a527bu); f_125a6e00();
  /* 125a527b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5280 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5282 je 0x125a529c */
  if (C.zf) goto L_125a529c;
  /* 125a5284 mov esi, esp */
  ESI = (ESP);
  /* 125a5286 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5288 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 125a528a call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a5290u);
  /* 125a5290 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5293 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5295 call 0x125a6e00 */
  push32(0x125a529au); f_125a6e00();
  /* 125a529a jmp 0x125a52b2 */
  goto L_125a52b2;
L_125a529c:;
  /* 125a529c mov esi, esp */
  ESI = (ESP);
  /* 125a529e push 1 */
  push32((uint32_t)(0x1u));
  /* 125a52a0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 125a52a2 call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a52a8u);
  /* 125a52a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a52ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a52ad call 0x125a6e00 */
  push32(0x125a52b2u); f_125a6e00();
L_125a52b2:;
  /* 125a52b2 mov esi, esp */
  ESI = (ESP);
  /* 125a52b4 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125a52b6 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a52bcu);
  /* 125a52bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a52bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a52c1 call 0x125a6e00 */
  push32(0x125a52c6u); f_125a6e00();
  /* 125a52c6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a52cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a52cd je 0x125a536f */
  if (C.zf) goto L_125a536f;
  /* 125a52d3 mov esi, esp */
  ESI = (ESP);
  /* 125a52d5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 125a52d7 call dword ptr [0x125d64b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64b4))), 0x125a52ddu);
  /* 125a52dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a52e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a52e2 call 0x125a6e00 */
  push32(0x125a52e7u); f_125a6e00();
  /* 125a52e7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a52ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a52ee je 0x125a536f */
  if (C.zf) goto L_125a536f;
  /* 125a52f0 mov esi, esp */
  ESI = (ESP);
  /* 125a52f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a52f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a52f6 call dword ptr [0x125d64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64ac))), 0x125a52fcu);
  /* 125a52fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a52ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5301 call 0x125a6e00 */
  push32(0x125a5306u); f_125a6e00();
  /* 125a5306 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a530b jle 0x125a536f */
  if ((C.zf||C.sf!=C.of)) goto L_125a536f;
  /* 125a530d mov esi, esp */
  ESI = (ESP);
  /* 125a530f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5311 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125a5313 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5319u);
  /* 125a5319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a531c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a531e call 0x125a6e00 */
  push32(0x125a5323u); f_125a6e00();
  /* 125a5323 mov esi, esp */
  ESI = (ESP);
  /* 125a5325 push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 125a532a push 1 */
  push32((uint32_t)(0x1u));
  /* 125a532c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a532e call dword ptr [0x125d6498] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6498))), 0x125a5334u);
  /* 125a5334 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5337 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5339 call 0x125a6e00 */
  push32(0x125a533eu); f_125a6e00();
  /* 125a533e mov esi, esp */
  ESI = (ESP);
  /* 125a5340 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5342 push 0x125d3680 */
  push32((uint32_t)(0x125d3680u));
  /* 125a5347 push 7 */
  push32((uint32_t)(0x7u));
  /* 125a5349 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a534fu);
  /* 125a534f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5352 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5354 call 0x125a6e00 */
  push32(0x125a5359u); f_125a6e00();
  /* 125a5359 mov esi, esp */
  ESI = (ESP);
  /* 125a535b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a535d push 7 */
  push32((uint32_t)(0x7u));
  /* 125a535f call dword ptr [0x125d64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a4))), 0x125a5365u);
  /* 125a5365 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5368 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a536a call 0x125a6e00 */
  push32(0x125a536fu); f_125a6e00();
L_125a536f:;
  /* 125a536f mov esi, esp */
  ESI = (ESP);
  /* 125a5371 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 125a5373 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5379u);
  /* 125a5379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a537c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a537e call 0x125a6e00 */
  push32(0x125a5383u); f_125a6e00();
  /* 125a5383 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5388 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a538a je 0x125a54a5 */
  if (C.zf) goto L_125a54a5;
  /* 125a5390 mov esi, esp */
  ESI = (ESP);
  /* 125a5392 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125a5394 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a539au);
  /* 125a539a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a539d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a539f call 0x125a6e00 */
  push32(0x125a53a4u); f_125a6e00();
  /* 125a53a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a53a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a53ab jne 0x125a54a5 */
  if (!C.zf) goto L_125a54a5;
  /* 125a53b1 mov esi, esp */
  ESI = (ESP);
  /* 125a53b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a53b5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 125a53b7 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a53bdu);
  /* 125a53bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a53c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a53c2 call 0x125a6e00 */
  push32(0x125a53c7u); f_125a6e00();
  /* 125a53c7 mov esi, esp */
  ESI = (ESP);
  /* 125a53c9 push 0x125ce7cc */
  push32((uint32_t)(0x125ce7ccu));
  /* 125a53ce call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a53d4u);
  /* 125a53d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a53d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a53d9 call 0x125a6e00 */
  push32(0x125a53deu); f_125a6e00();
  /* 125a53de mov esi, esp */
  ESI = (ESP);
  /* 125a53e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a53e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a53e4 push 0x125d3620 */
  push32((uint32_t)(0x125d3620u));
  /* 125a53e9 call dword ptr [0x125d64bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64bc))), 0x125a53efu);
  /* 125a53ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a53f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a53f4 call 0x125a6e00 */
  push32(0x125a53f9u); f_125a6e00();
  /* 125a53f9 mov esi, esp */
  ESI = (ESP);
  /* 125a53fb push 2 */
  push32((uint32_t)(0x2u));
  /* 125a53fd push 1 */
  push32((uint32_t)(0x1u));
  /* 125a53ff push 0x125d3628 */
  push32((uint32_t)(0x125d3628u));
  /* 125a5404 call dword ptr [0x125d64bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64bc))), 0x125a540au);
  /* 125a540a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a540d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a540f call 0x125a6e00 */
  push32(0x125a5414u); f_125a6e00();
  /* 125a5414 mov esi, esp */
  ESI = (ESP);
  /* 125a5416 push 3 */
  push32((uint32_t)(0x3u));
  /* 125a5418 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a541a push 0x125d35a0 */
  push32((uint32_t)(0x125d35a0u));
  /* 125a541f call dword ptr [0x125d64bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64bc))), 0x125a5425u);
  /* 125a5425 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5428 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a542a call 0x125a6e00 */
  push32(0x125a542fu); f_125a6e00();
  /* 125a542f mov esi, esp */
  ESI = (ESP);
  /* 125a5431 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a5433 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5435 push 0x125d3608 */
  push32((uint32_t)(0x125d3608u));
  /* 125a543a call dword ptr [0x125d64bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64bc))), 0x125a5440u);
  /* 125a5440 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5443 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5445 call 0x125a6e00 */
  push32(0x125a544au); f_125a6e00();
  /* 125a544a mov esi, esp */
  ESI = (ESP);
  /* 125a544c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 125a5451 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a5453 call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a5459u);
  /* 125a5459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a545c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a545e call 0x125a6e00 */
  push32(0x125a5463u); f_125a6e00();
  /* 125a5463 mov esi, esp */
  ESI = (ESP);
  /* 125a5465 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5467 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 125a5469 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a546fu);
  /* 125a546f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5472 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5474 call 0x125a6e00 */
  push32(0x125a5479u); f_125a6e00();
  /* 125a5479 mov esi, esp */
  ESI = (ESP);
  /* 125a547b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a547d push 0x2a */
  push32((uint32_t)(0x2au));
  /* 125a547f call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5485u);
  /* 125a5485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a548a call 0x125a6e00 */
  push32(0x125a548fu); f_125a6e00();
  /* 125a548f mov esi, esp */
  ESI = (ESP);
  /* 125a5491 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5493 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125a5495 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a549bu);
  /* 125a549b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a549e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a54a0 call 0x125a6e00 */
  push32(0x125a54a5u); f_125a6e00();
L_125a54a5:;
  /* 125a54a5 mov esi, esp */
  ESI = (ESP);
  /* 125a54a7 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 125a54a9 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a54afu);
  /* 125a54af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a54b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a54b4 call 0x125a6e00 */
  push32(0x125a54b9u); f_125a6e00();
  /* 125a54b9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a54be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a54c0 je 0x125a5549 */
  if (C.zf) goto L_125a5549;
  /* 125a54c6 mov esi, esp */
  ESI = (ESP);
  /* 125a54c8 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125a54ca call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a54d0u);
  /* 125a54d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a54d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a54d5 call 0x125a6e00 */
  push32(0x125a54dau); f_125a6e00();
  /* 125a54da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a54df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a54e1 je 0x125a5549 */
  if (C.zf) goto L_125a5549;
  /* 125a54e3 mov esi, esp */
  ESI = (ESP);
  /* 125a54e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a54e7 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 125a54e9 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a54efu);
  /* 125a54ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a54f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a54f4 call 0x125a6e00 */
  push32(0x125a54f9u); f_125a6e00();
  /* 125a54f9 mov esi, esp */
  ESI = (ESP);
  /* 125a54fb push 1 */
  push32((uint32_t)(0x1u));
  /* 125a54fd call dword ptr [0x125d64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c0))), 0x125a5503u);
  /* 125a5503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5506 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5508 call 0x125a6e00 */
  push32(0x125a550du); f_125a6e00();
  /* 125a550d mov esi, esp */
  ESI = (ESP);
  /* 125a550f push 2 */
  push32((uint32_t)(0x2u));
  /* 125a5511 call dword ptr [0x125d64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c0))), 0x125a5517u);
  /* 125a5517 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a551a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a551c call 0x125a6e00 */
  push32(0x125a5521u); f_125a6e00();
  /* 125a5521 mov esi, esp */
  ESI = (ESP);
  /* 125a5523 push 3 */
  push32((uint32_t)(0x3u));
  /* 125a5525 call dword ptr [0x125d64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c0))), 0x125a552bu);
  /* 125a552b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a552e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5530 call 0x125a6e00 */
  push32(0x125a5535u); f_125a6e00();
  /* 125a5535 mov esi, esp */
  ESI = (ESP);
  /* 125a5537 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a5539 call dword ptr [0x125d64c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c0))), 0x125a553fu);
  /* 125a553f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5542 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5544 call 0x125a6e00 */
  push32(0x125a5549u); f_125a6e00();
L_125a5549:;
  /* 125a5549 mov esi, esp */
  ESI = (ESP);
  /* 125a554b push 0x26 */
  push32((uint32_t)(0x26u));
  /* 125a554d call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5553u);
  /* 125a5553 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5556 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5558 call 0x125a6e00 */
  push32(0x125a555du); f_125a6e00();
  /* 125a555d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5564 je 0x125a560e */
  if (C.zf) goto L_125a560e;
  /* 125a556a mov esi, esp */
  ESI = (ESP);
  /* 125a556c push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125a556e call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5574u);
  /* 125a5574 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5577 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5579 call 0x125a6e00 */
  push32(0x125a557eu); f_125a6e00();
  /* 125a557e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5585 je 0x125a560e */
  if (C.zf) goto L_125a560e;
  /* 125a558b mov esi, esp */
  ESI = (ESP);
  /* 125a558d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 125a558f call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a5595u);
  /* 125a5595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5598 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a559a call 0x125a6e00 */
  push32(0x125a559fu); f_125a6e00();
  /* 125a559f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a55a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a55a6 je 0x125a55c5 */
  if (C.zf) goto L_125a55c5;
  /* 125a55a8 mov esi, esp */
  ESI = (ESP);
  /* 125a55aa push 1 */
  push32((uint32_t)(0x1u));
  /* 125a55ac push 0 */
  push32((uint32_t)(0x0u));
  /* 125a55ae call dword ptr [0x125d64ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64ac))), 0x125a55b4u);
  /* 125a55b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a55b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a55b9 call 0x125a6e00 */
  push32(0x125a55beu); f_125a6e00();
  /* 125a55be cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a55c3 jl 0x125a55e2 */
  if ((C.sf!=C.of)) goto L_125a55e2;
L_125a55c5:;
  /* 125a55c5 mov esi, esp */
  ESI = (ESP);
  /* 125a55c7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 125a55c9 call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a55cfu);
  /* 125a55cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a55d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a55d4 call 0x125a6e00 */
  push32(0x125a55d9u); f_125a6e00();
  /* 125a55d9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a55de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a55e0 je 0x125a560e */
  if (C.zf) goto L_125a560e;
L_125a55e2:;
  /* 125a55e2 mov esi, esp */
  ESI = (ESP);
  /* 125a55e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a55e6 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 125a55e8 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a55eeu);
  /* 125a55ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a55f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a55f3 call 0x125a6e00 */
  push32(0x125a55f8u); f_125a6e00();
  /* 125a55f8 mov esi, esp */
  ESI = (ESP);
  /* 125a55fa push 1 */
  push32((uint32_t)(0x1u));
  /* 125a55fc push 0x18 */
  push32((uint32_t)(0x18u));
  /* 125a55fe call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5604u);
  /* 125a5604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5607 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5609 call 0x125a6e00 */
  push32(0x125a560eu); f_125a6e00();
L_125a560e:;
  /* 125a560e mov esi, esp */
  ESI = (ESP);
  /* 125a5610 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 125a5612 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5618u);
  /* 125a5618 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a561b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a561d call 0x125a6e00 */
  push32(0x125a5622u); f_125a6e00();
  /* 125a5622 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5627 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5629 je 0x125a56b2 */
  if (C.zf) goto L_125a56b2;
  /* 125a562f mov esi, esp */
  ESI = (ESP);
  /* 125a5631 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 125a5633 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5639u);
  /* 125a5639 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a563c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a563e call 0x125a6e00 */
  push32(0x125a5643u); f_125a6e00();
  /* 125a5643 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a564a je 0x125a56b2 */
  if (C.zf) goto L_125a56b2;
  /* 125a564c mov esi, esp */
  ESI = (ESP);
  /* 125a564e push 0x26 */
  push32((uint32_t)(0x26u));
  /* 125a5650 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5656u);
  /* 125a5656 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5659 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a565b call 0x125a6e00 */
  push32(0x125a5660u); f_125a6e00();
  /* 125a5660 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5667 jne 0x125a56b2 */
  if (!C.zf) goto L_125a56b2;
  /* 125a5669 mov esi, esp */
  ESI = (ESP);
  /* 125a566b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a566d push 0x125d3588 */
  push32((uint32_t)(0x125d3588u));
  /* 125a5672 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a5678u);
  /* 125a5678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a567b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a567d call 0x125a6e00 */
  push32(0x125a5682u); f_125a6e00();
  /* 125a5682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5684 jne 0x125a56b2 */
  if (!C.zf) goto L_125a56b2;
  /* 125a5686 mov esi, esp */
  ESI = (ESP);
  /* 125a5688 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a568a push 0x18 */
  push32((uint32_t)(0x18u));
  /* 125a568c call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5692u);
  /* 125a5692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5695 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5697 call 0x125a6e00 */
  push32(0x125a569cu); f_125a6e00();
  /* 125a569c mov esi, esp */
  ESI = (ESP);
  /* 125a569e push 1 */
  push32((uint32_t)(0x1u));
  /* 125a56a0 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 125a56a2 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a56a8u);
  /* 125a56a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a56ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a56ad call 0x125a6e00 */
  push32(0x125a56b2u); f_125a6e00();
L_125a56b2:;
  /* 125a56b2 mov esi, esp */
  ESI = (ESP);
  /* 125a56b4 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 125a56b6 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a56bcu);
  /* 125a56bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a56bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a56c1 call 0x125a6e00 */
  push32(0x125a56c6u); f_125a6e00();
  /* 125a56c6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a56cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a56cd je 0x125a5754 */
  if (C.zf) goto L_125a5754;
  /* 125a56d3 mov esi, esp */
  ESI = (ESP);
  /* 125a56d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a56d7 push 0x125d3628 */
  push32((uint32_t)(0x125d3628u));
  /* 125a56dc call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a56e2u);
  /* 125a56e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a56e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a56e7 call 0x125a6e00 */
  push32(0x125a56ecu); f_125a6e00();
  /* 125a56ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a56ee jle 0x125a5754 */
  if ((C.zf||C.sf!=C.of)) goto L_125a5754;
  /* 125a56f0 mov esi, esp */
  ESI = (ESP);
  /* 125a56f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a56f4 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 125a56f6 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a56fcu);
  /* 125a56fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a56ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5701 call 0x125a6e00 */
  push32(0x125a5706u); f_125a6e00();
  /* 125a5706 mov esi, esp */
  ESI = (ESP);
  /* 125a5708 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a570a push 0x24 */
  push32((uint32_t)(0x24u));
  /* 125a570c call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5712u);
  /* 125a5712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5717 call 0x125a6e00 */
  push32(0x125a571cu); f_125a6e00();
  /* 125a571c mov esi, esp */
  ESI = (ESP);
  /* 125a571e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5720 push 0x125d3558 */
  push32((uint32_t)(0x125d3558u));
  /* 125a5725 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5727 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a572du);
  /* 125a572d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5730 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5732 call 0x125a6e00 */
  push32(0x125a5737u); f_125a6e00();
  /* 125a5737 mov esi, esp */
  ESI = (ESP);
  /* 125a5739 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a573b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a573d push 0x125d3628 */
  push32((uint32_t)(0x125d3628u));
  /* 125a5742 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5744 call dword ptr [0x125d64b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64b8))), 0x125a574au);
  /* 125a574a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a574d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a574f call 0x125a6e00 */
  push32(0x125a5754u); f_125a6e00();
L_125a5754:;
  /* 125a5754 mov esi, esp */
  ESI = (ESP);
  /* 125a5756 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 125a5758 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a575eu);
  /* 125a575e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5761 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5763 call 0x125a6e00 */
  push32(0x125a5768u); f_125a6e00();
  /* 125a5768 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a576d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a576f je 0x125a5817 */
  if (C.zf) goto L_125a5817;
  /* 125a5775 mov esi, esp */
  ESI = (ESP);
  /* 125a5777 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 125a5779 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a577fu);
  /* 125a577f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5782 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5784 call 0x125a6e00 */
  push32(0x125a5789u); f_125a6e00();
  /* 125a5789 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a578e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5790 jne 0x125a5817 */
  if (!C.zf) goto L_125a5817;
  /* 125a5796 mov esi, esp */
  ESI = (ESP);
  /* 125a5798 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a579a push 0x125d3628 */
  push32((uint32_t)(0x125d3628u));
  /* 125a579f call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a57a5u);
  /* 125a57a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a57a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a57aa call 0x125a6e00 */
  push32(0x125a57afu); f_125a6e00();
  /* 125a57af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a57b1 jne 0x125a5817 */
  if (!C.zf) goto L_125a5817;
  /* 125a57b3 mov esi, esp */
  ESI = (ESP);
  /* 125a57b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a57b7 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 125a57b9 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a57bfu);
  /* 125a57bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a57c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a57c4 call 0x125a6e00 */
  push32(0x125a57c9u); f_125a6e00();
  /* 125a57c9 mov esi, esp */
  ESI = (ESP);
  /* 125a57cb push 1 */
  push32((uint32_t)(0x1u));
  /* 125a57cd push 0x25 */
  push32((uint32_t)(0x25u));
  /* 125a57cf call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a57d5u);
  /* 125a57d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a57d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a57da call 0x125a6e00 */
  push32(0x125a57dfu); f_125a6e00();
  /* 125a57df mov esi, esp */
  ESI = (ESP);
  /* 125a57e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a57e3 push 0x125d3558 */
  push32((uint32_t)(0x125d3558u));
  /* 125a57e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a57ea call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a57f0u);
  /* 125a57f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a57f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a57f5 call 0x125a6e00 */
  push32(0x125a57fau); f_125a6e00();
  /* 125a57fa mov esi, esp */
  ESI = (ESP);
  /* 125a57fc push 0 */
  push32((uint32_t)(0x0u));
  /* 125a57fe push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 125a5800 push 0x125d3598 */
  push32((uint32_t)(0x125d3598u));
  /* 125a5805 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5807 call dword ptr [0x125d6490] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6490))), 0x125a580du);
  /* 125a580d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5810 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5812 call 0x125a6e00 */
  push32(0x125a5817u); f_125a6e00();
L_125a5817:;
  /* 125a5817 mov esi, esp */
  ESI = (ESP);
  /* 125a5819 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 125a581b call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5821u);
  /* 125a5821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5824 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5826 call 0x125a6e00 */
  push32(0x125a582bu); f_125a6e00();
  /* 125a582b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5832 je 0x125a5900 */
  if (C.zf) goto L_125a5900;
  /* 125a5838 mov esi, esp */
  ESI = (ESP);
  /* 125a583a push 1 */
  push32((uint32_t)(0x1u));
  /* 125a583c push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a5841 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a5847u);
  /* 125a5847 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a584a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a584c call 0x125a6e00 */
  push32(0x125a5851u); f_125a6e00();
  /* 125a5851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5853 jne 0x125a5900 */
  if (!C.zf) goto L_125a5900;
  /* 125a5859 mov esi, esp */
  ESI = (ESP);
  /* 125a585b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a585d push 0x125d35e8 */
  push32((uint32_t)(0x125d35e8u));
  /* 125a5862 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a5868u);
  /* 125a5868 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a586b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a586d call 0x125a6e00 */
  push32(0x125a5872u); f_125a6e00();
  /* 125a5872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5874 jle 0x125a5900 */
  if ((C.zf||C.sf!=C.of)) goto L_125a5900;
  /* 125a587a mov esi, esp */
  ESI = (ESP);
  /* 125a587c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a587e push 0x23 */
  push32((uint32_t)(0x23u));
  /* 125a5880 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5886u);
  /* 125a5886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5889 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a588b call 0x125a6e00 */
  push32(0x125a5890u); f_125a6e00();
  /* 125a5890 mov esi, esp */
  ESI = (ESP);
  /* 125a5892 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5894 call dword ptr [0x125d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6494))), 0x125a589au);
  /* 125a589a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a589d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a589f call 0x125a6e00 */
  push32(0x125a58a4u); f_125a6e00();
  /* 125a58a4 mov esi, esp */
  ESI = (ESP);
  /* 125a58a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a58a8 call dword ptr [0x125d6494] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6494))), 0x125a58aeu);
  /* 125a58ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a58b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a58b3 call 0x125a6e00 */
  push32(0x125a58b8u); f_125a6e00();
  /* 125a58b8 mov esi, esp */
  ESI = (ESP);
  /* 125a58ba push 0 */
  push32((uint32_t)(0x0u));
  /* 125a58bc push 0x125d36e8 */
  push32((uint32_t)(0x125d36e8u));
  /* 125a58c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a58c3 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a58c9u);
  /* 125a58c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a58cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a58ce call 0x125a6e00 */
  push32(0x125a58d3u); f_125a6e00();
  /* 125a58d3 mov esi, esp */
  ESI = (ESP);
  /* 125a58d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a58d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a58d9 call dword ptr [0x125d64a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a4))), 0x125a58dfu);
  /* 125a58df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a58e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a58e4 call 0x125a6e00 */
  push32(0x125a58e9u); f_125a6e00();
  /* 125a58e9 mov esi, esp */
  ESI = (ESP);
  /* 125a58eb push 0x125ce7c4 */
  push32((uint32_t)(0x125ce7c4u));
  /* 125a58f0 call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a58f6u);
  /* 125a58f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a58f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a58fb call 0x125a6e00 */
  push32(0x125a5900u); f_125a6e00();
L_125a5900:;
  /* 125a5900 mov esi, esp */
  ESI = (ESP);
  /* 125a5902 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 125a5904 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a590au);
  /* 125a590a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a590d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a590f call 0x125a6e00 */
  push32(0x125a5914u); f_125a6e00();
  /* 125a5914 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a591b je 0x125a595f */
  if (C.zf) goto L_125a595f;
  /* 125a591d mov esi, esp */
  ESI = (ESP);
  /* 125a591f push 0x23 */
  push32((uint32_t)(0x23u));
  /* 125a5921 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5927u);
  /* 125a5927 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a592a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a592c call 0x125a6e00 */
  push32(0x125a5931u); f_125a6e00();
  /* 125a5931 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5938 jne 0x125a595f */
  if (!C.zf) goto L_125a595f;
  /* 125a593a mov esi, esp */
  ESI = (ESP);
  /* 125a593c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a593e push 0x22 */
  push32((uint32_t)(0x22u));
  /* 125a5940 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5946u);
  /* 125a5946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5949 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a594b call 0x125a6e00 */
  push32(0x125a5950u); f_125a6e00();
  /* 125a5950 mov esi, esp */
  ESI = (ESP);
  /* 125a5952 call dword ptr [0x125d64c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64c8))), 0x125a5958u);
  /* 125a5958 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a595a call 0x125a6e00 */
  push32(0x125a595fu); f_125a6e00();
L_125a595f:;
  /* 125a595f mov esi, esp */
  ESI = (ESP);
  /* 125a5961 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 125a5963 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5969u);
  /* 125a5969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a596c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a596e call 0x125a6e00 */
  push32(0x125a5973u); f_125a6e00();
  /* 125a5973 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a597a je 0x125a59c9 */
  if (C.zf) goto L_125a59c9;
  /* 125a597c push 0x125d3530 */
  push32((uint32_t)(0x125d3530u));
  /* 125a5981 call 0x125a1005 */
  push32(0x125a5986u); f_125a1005();
  /* 125a5986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a598b jne 0x125a59c9 */
  if (!C.zf) goto L_125a59c9;
  /* 125a598d mov esi, esp */
  ESI = (ESP);
  /* 125a598f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5991 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 125a5993 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5999u);
  /* 125a5999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a599c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a599e call 0x125a6e00 */
  push32(0x125a59a3u); f_125a6e00();
  /* 125a59a3 mov esi, esp */
  ESI = (ESP);
  /* 125a59a5 push 0x125ce7b8 */
  push32((uint32_t)(0x125ce7b8u));
  /* 125a59aa call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a59b0u);
  /* 125a59b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a59b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a59b5 call 0x125a6e00 */
  push32(0x125a59bau); f_125a6e00();
  /* 125a59ba mov esi, esp */
  ESI = (ESP);
  /* 125a59bc call dword ptr [0x125d64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64cc))), 0x125a59c2u);
  /* 125a59c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a59c4 call 0x125a6e00 */
  push32(0x125a59c9u); f_125a6e00();
L_125a59c9:;
  /* 125a59c9 mov esi, esp */
  ESI = (ESP);
  /* 125a59cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 125a59cd call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a59d3u);
  /* 125a59d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a59d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a59d8 call 0x125a6e00 */
  push32(0x125a59ddu); f_125a6e00();
  /* 125a59dd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a59e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a59e4 je 0x125a5ac1 */
  if (C.zf) goto L_125a5ac1;
  /* 125a59ea mov esi, esp */
  ESI = (ESP);
  /* 125a59ec push 0xd */
  push32((uint32_t)(0xdu));
  /* 125a59ee call dword ptr [0x125d6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6478))), 0x125a59f4u);
  /* 125a59f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a59f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a59f9 call 0x125a6e00 */
  push32(0x125a59feu); f_125a6e00();
  /* 125a59fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5a03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5a05 je 0x125a5ac1 */
  if (C.zf) goto L_125a5ac1;
  /* 125a5a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5a0d push 0x125d3760 */
  push32((uint32_t)(0x125d3760u));
  /* 125a5a12 call 0x125a100f */
  push32(0x125a5a17u); f_125a100f();
  /* 125a5a17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5a1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5a1c jne 0x125a5ac1 */
  if (!C.zf) goto L_125a5ac1;
  /* 125a5a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5a24 push 0x125d3788 */
  push32((uint32_t)(0x125d3788u));
  /* 125a5a29 call 0x125a100f */
  push32(0x125a5a2eu); f_125a100f();
  /* 125a5a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5a31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5a33 jne 0x125a5ac1 */
  if (!C.zf) goto L_125a5ac1;
  /* 125a5a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5a3b push 0x125d3798 */
  push32((uint32_t)(0x125d3798u));
  /* 125a5a40 call 0x125a100f */
  push32(0x125a5a45u); f_125a100f();
  /* 125a5a45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5a4a jne 0x125a5ac1 */
  if (!C.zf) goto L_125a5ac1;
  /* 125a5a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5a4e push 0x125d3770 */
  push32((uint32_t)(0x125d3770u));
  /* 125a5a53 call 0x125a100f */
  push32(0x125a5a58u); f_125a100f();
  /* 125a5a58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5a5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5a5d jne 0x125a5ac1 */
  if (!C.zf) goto L_125a5ac1;
  /* 125a5a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5a61 push 0x125d37d0 */
  push32((uint32_t)(0x125d37d0u));
  /* 125a5a66 call 0x125a100f */
  push32(0x125a5a6bu); f_125a100f();
  /* 125a5a6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5a6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5a70 jne 0x125a5ac1 */
  if (!C.zf) goto L_125a5ac1;
  /* 125a5a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5a74 push 0x125d37e8 */
  push32((uint32_t)(0x125d37e8u));
  /* 125a5a79 call 0x125a100f */
  push32(0x125a5a7eu); f_125a100f();
  /* 125a5a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5a83 jne 0x125a5ac1 */
  if (!C.zf) goto L_125a5ac1;
  /* 125a5a85 mov esi, esp */
  ESI = (ESP);
  /* 125a5a87 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5a89 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 125a5a8b call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5a91u);
  /* 125a5a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5a96 call 0x125a6e00 */
  push32(0x125a5a9bu); f_125a6e00();
  /* 125a5a9b mov esi, esp */
  ESI = (ESP);
  /* 125a5a9d push 0x125ce7ac */
  push32((uint32_t)(0x125ce7acu));
  /* 125a5aa2 call dword ptr [0x125d6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6474))), 0x125a5aa8u);
  /* 125a5aa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5aad call 0x125a6e00 */
  push32(0x125a5ab2u); f_125a6e00();
  /* 125a5ab2 mov esi, esp */
  ESI = (ESP);
  /* 125a5ab4 call dword ptr [0x125d64cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64cc))), 0x125a5abau);
  /* 125a5aba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5abc call 0x125a6e00 */
  push32(0x125a5ac1u); f_125a6e00();
L_125a5ac1:;
  /* 125a5ac1 mov esi, esp */
  ESI = (ESP);
  /* 125a5ac3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125a5ac5 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5acbu);
  /* 125a5acb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5ace cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5ad0 call 0x125a6e00 */
  push32(0x125a5ad5u); f_125a6e00();
  /* 125a5ad5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5ada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5adc je 0x125a5b0d */
  if (C.zf) goto L_125a5b0d;
  /* 125a5ade mov esi, esp */
  ESI = (ESP);
  /* 125a5ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5ae2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125a5ae4 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5aeau);
  /* 125a5aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5aed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5aef call 0x125a6e00 */
  push32(0x125a5af4u); f_125a6e00();
  /* 125a5af4 mov esi, esp */
  ESI = (ESP);
  /* 125a5af6 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 125a5afb push 0xf */
  push32((uint32_t)(0xfu));
  /* 125a5afd call dword ptr [0x125d6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6464))), 0x125a5b03u);
  /* 125a5b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5b06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5b08 call 0x125a6e00 */
  push32(0x125a5b0du); f_125a6e00();
L_125a5b0d:;
  /* 125a5b0d mov esi, esp */
  ESI = (ESP);
  /* 125a5b0f push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 125a5b11 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5b17u);
  /* 125a5b17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5b1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5b1c call 0x125a6e00 */
  push32(0x125a5b21u); f_125a6e00();
  /* 125a5b21 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5b26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5b28 je 0x125a5c43 */
  if (C.zf) goto L_125a5c43;
  /* 125a5b2e mov esi, esp */
  ESI = (ESP);
  /* 125a5b30 push 0xf */
  push32((uint32_t)(0xfu));
  /* 125a5b32 call dword ptr [0x125d64b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64b4))), 0x125a5b38u);
  /* 125a5b38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5b3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5b3d call 0x125a6e00 */
  push32(0x125a5b42u); f_125a6e00();
  /* 125a5b42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5b47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5b49 je 0x125a5c43 */
  if (C.zf) goto L_125a5c43;
  /* 125a5b4f mov esi, esp */
  ESI = (ESP);
  /* 125a5b51 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5b53 push 0x125d35b0 */
  push32((uint32_t)(0x125d35b0u));
  /* 125a5b58 call dword ptr [0x125d647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d647c))), 0x125a5b5eu);
  /* 125a5b5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5b61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5b63 call 0x125a6e00 */
  push32(0x125a5b68u); f_125a6e00();
  /* 125a5b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5b6a jne 0x125a5c43 */
  if (!C.zf) goto L_125a5c43;
  /* 125a5b70 mov esi, esp */
  ESI = (ESP);
  /* 125a5b72 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5b74 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 125a5b76 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5b7cu);
  /* 125a5b7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5b7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5b81 call 0x125a6e00 */
  push32(0x125a5b86u); f_125a6e00();
  /* 125a5b86 mov esi, esp */
  ESI = (ESP);
  /* 125a5b88 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5b8a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 125a5b8c call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5b92u);
  /* 125a5b92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5b95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5b97 call 0x125a6e00 */
  push32(0x125a5b9cu); f_125a6e00();
  /* 125a5b9c mov esi, esp */
  ESI = (ESP);
  /* 125a5b9e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5ba0 push 0x125d35b0 */
  push32((uint32_t)(0x125d35b0u));
  /* 125a5ba5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5ba7 push 0x125d37c8 */
  push32((uint32_t)(0x125d37c8u));
  /* 125a5bac push 0x125d35c0 */
  push32((uint32_t)(0x125d35c0u));
  /* 125a5bb1 push 0x125d34a8 */
  push32((uint32_t)(0x125d34a8u));
  /* 125a5bb6 call dword ptr [0x125d648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d648c))), 0x125a5bbcu);
  /* 125a5bbc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5bbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5bc1 call 0x125a6e00 */
  push32(0x125a5bc6u); f_125a6e00();
  /* 125a5bc6 mov esi, esp */
  ESI = (ESP);
  /* 125a5bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5bca push 0x125d34a8 */
  push32((uint32_t)(0x125d34a8u));
  /* 125a5bcf push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5bd1 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a5bd7u);
  /* 125a5bd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5bda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5bdc call 0x125a6e00 */
  push32(0x125a5be1u); f_125a6e00();
  /* 125a5be1 mov esi, esp */
  ESI = (ESP);
  /* 125a5be3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5be5 call dword ptr [0x125d644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d644c))), 0x125a5bebu);
  /* 125a5beb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5bee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5bf0 call 0x125a6e00 */
  push32(0x125a5bf5u); f_125a6e00();
  /* 125a5bf5 mov esi, esp */
  ESI = (ESP);
  /* 125a5bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5bf9 push 0x125d34a8 */
  push32((uint32_t)(0x125d34a8u));
  /* 125a5bfe push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5c00 call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a5c06u);
  /* 125a5c06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5c09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5c0b call 0x125a6e00 */
  push32(0x125a5c10u); f_125a6e00();
  /* 125a5c10 mov esi, esp */
  ESI = (ESP);
  /* 125a5c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5c16 push 0x125d35a8 */
  push32((uint32_t)(0x125d35a8u));
  /* 125a5c1b push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5c1d call dword ptr [0x125d64b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64b8))), 0x125a5c23u);
  /* 125a5c23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5c26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5c28 call 0x125a6e00 */
  push32(0x125a5c2du); f_125a6e00();
  /* 125a5c2d mov esi, esp */
  ESI = (ESP);
  /* 125a5c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5c31 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125a5c33 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5c39u);
  /* 125a5c39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5c3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5c3e call 0x125a6e00 */
  push32(0x125a5c43u); f_125a6e00();
L_125a5c43:;
  /* 125a5c43 mov esi, esp */
  ESI = (ESP);
  /* 125a5c45 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 125a5c47 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5c4du);
  /* 125a5c4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5c50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5c52 call 0x125a6e00 */
  push32(0x125a5c57u); f_125a6e00();
  /* 125a5c57 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5c5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5c5e je 0x125a5d18 */
  if (C.zf) goto L_125a5d18;
  /* 125a5c64 mov esi, esp */
  ESI = (ESP);
  /* 125a5c66 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 125a5c68 call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5c6eu);
  /* 125a5c6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5c71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5c73 call 0x125a6e00 */
  push32(0x125a5c78u); f_125a6e00();
  /* 125a5c78 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5c7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5c7f jne 0x125a5d18 */
  if (!C.zf) goto L_125a5d18;
  /* 125a5c85 mov esi, esp */
  ESI = (ESP);
  /* 125a5c87 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5c89 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 125a5c8b call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5c91u);
  /* 125a5c91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5c94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5c96 call 0x125a6e00 */
  push32(0x125a5c9bu); f_125a6e00();
  /* 125a5c9b mov esi, esp */
  ESI = (ESP);
  /* 125a5c9d push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5c9f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 125a5ca1 call dword ptr [0x125d6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6440))), 0x125a5ca7u);
  /* 125a5ca7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5caa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5cac call 0x125a6e00 */
  push32(0x125a5cb1u); f_125a6e00();
  /* 125a5cb1 mov esi, esp */
  ESI = (ESP);
  /* 125a5cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5cb5 push 0x125d34a8 */
  push32((uint32_t)(0x125d34a8u));
  /* 125a5cba push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5cbc call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a5cc2u);
  /* 125a5cc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5cc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5cc7 call 0x125a6e00 */
  push32(0x125a5cccu); f_125a6e00();
  /* 125a5ccc mov esi, esp */
  ESI = (ESP);
  /* 125a5cce push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5cd0 call dword ptr [0x125d644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d644c))), 0x125a5cd6u);
  /* 125a5cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5cd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5cdb call 0x125a6e00 */
  push32(0x125a5ce0u); f_125a6e00();
  /* 125a5ce0 mov esi, esp */
  ESI = (ESP);
  /* 125a5ce2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5ce4 push 0x125d34a8 */
  push32((uint32_t)(0x125d34a8u));
  /* 125a5ce9 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5ceb call dword ptr [0x125d6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6460))), 0x125a5cf1u);
  /* 125a5cf1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5cf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5cf6 call 0x125a6e00 */
  push32(0x125a5cfbu); f_125a6e00();
  /* 125a5cfb mov esi, esp */
  ESI = (ESP);
  /* 125a5cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5cff push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5d01 push 0x125d35a8 */
  push32((uint32_t)(0x125d35a8u));
  /* 125a5d06 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a5d08 call dword ptr [0x125d64b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64b8))), 0x125a5d0eu);
  /* 125a5d0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5d11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5d13 call 0x125a6e00 */
  push32(0x125a5d18u); f_125a6e00();
L_125a5d18:;
  /* 125a5d18 mov esi, esp */
  ESI = (ESP);
  /* 125a5d1a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 125a5d1c call dword ptr [0x125d6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6448))), 0x125a5d22u);
  /* 125a5d22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5d25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5d27 call 0x125a6e00 */
  push32(0x125a5d2cu); f_125a6e00();
  /* 125a5d2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a5d31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5d33 jne 0x125a5d73 */
  if (!C.zf) goto L_125a5d73;
  /* 125a5d35 mov esi, esp */
  ESI = (ESP);
  /* 125a5d37 push 0x125d34a8 */
  push32((uint32_t)(0x125d34a8u));
  /* 125a5d3c push 0x125d35a8 */
  push32((uint32_t)(0x125d35a8u));
  /* 125a5d41 call dword ptr [0x125d6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6488))), 0x125a5d47u);
  /* 125a5d47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5d4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5d4c call 0x125a6e00 */
  push32(0x125a5d51u); f_125a6e00();
  /* 125a5d51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a5d53 jle 0x125a5d73 */
  if ((C.zf||C.sf!=C.of)) goto L_125a5d73;
  /* 125a5d55 mov esi, esp */
  ESI = (ESP);
  /* 125a5d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a5d59 push 0x125d35c8 */
  push32((uint32_t)(0x125d35c8u));
  /* 125a5d5e push 0x125d34a8 */
  push32((uint32_t)(0x125d34a8u));
  /* 125a5d63 call dword ptr [0x125d64a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d64a0))), 0x125a5d69u);
  /* 125a5d69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5d6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5d6e call 0x125a6e00 */
  push32(0x125a5d73u); f_125a6e00();
L_125a5d73:;
  /* 125a5d73 pop edi */
  EDI = (pop32());
  /* 125a5d74 pop esi */
  ESI = (pop32());
  /* 125a5d75 pop ebx */
  EBX = (pop32());
  /* 125a5d76 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a5d79 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a5d7b call 0x125a6e00 */
  push32(0x125a5d80u); f_125a6e00();
  /* 125a5d80 mov esp, ebp */
  ESP = (EBP);
  /* 125a5d82 pop ebp */
  EBP = (pop32());
  /* 125a5d83 ret  */
  ESPCHK(0x125a2280u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c50 @ 0x125a6c50 (63 bytes, 26 insns) */
void f_125a6c50(void) {
  FTRACE(0x125a6c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a6c50 push ebp */
  push32((uint32_t)(EBP));
  /* 125a6c51 mov ebp, esp */
  EBP = (ESP);
  /* 125a6c53 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a6c56 push ebx */
  push32((uint32_t)(EBX));
  /* 125a6c57 push esi */
  push32((uint32_t)(ESI));
  /* 125a6c58 push edi */
  push32((uint32_t)(EDI));
  /* 125a6c59 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 125a6c5c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 125a6c61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 125a6c66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125a6c68 mov esi, esp */
  ESI = (ESP);
  /* 125a6c6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a6c6d push eax */
  push32((uint32_t)(EAX));
  /* 125a6c6e call dword ptr [0x125d6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6444))), 0x125a6c74u);
  /* 125a6c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a6c77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6c79 call 0x125a6e00 */
  push32(0x125a6c7eu); f_125a6e00();
  /* 125a6c7e pop edi */
  EDI = (pop32());
  /* 125a6c7f pop esi */
  ESI = (pop32());
  /* 125a6c80 pop ebx */
  EBX = (pop32());
  /* 125a6c81 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a6c84 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6c86 call 0x125a6e00 */
  push32(0x125a6c8bu); f_125a6e00();
  /* 125a6c8b mov esp, ebp */
  ESP = (EBP);
  /* 125a6c8d pop ebp */
  EBP = (pop32());
  /* 125a6c8e ret  */
  ESPCHK(0x125a6c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ca0 @ 0x125a6ca0 (67 bytes, 28 insns) */
void f_125a6ca0(void) {
  FTRACE(0x125a6ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a6ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a6ca1 mov ebp, esp */
  EBP = (ESP);
  /* 125a6ca3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a6ca6 push ebx */
  push32((uint32_t)(EBX));
  /* 125a6ca7 push esi */
  push32((uint32_t)(ESI));
  /* 125a6ca8 push edi */
  push32((uint32_t)(EDI));
  /* 125a6ca9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 125a6cac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 125a6cb1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 125a6cb6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125a6cb8 mov esi, esp */
  ESI = (ESP);
  /* 125a6cba mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 125a6cbd push eax */
  push32((uint32_t)(EAX));
  /* 125a6cbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a6cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 125a6cc2 call dword ptr [0x125d643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d643c))), 0x125a6cc8u);
  /* 125a6cc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a6ccb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6ccd call 0x125a6e00 */
  push32(0x125a6cd2u); f_125a6e00();
  /* 125a6cd2 pop edi */
  EDI = (pop32());
  /* 125a6cd3 pop esi */
  ESI = (pop32());
  /* 125a6cd4 pop ebx */
  EBX = (pop32());
  /* 125a6cd5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a6cd8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6cda call 0x125a6e00 */
  push32(0x125a6cdfu); f_125a6e00();
  /* 125a6cdf mov esp, ebp */
  ESP = (EBP);
  /* 125a6ce1 pop ebp */
  EBP = (pop32());
  /* 125a6ce2 ret  */
  ESPCHK(0x125a6ca0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x125a6e00 (56 bytes, 28 insns) */
void f_125a6e00(void) {
  FTRACE(0x125a6e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a6e00 jne 0x125a6e03 */
  if (!C.zf) goto L_125a6e03;
  /* 125a6e02 ret  */
  ESPCHK(0x125a6e00u, _esp0);
  ESP += 4; return;
L_125a6e03:;
  /* 125a6e03 push ebp */
  push32((uint32_t)(EBP));
  /* 125a6e04 mov ebp, esp */
  EBP = (ESP);
  /* 125a6e06 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a6e09 push eax */
  push32((uint32_t)(EAX));
  /* 125a6e0a push edx */
  push32((uint32_t)(EDX));
  /* 125a6e0b push ebx */
  push32((uint32_t)(EBX));
  /* 125a6e0c push esi */
  push32((uint32_t)(ESI));
  /* 125a6e0d push edi */
  push32((uint32_t)(EDI));
  /* 125a6e0e push 0x125ce848 */
  push32((uint32_t)(0x125ce848u));
  /* 125a6e13 push 0x125ce844 */
  push32((uint32_t)(0x125ce844u));
  /* 125a6e18 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 125a6e1a push 0x125ce834 */
  push32((uint32_t)(0x125ce834u));
  /* 125a6e1f push 1 */
  push32((uint32_t)(0x1u));
  /* 125a6e21 call 0x125a71d0 */
  push32(0x125a6e26u); f_125a71d0();
  /* 125a6e26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a6e29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6e2c jne 0x125a6e2f */
  if (!C.zf) goto L_125a6e2f;
  /* 125a6e2e int3  */
  x86_unimpl("int3 @ 0x125a6e2e");
L_125a6e2f:;
  /* 125a6e2f pop edi */
  EDI = (pop32());
  /* 125a6e30 pop esi */
  ESI = (pop32());
  /* 125a6e31 pop ebx */
  EBX = (pop32());
  /* 125a6e32 pop edx */
  EDX = (pop32());
  /* 125a6e33 pop eax */
  EAX = (pop32());
  /* 125a6e34 mov esp, ebp */
  ESP = (EBP);
  /* 125a6e36 pop ebp */
  EBP = (pop32());
  /* 125a6e37 ret  */
  ESPCHK(0x125a6e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e40 @ 0x125a6e40 (313 bytes, 78 insns) */
void f_125a6e40(void) {
  FTRACE(0x125a6e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a6e40 push ebp */
  push32((uint32_t)(EBP));
  /* 125a6e41 mov ebp, esp */
  EBP = (ESP);
  /* 125a6e43 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6e47 jne 0x125a6f07 */
  if (!C.zf) goto L_125a6f07;
  /* 125a6e4d call dword ptr [0x125d6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6368))), 0x125a6e53u);
  /* 125a6e53 mov dword ptr [0x125d38e0], eax */
  w32((uint32_t)(0x125d38e0), (EAX));
  /* 125a6e58 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a6e5a call 0x125aa900 */
  push32(0x125a6e5fu); f_125aa900();
  /* 125a6e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a6e62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a6e64 jne 0x125a6e6d */
  if (!C.zf) goto L_125a6e6d;
  /* 125a6e66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a6e68 jmp 0x125a6f75 */
  goto L_125a6f75;
L_125a6e6d:;
  /* 125a6e6d mov eax, dword ptr [0x125d38e0] */
  EAX = (r32((uint32_t)(0x125d38e0)));
  /* 125a6e72 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 125a6e75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a6e7a mov dword ptr [0x125d38ec], eax */
  w32((uint32_t)(0x125d38ec), (EAX));
  /* 125a6e7f mov ecx, dword ptr [0x125d38e0] */
  ECX = (r32((uint32_t)(0x125d38e0)));
  /* 125a6e85 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a6e8b mov dword ptr [0x125d38e8], ecx */
  w32((uint32_t)(0x125d38e8), (ECX));
  /* 125a6e91 mov edx, dword ptr [0x125d38e8] */
  EDX = (r32((uint32_t)(0x125d38e8)));
  /* 125a6e97 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 125a6e9a add edx, dword ptr [0x125d38ec] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125d38ec))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a6ea0 mov dword ptr [0x125d38e4], edx */
  w32((uint32_t)(0x125d38e4), (EDX));
  /* 125a6ea6 mov eax, dword ptr [0x125d38e0] */
  EAX = (r32((uint32_t)(0x125d38e0)));
  /* 125a6eab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 125a6eae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a6eb3 mov dword ptr [0x125d38e0], eax */
  w32((uint32_t)(0x125d38e0), (EAX));
  /* 125a6eb8 call 0x125a7a70 */
  push32(0x125a6ebdu); f_125a7a70();
  /* 125a6ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a6ebf jne 0x125a6ecd */
  if (!C.zf) goto L_125a6ecd;
  /* 125a6ec1 call 0x125aa950 */
  push32(0x125a6ec6u); f_125aa950();
  /* 125a6ec6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a6ec8 jmp 0x125a6f75 */
  goto L_125a6f75;
L_125a6ecd:;
  /* 125a6ecd call dword ptr [0x125d6364] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6364))), 0x125a6ed3u);
  /* 125a6ed3 mov dword ptr [0x125d542c], eax */
  w32((uint32_t)(0x125d542c), (EAX));
  /* 125a6ed8 call 0x125aa6e0 */
  push32(0x125a6eddu); f_125aa6e0();
  /* 125a6edd mov dword ptr [0x125d38c8], eax */
  w32((uint32_t)(0x125d38c8), (EAX));
  /* 125a6ee2 call 0x125a7d20 */
  push32(0x125a6ee7u); f_125a7d20();
  /* 125a6ee7 call 0x125aa1d0 */
  push32(0x125a6eecu); f_125aa1d0();
  /* 125a6eec call 0x125aa080 */
  push32(0x125a6ef1u); f_125aa080();
  /* 125a6ef1 call 0x125a7870 */
  push32(0x125a6ef6u); f_125a7870();
  /* 125a6ef6 mov ecx, dword ptr [0x125d38c4] */
  ECX = (r32((uint32_t)(0x125d38c4)));
  /* 125a6efc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a6eff mov dword ptr [0x125d38c4], ecx */
  w32((uint32_t)(0x125d38c4), (ECX));
  /* 125a6f05 jmp 0x125a6f70 */
  goto L_125a6f70;
L_125a6f07:;
  /* 125a6f07 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6f0b jne 0x125a6f60 */
  if (!C.zf) goto L_125a6f60;
  /* 125a6f0d cmp dword ptr [0x125d38c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d38c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6f14 jle 0x125a6f5a */
  if ((C.zf||C.sf!=C.of)) goto L_125a6f5a;
  /* 125a6f16 mov edx, dword ptr [0x125d38c4] */
  EDX = (r32((uint32_t)(0x125d38c4)));
  /* 125a6f1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a6f1f mov dword ptr [0x125d38c4], edx */
  w32((uint32_t)(0x125d38c4), (EDX));
  /* 125a6f25 cmp dword ptr [0x125d3918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6f2c jne 0x125a6f33 */
  if (!C.zf) goto L_125a6f33;
  /* 125a6f2e call 0x125a78f0 */
  push32(0x125a6f33u); f_125a78f0();
L_125a6f33:;
  /* 125a6f33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125a6f35 call 0x125a9620 */
  push32(0x125a6f3au); f_125a9620();
  /* 125a6f3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a6f3d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 125a6f40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a6f42 je 0x125a6f49 */
  if (C.zf) goto L_125a6f49;
  /* 125a6f44 call 0x125a9f30 */
  push32(0x125a6f49u); f_125a9f30();
L_125a6f49:;
  /* 125a6f49 call 0x125a8050 */
  push32(0x125a6f4eu); f_125a8050();
  /* 125a6f4e call 0x125a7b00 */
  push32(0x125a6f53u); f_125a7b00();
  /* 125a6f53 call 0x125aa950 */
  push32(0x125a6f58u); f_125aa950();
  /* 125a6f58 jmp 0x125a6f5e */
  goto L_125a6f5e;
L_125a6f5a:;
  /* 125a6f5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a6f5c jmp 0x125a6f75 */
  goto L_125a6f75;
L_125a6f5e:;
  /* 125a6f5e jmp 0x125a6f70 */
  goto L_125a6f70;
L_125a6f60:;
  /* 125a6f60 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6f64 jne 0x125a6f70 */
  if (!C.zf) goto L_125a6f70;
  /* 125a6f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a6f68 call 0x125a7bf0 */
  push32(0x125a6f6du); f_125a7bf0();
  /* 125a6f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a6f70:;
  /* 125a6f70 mov eax, 1 */
  EAX = (0x1u);
L_125a6f75:;
  /* 125a6f75 pop ebp */
  EBP = (pop32());
  /* 125a6f76 ret 0xc */
  ESPCHK(0x125a6e40u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x125a6f80 (243 bytes, 86 insns) */
void f_125a6f80(void) {
  FTRACE(0x125a6f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a6f80 push ebp */
  push32((uint32_t)(EBP));
  /* 125a6f81 mov ebp, esp */
  EBP = (ESP);
  /* 125a6f83 push ecx */
  push32((uint32_t)(ECX));
  /* 125a6f84 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125a6f8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6f8f jne 0x125a6fa1 */
  if (!C.zf) goto L_125a6fa1;
  /* 125a6f91 cmp dword ptr [0x125d38c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d38c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6f98 jne 0x125a6fa1 */
  if (!C.zf) goto L_125a6fa1;
  /* 125a6f9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a6f9c jmp 0x125a706d */
  goto L_125a706d;
L_125a6fa1:;
  /* 125a6fa1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6fa5 je 0x125a6fad */
  if (C.zf) goto L_125a6fad;
  /* 125a6fa7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6fab jne 0x125a6fef */
  if (!C.zf) goto L_125a6fef;
L_125a6fad:;
  /* 125a6fad cmp dword ptr [0x125d543c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d543c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6fb4 je 0x125a6fcb */
  if (C.zf) goto L_125a6fcb;
  /* 125a6fb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a6fb9 push eax */
  push32((uint32_t)(EAX));
  /* 125a6fba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a6fbd push ecx */
  push32((uint32_t)(ECX));
  /* 125a6fbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a6fc1 push edx */
  push32((uint32_t)(EDX));
  /* 125a6fc2 call dword ptr [0x125d543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d543c))), 0x125a6fc8u);
  /* 125a6fc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125a6fcb:;
  /* 125a6fcb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6fcf je 0x125a6fe5 */
  if (C.zf) goto L_125a6fe5;
  /* 125a6fd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a6fd4 push eax */
  push32((uint32_t)(EAX));
  /* 125a6fd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a6fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 125a6fd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a6fdc push edx */
  push32((uint32_t)(EDX));
  /* 125a6fdd call 0x125a6e40 */
  push32(0x125a6fe2u); f_125a6e40();
  /* 125a6fe2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125a6fe5:;
  /* 125a6fe5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a6fe9 jne 0x125a6fef */
  if (!C.zf) goto L_125a6fef;
  /* 125a6feb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a6fed jmp 0x125a706d */
  goto L_125a706d;
L_125a6fef:;
  /* 125a6fef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a6ff2 push eax */
  push32((uint32_t)(EAX));
  /* 125a6ff3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a6ff6 push ecx */
  push32((uint32_t)(ECX));
  /* 125a6ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a6ffa push edx */
  push32((uint32_t)(EDX));
  /* 125a6ffb call 0x125a1014 */
  push32(0x125a7000u); f_125a1014();
  /* 125a7000 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a7003 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7007 jne 0x125a701e */
  if (!C.zf) goto L_125a701e;
  /* 125a7009 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a700d jne 0x125a701e */
  if (!C.zf) goto L_125a701e;
  /* 125a700f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a7012 push eax */
  push32((uint32_t)(EAX));
  /* 125a7013 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a7015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7018 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7019 call 0x125a6e40 */
  push32(0x125a701eu); f_125a6e40();
L_125a701e:;
  /* 125a701e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7022 je 0x125a702a */
  if (C.zf) goto L_125a702a;
  /* 125a7024 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7028 jne 0x125a706a */
  if (!C.zf) goto L_125a706a;
L_125a702a:;
  /* 125a702a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a702d push edx */
  push32((uint32_t)(EDX));
  /* 125a702e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a7031 push eax */
  push32((uint32_t)(EAX));
  /* 125a7032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7035 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7036 call 0x125a6e40 */
  push32(0x125a703bu); f_125a6e40();
  /* 125a703b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a703d jne 0x125a7046 */
  if (!C.zf) goto L_125a7046;
  /* 125a703f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125a7046:;
  /* 125a7046 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a704a je 0x125a706a */
  if (C.zf) goto L_125a706a;
  /* 125a704c cmp dword ptr [0x125d543c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d543c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7053 je 0x125a706a */
  if (C.zf) goto L_125a706a;
  /* 125a7055 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a7058 push edx */
  push32((uint32_t)(EDX));
  /* 125a7059 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a705c push eax */
  push32((uint32_t)(EAX));
  /* 125a705d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7060 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7061 call dword ptr [0x125d543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d543c))), 0x125a7067u);
  /* 125a7067 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125a706a:;
  /* 125a706a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125a706d:;
  /* 125a706d mov esp, ebp */
  ESP = (EBP);
  /* 125a706f pop ebp */
  EBP = (pop32());
  /* 125a7070 ret 0xc */
  ESPCHK(0x125a6f80u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x125a7080 (58 bytes, 18 insns) */
void f_125a7080(void) {
  FTRACE(0x125a7080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7080 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7081 mov ebp, esp */
  EBP = (ESP);
  /* 125a7083 cmp dword ptr [0x125d38d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a708a je 0x125a709e */
  if (C.zf) goto L_125a709e;
  /* 125a708c cmp dword ptr [0x125d38d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7093 jne 0x125a70a3 */
  if (!C.zf) goto L_125a70a3;
  /* 125a7095 cmp dword ptr [0x125d38d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a709c jne 0x125a70a3 */
  if (!C.zf) goto L_125a70a3;
L_125a709e:;
  /* 125a709e call 0x125aa9f0 */
  push32(0x125a70a3u); f_125aa9f0();
L_125a70a3:;
  /* 125a70a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a70a6 push eax */
  push32((uint32_t)(EAX));
  /* 125a70a7 call 0x125aaa40 */
  push32(0x125a70acu); f_125aaa40();
  /* 125a70ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a70af push 0xff */
  push32((uint32_t)(0xffu));
  /* 125a70b4 call dword ptr [0x125d1a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d1a30))), 0x125a70bau);
  /* 125a70ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a70bd pop ebp */
  EBP = (pop32());
  /* 125a70be ret  */
  ESPCHK(0x125a7080u, _esp0);
  ESP += 4; return;
}

/* FUN_100070c0 @ 0x125a70c0 (11 bytes, 5 insns) */
void f_125a70c0(void) {
  FTRACE(0x125a70c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a70c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a70c1 mov ebp, esp */
  EBP = (ESP);
  /* 125a70c3 call dword ptr [0x125d636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d636c))), 0x125a70c9u);
  /* 125a70c9 pop ebp */
  EBP = (pop32());
  /* 125a70ca ret  */
  ESPCHK(0x125a70c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070d0 @ 0x125a70d0 (87 bytes, 30 insns) */
void f_125a70d0(void) {
  FTRACE(0x125a70d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a70d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a70d1 mov ebp, esp */
  EBP = (ESP);
  /* 125a70d3 push ecx */
  push32((uint32_t)(ECX));
  /* 125a70d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a70d8 jl 0x125a70e0 */
  if ((C.sf!=C.of)) goto L_125a70e0;
  /* 125a70da cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a70de jl 0x125a70e5 */
  if ((C.sf!=C.of)) goto L_125a70e5;
L_125a70e0:;
  /* 125a70e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a70e3 jmp 0x125a7123 */
  goto L_125a7123;
L_125a70e5:;
  /* 125a70e5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a70e9 jne 0x125a70f7 */
  if (!C.zf) goto L_125a70f7;
  /* 125a70eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a70ee mov eax, dword ptr [eax*4 + 0x125d1a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x125d1a38)));
  /* 125a70f5 jmp 0x125a7123 */
  goto L_125a7123;
L_125a70f7:;
  /* 125a70f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a70fa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 125a70fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a70ff je 0x125a7106 */
  if (C.zf) goto L_125a7106;
  /* 125a7101 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a7104 jmp 0x125a7123 */
  goto L_125a7123;
L_125a7106:;
  /* 125a7106 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7109 mov eax, dword ptr [edx*4 + 0x125d1a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125d1a38)));
  /* 125a7110 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a7113 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7116 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a7119 mov dword ptr [ecx*4 + 0x125d1a38], edx */
  w32((uint32_t)(ECX*4 + 0x125d1a38), (EDX));
  /* 125a7120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125a7123:;
  /* 125a7123 mov esp, ebp */
  ESP = (EBP);
  /* 125a7125 pop ebp */
  EBP = (pop32());
  /* 125a7126 ret  */
  ESPCHK(0x125a70d0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x125a7130 (126 bytes, 38 insns) */
void f_125a7130(void) {
  FTRACE(0x125a7130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7130 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7131 mov ebp, esp */
  EBP = (ESP);
  /* 125a7133 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7134 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7138 jl 0x125a7140 */
  if ((C.sf!=C.of)) goto L_125a7140;
  /* 125a713a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a713e jl 0x125a7147 */
  if ((C.sf!=C.of)) goto L_125a7147;
L_125a7140:;
  /* 125a7140 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 125a7145 jmp 0x125a71aa */
  goto L_125a71aa;
L_125a7147:;
  /* 125a7147 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a714b jne 0x125a7159 */
  if (!C.zf) goto L_125a7159;
  /* 125a714d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7150 mov eax, dword ptr [eax*4 + 0x125d1a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x125d1a44)));
  /* 125a7157 jmp 0x125a71aa */
  goto L_125a71aa;
L_125a7159:;
  /* 125a7159 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a715c mov edx, dword ptr [ecx*4 + 0x125d1a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d1a44)));
  /* 125a7163 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125a7166 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a716a jne 0x125a7180 */
  if (!C.zf) goto L_125a7180;
  /* 125a716c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 125a716e call dword ptr [0x125d6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6370))), 0x125a7174u);
  /* 125a7174 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7177 mov dword ptr [ecx*4 + 0x125d1a44], eax */
  w32((uint32_t)(ECX*4 + 0x125d1a44), (EAX));
  /* 125a717e jmp 0x125a71a7 */
  goto L_125a71a7;
L_125a7180:;
  /* 125a7180 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7184 jne 0x125a719a */
  if (!C.zf) goto L_125a719a;
  /* 125a7186 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 125a7188 call dword ptr [0x125d6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6370))), 0x125a718eu);
  /* 125a718e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7191 mov dword ptr [edx*4 + 0x125d1a44], eax */
  w32((uint32_t)(EDX*4 + 0x125d1a44), (EAX));
  /* 125a7198 jmp 0x125a71a7 */
  goto L_125a71a7;
L_125a719a:;
  /* 125a719a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a719d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a71a0 mov dword ptr [eax*4 + 0x125d1a44], ecx */
  w32((uint32_t)(EAX*4 + 0x125d1a44), (ECX));
L_125a71a7:;
  /* 125a71a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125a71aa:;
  /* 125a71aa mov esp, ebp */
  ESP = (EBP);
  /* 125a71ac pop ebp */
  EBP = (pop32());
  /* 125a71ad ret  */
  ESPCHK(0x125a7130u, _esp0);
  ESP += 4; return;
}

/* FUN_100071b0 @ 0x125a71b0 (28 bytes, 11 insns) */
void f_125a71b0(void) {
  FTRACE(0x125a71b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a71b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a71b1 mov ebp, esp */
  EBP = (ESP);
  /* 125a71b3 push ecx */
  push32((uint32_t)(ECX));
  /* 125a71b4 mov eax, dword ptr [0x125d5420] */
  EAX = (r32((uint32_t)(0x125d5420)));
  /* 125a71b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a71bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a71bf mov dword ptr [0x125d5420], ecx */
  w32((uint32_t)(0x125d5420), (ECX));
  /* 125a71c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a71c8 mov esp, ebp */
  ESP = (EBP);
  /* 125a71ca pop ebp */
  EBP = (pop32());
  /* 125a71cb ret  */
  ESPCHK(0x125a71b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071d0 @ 0x125a71d0 (912 bytes, 248 insns) */
void f_125a71d0(void) {
  FTRACE(0x125a71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a71d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a71d1 mov ebp, esp */
  EBP = (ESP);
  /* 125a71d3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 125a71d8 call 0x125ab2b0 */
  push32(0x125a71ddu); f_125ab2b0();
  /* 125a71dd push edi */
  push32((uint32_t)(EDI));
  /* 125a71de mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 125a71e5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 125a71ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a71ec lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 125a71f2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125a71f4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 125a71f6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 125a71f7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 125a71fe mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 125a7203 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a7205 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 125a720b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125a720d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 125a720f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 125a7210 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 125a7217 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 125a721c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a721e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 125a7224 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125a7226 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 125a7228 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 125a7229 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 125a722c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 125a7232 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7236 jl 0x125a723e */
  if ((C.sf!=C.of)) goto L_125a723e;
  /* 125a7238 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a723c jl 0x125a7246 */
  if ((C.sf!=C.of)) goto L_125a7246;
L_125a723e:;
  /* 125a723e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a7241 jmp 0x125a755b */
  goto L_125a755b;
L_125a7246:;
  /* 125a7246 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a724a jne 0x125a72f0 */
  if (!C.zf) goto L_125a72f0;
  /* 125a7250 push 0x125d1a34 */
  push32((uint32_t)(0x125d1a34u));
  /* 125a7255 call dword ptr [0x125d6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6388))), 0x125a725bu);
  /* 125a725b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a725d jle 0x125a72f0 */
  if ((C.zf||C.sf!=C.of)) goto L_125a72f0;
  /* 125a7263 cmp dword ptr [0x125d38d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a726a jne 0x125a72ae */
  if (!C.zf) goto L_125a72ae;
  /* 125a726c push 0x125ce9f0 */
  push32((uint32_t)(0x125ce9f0u));
  /* 125a7271 call dword ptr [0x125d6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6384))), 0x125a7277u);
  /* 125a7277 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 125a727d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7284 je 0x125a72a6 */
  if (C.zf) goto L_125a72a6;
  /* 125a7286 push 0x125ce9e4 */
  push32((uint32_t)(0x125ce9e4u));
  /* 125a728b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 125a7291 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7292 call dword ptr [0x125d6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6380))), 0x125a7298u);
  /* 125a7298 mov dword ptr [0x125d38d8], eax */
  w32((uint32_t)(0x125d38d8), (EAX));
  /* 125a729d cmp dword ptr [0x125d38d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a72a4 jne 0x125a72ae */
  if (!C.zf) goto L_125a72ae;
L_125a72a6:;
  /* 125a72a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a72a9 jmp 0x125a755b */
  goto L_125a755b;
L_125a72ae:;
  /* 125a72ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a72b1 push edx */
  push32((uint32_t)(EDX));
  /* 125a72b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a72b5 push eax */
  push32((uint32_t)(EAX));
  /* 125a72b6 push 0x125ce9b0 */
  push32((uint32_t)(0x125ce9b0u));
  /* 125a72bb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 125a72c1 push ecx */
  push32((uint32_t)(ECX));
  /* 125a72c2 call dword ptr [0x125d38d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d38d8))), 0x125a72c8u);
  /* 125a72c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a72cb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 125a72d1 push edx */
  push32((uint32_t)(EDX));
  /* 125a72d2 call dword ptr [0x125d637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d637c))), 0x125a72d8u);
  /* 125a72d8 push 0x125d1a34 */
  push32((uint32_t)(0x125d1a34u));
  /* 125a72dd call dword ptr [0x125d6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6378))), 0x125a72e3u);
  /* 125a72e3 call 0x125a70c0 */
  push32(0x125a72e8u); f_125a70c0();
  /* 125a72e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a72eb jmp 0x125a755b */
  goto L_125a755b;
L_125a72f0:;
  /* 125a72f0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a72f4 je 0x125a732d */
  if (C.zf) goto L_125a732d;
  /* 125a72f6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 125a72fc push eax */
  push32((uint32_t)(EAX));
  /* 125a72fd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a7300 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7301 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 125a7306 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 125a730c push edx */
  push32((uint32_t)(EDX));
  /* 125a730d call 0x125ab1b0 */
  push32(0x125a7312u); f_125ab1b0();
  /* 125a7312 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7315 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a7317 jge 0x125a732d */
  if ((C.sf==C.of)) goto L_125a732d;
  /* 125a7319 push 0x125ce984 */
  push32((uint32_t)(0x125ce984u));
  /* 125a731e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 125a7324 push eax */
  push32((uint32_t)(EAX));
  /* 125a7325 call 0x125ab0c0 */
  push32(0x125a732au); f_125ab0c0();
  /* 125a732a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a732d:;
  /* 125a732d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7331 jne 0x125a7365 */
  if (!C.zf) goto L_125a7365;
  /* 125a7333 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7337 je 0x125a7345 */
  if (C.zf) goto L_125a7345;
  /* 125a7339 mov dword ptr [ebp - 0x3028], 0x125ce970 */
  w32((uint32_t)(EBP + -0x3028), (0x125ce970u));
  /* 125a7343 jmp 0x125a734f */
  goto L_125a734f;
L_125a7345:;
  /* 125a7345 mov dword ptr [ebp - 0x3028], 0x125ce95c */
  w32((uint32_t)(EBP + -0x3028), (0x125ce95cu));
L_125a734f:;
  /* 125a734f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 125a7355 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7356 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 125a735c push edx */
  push32((uint32_t)(EDX));
  /* 125a735d call 0x125ab0c0 */
  push32(0x125a7362u); f_125ab0c0();
  /* 125a7362 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7365:;
  /* 125a7365 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 125a736b push eax */
  push32((uint32_t)(EAX));
  /* 125a736c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 125a7372 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7373 call 0x125ab0d0 */
  push32(0x125a7378u); f_125ab0d0();
  /* 125a7378 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a737b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a737f jne 0x125a73ba */
  if (!C.zf) goto L_125a73ba;
  /* 125a7381 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7384 mov eax, dword ptr [edx*4 + 0x125d1a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125d1a38)));
  /* 125a738b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 125a738e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a7390 je 0x125a73a6 */
  if (C.zf) goto L_125a73a6;
  /* 125a7392 push 0x125ce958 */
  push32((uint32_t)(0x125ce958u));
  /* 125a7397 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 125a739d push ecx */
  push32((uint32_t)(ECX));
  /* 125a739e call 0x125ab0d0 */
  push32(0x125a73a3u); f_125ab0d0();
  /* 125a73a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a73a6:;
  /* 125a73a6 push 0x125ce954 */
  push32((uint32_t)(0x125ce954u));
  /* 125a73ab lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 125a73b1 push edx */
  push32((uint32_t)(EDX));
  /* 125a73b2 call 0x125ab0d0 */
  push32(0x125a73b7u); f_125ab0d0();
  /* 125a73b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a73ba:;
  /* 125a73ba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a73be je 0x125a7402 */
  if (C.zf) goto L_125a7402;
  /* 125a73c0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 125a73c6 push eax */
  push32((uint32_t)(EAX));
  /* 125a73c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a73ca push ecx */
  push32((uint32_t)(ECX));
  /* 125a73cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a73ce push edx */
  push32((uint32_t)(EDX));
  /* 125a73cf push 0x125ce948 */
  push32((uint32_t)(0x125ce948u));
  /* 125a73d4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 125a73d9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 125a73df push eax */
  push32((uint32_t)(EAX));
  /* 125a73e0 call 0x125aafc0 */
  push32(0x125a73e5u); f_125aafc0();
  /* 125a73e5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a73e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a73ea jge 0x125a7400 */
  if ((C.sf==C.of)) goto L_125a7400;
  /* 125a73ec push 0x125ce984 */
  push32((uint32_t)(0x125ce984u));
  /* 125a73f1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 125a73f7 push ecx */
  push32((uint32_t)(ECX));
  /* 125a73f8 call 0x125ab0c0 */
  push32(0x125a73fdu); f_125ab0c0();
  /* 125a73fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7400:;
  /* 125a7400 jmp 0x125a7418 */
  goto L_125a7418;
L_125a7402:;
  /* 125a7402 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 125a7408 push edx */
  push32((uint32_t)(EDX));
  /* 125a7409 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 125a740f push eax */
  push32((uint32_t)(EAX));
  /* 125a7410 call 0x125ab0c0 */
  push32(0x125a7415u); f_125ab0c0();
  /* 125a7415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7418:;
  /* 125a7418 cmp dword ptr [0x125d5420], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d5420))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a741f je 0x125a745c */
  if (C.zf) goto L_125a745c;
  /* 125a7421 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 125a7427 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7428 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 125a742e push edx */
  push32((uint32_t)(EDX));
  /* 125a742f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7432 push eax */
  push32((uint32_t)(EAX));
  /* 125a7433 call dword ptr [0x125d5420] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d5420))), 0x125a7439u);
  /* 125a7439 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a743c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a743e je 0x125a745c */
  if (C.zf) goto L_125a745c;
  /* 125a7440 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7444 jne 0x125a7451 */
  if (!C.zf) goto L_125a7451;
  /* 125a7446 push 0x125d1a34 */
  push32((uint32_t)(0x125d1a34u));
  /* 125a744b call dword ptr [0x125d6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6378))), 0x125a7451u);
L_125a7451:;
  /* 125a7451 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 125a7457 jmp 0x125a755b */
  goto L_125a755b;
L_125a745c:;
  /* 125a745c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a745f mov edx, dword ptr [ecx*4 + 0x125d1a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d1a38)));
  /* 125a7466 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125a7469 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a746b je 0x125a74ab */
  if (C.zf) goto L_125a74ab;
  /* 125a746d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7470 cmp dword ptr [eax*4 + 0x125d1a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x125d1a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7478 je 0x125a74ab */
  if (C.zf) goto L_125a74ab;
  /* 125a747a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a747c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 125a7482 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7483 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 125a7489 push edx */
  push32((uint32_t)(EDX));
  /* 125a748a call 0x125aaf40 */
  push32(0x125a748fu); f_125aaf40();
  /* 125a748f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7492 push eax */
  push32((uint32_t)(EAX));
  /* 125a7493 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 125a7499 push eax */
  push32((uint32_t)(EAX));
  /* 125a749a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a749d mov edx, dword ptr [ecx*4 + 0x125d1a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d1a44)));
  /* 125a74a4 push edx */
  push32((uint32_t)(EDX));
  /* 125a74a5 call dword ptr [0x125d6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6374))), 0x125a74abu);
L_125a74ab:;
  /* 125a74ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a74ae mov ecx, dword ptr [eax*4 + 0x125d1a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x125d1a38)));
  /* 125a74b5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 125a74b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a74ba je 0x125a74c9 */
  if (C.zf) goto L_125a74c9;
  /* 125a74bc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 125a74c2 push edx */
  push32((uint32_t)(EDX));
  /* 125a74c3 call dword ptr [0x125d637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d637c))), 0x125a74c9u);
L_125a74c9:;
  /* 125a74c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a74cc mov ecx, dword ptr [eax*4 + 0x125d1a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x125d1a38)));
  /* 125a74d3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 125a74d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a74d8 je 0x125a7548 */
  if (C.zf) goto L_125a7548;
  /* 125a74da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a74de je 0x125a74fd */
  if (C.zf) goto L_125a74fd;
  /* 125a74e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 125a74e2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 125a74e8 push edx */
  push32((uint32_t)(EDX));
  /* 125a74e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a74ec push eax */
  push32((uint32_t)(EAX));
  /* 125a74ed call 0x125aac50 */
  push32(0x125a74f2u); f_125aac50();
  /* 125a74f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a74f5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 125a74fb jmp 0x125a7507 */
  goto L_125a7507;
L_125a74fd:;
  /* 125a74fd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_125a7507:;
  /* 125a7507 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 125a750d push ecx */
  push32((uint32_t)(ECX));
  /* 125a750e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a7511 push edx */
  push32((uint32_t)(EDX));
  /* 125a7512 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 125a7518 push eax */
  push32((uint32_t)(EAX));
  /* 125a7519 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a751c push ecx */
  push32((uint32_t)(ECX));
  /* 125a751d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7520 push edx */
  push32((uint32_t)(EDX));
  /* 125a7521 call 0x125a7560 */
  push32(0x125a7526u); f_125a7560();
  /* 125a7526 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7529 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 125a752f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7533 jne 0x125a7540 */
  if (!C.zf) goto L_125a7540;
  /* 125a7535 push 0x125d1a34 */
  push32((uint32_t)(0x125d1a34u));
  /* 125a753a call dword ptr [0x125d6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6378))), 0x125a7540u);
L_125a7540:;
  /* 125a7540 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 125a7546 jmp 0x125a755b */
  goto L_125a755b;
L_125a7548:;
  /* 125a7548 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a754c jne 0x125a7559 */
  if (!C.zf) goto L_125a7559;
  /* 125a754e push 0x125d1a34 */
  push32((uint32_t)(0x125d1a34u));
  /* 125a7553 call dword ptr [0x125d6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6378))), 0x125a7559u);
L_125a7559:;
  /* 125a7559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125a755b:;
  /* 125a755b pop edi */
  EDI = (pop32());
  /* 125a755c mov esp, ebp */
  ESP = (EBP);
  /* 125a755e pop ebp */
  EBP = (pop32());
  /* 125a755f ret  */
  ESPCHK(0x125a71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007560 @ 0x125a7560 (780 bytes, 197 insns) */
void f_125a7560(void) {
  FTRACE(0x125a7560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7560 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7561 mov ebp, esp */
  EBP = (ESP);
  /* 125a7563 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 125a7568 call 0x125ab2b0 */
  push32(0x125a756du); f_125ab2b0();
L_125a756d:;
  /* 125a756d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7571 jne 0x125a7598 */
  if (!C.zf) goto L_125a7598;
  /* 125a7573 push 0x125ceb40 */
  push32((uint32_t)(0x125ceb40u));
  /* 125a7578 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a757a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 125a757f push 0x125ceb34 */
  push32((uint32_t)(0x125ceb34u));
  /* 125a7584 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7586 call 0x125a71d0 */
  push32(0x125a758bu); f_125a71d0();
  /* 125a758b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a758e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7591 jne 0x125a7598 */
  if (!C.zf) goto L_125a7598;
  /* 125a7593 call 0x125a70c0 */
  push32(0x125a7598u); f_125a70c0();
L_125a7598:;
  /* 125a7598 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a759a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a759c jne 0x125a756d */
  if (!C.zf) goto L_125a756d;
  /* 125a759e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 125a75a3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 125a75a9 push ecx */
  push32((uint32_t)(ECX));
  /* 125a75aa push 0 */
  push32((uint32_t)(0x0u));
  /* 125a75ac call dword ptr [0x125d638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d638c))), 0x125a75b2u);
  /* 125a75b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a75b4 jne 0x125a75ca */
  if (!C.zf) goto L_125a75ca;
  /* 125a75b6 push 0x125ceb1c */
  push32((uint32_t)(0x125ceb1cu));
  /* 125a75bb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 125a75c1 push edx */
  push32((uint32_t)(EDX));
  /* 125a75c2 call 0x125ab0c0 */
  push32(0x125a75c7u); f_125ab0c0();
  /* 125a75c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a75ca:;
  /* 125a75ca lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 125a75d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a75d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a75d6 push ecx */
  push32((uint32_t)(ECX));
  /* 125a75d7 call 0x125aaf40 */
  push32(0x125a75dcu); f_125aaf40();
  /* 125a75dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a75df cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a75e2 jbe 0x125a760d */
  if ((C.cf||C.zf)) goto L_125a760d;
  /* 125a75e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a75e7 push edx */
  push32((uint32_t)(EDX));
  /* 125a75e8 call 0x125aaf40 */
  push32(0x125a75edu); f_125aaf40();
  /* 125a75ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a75f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a75f3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 125a75f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125a75fa push 3 */
  push32((uint32_t)(0x3u));
  /* 125a75fc push 0x125ceb18 */
  push32((uint32_t)(0x125ceb18u));
  /* 125a7601 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7604 push eax */
  push32((uint32_t)(EAX));
  /* 125a7605 call 0x125ab930 */
  push32(0x125a760au); f_125ab930();
  /* 125a760a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a760d:;
  /* 125a760d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a7610 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 125a7616 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a761d je 0x125a7668 */
  if (C.zf) goto L_125a7668;
  /* 125a761f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 125a7625 push edx */
  push32((uint32_t)(EDX));
  /* 125a7626 call 0x125aaf40 */
  push32(0x125a762bu); f_125aaf40();
  /* 125a762b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a762e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7631 jbe 0x125a7668 */
  if ((C.cf||C.zf)) goto L_125a7668;
  /* 125a7633 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 125a7639 push eax */
  push32((uint32_t)(EAX));
  /* 125a763a call 0x125aaf40 */
  push32(0x125a763fu); f_125aaf40();
  /* 125a763f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7642 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 125a7648 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 125a764c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 125a7652 push 3 */
  push32((uint32_t)(0x3u));
  /* 125a7654 push 0x125ceb18 */
  push32((uint32_t)(0x125ceb18u));
  /* 125a7659 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 125a765f push eax */
  push32((uint32_t)(EAX));
  /* 125a7660 call 0x125ab930 */
  push32(0x125a7665u); f_125ab930();
  /* 125a7665 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7668:;
  /* 125a7668 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a766c jne 0x125a767a */
  if (!C.zf) goto L_125a767a;
  /* 125a766e mov dword ptr [ebp - 0x1114], 0x125ceaa4 */
  w32((uint32_t)(EBP + -0x1114), (0x125ceaa4u));
  /* 125a7678 jmp 0x125a7684 */
  goto L_125a7684;
L_125a767a:;
  /* 125a767a mov dword ptr [ebp - 0x1114], 0x125ce844 */
  w32((uint32_t)(EBP + -0x1114), (0x125ce844u));
L_125a7684:;
  /* 125a7684 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a7687 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125a768a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a768c je 0x125a7699 */
  if (C.zf) goto L_125a7699;
  /* 125a768e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a7691 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 125a7697 jmp 0x125a76a3 */
  goto L_125a76a3;
L_125a7699:;
  /* 125a7699 mov dword ptr [ebp - 0x1118], 0x125ce844 */
  w32((uint32_t)(EBP + -0x1118), (0x125ce844u));
L_125a76a3:;
  /* 125a76a3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a76a6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125a76a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a76ab je 0x125a76bf */
  if (C.zf) goto L_125a76bf;
  /* 125a76ad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a76b1 jne 0x125a76bf */
  if (!C.zf) goto L_125a76bf;
  /* 125a76b3 mov dword ptr [ebp - 0x111c], 0x125cea94 */
  w32((uint32_t)(EBP + -0x111c), (0x125cea94u));
  /* 125a76bd jmp 0x125a76c9 */
  goto L_125a76c9;
L_125a76bf:;
  /* 125a76bf mov dword ptr [ebp - 0x111c], 0x125ce844 */
  w32((uint32_t)(EBP + -0x111c), (0x125ce844u));
L_125a76c9:;
  /* 125a76c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a76cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125a76cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a76d1 je 0x125a76df */
  if (C.zf) goto L_125a76df;
  /* 125a76d3 mov dword ptr [ebp - 0x1120], 0x125cea90 */
  w32((uint32_t)(EBP + -0x1120), (0x125cea90u));
  /* 125a76dd jmp 0x125a76e9 */
  goto L_125a76e9;
L_125a76df:;
  /* 125a76df mov dword ptr [ebp - 0x1120], 0x125ce844 */
  w32((uint32_t)(EBP + -0x1120), (0x125ce844u));
L_125a76e9:;
  /* 125a76e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a76ed je 0x125a76fa */
  if (C.zf) goto L_125a76fa;
  /* 125a76ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a76f2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 125a76f8 jmp 0x125a7704 */
  goto L_125a7704;
L_125a76fa:;
  /* 125a76fa mov dword ptr [ebp - 0x1124], 0x125ce844 */
  w32((uint32_t)(EBP + -0x1124), (0x125ce844u));
L_125a7704:;
  /* 125a7704 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7708 je 0x125a7716 */
  if (C.zf) goto L_125a7716;
  /* 125a770a mov dword ptr [ebp - 0x1128], 0x125cea88 */
  w32((uint32_t)(EBP + -0x1128), (0x125cea88u));
  /* 125a7714 jmp 0x125a7720 */
  goto L_125a7720;
L_125a7716:;
  /* 125a7716 mov dword ptr [ebp - 0x1128], 0x125ce844 */
  w32((uint32_t)(EBP + -0x1128), (0x125ce844u));
L_125a7720:;
  /* 125a7720 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7724 je 0x125a7731 */
  if (C.zf) goto L_125a7731;
  /* 125a7726 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a7729 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 125a772f jmp 0x125a773b */
  goto L_125a773b;
L_125a7731:;
  /* 125a7731 mov dword ptr [ebp - 0x112c], 0x125ce844 */
  w32((uint32_t)(EBP + -0x112c), (0x125ce844u));
L_125a773b:;
  /* 125a773b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a773f je 0x125a774d */
  if (C.zf) goto L_125a774d;
  /* 125a7741 mov dword ptr [ebp - 0x1130], 0x125cea80 */
  w32((uint32_t)(EBP + -0x1130), (0x125cea80u));
  /* 125a774b jmp 0x125a7757 */
  goto L_125a7757;
L_125a774d:;
  /* 125a774d mov dword ptr [ebp - 0x1130], 0x125ce844 */
  w32((uint32_t)(EBP + -0x1130), (0x125ce844u));
L_125a7757:;
  /* 125a7757 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a775e je 0x125a776e */
  if (C.zf) goto L_125a776e;
  /* 125a7760 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 125a7766 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 125a776c jmp 0x125a7778 */
  goto L_125a7778;
L_125a776e:;
  /* 125a776e mov dword ptr [ebp - 0x1134], 0x125ce844 */
  w32((uint32_t)(EBP + -0x1134), (0x125ce844u));
L_125a7778:;
  /* 125a7778 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a777f je 0x125a778d */
  if (C.zf) goto L_125a778d;
  /* 125a7781 mov dword ptr [ebp - 0x1138], 0x125cea74 */
  w32((uint32_t)(EBP + -0x1138), (0x125cea74u));
  /* 125a778b jmp 0x125a7797 */
  goto L_125a7797;
L_125a778d:;
  /* 125a778d mov dword ptr [ebp - 0x1138], 0x125ce844 */
  w32((uint32_t)(EBP + -0x1138), (0x125ce844u));
L_125a7797:;
  /* 125a7797 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 125a779d push edx */
  push32((uint32_t)(EDX));
  /* 125a779e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 125a77a4 push eax */
  push32((uint32_t)(EAX));
  /* 125a77a5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 125a77ab push ecx */
  push32((uint32_t)(ECX));
  /* 125a77ac mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 125a77b2 push edx */
  push32((uint32_t)(EDX));
  /* 125a77b3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 125a77b9 push eax */
  push32((uint32_t)(EAX));
  /* 125a77ba mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 125a77c0 push ecx */
  push32((uint32_t)(ECX));
  /* 125a77c1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 125a77c7 push edx */
  push32((uint32_t)(EDX));
  /* 125a77c8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 125a77ce push eax */
  push32((uint32_t)(EAX));
  /* 125a77cf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 125a77d5 push ecx */
  push32((uint32_t)(ECX));
  /* 125a77d6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 125a77dc push edx */
  push32((uint32_t)(EDX));
  /* 125a77dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a77e0 push eax */
  push32((uint32_t)(EAX));
  /* 125a77e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a77e4 mov edx, dword ptr [ecx*4 + 0x125d1a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d1a50)));
  /* 125a77eb push edx */
  push32((uint32_t)(EDX));
  /* 125a77ec push 0x125cea20 */
  push32((uint32_t)(0x125cea20u));
  /* 125a77f1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 125a77f6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 125a77fc push eax */
  push32((uint32_t)(EAX));
  /* 125a77fd call 0x125aafc0 */
  push32(0x125a7802u); f_125aafc0();
  /* 125a7802 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7805 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a7807 jge 0x125a781d */
  if ((C.sf==C.of)) goto L_125a781d;
  /* 125a7809 push 0x125ce984 */
  push32((uint32_t)(0x125ce984u));
  /* 125a780e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 125a7814 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7815 call 0x125ab0c0 */
  push32(0x125a781au); f_125ab0c0();
  /* 125a781a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a781d:;
  /* 125a781d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 125a7822 push 0x125ce9fc */
  push32((uint32_t)(0x125ce9fcu));
  /* 125a7827 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 125a782d push edx */
  push32((uint32_t)(EDX));
  /* 125a782e call 0x125ab870 */
  push32(0x125a7833u); f_125ab870();
  /* 125a7833 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7836 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 125a783c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7843 jne 0x125a7856 */
  if (!C.zf) goto L_125a7856;
  /* 125a7845 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 125a7847 call 0x125ab5b0 */
  push32(0x125a784cu); f_125ab5b0();
  /* 125a784c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a784f push 3 */
  push32((uint32_t)(0x3u));
  /* 125a7851 call 0x125a78d0 */
  push32(0x125a7856u); f_125a78d0();
L_125a7856:;
  /* 125a7856 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a785d jne 0x125a7866 */
  if (!C.zf) goto L_125a7866;
  /* 125a785f mov eax, 1 */
  EAX = (0x1u);
  /* 125a7864 jmp 0x125a7868 */
  goto L_125a7868;
L_125a7866:;
  /* 125a7866 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125a7868:;
  /* 125a7868 mov esp, ebp */
  ESP = (EBP);
  /* 125a786a pop ebp */
  EBP = (pop32());
  /* 125a786b ret  */
  ESPCHK(0x125a7560u, _esp0);
  ESP += 4; return;
}

/* FUN_10007870 @ 0x125a7870 (56 bytes, 15 insns) */
void f_125a7870(void) {
  FTRACE(0x125a7870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7870 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7871 mov ebp, esp */
  EBP = (ESP);
  /* 125a7873 cmp dword ptr [0x125d541c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d541c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a787a je 0x125a7882 */
  if (C.zf) goto L_125a7882;
  /* 125a787c call dword ptr [0x125d541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d541c))), 0x125a7882u);
L_125a7882:;
  /* 125a7882 push 0x125d1418 */
  push32((uint32_t)(0x125d1418u));
  /* 125a7887 push 0x125d1208 */
  push32((uint32_t)(0x125d1208u));
  /* 125a788c call 0x125a7a40 */
  push32(0x125a7891u); f_125a7a40();
  /* 125a7891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7894 push 0x125d1104 */
  push32((uint32_t)(0x125d1104u));
  /* 125a7899 push 0x125d1000 */
  push32((uint32_t)(0x125d1000u));
  /* 125a789e call 0x125a7a40 */
  push32(0x125a78a3u); f_125a7a40();
  /* 125a78a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a78a6 pop ebp */
  EBP = (pop32());
  /* 125a78a7 ret  */
  ESPCHK(0x125a7870u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b0 @ 0x125a78b0 (21 bytes, 10 insns) */
void f_125a78b0(void) {
  FTRACE(0x125a78b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a78b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a78b1 mov ebp, esp */
  EBP = (ESP);
  /* 125a78b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a78b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a78b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a78ba push eax */
  push32((uint32_t)(EAX));
  /* 125a78bb call 0x125a7930 */
  push32(0x125a78c0u); f_125a7930();
  /* 125a78c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a78c3 pop ebp */
  EBP = (pop32());
  /* 125a78c4 ret  */
  ESPCHK(0x125a78b0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x125a78d0 (21 bytes, 10 insns) */
void f_125a78d0(void) {
  FTRACE(0x125a78d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a78d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a78d1 mov ebp, esp */
  EBP = (ESP);
  /* 125a78d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a78d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a78d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a78da push eax */
  push32((uint32_t)(EAX));
  /* 125a78db call 0x125a7930 */
  push32(0x125a78e0u); f_125a7930();
  /* 125a78e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a78e3 pop ebp */
  EBP = (pop32());
  /* 125a78e4 ret  */
  ESPCHK(0x125a78d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x125a78f0 (19 bytes, 9 insns) */
void f_125a78f0(void) {
  FTRACE(0x125a78f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a78f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a78f1 mov ebp, esp */
  EBP = (ESP);
  /* 125a78f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a78f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a78f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a78f9 call 0x125a7930 */
  push32(0x125a78feu); f_125a7930();
  /* 125a78fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7901 pop ebp */
  EBP = (pop32());
  /* 125a7902 ret  */
  ESPCHK(0x125a78f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007910 @ 0x125a7910 (19 bytes, 9 insns) */
void f_125a7910(void) {
  FTRACE(0x125a7910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7910 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7911 mov ebp, esp */
  EBP = (ESP);
  /* 125a7913 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a7915 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a7917 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a7919 call 0x125a7930 */
  push32(0x125a791eu); f_125a7930();
  /* 125a791e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7921 pop ebp */
  EBP = (pop32());
  /* 125a7922 ret  */
  ESPCHK(0x125a7910u, _esp0);
  ESP += 4; return;
}

/* FUN_10007930 @ 0x125a7930 (227 bytes, 61 insns) */
void f_125a7930(void) {
  FTRACE(0x125a7930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7930 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7931 mov ebp, esp */
  EBP = (ESP);
  /* 125a7933 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7934 call 0x125a7a20 */
  push32(0x125a7939u); f_125a7a20();
  /* 125a7939 cmp dword ptr [0x125d391c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d391c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7940 jne 0x125a7953 */
  if (!C.zf) goto L_125a7953;
  /* 125a7942 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7945 push eax */
  push32((uint32_t)(EAX));
  /* 125a7946 call dword ptr [0x125d6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6398))), 0x125a794cu);
  /* 125a794c push eax */
  push32((uint32_t)(EAX));
  /* 125a794d call dword ptr [0x125d6394] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6394))), 0x125a7953u);
L_125a7953:;
  /* 125a7953 mov dword ptr [0x125d3918], 1 */
  w32((uint32_t)(0x125d3918), (0x1u));
  /* 125a795d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 125a7960 mov byte ptr [0x125d3914], cl */
  w8((uint32_t)(0x125d3914), (CL));
  /* 125a7966 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a796a jne 0x125a79b3 */
  if (!C.zf) goto L_125a79b3;
  /* 125a796c cmp dword ptr [0x125d5418], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d5418))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7973 je 0x125a79a1 */
  if (C.zf) goto L_125a79a1;
  /* 125a7975 mov edx, dword ptr [0x125d5414] */
  EDX = (r32((uint32_t)(0x125d5414)));
  /* 125a797b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125a797e:;
  /* 125a797e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7981 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a7984 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a7987 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a798a cmp ecx, dword ptr [0x125d5418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d5418))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7990 jb 0x125a79a1 */
  if (C.cf) goto L_125a79a1;
  /* 125a7992 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7995 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7998 je 0x125a799f */
  if (C.zf) goto L_125a799f;
  /* 125a799a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a799d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x125a799fu);
L_125a799f:;
  /* 125a799f jmp 0x125a797e */
  goto L_125a797e;
L_125a79a1:;
  /* 125a79a1 push 0x125d1724 */
  push32((uint32_t)(0x125d1724u));
  /* 125a79a6 push 0x125d151c */
  push32((uint32_t)(0x125d151cu));
  /* 125a79ab call 0x125a7a40 */
  push32(0x125a79b0u); f_125a7a40();
  /* 125a79b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a79b3:;
  /* 125a79b3 push 0x125d192c */
  push32((uint32_t)(0x125d192cu));
  /* 125a79b8 push 0x125d1828 */
  push32((uint32_t)(0x125d1828u));
  /* 125a79bd call 0x125a7a40 */
  push32(0x125a79c2u); f_125a7a40();
  /* 125a79c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a79c5 cmp dword ptr [0x125d3920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a79cc jne 0x125a79ee */
  if (!C.zf) goto L_125a79ee;
  /* 125a79ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125a79d0 call 0x125a9620 */
  push32(0x125a79d5u); f_125a9620();
  /* 125a79d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a79d8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 125a79db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a79dd je 0x125a79ee */
  if (C.zf) goto L_125a79ee;
  /* 125a79df mov dword ptr [0x125d3920], 1 */
  w32((uint32_t)(0x125d3920), (0x1u));
  /* 125a79e9 call 0x125a9f30 */
  push32(0x125a79eeu); f_125a9f30();
L_125a79ee:;
  /* 125a79ee cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a79f2 je 0x125a79fb */
  if (C.zf) goto L_125a79fb;
  /* 125a79f4 call 0x125a7a30 */
  push32(0x125a79f9u); f_125a7a30();
  /* 125a79f9 jmp 0x125a7a0f */
  goto L_125a7a0f;
L_125a79fb:;
  /* 125a79fb mov dword ptr [0x125d391c], 1 */
  w32((uint32_t)(0x125d391c), (0x1u));
  /* 125a7a05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7a08 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7a09 call dword ptr [0x125d6390] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6390))), 0x125a7a0fu);
L_125a7a0f:;
  /* 125a7a0f mov esp, ebp */
  ESP = (EBP);
  /* 125a7a11 pop ebp */
  EBP = (pop32());
  /* 125a7a12 ret  */
  ESPCHK(0x125a7930u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a20 @ 0x125a7a20 (15 bytes, 7 insns) */
void f_125a7a20(void) {
  FTRACE(0x125a7a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7a20 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7a21 mov ebp, esp */
  EBP = (ESP);
  /* 125a7a23 push 0xd */
  push32((uint32_t)(0xdu));
  /* 125a7a25 call 0x125abb10 */
  push32(0x125a7a2au); f_125abb10();
  /* 125a7a2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7a2d pop ebp */
  EBP = (pop32());
  /* 125a7a2e ret  */
  ESPCHK(0x125a7a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a30 @ 0x125a7a30 (15 bytes, 7 insns) */
void f_125a7a30(void) {
  FTRACE(0x125a7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7a31 mov ebp, esp */
  EBP = (ESP);
  /* 125a7a33 push 0xd */
  push32((uint32_t)(0xdu));
  /* 125a7a35 call 0x125abbb0 */
  push32(0x125a7a3au); f_125abbb0();
  /* 125a7a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7a3d pop ebp */
  EBP = (pop32());
  /* 125a7a3e ret  */
  ESPCHK(0x125a7a30u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x125a7a40 (37 bytes, 16 insns) */
void f_125a7a40(void) {
  FTRACE(0x125a7a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7a40 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7a41 mov ebp, esp */
  EBP = (ESP);
L_125a7a43:;
  /* 125a7a43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7a46 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7a49 jae 0x125a7a63 */
  if (!C.cf) goto L_125a7a63;
  /* 125a7a4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7a4e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7a51 je 0x125a7a58 */
  if (C.zf) goto L_125a7a58;
  /* 125a7a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7a56 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x125a7a58u);
L_125a7a58:;
  /* 125a7a58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7a5b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7a5e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125a7a61 jmp 0x125a7a43 */
  goto L_125a7a43;
L_125a7a63:;
  /* 125a7a63 pop ebp */
  EBP = (pop32());
  /* 125a7a64 ret  */
  ESPCHK(0x125a7a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a70 @ 0x125a7a70 (130 bytes, 42 insns) */
void f_125a7a70(void) {
  FTRACE(0x125a7a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7a70 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7a71 mov ebp, esp */
  EBP = (ESP);
  /* 125a7a73 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7a74 call 0x125aba30 */
  push32(0x125a7a79u); f_125aba30();
  /* 125a7a79 call dword ptr [0x125d63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63a4))), 0x125a7a7fu);
  /* 125a7a7f mov dword ptr [0x125d1a5c], eax */
  w32((uint32_t)(0x125d1a5c), (EAX));
  /* 125a7a84 cmp dword ptr [0x125d1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7a8b jne 0x125a7a91 */
  if (!C.zf) goto L_125a7a91;
  /* 125a7a8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a7a8f jmp 0x125a7aee */
  goto L_125a7aee;
L_125a7a91:;
  /* 125a7a91 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 125a7a93 push 0x125ceb58 */
  push32((uint32_t)(0x125ceb58u));
  /* 125a7a98 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7a9a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 125a7a9c push 1 */
  push32((uint32_t)(0x1u));
  /* 125a7a9e call 0x125a8520 */
  push32(0x125a7aa3u); f_125a8520();
  /* 125a7aa3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7aa6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a7aa9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7aad je 0x125a7ac4 */
  if (C.zf) goto L_125a7ac4;
  /* 125a7aaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7ab2 push eax */
  push32((uint32_t)(EAX));
  /* 125a7ab3 mov ecx, dword ptr [0x125d1a5c] */
  ECX = (r32((uint32_t)(0x125d1a5c)));
  /* 125a7ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7aba call dword ptr [0x125d62bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62bc))), 0x125a7ac0u);
  /* 125a7ac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a7ac2 jne 0x125a7ac8 */
  if (!C.zf) goto L_125a7ac8;
L_125a7ac4:;
  /* 125a7ac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a7ac6 jmp 0x125a7aee */
  goto L_125a7aee;
L_125a7ac8:;
  /* 125a7ac8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7acb push edx */
  push32((uint32_t)(EDX));
  /* 125a7acc call 0x125a7b30 */
  push32(0x125a7ad1u); f_125a7b30();
  /* 125a7ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7ad4 call dword ptr [0x125d62b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62b8))), 0x125a7adau);
  /* 125a7ada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7add mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125a7adf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7ae2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 125a7ae9 mov eax, 1 */
  EAX = (0x1u);
L_125a7aee:;
  /* 125a7aee mov esp, ebp */
  ESP = (EBP);
  /* 125a7af0 pop ebp */
  EBP = (pop32());
  /* 125a7af1 ret  */
  ESPCHK(0x125a7a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b00 @ 0x125a7b00 (41 bytes, 11 insns) */
void f_125a7b00(void) {
  FTRACE(0x125a7b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7b00 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7b01 mov ebp, esp */
  EBP = (ESP);
  /* 125a7b03 call 0x125aba70 */
  push32(0x125a7b08u); f_125aba70();
  /* 125a7b08 cmp dword ptr [0x125d1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7b0f je 0x125a7b27 */
  if (C.zf) goto L_125a7b27;
  /* 125a7b11 mov eax, dword ptr [0x125d1a5c] */
  EAX = (r32((uint32_t)(0x125d1a5c)));
  /* 125a7b16 push eax */
  push32((uint32_t)(EAX));
  /* 125a7b17 call dword ptr [0x125d63a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63a8))), 0x125a7b1du);
  /* 125a7b1d mov dword ptr [0x125d1a5c], 0xffffffff */
  w32((uint32_t)(0x125d1a5c), (0xffffffffu));
L_125a7b27:;
  /* 125a7b27 pop ebp */
  EBP = (pop32());
  /* 125a7b28 ret  */
  ESPCHK(0x125a7b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b30 @ 0x125a7b30 (25 bytes, 8 insns) */
void f_125a7b30(void) {
  FTRACE(0x125a7b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7b30 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7b31 mov ebp, esp */
  EBP = (ESP);
  /* 125a7b33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7b36 mov dword ptr [eax + 0x50], 0x125d1c00 */
  w32((uint32_t)(EAX + 0x50), (0x125d1c00u));
  /* 125a7b3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7b40 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 125a7b47 pop ebp */
  EBP = (pop32());
  /* 125a7b48 ret  */
  ESPCHK(0x125a7b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b50 @ 0x125a7b50 (152 bytes, 48 insns) */
void f_125a7b50(void) {
  FTRACE(0x125a7b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7b50 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7b51 mov ebp, esp */
  EBP = (ESP);
  /* 125a7b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a7b56 call dword ptr [0x125d63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b4))), 0x125a7b5cu);
  /* 125a7b5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125a7b5f mov eax, dword ptr [0x125d1a5c] */
  EAX = (r32((uint32_t)(0x125d1a5c)));
  /* 125a7b64 push eax */
  push32((uint32_t)(EAX));
  /* 125a7b65 call dword ptr [0x125d63b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b0))), 0x125a7b6bu);
  /* 125a7b6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a7b6e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7b72 jne 0x125a7bd7 */
  if (!C.zf) goto L_125a7bd7;
  /* 125a7b74 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 125a7b79 push 0x125ceb58 */
  push32((uint32_t)(0x125ceb58u));
  /* 125a7b7e push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7b80 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 125a7b82 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a7b84 call 0x125a8520 */
  push32(0x125a7b89u); f_125a8520();
  /* 125a7b89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7b8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a7b8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7b93 je 0x125a7bcd */
  if (C.zf) goto L_125a7bcd;
  /* 125a7b95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7b98 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7b99 mov edx, dword ptr [0x125d1a5c] */
  EDX = (r32((uint32_t)(0x125d1a5c)));
  /* 125a7b9f push edx */
  push32((uint32_t)(EDX));
  /* 125a7ba0 call dword ptr [0x125d62bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62bc))), 0x125a7ba6u);
  /* 125a7ba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a7ba8 je 0x125a7bcd */
  if (C.zf) goto L_125a7bcd;
  /* 125a7baa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7bad push eax */
  push32((uint32_t)(EAX));
  /* 125a7bae call 0x125a7b30 */
  push32(0x125a7bb3u); f_125a7b30();
  /* 125a7bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7bb6 call dword ptr [0x125d62b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62b8))), 0x125a7bbcu);
  /* 125a7bbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7bbf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125a7bc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7bc4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 125a7bcb jmp 0x125a7bd7 */
  goto L_125a7bd7;
L_125a7bcd:;
  /* 125a7bcd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 125a7bcf call 0x125a7080 */
  push32(0x125a7bd4u); f_125a7080();
  /* 125a7bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7bd7:;
  /* 125a7bd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a7bda push eax */
  push32((uint32_t)(EAX));
  /* 125a7bdb call dword ptr [0x125d63ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63ac))), 0x125a7be1u);
  /* 125a7be1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7be4 mov esp, ebp */
  ESP = (EBP);
  /* 125a7be6 pop ebp */
  EBP = (pop32());
  /* 125a7be7 ret  */
  ESPCHK(0x125a7b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bf0 @ 0x125a7bf0 (263 bytes, 86 insns) */
void f_125a7bf0(void) {
  FTRACE(0x125a7bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7bf1 mov ebp, esp */
  EBP = (ESP);
  /* 125a7bf3 cmp dword ptr [0x125d1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7bfa je 0x125a7cf5 */
  if (C.zf) goto L_125a7cf5;
  /* 125a7c00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7c04 jne 0x125a7c15 */
  if (!C.zf) goto L_125a7c15;
  /* 125a7c06 mov eax, dword ptr [0x125d1a5c] */
  EAX = (r32((uint32_t)(0x125d1a5c)));
  /* 125a7c0b push eax */
  push32((uint32_t)(EAX));
  /* 125a7c0c call dword ptr [0x125d63b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b0))), 0x125a7c12u);
  /* 125a7c12 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125a7c15:;
  /* 125a7c15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7c19 je 0x125a7ce6 */
  if (C.zf) goto L_125a7ce6;
  /* 125a7c1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7c22 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7c26 je 0x125a7c39 */
  if (C.zf) goto L_125a7c39;
  /* 125a7c28 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7c2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7c2d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 125a7c30 push eax */
  push32((uint32_t)(EAX));
  /* 125a7c31 call 0x125a8ba0 */
  push32(0x125a7c36u); f_125a8ba0();
  /* 125a7c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7c39:;
  /* 125a7c39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7c3c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7c40 je 0x125a7c53 */
  if (C.zf) goto L_125a7c53;
  /* 125a7c42 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7c44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7c47 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 125a7c4a push eax */
  push32((uint32_t)(EAX));
  /* 125a7c4b call 0x125a8ba0 */
  push32(0x125a7c50u); f_125a8ba0();
  /* 125a7c50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7c53:;
  /* 125a7c53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7c56 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7c5a je 0x125a7c6d */
  if (C.zf) goto L_125a7c6d;
  /* 125a7c5c push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7c5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7c61 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 125a7c64 push eax */
  push32((uint32_t)(EAX));
  /* 125a7c65 call 0x125a8ba0 */
  push32(0x125a7c6au); f_125a8ba0();
  /* 125a7c6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7c6d:;
  /* 125a7c6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7c70 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7c74 je 0x125a7c87 */
  if (C.zf) goto L_125a7c87;
  /* 125a7c76 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7c78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7c7b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 125a7c7e push eax */
  push32((uint32_t)(EAX));
  /* 125a7c7f call 0x125a8ba0 */
  push32(0x125a7c84u); f_125a8ba0();
  /* 125a7c84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7c87:;
  /* 125a7c87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7c8a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7c8e je 0x125a7ca1 */
  if (C.zf) goto L_125a7ca1;
  /* 125a7c90 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7c92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7c95 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 125a7c98 push eax */
  push32((uint32_t)(EAX));
  /* 125a7c99 call 0x125a8ba0 */
  push32(0x125a7c9eu); f_125a8ba0();
  /* 125a7c9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7ca1:;
  /* 125a7ca1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7ca4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7ca8 je 0x125a7cbb */
  if (C.zf) goto L_125a7cbb;
  /* 125a7caa push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7cac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7caf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 125a7cb2 push eax */
  push32((uint32_t)(EAX));
  /* 125a7cb3 call 0x125a8ba0 */
  push32(0x125a7cb8u); f_125a8ba0();
  /* 125a7cb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7cbb:;
  /* 125a7cbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7cbe cmp dword ptr [ecx + 0x50], 0x125d1c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x125d1c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7cc5 je 0x125a7cd8 */
  if (C.zf) goto L_125a7cd8;
  /* 125a7cc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7cc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7ccc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 125a7ccf push eax */
  push32((uint32_t)(EAX));
  /* 125a7cd0 call 0x125a8ba0 */
  push32(0x125a7cd5u); f_125a8ba0();
  /* 125a7cd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7cd8:;
  /* 125a7cd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7cda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a7cdd push ecx */
  push32((uint32_t)(ECX));
  /* 125a7cde call 0x125a8ba0 */
  push32(0x125a7ce3u); f_125a8ba0();
  /* 125a7ce3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7ce6:;
  /* 125a7ce6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a7ce8 mov edx, dword ptr [0x125d1a5c] */
  EDX = (r32((uint32_t)(0x125d1a5c)));
  /* 125a7cee push edx */
  push32((uint32_t)(EDX));
  /* 125a7cef call dword ptr [0x125d62bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62bc))), 0x125a7cf5u);
L_125a7cf5:;
  /* 125a7cf5 pop ebp */
  EBP = (pop32());
  /* 125a7cf6 ret  */
  ESPCHK(0x125a7bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d00 @ 0x125a7d00 (11 bytes, 5 insns) */
void f_125a7d00(void) {
  FTRACE(0x125a7d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7d00 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7d01 mov ebp, esp */
  EBP = (ESP);
  /* 125a7d03 call dword ptr [0x125d62b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62b8))), 0x125a7d09u);
  /* 125a7d09 pop ebp */
  EBP = (pop32());
  /* 125a7d0a ret  */
  ESPCHK(0x125a7d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d10 @ 0x125a7d10 (11 bytes, 5 insns) */
void f_125a7d10(void) {
  FTRACE(0x125a7d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7d10 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7d11 mov ebp, esp */
  EBP = (ESP);
  /* 125a7d13 call dword ptr [0x125d63b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b8))), 0x125a7d19u);
  /* 125a7d19 pop ebp */
  EBP = (pop32());
  /* 125a7d1a ret  */
  ESPCHK(0x125a7d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d20 @ 0x125a7d20 (804 bytes, 236 insns) */
void f_125a7d20(void) {
  FTRACE(0x125a7d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a7d20 push ebp */
  push32((uint32_t)(EBP));
  /* 125a7d21 mov ebp, esp */
  EBP = (ESP);
  /* 125a7d23 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a7d26 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 125a7d2b push 0x125ceb64 */
  push32((uint32_t)(0x125ceb64u));
  /* 125a7d30 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7d32 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 125a7d37 call 0x125a8110 */
  push32(0x125a7d3cu); f_125a8110();
  /* 125a7d3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7d3f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 125a7d42 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7d46 jne 0x125a7d52 */
  if (!C.zf) goto L_125a7d52;
  /* 125a7d48 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 125a7d4a call 0x125a7080 */
  push32(0x125a7d4fu); f_125a7080();
  /* 125a7d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a7d52:;
  /* 125a7d52 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7d55 mov dword ptr [0x125d52c0], eax */
  w32((uint32_t)(0x125d52c0), (EAX));
  /* 125a7d5a mov dword ptr [0x125d53fc], 0x20 */
  w32((uint32_t)(0x125d53fc), (0x20u));
  /* 125a7d64 jmp 0x125a7d6f */
  goto L_125a7d6f;
L_125a7d66:;
  /* 125a7d66 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7d69 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7d6c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_125a7d6f:;
  /* 125a7d6f mov edx, dword ptr [0x125d52c0] */
  EDX = (r32((uint32_t)(0x125d52c0)));
  /* 125a7d75 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7d7b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7d7e jae 0x125a7da3 */
  if (!C.cf) goto L_125a7da3;
  /* 125a7d80 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7d83 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 125a7d87 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7d8a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 125a7d90 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7d93 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 125a7d97 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7d9a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 125a7da1 jmp 0x125a7d66 */
  goto L_125a7d66;
L_125a7da3:;
  /* 125a7da3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 125a7da6 push ecx */
  push32((uint32_t)(ECX));
  /* 125a7da7 call dword ptr [0x125d63c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63c0))), 0x125a7dadu);
  /* 125a7dad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 125a7db0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a7db6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a7db8 je 0x125a7f45 */
  if (C.zf) goto L_125a7f45;
  /* 125a7dbe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7dc2 je 0x125a7f45 */
  if (C.zf) goto L_125a7f45;
  /* 125a7dc8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125a7dcb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125a7dcd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 125a7dd0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125a7dd3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7dd6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125a7dd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7ddc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7ddf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 125a7de2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7de9 jge 0x125a7df3 */
  if ((C.sf==C.of)) goto L_125a7df3;
  /* 125a7deb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 125a7dee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 125a7df1 jmp 0x125a7dfa */
  goto L_125a7dfa;
L_125a7df3:;
  /* 125a7df3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_125a7dfa:;
  /* 125a7dfa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 125a7dfd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 125a7e00 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 125a7e07 jmp 0x125a7e12 */
  goto L_125a7e12;
L_125a7e09:;
  /* 125a7e09 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 125a7e0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7e0f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_125a7e12:;
  /* 125a7e12 mov ecx, dword ptr [0x125d53fc] */
  ECX = (r32((uint32_t)(0x125d53fc)));
  /* 125a7e18 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7e1b jge 0x125a7eb2 */
  if ((C.sf==C.of)) goto L_125a7eb2;
  /* 125a7e21 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 125a7e26 push 0x125ceb64 */
  push32((uint32_t)(0x125ceb64u));
  /* 125a7e2b push 2 */
  push32((uint32_t)(0x2u));
  /* 125a7e2d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 125a7e32 call 0x125a8110 */
  push32(0x125a7e37u); f_125a8110();
  /* 125a7e37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7e3a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 125a7e3d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7e41 jne 0x125a7e4e */
  if (!C.zf) goto L_125a7e4e;
  /* 125a7e43 mov edx, dword ptr [0x125d53fc] */
  EDX = (r32((uint32_t)(0x125d53fc)));
  /* 125a7e49 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 125a7e4c jmp 0x125a7eb2 */
  goto L_125a7eb2;
L_125a7e4e:;
  /* 125a7e4e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 125a7e51 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7e54 mov dword ptr [eax*4 + 0x125d52c0], ecx */
  w32((uint32_t)(EAX*4 + 0x125d52c0), (ECX));
  /* 125a7e5b mov edx, dword ptr [0x125d53fc] */
  EDX = (r32((uint32_t)(0x125d53fc)));
  /* 125a7e61 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7e64 mov dword ptr [0x125d53fc], edx */
  w32((uint32_t)(0x125d53fc), (EDX));
  /* 125a7e6a jmp 0x125a7e75 */
  goto L_125a7e75;
L_125a7e6c:;
  /* 125a7e6c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7e6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7e72 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_125a7e75:;
  /* 125a7e75 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 125a7e78 mov edx, dword ptr [ecx*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d52c0)));
  /* 125a7e7f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7e85 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7e88 jae 0x125a7ead */
  if (!C.cf) goto L_125a7ead;
  /* 125a7e8a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7e8d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 125a7e91 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7e94 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 125a7e9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7e9d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 125a7ea1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7ea4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 125a7eab jmp 0x125a7e6c */
  goto L_125a7e6c;
L_125a7ead:;
  /* 125a7ead jmp 0x125a7e09 */
  goto L_125a7e09;
L_125a7eb2:;
  /* 125a7eb2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 125a7eb9 jmp 0x125a7ed6 */
  goto L_125a7ed6;
L_125a7ebb:;
  /* 125a7ebb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 125a7ebe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7ec1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 125a7ec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7ec7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7eca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125a7ecd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 125a7ed0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7ed3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_125a7ed6:;
  /* 125a7ed6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 125a7ed9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7edc jge 0x125a7f45 */
  if ((C.sf==C.of)) goto L_125a7f45;
  /* 125a7ede mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 125a7ee1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7ee4 je 0x125a7f40 */
  if (C.zf) goto L_125a7f40;
  /* 125a7ee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7ee9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125a7eec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125a7eef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a7ef1 je 0x125a7f40 */
  if (C.zf) goto L_125a7f40;
  /* 125a7ef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7ef6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125a7ef9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 125a7efc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a7efe jne 0x125a7f10 */
  if (!C.zf) goto L_125a7f10;
  /* 125a7f00 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 125a7f03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125a7f05 push edx */
  push32((uint32_t)(EDX));
  /* 125a7f06 call dword ptr [0x125d63a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63a0))), 0x125a7f0cu);
  /* 125a7f0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a7f0e je 0x125a7f40 */
  if (C.zf) goto L_125a7f40;
L_125a7f10:;
  /* 125a7f10 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 125a7f13 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 125a7f16 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 125a7f19 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 125a7f1c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125a7f1f mov edx, dword ptr [eax*4 + 0x125d52c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125a7f26 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7f28 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 125a7f2b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7f2e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 125a7f31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125a7f33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125a7f35 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7f38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a7f3b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125a7f3d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_125a7f40:;
  /* 125a7f40 jmp 0x125a7ebb */
  goto L_125a7ebb;
L_125a7f45:;
  /* 125a7f45 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 125a7f4c jmp 0x125a7f57 */
  goto L_125a7f57;
L_125a7f4e:;
  /* 125a7f4e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 125a7f51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7f54 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_125a7f57:;
  /* 125a7f57 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7f5b jge 0x125a8034 */
  if ((C.sf==C.of)) goto L_125a8034;
  /* 125a7f61 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 125a7f64 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125a7f67 mov edx, dword ptr [0x125d52c0] */
  EDX = (r32((uint32_t)(0x125d52c0)));
  /* 125a7f6d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7f6f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 125a7f72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7f75 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7f78 jne 0x125a8020 */
  if (!C.zf) goto L_125a8020;
  /* 125a7f7e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7f81 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 125a7f85 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7f89 jne 0x125a7f94 */
  if (!C.zf) goto L_125a7f94;
  /* 125a7f8b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 125a7f92 jmp 0x125a7fa4 */
  goto L_125a7fa4;
L_125a7f94:;
  /* 125a7f94 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 125a7f97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a7f9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125a7f9c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a7f9e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a7fa1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_125a7fa4:;
  /* 125a7fa4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 125a7fa7 push eax */
  push32((uint32_t)(EAX));
  /* 125a7fa8 call dword ptr [0x125d6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6370))), 0x125a7faeu);
  /* 125a7fae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 125a7fb1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7fb5 je 0x125a800f */
  if (C.zf) goto L_125a800f;
  /* 125a7fb7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 125a7fba push ecx */
  push32((uint32_t)(ECX));
  /* 125a7fbb call dword ptr [0x125d63a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63a0))), 0x125a7fc1u);
  /* 125a7fc1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 125a7fc4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7fc8 je 0x125a800f */
  if (C.zf) goto L_125a800f;
  /* 125a7fca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7fcd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 125a7fd0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125a7fd2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 125a7fd5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a7fdb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7fde jne 0x125a7ff0 */
  if (!C.zf) goto L_125a7ff0;
  /* 125a7fe0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7fe3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 125a7fe6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 125a7fe8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a7feb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 125a7fee jmp 0x125a800d */
  goto L_125a800d;
L_125a7ff0:;
  /* 125a7ff0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 125a7ff3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a7ff9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a7ffc jne 0x125a800d */
  if (!C.zf) goto L_125a800d;
  /* 125a7ffe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a8001 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125a8004 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 125a8007 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a800a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_125a800d:;
  /* 125a800d jmp 0x125a801e */
  goto L_125a801e;
L_125a800f:;
  /* 125a800f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a8012 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125a8015 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 125a8018 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a801b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_125a801e:;
  /* 125a801e jmp 0x125a802f */
  goto L_125a802f;
L_125a8020:;
  /* 125a8020 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a8023 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 125a8026 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 125a8029 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a802c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_125a802f:;
  /* 125a802f jmp 0x125a7f4e */
  goto L_125a7f4e;
L_125a8034:;
  /* 125a8034 mov eax, dword ptr [0x125d53fc] */
  EAX = (r32((uint32_t)(0x125d53fc)));
  /* 125a8039 push eax */
  push32((uint32_t)(EAX));
  /* 125a803a call dword ptr [0x125d639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d639c))), 0x125a8040u);
  /* 125a8040 mov esp, ebp */
  ESP = (EBP);
  /* 125a8042 pop ebp */
  EBP = (pop32());
  /* 125a8043 ret  */
  ESPCHK(0x125a7d20u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x125a8050 (155 bytes, 45 insns) */
void f_125a8050(void) {
  FTRACE(0x125a8050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8050 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8051 mov ebp, esp */
  EBP = (ESP);
  /* 125a8053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a8056 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125a805d jmp 0x125a8068 */
  goto L_125a8068;
L_125a805f:;
  /* 125a805f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a8062 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8065 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125a8068:;
  /* 125a8068 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a806c jge 0x125a80e7 */
  if ((C.sf==C.of)) goto L_125a80e7;
  /* 125a806e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a8071 cmp dword ptr [ecx*4 + 0x125d52c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x125d52c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8079 je 0x125a80e2 */
  if (C.zf) goto L_125a80e2;
  /* 125a807b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a807e mov eax, dword ptr [edx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125d52c0)));
  /* 125a8085 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a8088 jmp 0x125a8093 */
  goto L_125a8093;
L_125a808a:;
  /* 125a808a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a808d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8090 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125a8093:;
  /* 125a8093 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a8096 mov eax, dword ptr [edx*4 + 0x125d52c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125d52c0)));
  /* 125a809d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a80a2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a80a5 jae 0x125a80bf */
  if (!C.cf) goto L_125a80bf;
  /* 125a80a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a80aa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a80ae je 0x125a80bd */
  if (C.zf) goto L_125a80bd;
  /* 125a80b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a80b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a80b6 push edx */
  push32((uint32_t)(EDX));
  /* 125a80b7 call dword ptr [0x125d63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63c4))), 0x125a80bdu);
L_125a80bd:;
  /* 125a80bd jmp 0x125a808a */
  goto L_125a808a;
L_125a80bf:;
  /* 125a80bf push 2 */
  push32((uint32_t)(0x2u));
  /* 125a80c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a80c4 mov ecx, dword ptr [eax*4 + 0x125d52c0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x125d52c0)));
  /* 125a80cb push ecx */
  push32((uint32_t)(ECX));
  /* 125a80cc call 0x125a8ba0 */
  push32(0x125a80d1u); f_125a8ba0();
  /* 125a80d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a80d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a80d7 mov dword ptr [edx*4 + 0x125d52c0], 0 */
  w32((uint32_t)(EDX*4 + 0x125d52c0), (0x0u));
L_125a80e2:;
  /* 125a80e2 jmp 0x125a805f */
  goto L_125a805f;
L_125a80e7:;
  /* 125a80e7 mov esp, ebp */
  ESP = (EBP);
  /* 125a80e9 pop ebp */
  EBP = (pop32());
  /* 125a80ea ret  */
  ESPCHK(0x125a8050u, _esp0);
  ESP += 4; return;
}

/* FUN_100080f0 @ 0x125a80f0 (29 bytes, 13 insns) */
void f_125a80f0(void) {
  FTRACE(0x125a80f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a80f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a80f1 mov ebp, esp */
  EBP = (ESP);
  /* 125a80f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a80f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a80f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a80f9 mov eax, dword ptr [0x125d3ac8] */
  EAX = (r32((uint32_t)(0x125d3ac8)));
  /* 125a80fe push eax */
  push32((uint32_t)(EAX));
  /* 125a80ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8102 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8103 call 0x125a8160 */
  push32(0x125a8108u); f_125a8160();
  /* 125a8108 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a810b pop ebp */
  EBP = (pop32());
  /* 125a810c ret  */
  ESPCHK(0x125a80f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008110 @ 0x125a8110 (35 bytes, 16 insns) */
void f_125a8110(void) {
  FTRACE(0x125a8110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8110 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8111 mov ebp, esp */
  EBP = (ESP);
  /* 125a8113 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a8116 push eax */
  push32((uint32_t)(EAX));
  /* 125a8117 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a811a push ecx */
  push32((uint32_t)(ECX));
  /* 125a811b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a811e push edx */
  push32((uint32_t)(EDX));
  /* 125a811f mov eax, dword ptr [0x125d3ac8] */
  EAX = (r32((uint32_t)(0x125d3ac8)));
  /* 125a8124 push eax */
  push32((uint32_t)(EAX));
  /* 125a8125 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8128 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8129 call 0x125a8160 */
  push32(0x125a812eu); f_125a8160();
  /* 125a812e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8131 pop ebp */
  EBP = (pop32());
  /* 125a8132 ret  */
  ESPCHK(0x125a8110u, _esp0);
  ESP += 4; return;
}

/* FUN_10008140 @ 0x125a8140 (27 bytes, 13 insns) */
void f_125a8140(void) {
  FTRACE(0x125a8140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8140 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8141 mov ebp, esp */
  EBP = (ESP);
  /* 125a8143 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8145 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8147 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8149 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a814c push eax */
  push32((uint32_t)(EAX));
  /* 125a814d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8150 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8151 call 0x125a8160 */
  push32(0x125a8156u); f_125a8160();
  /* 125a8156 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8159 pop ebp */
  EBP = (pop32());
  /* 125a815a ret  */
  ESPCHK(0x125a8140u, _esp0);
  ESP += 4; return;
}

/* FUN_10008160 @ 0x125a8160 (94 bytes, 38 insns) */
void f_125a8160(void) {
  FTRACE(0x125a8160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8160 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8161 mov ebp, esp */
  EBP = (ESP);
  /* 125a8163 push ecx */
  push32((uint32_t)(ECX));
L_125a8164:;
  /* 125a8164 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a8166 call 0x125abb10 */
  push32(0x125a816bu); f_125abb10();
  /* 125a816b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a816e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a8171 push eax */
  push32((uint32_t)(EAX));
  /* 125a8172 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a8175 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8176 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a8179 push edx */
  push32((uint32_t)(EDX));
  /* 125a817a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a817d push eax */
  push32((uint32_t)(EAX));
  /* 125a817e call 0x125a81e0 */
  push32(0x125a8183u); f_125a81e0();
  /* 125a8183 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8186 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a8189 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a818b call 0x125abbb0 */
  push32(0x125a8190u); f_125abbb0();
  /* 125a8190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8193 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8197 jne 0x125a819f */
  if (!C.zf) goto L_125a819f;
  /* 125a8199 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a819d jne 0x125a81a4 */
  if (!C.zf) goto L_125a81a4;
L_125a819f:;
  /* 125a819f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a81a2 jmp 0x125a81ba */
  goto L_125a81ba;
L_125a81a4:;
  /* 125a81a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a81a7 push ecx */
  push32((uint32_t)(ECX));
  /* 125a81a8 call 0x125abe50 */
  push32(0x125a81adu); f_125abe50();
  /* 125a81ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a81b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a81b2 jne 0x125a81b8 */
  if (!C.zf) goto L_125a81b8;
  /* 125a81b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a81b6 jmp 0x125a81ba */
  goto L_125a81ba;
L_125a81b8:;
  /* 125a81b8 jmp 0x125a8164 */
  goto L_125a8164;
L_125a81ba:;
  /* 125a81ba mov esp, ebp */
  ESP = (EBP);
  /* 125a81bc pop ebp */
  EBP = (pop32());
  /* 125a81bd ret  */
  ESPCHK(0x125a8160u, _esp0);
  ESP += 4; return;
}

/* FUN_100081c0 @ 0x125a81c0 (23 bytes, 11 insns) */
void f_125a81c0(void) {
  FTRACE(0x125a81c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a81c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a81c1 mov ebp, esp */
  EBP = (ESP);
  /* 125a81c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a81c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a81c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a81c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a81cc push eax */
  push32((uint32_t)(EAX));
  /* 125a81cd call 0x125a81e0 */
  push32(0x125a81d2u); f_125a81e0();
  /* 125a81d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a81d5 pop ebp */
  EBP = (pop32());
  /* 125a81d6 ret  */
  ESPCHK(0x125a81c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081e0 @ 0x125a81e0 (787 bytes, 254 insns) */
void f_125a81e0(void) {
  FTRACE(0x125a81e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a81e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a81e1 mov ebp, esp */
  EBP = (ESP);
  /* 125a81e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a81e6 push ebx */
  push32((uint32_t)(EBX));
  /* 125a81e7 push esi */
  push32((uint32_t)(ESI));
  /* 125a81e8 push edi */
  push32((uint32_t)(EDI));
  /* 125a81e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125a81f0 mov eax, dword ptr [0x125d1a84] */
  EAX = (r32((uint32_t)(0x125d1a84)));
  /* 125a81f5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125a81f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a81fa je 0x125a822c */
  if (C.zf) goto L_125a822c;
L_125a81fc:;
  /* 125a81fc call 0x125a92b0 */
  push32(0x125a8201u); f_125a92b0();
  /* 125a8201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8203 jne 0x125a8226 */
  if (!C.zf) goto L_125a8226;
  /* 125a8205 push 0x125cec58 */
  push32((uint32_t)(0x125cec58u));
  /* 125a820a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a820c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 125a8211 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8216 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a8218 call 0x125a71d0 */
  push32(0x125a821du); f_125a71d0();
  /* 125a821d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8220 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8223 jne 0x125a8226 */
  if (!C.zf) goto L_125a8226;
  /* 125a8225 int3  */
  x86_unimpl("int3 @ 0x125a8225");
L_125a8226:;
  /* 125a8226 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8228 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a822a jne 0x125a81fc */
  if (!C.zf) goto L_125a81fc;
L_125a822c:;
  /* 125a822c mov edx, dword ptr [0x125d1a88] */
  EDX = (r32((uint32_t)(0x125d1a88)));
  /* 125a8232 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125a8235 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a8238 cmp eax, dword ptr [0x125d1a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d1a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a823e jne 0x125a8241 */
  if (!C.zf) goto L_125a8241;
  /* 125a8240 int3  */
  x86_unimpl("int3 @ 0x125a8240");
L_125a8241:;
  /* 125a8241 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a8244 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8245 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a8248 push edx */
  push32((uint32_t)(EDX));
  /* 125a8249 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a824c push eax */
  push32((uint32_t)(EAX));
  /* 125a824d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8250 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8254 push edx */
  push32((uint32_t)(EDX));
  /* 125a8255 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8257 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8259 call dword ptr [0x125d1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d1c90))), 0x125a825fu);
  /* 125a825f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8262 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8264 jne 0x125a82c4 */
  if (!C.zf) goto L_125a82c4;
  /* 125a8266 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a826a je 0x125a8297 */
  if (C.zf) goto L_125a8297;
L_125a826c:;
  /* 125a826c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a826f push eax */
  push32((uint32_t)(EAX));
  /* 125a8270 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a8273 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8274 push 0x125cec14 */
  push32((uint32_t)(0x125cec14u));
  /* 125a8279 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a827b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a827d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a827f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8281 call 0x125a71d0 */
  push32(0x125a8286u); f_125a71d0();
  /* 125a8286 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8289 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a828c jne 0x125a828f */
  if (!C.zf) goto L_125a828f;
  /* 125a828e int3  */
  x86_unimpl("int3 @ 0x125a828e");
L_125a828f:;
  /* 125a828f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a8291 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a8293 jne 0x125a826c */
  if (!C.zf) goto L_125a826c;
  /* 125a8295 jmp 0x125a82bd */
  goto L_125a82bd;
L_125a8297:;
  /* 125a8297 push 0x125cebf0 */
  push32((uint32_t)(0x125cebf0u));
  /* 125a829c push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a82a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a82a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a82a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a82a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a82a9 call 0x125a71d0 */
  push32(0x125a82aeu); f_125a71d0();
  /* 125a82ae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a82b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a82b4 jne 0x125a82b7 */
  if (!C.zf) goto L_125a82b7;
  /* 125a82b6 int3  */
  x86_unimpl("int3 @ 0x125a82b6");
L_125a82b7:;
  /* 125a82b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a82b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a82bb jne 0x125a8297 */
  if (!C.zf) goto L_125a8297;
L_125a82bd:;
  /* 125a82bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a82bf jmp 0x125a84ec */
  goto L_125a84ec;
L_125a82c4:;
  /* 125a82c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a82c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a82cd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a82d0 je 0x125a82e6 */
  if (C.zf) goto L_125a82e6;
  /* 125a82d2 mov edx, dword ptr [0x125d1a84] */
  EDX = (r32((uint32_t)(0x125d1a84)));
  /* 125a82d8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 125a82db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a82dd jne 0x125a82e6 */
  if (!C.zf) goto L_125a82e6;
  /* 125a82df mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_125a82e6:;
  /* 125a82e6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a82ea ja 0x125a82f7 */
  if ((!C.cf&&!C.zf)) goto L_125a82f7;
  /* 125a82ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a82ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a82f2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a82f5 jbe 0x125a8323 */
  if ((C.cf||C.zf)) goto L_125a8323;
L_125a82f7:;
  /* 125a82f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a82fa push ecx */
  push32((uint32_t)(ECX));
  /* 125a82fb push 0x125cebc8 */
  push32((uint32_t)(0x125cebc8u));
  /* 125a8300 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8302 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8304 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8306 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8308 call 0x125a71d0 */
  push32(0x125a830du); f_125a71d0();
  /* 125a830d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8310 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8313 jne 0x125a8316 */
  if (!C.zf) goto L_125a8316;
  /* 125a8315 int3  */
  x86_unimpl("int3 @ 0x125a8315");
L_125a8316:;
  /* 125a8316 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a8318 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a831a jne 0x125a82f7 */
  if (!C.zf) goto L_125a82f7;
  /* 125a831c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a831e jmp 0x125a84ec */
  goto L_125a84ec;
L_125a8323:;
  /* 125a8323 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8326 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a832b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a832e je 0x125a8370 */
  if (C.zf) goto L_125a8370;
  /* 125a8330 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8334 je 0x125a8370 */
  if (C.zf) goto L_125a8370;
  /* 125a8336 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8339 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a833f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8342 je 0x125a8370 */
  if (C.zf) goto L_125a8370;
  /* 125a8344 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8348 je 0x125a8370 */
  if (C.zf) goto L_125a8370;
L_125a834a:;
  /* 125a834a push 0x125ceb94 */
  push32((uint32_t)(0x125ceb94u));
  /* 125a834f push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a8354 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8356 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8358 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a835a push 1 */
  push32((uint32_t)(0x1u));
  /* 125a835c call 0x125a71d0 */
  push32(0x125a8361u); f_125a71d0();
  /* 125a8361 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8364 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8367 jne 0x125a836a */
  if (!C.zf) goto L_125a836a;
  /* 125a8369 int3  */
  x86_unimpl("int3 @ 0x125a8369");
L_125a836a:;
  /* 125a836a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a836c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a836e jne 0x125a834a */
  if (!C.zf) goto L_125a834a;
L_125a8370:;
  /* 125a8370 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8373 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8376 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125a8379 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125a837c push ecx */
  push32((uint32_t)(ECX));
  /* 125a837d call 0x125abf60 */
  push32(0x125a8382u); f_125abf60();
  /* 125a8382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8385 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a8388 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a838c jne 0x125a8395 */
  if (!C.zf) goto L_125a8395;
  /* 125a838e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a8390 jmp 0x125a84ec */
  goto L_125a84ec;
L_125a8395:;
  /* 125a8395 mov edx, dword ptr [0x125d1a88] */
  EDX = (r32((uint32_t)(0x125d1a88)));
  /* 125a839b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a839e mov dword ptr [0x125d1a88], edx */
  w32((uint32_t)(0x125d1a88), (EDX));
  /* 125a83a4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a83a8 je 0x125a83f3 */
  if (C.zf) goto L_125a83f3;
  /* 125a83aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a83ad mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125a83b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a83b6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 125a83bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a83c0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 125a83c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a83ca mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 125a83d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a83d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a83d7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 125a83da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a83dd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 125a83e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a83e7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 125a83ee jmp 0x125a8493 */
  goto L_125a8493;
L_125a83f3:;
  /* 125a83f3 mov edx, dword ptr [0x125d3928] */
  EDX = (r32((uint32_t)(0x125d3928)));
  /* 125a83f9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a83fc mov dword ptr [0x125d3928], edx */
  w32((uint32_t)(0x125d3928), (EDX));
  /* 125a8402 mov eax, dword ptr [0x125d3930] */
  EAX = (r32((uint32_t)(0x125d3930)));
  /* 125a8407 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a840a mov dword ptr [0x125d3930], eax */
  w32((uint32_t)(0x125d3930), (EAX));
  /* 125a840f mov ecx, dword ptr [0x125d3930] */
  ECX = (r32((uint32_t)(0x125d3930)));
  /* 125a8415 cmp ecx, dword ptr [0x125d3934] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d3934))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a841b jbe 0x125a8429 */
  if ((C.cf||C.zf)) goto L_125a8429;
  /* 125a841d mov edx, dword ptr [0x125d3930] */
  EDX = (r32((uint32_t)(0x125d3930)));
  /* 125a8423 mov dword ptr [0x125d3934], edx */
  w32((uint32_t)(0x125d3934), (EDX));
L_125a8429:;
  /* 125a8429 cmp dword ptr [0x125d392c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d392c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8430 je 0x125a843f */
  if (C.zf) goto L_125a843f;
  /* 125a8432 mov eax, dword ptr [0x125d392c] */
  EAX = (r32((uint32_t)(0x125d392c)));
  /* 125a8437 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a843a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 125a843d jmp 0x125a8448 */
  goto L_125a8448;
L_125a843f:;
  /* 125a843f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8442 mov dword ptr [0x125d3924], edx */
  w32((uint32_t)(0x125d3924), (EDX));
L_125a8448:;
  /* 125a8448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a844b mov ecx, dword ptr [0x125d392c] */
  ECX = (r32((uint32_t)(0x125d392c)));
  /* 125a8451 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125a8453 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8456 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 125a845d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8460 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a8463 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 125a8466 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8469 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a846c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 125a846f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8475 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 125a8478 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a847b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a847e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 125a8481 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8484 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a8487 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 125a848a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a848d mov dword ptr [0x125d392c], ecx */
  w32((uint32_t)(0x125d392c), (ECX));
L_125a8493:;
  /* 125a8493 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a8495 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a8497 mov dl, byte ptr [0x125d1a90] */
  DL = (r8((uint32_t)(0x125d1a90)));
  /* 125a849d push edx */
  push32((uint32_t)(EDX));
  /* 125a849e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a84a1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a84a4 push eax */
  push32((uint32_t)(EAX));
  /* 125a84a5 call 0x125abe80 */
  push32(0x125a84aau); f_125abe80();
  /* 125a84aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a84ad push 4 */
  push32((uint32_t)(0x4u));
  /* 125a84af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a84b1 mov cl, byte ptr [0x125d1a90] */
  CL = (r8((uint32_t)(0x125d1a90)));
  /* 125a84b7 push ecx */
  push32((uint32_t)(ECX));
  /* 125a84b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a84bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a84be lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 125a84c2 push ecx */
  push32((uint32_t)(ECX));
  /* 125a84c3 call 0x125abe80 */
  push32(0x125a84c8u); f_125abe80();
  /* 125a84c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a84cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a84ce push edx */
  push32((uint32_t)(EDX));
  /* 125a84cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a84d1 mov al, byte ptr [0x125d1a92] */
  AL = (r8((uint32_t)(0x125d1a92)));
  /* 125a84d6 push eax */
  push32((uint32_t)(EAX));
  /* 125a84d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a84da add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a84dd push ecx */
  push32((uint32_t)(ECX));
  /* 125a84de call 0x125abe80 */
  push32(0x125a84e3u); f_125abe80();
  /* 125a84e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a84e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a84e9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_125a84ec:;
  /* 125a84ec pop edi */
  EDI = (pop32());
  /* 125a84ed pop esi */
  ESI = (pop32());
  /* 125a84ee pop ebx */
  EBX = (pop32());
  /* 125a84ef mov esp, ebp */
  ESP = (EBP);
  /* 125a84f1 pop ebp */
  EBP = (pop32());
  /* 125a84f2 ret  */
  ESPCHK(0x125a81e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008500 @ 0x125a8500 (27 bytes, 13 insns) */
void f_125a8500(void) {
  FTRACE(0x125a8500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8500 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8501 mov ebp, esp */
  EBP = (ESP);
  /* 125a8503 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8505 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8507 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8509 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a850c push eax */
  push32((uint32_t)(EAX));
  /* 125a850d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8510 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8511 call 0x125a8520 */
  push32(0x125a8516u); f_125a8520();
  /* 125a8516 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8519 pop ebp */
  EBP = (pop32());
  /* 125a851a ret  */
  ESPCHK(0x125a8500u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x125a8520 (96 bytes, 37 insns) */
void f_125a8520(void) {
  FTRACE(0x125a8520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8520 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8521 mov ebp, esp */
  EBP = (ESP);
  /* 125a8523 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a8526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8529 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125a852d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 125a8530 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a8533 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8534 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a8537 push edx */
  push32((uint32_t)(EDX));
  /* 125a8538 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a853b push eax */
  push32((uint32_t)(EAX));
  /* 125a853c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a853f push ecx */
  push32((uint32_t)(ECX));
  /* 125a8540 call 0x125a8110 */
  push32(0x125a8545u); f_125a8110();
  /* 125a8545 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8548 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125a854b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a854f je 0x125a8579 */
  if (C.zf) goto L_125a8579;
  /* 125a8551 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a8554 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125a8557 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a855a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a855d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125a8560:;
  /* 125a8560 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8563 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8566 jae 0x125a8579 */
  if (!C.cf) goto L_125a8579;
  /* 125a8568 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a856b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 125a856e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8571 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8574 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125a8577 jmp 0x125a8560 */
  goto L_125a8560;
L_125a8579:;
  /* 125a8579 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a857c mov esp, ebp */
  ESP = (EBP);
  /* 125a857e pop ebp */
  EBP = (pop32());
  /* 125a857f ret  */
  ESPCHK(0x125a8520u, _esp0);
  ESP += 4; return;
}

/* FUN_10008580 @ 0x125a8580 (27 bytes, 13 insns) */
void f_125a8580(void) {
  FTRACE(0x125a8580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8580 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8581 mov ebp, esp */
  EBP = (ESP);
  /* 125a8583 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8585 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8587 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8589 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a858c push eax */
  push32((uint32_t)(EAX));
  /* 125a858d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8590 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8591 call 0x125a85a0 */
  push32(0x125a8596u); f_125a85a0();
  /* 125a8596 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8599 pop ebp */
  EBP = (pop32());
  /* 125a859a ret  */
  ESPCHK(0x125a8580u, _esp0);
  ESP += 4; return;
}

/* FUN_100085a0 @ 0x125a85a0 (64 bytes, 27 insns) */
void f_125a85a0(void) {
  FTRACE(0x125a85a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a85a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a85a1 mov ebp, esp */
  EBP = (ESP);
  /* 125a85a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125a85a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a85a6 call 0x125abb10 */
  push32(0x125a85abu); f_125abb10();
  /* 125a85ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a85ae push 1 */
  push32((uint32_t)(0x1u));
  /* 125a85b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a85b3 push eax */
  push32((uint32_t)(EAX));
  /* 125a85b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a85b7 push ecx */
  push32((uint32_t)(ECX));
  /* 125a85b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a85bb push edx */
  push32((uint32_t)(EDX));
  /* 125a85bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a85bf push eax */
  push32((uint32_t)(EAX));
  /* 125a85c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a85c3 push ecx */
  push32((uint32_t)(ECX));
  /* 125a85c4 call 0x125a85e0 */
  push32(0x125a85c9u); f_125a85e0();
  /* 125a85c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a85cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a85cf push 9 */
  push32((uint32_t)(0x9u));
  /* 125a85d1 call 0x125abbb0 */
  push32(0x125a85d6u); f_125abbb0();
  /* 125a85d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a85d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a85dc mov esp, ebp */
  ESP = (EBP);
  /* 125a85de pop ebp */
  EBP = (pop32());
  /* 125a85df ret  */
  ESPCHK(0x125a85a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085e0 @ 0x125a85e0 (1297 bytes, 431 insns) */
void f_125a85e0(void) {
  FTRACE(0x125a85e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a85e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a85e1 mov ebp, esp */
  EBP = (ESP);
  /* 125a85e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a85e6 push ebx */
  push32((uint32_t)(EBX));
  /* 125a85e7 push esi */
  push32((uint32_t)(ESI));
  /* 125a85e8 push edi */
  push32((uint32_t)(EDI));
  /* 125a85e9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 125a85f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a85f4 jne 0x125a8613 */
  if (!C.zf) goto L_125a8613;
  /* 125a85f6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a85f9 push eax */
  push32((uint32_t)(EAX));
  /* 125a85fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a85fd push ecx */
  push32((uint32_t)(ECX));
  /* 125a85fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a8601 push edx */
  push32((uint32_t)(EDX));
  /* 125a8602 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8605 push eax */
  push32((uint32_t)(EAX));
  /* 125a8606 call 0x125a8110 */
  push32(0x125a860bu); f_125a8110();
  /* 125a860b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a860e jmp 0x125a8aea */
  goto L_125a8aea;
L_125a8613:;
  /* 125a8613 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8617 je 0x125a8636 */
  if (C.zf) goto L_125a8636;
  /* 125a8619 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a861d jne 0x125a8636 */
  if (!C.zf) goto L_125a8636;
  /* 125a861f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a8622 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8626 push edx */
  push32((uint32_t)(EDX));
  /* 125a8627 call 0x125a8ba0 */
  push32(0x125a862cu); f_125a8ba0();
  /* 125a862c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a862f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a8631 jmp 0x125a8aea */
  goto L_125a8aea;
L_125a8636:;
  /* 125a8636 mov eax, dword ptr [0x125d1a84] */
  EAX = (r32((uint32_t)(0x125d1a84)));
  /* 125a863b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125a863e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8640 je 0x125a8672 */
  if (C.zf) goto L_125a8672;
L_125a8642:;
  /* 125a8642 call 0x125a92b0 */
  push32(0x125a8647u); f_125a92b0();
  /* 125a8647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8649 jne 0x125a866c */
  if (!C.zf) goto L_125a866c;
  /* 125a864b push 0x125cec58 */
  push32((uint32_t)(0x125cec58u));
  /* 125a8650 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8652 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 125a8657 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a865c push 2 */
  push32((uint32_t)(0x2u));
  /* 125a865e call 0x125a71d0 */
  push32(0x125a8663u); f_125a71d0();
  /* 125a8663 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8666 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8669 jne 0x125a866c */
  if (!C.zf) goto L_125a866c;
  /* 125a866b int3  */
  x86_unimpl("int3 @ 0x125a866b");
L_125a866c:;
  /* 125a866c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a866e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a8670 jne 0x125a8642 */
  if (!C.zf) goto L_125a8642;
L_125a8672:;
  /* 125a8672 mov edx, dword ptr [0x125d1a88] */
  EDX = (r32((uint32_t)(0x125d1a88)));
  /* 125a8678 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125a867b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125a867e cmp eax, dword ptr [0x125d1a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d1a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8684 jne 0x125a8687 */
  if (!C.zf) goto L_125a8687;
  /* 125a8686 int3  */
  x86_unimpl("int3 @ 0x125a8686");
L_125a8687:;
  /* 125a8687 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a868a push ecx */
  push32((uint32_t)(ECX));
  /* 125a868b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a868e push edx */
  push32((uint32_t)(EDX));
  /* 125a868f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125a8692 push eax */
  push32((uint32_t)(EAX));
  /* 125a8693 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a8696 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8697 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a869a push edx */
  push32((uint32_t)(EDX));
  /* 125a869b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a869e push eax */
  push32((uint32_t)(EAX));
  /* 125a869f push 2 */
  push32((uint32_t)(0x2u));
  /* 125a86a1 call dword ptr [0x125d1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d1c90))), 0x125a86a7u);
  /* 125a86a7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a86aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a86ac jne 0x125a870c */
  if (!C.zf) goto L_125a870c;
  /* 125a86ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a86b2 je 0x125a86df */
  if (C.zf) goto L_125a86df;
L_125a86b4:;
  /* 125a86b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a86b7 push ecx */
  push32((uint32_t)(ECX));
  /* 125a86b8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a86bb push edx */
  push32((uint32_t)(EDX));
  /* 125a86bc push 0x125cedd4 */
  push32((uint32_t)(0x125cedd4u));
  /* 125a86c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a86c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a86c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a86c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a86c9 call 0x125a71d0 */
  push32(0x125a86ceu); f_125a71d0();
  /* 125a86ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a86d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a86d4 jne 0x125a86d7 */
  if (!C.zf) goto L_125a86d7;
  /* 125a86d6 int3  */
  x86_unimpl("int3 @ 0x125a86d6");
L_125a86d7:;
  /* 125a86d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a86d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a86db jne 0x125a86b4 */
  if (!C.zf) goto L_125a86b4;
  /* 125a86dd jmp 0x125a8705 */
  goto L_125a8705;
L_125a86df:;
  /* 125a86df push 0x125cedb0 */
  push32((uint32_t)(0x125cedb0u));
  /* 125a86e4 push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a86e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a86eb push 0 */
  push32((uint32_t)(0x0u));
  /* 125a86ed push 0 */
  push32((uint32_t)(0x0u));
  /* 125a86ef push 0 */
  push32((uint32_t)(0x0u));
  /* 125a86f1 call 0x125a71d0 */
  push32(0x125a86f6u); f_125a71d0();
  /* 125a86f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a86f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a86fc jne 0x125a86ff */
  if (!C.zf) goto L_125a86ff;
  /* 125a86fe int3  */
  x86_unimpl("int3 @ 0x125a86fe");
L_125a86ff:;
  /* 125a86ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8701 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a8703 jne 0x125a86df */
  if (!C.zf) goto L_125a86df;
L_125a8705:;
  /* 125a8705 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a8707 jmp 0x125a8aea */
  goto L_125a8aea;
L_125a870c:;
  /* 125a870c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8710 jbe 0x125a873e */
  if ((C.cf||C.zf)) goto L_125a873e;
L_125a8712:;
  /* 125a8712 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8715 push edx */
  push32((uint32_t)(EDX));
  /* 125a8716 push 0x125ced80 */
  push32((uint32_t)(0x125ced80u));
  /* 125a871b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a871d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a871f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8721 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8723 call 0x125a71d0 */
  push32(0x125a8728u); f_125a71d0();
  /* 125a8728 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a872b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a872e jne 0x125a8731 */
  if (!C.zf) goto L_125a8731;
  /* 125a8730 int3  */
  x86_unimpl("int3 @ 0x125a8730");
L_125a8731:;
  /* 125a8731 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a8733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8735 jne 0x125a8712 */
  if (!C.zf) goto L_125a8712;
  /* 125a8737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a8739 jmp 0x125a8aea */
  goto L_125a8aea;
L_125a873e:;
  /* 125a873e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8742 je 0x125a8786 */
  if (C.zf) goto L_125a8786;
  /* 125a8744 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a8747 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a874d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8750 je 0x125a8786 */
  if (C.zf) goto L_125a8786;
  /* 125a8752 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a8755 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a875b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a875e je 0x125a8786 */
  if (C.zf) goto L_125a8786;
L_125a8760:;
  /* 125a8760 push 0x125ceb94 */
  push32((uint32_t)(0x125ceb94u));
  /* 125a8765 push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a876a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a876c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a876e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8770 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8772 call 0x125a71d0 */
  push32(0x125a8777u); f_125a71d0();
  /* 125a8777 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a877a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a877d jne 0x125a8780 */
  if (!C.zf) goto L_125a8780;
  /* 125a877f int3  */
  x86_unimpl("int3 @ 0x125a877f");
L_125a8780:;
  /* 125a8780 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a8782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8784 jne 0x125a8760 */
  if (!C.zf) goto L_125a8760;
L_125a8786:;
  /* 125a8786 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8789 push ecx */
  push32((uint32_t)(ECX));
  /* 125a878a call 0x125a9710 */
  push32(0x125a878fu); f_125a9710();
  /* 125a878f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8794 jne 0x125a87b7 */
  if (!C.zf) goto L_125a87b7;
  /* 125a8796 push 0x125ced5c */
  push32((uint32_t)(0x125ced5cu));
  /* 125a879b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a879d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 125a87a2 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a87a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a87a9 call 0x125a71d0 */
  push32(0x125a87aeu); f_125a71d0();
  /* 125a87ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a87b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a87b4 jne 0x125a87b7 */
  if (!C.zf) goto L_125a87b7;
  /* 125a87b6 int3  */
  x86_unimpl("int3 @ 0x125a87b6");
L_125a87b7:;
  /* 125a87b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a87b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a87bb jne 0x125a8786 */
  if (!C.zf) goto L_125a8786;
  /* 125a87bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a87c0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a87c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125a87c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a87c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a87cd jne 0x125a87d6 */
  if (!C.zf) goto L_125a87d6;
  /* 125a87cf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_125a87d6:;
  /* 125a87d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a87da je 0x125a881a */
  if (C.zf) goto L_125a881a;
L_125a87dc:;
  /* 125a87dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a87df cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a87e6 jne 0x125a87f1 */
  if (!C.zf) goto L_125a87f1;
  /* 125a87e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a87eb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a87ef je 0x125a8812 */
  if (C.zf) goto L_125a8812;
L_125a87f1:;
  /* 125a87f1 push 0x125ced14 */
  push32((uint32_t)(0x125ced14u));
  /* 125a87f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a87f8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 125a87fd push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8802 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a8804 call 0x125a71d0 */
  push32(0x125a8809u); f_125a71d0();
  /* 125a8809 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a880c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a880f jne 0x125a8812 */
  if (!C.zf) goto L_125a8812;
  /* 125a8811 int3  */
  x86_unimpl("int3 @ 0x125a8811");
L_125a8812:;
  /* 125a8812 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8814 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a8816 jne 0x125a87dc */
  if (!C.zf) goto L_125a87dc;
  /* 125a8818 jmp 0x125a887e */
  goto L_125a887e;
L_125a881a:;
  /* 125a881a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a881d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a8820 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a8825 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8828 jne 0x125a883f */
  if (!C.zf) goto L_125a883f;
  /* 125a882a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a882d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a8833 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8836 jne 0x125a883f */
  if (!C.zf) goto L_125a883f;
  /* 125a8838 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_125a883f:;
  /* 125a883f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a8842 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a8845 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a884a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a884d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a8853 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8855 je 0x125a8878 */
  if (C.zf) goto L_125a8878;
  /* 125a8857 push 0x125cecd8 */
  push32((uint32_t)(0x125cecd8u));
  /* 125a885c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a885e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 125a8863 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8868 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a886a call 0x125a71d0 */
  push32(0x125a886fu); f_125a71d0();
  /* 125a886f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8872 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8875 jne 0x125a8878 */
  if (!C.zf) goto L_125a8878;
  /* 125a8877 int3  */
  x86_unimpl("int3 @ 0x125a8877");
L_125a8878:;
  /* 125a8878 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a887a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a887c jne 0x125a883f */
  if (!C.zf) goto L_125a883f;
L_125a887e:;
  /* 125a887e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8882 je 0x125a88a9 */
  if (C.zf) goto L_125a88a9;
  /* 125a8884 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8887 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a888a push eax */
  push32((uint32_t)(EAX));
  /* 125a888b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a888e push ecx */
  push32((uint32_t)(ECX));
  /* 125a888f call 0x125ac090 */
  push32(0x125a8894u); f_125ac090();
  /* 125a8894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8897 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125a889a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a889e jne 0x125a88a7 */
  if (!C.zf) goto L_125a88a7;
  /* 125a88a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a88a2 jmp 0x125a8aea */
  goto L_125a8aea;
L_125a88a7:;
  /* 125a88a7 jmp 0x125a88cc */
  goto L_125a88cc;
L_125a88a9:;
  /* 125a88a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a88ac add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a88af push edx */
  push32((uint32_t)(EDX));
  /* 125a88b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a88b3 push eax */
  push32((uint32_t)(EAX));
  /* 125a88b4 call 0x125abfe0 */
  push32(0x125a88b9u); f_125abfe0();
  /* 125a88b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a88bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125a88bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a88c3 jne 0x125a88cc */
  if (!C.zf) goto L_125a88cc;
  /* 125a88c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a88c7 jmp 0x125a8aea */
  goto L_125a8aea;
L_125a88cc:;
  /* 125a88cc mov ecx, dword ptr [0x125d1a88] */
  ECX = (r32((uint32_t)(0x125d1a88)));
  /* 125a88d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a88d5 mov dword ptr [0x125d1a88], ecx */
  w32((uint32_t)(0x125d1a88), (ECX));
  /* 125a88db cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a88df jne 0x125a8937 */
  if (!C.zf) goto L_125a8937;
  /* 125a88e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a88e4 mov eax, dword ptr [0x125d3928] */
  EAX = (r32((uint32_t)(0x125d3928)));
  /* 125a88e9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a88ec mov dword ptr [0x125d3928], eax */
  w32((uint32_t)(0x125d3928), (EAX));
  /* 125a88f1 mov ecx, dword ptr [0x125d3928] */
  ECX = (r32((uint32_t)(0x125d3928)));
  /* 125a88f7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a88fa mov dword ptr [0x125d3928], ecx */
  w32((uint32_t)(0x125d3928), (ECX));
  /* 125a8900 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8903 mov eax, dword ptr [0x125d3930] */
  EAX = (r32((uint32_t)(0x125d3930)));
  /* 125a8908 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a890b mov dword ptr [0x125d3930], eax */
  w32((uint32_t)(0x125d3930), (EAX));
  /* 125a8910 mov ecx, dword ptr [0x125d3930] */
  ECX = (r32((uint32_t)(0x125d3930)));
  /* 125a8916 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8919 mov dword ptr [0x125d3930], ecx */
  w32((uint32_t)(0x125d3930), (ECX));
  /* 125a891f mov edx, dword ptr [0x125d3930] */
  EDX = (r32((uint32_t)(0x125d3930)));
  /* 125a8925 cmp edx, dword ptr [0x125d3934] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125d3934))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a892b jbe 0x125a8937 */
  if ((C.cf||C.zf)) goto L_125a8937;
  /* 125a892d mov eax, dword ptr [0x125d3930] */
  EAX = (r32((uint32_t)(0x125d3930)));
  /* 125a8932 mov dword ptr [0x125d3934], eax */
  w32((uint32_t)(0x125d3934), (EAX));
L_125a8937:;
  /* 125a8937 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a893a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a893d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125a8940 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8943 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8946 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8949 jbe 0x125a896f */
  if ((C.cf||C.zf)) goto L_125a896f;
  /* 125a894b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a894e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8951 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a8954 push edx */
  push32((uint32_t)(EDX));
  /* 125a8955 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a8957 mov al, byte ptr [0x125d1a92] */
  AL = (r8((uint32_t)(0x125d1a92)));
  /* 125a895c push eax */
  push32((uint32_t)(EAX));
  /* 125a895d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8960 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8963 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8966 push edx */
  push32((uint32_t)(EDX));
  /* 125a8967 call 0x125abe80 */
  push32(0x125a896cu); f_125abe80();
  /* 125a896c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a896f:;
  /* 125a896f push 4 */
  push32((uint32_t)(0x4u));
  /* 125a8971 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a8973 mov al, byte ptr [0x125d1a90] */
  AL = (r8((uint32_t)(0x125d1a90)));
  /* 125a8978 push eax */
  push32((uint32_t)(EAX));
  /* 125a8979 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a897c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a897f push ecx */
  push32((uint32_t)(ECX));
  /* 125a8980 call 0x125abe80 */
  push32(0x125a8985u); f_125abe80();
  /* 125a8985 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8988 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a898c jne 0x125a89a9 */
  if (!C.zf) goto L_125a89a9;
  /* 125a898e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8991 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a8994 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125a8997 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a899a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a899d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 125a89a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a89a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125a89a6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_125a89a9:;
  /* 125a89a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a89ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a89af mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_125a89b2:;
  /* 125a89b2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a89b6 jne 0x125a89e7 */
  if (!C.zf) goto L_125a89e7;
  /* 125a89b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a89bc jne 0x125a89c6 */
  if (!C.zf) goto L_125a89c6;
  /* 125a89be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a89c1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a89c4 je 0x125a89e7 */
  if (C.zf) goto L_125a89e7;
L_125a89c6:;
  /* 125a89c6 push 0x125ceca4 */
  push32((uint32_t)(0x125ceca4u));
  /* 125a89cb push 0 */
  push32((uint32_t)(0x0u));
  /* 125a89cd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 125a89d2 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a89d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a89d9 call 0x125a71d0 */
  push32(0x125a89deu); f_125a71d0();
  /* 125a89de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a89e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a89e4 jne 0x125a89e7 */
  if (!C.zf) goto L_125a89e7;
  /* 125a89e6 int3  */
  x86_unimpl("int3 @ 0x125a89e6");
L_125a89e7:;
  /* 125a89e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a89e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a89eb jne 0x125a89b2 */
  if (!C.zf) goto L_125a89b2;
  /* 125a89ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a89f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a89f3 je 0x125a89fb */
  if (C.zf) goto L_125a89fb;
  /* 125a89f5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a89f9 je 0x125a8a03 */
  if (C.zf) goto L_125a8a03;
L_125a89fb:;
  /* 125a89fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a89fe jmp 0x125a8aea */
  goto L_125a8aea;
L_125a8a03:;
  /* 125a8a03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8a06 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8a09 je 0x125a8a1b */
  if (C.zf) goto L_125a8a1b;
  /* 125a8a0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8a0e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125a8a10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8a13 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125a8a16 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125a8a19 jmp 0x125a8a57 */
  goto L_125a8a57;
L_125a8a1b:;
  /* 125a8a1b mov eax, dword ptr [0x125d3924] */
  EAX = (r32((uint32_t)(0x125d3924)));
  /* 125a8a20 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8a23 je 0x125a8a46 */
  if (C.zf) goto L_125a8a46;
  /* 125a8a25 push 0x125cec88 */
  push32((uint32_t)(0x125cec88u));
  /* 125a8a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8a2c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 125a8a31 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8a36 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a8a38 call 0x125a71d0 */
  push32(0x125a8a3du); f_125a71d0();
  /* 125a8a3d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8a40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8a43 jne 0x125a8a46 */
  if (!C.zf) goto L_125a8a46;
  /* 125a8a45 int3  */
  x86_unimpl("int3 @ 0x125a8a45");
L_125a8a46:;
  /* 125a8a46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8a48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a8a4a jne 0x125a8a1b */
  if (!C.zf) goto L_125a8a1b;
  /* 125a8a4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8a4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125a8a52 mov dword ptr [0x125d3924], eax */
  w32((uint32_t)(0x125d3924), (EAX));
L_125a8a57:;
  /* 125a8a57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8a5a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8a5e je 0x125a8a6f */
  if (C.zf) goto L_125a8a6f;
  /* 125a8a60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8a63 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125a8a66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8a69 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125a8a6b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125a8a6d jmp 0x125a8aaa */
  goto L_125a8aaa;
L_125a8a6f:;
  /* 125a8a6f mov eax, dword ptr [0x125d392c] */
  EAX = (r32((uint32_t)(0x125d392c)));
  /* 125a8a74 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8a77 je 0x125a8a9a */
  if (C.zf) goto L_125a8a9a;
  /* 125a8a79 push 0x125cec6c */
  push32((uint32_t)(0x125cec6cu));
  /* 125a8a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8a80 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 125a8a85 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8a8a push 2 */
  push32((uint32_t)(0x2u));
  /* 125a8a8c call 0x125a71d0 */
  push32(0x125a8a91u); f_125a71d0();
  /* 125a8a91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8a94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8a97 jne 0x125a8a9a */
  if (!C.zf) goto L_125a8a9a;
  /* 125a8a99 int3  */
  x86_unimpl("int3 @ 0x125a8a99");
L_125a8a9a:;
  /* 125a8a9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8a9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a8a9e jne 0x125a8a6f */
  if (!C.zf) goto L_125a8a6f;
  /* 125a8aa0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8aa3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125a8aa5 mov dword ptr [0x125d392c], eax */
  w32((uint32_t)(0x125d392c), (EAX));
L_125a8aaa:;
  /* 125a8aaa cmp dword ptr [0x125d392c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d392c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8ab1 je 0x125a8ac1 */
  if (C.zf) goto L_125a8ac1;
  /* 125a8ab3 mov ecx, dword ptr [0x125d392c] */
  ECX = (r32((uint32_t)(0x125d392c)));
  /* 125a8ab9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8abc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 125a8abf jmp 0x125a8ac9 */
  goto L_125a8ac9;
L_125a8ac1:;
  /* 125a8ac1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8ac4 mov dword ptr [0x125d3924], eax */
  w32((uint32_t)(0x125d3924), (EAX));
L_125a8ac9:;
  /* 125a8ac9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8acc mov edx, dword ptr [0x125d392c] */
  EDX = (r32((uint32_t)(0x125d392c)));
  /* 125a8ad2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 125a8ad4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8ad7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 125a8ade mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a8ae1 mov dword ptr [0x125d392c], ecx */
  w32((uint32_t)(0x125d392c), (ECX));
  /* 125a8ae7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125a8aea:;
  /* 125a8aea pop edi */
  EDI = (pop32());
  /* 125a8aeb pop esi */
  ESI = (pop32());
  /* 125a8aec pop ebx */
  EBX = (pop32());
  /* 125a8aed mov esp, ebp */
  ESP = (EBP);
  /* 125a8aef pop ebp */
  EBP = (pop32());
  /* 125a8af0 ret  */
  ESPCHK(0x125a85e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b00 @ 0x125a8b00 (27 bytes, 13 insns) */
void f_125a8b00(void) {
  FTRACE(0x125a8b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8b00 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8b01 mov ebp, esp */
  EBP = (ESP);
  /* 125a8b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8b07 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8b09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8b0c push eax */
  push32((uint32_t)(EAX));
  /* 125a8b0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8b10 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8b11 call 0x125a8b20 */
  push32(0x125a8b16u); f_125a8b20();
  /* 125a8b16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8b19 pop ebp */
  EBP = (pop32());
  /* 125a8b1a ret  */
  ESPCHK(0x125a8b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b20 @ 0x125a8b20 (64 bytes, 27 insns) */
void f_125a8b20(void) {
  FTRACE(0x125a8b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8b20 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8b21 mov ebp, esp */
  EBP = (ESP);
  /* 125a8b23 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8b24 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a8b26 call 0x125abb10 */
  push32(0x125a8b2bu); f_125abb10();
  /* 125a8b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8b30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a8b33 push eax */
  push32((uint32_t)(EAX));
  /* 125a8b34 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a8b37 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8b38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a8b3b push edx */
  push32((uint32_t)(EDX));
  /* 125a8b3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8b3f push eax */
  push32((uint32_t)(EAX));
  /* 125a8b40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8b43 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8b44 call 0x125a85e0 */
  push32(0x125a8b49u); f_125a85e0();
  /* 125a8b49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8b4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a8b4f push 9 */
  push32((uint32_t)(0x9u));
  /* 125a8b51 call 0x125abbb0 */
  push32(0x125a8b56u); f_125abbb0();
  /* 125a8b56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8b59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8b5c mov esp, ebp */
  ESP = (EBP);
  /* 125a8b5e pop ebp */
  EBP = (pop32());
  /* 125a8b5f ret  */
  ESPCHK(0x125a8b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b60 @ 0x125a8b60 (19 bytes, 9 insns) */
void f_125a8b60(void) {
  FTRACE(0x125a8b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8b60 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8b61 mov ebp, esp */
  EBP = (ESP);
  /* 125a8b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8b65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8b68 push eax */
  push32((uint32_t)(EAX));
  /* 125a8b69 call 0x125a8ba0 */
  push32(0x125a8b6eu); f_125a8ba0();
  /* 125a8b6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8b71 pop ebp */
  EBP = (pop32());
  /* 125a8b72 ret  */
  ESPCHK(0x125a8b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b80 @ 0x125a8b80 (19 bytes, 9 insns) */
void f_125a8b80(void) {
  FTRACE(0x125a8b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8b80 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8b81 mov ebp, esp */
  EBP = (ESP);
  /* 125a8b83 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8b85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8b88 push eax */
  push32((uint32_t)(EAX));
  /* 125a8b89 call 0x125a8bd0 */
  push32(0x125a8b8eu); f_125a8bd0();
  /* 125a8b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8b91 pop ebp */
  EBP = (pop32());
  /* 125a8b92 ret  */
  ESPCHK(0x125a8b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ba0 @ 0x125a8ba0 (41 bytes, 16 insns) */
void f_125a8ba0(void) {
  FTRACE(0x125a8ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8ba1 mov ebp, esp */
  EBP = (ESP);
  /* 125a8ba3 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a8ba5 call 0x125abb10 */
  push32(0x125a8baau); f_125abb10();
  /* 125a8baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8bad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8bb0 push eax */
  push32((uint32_t)(EAX));
  /* 125a8bb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8bb5 call 0x125a8bd0 */
  push32(0x125a8bbau); f_125a8bd0();
  /* 125a8bba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8bbd push 9 */
  push32((uint32_t)(0x9u));
  /* 125a8bbf call 0x125abbb0 */
  push32(0x125a8bc4u); f_125abbb0();
  /* 125a8bc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8bc7 pop ebp */
  EBP = (pop32());
  /* 125a8bc8 ret  */
  ESPCHK(0x125a8ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bd0 @ 0x125a8bd0 (1004 bytes, 342 insns) */
void f_125a8bd0(void) {
  FTRACE(0x125a8bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8bd1 mov ebp, esp */
  EBP = (ESP);
  /* 125a8bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8bd4 push ebx */
  push32((uint32_t)(EBX));
  /* 125a8bd5 push esi */
  push32((uint32_t)(ESI));
  /* 125a8bd6 push edi */
  push32((uint32_t)(EDI));
  /* 125a8bd7 mov eax, dword ptr [0x125d1a84] */
  EAX = (r32((uint32_t)(0x125d1a84)));
  /* 125a8bdc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125a8bdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8be1 je 0x125a8c13 */
  if (C.zf) goto L_125a8c13;
L_125a8be3:;
  /* 125a8be3 call 0x125a92b0 */
  push32(0x125a8be8u); f_125a92b0();
  /* 125a8be8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8bea jne 0x125a8c0d */
  if (!C.zf) goto L_125a8c0d;
  /* 125a8bec push 0x125cec58 */
  push32((uint32_t)(0x125cec58u));
  /* 125a8bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8bf3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 125a8bf8 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8bfd push 2 */
  push32((uint32_t)(0x2u));
  /* 125a8bff call 0x125a71d0 */
  push32(0x125a8c04u); f_125a71d0();
  /* 125a8c04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8c07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8c0a jne 0x125a8c0d */
  if (!C.zf) goto L_125a8c0d;
  /* 125a8c0c int3  */
  x86_unimpl("int3 @ 0x125a8c0c");
L_125a8c0d:;
  /* 125a8c0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8c0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a8c11 jne 0x125a8be3 */
  if (!C.zf) goto L_125a8be3;
L_125a8c13:;
  /* 125a8c13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8c17 jne 0x125a8c1e */
  if (!C.zf) goto L_125a8c1e;
  /* 125a8c19 jmp 0x125a8fb5 */
  goto L_125a8fb5;
L_125a8c1e:;
  /* 125a8c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8c24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a8c27 push edx */
  push32((uint32_t)(EDX));
  /* 125a8c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8c2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8c2d push eax */
  push32((uint32_t)(EAX));
  /* 125a8c2e push 3 */
  push32((uint32_t)(0x3u));
  /* 125a8c30 call dword ptr [0x125d1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d1c90))), 0x125a8c36u);
  /* 125a8c36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8c3b jne 0x125a8c68 */
  if (!C.zf) goto L_125a8c68;
L_125a8c3d:;
  /* 125a8c3d push 0x125cef1c */
  push32((uint32_t)(0x125cef1cu));
  /* 125a8c42 push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a8c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8c4b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8c4f call 0x125a71d0 */
  push32(0x125a8c54u); f_125a71d0();
  /* 125a8c54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8c57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8c5a jne 0x125a8c5d */
  if (!C.zf) goto L_125a8c5d;
  /* 125a8c5c int3  */
  x86_unimpl("int3 @ 0x125a8c5c");
L_125a8c5d:;
  /* 125a8c5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8c5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a8c61 jne 0x125a8c3d */
  if (!C.zf) goto L_125a8c3d;
  /* 125a8c63 jmp 0x125a8fb5 */
  goto L_125a8fb5;
L_125a8c68:;
  /* 125a8c68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8c6b push edx */
  push32((uint32_t)(EDX));
  /* 125a8c6c call 0x125a9710 */
  push32(0x125a8c71u); f_125a9710();
  /* 125a8c71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8c76 jne 0x125a8c99 */
  if (!C.zf) goto L_125a8c99;
  /* 125a8c78 push 0x125ced5c */
  push32((uint32_t)(0x125ced5cu));
  /* 125a8c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8c7f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 125a8c84 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8c89 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a8c8b call 0x125a71d0 */
  push32(0x125a8c90u); f_125a71d0();
  /* 125a8c90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8c93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8c96 jne 0x125a8c99 */
  if (!C.zf) goto L_125a8c99;
  /* 125a8c98 int3  */
  x86_unimpl("int3 @ 0x125a8c98");
L_125a8c99:;
  /* 125a8c99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a8c9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8c9d jne 0x125a8c68 */
  if (!C.zf) goto L_125a8c68;
  /* 125a8c9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8ca2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a8ca5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125a8ca8:;
  /* 125a8ca8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8cab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a8cae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a8cb3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8cb6 je 0x125a8cfb */
  if (C.zf) goto L_125a8cfb;
  /* 125a8cb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8cbb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8cbf je 0x125a8cfb */
  if (C.zf) goto L_125a8cfb;
  /* 125a8cc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8cc4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a8cc7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a8ccc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8ccf je 0x125a8cfb */
  if (C.zf) goto L_125a8cfb;
  /* 125a8cd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8cd4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8cd8 je 0x125a8cfb */
  if (C.zf) goto L_125a8cfb;
  /* 125a8cda push 0x125ceef4 */
  push32((uint32_t)(0x125ceef4u));
  /* 125a8cdf push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8ce1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 125a8ce6 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8ceb push 2 */
  push32((uint32_t)(0x2u));
  /* 125a8ced call 0x125a71d0 */
  push32(0x125a8cf2u); f_125a71d0();
  /* 125a8cf2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8cf5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8cf8 jne 0x125a8cfb */
  if (!C.zf) goto L_125a8cfb;
  /* 125a8cfa int3  */
  x86_unimpl("int3 @ 0x125a8cfa");
L_125a8cfb:;
  /* 125a8cfb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a8cfd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a8cff jne 0x125a8ca8 */
  if (!C.zf) goto L_125a8ca8;
  /* 125a8d01 mov eax, dword ptr [0x125d1a84] */
  EAX = (r32((uint32_t)(0x125d1a84)));
  /* 125a8d06 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125a8d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8d0b jne 0x125a8dd6 */
  if (!C.zf) goto L_125a8dd6;
  /* 125a8d11 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a8d13 mov cl, byte ptr [0x125d1a90] */
  CL = (r8((uint32_t)(0x125d1a90)));
  /* 125a8d19 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8d1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8d1d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8d20 push edx */
  push32((uint32_t)(EDX));
  /* 125a8d21 call 0x125a9220 */
  push32(0x125a8d26u); f_125a9220();
  /* 125a8d26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8d2b jne 0x125a8d70 */
  if (!C.zf) goto L_125a8d70;
L_125a8d2d:;
  /* 125a8d2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8d30 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8d33 push eax */
  push32((uint32_t)(EAX));
  /* 125a8d34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8d37 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125a8d3a push edx */
  push32((uint32_t)(EDX));
  /* 125a8d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8d3e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125a8d41 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a8d47 mov edx, dword ptr [ecx*4 + 0x125d1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d1a94)));
  /* 125a8d4e push edx */
  push32((uint32_t)(EDX));
  /* 125a8d4f push 0x125ceec8 */
  push32((uint32_t)(0x125ceec8u));
  /* 125a8d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8d5a push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8d5c call 0x125a71d0 */
  push32(0x125a8d61u); f_125a71d0();
  /* 125a8d61 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8d64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8d67 jne 0x125a8d6a */
  if (!C.zf) goto L_125a8d6a;
  /* 125a8d69 int3  */
  x86_unimpl("int3 @ 0x125a8d69");
L_125a8d6a:;
  /* 125a8d6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a8d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8d6e jne 0x125a8d2d */
  if (!C.zf) goto L_125a8d2d;
L_125a8d70:;
  /* 125a8d70 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a8d72 mov cl, byte ptr [0x125d1a90] */
  CL = (r8((uint32_t)(0x125d1a90)));
  /* 125a8d78 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8d79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8d7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125a8d7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8d82 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 125a8d86 push edx */
  push32((uint32_t)(EDX));
  /* 125a8d87 call 0x125a9220 */
  push32(0x125a8d8cu); f_125a9220();
  /* 125a8d8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8d8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8d91 jne 0x125a8dd6 */
  if (!C.zf) goto L_125a8dd6;
L_125a8d93:;
  /* 125a8d93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8d96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8d99 push eax */
  push32((uint32_t)(EAX));
  /* 125a8d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8d9d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125a8da0 push edx */
  push32((uint32_t)(EDX));
  /* 125a8da1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8da4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125a8da7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a8dad mov edx, dword ptr [ecx*4 + 0x125d1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d1a94)));
  /* 125a8db4 push edx */
  push32((uint32_t)(EDX));
  /* 125a8db5 push 0x125cee9c */
  push32((uint32_t)(0x125cee9cu));
  /* 125a8dba push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8dc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8dc2 call 0x125a71d0 */
  push32(0x125a8dc7u); f_125a71d0();
  /* 125a8dc7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8dca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8dcd jne 0x125a8dd0 */
  if (!C.zf) goto L_125a8dd0;
  /* 125a8dcf int3  */
  x86_unimpl("int3 @ 0x125a8dcf");
L_125a8dd0:;
  /* 125a8dd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a8dd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8dd4 jne 0x125a8d93 */
  if (!C.zf) goto L_125a8d93;
L_125a8dd6:;
  /* 125a8dd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8dd9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8ddd jne 0x125a8e4b */
  if (!C.zf) goto L_125a8e4b;
L_125a8ddf:;
  /* 125a8ddf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8de2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8de9 jne 0x125a8df4 */
  if (!C.zf) goto L_125a8df4;
  /* 125a8deb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8dee cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8df2 je 0x125a8e15 */
  if (C.zf) goto L_125a8e15;
L_125a8df4:;
  /* 125a8df4 push 0x125cee5c */
  push32((uint32_t)(0x125cee5cu));
  /* 125a8df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8dfb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 125a8e00 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8e05 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a8e07 call 0x125a71d0 */
  push32(0x125a8e0cu); f_125a71d0();
  /* 125a8e0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8e0f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8e12 jne 0x125a8e15 */
  if (!C.zf) goto L_125a8e15;
  /* 125a8e14 int3  */
  x86_unimpl("int3 @ 0x125a8e14");
L_125a8e15:;
  /* 125a8e15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8e17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a8e19 jne 0x125a8ddf */
  if (!C.zf) goto L_125a8ddf;
  /* 125a8e1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8e1e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125a8e21 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8e24 push eax */
  push32((uint32_t)(EAX));
  /* 125a8e25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8e27 mov cl, byte ptr [0x125d1a91] */
  CL = (r8((uint32_t)(0x125d1a91)));
  /* 125a8e2d push ecx */
  push32((uint32_t)(ECX));
  /* 125a8e2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8e31 push edx */
  push32((uint32_t)(EDX));
  /* 125a8e32 call 0x125abe80 */
  push32(0x125a8e37u); f_125abe80();
  /* 125a8e37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8e3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8e3d push eax */
  push32((uint32_t)(EAX));
  /* 125a8e3e call 0x125ac280 */
  push32(0x125a8e43u); f_125ac280();
  /* 125a8e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8e46 jmp 0x125a8fb5 */
  goto L_125a8fb5;
L_125a8e4b:;
  /* 125a8e4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8e4e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8e52 jne 0x125a8e61 */
  if (!C.zf) goto L_125a8e61;
  /* 125a8e54 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8e58 jne 0x125a8e61 */
  if (!C.zf) goto L_125a8e61;
  /* 125a8e5a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_125a8e61:;
  /* 125a8e61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8e64 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a8e67 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8e6a je 0x125a8e8d */
  if (C.zf) goto L_125a8e8d;
  /* 125a8e6c push 0x125cee3c */
  push32((uint32_t)(0x125cee3cu));
  /* 125a8e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8e73 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 125a8e78 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8e7d push 2 */
  push32((uint32_t)(0x2u));
  /* 125a8e7f call 0x125a71d0 */
  push32(0x125a8e84u); f_125a71d0();
  /* 125a8e84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8e87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8e8a jne 0x125a8e8d */
  if (!C.zf) goto L_125a8e8d;
  /* 125a8e8c int3  */
  x86_unimpl("int3 @ 0x125a8e8c");
L_125a8e8d:;
  /* 125a8e8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8e8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a8e91 jne 0x125a8e61 */
  if (!C.zf) goto L_125a8e61;
  /* 125a8e93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8e96 mov eax, dword ptr [0x125d3930] */
  EAX = (r32((uint32_t)(0x125d3930)));
  /* 125a8e9b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a8e9e mov dword ptr [0x125d3930], eax */
  w32((uint32_t)(0x125d3930), (EAX));
  /* 125a8ea3 mov ecx, dword ptr [0x125d1a84] */
  ECX = (r32((uint32_t)(0x125d1a84)));
  /* 125a8ea9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 125a8eac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a8eae jne 0x125a8f8c */
  if (!C.zf) goto L_125a8f8c;
  /* 125a8eb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8eb7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8eba je 0x125a8ecc */
  if (C.zf) goto L_125a8ecc;
  /* 125a8ebc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8ebf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125a8ec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8ec4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125a8ec7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 125a8eca jmp 0x125a8f0a */
  goto L_125a8f0a;
L_125a8ecc:;
  /* 125a8ecc mov ecx, dword ptr [0x125d3924] */
  ECX = (r32((uint32_t)(0x125d3924)));
  /* 125a8ed2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8ed5 je 0x125a8ef8 */
  if (C.zf) goto L_125a8ef8;
  /* 125a8ed7 push 0x125cee24 */
  push32((uint32_t)(0x125cee24u));
  /* 125a8edc push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8ede push 0x42a */
  push32((uint32_t)(0x42au));
  /* 125a8ee3 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8ee8 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a8eea call 0x125a71d0 */
  push32(0x125a8eefu); f_125a71d0();
  /* 125a8eef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8ef2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8ef5 jne 0x125a8ef8 */
  if (!C.zf) goto L_125a8ef8;
  /* 125a8ef7 int3  */
  x86_unimpl("int3 @ 0x125a8ef7");
L_125a8ef8:;
  /* 125a8ef8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a8efa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a8efc jne 0x125a8ecc */
  if (!C.zf) goto L_125a8ecc;
  /* 125a8efe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8f01 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125a8f04 mov dword ptr [0x125d3924], ecx */
  w32((uint32_t)(0x125d3924), (ECX));
L_125a8f0a:;
  /* 125a8f0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8f0d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8f11 je 0x125a8f22 */
  if (C.zf) goto L_125a8f22;
  /* 125a8f13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8f16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125a8f19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8f1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125a8f1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125a8f20 jmp 0x125a8f5f */
  goto L_125a8f5f;
L_125a8f22:;
  /* 125a8f22 mov ecx, dword ptr [0x125d392c] */
  ECX = (r32((uint32_t)(0x125d392c)));
  /* 125a8f28 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8f2b je 0x125a8f4e */
  if (C.zf) goto L_125a8f4e;
  /* 125a8f2d push 0x125cee0c */
  push32((uint32_t)(0x125cee0cu));
  /* 125a8f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a8f34 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 125a8f39 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a8f3e push 2 */
  push32((uint32_t)(0x2u));
  /* 125a8f40 call 0x125a71d0 */
  push32(0x125a8f45u); f_125a71d0();
  /* 125a8f45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8f48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a8f4b jne 0x125a8f4e */
  if (!C.zf) goto L_125a8f4e;
  /* 125a8f4d int3  */
  x86_unimpl("int3 @ 0x125a8f4d");
L_125a8f4e:;
  /* 125a8f4e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a8f50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a8f52 jne 0x125a8f22 */
  if (!C.zf) goto L_125a8f22;
  /* 125a8f54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8f57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125a8f59 mov dword ptr [0x125d392c], ecx */
  w32((uint32_t)(0x125d392c), (ECX));
L_125a8f5f:;
  /* 125a8f5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8f62 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125a8f65 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8f68 push eax */
  push32((uint32_t)(EAX));
  /* 125a8f69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8f6b mov cl, byte ptr [0x125d1a91] */
  CL = (r8((uint32_t)(0x125d1a91)));
  /* 125a8f71 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8f72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8f75 push edx */
  push32((uint32_t)(EDX));
  /* 125a8f76 call 0x125abe80 */
  push32(0x125a8f7bu); f_125abe80();
  /* 125a8f7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8f7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8f81 push eax */
  push32((uint32_t)(EAX));
  /* 125a8f82 call 0x125ac280 */
  push32(0x125a8f87u); f_125ac280();
  /* 125a8f87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8f8a jmp 0x125a8fb5 */
  goto L_125a8fb5;
L_125a8f8c:;
  /* 125a8f8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8f8f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 125a8f96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8f99 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125a8f9c push eax */
  push32((uint32_t)(EAX));
  /* 125a8f9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a8f9f mov cl, byte ptr [0x125d1a91] */
  CL = (r8((uint32_t)(0x125d1a91)));
  /* 125a8fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 125a8fa6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a8fa9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8fac push edx */
  push32((uint32_t)(EDX));
  /* 125a8fad call 0x125abe80 */
  push32(0x125a8fb2u); f_125abe80();
  /* 125a8fb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a8fb5:;
  /* 125a8fb5 pop edi */
  EDI = (pop32());
  /* 125a8fb6 pop esi */
  ESI = (pop32());
  /* 125a8fb7 pop ebx */
  EBX = (pop32());
  /* 125a8fb8 mov esp, ebp */
  ESP = (EBP);
  /* 125a8fba pop ebp */
  EBP = (pop32());
  /* 125a8fbb ret  */
  ESPCHK(0x125a8bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fc0 @ 0x125a8fc0 (19 bytes, 9 insns) */
void f_125a8fc0(void) {
  FTRACE(0x125a8fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8fc1 mov ebp, esp */
  EBP = (ESP);
  /* 125a8fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a8fc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a8fc8 push eax */
  push32((uint32_t)(EAX));
  /* 125a8fc9 call 0x125a8fe0 */
  push32(0x125a8fceu); f_125a8fe0();
  /* 125a8fce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a8fd1 pop ebp */
  EBP = (pop32());
  /* 125a8fd2 ret  */
  ESPCHK(0x125a8fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x125a8fe0 (342 bytes, 119 insns) */
void f_125a8fe0(void) {
  FTRACE(0x125a8fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a8fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a8fe1 mov ebp, esp */
  EBP = (ESP);
  /* 125a8fe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a8fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 125a8fe7 push esi */
  push32((uint32_t)(ESI));
  /* 125a8fe8 push edi */
  push32((uint32_t)(EDI));
  /* 125a8fe9 mov eax, dword ptr [0x125d1a84] */
  EAX = (r32((uint32_t)(0x125d1a84)));
  /* 125a8fee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125a8ff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8ff3 je 0x125a9025 */
  if (C.zf) goto L_125a9025;
L_125a8ff5:;
  /* 125a8ff5 call 0x125a92b0 */
  push32(0x125a8ffau); f_125a92b0();
  /* 125a8ffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a8ffc jne 0x125a901f */
  if (!C.zf) goto L_125a901f;
  /* 125a8ffe push 0x125cec58 */
  push32((uint32_t)(0x125cec58u));
  /* 125a9003 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9005 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 125a900a push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a900f push 2 */
  push32((uint32_t)(0x2u));
  /* 125a9011 call 0x125a71d0 */
  push32(0x125a9016u); f_125a71d0();
  /* 125a9016 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9019 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a901c jne 0x125a901f */
  if (!C.zf) goto L_125a901f;
  /* 125a901e int3  */
  x86_unimpl("int3 @ 0x125a901e");
L_125a901f:;
  /* 125a901f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a9021 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a9023 jne 0x125a8ff5 */
  if (!C.zf) goto L_125a8ff5;
L_125a9025:;
  /* 125a9025 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a9027 call 0x125abb10 */
  push32(0x125a902cu); f_125abb10();
  /* 125a902c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a902f:;
  /* 125a902f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9032 push edx */
  push32((uint32_t)(EDX));
  /* 125a9033 call 0x125a9710 */
  push32(0x125a9038u); f_125a9710();
  /* 125a9038 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a903b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a903d jne 0x125a9060 */
  if (!C.zf) goto L_125a9060;
  /* 125a903f push 0x125ced5c */
  push32((uint32_t)(0x125ced5cu));
  /* 125a9044 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9046 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 125a904b push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a9050 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a9052 call 0x125a71d0 */
  push32(0x125a9057u); f_125a71d0();
  /* 125a9057 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a905a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a905d jne 0x125a9060 */
  if (!C.zf) goto L_125a9060;
  /* 125a905f int3  */
  x86_unimpl("int3 @ 0x125a905f");
L_125a9060:;
  /* 125a9060 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a9062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9064 jne 0x125a902f */
  if (!C.zf) goto L_125a902f;
  /* 125a9066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9069 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a906c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125a906f:;
  /* 125a906f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9072 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a9075 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a907a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a907d je 0x125a90c2 */
  if (C.zf) goto L_125a90c2;
  /* 125a907f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9082 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9086 je 0x125a90c2 */
  if (C.zf) goto L_125a90c2;
  /* 125a9088 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a908b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a908e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a9093 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9096 je 0x125a90c2 */
  if (C.zf) goto L_125a90c2;
  /* 125a9098 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a909b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a909f je 0x125a90c2 */
  if (C.zf) goto L_125a90c2;
  /* 125a90a1 push 0x125ceef4 */
  push32((uint32_t)(0x125ceef4u));
  /* 125a90a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a90a8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 125a90ad push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a90b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a90b4 call 0x125a71d0 */
  push32(0x125a90b9u); f_125a71d0();
  /* 125a90b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a90bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a90bf jne 0x125a90c2 */
  if (!C.zf) goto L_125a90c2;
  /* 125a90c1 int3  */
  x86_unimpl("int3 @ 0x125a90c1");
L_125a90c2:;
  /* 125a90c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a90c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a90c6 jne 0x125a906f */
  if (!C.zf) goto L_125a906f;
  /* 125a90c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a90cb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a90cf jne 0x125a90de */
  if (!C.zf) goto L_125a90de;
  /* 125a90d1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a90d5 jne 0x125a90de */
  if (!C.zf) goto L_125a90de;
  /* 125a90d7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_125a90de:;
  /* 125a90de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a90e1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a90e5 je 0x125a9119 */
  if (C.zf) goto L_125a9119;
L_125a90e7:;
  /* 125a90e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a90ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a90ed cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a90f0 je 0x125a9113 */
  if (C.zf) goto L_125a9113;
  /* 125a90f2 push 0x125cee3c */
  push32((uint32_t)(0x125cee3cu));
  /* 125a90f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a90f9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 125a90fe push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a9103 push 2 */
  push32((uint32_t)(0x2u));
  /* 125a9105 call 0x125a71d0 */
  push32(0x125a910au); f_125a71d0();
  /* 125a910a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a910d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9110 jne 0x125a9113 */
  if (!C.zf) goto L_125a9113;
  /* 125a9112 int3  */
  x86_unimpl("int3 @ 0x125a9112");
L_125a9113:;
  /* 125a9113 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a9115 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a9117 jne 0x125a90e7 */
  if (!C.zf) goto L_125a90e7;
L_125a9119:;
  /* 125a9119 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a911c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125a911f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a9122 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a9124 call 0x125abbb0 */
  push32(0x125a9129u); f_125abbb0();
  /* 125a9129 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a912c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a912f pop edi */
  EDI = (pop32());
  /* 125a9130 pop esi */
  ESI = (pop32());
  /* 125a9131 pop ebx */
  EBX = (pop32());
  /* 125a9132 mov esp, ebp */
  ESP = (EBP);
  /* 125a9134 pop ebp */
  EBP = (pop32());
  /* 125a9135 ret  */
  ESPCHK(0x125a8fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009140 @ 0x125a9140 (28 bytes, 11 insns) */
void f_125a9140(void) {
  FTRACE(0x125a9140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9140 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9141 mov ebp, esp */
  EBP = (ESP);
  /* 125a9143 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9144 mov eax, dword ptr [0x125d1a8c] */
  EAX = (r32((uint32_t)(0x125d1a8c)));
  /* 125a9149 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a914c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a914f mov dword ptr [0x125d1a8c], ecx */
  w32((uint32_t)(0x125d1a8c), (ECX));
  /* 125a9155 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9158 mov esp, ebp */
  ESP = (EBP);
  /* 125a915a pop ebp */
  EBP = (pop32());
  /* 125a915b ret  */
  ESPCHK(0x125a9140u, _esp0);
  ESP += 4; return;
}

/* FUN_10009160 @ 0x125a9160 (157 bytes, 59 insns) */
void f_125a9160(void) {
  FTRACE(0x125a9160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9160 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9161 mov ebp, esp */
  EBP = (ESP);
  /* 125a9163 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9164 push ebx */
  push32((uint32_t)(EBX));
  /* 125a9165 push esi */
  push32((uint32_t)(ESI));
  /* 125a9166 push edi */
  push32((uint32_t)(EDI));
  /* 125a9167 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a9169 call 0x125abb10 */
  push32(0x125a916eu); f_125abb10();
  /* 125a916e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9174 push eax */
  push32((uint32_t)(EAX));
  /* 125a9175 call 0x125a9710 */
  push32(0x125a917au); f_125a9710();
  /* 125a917a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a917d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a917f je 0x125a91ec */
  if (C.zf) goto L_125a91ec;
  /* 125a9181 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9184 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9187 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125a918a:;
  /* 125a918a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a918d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a9190 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a9195 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9198 je 0x125a91dd */
  if (C.zf) goto L_125a91dd;
  /* 125a919a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a919d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a91a1 je 0x125a91dd */
  if (C.zf) goto L_125a91dd;
  /* 125a91a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a91a6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a91a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a91ae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a91b1 je 0x125a91dd */
  if (C.zf) goto L_125a91dd;
  /* 125a91b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a91b6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a91ba je 0x125a91dd */
  if (C.zf) goto L_125a91dd;
  /* 125a91bc push 0x125ceef4 */
  push32((uint32_t)(0x125ceef4u));
  /* 125a91c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a91c3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 125a91c8 push 0x125cec4c */
  push32((uint32_t)(0x125cec4cu));
  /* 125a91cd push 2 */
  push32((uint32_t)(0x2u));
  /* 125a91cf call 0x125a71d0 */
  push32(0x125a91d4u); f_125a71d0();
  /* 125a91d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a91d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a91da jne 0x125a91dd */
  if (!C.zf) goto L_125a91dd;
  /* 125a91dc int3  */
  x86_unimpl("int3 @ 0x125a91dc");
L_125a91dd:;
  /* 125a91dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a91df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a91e1 jne 0x125a918a */
  if (!C.zf) goto L_125a918a;
  /* 125a91e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a91e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a91e9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_125a91ec:;
  /* 125a91ec push 9 */
  push32((uint32_t)(0x9u));
  /* 125a91ee call 0x125abbb0 */
  push32(0x125a91f3u); f_125abbb0();
  /* 125a91f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a91f6 pop edi */
  EDI = (pop32());
  /* 125a91f7 pop esi */
  ESI = (pop32());
  /* 125a91f8 pop ebx */
  EBX = (pop32());
  /* 125a91f9 mov esp, ebp */
  ESP = (EBP);
  /* 125a91fb pop ebp */
  EBP = (pop32());
  /* 125a91fc ret  */
  ESPCHK(0x125a9160u, _esp0);
  ESP += 4; return;
}

/* FUN_10009200 @ 0x125a9200 (28 bytes, 11 insns) */
void f_125a9200(void) {
  FTRACE(0x125a9200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9200 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9201 mov ebp, esp */
  EBP = (ESP);
  /* 125a9203 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9204 mov eax, dword ptr [0x125d1c90] */
  EAX = (r32((uint32_t)(0x125d1c90)));
  /* 125a9209 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a920c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a920f mov dword ptr [0x125d1c90], ecx */
  w32((uint32_t)(0x125d1c90), (ECX));
  /* 125a9215 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9218 mov esp, ebp */
  ESP = (EBP);
  /* 125a921a pop ebp */
  EBP = (pop32());
  /* 125a921b ret  */
  ESPCHK(0x125a9200u, _esp0);
  ESP += 4; return;
}

/* FUN_10009220 @ 0x125a9220 (136 bytes, 55 insns) */
void f_125a9220(void) {
  FTRACE(0x125a9220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9220 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9221 mov ebp, esp */
  EBP = (ESP);
  /* 125a9223 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9224 push ebx */
  push32((uint32_t)(EBX));
  /* 125a9225 push esi */
  push32((uint32_t)(ESI));
  /* 125a9226 push edi */
  push32((uint32_t)(EDI));
  /* 125a9227 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_125a922e:;
  /* 125a922e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a9231 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a9234 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9237 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 125a923a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a923c je 0x125a929e */
  if (C.zf) goto L_125a929e;
  /* 125a923e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9241 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a9243 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125a9245 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a9248 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a924e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9251 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9254 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125a9257 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9259 je 0x125a929c */
  if (C.zf) goto L_125a929c;
L_125a925b:;
  /* 125a925b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a925e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a9263 push eax */
  push32((uint32_t)(EAX));
  /* 125a9264 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9267 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a9269 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 125a926c push edx */
  push32((uint32_t)(EDX));
  /* 125a926d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9270 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9273 push eax */
  push32((uint32_t)(EAX));
  /* 125a9274 push 0x125cef38 */
  push32((uint32_t)(0x125cef38u));
  /* 125a9279 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a927b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a927d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a927f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9281 call 0x125a71d0 */
  push32(0x125a9286u); f_125a71d0();
  /* 125a9286 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9289 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a928c jne 0x125a928f */
  if (!C.zf) goto L_125a928f;
  /* 125a928e int3  */
  x86_unimpl("int3 @ 0x125a928e");
L_125a928f:;
  /* 125a928f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a9291 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a9293 jne 0x125a925b */
  if (!C.zf) goto L_125a925b;
  /* 125a9295 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125a929c:;
  /* 125a929c jmp 0x125a922e */
  goto L_125a922e;
L_125a929e:;
  /* 125a929e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a92a1 pop edi */
  EDI = (pop32());
  /* 125a92a2 pop esi */
  ESI = (pop32());
  /* 125a92a3 pop ebx */
  EBX = (pop32());
  /* 125a92a4 mov esp, ebp */
  ESP = (EBP);
  /* 125a92a6 pop ebp */
  EBP = (pop32());
  /* 125a92a7 ret  */
  ESPCHK(0x125a9220u, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x125a92b0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_125a92b0(void) {
  FTRACE(0x125a92b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a92b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a92b1 mov ebp, esp */
  EBP = (ESP);
  /* 125a92b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a92b6 push ebx */
  push32((uint32_t)(EBX));
  /* 125a92b7 push esi */
  push32((uint32_t)(ESI));
  /* 125a92b8 push edi */
  push32((uint32_t)(EDI));
  /* 125a92b9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125a92c0 mov eax, dword ptr [0x125d1a84] */
  EAX = (r32((uint32_t)(0x125d1a84)));
  /* 125a92c5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 125a92c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a92ca jne 0x125a92d6 */
  if (!C.zf) goto L_125a92d6;
  /* 125a92cc mov eax, 1 */
  EAX = (0x1u);
  /* 125a92d1 jmp 0x125a9608 */
  goto L_125a9608;
L_125a92d6:;
  /* 125a92d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a92d8 call 0x125abb10 */
  push32(0x125a92ddu); f_125abb10();
  /* 125a92dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a92e0 call 0x125ac2f0 */
  push32(0x125a92e5u); f_125ac2f0();
  /* 125a92e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125a92e8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a92ec je 0x125a93f9 */
  if (C.zf) goto L_125a93f9;
  /* 125a92f2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a92f6 je 0x125a93f9 */
  if (C.zf) goto L_125a93f9;
  /* 125a92fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125a92ff mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125a9302 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125a9305 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9308 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125a930b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a930f ja 0x125a93c2 */
  if ((!C.cf&&!C.zf)) goto L_125a93c2;
  /* 125a9315 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125a9318 jmp dword ptr [eax*4 + 0x125a960f] */
  switch (EAX) {
    case 0: goto L_125a939a;
    case 1: goto L_125a9372;
    case 2: goto L_125a934a;
    case 3: goto L_125a931f;
    default: x86_unimpl("switch@0x125a9318 out of table"); return;
  }
L_125a931f:;
  /* 125a931f push 0x125cf08c */
  push32((uint32_t)(0x125cf08cu));
  /* 125a9324 push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a9329 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a932b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a932d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a932f push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9331 call 0x125a71d0 */
  push32(0x125a9336u); f_125a71d0();
  /* 125a9336 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9339 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a933c jne 0x125a933f */
  if (!C.zf) goto L_125a933f;
  /* 125a933e int3  */
  x86_unimpl("int3 @ 0x125a933e");
L_125a933f:;
  /* 125a933f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a9341 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a9343 jne 0x125a931f */
  if (!C.zf) goto L_125a931f;
  /* 125a9345 jmp 0x125a93e8 */
  goto L_125a93e8;
L_125a934a:;
  /* 125a934a push 0x125cf068 */
  push32((uint32_t)(0x125cf068u));
  /* 125a934f push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a9354 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9356 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9358 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a935a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a935c call 0x125a71d0 */
  push32(0x125a9361u); f_125a71d0();
  /* 125a9361 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9364 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9367 jne 0x125a936a */
  if (!C.zf) goto L_125a936a;
  /* 125a9369 int3  */
  x86_unimpl("int3 @ 0x125a9369");
L_125a936a:;
  /* 125a936a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a936c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a936e jne 0x125a934a */
  if (!C.zf) goto L_125a934a;
  /* 125a9370 jmp 0x125a93e8 */
  goto L_125a93e8;
L_125a9372:;
  /* 125a9372 push 0x125cf044 */
  push32((uint32_t)(0x125cf044u));
  /* 125a9377 push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a937c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a937e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9380 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9382 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9384 call 0x125a71d0 */
  push32(0x125a9389u); f_125a71d0();
  /* 125a9389 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a938c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a938f jne 0x125a9392 */
  if (!C.zf) goto L_125a9392;
  /* 125a9391 int3  */
  x86_unimpl("int3 @ 0x125a9391");
L_125a9392:;
  /* 125a9392 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a9394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9396 jne 0x125a9372 */
  if (!C.zf) goto L_125a9372;
  /* 125a9398 jmp 0x125a93e8 */
  goto L_125a93e8;
L_125a939a:;
  /* 125a939a push 0x125cf020 */
  push32((uint32_t)(0x125cf020u));
  /* 125a939f push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a93a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a93a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a93a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a93aa push 0 */
  push32((uint32_t)(0x0u));
  /* 125a93ac call 0x125a71d0 */
  push32(0x125a93b1u); f_125a71d0();
  /* 125a93b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a93b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a93b7 jne 0x125a93ba */
  if (!C.zf) goto L_125a93ba;
  /* 125a93b9 int3  */
  x86_unimpl("int3 @ 0x125a93b9");
L_125a93ba:;
  /* 125a93ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a93bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a93be jne 0x125a939a */
  if (!C.zf) goto L_125a939a;
  /* 125a93c0 jmp 0x125a93e8 */
  goto L_125a93e8;
L_125a93c2:;
  /* 125a93c2 push 0x125ceff4 */
  push32((uint32_t)(0x125ceff4u));
  /* 125a93c7 push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a93cc push 0 */
  push32((uint32_t)(0x0u));
  /* 125a93ce push 0 */
  push32((uint32_t)(0x0u));
  /* 125a93d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a93d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a93d4 call 0x125a71d0 */
  push32(0x125a93d9u); f_125a71d0();
  /* 125a93d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a93dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a93df jne 0x125a93e2 */
  if (!C.zf) goto L_125a93e2;
  /* 125a93e1 int3  */
  x86_unimpl("int3 @ 0x125a93e1");
L_125a93e2:;
  /* 125a93e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a93e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a93e6 jne 0x125a93c2 */
  if (!C.zf) goto L_125a93c2;
L_125a93e8:;
  /* 125a93e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a93ea call 0x125abbb0 */
  push32(0x125a93efu); f_125abbb0();
  /* 125a93ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a93f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a93f4 jmp 0x125a9608 */
  goto L_125a9608;
L_125a93f9:;
  /* 125a93f9 mov eax, dword ptr [0x125d392c] */
  EAX = (r32((uint32_t)(0x125d392c)));
  /* 125a93fe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125a9401 jmp 0x125a940b */
  goto L_125a940b;
L_125a9403:;
  /* 125a9403 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9406 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125a9408 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125a940b:;
  /* 125a940b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a940f je 0x125a95fb */
  if (C.zf) goto L_125a95fb;
  /* 125a9415 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 125a941c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a941f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125a9422 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a9428 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a942b je 0x125a9450 */
  if (C.zf) goto L_125a9450;
  /* 125a942d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9430 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9434 je 0x125a9450 */
  if (C.zf) goto L_125a9450;
  /* 125a9436 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9439 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125a943c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a9442 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9445 je 0x125a9450 */
  if (C.zf) goto L_125a9450;
  /* 125a9447 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a944a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a944e jne 0x125a9468 */
  if (!C.zf) goto L_125a9468;
L_125a9450:;
  /* 125a9450 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9453 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125a9456 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a945c mov edx, dword ptr [ecx*4 + 0x125d1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d1a94)));
  /* 125a9463 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125a9466 jmp 0x125a946f */
  goto L_125a946f;
L_125a9468:;
  /* 125a9468 mov dword ptr [ebp - 0x14], 0x125cefec */
  w32((uint32_t)(EBP + -0x14), (0x125cefecu));
L_125a946f:;
  /* 125a946f push 4 */
  push32((uint32_t)(0x4u));
  /* 125a9471 mov al, byte ptr [0x125d1a90] */
  AL = (r8((uint32_t)(0x125d1a90)));
  /* 125a9476 push eax */
  push32((uint32_t)(EAX));
  /* 125a9477 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a947a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a947d push ecx */
  push32((uint32_t)(ECX));
  /* 125a947e call 0x125a9220 */
  push32(0x125a9483u); f_125a9220();
  /* 125a9483 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9488 jne 0x125a94c4 */
  if (!C.zf) goto L_125a94c4;
L_125a948a:;
  /* 125a948a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a948d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9490 push edx */
  push32((uint32_t)(EDX));
  /* 125a9491 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9494 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 125a9497 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9498 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125a949b push edx */
  push32((uint32_t)(EDX));
  /* 125a949c push 0x125ceec8 */
  push32((uint32_t)(0x125ceec8u));
  /* 125a94a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a94a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a94a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a94a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a94a9 call 0x125a71d0 */
  push32(0x125a94aeu); f_125a71d0();
  /* 125a94ae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a94b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a94b4 jne 0x125a94b7 */
  if (!C.zf) goto L_125a94b7;
  /* 125a94b6 int3  */
  x86_unimpl("int3 @ 0x125a94b6");
L_125a94b7:;
  /* 125a94b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a94b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a94bb jne 0x125a948a */
  if (!C.zf) goto L_125a948a;
  /* 125a94bd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_125a94c4:;
  /* 125a94c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 125a94c6 mov cl, byte ptr [0x125d1a90] */
  CL = (r8((uint32_t)(0x125d1a90)));
  /* 125a94cc push ecx */
  push32((uint32_t)(ECX));
  /* 125a94cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a94d0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125a94d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a94d6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 125a94da push edx */
  push32((uint32_t)(EDX));
  /* 125a94db call 0x125a9220 */
  push32(0x125a94e0u); f_125a9220();
  /* 125a94e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a94e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a94e5 jne 0x125a9521 */
  if (!C.zf) goto L_125a9521;
L_125a94e7:;
  /* 125a94e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a94ea add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a94ed push eax */
  push32((uint32_t)(EAX));
  /* 125a94ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a94f1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125a94f4 push edx */
  push32((uint32_t)(EDX));
  /* 125a94f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125a94f8 push eax */
  push32((uint32_t)(EAX));
  /* 125a94f9 push 0x125cee9c */
  push32((uint32_t)(0x125cee9cu));
  /* 125a94fe push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9500 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9502 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9504 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9506 call 0x125a71d0 */
  push32(0x125a950bu); f_125a71d0();
  /* 125a950b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a950e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9511 jne 0x125a9514 */
  if (!C.zf) goto L_125a9514;
  /* 125a9513 int3  */
  x86_unimpl("int3 @ 0x125a9513");
L_125a9514:;
  /* 125a9514 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a9516 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a9518 jne 0x125a94e7 */
  if (!C.zf) goto L_125a94e7;
  /* 125a951a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_125a9521:;
  /* 125a9521 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9524 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9528 jne 0x125a957a */
  if (!C.zf) goto L_125a957a;
  /* 125a952a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a952d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125a9530 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9531 mov dl, byte ptr [0x125d1a91] */
  DL = (r8((uint32_t)(0x125d1a91)));
  /* 125a9537 push edx */
  push32((uint32_t)(EDX));
  /* 125a9538 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a953b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a953e push eax */
  push32((uint32_t)(EAX));
  /* 125a953f call 0x125a9220 */
  push32(0x125a9544u); f_125a9220();
  /* 125a9544 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9549 jne 0x125a957a */
  if (!C.zf) goto L_125a957a;
L_125a954b:;
  /* 125a954b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a954e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9551 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9552 push 0x125cefc0 */
  push32((uint32_t)(0x125cefc0u));
  /* 125a9557 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9559 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a955b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a955d push 0 */
  push32((uint32_t)(0x0u));
  /* 125a955f call 0x125a71d0 */
  push32(0x125a9564u); f_125a71d0();
  /* 125a9564 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9567 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a956a jne 0x125a956d */
  if (!C.zf) goto L_125a956d;
  /* 125a956c int3  */
  x86_unimpl("int3 @ 0x125a956c");
L_125a956d:;
  /* 125a956d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a956f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a9571 jne 0x125a954b */
  if (!C.zf) goto L_125a954b;
  /* 125a9573 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_125a957a:;
  /* 125a957a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a957e jne 0x125a95f6 */
  if (!C.zf) goto L_125a95f6;
  /* 125a9580 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9583 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9587 je 0x125a95bc */
  if (C.zf) goto L_125a95bc;
L_125a9589:;
  /* 125a9589 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a958c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125a958f push edx */
  push32((uint32_t)(EDX));
  /* 125a9590 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9593 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125a9596 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9597 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125a959a push edx */
  push32((uint32_t)(EDX));
  /* 125a959b push 0x125cefa0 */
  push32((uint32_t)(0x125cefa0u));
  /* 125a95a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a95a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a95a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a95a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a95a8 call 0x125a71d0 */
  push32(0x125a95adu); f_125a71d0();
  /* 125a95ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a95b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a95b3 jne 0x125a95b6 */
  if (!C.zf) goto L_125a95b6;
  /* 125a95b5 int3  */
  x86_unimpl("int3 @ 0x125a95b5");
L_125a95b6:;
  /* 125a95b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a95b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a95ba jne 0x125a9589 */
  if (!C.zf) goto L_125a9589;
L_125a95bc:;
  /* 125a95bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a95bf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 125a95c2 push edx */
  push32((uint32_t)(EDX));
  /* 125a95c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a95c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a95c9 push eax */
  push32((uint32_t)(EAX));
  /* 125a95ca mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125a95cd push ecx */
  push32((uint32_t)(ECX));
  /* 125a95ce push 0x125cef74 */
  push32((uint32_t)(0x125cef74u));
  /* 125a95d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a95d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a95d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a95d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a95db call 0x125a71d0 */
  push32(0x125a95e0u); f_125a71d0();
  /* 125a95e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a95e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a95e6 jne 0x125a95e9 */
  if (!C.zf) goto L_125a95e9;
  /* 125a95e8 int3  */
  x86_unimpl("int3 @ 0x125a95e8");
L_125a95e9:;
  /* 125a95e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a95eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a95ed jne 0x125a95bc */
  if (!C.zf) goto L_125a95bc;
  /* 125a95ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125a95f6:;
  /* 125a95f6 jmp 0x125a9403 */
  goto L_125a9403;
L_125a95fb:;
  /* 125a95fb push 9 */
  push32((uint32_t)(0x9u));
  /* 125a95fd call 0x125abbb0 */
  push32(0x125a9602u); f_125abbb0();
  /* 125a9602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125a9608:;
  /* 125a9608 pop edi */
  EDI = (pop32());
  /* 125a9609 pop esi */
  ESI = (pop32());
  /* 125a960a pop ebx */
  EBX = (pop32());
  /* 125a960b mov esp, ebp */
  ESP = (EBP);
  /* 125a960d pop ebp */
  EBP = (pop32());
  /* 125a960e ret  */
  ESPCHK(0x125a92b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009620 @ 0x125a9620 (34 bytes, 13 insns) */
void f_125a9620(void) {
  FTRACE(0x125a9620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9620 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9621 mov ebp, esp */
  EBP = (ESP);
  /* 125a9623 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9624 mov eax, dword ptr [0x125d1a84] */
  EAX = (r32((uint32_t)(0x125d1a84)));
  /* 125a9629 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a962c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9630 je 0x125a963b */
  if (C.zf) goto L_125a963b;
  /* 125a9632 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9635 mov dword ptr [0x125d1a84], ecx */
  w32((uint32_t)(0x125d1a84), (ECX));
L_125a963b:;
  /* 125a963b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a963e mov esp, ebp */
  ESP = (EBP);
  /* 125a9640 pop ebp */
  EBP = (pop32());
  /* 125a9641 ret  */
  ESPCHK(0x125a9620u, _esp0);
  ESP += 4; return;
}

/* FUN_10009650 @ 0x125a9650 (103 bytes, 38 insns) */
void f_125a9650(void) {
  FTRACE(0x125a9650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9650 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9651 mov ebp, esp */
  EBP = (ESP);
  /* 125a9653 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9654 mov eax, dword ptr [0x125d1a84] */
  EAX = (r32((uint32_t)(0x125d1a84)));
  /* 125a9659 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 125a965c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a965e jne 0x125a9662 */
  if (!C.zf) goto L_125a9662;
  /* 125a9660 jmp 0x125a96b3 */
  goto L_125a96b3;
L_125a9662:;
  /* 125a9662 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a9664 call 0x125abb10 */
  push32(0x125a9669u); f_125abb10();
  /* 125a9669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a966c mov ecx, dword ptr [0x125d392c] */
  ECX = (r32((uint32_t)(0x125d392c)));
  /* 125a9672 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125a9675 jmp 0x125a967f */
  goto L_125a967f;
L_125a9677:;
  /* 125a9677 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a967a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125a967c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125a967f:;
  /* 125a967f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9683 je 0x125a96a9 */
  if (C.zf) goto L_125a96a9;
  /* 125a9685 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9688 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 125a968b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a9691 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9694 jne 0x125a96a7 */
  if (!C.zf) goto L_125a96a7;
  /* 125a9696 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a9699 push eax */
  push32((uint32_t)(EAX));
  /* 125a969a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a969d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a96a0 push ecx */
  push32((uint32_t)(ECX));
  /* 125a96a1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x125a96a4u);
  /* 125a96a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a96a7:;
  /* 125a96a7 jmp 0x125a9677 */
  goto L_125a9677;
L_125a96a9:;
  /* 125a96a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a96ab call 0x125abbb0 */
  push32(0x125a96b0u); f_125abbb0();
  /* 125a96b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a96b3:;
  /* 125a96b3 mov esp, ebp */
  ESP = (EBP);
  /* 125a96b5 pop ebp */
  EBP = (pop32());
  /* 125a96b6 ret  */
  ESPCHK(0x125a9650u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x125a96c0 (75 bytes, 28 insns) */
void f_125a96c0(void) {
  FTRACE(0x125a96c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a96c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a96c1 mov ebp, esp */
  EBP = (ESP);
  /* 125a96c3 push ecx */
  push32((uint32_t)(ECX));
  /* 125a96c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a96c8 je 0x125a96fd */
  if (C.zf) goto L_125a96fd;
  /* 125a96ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a96cd push eax */
  push32((uint32_t)(EAX));
  /* 125a96ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a96d1 push ecx */
  push32((uint32_t)(ECX));
  /* 125a96d2 call dword ptr [0x125d63cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63cc))), 0x125a96d8u);
  /* 125a96d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a96da jne 0x125a96fd */
  if (!C.zf) goto L_125a96fd;
  /* 125a96dc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a96e0 je 0x125a96f4 */
  if (C.zf) goto L_125a96f4;
  /* 125a96e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a96e5 push edx */
  push32((uint32_t)(EDX));
  /* 125a96e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a96e9 push eax */
  push32((uint32_t)(EAX));
  /* 125a96ea call dword ptr [0x125d63bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63bc))), 0x125a96f0u);
  /* 125a96f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a96f2 jne 0x125a96fd */
  if (!C.zf) goto L_125a96fd;
L_125a96f4:;
  /* 125a96f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125a96fb jmp 0x125a9704 */
  goto L_125a9704;
L_125a96fd:;
  /* 125a96fd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125a9704:;
  /* 125a9704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9707 mov esp, ebp */
  ESP = (EBP);
  /* 125a9709 pop ebp */
  EBP = (pop32());
  /* 125a970a ret  */
  ESPCHK(0x125a96c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009710 @ 0x125a9710 (134 bytes, 50 insns) */
void f_125a9710(void) {
  FTRACE(0x125a9710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9710 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9711 mov ebp, esp */
  EBP = (ESP);
  /* 125a9713 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9714 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9718 jne 0x125a971e */
  if (!C.zf) goto L_125a971e;
  /* 125a971a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a971c jmp 0x125a9792 */
  goto L_125a9792;
L_125a971e:;
  /* 125a971e push 1 */
  push32((uint32_t)(0x1u));
  /* 125a9720 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 125a9722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9725 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9728 push eax */
  push32((uint32_t)(EAX));
  /* 125a9729 call 0x125a96c0 */
  push32(0x125a972eu); f_125a96c0();
  /* 125a972e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9733 jne 0x125a9739 */
  if (!C.zf) goto L_125a9739;
  /* 125a9735 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a9737 jmp 0x125a9792 */
  goto L_125a9792;
L_125a9739:;
  /* 125a9739 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a973c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a973f push ecx */
  push32((uint32_t)(ECX));
  /* 125a9740 call 0x125ac410 */
  push32(0x125a9745u); f_125ac410();
  /* 125a9745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9748 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a974b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a974f je 0x125a9766 */
  if (C.zf) goto L_125a9766;
  /* 125a9751 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9754 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9757 push edx */
  push32((uint32_t)(EDX));
  /* 125a9758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a975b push eax */
  push32((uint32_t)(EAX));
  /* 125a975c call 0x125ac470 */
  push32(0x125a9761u); f_125ac470();
  /* 125a9761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9764 jmp 0x125a9792 */
  goto L_125a9792;
L_125a9766:;
  /* 125a9766 mov ecx, dword ptr [0x125d38e0] */
  ECX = (r32((uint32_t)(0x125d38e0)));
  /* 125a976c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 125a9772 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a9774 je 0x125a977d */
  if (C.zf) goto L_125a977d;
  /* 125a9776 mov eax, 1 */
  EAX = (0x1u);
  /* 125a977b jmp 0x125a9792 */
  goto L_125a9792;
L_125a977d:;
  /* 125a977d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9780 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9783 push edx */
  push32((uint32_t)(EDX));
  /* 125a9784 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9786 mov eax, dword ptr [0x125d528c] */
  EAX = (r32((uint32_t)(0x125d528c)));
  /* 125a978b push eax */
  push32((uint32_t)(EAX));
  /* 125a978c call dword ptr [0x125d63d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63d0))), 0x125a9792u);
L_125a9792:;
  /* 125a9792 mov esp, ebp */
  ESP = (EBP);
  /* 125a9794 pop ebp */
  EBP = (pop32());
  /* 125a9795 ret  */
  ESPCHK(0x125a9710u, _esp0);
  ESP += 4; return;
}

/* FUN_100097a0 @ 0x125a97a0 (227 bytes, 80 insns) */
void f_125a97a0(void) {
  FTRACE(0x125a97a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a97a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a97a1 mov ebp, esp */
  EBP = (ESP);
  /* 125a97a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125a97a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a97a7 push eax */
  push32((uint32_t)(EAX));
  /* 125a97a8 call 0x125a9710 */
  push32(0x125a97adu); f_125a9710();
  /* 125a97ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a97b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a97b2 jne 0x125a97bb */
  if (!C.zf) goto L_125a97bb;
  /* 125a97b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a97b6 jmp 0x125a987f */
  goto L_125a987f;
L_125a97bb:;
  /* 125a97bb push 9 */
  push32((uint32_t)(0x9u));
  /* 125a97bd call 0x125abb10 */
  push32(0x125a97c2u); f_125abb10();
  /* 125a97c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a97c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a97c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a97cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125a97ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a97d1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a97d4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a97d9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a97dc je 0x125a9800 */
  if (C.zf) goto L_125a9800;
  /* 125a97de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a97e1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a97e5 je 0x125a9800 */
  if (C.zf) goto L_125a9800;
  /* 125a97e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a97ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a97ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a97f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a97f5 je 0x125a9800 */
  if (C.zf) goto L_125a9800;
  /* 125a97f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a97fa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a97fe jne 0x125a9873 */
  if (!C.zf) goto L_125a9873;
L_125a9800:;
  /* 125a9800 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a9802 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a9805 push edx */
  push32((uint32_t)(EDX));
  /* 125a9806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9809 push eax */
  push32((uint32_t)(EAX));
  /* 125a980a call 0x125a96c0 */
  push32(0x125a980fu); f_125a96c0();
  /* 125a980f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9814 je 0x125a9873 */
  if (C.zf) goto L_125a9873;
  /* 125a9816 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9819 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 125a981c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a981f jne 0x125a9873 */
  if (!C.zf) goto L_125a9873;
  /* 125a9821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9824 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 125a9827 cmp ecx, dword ptr [0x125d1a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d1a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a982d jg 0x125a9873 */
  if ((!C.zf&&C.sf==C.of)) goto L_125a9873;
  /* 125a982f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9833 je 0x125a9840 */
  if (C.zf) goto L_125a9840;
  /* 125a9835 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a9838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a983b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 125a983e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125a9840:;
  /* 125a9840 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9844 je 0x125a9851 */
  if (C.zf) goto L_125a9851;
  /* 125a9846 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125a9849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a984c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125a984f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125a9851:;
  /* 125a9851 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9855 je 0x125a9862 */
  if (C.zf) goto L_125a9862;
  /* 125a9857 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125a985a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a985d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125a9860 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125a9862:;
  /* 125a9862 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a9864 call 0x125abbb0 */
  push32(0x125a9869u); f_125abbb0();
  /* 125a9869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a986c mov eax, 1 */
  EAX = (0x1u);
  /* 125a9871 jmp 0x125a987f */
  goto L_125a987f;
L_125a9873:;
  /* 125a9873 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a9875 call 0x125abbb0 */
  push32(0x125a987au); f_125abbb0();
  /* 125a987a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a987d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125a987f:;
  /* 125a987f mov esp, ebp */
  ESP = (EBP);
  /* 125a9881 pop ebp */
  EBP = (pop32());
  /* 125a9882 ret  */
  ESPCHK(0x125a97a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009890 @ 0x125a9890 (28 bytes, 11 insns) */
void f_125a9890(void) {
  FTRACE(0x125a9890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9890 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9891 mov ebp, esp */
  EBP = (ESP);
  /* 125a9893 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9894 mov eax, dword ptr [0x125d5298] */
  EAX = (r32((uint32_t)(0x125d5298)));
  /* 125a9899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a989c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a989f mov dword ptr [0x125d5298], ecx */
  w32((uint32_t)(0x125d5298), (ECX));
  /* 125a98a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a98a8 mov esp, ebp */
  ESP = (EBP);
  /* 125a98aa pop ebp */
  EBP = (pop32());
  /* 125a98ab ret  */
  ESPCHK(0x125a9890u, _esp0);
  ESP += 4; return;
}

/* FUN_100098b0 @ 0x125a98b0 (362 bytes, 116 insns) */
void f_125a98b0(void) {
  FTRACE(0x125a98b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a98b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a98b1 mov ebp, esp */
  EBP = (ESP);
  /* 125a98b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a98b6 push ebx */
  push32((uint32_t)(EBX));
  /* 125a98b7 push esi */
  push32((uint32_t)(ESI));
  /* 125a98b8 push edi */
  push32((uint32_t)(EDI));
  /* 125a98b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a98bd jne 0x125a98ea */
  if (!C.zf) goto L_125a98ea;
L_125a98bf:;
  /* 125a98bf push 0x125cf0d4 */
  push32((uint32_t)(0x125cf0d4u));
  /* 125a98c4 push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a98c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a98cb push 0 */
  push32((uint32_t)(0x0u));
  /* 125a98cd push 0 */
  push32((uint32_t)(0x0u));
  /* 125a98cf push 0 */
  push32((uint32_t)(0x0u));
  /* 125a98d1 call 0x125a71d0 */
  push32(0x125a98d6u); f_125a71d0();
  /* 125a98d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a98d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a98dc jne 0x125a98df */
  if (!C.zf) goto L_125a98df;
  /* 125a98de int3  */
  x86_unimpl("int3 @ 0x125a98de");
L_125a98df:;
  /* 125a98df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a98e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a98e3 jne 0x125a98bf */
  if (!C.zf) goto L_125a98bf;
  /* 125a98e5 jmp 0x125a9a13 */
  goto L_125a9a13;
L_125a98ea:;
  /* 125a98ea push 9 */
  push32((uint32_t)(0x9u));
  /* 125a98ec call 0x125abb10 */
  push32(0x125a98f1u); f_125abb10();
  /* 125a98f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a98f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a98f7 mov edx, dword ptr [0x125d392c] */
  EDX = (r32((uint32_t)(0x125d392c)));
  /* 125a98fd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 125a98ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125a9906 jmp 0x125a9911 */
  goto L_125a9911;
L_125a9908:;
  /* 125a9908 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a990b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a990e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125a9911:;
  /* 125a9911 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9915 jge 0x125a9935 */
  if ((C.sf==C.of)) goto L_125a9935;
  /* 125a9917 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a991a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a991d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 125a9925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9928 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a992b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 125a9933 jmp 0x125a9908 */
  goto L_125a9908;
L_125a9935:;
  /* 125a9935 mov edx, dword ptr [0x125d392c] */
  EDX = (r32((uint32_t)(0x125d392c)));
  /* 125a993b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125a993e jmp 0x125a9948 */
  goto L_125a9948;
L_125a9940:;
  /* 125a9940 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9943 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125a9945 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125a9948:;
  /* 125a9948 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a994c je 0x125a99f1 */
  if (C.zf) goto L_125a99f1;
  /* 125a9952 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9955 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a9958 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a995d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a995f jl 0x125a99c7 */
  if ((C.sf!=C.of)) goto L_125a99c7;
  /* 125a9961 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9964 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 125a9967 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a996d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9970 jge 0x125a99c7 */
  if ((C.sf==C.of)) goto L_125a99c7;
  /* 125a9972 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9975 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125a9978 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a997e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9981 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 125a9985 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9988 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a998b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 125a998e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a9994 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9997 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 125a999b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a999e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a99a1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a99a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a99a9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 125a99ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a99b0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a99b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a99b6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 125a99b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a99be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a99c1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 125a99c5 jmp 0x125a99ec */
  goto L_125a99ec;
L_125a99c7:;
  /* 125a99c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a99ca push edx */
  push32((uint32_t)(EDX));
  /* 125a99cb push 0x125cf0b0 */
  push32((uint32_t)(0x125cf0b0u));
  /* 125a99d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a99d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a99d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a99d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a99d8 call 0x125a71d0 */
  push32(0x125a99ddu); f_125a71d0();
  /* 125a99dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a99e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a99e3 jne 0x125a99e6 */
  if (!C.zf) goto L_125a99e6;
  /* 125a99e5 int3  */
  x86_unimpl("int3 @ 0x125a99e5");
L_125a99e6:;
  /* 125a99e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a99e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a99ea jne 0x125a99c7 */
  if (!C.zf) goto L_125a99c7;
L_125a99ec:;
  /* 125a99ec jmp 0x125a9940 */
  goto L_125a9940;
L_125a99f1:;
  /* 125a99f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a99f4 mov edx, dword ptr [0x125d3934] */
  EDX = (r32((uint32_t)(0x125d3934)));
  /* 125a99fa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 125a99fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9a00 mov ecx, dword ptr [0x125d3928] */
  ECX = (r32((uint32_t)(0x125d3928)));
  /* 125a9a06 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 125a9a09 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a9a0b call 0x125abbb0 */
  push32(0x125a9a10u); f_125abbb0();
  /* 125a9a10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a9a13:;
  /* 125a9a13 pop edi */
  EDI = (pop32());
  /* 125a9a14 pop esi */
  ESI = (pop32());
  /* 125a9a15 pop ebx */
  EBX = (pop32());
  /* 125a9a16 mov esp, ebp */
  ESP = (EBP);
  /* 125a9a18 pop ebp */
  EBP = (pop32());
  /* 125a9a19 ret  */
  ESPCHK(0x125a98b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a20 @ 0x125a9a20 (291 bytes, 95 insns) */
void f_125a9a20(void) {
  FTRACE(0x125a9a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9a20 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9a21 mov ebp, esp */
  EBP = (ESP);
  /* 125a9a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9a26 push ebx */
  push32((uint32_t)(EBX));
  /* 125a9a27 push esi */
  push32((uint32_t)(ESI));
  /* 125a9a28 push edi */
  push32((uint32_t)(EDI));
  /* 125a9a29 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125a9a30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9a34 je 0x125a9a42 */
  if (C.zf) goto L_125a9a42;
  /* 125a9a36 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9a3a je 0x125a9a42 */
  if (C.zf) goto L_125a9a42;
  /* 125a9a3c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9a40 jne 0x125a9a70 */
  if (!C.zf) goto L_125a9a70;
L_125a9a42:;
  /* 125a9a42 push 0x125cf0fc */
  push32((uint32_t)(0x125cf0fcu));
  /* 125a9a47 push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a9a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9a50 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9a54 call 0x125a71d0 */
  push32(0x125a9a59u); f_125a71d0();
  /* 125a9a59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9a5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9a5f jne 0x125a9a62 */
  if (!C.zf) goto L_125a9a62;
  /* 125a9a61 int3  */
  x86_unimpl("int3 @ 0x125a9a61");
L_125a9a62:;
  /* 125a9a62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a9a64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9a66 jne 0x125a9a42 */
  if (!C.zf) goto L_125a9a42;
  /* 125a9a68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125a9a6b jmp 0x125a9b3c */
  goto L_125a9b3c;
L_125a9a70:;
  /* 125a9a70 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125a9a77 jmp 0x125a9a82 */
  goto L_125a9a82;
L_125a9a79:;
  /* 125a9a79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9a7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9a7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125a9a82:;
  /* 125a9a82 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9a86 jge 0x125a9b0c */
  if ((C.sf==C.of)) goto L_125a9b0c;
  /* 125a9a8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9a8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a9a92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9a95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 125a9a98 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 125a9a9c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9aa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9aa6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 125a9aaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9aad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a9ab0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9ab3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 125a9ab6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 125a9aba sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9abe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9ac1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9ac4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 125a9ac8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9acb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9ace cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9ad3 jne 0x125a9ae2 */
  if (!C.zf) goto L_125a9ae2;
  /* 125a9ad5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9ad8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9adb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9ae0 je 0x125a9b07 */
  if (C.zf) goto L_125a9b07;
L_125a9ae2:;
  /* 125a9ae2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9ae6 je 0x125a9b07 */
  if (C.zf) goto L_125a9b07;
  /* 125a9ae8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9aec jne 0x125a9b00 */
  if (!C.zf) goto L_125a9b00;
  /* 125a9aee cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9af2 jne 0x125a9b07 */
  if (!C.zf) goto L_125a9b07;
  /* 125a9af4 mov eax, dword ptr [0x125d1a84] */
  EAX = (r32((uint32_t)(0x125d1a84)));
  /* 125a9af9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 125a9afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9afe je 0x125a9b07 */
  if (C.zf) goto L_125a9b07;
L_125a9b00:;
  /* 125a9b00 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_125a9b07:;
  /* 125a9b07 jmp 0x125a9a79 */
  goto L_125a9a79;
L_125a9b0c:;
  /* 125a9b0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a9b0f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a9b12 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 125a9b15 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9b18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9b1b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 125a9b1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125a9b21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125a9b24 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 125a9b27 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9b2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9b2d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 125a9b30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9b33 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125a9b39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125a9b3c:;
  /* 125a9b3c pop edi */
  EDI = (pop32());
  /* 125a9b3d pop esi */
  ESI = (pop32());
  /* 125a9b3e pop ebx */
  EBX = (pop32());
  /* 125a9b3f mov esp, ebp */
  ESP = (EBP);
  /* 125a9b41 pop ebp */
  EBP = (pop32());
  /* 125a9b42 ret  */
  ESPCHK(0x125a9a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b50 @ 0x125a9b50 (697 bytes, 253 insns) */
void f_125a9b50(void) {
  FTRACE(0x125a9b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9b50 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9b51 mov ebp, esp */
  EBP = (ESP);
  /* 125a9b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9b56 push ebx */
  push32((uint32_t)(EBX));
  /* 125a9b57 push esi */
  push32((uint32_t)(ESI));
  /* 125a9b58 push edi */
  push32((uint32_t)(EDI));
  /* 125a9b59 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125a9b60 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a9b62 call 0x125abb10 */
  push32(0x125a9b67u); f_125abb10();
  /* 125a9b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a9b6a:;
  /* 125a9b6a push 0x125cf1f4 */
  push32((uint32_t)(0x125cf1f4u));
  /* 125a9b6f push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a9b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9b7c call 0x125a71d0 */
  push32(0x125a9b81u); f_125a71d0();
  /* 125a9b81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9b84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9b87 jne 0x125a9b8a */
  if (!C.zf) goto L_125a9b8a;
  /* 125a9b89 int3  */
  x86_unimpl("int3 @ 0x125a9b89");
L_125a9b8a:;
  /* 125a9b8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a9b8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9b8e jne 0x125a9b6a */
  if (!C.zf) goto L_125a9b6a;
  /* 125a9b90 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9b94 je 0x125a9b9e */
  if (C.zf) goto L_125a9b9e;
  /* 125a9b96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9b99 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125a9b9b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125a9b9e:;
  /* 125a9b9e mov eax, dword ptr [0x125d392c] */
  EAX = (r32((uint32_t)(0x125d392c)));
  /* 125a9ba3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125a9ba6 jmp 0x125a9bb0 */
  goto L_125a9bb0;
L_125a9ba8:;
  /* 125a9ba8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9bab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125a9bad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125a9bb0:;
  /* 125a9bb0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9bb4 je 0x125a9dd2 */
  if (C.zf) goto L_125a9dd2;
  /* 125a9bba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9bbd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9bc0 je 0x125a9dd2 */
  if (C.zf) goto L_125a9dd2;
  /* 125a9bc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9bc9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 125a9bcc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a9bd2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9bd5 je 0x125a9c04 */
  if (C.zf) goto L_125a9c04;
  /* 125a9bd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9bda mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125a9bdd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a9be3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a9be5 je 0x125a9c04 */
  if (C.zf) goto L_125a9c04;
  /* 125a9be7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9bea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a9bed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a9bf2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9bf5 jne 0x125a9c09 */
  if (!C.zf) goto L_125a9c09;
  /* 125a9bf7 mov ecx, dword ptr [0x125d1a84] */
  ECX = (r32((uint32_t)(0x125d1a84)));
  /* 125a9bfd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 125a9c00 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a9c02 jne 0x125a9c09 */
  if (!C.zf) goto L_125a9c09;
L_125a9c04:;
  /* 125a9c04 jmp 0x125a9dcd */
  goto L_125a9dcd;
L_125a9c09:;
  /* 125a9c09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9c0c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9c10 je 0x125a9c82 */
  if (C.zf) goto L_125a9c82;
  /* 125a9c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c14 push 1 */
  push32((uint32_t)(0x1u));
  /* 125a9c16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9c19 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125a9c1c push ecx */
  push32((uint32_t)(ECX));
  /* 125a9c1d call 0x125a96c0 */
  push32(0x125a9c22u); f_125a96c0();
  /* 125a9c22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9c25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9c27 jne 0x125a9c53 */
  if (!C.zf) goto L_125a9c53;
L_125a9c29:;
  /* 125a9c29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9c2c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125a9c2f push eax */
  push32((uint32_t)(EAX));
  /* 125a9c30 push 0x125cf1e0 */
  push32((uint32_t)(0x125cf1e0u));
  /* 125a9c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c3d call 0x125a71d0 */
  push32(0x125a9c42u); f_125a71d0();
  /* 125a9c42 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9c45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9c48 jne 0x125a9c4b */
  if (!C.zf) goto L_125a9c4b;
  /* 125a9c4a int3  */
  x86_unimpl("int3 @ 0x125a9c4a");
L_125a9c4b:;
  /* 125a9c4b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a9c4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a9c4f jne 0x125a9c29 */
  if (!C.zf) goto L_125a9c29;
  /* 125a9c51 jmp 0x125a9c82 */
  goto L_125a9c82;
L_125a9c53:;
  /* 125a9c53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9c56 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125a9c59 push eax */
  push32((uint32_t)(EAX));
  /* 125a9c5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9c5d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125a9c60 push edx */
  push32((uint32_t)(EDX));
  /* 125a9c61 push 0x125cf1d4 */
  push32((uint32_t)(0x125cf1d4u));
  /* 125a9c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c6e call 0x125a71d0 */
  push32(0x125a9c73u); f_125a71d0();
  /* 125a9c73 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9c76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9c79 jne 0x125a9c7c */
  if (!C.zf) goto L_125a9c7c;
  /* 125a9c7b int3  */
  x86_unimpl("int3 @ 0x125a9c7b");
L_125a9c7c:;
  /* 125a9c7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a9c7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9c80 jne 0x125a9c53 */
  if (!C.zf) goto L_125a9c53;
L_125a9c82:;
  /* 125a9c82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9c85 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125a9c88 push edx */
  push32((uint32_t)(EDX));
  /* 125a9c89 push 0x125cf1cc */
  push32((uint32_t)(0x125cf1ccu));
  /* 125a9c8e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c94 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9c96 call 0x125a71d0 */
  push32(0x125a9c9bu); f_125a71d0();
  /* 125a9c9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9c9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9ca1 jne 0x125a9ca4 */
  if (!C.zf) goto L_125a9ca4;
  /* 125a9ca3 int3  */
  x86_unimpl("int3 @ 0x125a9ca3");
L_125a9ca4:;
  /* 125a9ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125a9ca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125a9ca8 jne 0x125a9c82 */
  if (!C.zf) goto L_125a9c82;
  /* 125a9caa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9cad mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 125a9cb0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a9cb6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9cb9 jne 0x125a9d2c */
  if (!C.zf) goto L_125a9d2c;
L_125a9cbb:;
  /* 125a9cbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9cbe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125a9cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9cc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9cc5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a9cc8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 125a9ccb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a9cd0 push eax */
  push32((uint32_t)(EAX));
  /* 125a9cd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9cd4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9cd7 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9cd8 push 0x125cf198 */
  push32((uint32_t)(0x125cf198u));
  /* 125a9cdd push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9cdf push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9ce5 call 0x125a71d0 */
  push32(0x125a9ceau); f_125a71d0();
  /* 125a9cea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9ced cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9cf0 jne 0x125a9cf3 */
  if (!C.zf) goto L_125a9cf3;
  /* 125a9cf2 int3  */
  x86_unimpl("int3 @ 0x125a9cf2");
L_125a9cf3:;
  /* 125a9cf3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a9cf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a9cf7 jne 0x125a9cbb */
  if (!C.zf) goto L_125a9cbb;
  /* 125a9cf9 cmp dword ptr [0x125d5298], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d5298))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9d00 je 0x125a9d1b */
  if (C.zf) goto L_125a9d1b;
  /* 125a9d02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9d05 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125a9d08 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9d09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9d0c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9d0f push edx */
  push32((uint32_t)(EDX));
  /* 125a9d10 call dword ptr [0x125d5298] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d5298))), 0x125a9d16u);
  /* 125a9d16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9d19 jmp 0x125a9d27 */
  goto L_125a9d27;
L_125a9d1b:;
  /* 125a9d1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9d1e push eax */
  push32((uint32_t)(EAX));
  /* 125a9d1f call 0x125a9e10 */
  push32(0x125a9d24u); f_125a9e10();
  /* 125a9d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a9d27:;
  /* 125a9d27 jmp 0x125a9dcd */
  goto L_125a9dcd;
L_125a9d2c:;
  /* 125a9d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9d2f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9d33 jne 0x125a9d72 */
  if (!C.zf) goto L_125a9d72;
L_125a9d35:;
  /* 125a9d35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9d38 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125a9d3b push eax */
  push32((uint32_t)(EAX));
  /* 125a9d3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9d3f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9d42 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9d43 push 0x125cf170 */
  push32((uint32_t)(0x125cf170u));
  /* 125a9d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9d50 call 0x125a71d0 */
  push32(0x125a9d55u); f_125a71d0();
  /* 125a9d55 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9d58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9d5b jne 0x125a9d5e */
  if (!C.zf) goto L_125a9d5e;
  /* 125a9d5d int3  */
  x86_unimpl("int3 @ 0x125a9d5d");
L_125a9d5e:;
  /* 125a9d5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a9d60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a9d62 jne 0x125a9d35 */
  if (!C.zf) goto L_125a9d35;
  /* 125a9d64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9d67 push eax */
  push32((uint32_t)(EAX));
  /* 125a9d68 call 0x125a9e10 */
  push32(0x125a9d6du); f_125a9e10();
  /* 125a9d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9d70 jmp 0x125a9dcd */
  goto L_125a9dcd;
L_125a9d72:;
  /* 125a9d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9d75 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 125a9d78 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a9d7e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9d81 jne 0x125a9dcd */
  if (!C.zf) goto L_125a9dcd;
L_125a9d83:;
  /* 125a9d83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9d86 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125a9d89 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9d8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9d8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125a9d90 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 125a9d93 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125a9d98 push eax */
  push32((uint32_t)(EAX));
  /* 125a9d99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9d9c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9d9f push ecx */
  push32((uint32_t)(ECX));
  /* 125a9da0 push 0x125cf13c */
  push32((uint32_t)(0x125cf13cu));
  /* 125a9da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9dab push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9dad call 0x125a71d0 */
  push32(0x125a9db2u); f_125a71d0();
  /* 125a9db2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9db5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9db8 jne 0x125a9dbb */
  if (!C.zf) goto L_125a9dbb;
  /* 125a9dba int3  */
  x86_unimpl("int3 @ 0x125a9dba");
L_125a9dbb:;
  /* 125a9dbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a9dbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a9dbf jne 0x125a9d83 */
  if (!C.zf) goto L_125a9d83;
  /* 125a9dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9dc4 push eax */
  push32((uint32_t)(EAX));
  /* 125a9dc5 call 0x125a9e10 */
  push32(0x125a9dcau); f_125a9e10();
  /* 125a9dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a9dcd:;
  /* 125a9dcd jmp 0x125a9ba8 */
  goto L_125a9ba8;
L_125a9dd2:;
  /* 125a9dd2 push 9 */
  push32((uint32_t)(0x9u));
  /* 125a9dd4 call 0x125abbb0 */
  push32(0x125a9dd9u); f_125abbb0();
  /* 125a9dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125a9ddc:;
  /* 125a9ddc push 0x125cf124 */
  push32((uint32_t)(0x125cf124u));
  /* 125a9de1 push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a9de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9dea push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9dec push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9dee call 0x125a71d0 */
  push32(0x125a9df3u); f_125a71d0();
  /* 125a9df3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9df6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9df9 jne 0x125a9dfc */
  if (!C.zf) goto L_125a9dfc;
  /* 125a9dfb int3  */
  x86_unimpl("int3 @ 0x125a9dfb");
L_125a9dfc:;
  /* 125a9dfc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a9dfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a9e00 jne 0x125a9ddc */
  if (!C.zf) goto L_125a9ddc;
  /* 125a9e02 pop edi */
  EDI = (pop32());
  /* 125a9e03 pop esi */
  ESI = (pop32());
  /* 125a9e04 pop ebx */
  EBX = (pop32());
  /* 125a9e05 mov esp, ebp */
  ESP = (EBP);
  /* 125a9e07 pop ebp */
  EBP = (pop32());
  /* 125a9e08 ret  */
  ESPCHK(0x125a9b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e10 @ 0x125a9e10 (276 bytes, 89 insns) */
void f_125a9e10(void) {
  FTRACE(0x125a9e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9e10 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9e11 mov ebp, esp */
  EBP = (ESP);
  /* 125a9e13 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9e16 push ebx */
  push32((uint32_t)(EBX));
  /* 125a9e17 push esi */
  push32((uint32_t)(ESI));
  /* 125a9e18 push edi */
  push32((uint32_t)(EDI));
  /* 125a9e19 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 125a9e20 jmp 0x125a9e2b */
  goto L_125a9e2b;
L_125a9e22:;
  /* 125a9e22 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 125a9e25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9e28 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_125a9e2b:;
  /* 125a9e2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9e2e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9e32 jge 0x125a9e3f */
  if ((C.sf==C.of)) goto L_125a9e3f;
  /* 125a9e34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9e37 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 125a9e3a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 125a9e3d jmp 0x125a9e46 */
  goto L_125a9e46;
L_125a9e3f:;
  /* 125a9e3f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_125a9e46:;
  /* 125a9e46 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 125a9e49 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9e4c jge 0x125a9eec */
  if ((C.sf==C.of)) goto L_125a9eec;
  /* 125a9e52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9e55 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9e58 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 125a9e5b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 125a9e5e cmp dword ptr [0x125d1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9e65 jle 0x125a9e83 */
  if ((C.zf||C.sf!=C.of)) goto L_125a9e83;
  /* 125a9e67 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 125a9e6c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a9e6f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125a9e75 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9e76 call 0x125ae120 */
  push32(0x125a9e7bu); f_125ae120();
  /* 125a9e7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9e7e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 125a9e81 jmp 0x125a9ea0 */
  goto L_125a9ea0;
L_125a9e83:;
  /* 125a9e83 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a9e86 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a9e8c mov eax, dword ptr [0x125d1c98] */
  EAX = (r32((uint32_t)(0x125d1c98)));
  /* 125a9e91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125a9e93 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 125a9e97 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 125a9e9d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_125a9ea0:;
  /* 125a9ea0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9ea4 je 0x125a9eb4 */
  if (C.zf) goto L_125a9eb4;
  /* 125a9ea6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a9ea9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a9eaf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 125a9eb2 jmp 0x125a9ebb */
  goto L_125a9ebb;
L_125a9eb4:;
  /* 125a9eb4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_125a9ebb:;
  /* 125a9ebb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 125a9ebe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 125a9ec1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 125a9ec5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 125a9ec8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125a9ece push edx */
  push32((uint32_t)(EDX));
  /* 125a9ecf push 0x125cf218 */
  push32((uint32_t)(0x125cf218u));
  /* 125a9ed4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 125a9ed7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125a9eda lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 125a9ede push ecx */
  push32((uint32_t)(ECX));
  /* 125a9edf call 0x125ae020 */
  push32(0x125a9ee4u); f_125ae020();
  /* 125a9ee4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9ee7 jmp 0x125a9e22 */
  goto L_125a9e22;
L_125a9eec:;
  /* 125a9eec mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 125a9eef mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_125a9ef4:;
  /* 125a9ef4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 125a9ef7 push eax */
  push32((uint32_t)(EAX));
  /* 125a9ef8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 125a9efb push ecx */
  push32((uint32_t)(ECX));
  /* 125a9efc push 0x125cf208 */
  push32((uint32_t)(0x125cf208u));
  /* 125a9f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9f09 call 0x125a71d0 */
  push32(0x125a9f0eu); f_125a71d0();
  /* 125a9f0e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9f11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9f14 jne 0x125a9f17 */
  if (!C.zf) goto L_125a9f17;
  /* 125a9f16 int3  */
  x86_unimpl("int3 @ 0x125a9f16");
L_125a9f17:;
  /* 125a9f17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a9f19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a9f1b jne 0x125a9ef4 */
  if (!C.zf) goto L_125a9ef4;
  /* 125a9f1d pop edi */
  EDI = (pop32());
  /* 125a9f1e pop esi */
  ESI = (pop32());
  /* 125a9f1f pop ebx */
  EBX = (pop32());
  /* 125a9f20 mov esp, ebp */
  ESP = (EBP);
  /* 125a9f22 pop ebp */
  EBP = (pop32());
  /* 125a9f23 ret  */
  ESPCHK(0x125a9e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f30 @ 0x125a9f30 (116 bytes, 46 insns) */
void f_125a9f30(void) {
  FTRACE(0x125a9f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9f30 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9f31 mov ebp, esp */
  EBP = (ESP);
  /* 125a9f33 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125a9f36 push ebx */
  push32((uint32_t)(EBX));
  /* 125a9f37 push esi */
  push32((uint32_t)(ESI));
  /* 125a9f38 push edi */
  push32((uint32_t)(EDI));
  /* 125a9f39 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 125a9f3c push eax */
  push32((uint32_t)(EAX));
  /* 125a9f3d call 0x125a98b0 */
  push32(0x125a9f42u); f_125a98b0();
  /* 125a9f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9f45 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9f49 jne 0x125a9f64 */
  if (!C.zf) goto L_125a9f64;
  /* 125a9f4b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9f4f jne 0x125a9f64 */
  if (!C.zf) goto L_125a9f64;
  /* 125a9f51 mov ecx, dword ptr [0x125d1a84] */
  ECX = (r32((uint32_t)(0x125d1a84)));
  /* 125a9f57 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 125a9f5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125a9f5c je 0x125a9f9b */
  if (C.zf) goto L_125a9f9b;
  /* 125a9f5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9f62 je 0x125a9f9b */
  if (C.zf) goto L_125a9f9b;
L_125a9f64:;
  /* 125a9f64 push 0x125cf220 */
  push32((uint32_t)(0x125cf220u));
  /* 125a9f69 push 0x125cebec */
  push32((uint32_t)(0x125cebecu));
  /* 125a9f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9f76 call 0x125a71d0 */
  push32(0x125a9f7bu); f_125a71d0();
  /* 125a9f7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9f7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9f81 jne 0x125a9f84 */
  if (!C.zf) goto L_125a9f84;
  /* 125a9f83 int3  */
  x86_unimpl("int3 @ 0x125a9f83");
L_125a9f84:;
  /* 125a9f84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125a9f86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125a9f88 jne 0x125a9f64 */
  if (!C.zf) goto L_125a9f64;
  /* 125a9f8a push 0 */
  push32((uint32_t)(0x0u));
  /* 125a9f8c call 0x125a9b50 */
  push32(0x125a9f91u); f_125a9b50();
  /* 125a9f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9f94 mov eax, 1 */
  EAX = (0x1u);
  /* 125a9f99 jmp 0x125a9f9d */
  goto L_125a9f9d;
L_125a9f9b:;
  /* 125a9f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125a9f9d:;
  /* 125a9f9d pop edi */
  EDI = (pop32());
  /* 125a9f9e pop esi */
  ESI = (pop32());
  /* 125a9f9f pop ebx */
  EBX = (pop32());
  /* 125a9fa0 mov esp, ebp */
  ESP = (EBP);
  /* 125a9fa2 pop ebp */
  EBP = (pop32());
  /* 125a9fa3 ret  */
  ESPCHK(0x125a9f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fb0 @ 0x125a9fb0 (197 bytes, 79 insns) */
void f_125a9fb0(void) {
  FTRACE(0x125a9fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125a9fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 125a9fb1 mov ebp, esp */
  EBP = (ESP);
  /* 125a9fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 125a9fb4 push ebx */
  push32((uint32_t)(EBX));
  /* 125a9fb5 push esi */
  push32((uint32_t)(ESI));
  /* 125a9fb6 push edi */
  push32((uint32_t)(EDI));
  /* 125a9fb7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9fbb jne 0x125a9fc2 */
  if (!C.zf) goto L_125a9fc2;
  /* 125a9fbd jmp 0x125aa06e */
  goto L_125aa06e;
L_125a9fc2:;
  /* 125a9fc2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125a9fc9 jmp 0x125a9fd4 */
  goto L_125a9fd4;
L_125a9fcb:;
  /* 125a9fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9fce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125a9fd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125a9fd4:;
  /* 125a9fd4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125a9fd8 jge 0x125aa01e */
  if ((C.sf==C.of)) goto L_125aa01e;
L_125a9fda:;
  /* 125a9fda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9fdd mov edx, dword ptr [ecx*4 + 0x125d1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d1a94)));
  /* 125a9fe4 push edx */
  push32((uint32_t)(EDX));
  /* 125a9fe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9fe8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9feb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 125a9fef push edx */
  push32((uint32_t)(EDX));
  /* 125a9ff0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125a9ff3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125a9ff6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 125a9ffa push edx */
  push32((uint32_t)(EDX));
  /* 125a9ffb push 0x125cf27c */
  push32((uint32_t)(0x125cf27cu));
  /* 125aa000 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa002 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa004 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa006 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa008 call 0x125a71d0 */
  push32(0x125aa00du); f_125a71d0();
  /* 125aa00d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa010 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa013 jne 0x125aa016 */
  if (!C.zf) goto L_125aa016;
  /* 125aa015 int3  */
  x86_unimpl("int3 @ 0x125aa015");
L_125aa016:;
  /* 125aa016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aa01a jne 0x125a9fda */
  if (!C.zf) goto L_125a9fda;
  /* 125aa01c jmp 0x125a9fcb */
  goto L_125a9fcb;
L_125aa01e:;
  /* 125aa01e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aa021 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 125aa024 push edx */
  push32((uint32_t)(EDX));
  /* 125aa025 push 0x125cf258 */
  push32((uint32_t)(0x125cf258u));
  /* 125aa02a push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa02c push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa02e push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa030 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa032 call 0x125a71d0 */
  push32(0x125aa037u); f_125a71d0();
  /* 125aa037 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa03a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa03d jne 0x125aa040 */
  if (!C.zf) goto L_125aa040;
  /* 125aa03f int3  */
  x86_unimpl("int3 @ 0x125aa03f");
L_125aa040:;
  /* 125aa040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa042 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aa044 jne 0x125aa01e */
  if (!C.zf) goto L_125aa01e;
L_125aa046:;
  /* 125aa046 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aa049 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 125aa04c push edx */
  push32((uint32_t)(EDX));
  /* 125aa04d push 0x125cf238 */
  push32((uint32_t)(0x125cf238u));
  /* 125aa052 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa054 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa056 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa058 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa05a call 0x125a71d0 */
  push32(0x125aa05fu); f_125a71d0();
  /* 125aa05f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa062 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa065 jne 0x125aa068 */
  if (!C.zf) goto L_125aa068;
  /* 125aa067 int3  */
  x86_unimpl("int3 @ 0x125aa067");
L_125aa068:;
  /* 125aa068 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa06a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aa06c jne 0x125aa046 */
  if (!C.zf) goto L_125aa046;
L_125aa06e:;
  /* 125aa06e pop edi */
  EDI = (pop32());
  /* 125aa06f pop esi */
  ESI = (pop32());
  /* 125aa070 pop ebx */
  EBX = (pop32());
  /* 125aa071 mov esp, ebp */
  ESP = (EBP);
  /* 125aa073 pop ebp */
  EBP = (pop32());
  /* 125aa074 ret  */
  ESPCHK(0x125a9fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a080 @ 0x125aa080 (329 bytes, 102 insns) */
void f_125aa080(void) {
  FTRACE(0x125aa080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aa080 push ebp */
  push32((uint32_t)(EBP));
  /* 125aa081 mov ebp, esp */
  EBP = (ESP);
  /* 125aa083 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aa086 cmp dword ptr [0x125d5410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d5410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa08d jne 0x125aa094 */
  if (!C.zf) goto L_125aa094;
  /* 125aa08f call 0x125ae9c0 */
  push32(0x125aa094u); f_125ae9c0();
L_125aa094:;
  /* 125aa094 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125aa09b mov eax, dword ptr [0x125d38c8] */
  EAX = (r32((uint32_t)(0x125d38c8)));
  /* 125aa0a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125aa0a3:;
  /* 125aa0a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa0a6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125aa0a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aa0ab je 0x125aa0d9 */
  if (C.zf) goto L_125aa0d9;
  /* 125aa0ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa0b0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125aa0b3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa0b6 je 0x125aa0c1 */
  if (C.zf) goto L_125aa0c1;
  /* 125aa0b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa0bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa0be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125aa0c1:;
  /* 125aa0c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa0c4 push eax */
  push32((uint32_t)(EAX));
  /* 125aa0c5 call 0x125aaf40 */
  push32(0x125aa0cau); f_125aaf40();
  /* 125aa0ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa0cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa0d0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125aa0d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125aa0d7 jmp 0x125aa0a3 */
  goto L_125aa0a3;
L_125aa0d9:;
  /* 125aa0d9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 125aa0db push 0x125cf29c */
  push32((uint32_t)(0x125cf29cu));
  /* 125aa0e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 125aa0e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa0e5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 125aa0ec push ecx */
  push32((uint32_t)(ECX));
  /* 125aa0ed call 0x125a8110 */
  push32(0x125aa0f2u); f_125a8110();
  /* 125aa0f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa0f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125aa0f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa0fb mov dword ptr [0x125d38fc], edx */
  w32((uint32_t)(0x125d38fc), (EDX));
  /* 125aa101 cmp dword ptr [0x125d38fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d38fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa108 jne 0x125aa114 */
  if (!C.zf) goto L_125aa114;
  /* 125aa10a push 9 */
  push32((uint32_t)(0x9u));
  /* 125aa10c call 0x125a7080 */
  push32(0x125aa111u); f_125a7080();
  /* 125aa111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125aa114:;
  /* 125aa114 mov eax, dword ptr [0x125d38c8] */
  EAX = (r32((uint32_t)(0x125d38c8)));
  /* 125aa119 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125aa11c jmp 0x125aa127 */
  goto L_125aa127;
L_125aa11e:;
  /* 125aa11e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa121 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa124 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125aa127:;
  /* 125aa127 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa12a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125aa12d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aa12f je 0x125aa197 */
  if (C.zf) goto L_125aa197;
  /* 125aa131 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa134 push ecx */
  push32((uint32_t)(ECX));
  /* 125aa135 call 0x125aaf40 */
  push32(0x125aa13au); f_125aaf40();
  /* 125aa13a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa13d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa140 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125aa143 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa146 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125aa149 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa14c je 0x125aa195 */
  if (C.zf) goto L_125aa195;
  /* 125aa14e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 125aa150 push 0x125cf29c */
  push32((uint32_t)(0x125cf29cu));
  /* 125aa155 push 2 */
  push32((uint32_t)(0x2u));
  /* 125aa157 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa15a push ecx */
  push32((uint32_t)(ECX));
  /* 125aa15b call 0x125a8110 */
  push32(0x125aa160u); f_125a8110();
  /* 125aa160 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa163 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa166 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125aa168 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa16b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa16e jne 0x125aa17a */
  if (!C.zf) goto L_125aa17a;
  /* 125aa170 push 9 */
  push32((uint32_t)(0x9u));
  /* 125aa172 call 0x125a7080 */
  push32(0x125aa177u); f_125a7080();
  /* 125aa177 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125aa17a:;
  /* 125aa17a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa17d push ecx */
  push32((uint32_t)(ECX));
  /* 125aa17e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa181 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125aa183 push eax */
  push32((uint32_t)(EAX));
  /* 125aa184 call 0x125ab0c0 */
  push32(0x125aa189u); f_125ab0c0();
  /* 125aa189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa18c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa18f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa192 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_125aa195:;
  /* 125aa195 jmp 0x125aa11e */
  goto L_125aa11e;
L_125aa197:;
  /* 125aa197 push 2 */
  push32((uint32_t)(0x2u));
  /* 125aa199 mov edx, dword ptr [0x125d38c8] */
  EDX = (r32((uint32_t)(0x125d38c8)));
  /* 125aa19f push edx */
  push32((uint32_t)(EDX));
  /* 125aa1a0 call 0x125a8ba0 */
  push32(0x125aa1a5u); f_125a8ba0();
  /* 125aa1a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa1a8 mov dword ptr [0x125d38c8], 0 */
  w32((uint32_t)(0x125d38c8), (0x0u));
  /* 125aa1b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa1b5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125aa1bb mov dword ptr [0x125d5400], 1 */
  w32((uint32_t)(0x125d5400), (0x1u));
  /* 125aa1c5 mov esp, ebp */
  ESP = (EBP);
  /* 125aa1c7 pop ebp */
  EBP = (pop32());
  /* 125aa1c8 ret  */
  ESPCHK(0x125aa080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1d0 @ 0x125aa1d0 (216 bytes, 69 insns) */
void f_125aa1d0(void) {
  FTRACE(0x125aa1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aa1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125aa1d1 mov ebp, esp */
  EBP = (ESP);
  /* 125aa1d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aa1d6 cmp dword ptr [0x125d5410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d5410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa1dd jne 0x125aa1e4 */
  if (!C.zf) goto L_125aa1e4;
  /* 125aa1df call 0x125ae9c0 */
  push32(0x125aa1e4u); f_125ae9c0();
L_125aa1e4:;
  /* 125aa1e4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 125aa1e9 push 0x125d3938 */
  push32((uint32_t)(0x125d3938u));
  /* 125aa1ee push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa1f0 call dword ptr [0x125d638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d638c))), 0x125aa1f6u);
  /* 125aa1f6 mov dword ptr [0x125d390c], 0x125d3938 */
  w32((uint32_t)(0x125d390c), (0x125d3938u));
  /* 125aa200 mov eax, dword ptr [0x125d542c] */
  EAX = (r32((uint32_t)(0x125d542c)));
  /* 125aa205 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125aa208 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125aa20a jne 0x125aa217 */
  if (!C.zf) goto L_125aa217;
  /* 125aa20c mov edx, dword ptr [0x125d390c] */
  EDX = (r32((uint32_t)(0x125d390c)));
  /* 125aa212 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125aa215 jmp 0x125aa21f */
  goto L_125aa21f;
L_125aa217:;
  /* 125aa217 mov eax, dword ptr [0x125d542c] */
  EAX = (r32((uint32_t)(0x125d542c)));
  /* 125aa21c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_125aa21f:;
  /* 125aa21f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125aa222 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125aa225 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 125aa228 push edx */
  push32((uint32_t)(EDX));
  /* 125aa229 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 125aa22c push eax */
  push32((uint32_t)(EAX));
  /* 125aa22d push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa22f push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa231 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa234 push ecx */
  push32((uint32_t)(ECX));
  /* 125aa235 call 0x125aa2b0 */
  push32(0x125aa23au); f_125aa2b0();
  /* 125aa23a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa23d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 125aa242 push 0x125cf2a8 */
  push32((uint32_t)(0x125cf2a8u));
  /* 125aa247 push 2 */
  push32((uint32_t)(0x2u));
  /* 125aa249 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa24c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa24f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 125aa252 push ecx */
  push32((uint32_t)(ECX));
  /* 125aa253 call 0x125a8110 */
  push32(0x125aa258u); f_125a8110();
  /* 125aa258 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa25b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125aa25e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa262 jne 0x125aa26e */
  if (!C.zf) goto L_125aa26e;
  /* 125aa264 push 8 */
  push32((uint32_t)(0x8u));
  /* 125aa266 call 0x125a7080 */
  push32(0x125aa26bu); f_125a7080();
  /* 125aa26b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125aa26e:;
  /* 125aa26e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 125aa271 push edx */
  push32((uint32_t)(EDX));
  /* 125aa272 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 125aa275 push eax */
  push32((uint32_t)(EAX));
  /* 125aa276 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa279 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa27c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 125aa27f push eax */
  push32((uint32_t)(EAX));
  /* 125aa280 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa283 push ecx */
  push32((uint32_t)(ECX));
  /* 125aa284 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa287 push edx */
  push32((uint32_t)(EDX));
  /* 125aa288 call 0x125aa2b0 */
  push32(0x125aa28du); f_125aa2b0();
  /* 125aa28d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa290 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa293 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aa296 mov dword ptr [0x125d38f0], eax */
  w32((uint32_t)(0x125d38f0), (EAX));
  /* 125aa29b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa29e mov dword ptr [0x125d38f4], ecx */
  w32((uint32_t)(0x125d38f4), (ECX));
  /* 125aa2a4 mov esp, ebp */
  ESP = (EBP);
  /* 125aa2a6 pop ebp */
  EBP = (pop32());
  /* 125aa2a7 ret  */
  ESPCHK(0x125aa1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2b0 @ 0x125aa2b0 (1060 bytes, 360 insns) */
void f_125aa2b0(void) {
  FTRACE(0x125aa2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aa2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125aa2b1 mov ebp, esp */
  EBP = (ESP);
  /* 125aa2b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aa2b6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa2b9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125aa2bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125aa2c2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 125aa2c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aa2cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125aa2ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa2d2 je 0x125aa2e5 */
  if (C.zf) goto L_125aa2e5;
  /* 125aa2d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aa2d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa2da mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125aa2dc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aa2df add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa2e2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_125aa2e5:;
  /* 125aa2e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa2e8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125aa2eb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa2ee jne 0x125aa3bd */
  if (!C.zf) goto L_125aa3bd;
L_125aa2f4:;
  /* 125aa2f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa2f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa2fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125aa2fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa300 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125aa303 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa306 je 0x125aa382 */
  if (C.zf) goto L_125aa382;
  /* 125aa308 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa30b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125aa30e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aa310 je 0x125aa382 */
  if (C.zf) goto L_125aa382;
  /* 125aa312 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa315 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aa317 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125aa319 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa31b mov al, byte ptr [edx + 0x125d5161] */
  AL = (r8((uint32_t)(EDX + 0x125d5161)));
  /* 125aa321 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 125aa324 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aa326 je 0x125aa357 */
  if (C.zf) goto L_125aa357;
  /* 125aa328 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa32b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125aa32d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa330 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa333 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125aa335 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa339 je 0x125aa357 */
  if (C.zf) goto L_125aa357;
  /* 125aa33b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa33e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa341 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125aa343 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125aa345 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa348 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa34b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 125aa34e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa351 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa354 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125aa357:;
  /* 125aa357 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa35a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125aa35c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa35f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa362 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125aa364 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa368 je 0x125aa37d */
  if (C.zf) goto L_125aa37d;
  /* 125aa36a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa36d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa370 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125aa372 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125aa374 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa377 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa37a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_125aa37d:;
  /* 125aa37d jmp 0x125aa2f4 */
  goto L_125aa2f4;
L_125aa382:;
  /* 125aa382 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa385 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125aa387 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa38a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa38d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125aa38f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa393 je 0x125aa3a4 */
  if (C.zf) goto L_125aa3a4;
  /* 125aa395 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa398 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 125aa39b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa39e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa3a1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_125aa3a4:;
  /* 125aa3a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa3a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125aa3aa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa3ad jne 0x125aa3b8 */
  if (!C.zf) goto L_125aa3b8;
  /* 125aa3af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa3b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa3b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125aa3b8:;
  /* 125aa3b8 jmp 0x125aa48c */
  goto L_125aa48c;
L_125aa3bd:;
  /* 125aa3bd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa3c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125aa3c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa3c5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa3c8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125aa3ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa3ce je 0x125aa3e3 */
  if (C.zf) goto L_125aa3e3;
  /* 125aa3d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa3d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa3d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125aa3d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125aa3da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa3dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa3e0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_125aa3e3:;
  /* 125aa3e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa3e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125aa3e8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 125aa3eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa3ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa3f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125aa3f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa3f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125aa3fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aa3ff mov dl, byte ptr [ecx + 0x125d5161] */
  DL = (r8((uint32_t)(ECX + 0x125d5161)));
  /* 125aa405 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125aa408 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aa40a je 0x125aa43b */
  if (C.zf) goto L_125aa43b;
  /* 125aa40c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa40f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125aa411 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa414 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa417 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125aa419 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa41d je 0x125aa432 */
  if (C.zf) goto L_125aa432;
  /* 125aa41f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa422 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa425 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125aa427 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125aa429 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa42c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa42f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_125aa432:;
  /* 125aa432 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa435 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa438 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125aa43b:;
  /* 125aa43b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa43e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125aa444 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa447 je 0x125aa467 */
  if (C.zf) goto L_125aa467;
  /* 125aa449 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa44c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125aa451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aa453 je 0x125aa467 */
  if (C.zf) goto L_125aa467;
  /* 125aa455 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa458 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125aa45e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa461 jne 0x125aa3bd */
  if (!C.zf) goto L_125aa3bd;
L_125aa467:;
  /* 125aa467 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa46a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125aa470 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aa472 jne 0x125aa47f */
  if (!C.zf) goto L_125aa47f;
  /* 125aa474 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa477 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aa47a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125aa47d jmp 0x125aa48c */
  goto L_125aa48c;
L_125aa47f:;
  /* 125aa47f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa483 je 0x125aa48c */
  if (C.zf) goto L_125aa48c;
  /* 125aa485 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa488 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_125aa48c:;
  /* 125aa48c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_125aa493:;
  /* 125aa493 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa496 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125aa499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aa49b je 0x125aa4be */
  if (C.zf) goto L_125aa4be;
L_125aa49d:;
  /* 125aa49d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa4a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125aa4a3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa4a6 je 0x125aa4b3 */
  if (C.zf) goto L_125aa4b3;
  /* 125aa4a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa4ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125aa4ae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa4b1 jne 0x125aa4be */
  if (!C.zf) goto L_125aa4be;
L_125aa4b3:;
  /* 125aa4b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa4b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa4b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125aa4bc jmp 0x125aa49d */
  goto L_125aa49d;
L_125aa4be:;
  /* 125aa4be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa4c1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125aa4c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125aa4c6 jne 0x125aa4cd */
  if (!C.zf) goto L_125aa4cd;
  /* 125aa4c8 jmp 0x125aa6ab */
  goto L_125aa6ab;
L_125aa4cd:;
  /* 125aa4cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa4d1 je 0x125aa4e4 */
  if (C.zf) goto L_125aa4e4;
  /* 125aa4d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aa4d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa4d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125aa4db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aa4de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa4e1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_125aa4e4:;
  /* 125aa4e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125aa4e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125aa4e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa4ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125aa4ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_125aa4f1:;
  /* 125aa4f1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 125aa4f8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_125aa4ff:;
  /* 125aa4ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa502 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125aa505 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa508 jne 0x125aa51e */
  if (!C.zf) goto L_125aa51e;
  /* 125aa50a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa50d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa510 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125aa513 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa516 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa519 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125aa51c jmp 0x125aa4ff */
  goto L_125aa4ff;
L_125aa51e:;
  /* 125aa51e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa521 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125aa524 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa527 jne 0x125aa57a */
  if (!C.zf) goto L_125aa57a;
  /* 125aa529 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa52c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aa52e mov ecx, 2 */
  ECX = (0x2u);
  /* 125aa533 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125aa535 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aa537 jne 0x125aa572 */
  if (!C.zf) goto L_125aa572;
  /* 125aa539 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa53d je 0x125aa55f */
  if (C.zf) goto L_125aa55f;
  /* 125aa53f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa542 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125aa546 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa549 jne 0x125aa556 */
  if (!C.zf) goto L_125aa556;
  /* 125aa54b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa54e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa551 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125aa554 jmp 0x125aa55d */
  goto L_125aa55d;
L_125aa556:;
  /* 125aa556 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125aa55d:;
  /* 125aa55d jmp 0x125aa566 */
  goto L_125aa566;
L_125aa55f:;
  /* 125aa55f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125aa566:;
  /* 125aa566 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aa568 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa56c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 125aa56f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_125aa572:;
  /* 125aa572 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa575 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125aa577 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_125aa57a:;
  /* 125aa57a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa57d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa580 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aa583 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125aa586 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125aa588 je 0x125aa5ae */
  if (C.zf) goto L_125aa5ae;
  /* 125aa58a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa58e je 0x125aa59f */
  if (C.zf) goto L_125aa59f;
  /* 125aa590 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa593 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 125aa596 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa599 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa59c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_125aa59f:;
  /* 125aa59f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa5a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125aa5a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa5a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa5aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125aa5ac jmp 0x125aa57a */
  goto L_125aa57a;
L_125aa5ae:;
  /* 125aa5ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa5b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125aa5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aa5b6 je 0x125aa5d4 */
  if (C.zf) goto L_125aa5d4;
  /* 125aa5b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa5bc jne 0x125aa5d9 */
  if (!C.zf) goto L_125aa5d9;
  /* 125aa5be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa5c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125aa5c4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa5c7 je 0x125aa5d4 */
  if (C.zf) goto L_125aa5d4;
  /* 125aa5c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa5cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125aa5cf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa5d2 jne 0x125aa5d9 */
  if (!C.zf) goto L_125aa5d9;
L_125aa5d4:;
  /* 125aa5d4 jmp 0x125aa684 */
  goto L_125aa684;
L_125aa5d9:;
  /* 125aa5d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa5dd je 0x125aa676 */
  if (C.zf) goto L_125aa676;
  /* 125aa5e3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa5e7 je 0x125aa63d */
  if (C.zf) goto L_125aa63d;
  /* 125aa5e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa5ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa5ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125aa5f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125aa5f2 mov cl, byte ptr [eax + 0x125d5161] */
  CL = (r8((uint32_t)(EAX + 0x125d5161)));
  /* 125aa5f8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 125aa5fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125aa5fd je 0x125aa628 */
  if (C.zf) goto L_125aa628;
  /* 125aa5ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa602 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa605 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125aa607 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125aa609 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa60c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa60f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 125aa612 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa615 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa618 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125aa61b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa61e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125aa620 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa623 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa626 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125aa628:;
  /* 125aa628 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa62b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa62e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125aa630 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125aa632 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa635 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa638 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 125aa63b jmp 0x125aa669 */
  goto L_125aa669;
L_125aa63d:;
  /* 125aa63d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa640 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa642 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125aa644 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125aa646 mov cl, byte ptr [eax + 0x125d5161] */
  CL = (r8((uint32_t)(EAX + 0x125d5161)));
  /* 125aa64c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 125aa64f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125aa651 je 0x125aa669 */
  if (C.zf) goto L_125aa669;
  /* 125aa653 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa656 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa659 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125aa65c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa65f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125aa661 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa664 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa667 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125aa669:;
  /* 125aa669 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa66c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125aa66e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa671 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa674 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125aa676:;
  /* 125aa676 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa679 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa67c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125aa67f jmp 0x125aa4f1 */
  goto L_125aa4f1;
L_125aa684:;
  /* 125aa684 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa688 je 0x125aa699 */
  if (C.zf) goto L_125aa699;
  /* 125aa68a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa68d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 125aa690 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aa693 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa696 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_125aa699:;
  /* 125aa699 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa69c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125aa69e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa6a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125aa6a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125aa6a6 jmp 0x125aa493 */
  goto L_125aa493;
L_125aa6ab:;
  /* 125aa6ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa6af je 0x125aa6c3 */
  if (C.zf) goto L_125aa6c3;
  /* 125aa6b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aa6b4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125aa6ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aa6bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa6c0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_125aa6c3:;
  /* 125aa6c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125aa6c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125aa6c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa6cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125aa6ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125aa6d0 mov esp, ebp */
  ESP = (EBP);
  /* 125aa6d2 pop ebp */
  EBP = (pop32());
  /* 125aa6d3 ret  */
  ESPCHK(0x125aa2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6e0 @ 0x125aa6e0 (537 bytes, 173 insns) */
void f_125aa6e0(void) {
  FTRACE(0x125aa6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aa6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125aa6e1 mov ebp, esp */
  EBP = (ESP);
  /* 125aa6e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aa6e6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 125aa6ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 125aa6f4 cmp dword ptr [0x125d3a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa6fb jne 0x125aa73a */
  if (!C.zf) goto L_125aa73a;
  /* 125aa6fd call dword ptr [0x125d6360] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6360))), 0x125aa703u);
  /* 125aa703 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125aa706 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa70a je 0x125aa718 */
  if (C.zf) goto L_125aa718;
  /* 125aa70c mov dword ptr [0x125d3a3c], 1 */
  w32((uint32_t)(0x125d3a3c), (0x1u));
  /* 125aa716 jmp 0x125aa73a */
  goto L_125aa73a;
L_125aa718:;
  /* 125aa718 call dword ptr [0x125d6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6358))), 0x125aa71eu);
  /* 125aa71e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125aa721 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa725 je 0x125aa733 */
  if (C.zf) goto L_125aa733;
  /* 125aa727 mov dword ptr [0x125d3a3c], 2 */
  w32((uint32_t)(0x125d3a3c), (0x2u));
  /* 125aa731 jmp 0x125aa73a */
  goto L_125aa73a;
L_125aa733:;
  /* 125aa733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa735 jmp 0x125aa8f5 */
  goto L_125aa8f5;
L_125aa73a:;
  /* 125aa73a cmp dword ptr [0x125d3a3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d3a3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa741 jne 0x125aa83e */
  if (!C.zf) goto L_125aa83e;
  /* 125aa747 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa74b jne 0x125aa763 */
  if (!C.zf) goto L_125aa763;
  /* 125aa74d call dword ptr [0x125d6360] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6360))), 0x125aa753u);
  /* 125aa753 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125aa756 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa75a jne 0x125aa763 */
  if (!C.zf) goto L_125aa763;
  /* 125aa75c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa75e jmp 0x125aa8f5 */
  goto L_125aa8f5;
L_125aa763:;
  /* 125aa763 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125aa766 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125aa769:;
  /* 125aa769 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa76c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aa76e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 125aa771 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aa773 je 0x125aa795 */
  if (C.zf) goto L_125aa795;
  /* 125aa775 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa778 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa77b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125aa77e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa781 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aa783 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 125aa786 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aa788 jne 0x125aa793 */
  if (!C.zf) goto L_125aa793;
  /* 125aa78a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa78d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa790 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125aa793:;
  /* 125aa793 jmp 0x125aa769 */
  goto L_125aa769;
L_125aa795:;
  /* 125aa795 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa798 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aa79b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 125aa79d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa7a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125aa7a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa7a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa7a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa7a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa7ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa7ae push edx */
  push32((uint32_t)(EDX));
  /* 125aa7af mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125aa7b2 push eax */
  push32((uint32_t)(EAX));
  /* 125aa7b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa7b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa7b7 call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125aa7bdu);
  /* 125aa7bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125aa7c0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa7c4 je 0x125aa7e4 */
  if (C.zf) goto L_125aa7e4;
  /* 125aa7c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 125aa7c8 push 0x125cf2b4 */
  push32((uint32_t)(0x125cf2b4u));
  /* 125aa7cd push 2 */
  push32((uint32_t)(0x2u));
  /* 125aa7cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa7d2 push ecx */
  push32((uint32_t)(ECX));
  /* 125aa7d3 call 0x125a8110 */
  push32(0x125aa7d8u); f_125a8110();
  /* 125aa7d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa7db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125aa7de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa7e2 jne 0x125aa7f5 */
  if (!C.zf) goto L_125aa7f5;
L_125aa7e4:;
  /* 125aa7e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125aa7e7 push edx */
  push32((uint32_t)(EDX));
  /* 125aa7e8 call dword ptr [0x125d63d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63d4))), 0x125aa7eeu);
  /* 125aa7ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa7f0 jmp 0x125aa8f5 */
  goto L_125aa8f5;
L_125aa7f5:;
  /* 125aa7f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa7f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa7f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa7fc push eax */
  push32((uint32_t)(EAX));
  /* 125aa7fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125aa800 push ecx */
  push32((uint32_t)(ECX));
  /* 125aa801 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa804 push edx */
  push32((uint32_t)(EDX));
  /* 125aa805 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125aa808 push eax */
  push32((uint32_t)(EAX));
  /* 125aa809 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa80b push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa80d call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125aa813u);
  /* 125aa813 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aa815 jne 0x125aa82c */
  if (!C.zf) goto L_125aa82c;
  /* 125aa817 push 2 */
  push32((uint32_t)(0x2u));
  /* 125aa819 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125aa81c push ecx */
  push32((uint32_t)(ECX));
  /* 125aa81d call 0x125a8ba0 */
  push32(0x125aa822u); f_125a8ba0();
  /* 125aa822 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa825 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_125aa82c:;
  /* 125aa82c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125aa82f push edx */
  push32((uint32_t)(EDX));
  /* 125aa830 call dword ptr [0x125d63d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63d4))), 0x125aa836u);
  /* 125aa836 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125aa839 jmp 0x125aa8f5 */
  goto L_125aa8f5;
L_125aa83e:;
  /* 125aa83e cmp dword ptr [0x125d3a3c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x125d3a3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa845 jne 0x125aa8f3 */
  if (!C.zf) goto L_125aa8f3;
  /* 125aa84b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa84f jne 0x125aa867 */
  if (!C.zf) goto L_125aa867;
  /* 125aa851 call dword ptr [0x125d6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6358))), 0x125aa857u);
  /* 125aa857 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125aa85a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa85e jne 0x125aa867 */
  if (!C.zf) goto L_125aa867;
  /* 125aa860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa862 jmp 0x125aa8f5 */
  goto L_125aa8f5;
L_125aa867:;
  /* 125aa867 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125aa86a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125aa86d:;
  /* 125aa86d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa870 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125aa873 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aa875 je 0x125aa895 */
  if (C.zf) goto L_125aa895;
  /* 125aa877 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa87a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa87d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125aa880 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa883 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125aa886 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aa888 jne 0x125aa893 */
  if (!C.zf) goto L_125aa893;
  /* 125aa88a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa88d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa890 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_125aa893:;
  /* 125aa893 jmp 0x125aa86d */
  goto L_125aa86d;
L_125aa895:;
  /* 125aa895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa898 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aa89b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa89e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125aa8a1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 125aa8a6 push 0x125cf2b4 */
  push32((uint32_t)(0x125cf2b4u));
  /* 125aa8ab push 2 */
  push32((uint32_t)(0x2u));
  /* 125aa8ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa8b0 push edx */
  push32((uint32_t)(EDX));
  /* 125aa8b1 call 0x125a8110 */
  push32(0x125aa8b6u); f_125a8110();
  /* 125aa8b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa8b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125aa8bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa8c0 jne 0x125aa8d0 */
  if (!C.zf) goto L_125aa8d0;
  /* 125aa8c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125aa8c5 push eax */
  push32((uint32_t)(EAX));
  /* 125aa8c6 call dword ptr [0x125d63c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63c8))), 0x125aa8ccu);
  /* 125aa8cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa8ce jmp 0x125aa8f5 */
  goto L_125aa8f5;
L_125aa8d0:;
  /* 125aa8d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125aa8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 125aa8d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125aa8d7 push edx */
  push32((uint32_t)(EDX));
  /* 125aa8d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa8db push eax */
  push32((uint32_t)(EAX));
  /* 125aa8dc call 0x125ae9f0 */
  push32(0x125aa8e1u); f_125ae9f0();
  /* 125aa8e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa8e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125aa8e7 push ecx */
  push32((uint32_t)(ECX));
  /* 125aa8e8 call dword ptr [0x125d63c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63c8))), 0x125aa8eeu);
  /* 125aa8ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aa8f1 jmp 0x125aa8f5 */
  goto L_125aa8f5;
L_125aa8f3:;
  /* 125aa8f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125aa8f5:;
  /* 125aa8f5 mov esp, ebp */
  ESP = (EBP);
  /* 125aa8f7 pop ebp */
  EBP = (pop32());
  /* 125aa8f8 ret  */
  ESPCHK(0x125aa6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a900 @ 0x125aa900 (77 bytes, 25 insns) */
void f_125aa900(void) {
  FTRACE(0x125aa900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aa900 push ebp */
  push32((uint32_t)(EBP));
  /* 125aa901 mov ebp, esp */
  EBP = (ESP);
  /* 125aa903 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa905 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 125aa90a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa90c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa910 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 125aa913 push eax */
  push32((uint32_t)(EAX));
  /* 125aa914 call dword ptr [0x125d634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d634c))), 0x125aa91au);
  /* 125aa91a mov dword ptr [0x125d528c], eax */
  w32((uint32_t)(0x125d528c), (EAX));
  /* 125aa91f cmp dword ptr [0x125d528c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d528c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa926 jne 0x125aa92c */
  if (!C.zf) goto L_125aa92c;
  /* 125aa928 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa92a jmp 0x125aa94b */
  goto L_125aa94b;
L_125aa92c:;
  /* 125aa92c call 0x125ac3b0 */
  push32(0x125aa931u); f_125ac3b0();
  /* 125aa931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aa933 jne 0x125aa946 */
  if (!C.zf) goto L_125aa946;
  /* 125aa935 mov ecx, dword ptr [0x125d528c] */
  ECX = (r32((uint32_t)(0x125d528c)));
  /* 125aa93b push ecx */
  push32((uint32_t)(ECX));
  /* 125aa93c call dword ptr [0x125d6350] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6350))), 0x125aa942u);
  /* 125aa942 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aa944 jmp 0x125aa94b */
  goto L_125aa94b;
L_125aa946:;
  /* 125aa946 mov eax, 1 */
  EAX = (0x1u);
L_125aa94b:;
  /* 125aa94b pop ebp */
  EBP = (pop32());
  /* 125aa94c ret  */
  ESPCHK(0x125aa900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a950 @ 0x125aa950 (156 bytes, 48 insns) */
void f_125aa950(void) {
  FTRACE(0x125aa950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aa950 push ebp */
  push32((uint32_t)(EBP));
  /* 125aa951 mov ebp, esp */
  EBP = (ESP);
  /* 125aa953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aa956 mov eax, dword ptr [0x125d5288] */
  EAX = (r32((uint32_t)(0x125d5288)));
  /* 125aa95b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125aa95e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125aa965 jmp 0x125aa970 */
  goto L_125aa970;
L_125aa967:;
  /* 125aa967 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa96a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa96d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125aa970:;
  /* 125aa970 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aa973 cmp edx, dword ptr [0x125d5284] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125d5284))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa979 jge 0x125aa9c6 */
  if ((C.sf==C.of)) goto L_125aa9c6;
  /* 125aa97b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 125aa980 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 125aa985 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa988 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 125aa98b push ecx */
  push32((uint32_t)(ECX));
  /* 125aa98c call dword ptr [0x125d6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6344))), 0x125aa992u);
  /* 125aa992 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 125aa997 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa999 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa99c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 125aa99f push eax */
  push32((uint32_t)(EAX));
  /* 125aa9a0 call dword ptr [0x125d6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6344))), 0x125aa9a6u);
  /* 125aa9a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa9a9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 125aa9ac push edx */
  push32((uint32_t)(EDX));
  /* 125aa9ad push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa9af mov eax, dword ptr [0x125d528c] */
  EAX = (r32((uint32_t)(0x125d528c)));
  /* 125aa9b4 push eax */
  push32((uint32_t)(EAX));
  /* 125aa9b5 call dword ptr [0x125d6354] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6354))), 0x125aa9bbu);
  /* 125aa9bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aa9be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aa9c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125aa9c4 jmp 0x125aa967 */
  goto L_125aa967;
L_125aa9c6:;
  /* 125aa9c6 mov edx, dword ptr [0x125d5288] */
  EDX = (r32((uint32_t)(0x125d5288)));
  /* 125aa9cc push edx */
  push32((uint32_t)(EDX));
  /* 125aa9cd push 0 */
  push32((uint32_t)(0x0u));
  /* 125aa9cf mov eax, dword ptr [0x125d528c] */
  EAX = (r32((uint32_t)(0x125d528c)));
  /* 125aa9d4 push eax */
  push32((uint32_t)(EAX));
  /* 125aa9d5 call dword ptr [0x125d6354] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6354))), 0x125aa9dbu);
  /* 125aa9db mov ecx, dword ptr [0x125d528c] */
  ECX = (r32((uint32_t)(0x125d528c)));
  /* 125aa9e1 push ecx */
  push32((uint32_t)(ECX));
  /* 125aa9e2 call dword ptr [0x125d6350] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6350))), 0x125aa9e8u);
  /* 125aa9e8 mov esp, ebp */
  ESP = (EBP);
  /* 125aa9ea pop ebp */
  EBP = (pop32());
  /* 125aa9eb ret  */
  ESPCHK(0x125aa950u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x125aa9f0 (73 bytes, 19 insns) */
void f_125aa9f0(void) {
  FTRACE(0x125aa9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aa9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125aa9f1 mov ebp, esp */
  EBP = (ESP);
  /* 125aa9f3 cmp dword ptr [0x125d38d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aa9fa je 0x125aaa0e */
  if (C.zf) goto L_125aaa0e;
  /* 125aa9fc cmp dword ptr [0x125d38d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaa03 jne 0x125aaa37 */
  if (!C.zf) goto L_125aaa37;
  /* 125aaa05 cmp dword ptr [0x125d38d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaa0c jne 0x125aaa37 */
  if (!C.zf) goto L_125aaa37;
L_125aaa0e:;
  /* 125aaa0e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 125aaa13 call 0x125aaa40 */
  push32(0x125aaa18u); f_125aaa40();
  /* 125aaa18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aaa1b cmp dword ptr [0x125d3a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaa22 je 0x125aaa2a */
  if (C.zf) goto L_125aaa2a;
  /* 125aaa24 call dword ptr [0x125d3a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3a40))), 0x125aaa2au);
L_125aaa2a:;
  /* 125aaa2a push 0xff */
  push32((uint32_t)(0xffu));
  /* 125aaa2f call 0x125aaa40 */
  push32(0x125aaa34u); f_125aaa40();
  /* 125aaa34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125aaa37:;
  /* 125aaa37 pop ebp */
  EBP = (pop32());
  /* 125aaa38 ret  */
  ESPCHK(0x125aa9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa40 @ 0x125aaa40 (447 bytes, 131 insns) */
void f_125aaa40(void) {
  FTRACE(0x125aaa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aaa40 push ebp */
  push32((uint32_t)(EBP));
  /* 125aaa41 mov ebp, esp */
  EBP = (ESP);
  /* 125aaa43 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aaa49 push ebx */
  push32((uint32_t)(EBX));
  /* 125aaa4a push esi */
  push32((uint32_t)(ESI));
  /* 125aaa4b push edi */
  push32((uint32_t)(EDI));
  /* 125aaa4c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125aaa53 jmp 0x125aaa5e */
  goto L_125aaa5e;
L_125aaa55:;
  /* 125aaa55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aaa58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aaa5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125aaa5e:;
  /* 125aaa5e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaa62 jae 0x125aaa77 */
  if (!C.cf) goto L_125aaa77;
  /* 125aaa64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aaa67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aaa6a cmp edx, dword ptr [ecx*8 + 0x125d1ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x125d1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaa71 jne 0x125aaa75 */
  if (!C.zf) goto L_125aaa75;
  /* 125aaa73 jmp 0x125aaa77 */
  goto L_125aaa77;
L_125aaa75:;
  /* 125aaa75 jmp 0x125aaa55 */
  goto L_125aaa55;
L_125aaa77:;
  /* 125aaa77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aaa7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aaa7d cmp ecx, dword ptr [eax*8 + 0x125d1ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x125d1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaa84 jne 0x125aabf8 */
  if (!C.zf) goto L_125aabf8;
  /* 125aaa8a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaa91 je 0x125aaab4 */
  if (C.zf) goto L_125aaab4;
  /* 125aaa93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aaa96 mov eax, dword ptr [edx*8 + 0x125d1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x125d1ab4)));
  /* 125aaa9d push eax */
  push32((uint32_t)(EAX));
  /* 125aaa9e push 0 */
  push32((uint32_t)(0x0u));
  /* 125aaaa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aaaa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aaaa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125aaaa6 call 0x125a71d0 */
  push32(0x125aaaabu); f_125a71d0();
  /* 125aaaab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aaaae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaab1 jne 0x125aaab4 */
  if (!C.zf) goto L_125aaab4;
  /* 125aaab3 int3  */
  x86_unimpl("int3 @ 0x125aaab3");
L_125aaab4:;
  /* 125aaab4 cmp dword ptr [0x125d38d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaabb je 0x125aaacf */
  if (C.zf) goto L_125aaacf;
  /* 125aaabd cmp dword ptr [0x125d38d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaac4 jne 0x125aab08 */
  if (!C.zf) goto L_125aab08;
  /* 125aaac6 cmp dword ptr [0x125d38d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d38d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaacd jne 0x125aab08 */
  if (!C.zf) goto L_125aab08;
L_125aaacf:;
  /* 125aaacf push 0 */
  push32((uint32_t)(0x0u));
  /* 125aaad1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 125aaad4 push ecx */
  push32((uint32_t)(ECX));
  /* 125aaad5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aaad8 mov eax, dword ptr [edx*8 + 0x125d1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x125d1ab4)));
  /* 125aaadf push eax */
  push32((uint32_t)(EAX));
  /* 125aaae0 call 0x125aaf40 */
  push32(0x125aaae5u); f_125aaf40();
  /* 125aaae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aaae8 push eax */
  push32((uint32_t)(EAX));
  /* 125aaae9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aaaec mov edx, dword ptr [ecx*8 + 0x125d1ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x125d1ab4)));
  /* 125aaaf3 push edx */
  push32((uint32_t)(EDX));
  /* 125aaaf4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 125aaaf6 call dword ptr [0x125d6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6370))), 0x125aaafcu);
  /* 125aaafc push eax */
  push32((uint32_t)(EAX));
  /* 125aaafd call dword ptr [0x125d6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6374))), 0x125aab03u);
  /* 125aab03 jmp 0x125aabf8 */
  goto L_125aabf8;
L_125aab08:;
  /* 125aab08 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aab0f je 0x125aabf8 */
  if (C.zf) goto L_125aabf8;
  /* 125aab15 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 125aab1a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 125aab20 push eax */
  push32((uint32_t)(EAX));
  /* 125aab21 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aab23 call dword ptr [0x125d638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d638c))), 0x125aab29u);
  /* 125aab29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125aab2b jne 0x125aab41 */
  if (!C.zf) goto L_125aab41;
  /* 125aab2d push 0x125ceb1c */
  push32((uint32_t)(0x125ceb1cu));
  /* 125aab32 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 125aab38 push ecx */
  push32((uint32_t)(ECX));
  /* 125aab39 call 0x125ab0c0 */
  push32(0x125aab3eu); f_125ab0c0();
  /* 125aab3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125aab41:;
  /* 125aab41 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 125aab47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125aab4a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aab4d push eax */
  push32((uint32_t)(EAX));
  /* 125aab4e call 0x125aaf40 */
  push32(0x125aab53u); f_125aaf40();
  /* 125aab53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aab56 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aab59 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aab5c jbe 0x125aab8a */
  if ((C.cf||C.zf)) goto L_125aab8a;
  /* 125aab5e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 125aab64 push ecx */
  push32((uint32_t)(ECX));
  /* 125aab65 call 0x125aaf40 */
  push32(0x125aab6au); f_125aaf40();
  /* 125aab6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aab6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aab70 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 125aab74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125aab77 push 3 */
  push32((uint32_t)(0x3u));
  /* 125aab79 push 0x125ceb18 */
  push32((uint32_t)(0x125ceb18u));
  /* 125aab7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aab81 push ecx */
  push32((uint32_t)(ECX));
  /* 125aab82 call 0x125ab930 */
  push32(0x125aab87u); f_125ab930();
  /* 125aab87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125aab8a:;
  /* 125aab8a push 0x125cf570 */
  push32((uint32_t)(0x125cf570u));
  /* 125aab8f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 125aab95 push edx */
  push32((uint32_t)(EDX));
  /* 125aab96 call 0x125ab0c0 */
  push32(0x125aab9bu); f_125ab0c0();
  /* 125aab9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aab9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aaba1 push eax */
  push32((uint32_t)(EAX));
  /* 125aaba2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 125aaba8 push ecx */
  push32((uint32_t)(ECX));
  /* 125aaba9 call 0x125ab0d0 */
  push32(0x125aabaeu); f_125ab0d0();
  /* 125aabae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aabb1 push 0x125cea90 */
  push32((uint32_t)(0x125cea90u));
  /* 125aabb6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 125aabbc push edx */
  push32((uint32_t)(EDX));
  /* 125aabbd call 0x125ab0d0 */
  push32(0x125aabc2u); f_125ab0d0();
  /* 125aabc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aabc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aabc8 mov ecx, dword ptr [eax*8 + 0x125d1ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x125d1ab4)));
  /* 125aabcf push ecx */
  push32((uint32_t)(ECX));
  /* 125aabd0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 125aabd6 push edx */
  push32((uint32_t)(EDX));
  /* 125aabd7 call 0x125ab0d0 */
  push32(0x125aabdcu); f_125ab0d0();
  /* 125aabdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aabdf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 125aabe4 push 0x125cf548 */
  push32((uint32_t)(0x125cf548u));
  /* 125aabe9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 125aabef push eax */
  push32((uint32_t)(EAX));
  /* 125aabf0 call 0x125ab870 */
  push32(0x125aabf5u); f_125ab870();
  /* 125aabf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125aabf8:;
  /* 125aabf8 pop edi */
  EDI = (pop32());
  /* 125aabf9 pop esi */
  ESI = (pop32());
  /* 125aabfa pop ebx */
  EBX = (pop32());
  /* 125aabfb mov esp, ebp */
  ESP = (EBP);
  /* 125aabfd pop ebp */
  EBP = (pop32());
  /* 125aabfe ret  */
  ESPCHK(0x125aaa40u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x125aac00 (80 bytes, 27 insns) */
void f_125aac00(void) {
  FTRACE(0x125aac00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aac00 push ebp */
  push32((uint32_t)(EBP));
  /* 125aac01 mov ebp, esp */
  EBP = (ESP);
  /* 125aac03 push ecx */
  push32((uint32_t)(ECX));
  /* 125aac04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125aac0b jmp 0x125aac16 */
  goto L_125aac16;
L_125aac0d:;
  /* 125aac0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aac10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aac13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125aac16:;
  /* 125aac16 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aac1a jae 0x125aac2f */
  if (!C.cf) goto L_125aac2f;
  /* 125aac1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aac1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aac22 cmp edx, dword ptr [ecx*8 + 0x125d1ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x125d1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aac29 jne 0x125aac2d */
  if (!C.zf) goto L_125aac2d;
  /* 125aac2b jmp 0x125aac2f */
  goto L_125aac2f;
L_125aac2d:;
  /* 125aac2d jmp 0x125aac0d */
  goto L_125aac0d;
L_125aac2f:;
  /* 125aac2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aac32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aac35 cmp ecx, dword ptr [eax*8 + 0x125d1ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x125d1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aac3c jne 0x125aac4a */
  if (!C.zf) goto L_125aac4a;
  /* 125aac3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aac41 mov eax, dword ptr [edx*8 + 0x125d1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x125d1ab4)));
  /* 125aac48 jmp 0x125aac4c */
  goto L_125aac4c;
L_125aac4a:;
  /* 125aac4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125aac4c:;
  /* 125aac4c mov esp, ebp */
  ESP = (EBP);
  /* 125aac4e pop ebp */
  EBP = (pop32());
  /* 125aac4f ret  */
  ESPCHK(0x125aac00u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x125aac50 (66 bytes, 28 insns) */
void f_125aac50(void) {
  FTRACE(0x125aac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aac50 push ebp */
  push32((uint32_t)(EBP));
  /* 125aac51 mov ebp, esp */
  EBP = (ESP);
  /* 125aac53 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aac57 jne 0x125aac77 */
  if (!C.zf) goto L_125aac77;
  /* 125aac59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aac5d jge 0x125aac77 */
  if ((C.sf==C.of)) goto L_125aac77;
  /* 125aac5f push 1 */
  push32((uint32_t)(0x1u));
  /* 125aac61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aac64 push eax */
  push32((uint32_t)(EAX));
  /* 125aac65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aac68 push ecx */
  push32((uint32_t)(ECX));
  /* 125aac69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aac6c push edx */
  push32((uint32_t)(EDX));
  /* 125aac6d call 0x125aaca0 */
  push32(0x125aac72u); f_125aaca0();
  /* 125aac72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aac75 jmp 0x125aac8d */
  goto L_125aac8d;
L_125aac77:;
  /* 125aac77 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aac79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aac7c push eax */
  push32((uint32_t)(EAX));
  /* 125aac7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aac80 push ecx */
  push32((uint32_t)(ECX));
  /* 125aac81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aac84 push edx */
  push32((uint32_t)(EDX));
  /* 125aac85 call 0x125aaca0 */
  push32(0x125aac8au); f_125aaca0();
  /* 125aac8a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125aac8d:;
  /* 125aac8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aac90 pop ebp */
  EBP = (pop32());
  /* 125aac91 ret  */
  ESPCHK(0x125aac50u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x125aaca0 (194 bytes, 71 insns) */
void f_125aaca0(void) {
  FTRACE(0x125aaca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aaca0 push ebp */
  push32((uint32_t)(EBP));
  /* 125aaca1 mov ebp, esp */
  EBP = (ESP);
  /* 125aaca3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aaca6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aaca9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125aacac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aacb0 je 0x125aacc9 */
  if (C.zf) goto L_125aacc9;
  /* 125aacb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aacb5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 125aacb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aacbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aacbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125aacc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aacc4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125aacc6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125aacc9:;
  /* 125aacc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aaccc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125aaccf:;
  /* 125aaccf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aacd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aacd4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125aacd7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125aacda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aacdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aacdf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125aace2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125aace5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aace9 jbe 0x125aad01 */
  if ((C.cf||C.zf)) goto L_125aad01;
  /* 125aaceb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aacee add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aacf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aacf4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125aacf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aacf9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aacfc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125aacff jmp 0x125aad15 */
  goto L_125aad15;
L_125aad01:;
  /* 125aad01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aad04 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aad07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aad0a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125aad0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aad0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aad12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125aad15:;
  /* 125aad15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aad19 ja 0x125aaccf */
  if ((!C.cf&&!C.zf)) goto L_125aaccf;
  /* 125aad1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aad1e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 125aad21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aad24 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aad27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125aad2a:;
  /* 125aad2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aad2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125aad2f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 125aad32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aad35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aad38 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125aad3a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125aad3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aad3f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 125aad42 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 125aad44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aad47 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aad4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125aad4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aad50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aad53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125aad56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aad59 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aad5c jb 0x125aad2a */
  if (C.cf) goto L_125aad2a;
  /* 125aad5e mov esp, ebp */
  ESP = (EBP);
  /* 125aad60 pop ebp */
  EBP = (pop32());
  /* 125aad61 ret  */
  ESPCHK(0x125aaca0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x125aad70 (63 bytes, 24 insns) */
void f_125aad70(void) {
  FTRACE(0x125aad70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aad70 push ebp */
  push32((uint32_t)(EBP));
  /* 125aad71 mov ebp, esp */
  EBP = (ESP);
  /* 125aad73 push ecx */
  push32((uint32_t)(ECX));
  /* 125aad74 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aad78 jne 0x125aad89 */
  if (!C.zf) goto L_125aad89;
  /* 125aad7a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aad7e jge 0x125aad89 */
  if ((C.sf==C.of)) goto L_125aad89;
  /* 125aad80 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125aad87 jmp 0x125aad90 */
  goto L_125aad90;
L_125aad89:;
  /* 125aad89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125aad90:;
  /* 125aad90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aad93 push eax */
  push32((uint32_t)(EAX));
  /* 125aad94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aad97 push ecx */
  push32((uint32_t)(ECX));
  /* 125aad98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aad9b push edx */
  push32((uint32_t)(EDX));
  /* 125aad9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aad9f push eax */
  push32((uint32_t)(EAX));
  /* 125aada0 call 0x125aaca0 */
  push32(0x125aada5u); f_125aaca0();
  /* 125aada5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aada8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aadab mov esp, ebp */
  ESP = (EBP);
  /* 125aadad pop ebp */
  EBP = (pop32());
  /* 125aadae ret  */
  ESPCHK(0x125aad70u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x125aadb0 (30 bytes, 14 insns) */
void f_125aadb0(void) {
  FTRACE(0x125aadb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aadb0 push ebp */
  push32((uint32_t)(EBP));
  /* 125aadb1 mov ebp, esp */
  EBP = (ESP);
  /* 125aadb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aadb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aadb8 push eax */
  push32((uint32_t)(EAX));
  /* 125aadb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aadbc push ecx */
  push32((uint32_t)(ECX));
  /* 125aadbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aadc0 push edx */
  push32((uint32_t)(EDX));
  /* 125aadc1 call 0x125aaca0 */
  push32(0x125aadc6u); f_125aaca0();
  /* 125aadc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aadc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aadcc pop ebp */
  EBP = (pop32());
  /* 125aadcd ret  */
  ESPCHK(0x125aadb0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x125aadd0 (72 bytes, 28 insns) */
void f_125aadd0(void) {
  FTRACE(0x125aadd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aadd0 push ebp */
  push32((uint32_t)(EBP));
  /* 125aadd1 mov ebp, esp */
  EBP = (ESP);
  /* 125aadd3 push ecx */
  push32((uint32_t)(ECX));
  /* 125aadd4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aadd8 jne 0x125aadf1 */
  if (!C.zf) goto L_125aadf1;
  /* 125aadda cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aadde jg 0x125aadf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_125aadf1;
  /* 125aade0 jl 0x125aade8 */
  if ((C.sf!=C.of)) goto L_125aade8;
  /* 125aade2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aade6 jae 0x125aadf1 */
  if (!C.cf) goto L_125aadf1;
L_125aade8:;
  /* 125aade8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125aadef jmp 0x125aadf8 */
  goto L_125aadf8;
L_125aadf1:;
  /* 125aadf1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125aadf8:;
  /* 125aadf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aadfb push eax */
  push32((uint32_t)(EAX));
  /* 125aadfc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125aadff push ecx */
  push32((uint32_t)(ECX));
  /* 125aae00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aae03 push edx */
  push32((uint32_t)(EDX));
  /* 125aae04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aae07 push eax */
  push32((uint32_t)(EAX));
  /* 125aae08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aae0b push ecx */
  push32((uint32_t)(ECX));
  /* 125aae0c call 0x125aae20 */
  push32(0x125aae11u); f_125aae20();
  /* 125aae11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aae14 mov esp, ebp */
  ESP = (EBP);
  /* 125aae16 pop ebp */
  EBP = (pop32());
  /* 125aae17 ret  */
  ESPCHK(0x125aadd0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x125aae20 (242 bytes, 91 insns) */
void f_125aae20(void) {
  FTRACE(0x125aae20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aae20 push ebp */
  push32((uint32_t)(EBP));
  /* 125aae21 mov ebp, esp */
  EBP = (ESP);
  /* 125aae23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aae26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aae29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125aae2c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aae30 je 0x125aae54 */
  if (C.zf) goto L_125aae54;
  /* 125aae32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aae35 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 125aae38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aae3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aae3e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125aae41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aae44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125aae46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aae49 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aae4c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125aae4e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125aae51 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_125aae54:;
  /* 125aae54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aae57 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125aae5a:;
  /* 125aae5a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125aae5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125aae5f push ecx */
  push32((uint32_t)(ECX));
  /* 125aae60 push eax */
  push32((uint32_t)(EAX));
  /* 125aae61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aae64 push edx */
  push32((uint32_t)(EDX));
  /* 125aae65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aae68 push eax */
  push32((uint32_t)(EAX));
  /* 125aae69 call 0x125aeda0 */
  push32(0x125aae6eu); f_125aeda0();
  /* 125aae6e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125aae71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125aae74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aae76 push edx */
  push32((uint32_t)(EDX));
  /* 125aae77 push ecx */
  push32((uint32_t)(ECX));
  /* 125aae78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aae7b push eax */
  push32((uint32_t)(EAX));
  /* 125aae7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aae7f push ecx */
  push32((uint32_t)(ECX));
  /* 125aae80 call 0x125aed30 */
  push32(0x125aae85u); f_125aed30();
  /* 125aae85 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125aae88 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 125aae8b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aae8f jbe 0x125aaea7 */
  if ((C.cf||C.zf)) goto L_125aaea7;
  /* 125aae91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aae94 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aae97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aae9a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125aae9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aae9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aaea2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125aaea5 jmp 0x125aaebb */
  goto L_125aaebb;
L_125aaea7:;
  /* 125aaea7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125aaeaa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aaead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aaeb0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125aaeb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aaeb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aaeb8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125aaebb:;
  /* 125aaebb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaebf ja 0x125aae5a */
  if ((!C.cf&&!C.zf)) goto L_125aae5a;
  /* 125aaec1 jb 0x125aaec9 */
  if (C.cf) goto L_125aaec9;
  /* 125aaec3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaec7 ja 0x125aae5a */
  if ((!C.cf&&!C.zf)) goto L_125aae5a;
L_125aaec9:;
  /* 125aaec9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aaecc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 125aaecf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aaed2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aaed5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125aaed8:;
  /* 125aaed8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aaedb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125aaedd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 125aaee0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aaee3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aaee6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125aaee8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125aaeea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aaeed mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 125aaef0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 125aaef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aaef5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aaef8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125aaefb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aaefe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aaf01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125aaf04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125aaf07 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaf0a jb 0x125aaed8 */
  if (C.cf) goto L_125aaed8;
  /* 125aaf0c mov esp, ebp */
  ESP = (EBP);
  /* 125aaf0e pop ebp */
  EBP = (pop32());
  /* 125aaf0f ret 0x14 */
  ESPCHK(0x125aae20u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x125aaf20 (31 bytes, 15 insns) */
void f_125aaf20(void) {
  FTRACE(0x125aaf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aaf20 push ebp */
  push32((uint32_t)(EBP));
  /* 125aaf21 mov ebp, esp */
  EBP = (ESP);
  /* 125aaf23 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aaf25 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125aaf28 push eax */
  push32((uint32_t)(EAX));
  /* 125aaf29 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aaf2c push ecx */
  push32((uint32_t)(ECX));
  /* 125aaf2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125aaf30 push edx */
  push32((uint32_t)(EDX));
  /* 125aaf31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125aaf34 push eax */
  push32((uint32_t)(EAX));
  /* 125aaf35 call 0x125aae20 */
  push32(0x125aaf3au); f_125aae20();
  /* 125aaf3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125aaf3d pop ebp */
  EBP = (pop32());
  /* 125aaf3e ret  */
  ESPCHK(0x125aaf20u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x125aaf40 (123 bytes, 44 insns) */
void f_125aaf40(void) {
  FTRACE(0x125aaf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aaf40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 125aaf44 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 125aaf4a je 0x125aaf60 */
  if (C.zf) goto L_125aaf60;
L_125aaf4c:;
  /* 125aaf4c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 125aaf4e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 125aaf4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 125aaf51 je 0x125aaf93 */
  if (C.zf) goto L_125aaf93;
  /* 125aaf53 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 125aaf59 jne 0x125aaf4c */
  if (!C.zf) goto L_125aaf4c;
  /* 125aaf5b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_125aaf60:;
  /* 125aaf60 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 125aaf62 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 125aaf67 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aaf69 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125aaf6c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125aaf6e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aaf71 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 125aaf76 je 0x125aaf60 */
  if (C.zf) goto L_125aaf60;
  /* 125aaf78 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 125aaf7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 125aaf7d je 0x125aafb1 */
  if (C.zf) goto L_125aafb1;
  /* 125aaf7f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 125aaf81 je 0x125aafa7 */
  if (C.zf) goto L_125aafa7;
  /* 125aaf83 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 125aaf88 je 0x125aaf9d */
  if (C.zf) goto L_125aaf9d;
  /* 125aaf8a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 125aaf8f je 0x125aaf93 */
  if (C.zf) goto L_125aaf93;
  /* 125aaf91 jmp 0x125aaf60 */
  goto L_125aaf60;
L_125aaf93:;
  /* 125aaf93 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 125aaf96 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 125aaf9a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aaf9c ret  */
  ESPCHK(0x125aaf40u, _esp0);
  ESP += 4; return;
L_125aaf9d:;
  /* 125aaf9d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 125aafa0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 125aafa4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aafa6 ret  */
  ESPCHK(0x125aaf40u, _esp0);
  ESP += 4; return;
L_125aafa7:;
  /* 125aafa7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 125aafaa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 125aafae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aafb0 ret  */
  ESPCHK(0x125aaf40u, _esp0);
  ESP += 4; return;
L_125aafb1:;
  /* 125aafb1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 125aafb4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 125aafb8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aafba ret  */
  ESPCHK(0x125aaf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afc0 @ 0x125aafc0 (249 bytes, 93 insns) */
void f_125aafc0(void) {
  FTRACE(0x125aafc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aafc0 push ebp */
  push32((uint32_t)(EBP));
  /* 125aafc1 mov ebp, esp */
  EBP = (ESP);
  /* 125aafc3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125aafc6 push ebx */
  push32((uint32_t)(EBX));
  /* 125aafc7 push esi */
  push32((uint32_t)(ESI));
  /* 125aafc8 push edi */
  push32((uint32_t)(EDI));
  /* 125aafc9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 125aafcc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125aafcf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 125aafd2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_125aafd5:;
  /* 125aafd5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aafd9 jne 0x125aaff9 */
  if (!C.zf) goto L_125aaff9;
  /* 125aafdb push 0x125cf5a8 */
  push32((uint32_t)(0x125cf5a8u));
  /* 125aafe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 125aafe2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 125aafe4 push 0x125cf59c */
  push32((uint32_t)(0x125cf59cu));
  /* 125aafe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 125aafeb call 0x125a71d0 */
  push32(0x125aaff0u); f_125a71d0();
  /* 125aaff0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125aaff3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aaff6 jne 0x125aaff9 */
  if (!C.zf) goto L_125aaff9;
  /* 125aaff8 int3  */
  x86_unimpl("int3 @ 0x125aaff8");
L_125aaff9:;
  /* 125aaff9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aaffb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125aaffd jne 0x125aafd5 */
  if (!C.zf) goto L_125aafd5;
L_125aafff:;
  /* 125aafff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab003 jne 0x125ab023 */
  if (!C.zf) goto L_125ab023;
  /* 125ab005 push 0x125cf58c */
  push32((uint32_t)(0x125cf58cu));
  /* 125ab00a push 0 */
  push32((uint32_t)(0x0u));
  /* 125ab00c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 125ab00e push 0x125cf59c */
  push32((uint32_t)(0x125cf59cu));
  /* 125ab013 push 2 */
  push32((uint32_t)(0x2u));
  /* 125ab015 call 0x125a71d0 */
  push32(0x125ab01au); f_125a71d0();
  /* 125ab01a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab01d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab020 jne 0x125ab023 */
  if (!C.zf) goto L_125ab023;
  /* 125ab022 int3  */
  x86_unimpl("int3 @ 0x125ab022");
L_125ab023:;
  /* 125ab023 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ab025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ab027 jne 0x125aafff */
  if (!C.zf) goto L_125aafff;
  /* 125ab029 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab02c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 125ab033 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ab039 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125ab03c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab03f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ab042 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 125ab044 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab047 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ab04a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 125ab04d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125ab050 push edx */
  push32((uint32_t)(EDX));
  /* 125ab051 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125ab054 push eax */
  push32((uint32_t)(EAX));
  /* 125ab055 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab058 push ecx */
  push32((uint32_t)(ECX));
  /* 125ab059 call 0x125af0a0 */
  push32(0x125ab05eu); f_125af0a0();
  /* 125ab05e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab061 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125ab064 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab067 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125ab06a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab06d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab070 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 125ab073 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab076 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab07a jl 0x125ab09e */
  if ((C.sf!=C.of)) goto L_125ab09e;
  /* 125ab07c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab07f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ab081 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 125ab084 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ab086 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125ab08c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 125ab08f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab092 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ab094 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab097 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab09a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125ab09c jmp 0x125ab0af */
  goto L_125ab0af;
L_125ab09e:;
  /* 125ab09e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab0a1 push eax */
  push32((uint32_t)(EAX));
  /* 125ab0a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ab0a4 call 0x125aee20 */
  push32(0x125ab0a9u); f_125aee20();
  /* 125ab0a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab0ac mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_125ab0af:;
  /* 125ab0af mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ab0b2 pop edi */
  EDI = (pop32());
  /* 125ab0b3 pop esi */
  ESI = (pop32());
  /* 125ab0b4 pop ebx */
  EBX = (pop32());
  /* 125ab0b5 mov esp, ebp */
  ESP = (EBP);
  /* 125ab0b7 pop ebp */
  EBP = (pop32());
  /* 125ab0b8 ret  */
  ESPCHK(0x125aafc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0c0 @ 0x125ab0c0 (7 bytes, 3 insns) */
void f_125ab0c0(void) {
  FTRACE(0x125ab0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab0c0 push edi */
  push32((uint32_t)(EDI));
  /* 125ab0c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 125ab0c5 jmp 0x125ab131 */
  jmp_ind(0x125ab131u); return;
}

/* FUN_1000b0d0 @ 0x125ab0d0 (224 bytes, 84 insns) */
void f_125ab0d0(void) {
  FTRACE(0x125ab0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab0d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 125ab0d4 push edi */
  push32((uint32_t)(EDI));
  /* 125ab0d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 125ab0db je 0x125ab0ec */
  if (C.zf) goto L_125ab0ec;
L_125ab0dd:;
  /* 125ab0dd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 125ab0df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 125ab0e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 125ab0e2 je 0x125ab11f */
  if (C.zf) goto L_125ab11f;
  /* 125ab0e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 125ab0ea jne 0x125ab0dd */
  if (!C.zf) goto L_125ab0dd;
L_125ab0ec:;
  /* 125ab0ec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 125ab0ee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 125ab0f3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab0f5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125ab0f8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125ab0fa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab0fd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 125ab102 je 0x125ab0ec */
  if (C.zf) goto L_125ab0ec;
  /* 125ab104 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 125ab107 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 125ab109 je 0x125ab12e */
  if (C.zf) goto L_125ab12e;
  /* 125ab10b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 125ab10d je 0x125ab129 */
  if (C.zf) goto L_125ab129;
  /* 125ab10f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 125ab114 je 0x125ab124 */
  if (C.zf) goto L_125ab124;
  /* 125ab116 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 125ab11b je 0x125ab11f */
  if (C.zf) goto L_125ab11f;
  /* 125ab11d jmp 0x125ab0ec */
  goto L_125ab0ec;
L_125ab11f:;
  /* 125ab11f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 125ab122 jmp 0x125ab131 */
  goto L_125ab131;
L_125ab124:;
  /* 125ab124 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 125ab127 jmp 0x125ab131 */
  goto L_125ab131;
L_125ab129:;
  /* 125ab129 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 125ab12c jmp 0x125ab131 */
  goto L_125ab131;
L_125ab12e:;
  /* 125ab12e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_125ab131:;
  /* 125ab131 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 125ab135 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 125ab13b je 0x125ab156 */
  if (C.zf) goto L_125ab156;
L_125ab13d:;
  /* 125ab13d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125ab13f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 125ab140 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 125ab142 je 0x125ab1a8 */
  if (C.zf) goto L_125ab1a8;
  /* 125ab144 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 125ab146 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125ab147 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 125ab14d jne 0x125ab13d */
  if (!C.zf) goto L_125ab13d;
  /* 125ab14f jmp 0x125ab156 */
  goto L_125ab156;
L_125ab151:;
  /* 125ab151 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 125ab153 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_125ab156:;
  /* 125ab156 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 125ab15b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 125ab15d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab15f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125ab162 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125ab164 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125ab166 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab169 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 125ab16e je 0x125ab151 */
  if (C.zf) goto L_125ab151;
  /* 125ab170 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 125ab172 je 0x125ab1a8 */
  if (C.zf) goto L_125ab1a8;
  /* 125ab174 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 125ab176 je 0x125ab19f */
  if (C.zf) goto L_125ab19f;
  /* 125ab178 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 125ab17e je 0x125ab192 */
  if (C.zf) goto L_125ab192;
  /* 125ab180 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 125ab186 je 0x125ab18a */
  if (C.zf) goto L_125ab18a;
  /* 125ab188 jmp 0x125ab151 */
  goto L_125ab151;
L_125ab18a:;
  /* 125ab18a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 125ab18c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125ab190 pop edi */
  EDI = (pop32());
  /* 125ab191 ret  */
  ESPCHK(0x125ab0d0u, _esp0);
  ESP += 4; return;
L_125ab192:;
  /* 125ab192 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 125ab195 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125ab199 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 125ab19d pop edi */
  EDI = (pop32());
  /* 125ab19e ret  */
  ESPCHK(0x125ab0d0u, _esp0);
  ESP += 4; return;
L_125ab19f:;
  /* 125ab19f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 125ab1a2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125ab1a6 pop edi */
  EDI = (pop32());
  /* 125ab1a7 ret  */
  ESPCHK(0x125ab0d0u, _esp0);
  ESP += 4; return;
L_125ab1a8:;
  /* 125ab1a8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 125ab1aa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125ab1ae pop edi */
  EDI = (pop32());
  /* 125ab1af ret  */
  ESPCHK(0x125ab0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1b0 @ 0x125ab1b0 (243 bytes, 91 insns) */
void f_125ab1b0(void) {
  FTRACE(0x125ab1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ab1b1 mov ebp, esp */
  EBP = (ESP);
  /* 125ab1b3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab1b6 push ebx */
  push32((uint32_t)(EBX));
  /* 125ab1b7 push esi */
  push32((uint32_t)(ESI));
  /* 125ab1b8 push edi */
  push32((uint32_t)(EDI));
  /* 125ab1b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 125ab1bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125ab1bf:;
  /* 125ab1bf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab1c3 jne 0x125ab1e3 */
  if (!C.zf) goto L_125ab1e3;
  /* 125ab1c5 push 0x125cf5a8 */
  push32((uint32_t)(0x125cf5a8u));
  /* 125ab1ca push 0 */
  push32((uint32_t)(0x0u));
  /* 125ab1cc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 125ab1ce push 0x125cf5b8 */
  push32((uint32_t)(0x125cf5b8u));
  /* 125ab1d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 125ab1d5 call 0x125a71d0 */
  push32(0x125ab1dau); f_125a71d0();
  /* 125ab1da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab1dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab1e0 jne 0x125ab1e3 */
  if (!C.zf) goto L_125ab1e3;
  /* 125ab1e2 int3  */
  x86_unimpl("int3 @ 0x125ab1e2");
L_125ab1e3:;
  /* 125ab1e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125ab1e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ab1e7 jne 0x125ab1bf */
  if (!C.zf) goto L_125ab1bf;
L_125ab1e9:;
  /* 125ab1e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab1ed jne 0x125ab20d */
  if (!C.zf) goto L_125ab20d;
  /* 125ab1ef push 0x125cf58c */
  push32((uint32_t)(0x125cf58cu));
  /* 125ab1f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125ab1f6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 125ab1f8 push 0x125cf5b8 */
  push32((uint32_t)(0x125cf5b8u));
  /* 125ab1fd push 2 */
  push32((uint32_t)(0x2u));
  /* 125ab1ff call 0x125a71d0 */
  push32(0x125ab204u); f_125a71d0();
  /* 125ab204 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab207 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab20a jne 0x125ab20d */
  if (!C.zf) goto L_125ab20d;
  /* 125ab20c int3  */
  x86_unimpl("int3 @ 0x125ab20c");
L_125ab20d:;
  /* 125ab20d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ab20f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125ab211 jne 0x125ab1e9 */
  if (!C.zf) goto L_125ab1e9;
  /* 125ab213 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab216 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 125ab21d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab220 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ab223 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 125ab226 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab229 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ab22c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 125ab22e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab231 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ab234 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 125ab237 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125ab23a push ecx */
  push32((uint32_t)(ECX));
  /* 125ab23b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125ab23e push edx */
  push32((uint32_t)(EDX));
  /* 125ab23f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab242 push eax */
  push32((uint32_t)(EAX));
  /* 125ab243 call 0x125af0a0 */
  push32(0x125ab248u); f_125af0a0();
  /* 125ab248 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab24b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125ab24e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab251 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ab254 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab257 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab25a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 125ab25d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab260 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab264 jl 0x125ab288 */
  if ((C.sf!=C.of)) goto L_125ab288;
  /* 125ab266 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab269 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125ab26b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125ab26e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125ab270 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125ab276 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125ab279 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab27c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125ab27e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab281 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab284 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125ab286 jmp 0x125ab299 */
  goto L_125ab299;
L_125ab288:;
  /* 125ab288 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 125ab28b push edx */
  push32((uint32_t)(EDX));
  /* 125ab28c push 0 */
  push32((uint32_t)(0x0u));
  /* 125ab28e call 0x125aee20 */
  push32(0x125ab293u); f_125aee20();
  /* 125ab293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab296 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_125ab299:;
  /* 125ab299 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125ab29c pop edi */
  EDI = (pop32());
  /* 125ab29d pop esi */
  ESI = (pop32());
  /* 125ab29e pop ebx */
  EBX = (pop32());
  /* 125ab29f mov esp, ebp */
  ESP = (EBP);
  /* 125ab2a1 pop ebp */
  EBP = (pop32());
  /* 125ab2a2 ret  */
  ESPCHK(0x125ab1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2b0 @ 0x125ab2b0 (47 bytes, 17 insns) */
void f_125ab2b0(void) {
  FTRACE(0x125ab2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab2b0 push ecx */
  push32((uint32_t)(ECX));
  /* 125ab2b1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab2b6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 125ab2ba jb 0x125ab2d0 */
  if (C.cf) goto L_125ab2d0;
L_125ab2bc:;
  /* 125ab2bc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab2c2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab2c7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 125ab2c9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab2ce jae 0x125ab2bc */
  if (!C.cf) goto L_125ab2bc;
L_125ab2d0:;
  /* 125ab2d0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab2d2 mov eax, esp */
  EAX = (ESP);
  /* 125ab2d4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 125ab2d6 mov esp, ecx */
  ESP = (ECX);
  /* 125ab2d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ab2da mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ab2dd push eax */
  push32((uint32_t)(EAX));
  /* 125ab2de ret  */
  ESPCHK(0x125ab2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2e0 @ 0x125ab2e0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_125ab2e0(void) {
  FTRACE(0x125ab2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ab2e1 mov ebp, esp */
  EBP = (ESP);
  /* 125ab2e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab2e6 push esi */
  push32((uint32_t)(ESI));
  /* 125ab2e7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab2eb je 0x125ab2f3 */
  if (C.zf) goto L_125ab2f3;
  /* 125ab2ed cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab2f1 jne 0x125ab2f8 */
  if (!C.zf) goto L_125ab2f8;
L_125ab2f3:;
  /* 125ab2f3 jmp 0x125ab4c8 */
  goto L_125ab4c8;
L_125ab2f8:;
  /* 125ab2f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab2fc je 0x125ab314 */
  if (C.zf) goto L_125ab314;
  /* 125ab2fe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab302 je 0x125ab314 */
  if (C.zf) goto L_125ab314;
  /* 125ab304 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab308 je 0x125ab314 */
  if (C.zf) goto L_125ab314;
  /* 125ab30a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab30e jne 0x125ab3f1 */
  if (!C.zf) goto L_125ab3f1;
L_125ab314:;
  /* 125ab314 push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab316 call 0x125abb10 */
  push32(0x125ab31bu); f_125abb10();
  /* 125ab31b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab31e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab322 je 0x125ab32a */
  if (C.zf) goto L_125ab32a;
  /* 125ab324 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab328 jne 0x125ab36f */
  if (!C.zf) goto L_125ab36f;
L_125ab32a:;
  /* 125ab32a cmp dword ptr [0x125d3a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab331 jne 0x125ab36f */
  if (!C.zf) goto L_125ab36f;
  /* 125ab333 push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab335 push 0x125ab510 */
  push32((uint32_t)(0x125ab510u));
  /* 125ab33a call dword ptr [0x125d6340] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6340))), 0x125ab340u);
  /* 125ab340 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab343 jne 0x125ab351 */
  if (!C.zf) goto L_125ab351;
  /* 125ab345 mov dword ptr [0x125d3a54], 1 */
  w32((uint32_t)(0x125d3a54), (0x1u));
  /* 125ab34f jmp 0x125ab36f */
  goto L_125ab36f;
L_125ab351:;
  /* 125ab351 call dword ptr [0x125d63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b4))), 0x125ab357u);
  /* 125ab357 mov esi, eax */
  ESI = (EAX);
  /* 125ab359 call 0x125afff0 */
  push32(0x125ab35eu); f_125afff0();
  /* 125ab35e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 125ab360 push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab362 call 0x125abbb0 */
  push32(0x125ab367u); f_125abbb0();
  /* 125ab367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab36a jmp 0x125ab4c8 */
  goto L_125ab4c8;
L_125ab36f:;
  /* 125ab36f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ab372 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125ab375 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ab378 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab37b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125ab37e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab382 ja 0x125ab3e2 */
  if ((!C.cf&&!C.zf)) goto L_125ab3e2;
  /* 125ab384 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ab387 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ab389 mov dl, byte ptr [eax + 0x125ab4ef] */
  DL = (r8((uint32_t)(EAX + 0x125ab4ef)));
  /* 125ab38f jmp dword ptr [edx*4 + 0x125ab4db] */
  switch (EDX) {
    case 0: goto L_125ab396;
    case 1: goto L_125ab3d0;
    case 2: goto L_125ab3aa;
    case 3: goto L_125ab3bd;
    case 4: goto L_125ab3e2;
    default: x86_unimpl("switch@0x125ab38f out of table"); return;
  }
L_125ab396:;
  /* 125ab396 mov ecx, dword ptr [0x125d3a44] */
  ECX = (r32((uint32_t)(0x125d3a44)));
  /* 125ab39c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125ab39f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ab3a2 mov dword ptr [0x125d3a44], edx */
  w32((uint32_t)(0x125d3a44), (EDX));
  /* 125ab3a8 jmp 0x125ab3e2 */
  goto L_125ab3e2;
L_125ab3aa:;
  /* 125ab3aa mov eax, dword ptr [0x125d3a48] */
  EAX = (r32((uint32_t)(0x125d3a48)));
  /* 125ab3af mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125ab3b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ab3b5 mov dword ptr [0x125d3a48], ecx */
  w32((uint32_t)(0x125d3a48), (ECX));
  /* 125ab3bb jmp 0x125ab3e2 */
  goto L_125ab3e2;
L_125ab3bd:;
  /* 125ab3bd mov edx, dword ptr [0x125d3a4c] */
  EDX = (r32((uint32_t)(0x125d3a4c)));
  /* 125ab3c3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125ab3c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ab3c9 mov dword ptr [0x125d3a4c], eax */
  w32((uint32_t)(0x125d3a4c), (EAX));
  /* 125ab3ce jmp 0x125ab3e2 */
  goto L_125ab3e2;
L_125ab3d0:;
  /* 125ab3d0 mov ecx, dword ptr [0x125d3a50] */
  ECX = (r32((uint32_t)(0x125d3a50)));
  /* 125ab3d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125ab3d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ab3dc mov dword ptr [0x125d3a50], edx */
  w32((uint32_t)(0x125d3a50), (EDX));
L_125ab3e2:;
  /* 125ab3e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab3e4 call 0x125abbb0 */
  push32(0x125ab3e9u); f_125abbb0();
  /* 125ab3e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab3ec jmp 0x125ab4c3 */
  goto L_125ab4c3;
L_125ab3f1:;
  /* 125ab3f1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab3f5 je 0x125ab408 */
  if (C.zf) goto L_125ab408;
  /* 125ab3f7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab3fb je 0x125ab408 */
  if (C.zf) goto L_125ab408;
  /* 125ab3fd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab401 je 0x125ab408 */
  if (C.zf) goto L_125ab408;
  /* 125ab403 jmp 0x125ab4c8 */
  goto L_125ab4c8;
L_125ab408:;
  /* 125ab408 call 0x125a7b50 */
  push32(0x125ab40du); f_125a7b50();
  /* 125ab40d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125ab410 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab413 cmp dword ptr [eax + 0x50], 0x125d1c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x125d1c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab41a jne 0x125ab465 */
  if (!C.zf) goto L_125ab465;
  /* 125ab41c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 125ab421 push 0x125cf5c4 */
  push32((uint32_t)(0x125cf5c4u));
  /* 125ab426 push 2 */
  push32((uint32_t)(0x2u));
  /* 125ab428 mov ecx, dword ptr [0x125d1c80] */
  ECX = (r32((uint32_t)(0x125d1c80)));
  /* 125ab42e push ecx */
  push32((uint32_t)(ECX));
  /* 125ab42f call 0x125a8110 */
  push32(0x125ab434u); f_125a8110();
  /* 125ab434 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab437 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab43a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 125ab43d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab440 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab444 je 0x125ab463 */
  if (C.zf) goto L_125ab463;
  /* 125ab446 mov ecx, dword ptr [0x125d1c80] */
  ECX = (r32((uint32_t)(0x125d1c80)));
  /* 125ab44c push ecx */
  push32((uint32_t)(ECX));
  /* 125ab44d push 0x125d1c00 */
  push32((uint32_t)(0x125d1c00u));
  /* 125ab452 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab455 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 125ab458 push eax */
  push32((uint32_t)(EAX));
  /* 125ab459 call 0x125ae9f0 */
  push32(0x125ab45eu); f_125ae9f0();
  /* 125ab45e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab461 jmp 0x125ab465 */
  goto L_125ab465;
L_125ab463:;
  /* 125ab463 jmp 0x125ab4c8 */
  goto L_125ab4c8;
L_125ab465:;
  /* 125ab465 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab468 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 125ab46b push edx */
  push32((uint32_t)(EDX));
  /* 125ab46c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ab46f push eax */
  push32((uint32_t)(EAX));
  /* 125ab470 call 0x125ab7f0 */
  push32(0x125ab475u); f_125ab7f0();
  /* 125ab475 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab478 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125ab47b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab47f jne 0x125ab483 */
  if (!C.zf) goto L_125ab483;
  /* 125ab481 jmp 0x125ab4c8 */
  goto L_125ab4c8;
L_125ab483:;
  /* 125ab483 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ab486 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 125ab489 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125ab48c:;
  /* 125ab48c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ab48f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125ab492 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab495 jne 0x125ab4c3 */
  if (!C.zf) goto L_125ab4c3;
  /* 125ab497 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ab49a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ab49d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 125ab4a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ab4a3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab4a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125ab4a9 mov edx, dword ptr [0x125d1c84] */
  EDX = (r32((uint32_t)(0x125d1c84)));
  /* 125ab4af imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ab4b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab4b5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 125ab4b8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab4ba cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab4bd jb 0x125ab4c1 */
  if (C.cf) goto L_125ab4c1;
  /* 125ab4bf jmp 0x125ab4c3 */
  goto L_125ab4c3;
L_125ab4c1:;
  /* 125ab4c1 jmp 0x125ab48c */
  goto L_125ab48c;
L_125ab4c3:;
  /* 125ab4c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ab4c6 jmp 0x125ab4d6 */
  goto L_125ab4d6;
L_125ab4c8:;
  /* 125ab4c8 call 0x125affe0 */
  push32(0x125ab4cdu); f_125affe0();
  /* 125ab4cd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 125ab4d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125ab4d6:;
  /* 125ab4d6 pop esi */
  ESI = (pop32());
  /* 125ab4d7 mov esp, ebp */
  ESP = (EBP);
  /* 125ab4d9 pop ebp */
  EBP = (pop32());
  /* 125ab4da ret  */
  ESPCHK(0x125ab2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b510 @ 0x125ab510 (146 bytes, 45 insns) */
void f_125ab510(void) {
  FTRACE(0x125ab510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab510 push ebp */
  push32((uint32_t)(EBP));
  /* 125ab511 mov ebp, esp */
  EBP = (ESP);
  /* 125ab513 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab516 push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab518 call 0x125abb10 */
  push32(0x125ab51du); f_125abb10();
  /* 125ab51d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab520 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab524 jne 0x125ab53e */
  if (!C.zf) goto L_125ab53e;
  /* 125ab526 mov dword ptr [ebp - 8], 0x125d3a44 */
  w32((uint32_t)(EBP + -0x8), (0x125d3a44u));
  /* 125ab52d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ab530 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125ab532 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125ab535 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 125ab53c jmp 0x125ab554 */
  goto L_125ab554;
L_125ab53e:;
  /* 125ab53e mov dword ptr [ebp - 8], 0x125d3a48 */
  w32((uint32_t)(EBP + -0x8), (0x125d3a48u));
  /* 125ab545 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ab548 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125ab54a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125ab54d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_125ab554:;
  /* 125ab554 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab558 jne 0x125ab568 */
  if (!C.zf) goto L_125ab568;
  /* 125ab55a push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab55c call 0x125abbb0 */
  push32(0x125ab561u); f_125abbb0();
  /* 125ab561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab564 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ab566 jmp 0x125ab59c */
  goto L_125ab59c;
L_125ab568:;
  /* 125ab568 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab56c je 0x125ab58d */
  if (C.zf) goto L_125ab58d;
  /* 125ab56e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ab571 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 125ab577 push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab579 call 0x125abbb0 */
  push32(0x125ab57eu); f_125abbb0();
  /* 125ab57e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab584 push edx */
  push32((uint32_t)(EDX));
  /* 125ab585 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x125ab588u);
  /* 125ab588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab58b jmp 0x125ab597 */
  goto L_125ab597;
L_125ab58d:;
  /* 125ab58d push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab58f call 0x125abbb0 */
  push32(0x125ab594u); f_125abbb0();
  /* 125ab594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125ab597:;
  /* 125ab597 mov eax, 1 */
  EAX = (0x1u);
L_125ab59c:;
  /* 125ab59c mov esp, ebp */
  ESP = (EBP);
  /* 125ab59e pop ebp */
  EBP = (pop32());
  /* 125ab59f ret 4 */
  ESPCHK(0x125ab510u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b5b0 @ 0x125ab5b0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_125ab5b0(void) {
  FTRACE(0x125ab5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ab5b1 mov ebp, esp */
  EBP = (ESP);
  /* 125ab5b3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab5b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125ab5bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ab5c0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125ab5c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ab5c6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab5c9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125ab5cc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab5d0 ja 0x125ab67e */
  if ((!C.cf&&!C.zf)) goto L_125ab67e;
  /* 125ab5d6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125ab5d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125ab5db mov dl, byte ptr [eax + 0x125ab7d2] */
  DL = (r8((uint32_t)(EAX + 0x125ab7d2)));
  /* 125ab5e1 jmp dword ptr [edx*4 + 0x125ab7ba] */
  switch (EDX) {
    case 0: goto L_125ab5e8;
    case 1: goto L_125ab653;
    case 2: goto L_125ab639;
    case 3: goto L_125ab605;
    case 4: goto L_125ab61f;
    case 5: goto L_125ab67e;
    default: x86_unimpl("switch@0x125ab5e1 out of table"); return;
  }
L_125ab5e8:;
  /* 125ab5e8 mov dword ptr [ebp - 0x18], 0x125d3a44 */
  w32((uint32_t)(EBP + -0x18), (0x125d3a44u));
  /* 125ab5ef mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ab5f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125ab5f4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 125ab5f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ab5fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab5fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125ab600 jmp 0x125ab686 */
  goto L_125ab686;
L_125ab605:;
  /* 125ab605 mov dword ptr [ebp - 0x18], 0x125d3a48 */
  w32((uint32_t)(EBP + -0x18), (0x125d3a48u));
  /* 125ab60c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ab60f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125ab611 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 125ab614 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ab617 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab61a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125ab61d jmp 0x125ab686 */
  goto L_125ab686;
L_125ab61f:;
  /* 125ab61f mov dword ptr [ebp - 0x18], 0x125d3a4c */
  w32((uint32_t)(EBP + -0x18), (0x125d3a4cu));
  /* 125ab626 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ab629 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125ab62b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 125ab62e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ab631 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab634 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125ab637 jmp 0x125ab686 */
  goto L_125ab686;
L_125ab639:;
  /* 125ab639 mov dword ptr [ebp - 0x18], 0x125d3a50 */
  w32((uint32_t)(EBP + -0x18), (0x125d3a50u));
  /* 125ab640 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ab643 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125ab645 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 125ab648 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125ab64b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab64e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125ab651 jmp 0x125ab686 */
  goto L_125ab686;
L_125ab653:;
  /* 125ab653 call 0x125a7b50 */
  push32(0x125ab658u); f_125a7b50();
  /* 125ab658 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125ab65b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab65e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 125ab661 push edx */
  push32((uint32_t)(EDX));
  /* 125ab662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ab665 push eax */
  push32((uint32_t)(EAX));
  /* 125ab666 call 0x125ab7f0 */
  push32(0x125ab66bu); f_125ab7f0();
  /* 125ab66b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab66e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab671 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125ab674 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ab677 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125ab679 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 125ab67c jmp 0x125ab686 */
  goto L_125ab686;
L_125ab67e:;
  /* 125ab67e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125ab681 jmp 0x125ab7b6 */
  goto L_125ab7b6;
L_125ab686:;
  /* 125ab686 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab68a je 0x125ab696 */
  if (C.zf) goto L_125ab696;
  /* 125ab68c push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab68e call 0x125abb10 */
  push32(0x125ab693u); f_125abb10();
  /* 125ab693 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125ab696:;
  /* 125ab696 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab69a jne 0x125ab6b3 */
  if (!C.zf) goto L_125ab6b3;
  /* 125ab69c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab6a0 je 0x125ab6ac */
  if (C.zf) goto L_125ab6ac;
  /* 125ab6a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab6a4 call 0x125abbb0 */
  push32(0x125ab6a9u); f_125abbb0();
  /* 125ab6a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125ab6ac:;
  /* 125ab6ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ab6ae jmp 0x125ab7b6 */
  goto L_125ab7b6;
L_125ab6b3:;
  /* 125ab6b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab6b7 jne 0x125ab6d0 */
  if (!C.zf) goto L_125ab6d0;
  /* 125ab6b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab6bd je 0x125ab6c9 */
  if (C.zf) goto L_125ab6c9;
  /* 125ab6bf push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab6c1 call 0x125abbb0 */
  push32(0x125ab6c6u); f_125abbb0();
  /* 125ab6c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125ab6c9:;
  /* 125ab6c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 125ab6cb call 0x125a78d0 */
  push32(0x125ab6d0u); f_125a78d0();
L_125ab6d0:;
  /* 125ab6d0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab6d4 je 0x125ab6e2 */
  if (C.zf) goto L_125ab6e2;
  /* 125ab6d6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab6da je 0x125ab6e2 */
  if (C.zf) goto L_125ab6e2;
  /* 125ab6dc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab6e0 jne 0x125ab70e */
  if (!C.zf) goto L_125ab70e;
L_125ab6e2:;
  /* 125ab6e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab6e5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 125ab6e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125ab6eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab6ee mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 125ab6f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab6f9 jne 0x125ab70e */
  if (!C.zf) goto L_125ab70e;
  /* 125ab6fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab6fe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 125ab701 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125ab704 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab707 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_125ab70e:;
  /* 125ab70e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab712 jne 0x125ab750 */
  if (!C.zf) goto L_125ab750;
  /* 125ab714 mov eax, dword ptr [0x125d1c78] */
  EAX = (r32((uint32_t)(0x125d1c78)));
  /* 125ab719 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125ab71c jmp 0x125ab727 */
  goto L_125ab727;
L_125ab71e:;
  /* 125ab71e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ab721 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab724 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_125ab727:;
  /* 125ab727 mov edx, dword ptr [0x125d1c78] */
  EDX = (r32((uint32_t)(0x125d1c78)));
  /* 125ab72d add edx, dword ptr [0x125d1c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125d1c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab733 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab736 jge 0x125ab74e */
  if ((C.sf==C.of)) goto L_125ab74e;
  /* 125ab738 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125ab73b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ab73e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab741 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 125ab744 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 125ab74c jmp 0x125ab71e */
  goto L_125ab71e;
L_125ab74e:;
  /* 125ab74e jmp 0x125ab759 */
  goto L_125ab759;
L_125ab750:;
  /* 125ab750 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125ab753 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_125ab759:;
  /* 125ab759 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab75d je 0x125ab769 */
  if (C.zf) goto L_125ab769;
  /* 125ab75f push 1 */
  push32((uint32_t)(0x1u));
  /* 125ab761 call 0x125abbb0 */
  push32(0x125ab766u); f_125abbb0();
  /* 125ab766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125ab769:;
  /* 125ab769 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab76d jne 0x125ab780 */
  if (!C.zf) goto L_125ab780;
  /* 125ab76f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab772 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 125ab775 push edx */
  push32((uint32_t)(EDX));
  /* 125ab776 push 8 */
  push32((uint32_t)(0x8u));
  /* 125ab778 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x125ab77bu);
  /* 125ab77b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab77e jmp 0x125ab78a */
  goto L_125ab78a;
L_125ab780:;
  /* 125ab780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ab783 push eax */
  push32((uint32_t)(EAX));
  /* 125ab784 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x125ab787u);
  /* 125ab787 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125ab78a:;
  /* 125ab78a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab78e je 0x125ab79c */
  if (C.zf) goto L_125ab79c;
  /* 125ab790 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab794 je 0x125ab79c */
  if (C.zf) goto L_125ab79c;
  /* 125ab796 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab79a jne 0x125ab7b4 */
  if (!C.zf) goto L_125ab7b4;
L_125ab79c:;
  /* 125ab79c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab79f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125ab7a2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 125ab7a5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab7a9 jne 0x125ab7b4 */
  if (!C.zf) goto L_125ab7b4;
  /* 125ab7ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab7ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ab7b1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_125ab7b4:;
  /* 125ab7b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125ab7b6:;
  /* 125ab7b6 mov esp, ebp */
  ESP = (EBP);
  /* 125ab7b8 pop ebp */
  EBP = (pop32());
  /* 125ab7b9 ret  */
  ESPCHK(0x125ab5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7f0 @ 0x125ab7f0 (91 bytes, 35 insns) */
void f_125ab7f0(void) {
  FTRACE(0x125ab7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125ab7f1 mov ebp, esp */
  EBP = (ESP);
  /* 125ab7f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125ab7f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ab7f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125ab7fa:;
  /* 125ab7fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab7fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125ab800 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab803 je 0x125ab823 */
  if (C.zf) goto L_125ab823;
  /* 125ab805 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab808 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab80b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125ab80e mov ecx, dword ptr [0x125d1c84] */
  ECX = (r32((uint32_t)(0x125d1c84)));
  /* 125ab814 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ab817 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ab81a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab81c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab81f jae 0x125ab823 */
  if (!C.cf) goto L_125ab823;
  /* 125ab821 jmp 0x125ab7fa */
  goto L_125ab7fa;
L_125ab823:;
  /* 125ab823 mov eax, dword ptr [0x125d1c84] */
  EAX = (r32((uint32_t)(0x125d1c84)));
  /* 125ab828 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125ab82b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ab82e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab830 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab833 jae 0x125ab845 */
  if (!C.cf) goto L_125ab845;
  /* 125ab835 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab838 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 125ab83b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab83e jne 0x125ab845 */
  if (!C.zf) goto L_125ab845;
  /* 125ab840 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab843 jmp 0x125ab847 */
  goto L_125ab847;
L_125ab845:;
  /* 125ab845 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125ab847:;
  /* 125ab847 mov esp, ebp */
  ESP = (EBP);
  /* 125ab849 pop ebp */
  EBP = (pop32());
  /* 125ab84a ret  */
  ESPCHK(0x125ab7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b850 @ 0x125ab850 (13 bytes, 6 insns) */
void f_125ab850(void) {
  FTRACE(0x125ab850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab850 push ebp */
  push32((uint32_t)(EBP));
  /* 125ab851 mov ebp, esp */
  EBP = (ESP);
  /* 125ab853 call 0x125a7b50 */
  push32(0x125ab858u); f_125a7b50();
  /* 125ab858 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab85b pop ebp */
  EBP = (pop32());
  /* 125ab85c ret  */
  ESPCHK(0x125ab850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b860 @ 0x125ab860 (13 bytes, 6 insns) */
void f_125ab860(void) {
  FTRACE(0x125ab860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab860 push ebp */
  push32((uint32_t)(EBP));
  /* 125ab861 mov ebp, esp */
  EBP = (ESP);
  /* 125ab863 call 0x125a7b50 */
  push32(0x125ab868u); f_125a7b50();
  /* 125ab868 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab86b pop ebp */
  EBP = (pop32());
  /* 125ab86c ret  */
  ESPCHK(0x125ab860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b870 @ 0x125ab870 (187 bytes, 54 insns) */
void f_125ab870(void) {
  FTRACE(0x125ab870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab870 push ebp */
  push32((uint32_t)(EBP));
  /* 125ab871 mov ebp, esp */
  EBP = (ESP);
  /* 125ab873 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125ab876 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125ab87d cmp dword ptr [0x125d3a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab884 jne 0x125ab8e3 */
  if (!C.zf) goto L_125ab8e3;
  /* 125ab886 push 0x125ce9f0 */
  push32((uint32_t)(0x125ce9f0u));
  /* 125ab88b call dword ptr [0x125d6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6384))), 0x125ab891u);
  /* 125ab891 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125ab894 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab898 je 0x125ab8b7 */
  if (C.zf) goto L_125ab8b7;
  /* 125ab89a push 0x125cf5f4 */
  push32((uint32_t)(0x125cf5f4u));
  /* 125ab89f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ab8a2 push eax */
  push32((uint32_t)(EAX));
  /* 125ab8a3 call dword ptr [0x125d6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6380))), 0x125ab8a9u);
  /* 125ab8a9 mov dword ptr [0x125d3a58], eax */
  w32((uint32_t)(0x125d3a58), (EAX));
  /* 125ab8ae cmp dword ptr [0x125d3a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab8b5 jne 0x125ab8bb */
  if (!C.zf) goto L_125ab8bb;
L_125ab8b7:;
  /* 125ab8b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125ab8b9 jmp 0x125ab927 */
  goto L_125ab927;
L_125ab8bb:;
  /* 125ab8bb push 0x125cf5e4 */
  push32((uint32_t)(0x125cf5e4u));
  /* 125ab8c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ab8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 125ab8c4 call dword ptr [0x125d6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6380))), 0x125ab8cau);
  /* 125ab8ca mov dword ptr [0x125d3a5c], eax */
  w32((uint32_t)(0x125d3a5c), (EAX));
  /* 125ab8cf push 0x125cf5d0 */
  push32((uint32_t)(0x125cf5d0u));
  /* 125ab8d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ab8d7 push edx */
  push32((uint32_t)(EDX));
  /* 125ab8d8 call dword ptr [0x125d6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6380))), 0x125ab8deu);
  /* 125ab8de mov dword ptr [0x125d3a60], eax */
  w32((uint32_t)(0x125d3a60), (EAX));
L_125ab8e3:;
  /* 125ab8e3 cmp dword ptr [0x125d3a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab8ea je 0x125ab8f5 */
  if (C.zf) goto L_125ab8f5;
  /* 125ab8ec call dword ptr [0x125d3a5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3a5c))), 0x125ab8f2u);
  /* 125ab8f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125ab8f5:;
  /* 125ab8f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab8f9 je 0x125ab911 */
  if (C.zf) goto L_125ab911;
  /* 125ab8fb cmp dword ptr [0x125d3a60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3a60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ab902 je 0x125ab911 */
  if (C.zf) goto L_125ab911;
  /* 125ab904 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab907 push eax */
  push32((uint32_t)(EAX));
  /* 125ab908 call dword ptr [0x125d3a60] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3a60))), 0x125ab90eu);
  /* 125ab90e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125ab911:;
  /* 125ab911 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125ab914 push ecx */
  push32((uint32_t)(ECX));
  /* 125ab915 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ab918 push edx */
  push32((uint32_t)(EDX));
  /* 125ab919 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ab91c push eax */
  push32((uint32_t)(EAX));
  /* 125ab91d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ab920 push ecx */
  push32((uint32_t)(ECX));
  /* 125ab921 call dword ptr [0x125d3a58] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d3a58))), 0x125ab927u);
L_125ab927:;
  /* 125ab927 mov esp, ebp */
  ESP = (EBP);
  /* 125ab929 pop ebp */
  EBP = (pop32());
  /* 125ab92a ret  */
  ESPCHK(0x125ab870u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x125ab930 (254 bytes, 109 insns) */
void f_125ab930(void) {
  FTRACE(0x125ab930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125ab930 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 125ab934 push edi */
  push32((uint32_t)(EDI));
  /* 125ab935 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125ab937 je 0x125ab9b3 */
  if (C.zf) goto L_125ab9b3;
  /* 125ab939 push esi */
  push32((uint32_t)(ESI));
  /* 125ab93a push ebx */
  push32((uint32_t)(EBX));
  /* 125ab93b mov ebx, ecx */
  EBX = (ECX);
  /* 125ab93d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 125ab941 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 125ab947 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 125ab94b jne 0x125ab954 */
  if (!C.zf) goto L_125ab954;
  /* 125ab94d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125ab950 jne 0x125ab9c1 */
  if (!C.zf) goto L_125ab9c1;
  /* 125ab952 jmp 0x125ab975 */
  goto L_125ab975;
L_125ab954:;
  /* 125ab954 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125ab956 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125ab957 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125ab959 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125ab95a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125ab95b je 0x125ab982 */
  if (C.zf) goto L_125ab982;
  /* 125ab95d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 125ab95f je 0x125ab98a */
  if (C.zf) goto L_125ab98a;
  /* 125ab961 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 125ab967 jne 0x125ab954 */
  if (!C.zf) goto L_125ab954;
  /* 125ab969 mov ebx, ecx */
  EBX = (ECX);
  /* 125ab96b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125ab96e jne 0x125ab9c1 */
  if (!C.zf) goto L_125ab9c1;
L_125ab970:;
  /* 125ab970 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 125ab973 je 0x125ab982 */
  if (C.zf) goto L_125ab982;
L_125ab975:;
  /* 125ab975 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125ab977 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125ab978 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125ab97a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125ab97b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 125ab97d je 0x125ab9ae */
  if (C.zf) goto L_125ab9ae;
  /* 125ab97f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 125ab980 jne 0x125ab975 */
  if (!C.zf) goto L_125ab975;
L_125ab982:;
  /* 125ab982 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 125ab986 pop ebx */
  EBX = (pop32());
  /* 125ab987 pop esi */
  ESI = (pop32());
  /* 125ab988 pop edi */
  EDI = (pop32());
  /* 125ab989 ret  */
  ESPCHK(0x125ab930u, _esp0);
  ESP += 4; return;
L_125ab98a:;
  /* 125ab98a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125ab990 je 0x125ab9a4 */
  if (C.zf) goto L_125ab9a4;
L_125ab992:;
  /* 125ab992 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125ab994 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125ab995 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125ab996 je 0x125aba26 */
  if (C.zf) goto L_125aba26;
  /* 125ab99c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 125ab9a2 jne 0x125ab992 */
  if (!C.zf) goto L_125ab992;
L_125ab9a4:;
  /* 125ab9a4 mov ebx, ecx */
  EBX = (ECX);
  /* 125ab9a6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125ab9a9 jne 0x125aba17 */
  if (!C.zf) goto L_125aba17;
L_125ab9ab:;
  /* 125ab9ab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125ab9ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_125ab9ae:;
  /* 125ab9ae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 125ab9af jne 0x125ab9ab */
  if (!C.zf) goto L_125ab9ab;
  /* 125ab9b1 pop ebx */
  EBX = (pop32());
  /* 125ab9b2 pop esi */
  ESI = (pop32());
L_125ab9b3:;
  /* 125ab9b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125ab9b7 pop edi */
  EDI = (pop32());
  /* 125ab9b8 ret  */
  ESPCHK(0x125ab930u, _esp0);
  ESP += 4; return;
L_125ab9b9:;
  /* 125ab9b9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 125ab9bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab9be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125ab9bf je 0x125ab970 */
  if (C.zf) goto L_125ab970;
L_125ab9c1:;
  /* 125ab9c1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 125ab9c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 125ab9c8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab9ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125ab9cd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 125ab9cf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 125ab9d1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125ab9d4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 125ab9d9 je 0x125ab9b9 */
  if (C.zf) goto L_125ab9b9;
  /* 125ab9db test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 125ab9dd je 0x125aba0b */
  if (C.zf) goto L_125aba0b;
  /* 125ab9df test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 125ab9e1 je 0x125aba01 */
  if (C.zf) goto L_125aba01;
  /* 125ab9e3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 125ab9e9 je 0x125ab9f7 */
  if (C.zf) goto L_125ab9f7;
  /* 125ab9eb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 125ab9f1 jne 0x125ab9b9 */
  if (!C.zf) goto L_125ab9b9;
  /* 125ab9f3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 125ab9f5 jmp 0x125aba0f */
  goto L_125aba0f;
L_125ab9f7:;
  /* 125ab9f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125ab9fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 125ab9ff jmp 0x125aba0f */
  goto L_125aba0f;
L_125aba01:;
  /* 125aba01 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125aba07 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 125aba09 jmp 0x125aba0f */
  goto L_125aba0f;
L_125aba0b:;
  /* 125aba0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125aba0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_125aba0f:;
  /* 125aba0f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125aba12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125aba14 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125aba15 je 0x125aba21 */
  if (C.zf) goto L_125aba21;
L_125aba17:;
  /* 125aba17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125aba19:;
  /* 125aba19 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 125aba1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125aba1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125aba1f jne 0x125aba19 */
  if (!C.zf) goto L_125aba19;
L_125aba21:;
  /* 125aba21 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 125aba24 jne 0x125ab9ab */
  if (!C.zf) goto L_125ab9ab;
L_125aba26:;
  /* 125aba26 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 125aba2a pop ebx */
  EBX = (pop32());
  /* 125aba2b pop esi */
  ESI = (pop32());
  /* 125aba2c pop edi */
  EDI = (pop32());
  /* 125aba2d ret  */
  ESPCHK(0x125ab930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba30 @ 0x125aba30 (55 bytes, 16 insns) */
void f_125aba30(void) {
  FTRACE(0x125aba30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aba30 push ebp */
  push32((uint32_t)(EBP));
  /* 125aba31 mov ebp, esp */
  EBP = (ESP);
  /* 125aba33 mov eax, dword ptr [0x125d1b84] */
  EAX = (r32((uint32_t)(0x125d1b84)));
  /* 125aba38 push eax */
  push32((uint32_t)(EAX));
  /* 125aba39 call dword ptr [0x125d6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6348))), 0x125aba3fu);
  /* 125aba3f mov ecx, dword ptr [0x125d1b74] */
  ECX = (r32((uint32_t)(0x125d1b74)));
  /* 125aba45 push ecx */
  push32((uint32_t)(ECX));
  /* 125aba46 call dword ptr [0x125d6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6348))), 0x125aba4cu);
  /* 125aba4c mov edx, dword ptr [0x125d1b64] */
  EDX = (r32((uint32_t)(0x125d1b64)));
  /* 125aba52 push edx */
  push32((uint32_t)(EDX));
  /* 125aba53 call dword ptr [0x125d6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6348))), 0x125aba59u);
  /* 125aba59 mov eax, dword ptr [0x125d1b44] */
  EAX = (r32((uint32_t)(0x125d1b44)));
  /* 125aba5e push eax */
  push32((uint32_t)(EAX));
  /* 125aba5f call dword ptr [0x125d6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6348))), 0x125aba65u);
  /* 125aba65 pop ebp */
  EBP = (pop32());
  /* 125aba66 ret  */
  ESPCHK(0x125aba30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba70 @ 0x125aba70 (159 bytes, 47 insns) */
void f_125aba70(void) {
  FTRACE(0x125aba70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125aba70 push ebp */
  push32((uint32_t)(EBP));
  /* 125aba71 mov ebp, esp */
  EBP = (ESP);
  /* 125aba73 push ecx */
  push32((uint32_t)(ECX));
  /* 125aba74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125aba7b jmp 0x125aba86 */
  goto L_125aba86;
L_125aba7d:;
  /* 125aba7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aba80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125aba83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125aba86:;
  /* 125aba86 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aba8a jge 0x125abad9 */
  if ((C.sf==C.of)) goto L_125abad9;
  /* 125aba8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125aba8f cmp dword ptr [ecx*4 + 0x125d1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x125d1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aba97 je 0x125abad7 */
  if (C.zf) goto L_125abad7;
  /* 125aba99 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125aba9d je 0x125abad7 */
  if (C.zf) goto L_125abad7;
  /* 125aba9f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abaa3 je 0x125abad7 */
  if (C.zf) goto L_125abad7;
  /* 125abaa5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abaa9 je 0x125abad7 */
  if (C.zf) goto L_125abad7;
  /* 125abaab cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abaaf je 0x125abad7 */
  if (C.zf) goto L_125abad7;
  /* 125abab1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125abab4 mov eax, dword ptr [edx*4 + 0x125d1b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125d1b40)));
  /* 125ababb push eax */
  push32((uint32_t)(EAX));
  /* 125ababc call dword ptr [0x125d63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63c4))), 0x125abac2u);
  /* 125abac2 push 2 */
  push32((uint32_t)(0x2u));
  /* 125abac4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125abac7 mov edx, dword ptr [ecx*4 + 0x125d1b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d1b40)));
  /* 125abace push edx */
  push32((uint32_t)(EDX));
  /* 125abacf call 0x125a8ba0 */
  push32(0x125abad4u); f_125a8ba0();
  /* 125abad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125abad7:;
  /* 125abad7 jmp 0x125aba7d */
  goto L_125aba7d;
L_125abad9:;
  /* 125abad9 mov eax, dword ptr [0x125d1b64] */
  EAX = (r32((uint32_t)(0x125d1b64)));
  /* 125abade push eax */
  push32((uint32_t)(EAX));
  /* 125abadf call dword ptr [0x125d63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63c4))), 0x125abae5u);
  /* 125abae5 mov ecx, dword ptr [0x125d1b74] */
  ECX = (r32((uint32_t)(0x125d1b74)));
  /* 125abaeb push ecx */
  push32((uint32_t)(ECX));
  /* 125abaec call dword ptr [0x125d63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63c4))), 0x125abaf2u);
  /* 125abaf2 mov edx, dword ptr [0x125d1b84] */
  EDX = (r32((uint32_t)(0x125d1b84)));
  /* 125abaf8 push edx */
  push32((uint32_t)(EDX));
  /* 125abaf9 call dword ptr [0x125d63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63c4))), 0x125abaffu);
  /* 125abaff mov eax, dword ptr [0x125d1b44] */
  EAX = (r32((uint32_t)(0x125d1b44)));
  /* 125abb04 push eax */
  push32((uint32_t)(EAX));
  /* 125abb05 call dword ptr [0x125d63c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63c4))), 0x125abb0bu);
  /* 125abb0b mov esp, ebp */
  ESP = (EBP);
  /* 125abb0d pop ebp */
  EBP = (pop32());
  /* 125abb0e ret  */
  ESPCHK(0x125aba70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb10 @ 0x125abb10 (151 bytes, 46 insns) */
void f_125abb10(void) {
  FTRACE(0x125abb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abb10 push ebp */
  push32((uint32_t)(EBP));
  /* 125abb11 mov ebp, esp */
  EBP = (ESP);
  /* 125abb13 push ecx */
  push32((uint32_t)(ECX));
  /* 125abb14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abb17 cmp dword ptr [eax*4 + 0x125d1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x125d1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abb1f jne 0x125abb92 */
  if (!C.zf) goto L_125abb92;
  /* 125abb21 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 125abb26 push 0x125cf600 */
  push32((uint32_t)(0x125cf600u));
  /* 125abb2b push 2 */
  push32((uint32_t)(0x2u));
  /* 125abb2d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 125abb2f call 0x125a8110 */
  push32(0x125abb34u); f_125a8110();
  /* 125abb34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abb37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125abb3a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abb3e jne 0x125abb4a */
  if (!C.zf) goto L_125abb4a;
  /* 125abb40 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 125abb42 call 0x125a7080 */
  push32(0x125abb47u); f_125a7080();
  /* 125abb47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125abb4a:;
  /* 125abb4a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 125abb4c call 0x125abb10 */
  push32(0x125abb51u); f_125abb10();
  /* 125abb51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abb54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abb57 cmp dword ptr [ecx*4 + 0x125d1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x125d1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abb5f jne 0x125abb7a */
  if (!C.zf) goto L_125abb7a;
  /* 125abb61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125abb64 push edx */
  push32((uint32_t)(EDX));
  /* 125abb65 call dword ptr [0x125d6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6348))), 0x125abb6bu);
  /* 125abb6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abb6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125abb71 mov dword ptr [eax*4 + 0x125d1b40], ecx */
  w32((uint32_t)(EAX*4 + 0x125d1b40), (ECX));
  /* 125abb78 jmp 0x125abb88 */
  goto L_125abb88;
L_125abb7a:;
  /* 125abb7a push 2 */
  push32((uint32_t)(0x2u));
  /* 125abb7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125abb7f push edx */
  push32((uint32_t)(EDX));
  /* 125abb80 call 0x125a8ba0 */
  push32(0x125abb85u); f_125a8ba0();
  /* 125abb85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125abb88:;
  /* 125abb88 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 125abb8a call 0x125abbb0 */
  push32(0x125abb8fu); f_125abbb0();
  /* 125abb8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125abb92:;
  /* 125abb92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abb95 mov ecx, dword ptr [eax*4 + 0x125d1b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x125d1b40)));
  /* 125abb9c push ecx */
  push32((uint32_t)(ECX));
  /* 125abb9d call dword ptr [0x125d6338] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6338))), 0x125abba3u);
  /* 125abba3 mov esp, ebp */
  ESP = (EBP);
  /* 125abba5 pop ebp */
  EBP = (pop32());
  /* 125abba6 ret  */
  ESPCHK(0x125abb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbb0 @ 0x125abbb0 (22 bytes, 8 insns) */
void f_125abbb0(void) {
  FTRACE(0x125abbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 125abbb1 mov ebp, esp */
  EBP = (ESP);
  /* 125abbb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abbb6 mov ecx, dword ptr [eax*4 + 0x125d1b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x125d1b40)));
  /* 125abbbd push ecx */
  push32((uint32_t)(ECX));
  /* 125abbbe call dword ptr [0x125d6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6334))), 0x125abbc4u);
  /* 125abbc4 pop ebp */
  EBP = (pop32());
  /* 125abbc5 ret  */
  ESPCHK(0x125abbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbd0 @ 0x125abbd0 (26 bytes, 10 insns) */
void f_125abbd0(void) {
  FTRACE(0x125abbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 125abbd1 mov ebp, esp */
  EBP = (ESP);
  /* 125abbd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abbd6 push eax */
  push32((uint32_t)(EAX));
  /* 125abbd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125abbd9 call dword ptr [0x125d633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d633c))), 0x125abbdfu);
  /* 125abbdf push 0xff */
  push32((uint32_t)(0xffu));
  /* 125abbe4 call dword ptr [0x125d6390] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6390))), 0x125abbeau);
  /* 125abbea pop ebp */
  EBP = (pop32());
  /* 125abbeb ret  */
  ESPCHK(0x125abbd0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x125abbf0 (446 bytes, 130 insns) */
void f_125abbf0(void) {
  FTRACE(0x125abbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 125abbf1 mov ebp, esp */
  EBP = (ESP);
  /* 125abbf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125abbf6 call 0x125a7b50 */
  push32(0x125abbfbu); f_125a7b50();
  /* 125abbfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125abbfe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abc01 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 125abc04 push ecx */
  push32((uint32_t)(ECX));
  /* 125abc05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abc08 push edx */
  push32((uint32_t)(EDX));
  /* 125abc09 call 0x125abdb0 */
  push32(0x125abc0eu); f_125abdb0();
  /* 125abc0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abc11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125abc14 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abc18 je 0x125abc23 */
  if (C.zf) goto L_125abc23;
  /* 125abc1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abc1d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abc21 jne 0x125abc32 */
  if (!C.zf) goto L_125abc32;
L_125abc23:;
  /* 125abc23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125abc26 push ecx */
  push32((uint32_t)(ECX));
  /* 125abc27 call dword ptr [0x125d632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d632c))), 0x125abc2du);
  /* 125abc2d jmp 0x125abdaa */
  goto L_125abdaa;
L_125abc32:;
  /* 125abc32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abc35 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abc39 jne 0x125abc4f */
  if (!C.zf) goto L_125abc4f;
  /* 125abc3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abc3e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 125abc45 mov eax, 1 */
  EAX = (0x1u);
  /* 125abc4a jmp 0x125abdaa */
  goto L_125abdaa;
L_125abc4f:;
  /* 125abc4f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abc52 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abc56 jne 0x125abc60 */
  if (!C.zf) goto L_125abc60;
  /* 125abc58 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125abc5b jmp 0x125abdaa */
  goto L_125abdaa;
L_125abc60:;
  /* 125abc60 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abc63 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125abc66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125abc69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abc6c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 125abc6f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125abc72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abc75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125abc78 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 125abc7b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abc7e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abc82 jne 0x125abd87 */
  if (!C.zf) goto L_125abd87;
  /* 125abc88 mov eax, dword ptr [0x125d1c78] */
  EAX = (r32((uint32_t)(0x125d1c78)));
  /* 125abc8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125abc90 jmp 0x125abc9b */
  goto L_125abc9b;
L_125abc92:;
  /* 125abc92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125abc95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125abc98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_125abc9b:;
  /* 125abc9b mov edx, dword ptr [0x125d1c78] */
  EDX = (r32((uint32_t)(0x125d1c78)));
  /* 125abca1 add edx, dword ptr [0x125d1c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125d1c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125abca7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abcaa jge 0x125abcc2 */
  if ((C.sf==C.of)) goto L_125abcc2;
  /* 125abcac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125abcaf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125abcb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abcb5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 125abcb8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 125abcc0 jmp 0x125abc92 */
  goto L_125abc92;
L_125abcc2:;
  /* 125abcc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abcc5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 125abcc8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125abccb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abcce cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abcd4 jne 0x125abce5 */
  if (!C.zf) goto L_125abce5;
  /* 125abcd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abcd9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 125abce0 jmp 0x125abd6d */
  goto L_125abd6d;
L_125abce5:;
  /* 125abce5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abce8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abcee jne 0x125abcfc */
  if (!C.zf) goto L_125abcfc;
  /* 125abcf0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abcf3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 125abcfa jmp 0x125abd6d */
  goto L_125abd6d;
L_125abcfc:;
  /* 125abcfc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abcff cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abd05 jne 0x125abd13 */
  if (!C.zf) goto L_125abd13;
  /* 125abd07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abd0a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 125abd11 jmp 0x125abd6d */
  goto L_125abd6d;
L_125abd13:;
  /* 125abd13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abd16 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abd1c jne 0x125abd2a */
  if (!C.zf) goto L_125abd2a;
  /* 125abd1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abd21 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 125abd28 jmp 0x125abd6d */
  goto L_125abd6d;
L_125abd2a:;
  /* 125abd2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abd2d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abd33 jne 0x125abd41 */
  if (!C.zf) goto L_125abd41;
  /* 125abd35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abd38 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 125abd3f jmp 0x125abd6d */
  goto L_125abd6d;
L_125abd41:;
  /* 125abd41 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abd44 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abd4a jne 0x125abd58 */
  if (!C.zf) goto L_125abd58;
  /* 125abd4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abd4f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 125abd56 jmp 0x125abd6d */
  goto L_125abd6d;
L_125abd58:;
  /* 125abd58 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abd5b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abd61 jne 0x125abd6d */
  if (!C.zf) goto L_125abd6d;
  /* 125abd63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abd66 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_125abd6d:;
  /* 125abd6d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abd70 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 125abd73 push edx */
  push32((uint32_t)(EDX));
  /* 125abd74 push 8 */
  push32((uint32_t)(0x8u));
  /* 125abd76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x125abd79u);
  /* 125abd79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abd7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abd7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125abd82 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 125abd85 jmp 0x125abd9e */
  goto L_125abd9e;
L_125abd87:;
  /* 125abd87 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abd8a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 125abd91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125abd94 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125abd97 push ecx */
  push32((uint32_t)(ECX));
  /* 125abd98 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x125abd9bu);
  /* 125abd9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125abd9e:;
  /* 125abd9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125abda1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125abda4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 125abda7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125abdaa:;
  /* 125abdaa mov esp, ebp */
  ESP = (EBP);
  /* 125abdac pop ebp */
  EBP = (pop32());
  /* 125abdad ret  */
  ESPCHK(0x125abbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb0 @ 0x125abdb0 (89 bytes, 35 insns) */
void f_125abdb0(void) {
  FTRACE(0x125abdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 125abdb1 mov ebp, esp */
  EBP = (ESP);
  /* 125abdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 125abdb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125abdb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125abdba:;
  /* 125abdba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125abdbd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125abdbf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abdc2 je 0x125abde2 */
  if (C.zf) goto L_125abde2;
  /* 125abdc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125abdc7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125abdca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125abdcd mov ecx, dword ptr [0x125d1c84] */
  ECX = (r32((uint32_t)(0x125d1c84)));
  /* 125abdd3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125abdd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125abdd9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125abddb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abdde jae 0x125abde2 */
  if (!C.cf) goto L_125abde2;
  /* 125abde0 jmp 0x125abdba */
  goto L_125abdba;
L_125abde2:;
  /* 125abde2 mov eax, dword ptr [0x125d1c84] */
  EAX = (r32((uint32_t)(0x125d1c84)));
  /* 125abde7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125abdea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125abded add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125abdef cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abdf2 jae 0x125abdfe */
  if (!C.cf) goto L_125abdfe;
  /* 125abdf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125abdf7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125abdf9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abdfc je 0x125abe02 */
  if (C.zf) goto L_125abe02;
L_125abdfe:;
  /* 125abdfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125abe00 jmp 0x125abe05 */
  goto L_125abe05;
L_125abe02:;
  /* 125abe02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125abe05:;
  /* 125abe05 mov esp, ebp */
  ESP = (EBP);
  /* 125abe07 pop ebp */
  EBP = (pop32());
  /* 125abe08 ret  */
  ESPCHK(0x125abdb0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x125abe10 (48 bytes, 17 insns) */
void f_125abe10(void) {
  FTRACE(0x125abe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abe10 push ebp */
  push32((uint32_t)(EBP));
  /* 125abe11 mov ebp, esp */
  EBP = (ESP);
  /* 125abe13 push ecx */
  push32((uint32_t)(ECX));
  /* 125abe14 push 9 */
  push32((uint32_t)(0x9u));
  /* 125abe16 call 0x125abb10 */
  push32(0x125abe1bu); f_125abb10();
  /* 125abe1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abe1e mov eax, dword ptr [0x125d3acc] */
  EAX = (r32((uint32_t)(0x125d3acc)));
  /* 125abe23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125abe26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abe29 mov dword ptr [0x125d3acc], ecx */
  w32((uint32_t)(0x125d3acc), (ECX));
  /* 125abe2f push 9 */
  push32((uint32_t)(0x9u));
  /* 125abe31 call 0x125abbb0 */
  push32(0x125abe36u); f_125abbb0();
  /* 125abe36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abe39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125abe3c mov esp, ebp */
  ESP = (EBP);
  /* 125abe3e pop ebp */
  EBP = (pop32());
  /* 125abe3f ret  */
  ESPCHK(0x125abe10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be40 @ 0x125abe40 (10 bytes, 5 insns) */
void f_125abe40(void) {
  FTRACE(0x125abe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abe40 push ebp */
  push32((uint32_t)(EBP));
  /* 125abe41 mov ebp, esp */
  EBP = (ESP);
  /* 125abe43 mov eax, dword ptr [0x125d3acc] */
  EAX = (r32((uint32_t)(0x125d3acc)));
  /* 125abe48 pop ebp */
  EBP = (pop32());
  /* 125abe49 ret  */
  ESPCHK(0x125abe40u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x125abe50 (45 bytes, 19 insns) */
void f_125abe50(void) {
  FTRACE(0x125abe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abe50 push ebp */
  push32((uint32_t)(EBP));
  /* 125abe51 mov ebp, esp */
  EBP = (ESP);
  /* 125abe53 push ecx */
  push32((uint32_t)(ECX));
  /* 125abe54 mov eax, dword ptr [0x125d3acc] */
  EAX = (r32((uint32_t)(0x125d3acc)));
  /* 125abe59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125abe5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abe60 je 0x125abe70 */
  if (C.zf) goto L_125abe70;
  /* 125abe62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abe65 push ecx */
  push32((uint32_t)(ECX));
  /* 125abe66 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x125abe69u);
  /* 125abe69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abe6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125abe6e jne 0x125abe74 */
  if (!C.zf) goto L_125abe74;
L_125abe70:;
  /* 125abe70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125abe72 jmp 0x125abe79 */
  goto L_125abe79;
L_125abe74:;
  /* 125abe74 mov eax, 1 */
  EAX = (0x1u);
L_125abe79:;
  /* 125abe79 mov esp, ebp */
  ESP = (EBP);
  /* 125abe7b pop ebp */
  EBP = (pop32());
  /* 125abe7c ret  */
  ESPCHK(0x125abe50u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x125abe80 (88 bytes, 40 insns) */
void f_125abe80(void) {
  FTRACE(0x125abe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abe80 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 125abe84 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 125abe88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125abe8a je 0x125abed3 */
  if (C.zf) goto L_125abed3;
  /* 125abe8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125abe8e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 125abe92 push edi */
  push32((uint32_t)(EDI));
  /* 125abe93 mov edi, ecx */
  EDI = (ECX);
  /* 125abe95 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abe98 jb 0x125abec7 */
  if (C.cf) goto L_125abec7;
  /* 125abe9a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125abe9c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 125abe9f je 0x125abea9 */
  if (C.zf) goto L_125abea9;
  /* 125abea1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_125abea3:;
  /* 125abea3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125abea5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125abea6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125abea7 jne 0x125abea3 */
  if (!C.zf) goto L_125abea3;
L_125abea9:;
  /* 125abea9 mov ecx, eax */
  ECX = (EAX);
  /* 125abeab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 125abeae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125abeb0 mov ecx, eax */
  ECX = (EAX);
  /* 125abeb2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 125abeb5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125abeb7 mov ecx, edx */
  ECX = (EDX);
  /* 125abeb9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125abebc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 125abebf je 0x125abec7 */
  if (C.zf) goto L_125abec7;
  /* 125abec1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 125abec3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125abec5 je 0x125abecd */
  if (C.zf) goto L_125abecd;
L_125abec7:;
  /* 125abec7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 125abec9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125abeca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 125abecb jne 0x125abec7 */
  if (!C.zf) goto L_125abec7;
L_125abecd:;
  /* 125abecd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125abed1 pop edi */
  EDI = (pop32());
  /* 125abed2 ret  */
  ESPCHK(0x125abe80u, _esp0);
  ESP += 4; return;
L_125abed3:;
  /* 125abed3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 125abed7 ret  */
  ESPCHK(0x125abe80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bee0 @ 0x125abee0 (23 bytes, 10 insns) */
void f_125abee0(void) {
  FTRACE(0x125abee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abee0 push ebp */
  push32((uint32_t)(EBP));
  /* 125abee1 mov ebp, esp */
  EBP = (ESP);
  /* 125abee3 mov eax, dword ptr [0x125d3ac8] */
  EAX = (r32((uint32_t)(0x125d3ac8)));
  /* 125abee8 push eax */
  push32((uint32_t)(EAX));
  /* 125abee9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abeec push ecx */
  push32((uint32_t)(ECX));
  /* 125abeed call 0x125abf00 */
  push32(0x125abef2u); f_125abf00();
  /* 125abef2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abef5 pop ebp */
  EBP = (pop32());
  /* 125abef6 ret  */
  ESPCHK(0x125abee0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x125abf00 (87 bytes, 34 insns) */
void f_125abf00(void) {
  FTRACE(0x125abf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abf00 push ebp */
  push32((uint32_t)(EBP));
  /* 125abf01 mov ebp, esp */
  EBP = (ESP);
  /* 125abf03 push ecx */
  push32((uint32_t)(ECX));
  /* 125abf04 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abf08 jbe 0x125abf0e */
  if ((C.cf||C.zf)) goto L_125abf0e;
  /* 125abf0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125abf0c jmp 0x125abf53 */
  goto L_125abf53;
L_125abf0e:;
  /* 125abf0e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abf12 ja 0x125abf25 */
  if ((!C.cf&&!C.zf)) goto L_125abf25;
  /* 125abf14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abf17 push eax */
  push32((uint32_t)(EAX));
  /* 125abf18 call 0x125abf60 */
  push32(0x125abf1du); f_125abf60();
  /* 125abf1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abf20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125abf23 jmp 0x125abf2c */
  goto L_125abf2c;
L_125abf25:;
  /* 125abf25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125abf2c:;
  /* 125abf2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abf30 jne 0x125abf38 */
  if (!C.zf) goto L_125abf38;
  /* 125abf32 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abf36 jne 0x125abf3d */
  if (!C.zf) goto L_125abf3d;
L_125abf38:;
  /* 125abf38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125abf3b jmp 0x125abf53 */
  goto L_125abf53;
L_125abf3d:;
  /* 125abf3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abf40 push ecx */
  push32((uint32_t)(ECX));
  /* 125abf41 call 0x125abe50 */
  push32(0x125abf46u); f_125abe50();
  /* 125abf46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abf49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125abf4b jne 0x125abf51 */
  if (!C.zf) goto L_125abf51;
  /* 125abf4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125abf4f jmp 0x125abf53 */
  goto L_125abf53;
L_125abf51:;
  /* 125abf51 jmp 0x125abf0e */
  goto L_125abf0e;
L_125abf53:;
  /* 125abf53 mov esp, ebp */
  ESP = (EBP);
  /* 125abf55 pop ebp */
  EBP = (pop32());
  /* 125abf56 ret  */
  ESPCHK(0x125abf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf60 @ 0x125abf60 (109 bytes, 37 insns) */
void f_125abf60(void) {
  FTRACE(0x125abf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abf60 push ebp */
  push32((uint32_t)(EBP));
  /* 125abf61 mov ebp, esp */
  EBP = (ESP);
  /* 125abf63 push ecx */
  push32((uint32_t)(ECX));
  /* 125abf64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abf67 cmp eax, dword ptr [0x125d1c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abf6d ja 0x125abf9d */
  if ((!C.cf&&!C.zf)) goto L_125abf9d;
  /* 125abf6f push 9 */
  push32((uint32_t)(0x9u));
  /* 125abf71 call 0x125abb10 */
  push32(0x125abf76u); f_125abb10();
  /* 125abf76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abf79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abf7c push ecx */
  push32((uint32_t)(ECX));
  /* 125abf7d call 0x125acaa0 */
  push32(0x125abf82u); f_125acaa0();
  /* 125abf82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abf85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125abf88 push 9 */
  push32((uint32_t)(0x9u));
  /* 125abf8a call 0x125abbb0 */
  push32(0x125abf8fu); f_125abbb0();
  /* 125abf8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abf92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abf96 je 0x125abf9d */
  if (C.zf) goto L_125abf9d;
  /* 125abf98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125abf9b jmp 0x125abfc9 */
  goto L_125abfc9;
L_125abf9d:;
  /* 125abf9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abfa1 jne 0x125abfaa */
  if (!C.zf) goto L_125abfaa;
  /* 125abfa3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_125abfaa:;
  /* 125abfaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abfad add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125abfb0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 125abfb3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125abfb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125abfb9 push eax */
  push32((uint32_t)(EAX));
  /* 125abfba push 0 */
  push32((uint32_t)(0x0u));
  /* 125abfbc mov ecx, dword ptr [0x125d528c] */
  ECX = (r32((uint32_t)(0x125d528c)));
  /* 125abfc2 push ecx */
  push32((uint32_t)(ECX));
  /* 125abfc3 call dword ptr [0x125d6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6328))), 0x125abfc9u);
L_125abfc9:;
  /* 125abfc9 mov esp, ebp */
  ESP = (EBP);
  /* 125abfcb pop ebp */
  EBP = (pop32());
  /* 125abfcc ret  */
  ESPCHK(0x125abf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfd0 @ 0x125abfd0 (10 bytes, 5 insns) */
void f_125abfd0(void) {
  FTRACE(0x125abfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 125abfd1 mov ebp, esp */
  EBP = (ESP);
  /* 125abfd3 mov eax, 1 */
  EAX = (0x1u);
  /* 125abfd8 pop ebp */
  EBP = (pop32());
  /* 125abfd9 ret  */
  ESPCHK(0x125abfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfe0 @ 0x125abfe0 (173 bytes, 59 insns) */
void f_125abfe0(void) {
  FTRACE(0x125abfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125abfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 125abfe1 mov ebp, esp */
  EBP = (ESP);
  /* 125abfe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125abfe6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125abfea jbe 0x125abff3 */
  if ((C.cf||C.zf)) goto L_125abff3;
  /* 125abfec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125abfee jmp 0x125ac089 */
  goto L_125ac089;
L_125abff3:;
  /* 125abff3 push 9 */
  push32((uint32_t)(0x9u));
  /* 125abff5 call 0x125abb10 */
  push32(0x125abffau); f_125abb10();
  /* 125abffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125abffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac000 push eax */
  push32((uint32_t)(EAX));
  /* 125ac001 call 0x125ac410 */
  push32(0x125ac006u); f_125ac410();
  /* 125ac006 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac009 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125ac00c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac010 je 0x125ac051 */
  if (C.zf) goto L_125ac051;
  /* 125ac012 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125ac019 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac01c cmp ecx, dword ptr [0x125d1c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac022 ja 0x125ac042 */
  if ((!C.cf&&!C.zf)) goto L_125ac042;
  /* 125ac024 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac027 push edx */
  push32((uint32_t)(EDX));
  /* 125ac028 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac02b push eax */
  push32((uint32_t)(EAX));
  /* 125ac02c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125ac02f push ecx */
  push32((uint32_t)(ECX));
  /* 125ac030 call 0x125ad2e0 */
  push32(0x125ac035u); f_125ad2e0();
  /* 125ac035 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125ac03a je 0x125ac042 */
  if (C.zf) goto L_125ac042;
  /* 125ac03c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac03f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125ac042:;
  /* 125ac042 push 9 */
  push32((uint32_t)(0x9u));
  /* 125ac044 call 0x125abbb0 */
  push32(0x125ac049u); f_125abbb0();
  /* 125ac049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac04c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125ac04f jmp 0x125ac089 */
  goto L_125ac089;
L_125ac051:;
  /* 125ac051 push 9 */
  push32((uint32_t)(0x9u));
  /* 125ac053 call 0x125abbb0 */
  push32(0x125ac058u); f_125abbb0();
  /* 125ac058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac05b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125ac05f jne 0x125ac068 */
  if (!C.zf) goto L_125ac068;
  /* 125ac061 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_125ac068:;
  /* 125ac068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac06b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125ac06e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 125ac070 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 125ac073 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125ac076 push ecx */
  push32((uint32_t)(ECX));
  /* 125ac077 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125ac07a push edx */
  push32((uint32_t)(EDX));
  /* 125ac07b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 125ac07d mov eax, dword ptr [0x125d528c] */
  EAX = (r32((uint32_t)(0x125d528c)));
  /* 125ac082 push eax */
  push32((uint32_t)(EAX));
  /* 125ac083 call dword ptr [0x125d6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6330))), 0x125ac089u);
L_125ac089:;
  /* 125ac089 mov esp, ebp */
  ESP = (EBP);
  /* 125ac08b pop ebp */
  EBP = (pop32());
  /* 125ac08c ret  */
  ESPCHK(0x125abfe0u, _esp0);
  ESP += 4; return;
}

